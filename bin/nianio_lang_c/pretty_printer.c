
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "pretty_printer.h"
#include "ov.h"
#include "string.h"
#include "array.h"
#include "ptd.h"
#include "nast.h"
#include "wprinter.h"
#include "boolean_t.h"
#line 1 "pretty_printer.nl"

static ImmT *__const__f = NULL;
void pretty_printer_priv0__const__init();
ImmT pretty_printer_priv0__const__sim(int __nr);
ImmT pretty_printer_priv0__const__sing(int __nr);

ImmT pretty_printer_priv0state_print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT pretty_printer_priv0print_fun_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0join_print_var_decl(ImmT ___nl__0);
ImmT pretty_printer_priv0print_var_decl(ImmT ___nl__0);
ImmT pretty_printer_priv0pind(ImmT ___nl__0);
ImmT pretty_printer_priv0join_print_hash_elem(ImmT ___nl__0);
ImmT pretty_printer_priv0print_hash_elem(ImmT ___nl__0);
ImmT pretty_printer_priv0print_variant(ImmT ___nl__0);
ImmT pretty_printer_priv0print_variant_case_decl(ImmT ___nl__0);
ImmT pretty_printer_priv0join_print_fun_arg(ImmT ___nl__0);
ImmT pretty_printer_priv0print_fun_arg(ImmT ___nl__0);
ImmT pretty_printer_priv0count_structs(ImmT ___nl__0);
ImmT pretty_printer_priv0get_compressed_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0print_st(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0get_fun_label(ImmT ___nl__0,ImmT ___nl__1);
ImmT pretty_printer_priv0string_to_nl(ImmT ___nl__0);
ImmT pretty_printer_priv0join_print_val(ImmT ___nl__0);
ImmT pretty_printer_priv0is_to_change_ov(ImmT ___nl__0);
ImmT pretty_printer_priv0print_val(ImmT ___nl__0);
ImmT pretty_printer_priv0print_cond_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5);
ImmT pretty_printer_priv0print_loop(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5);
ImmT pretty_printer_priv0print_loop_or_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5,ImmT ___nl__6);
ImmT pretty_printer_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1);
ImmT pretty_printer_priv0print_return(ImmT ___nl__0);
ImmT pretty_printer_priv0print_sim_value(ImmT ___nl__0);
ImmT pretty_printer_priv0print_break();
ImmT pretty_printer_priv0print_continue();
ImmT pretty_printer_priv0print_die(ImmT ___nl__0);
ImmT pretty_printer_priv0print_simple_statement(ImmT ___nl__0);
ImmT pretty_printer_priv0flush_sim_statement(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);


ImmT pretty_printer_priv0state_print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
pretty_printer_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 16
c_rt_lib0move(&___nl__2,___get_global_const(140));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 16
c_rt_lib0move(&___nl__3,___get_global_const(140));
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

ImmT pretty_printer0print_module_to_str0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "pretty_printer0print_module_to_str");
return pretty_printer0print_module_to_str(_tab[0]);}
ImmT pretty_printer0print_module_to_str(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
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
#line 20
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 20
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(1, ___get_global_const(140), ___nl__2));
#line 20
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0move(&___nl__2,___get_global_const(924));
#line 21
c_rt_lib0move(&___nl__3, string0lf());
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0move(&___nl__3,___get_global_const(925));
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0move(&___nl__3, string0lf());
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0move(&___nl__3,___get_global_const(924));
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0move(&___nl__3, string0lf());
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0move(&___nl__3, string0lf());
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0move(&___nl__3, string0lf());
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__2));
#line 21
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(126)));
#line 24
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 24
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 24
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 24
label_3:
#line 24
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 24
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 24
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 25
c_rt_lib0move(&___nl__9,___get_global_const(570));
#line 25
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 25
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 25
c_rt_lib0clear(&___nl__10);
#line 25
c_rt_lib0move(&___nl__10,___get_global_const(311));
#line 25
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 25
c_rt_lib0clear(&___nl__10);
#line 25
c_rt_lib0delete(array0push(&___nl__2, ___nl__9));
#line 25
c_rt_lib0clear(&___nl__9);
#line 26
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 26
goto label_3;
#line 26
label_1:
#line 26
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0clear(&___nl__4);
#line 26
c_rt_lib0clear(&___nl__5);
#line 26
c_rt_lib0clear(&___nl__6);
#line 26
c_rt_lib0clear(&___nl__7);
#line 26
c_rt_lib0clear(&___nl__8);
#line 27
c_rt_lib0move(&___nl__4, string0lf());
#line 27
c_rt_lib0move(&___nl__3, array0join(___nl__4, ___nl__2));
#line 27
c_rt_lib0clear(&___nl__4);
#line 27
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 27
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0move(&___nl__3, string0lf());
#line 28
c_rt_lib0move(&___nl__4, string0lf());
#line 28
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 28
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 28
c_rt_lib0clear(&___nl__3);
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(711)));
#line 29
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 29
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 29
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 29
label_6:
#line 29
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 29
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 29
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 30
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 30
c_rt_lib0delete(pretty_printer_priv0print_fun_def(&___nl__1, ___nl__4, ___nl__9));
#line 30
c_rt_lib0clear(&___nl__9);
#line 31
c_rt_lib0move(&___nl__9, string0lf());
#line 31
c_rt_lib0move(&___nl__10, string0lf());
#line 31
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 31
c_rt_lib0clear(&___nl__10);
#line 31
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__9));
#line 31
c_rt_lib0clear(&___nl__9);
#line 32
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 32
goto label_6;
#line 32
label_4:
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
c_rt_lib0clear(&___nl__8);
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(140)));
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
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
return NULL;
}

ImmT pretty_printer_priv0print_fun_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
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
#line 37
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(328)));
#line 38
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(329)));
#line 38
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 40
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(330)));
#line 40
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 40
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 40
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 40
nl_die_arg(___nl__5);
#line 38
label_2:
#line 39
c_rt_lib0move(&___nl__6,___get_global_const(579));
#line 39
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__2, ___nl__6));
#line 39
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 39
c_rt_lib0clear(&___nl__6);
#line 40
goto label_1;
#line 40
label_3:
#line 41
goto label_1;
#line 41
label_1:
#line 41
c_rt_lib0clear(&___nl__4);
#line 41
c_rt_lib0clear(&___nl__5);
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(76)));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 42
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0move(&___nl__6,___get_global_const(863));
#line 43
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 43
c_rt_lib0clear(&___nl__6);
#line 43
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 43
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__3));
#line 43
c_rt_lib0move(&___nl__9,___get_global_const(322));
#line 43
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 43
c_rt_lib0clear(&___nl__9);
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(4, ___nl__5, ___nl__6, ___nl__7, ___nl__8));
#line 43
c_rt_lib0clear(&___nl__5);
#line 43
c_rt_lib0clear(&___nl__6);
#line 43
c_rt_lib0clear(&___nl__7);
#line 43
c_rt_lib0clear(&___nl__8);
#line 49
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 49
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 49
c_rt_lib0clear(&___nl__6);
#line 49
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 49
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 49
label_6:
#line 49
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__6, ___nl__5));
#line 49
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 50
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 50
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__6));
#line 51
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(257)));
#line 51
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(5)));
#line 51
if(c_rt_lib0check_true_native(___nl__11)){ goto label_8;}
#line 53
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(37)));
#line 53
if(c_rt_lib0check_true_native(___nl__11)){ goto label_9;}
#line 53
c_rt_lib0move(&___nl__11,___get_global_const(74));
#line 53
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 53
nl_die_arg(___nl__11);
#line 51
label_8:
#line 52
c_rt_lib0move(&___nl__14,___get_global_const(5));
#line 52
c_rt_lib0move(&___nl__13, wprinter0build_sim(___nl__14));
#line 52
c_rt_lib0clear(&___nl__14);
#line 52
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 52
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 52
c_rt_lib0clear(&___nl__13);
#line 52
c_rt_lib0clear(&___nl__14);
#line 52
c_rt_lib0delete(array0append(&___nl__4, ___nl__12));
#line 52
c_rt_lib0clear(&___nl__12);
#line 53
goto label_7;
#line 53
label_9:
#line 54
goto label_7;
#line 54
label_7:
#line 54
c_rt_lib0clear(&___nl__10);
#line 54
c_rt_lib0clear(&___nl__11);
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(76)));
#line 55
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 55
c_rt_lib0clear(&___nl__11);
#line 55
c_rt_lib0delete(array0push(&___nl__4, ___nl__10));
#line 55
c_rt_lib0clear(&___nl__10);
#line 56
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 56
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(72)));
#line 56
if(c_rt_lib0check_true_native(___nl__11)){ goto label_11;}
#line 63
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(37)));
#line 63
if(c_rt_lib0check_true_native(___nl__11)){ goto label_12;}
#line 63
c_rt_lib0move(&___nl__11,___get_global_const(74));
#line 63
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 63
nl_die_arg(___nl__11);
#line 56
label_11:
#line 56
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__10, ___get_global_const(72)));
#line 57
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 57
c_rt_lib0move(&___nl__16,___get_global_const(371));
#line 57
c_rt_lib0move(&___nl__15, wprinter0build_sim(___nl__16));
#line 57
c_rt_lib0clear(&___nl__16);
#line 57
c_rt_lib0move(&___nl__16, wprinter0get_sep());
#line 57
c_rt_lib0move(&___nl__17, pretty_printer_priv0print_val(___nl__12));
#line 57
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(4, ___nl__14, ___nl__15, ___nl__16, ___nl__17));
#line 57
c_rt_lib0clear(&___nl__14);
#line 57
c_rt_lib0clear(&___nl__15);
#line 57
c_rt_lib0clear(&___nl__16);
#line 57
c_rt_lib0clear(&___nl__17);
#line 57
c_rt_lib0delete(array0append(&___nl__4, ___nl__13));
#line 57
c_rt_lib0clear(&___nl__13);
#line 57
c_rt_lib0clear(&___nl__12);
#line 63
goto label_10;
#line 63
label_12:
#line 64
goto label_10;
#line 64
label_10:
#line 64
c_rt_lib0clear(&___nl__10);
#line 64
c_rt_lib0clear(&___nl__11);
#line 65
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 65
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 65
c_rt_lib0clear(&___nl__11);
#line 65
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 65
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 65
c_rt_lib0clear(&___nl__11);
#line 65
c_rt_lib0move(&___nl__10, c_rt_lib0num_ne(___nl__6, ___nl__10));
#line 65
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 65
if(c_rt_lib0check_true_native(___nl__10)){ goto label_14;}
#line 65
c_rt_lib0move(&___nl__13,___get_global_const(172));
#line 65
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 65
c_rt_lib0clear(&___nl__13);
#line 65
c_rt_lib0move(&___nl__13, wprinter0get_sep());
#line 65
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__12, ___nl__13));
#line 65
c_rt_lib0clear(&___nl__12);
#line 65
c_rt_lib0clear(&___nl__13);
#line 65
c_rt_lib0delete(array0append(&___nl__4, ___nl__11));
#line 65
c_rt_lib0clear(&___nl__11);
#line 65
goto label_14;
#line 65
label_14:
#line 65
c_rt_lib0clear(&___nl__10);
#line 65
c_rt_lib0clear(&___nl__9);
#line 68
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 68
goto label_6;
#line 68
label_4:
#line 68
c_rt_lib0clear(&___nl__5);
#line 68
c_rt_lib0clear(&___nl__6);
#line 68
c_rt_lib0clear(&___nl__7);
#line 68
c_rt_lib0clear(&___nl__8);
#line 69
c_rt_lib0move(&___nl__6,___get_global_const(176));
#line 69
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 69
c_rt_lib0clear(&___nl__6);
#line 69
c_rt_lib0delete(array0push(&___nl__4, ___nl__5));
#line 69
c_rt_lib0clear(&___nl__5);
#line 70
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(712)));
#line 70
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(72)));
#line 70
if(c_rt_lib0check_true_native(___nl__6)){ goto label_16;}
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(37)));
#line 77
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 77
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 77
nl_die_arg(___nl__6);
#line 70
label_16:
#line 70
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(72)));
#line 71
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 71
c_rt_lib0move(&___nl__11,___get_global_const(371));
#line 71
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 71
c_rt_lib0clear(&___nl__11);
#line 71
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 71
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_sim_value(___nl__7));
#line 71
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(4, ___nl__9, ___nl__10, ___nl__11, ___nl__12));
#line 71
c_rt_lib0clear(&___nl__9);
#line 71
c_rt_lib0clear(&___nl__10);
#line 71
c_rt_lib0clear(&___nl__11);
#line 71
c_rt_lib0clear(&___nl__12);
#line 71
c_rt_lib0delete(array0append(&___nl__4, ___nl__8));
#line 71
c_rt_lib0clear(&___nl__8);
#line 71
c_rt_lib0clear(&___nl__7);
#line 77
goto label_15;
#line 77
label_17:
#line 78
goto label_15;
#line 78
label_15:
#line 78
c_rt_lib0clear(&___nl__5);
#line 78
c_rt_lib0clear(&___nl__6);
#line 79
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__4));
#line 79
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 79
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__5, ___nl__6));
#line 79
c_rt_lib0clear(&___nl__6);
#line 79
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(209)));
#line 80
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 80
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__5, ___nl__6));
#line 80
c_rt_lib0clear(&___nl__6);
#line 80
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0clear(&___nl__3);
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
c_rt_lib0clear(&___nl__1);
#line 80
c_rt_lib0clear(&___nl__2);
#line 80
return NULL;
}

ImmT pretty_printer_priv0join_print_var_decl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 83
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 84
c_rt_lib0move(&___nl__2, array0len(___nl__0));
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
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 85
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_var_decl(___nl__7));
#line 85
c_rt_lib0clear(&___nl__7);
#line 85
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 85
c_rt_lib0clear(&___nl__6);
#line 86
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 86
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 86
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 86
c_rt_lib0clear(&___nl__7);
#line 86
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 86
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 86
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 86
c_rt_lib0move(&___nl__9,___get_global_const(172));
#line 86
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 86
c_rt_lib0clear(&___nl__9);
#line 86
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 86
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 86
c_rt_lib0clear(&___nl__8);
#line 86
c_rt_lib0clear(&___nl__9);
#line 86
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 86
c_rt_lib0clear(&___nl__7);
#line 86
goto label_5;
#line 86
label_5:
#line 86
c_rt_lib0clear(&___nl__6);
#line 87
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 87
goto label_3;
#line 87
label_1:
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
c_rt_lib0clear(&___nl__3);
#line 87
c_rt_lib0clear(&___nl__4);
#line 87
c_rt_lib0clear(&___nl__5);
#line 88
c_rt_lib0clear(&___nl__0);
#line 88
return ___nl__1;
#line 88
c_rt_lib0clear(&___nl__1);
#line 88
c_rt_lib0clear(&___nl__0);
#line 88
return NULL;
}

ImmT pretty_printer_priv0print_var_decl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
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
#line 92
c_rt_lib0move(&___nl__3,___get_global_const(772));
#line 92
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 92
c_rt_lib0clear(&___nl__3);
#line 92
c_rt_lib0move(&___nl__3, wprinter0get_sep());
#line 92
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__2, ___nl__3));
#line 92
c_rt_lib0clear(&___nl__2);
#line 92
c_rt_lib0clear(&___nl__3);
#line 93
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 93
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(72)));
#line 93
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 101
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(37)));
#line 101
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 101
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 101
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 101
nl_die_arg(___nl__3);
#line 93
label_2:
#line 93
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(72)));
#line 94
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 94
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 94
c_rt_lib0clear(&___nl__7);
#line 94
c_rt_lib0move(&___nl__7, wprinter0get_sep());
#line 94
c_rt_lib0move(&___nl__9,___get_global_const(371));
#line 94
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 94
c_rt_lib0clear(&___nl__9);
#line 94
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 94
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__4));
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(5, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10));
#line 94
c_rt_lib0clear(&___nl__6);
#line 94
c_rt_lib0clear(&___nl__7);
#line 94
c_rt_lib0clear(&___nl__8);
#line 94
c_rt_lib0clear(&___nl__9);
#line 94
c_rt_lib0clear(&___nl__10);
#line 94
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0clear(&___nl__4);
#line 101
goto label_1;
#line 101
label_3:
#line 102
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 102
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 102
c_rt_lib0clear(&___nl__5);
#line 102
c_rt_lib0delete(array0push(&___nl__1, ___nl__4));
#line 102
c_rt_lib0clear(&___nl__4);
#line 103
goto label_1;
#line 103
label_1:
#line 103
c_rt_lib0clear(&___nl__2);
#line 103
c_rt_lib0clear(&___nl__3);
#line 104
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(641)));
#line 104
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(641)));
#line 104
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 111
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(37)));
#line 111
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 111
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 111
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 111
nl_die_arg(___nl__3);
#line 104
label_5:
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(641)));
#line 105
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 105
c_rt_lib0move(&___nl__8,___get_global_const(787));
#line 105
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 105
c_rt_lib0clear(&___nl__8);
#line 105
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 105
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__4));
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(4, ___nl__6, ___nl__7, ___nl__8, ___nl__9));
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
c_rt_lib0clear(&___nl__7);
#line 105
c_rt_lib0clear(&___nl__8);
#line 105
c_rt_lib0clear(&___nl__9);
#line 105
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
c_rt_lib0clear(&___nl__4);
#line 111
goto label_4;
#line 111
label_6:
#line 112
goto label_4;
#line 112
label_4:
#line 112
c_rt_lib0clear(&___nl__2);
#line 112
c_rt_lib0clear(&___nl__3);
#line 113
c_rt_lib0move(&___nl__2, wprinter0build_pretty_l(___nl__1));
#line 113
c_rt_lib0clear(&___nl__0);
#line 113
c_rt_lib0clear(&___nl__1);
#line 113
return ___nl__2;
#line 113
c_rt_lib0clear(&___nl__2);
#line 113
c_rt_lib0clear(&___nl__1);
#line 113
c_rt_lib0clear(&___nl__0);
#line 113
return NULL;
}

ImmT pretty_printer_priv0pind(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 117
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 118
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 118
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 118
label_3:
#line 118
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__0));
#line 118
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 118
c_rt_lib0move(&___nl__6,___get_global_const(158));
#line 118
c_rt_lib0move(&___nl__5, string0chr(___nl__6));
#line 118
c_rt_lib0clear(&___nl__6);
#line 118
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__5));
#line 118
c_rt_lib0clear(&___nl__5);
#line 118
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 118
goto label_3;
#line 118
label_1:
#line 118
c_rt_lib0clear(&___nl__2);
#line 118
c_rt_lib0clear(&___nl__3);
#line 118
c_rt_lib0clear(&___nl__4);
#line 119
c_rt_lib0clear(&___nl__0);
#line 119
return ___nl__1;
#line 119
c_rt_lib0clear(&___nl__1);
#line 119
c_rt_lib0clear(&___nl__0);
#line 119
return NULL;
}

ImmT pretty_printer_priv0join_print_hash_elem(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 122
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 123
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 123
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 123
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 123
label_3:
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 123
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 124
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 124
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_hash_elem(___nl__7));
#line 124
c_rt_lib0clear(&___nl__7);
#line 124
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 124
c_rt_lib0clear(&___nl__6);
#line 125
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 125
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 125
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 125
c_rt_lib0clear(&___nl__7);
#line 125
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 125
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 125
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 125
c_rt_lib0move(&___nl__9,___get_global_const(172));
#line 125
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 125
c_rt_lib0clear(&___nl__9);
#line 125
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 125
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 125
c_rt_lib0clear(&___nl__8);
#line 125
c_rt_lib0clear(&___nl__9);
#line 125
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 125
c_rt_lib0clear(&___nl__7);
#line 125
goto label_5;
#line 125
label_5:
#line 125
c_rt_lib0clear(&___nl__6);
#line 126
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 126
goto label_3;
#line 126
label_1:
#line 126
c_rt_lib0clear(&___nl__2);
#line 126
c_rt_lib0clear(&___nl__3);
#line 126
c_rt_lib0clear(&___nl__4);
#line 126
c_rt_lib0clear(&___nl__5);
#line 127
c_rt_lib0clear(&___nl__0);
#line 127
return ___nl__1;
#line 127
c_rt_lib0clear(&___nl__1);
#line 127
c_rt_lib0clear(&___nl__0);
#line 127
return NULL;
}

ImmT pretty_printer_priv0print_hash_elem(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 131
c_rt_lib0move(&___nl__3,___get_global_const(216));
#line 131
c_rt_lib0move(&___nl__1, ov0is(___nl__2, ___nl__3));
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0clear(&___nl__2);
#line 131
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 131
c_rt_lib0move(&___nl__3,___get_global_const(215));
#line 131
c_rt_lib0move(&___nl__1, ov0is(___nl__2, ___nl__3));
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0clear(&___nl__2);
#line 131
label_3:
#line 131
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 131
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 132
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(279)));
#line 132
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__2, ___get_global_const(778)));
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 133
c_rt_lib0move(&___nl__5,___get_global_const(187));
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__2, ___nl__5));
#line 133
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 133
c_rt_lib0move(&___nl__3, pretty_printer_priv0get_compressed_fun_val(___nl__4, ___nl__5, ___nl__6));
#line 133
c_rt_lib0clear(&___nl__6);
#line 133
c_rt_lib0clear(&___nl__5);
#line 133
c_rt_lib0clear(&___nl__4);
#line 133
c_rt_lib0clear(&___nl__0);
#line 133
c_rt_lib0clear(&___nl__1);
#line 133
c_rt_lib0clear(&___nl__2);
#line 133
return ___nl__3;
#line 133
c_rt_lib0clear(&___nl__3);
#line 133
c_rt_lib0clear(&___nl__2);
#line 134
goto label_2;
#line 134
label_2:
#line 134
c_rt_lib0clear(&___nl__1);
#line 136
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(279)));
#line 136
c_rt_lib0move(&___nl__3, pretty_printer_priv0print_val(___nl__4));
#line 136
c_rt_lib0clear(&___nl__4);
#line 136
c_rt_lib0move(&___nl__4, wprinter0get_sep());
#line 136
c_rt_lib0move(&___nl__6,___get_global_const(170));
#line 136
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 136
c_rt_lib0clear(&___nl__6);
#line 136
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 136
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 136
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 136
c_rt_lib0clear(&___nl__8);
#line 136
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(5, ___nl__3, ___nl__4, ___nl__5, ___nl__6, ___nl__7));
#line 136
c_rt_lib0clear(&___nl__3);
#line 136
c_rt_lib0clear(&___nl__4);
#line 136
c_rt_lib0clear(&___nl__5);
#line 136
c_rt_lib0clear(&___nl__6);
#line 136
c_rt_lib0clear(&___nl__7);
#line 136
c_rt_lib0move(&___nl__1, wprinter0build_pretty_l(___nl__2));
#line 136
c_rt_lib0clear(&___nl__2);
#line 136
c_rt_lib0clear(&___nl__0);
#line 136
return ___nl__1;
#line 136
c_rt_lib0clear(&___nl__1);
#line 136
c_rt_lib0clear(&___nl__0);
#line 136
return NULL;
}

ImmT pretty_printer_priv0print_variant(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 146
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 146
c_rt_lib0move(&___nl__3,___get_global_const(6));
#line 146
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__3));
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 146
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 146
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(772)));
#line 146
c_rt_lib0move(&___nl__4,___get_global_const(754));
#line 146
c_rt_lib0move(&___nl__1, ov0is(___nl__3, ___nl__4));
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
label_3:
#line 146
c_rt_lib0clear(&___nl__2);
#line 146
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 146
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 147
c_rt_lib0move(&___nl__3,___get_global_const(877));
#line 147
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 147
c_rt_lib0clear(&___nl__3);
#line 147
c_rt_lib0clear(&___nl__0);
#line 147
c_rt_lib0clear(&___nl__1);
#line 147
return ___nl__2;
#line 147
c_rt_lib0clear(&___nl__2);
#line 148
goto label_4;
#line 148
label_2:
#line 148
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 148
c_rt_lib0move(&___nl__3,___get_global_const(7));
#line 148
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__3));
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 148
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 148
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(772)));
#line 148
c_rt_lib0move(&___nl__4,___get_global_const(754));
#line 148
c_rt_lib0move(&___nl__1, ov0is(___nl__3, ___nl__4));
#line 148
c_rt_lib0clear(&___nl__4);
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
label_5:
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 148
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 149
c_rt_lib0move(&___nl__3,___get_global_const(878));
#line 149
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 149
c_rt_lib0clear(&___nl__3);
#line 149
c_rt_lib0clear(&___nl__0);
#line 149
c_rt_lib0clear(&___nl__1);
#line 149
return ___nl__2;
#line 149
c_rt_lib0clear(&___nl__2);
#line 150
goto label_4;
#line 150
label_4:
#line 150
c_rt_lib0clear(&___nl__1);
#line 152
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(772)));
#line 152
c_rt_lib0move(&___nl__3,___get_global_const(215));
#line 152
c_rt_lib0move(&___nl__1, ov0is(___nl__2, ___nl__3));
#line 152
c_rt_lib0clear(&___nl__3);
#line 152
c_rt_lib0clear(&___nl__2);
#line 152
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 152
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(772)));
#line 152
c_rt_lib0move(&___nl__3,___get_global_const(216));
#line 152
c_rt_lib0move(&___nl__1, ov0is(___nl__2, ___nl__3));
#line 152
c_rt_lib0clear(&___nl__3);
#line 152
c_rt_lib0clear(&___nl__2);
#line 152
label_8:
#line 152
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 152
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 153
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(772)));
#line 153
c_rt_lib0move(&___nl__4,___get_global_const(371));
#line 153
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 153
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 153
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0move(&___nl__5,___get_global_const(322));
#line 153
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 153
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0move(&___nl__5,___get_global_const(176));
#line 153
c_rt_lib0move(&___nl__2, pretty_printer_priv0get_compressed_fun_val(___nl__3, ___nl__4, ___nl__5));
#line 153
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0clear(&___nl__4);
#line 153
c_rt_lib0clear(&___nl__3);
#line 153
c_rt_lib0clear(&___nl__0);
#line 153
c_rt_lib0clear(&___nl__1);
#line 153
return ___nl__2;
#line 153
c_rt_lib0clear(&___nl__2);
#line 154
goto label_7;
#line 154
label_7:
#line 154
c_rt_lib0clear(&___nl__1);
#line 156
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 157
c_rt_lib0move(&___nl__3,___get_global_const(371));
#line 157
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 157
c_rt_lib0clear(&___nl__4);
#line 157
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 157
c_rt_lib0clear(&___nl__3);
#line 157
c_rt_lib0delete(array0push(&___nl__1, ___nl__2));
#line 157
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(772)));
#line 158
c_rt_lib0move(&___nl__4,___get_global_const(754));
#line 158
c_rt_lib0move(&___nl__2, ov0is(___nl__3, ___nl__4));
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 158
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 158
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 158
c_rt_lib0move(&___nl__5,___get_global_const(322));
#line 158
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 158
c_rt_lib0clear(&___nl__5);
#line 158
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(772)));
#line 158
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__6));
#line 158
c_rt_lib0clear(&___nl__6);
#line 158
c_rt_lib0move(&___nl__7,___get_global_const(176));
#line 158
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 158
c_rt_lib0clear(&___nl__7);
#line 158
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(3, ___nl__4, ___nl__5, ___nl__6));
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0clear(&___nl__5);
#line 158
c_rt_lib0clear(&___nl__6);
#line 158
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
goto label_10;
#line 158
label_10:
#line 158
c_rt_lib0clear(&___nl__2);
#line 161
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 161
c_rt_lib0clear(&___nl__0);
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
return ___nl__2;
#line 161
c_rt_lib0clear(&___nl__2);
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
c_rt_lib0clear(&___nl__0);
#line 161
return NULL;
}

ImmT pretty_printer_priv0print_variant_case_decl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 165
c_rt_lib0move(&___nl__3,___get_global_const(371));
#line 165
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 165
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 165
c_rt_lib0clear(&___nl__4);
#line 165
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 165
c_rt_lib0clear(&___nl__3);
#line 165
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 165
c_rt_lib0clear(&___nl__2);
#line 166
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(641)));
#line 166
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(641)));
#line 166
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 168
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(37)));
#line 168
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 168
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 168
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 168
nl_die_arg(___nl__3);
#line 166
label_2:
#line 166
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(641)));
#line 167
c_rt_lib0move(&___nl__7,___get_global_const(322));
#line 167
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 167
c_rt_lib0clear(&___nl__7);
#line 167
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_var_decl(___nl__4));
#line 167
c_rt_lib0move(&___nl__9,___get_global_const(176));
#line 167
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 167
c_rt_lib0clear(&___nl__9);
#line 167
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(3, ___nl__6, ___nl__7, ___nl__8));
#line 167
c_rt_lib0clear(&___nl__6);
#line 167
c_rt_lib0clear(&___nl__7);
#line 167
c_rt_lib0clear(&___nl__8);
#line 167
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 167
c_rt_lib0clear(&___nl__5);
#line 167
c_rt_lib0clear(&___nl__4);
#line 168
goto label_1;
#line 168
label_3:
#line 169
goto label_1;
#line 169
label_1:
#line 169
c_rt_lib0clear(&___nl__2);
#line 169
c_rt_lib0clear(&___nl__3);
#line 170
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 170
c_rt_lib0clear(&___nl__0);
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
return ___nl__2;
#line 170
c_rt_lib0clear(&___nl__2);
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
c_rt_lib0clear(&___nl__0);
#line 170
return NULL;
}

ImmT pretty_printer_priv0join_print_fun_arg(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 174
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 175
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 175
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 175
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 175
label_3:
#line 175
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 175
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 176
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 176
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_fun_arg(___nl__7));
#line 176
c_rt_lib0clear(&___nl__7);
#line 176
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 176
c_rt_lib0clear(&___nl__6);
#line 177
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 177
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 177
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 177
c_rt_lib0clear(&___nl__7);
#line 177
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 177
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 177
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 177
c_rt_lib0move(&___nl__9,___get_global_const(172));
#line 177
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 177
c_rt_lib0clear(&___nl__9);
#line 177
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 177
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 177
c_rt_lib0clear(&___nl__8);
#line 177
c_rt_lib0clear(&___nl__9);
#line 177
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 177
c_rt_lib0clear(&___nl__7);
#line 177
goto label_5;
#line 177
label_5:
#line 177
c_rt_lib0clear(&___nl__6);
#line 178
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 178
goto label_3;
#line 178
label_1:
#line 178
c_rt_lib0clear(&___nl__2);
#line 178
c_rt_lib0clear(&___nl__3);
#line 178
c_rt_lib0clear(&___nl__4);
#line 178
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0clear(&___nl__0);
#line 179
return ___nl__1;
#line 179
c_rt_lib0clear(&___nl__1);
#line 179
c_rt_lib0clear(&___nl__0);
#line 179
return NULL;
}

ImmT pretty_printer_priv0print_fun_arg(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 183
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 184
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 184
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(5)));
#line 184
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 186
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(37)));
#line 186
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 186
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 186
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 186
nl_die_arg(___nl__3);
#line 184
label_2:
#line 185
c_rt_lib0move(&___nl__6,___get_global_const(5));
#line 185
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 185
c_rt_lib0clear(&___nl__6);
#line 185
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 185
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 185
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0clear(&___nl__6);
#line 185
c_rt_lib0delete(array0append(&___nl__1, ___nl__4));
#line 185
c_rt_lib0clear(&___nl__4);
#line 186
goto label_1;
#line 186
label_3:
#line 187
goto label_1;
#line 187
label_1:
#line 187
c_rt_lib0clear(&___nl__2);
#line 187
c_rt_lib0clear(&___nl__3);
#line 188
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 188
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_val(___nl__3));
#line 188
c_rt_lib0clear(&___nl__3);
#line 188
c_rt_lib0delete(array0push(&___nl__1, ___nl__2));
#line 188
c_rt_lib0clear(&___nl__2);
#line 189
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 189
c_rt_lib0clear(&___nl__0);
#line 189
c_rt_lib0clear(&___nl__1);
#line 189
return ___nl__2;
#line 189
c_rt_lib0clear(&___nl__2);
#line 189
c_rt_lib0clear(&___nl__1);
#line 189
c_rt_lib0clear(&___nl__0);
#line 189
return NULL;
}

ImmT pretty_printer_priv0count_structs(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 193
c_rt_lib0move(&___nl__1,___get_global_const(1));
#line 194
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 194
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 194
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 194
label_3:
#line 194
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 194
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 194
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 195
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(234)));
#line 195
c_rt_lib0move(&___nl__9,___get_global_const(215));
#line 195
c_rt_lib0move(&___nl__7, ov0is(___nl__8, ___nl__9));
#line 195
c_rt_lib0clear(&___nl__9);
#line 195
c_rt_lib0clear(&___nl__8);
#line 195
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 195
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(234)));
#line 195
c_rt_lib0move(&___nl__9,___get_global_const(216));
#line 195
c_rt_lib0move(&___nl__7, ov0is(___nl__8, ___nl__9));
#line 195
c_rt_lib0clear(&___nl__9);
#line 195
c_rt_lib0clear(&___nl__8);
#line 195
label_6:
#line 195
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 195
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 195
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 195
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__8));
#line 195
c_rt_lib0clear(&___nl__8);
#line 195
goto label_5;
#line 195
label_5:
#line 195
c_rt_lib0clear(&___nl__7);
#line 196
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 196
goto label_3;
#line 196
label_1:
#line 196
c_rt_lib0clear(&___nl__2);
#line 196
c_rt_lib0clear(&___nl__3);
#line 196
c_rt_lib0clear(&___nl__4);
#line 196
c_rt_lib0clear(&___nl__5);
#line 196
c_rt_lib0clear(&___nl__6);
#line 197
c_rt_lib0clear(&___nl__0);
#line 197
return ___nl__1;
#line 197
c_rt_lib0clear(&___nl__1);
#line 197
c_rt_lib0clear(&___nl__0);
#line 197
return NULL;
}

ImmT pretty_printer_priv0get_compressed_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 202
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 203
c_rt_lib0copy(&___nl__5, ___nl__2);
#line 204
label_2:
#line 205
c_rt_lib0move(&___nl__7,___get_global_const(215));
#line 205
c_rt_lib0move(&___nl__6, ov0is(___nl__0, ___nl__7));
#line 205
c_rt_lib0clear(&___nl__7);
#line 205
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 205
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 206
c_rt_lib0copy(&___nl__7, ___nl__0);
#line 206
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(215)));
#line 207
c_rt_lib0move(&___nl__8,___get_global_const(174));
#line 207
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__8));
#line 207
c_rt_lib0clear(&___nl__8);
#line 208
c_rt_lib0move(&___nl__8,___get_global_const(175));
#line 208
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 208
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 208
c_rt_lib0clear(&___nl__8);
#line 209
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 209
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 209
c_rt_lib0move(&___nl__8, c_rt_lib0num_ne(___nl__8, ___nl__9));
#line 209
c_rt_lib0clear(&___nl__9);
#line 209
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 209
if(c_rt_lib0check_true_native(___nl__8)){ goto label_6;}
#line 210
c_rt_lib0move(&___nl__9, pretty_printer_priv0join_print_val(___nl__7));
#line 210
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 210
c_rt_lib0clear(&___nl__9);
#line 211
c_rt_lib0clear(&___nl__6);
#line 211
c_rt_lib0clear(&___nl__7);
#line 211
c_rt_lib0clear(&___nl__8);
#line 211
goto label_1;
#line 212
goto label_6;
#line 212
label_6:
#line 212
c_rt_lib0clear(&___nl__8);
#line 214
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 214
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 214
c_rt_lib0clear(&___nl__9);
#line 214
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 214
c_rt_lib0clear(&___nl__8);
#line 214
c_rt_lib0clear(&___nl__7);
#line 215
goto label_3;
#line 215
label_4:
#line 215
c_rt_lib0move(&___nl__7,___get_global_const(216));
#line 215
c_rt_lib0move(&___nl__6, ov0is(___nl__0, ___nl__7));
#line 215
c_rt_lib0clear(&___nl__7);
#line 215
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 215
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 216
c_rt_lib0copy(&___nl__7, ___nl__0);
#line 216
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(216)));
#line 217
c_rt_lib0move(&___nl__8,___get_global_const(168));
#line 217
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__8));
#line 217
c_rt_lib0clear(&___nl__8);
#line 218
c_rt_lib0move(&___nl__8,___get_global_const(169));
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 218
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 218
c_rt_lib0clear(&___nl__8);
#line 219
c_rt_lib0move(&___nl__8, pretty_printer_priv0join_print_hash_elem(___nl__7));
#line 219
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 219
c_rt_lib0clear(&___nl__8);
#line 220
c_rt_lib0clear(&___nl__6);
#line 220
c_rt_lib0clear(&___nl__7);
#line 220
goto label_1;
#line 220
c_rt_lib0clear(&___nl__7);
#line 221
goto label_3;
#line 221
label_7:
#line 222
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__0));
#line 222
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 222
c_rt_lib0clear(&___nl__8);
#line 222
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 222
c_rt_lib0clear(&___nl__7);
#line 223
c_rt_lib0clear(&___nl__6);
#line 223
goto label_1;
#line 224
goto label_3;
#line 224
label_3:
#line 224
c_rt_lib0clear(&___nl__6);
#line 204
goto label_2;
#line 204
label_1:
#line 227
c_rt_lib0move(&___nl__6, wprinter0build_pretty_arr_decl(___nl__3, ___nl__4, ___nl__5));
#line 227
c_rt_lib0clear(&___nl__0);
#line 227
c_rt_lib0clear(&___nl__1);
#line 227
c_rt_lib0clear(&___nl__2);
#line 227
c_rt_lib0clear(&___nl__3);
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0clear(&___nl__5);
#line 227
return ___nl__6;
#line 227
c_rt_lib0clear(&___nl__6);
#line 227
c_rt_lib0clear(&___nl__3);
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0clear(&___nl__5);
#line 227
c_rt_lib0clear(&___nl__0);
#line 227
c_rt_lib0clear(&___nl__1);
#line 227
c_rt_lib0clear(&___nl__2);
#line 227
return NULL;
}

ImmT pretty_printer_priv0print_st(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 231
c_rt_lib0move(&___nl__3,___get_global_const(603));
#line 231
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__3));
#line 231
c_rt_lib0clear(&___nl__3);
#line 232
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__1, ___nl__2));
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
c_rt_lib0clear(&___nl__2);
#line 232
return NULL;
}

ImmT pretty_printer_priv0get_fun_label(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
pretty_printer_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 236
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 236
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 236
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 236
c_rt_lib0move(&___nl__2,___get_global_const(579));
#line 236
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 236
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 236
goto label_1;
#line 236
label_2:
#line 236
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 236
label_1:
#line 236
c_rt_lib0clear(&___nl__0);
#line 236
c_rt_lib0clear(&___nl__1);
#line 236
return ___nl__2;
#line 236
c_rt_lib0clear(&___nl__2);
#line 236
c_rt_lib0clear(&___nl__0);
#line 236
c_rt_lib0clear(&___nl__1);
#line 236
return NULL;
}

ImmT pretty_printer_priv0string_to_nl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 240
c_rt_lib0move(&___nl__2,___get_global_const(421));
#line 240
c_rt_lib0move(&___nl__3,___get_global_const(926));
#line 240
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 240
c_rt_lib0clear(&___nl__3);
#line 240
c_rt_lib0clear(&___nl__2);
#line 240
c_rt_lib0clear(&___nl__0);
#line 240
return ___nl__1;
#line 240
c_rt_lib0clear(&___nl__1);
#line 240
c_rt_lib0clear(&___nl__0);
#line 240
return NULL;
}

ImmT pretty_printer_priv0join_print_val(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 243
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 244
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 244
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 244
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 244
label_3:
#line 244
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 244
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 245
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 245
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 245
c_rt_lib0clear(&___nl__7);
#line 245
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 245
c_rt_lib0clear(&___nl__6);
#line 246
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 246
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 246
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 246
c_rt_lib0clear(&___nl__7);
#line 246
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 246
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 246
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 246
c_rt_lib0move(&___nl__9,___get_global_const(172));
#line 246
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 246
c_rt_lib0clear(&___nl__9);
#line 246
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 246
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 246
c_rt_lib0clear(&___nl__8);
#line 246
c_rt_lib0clear(&___nl__9);
#line 246
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 246
c_rt_lib0clear(&___nl__7);
#line 246
goto label_5;
#line 246
label_5:
#line 246
c_rt_lib0clear(&___nl__6);
#line 247
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 247
goto label_3;
#line 247
label_1:
#line 247
c_rt_lib0clear(&___nl__2);
#line 247
c_rt_lib0clear(&___nl__3);
#line 247
c_rt_lib0clear(&___nl__4);
#line 247
c_rt_lib0clear(&___nl__5);
#line 248
c_rt_lib0clear(&___nl__0);
#line 248
return ___nl__1;
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
c_rt_lib0clear(&___nl__0);
#line 248
return NULL;
}

ImmT pretty_printer_priv0is_to_change_ov(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 251
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 251
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(735)));
#line 251
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 251
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 251
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 251
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
return ___nl__2;
#line 251
c_rt_lib0clear(&___nl__2);
#line 251
goto label_2;
#line 251
label_2:
#line 251
c_rt_lib0clear(&___nl__1);
#line 252
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 252
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__1, ___get_global_const(735)));
#line 253
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 253
c_rt_lib0move(&___nl__2, array0len(___nl__4));
#line 253
c_rt_lib0clear(&___nl__4);
#line 253
c_rt_lib0move(&___nl__4,___get_global_const(137));
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__4));
#line 253
c_rt_lib0clear(&___nl__4);
#line 253
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 253
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(99)));
#line 253
c_rt_lib0move(&___nl__4,___get_global_const(695));
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 253
c_rt_lib0clear(&___nl__4);
#line 253
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(99)));
#line 253
c_rt_lib0move(&___nl__4,___get_global_const(927));
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 253
c_rt_lib0clear(&___nl__4);
#line 253
label_6:
#line 253
c_rt_lib0clear(&___nl__3);
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 253
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 254
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(76)));
#line 254
c_rt_lib0move(&___nl__5,___get_global_const(807));
#line 254
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 254
c_rt_lib0clear(&___nl__5);
#line 254
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 254
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(76)));
#line 254
c_rt_lib0move(&___nl__5,___get_global_const(805));
#line 254
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 254
c_rt_lib0clear(&___nl__5);
#line 254
label_10:
#line 254
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 254
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 254
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 254
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 254
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 254
c_rt_lib0clear(&___nl__5);
#line 254
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(234)));
#line 254
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(694)));
#line 254
label_9:
#line 254
c_rt_lib0clear(&___nl__4);
#line 254
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 254
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 255
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 255
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 255
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 255
c_rt_lib0clear(&___nl__5);
#line 255
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 255
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(694)));
#line 256
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(277)));
#line 256
c_rt_lib0move(&___nl__5, array0len(___nl__7));
#line 256
c_rt_lib0clear(&___nl__7);
#line 256
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 256
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 256
c_rt_lib0clear(&___nl__7);
#line 256
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 256
if(c_rt_lib0check_true_native(___nl__6)){ goto label_13;}
#line 256
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(277)));
#line 256
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 256
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 256
c_rt_lib0clear(&___nl__8);
#line 256
c_rt_lib0move(&___nl__8,___get_global_const(603));
#line 256
c_rt_lib0move(&___nl__5, string0index2(___nl__7, ___nl__8));
#line 256
c_rt_lib0clear(&___nl__8);
#line 256
c_rt_lib0clear(&___nl__7);
#line 256
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 256
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__5, ___nl__7));
#line 256
c_rt_lib0clear(&___nl__7);
#line 256
label_13:
#line 256
c_rt_lib0clear(&___nl__6);
#line 256
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 256
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 257
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 257
c_rt_lib0clear(&___nl__0);
#line 257
c_rt_lib0clear(&___nl__1);
#line 257
c_rt_lib0clear(&___nl__2);
#line 257
c_rt_lib0clear(&___nl__3);
#line 257
c_rt_lib0clear(&___nl__4);
#line 257
c_rt_lib0clear(&___nl__5);
#line 257
return ___nl__6;
#line 257
c_rt_lib0clear(&___nl__6);
#line 258
goto label_12;
#line 258
label_12:
#line 258
c_rt_lib0clear(&___nl__5);
#line 258
c_rt_lib0clear(&___nl__4);
#line 259
goto label_8;
#line 259
label_8:
#line 259
c_rt_lib0clear(&___nl__3);
#line 260
goto label_4;
#line 260
label_4:
#line 260
c_rt_lib0clear(&___nl__2);
#line 261
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 261
c_rt_lib0clear(&___nl__0);
#line 261
c_rt_lib0clear(&___nl__1);
#line 261
return ___nl__2;
#line 261
c_rt_lib0clear(&___nl__2);
#line 261
c_rt_lib0clear(&___nl__1);
#line 261
c_rt_lib0clear(&___nl__0);
#line 261
return NULL;
}

ImmT pretty_printer_priv0print_val(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
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
#line 264
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(294)));
#line 264
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 266
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(694)));
#line 266
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 276
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(778)));
#line 276
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 278
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(764)));
#line 278
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 280
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(772)));
#line 280
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 282
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(777)));
#line 282
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 284
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(776)));
#line 284
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 292
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(219)));
#line 292
if(c_rt_lib0check_true_native(___nl__1)){ goto label_9;}
#line 323
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(779)));
#line 323
if(c_rt_lib0check_true_native(___nl__1)){ goto label_10;}
#line 338
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(783)));
#line 338
if(c_rt_lib0check_true_native(___nl__1)){ goto label_11;}
#line 340
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(782)));
#line 340
if(c_rt_lib0check_true_native(___nl__1)){ goto label_12;}
#line 342
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(780)));
#line 342
if(c_rt_lib0check_true_native(___nl__1)){ goto label_13;}
#line 344
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(735)));
#line 344
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 369
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 369
if(c_rt_lib0check_true_native(___nl__1)){ goto label_15;}
#line 371
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(215)));
#line 371
if(c_rt_lib0check_true_native(___nl__1)){ goto label_16;}
#line 373
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(216)));
#line 373
if(c_rt_lib0check_true_native(___nl__1)){ goto label_17;}
#line 375
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(781)));
#line 375
if(c_rt_lib0check_true_native(___nl__1)){ goto label_18;}
#line 375
c_rt_lib0move(&___nl__1,___get_global_const(74));
#line 375
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 375
nl_die_arg(___nl__1);
#line 264
label_2:
#line 264
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(294)));
#line 265
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__2));
#line 265
c_rt_lib0clear(&___nl__0);
#line 265
c_rt_lib0clear(&___nl__1);
#line 265
c_rt_lib0clear(&___nl__2);
#line 265
return ___nl__3;
#line 265
c_rt_lib0clear(&___nl__3);
#line 265
c_rt_lib0clear(&___nl__2);
#line 266
goto label_1;
#line 266
label_3:
#line 266
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(694)));
#line 267
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 268
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(277)));
#line 268
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 268
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 268
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 268
label_21:
#line 268
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 268
if(c_rt_lib0check_true_native(___nl__9)){ goto label_19;}
#line 268
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 269
c_rt_lib0move(&___nl__10,___get_global_const(421));
#line 269
c_rt_lib0move(&___nl__11, pretty_printer_priv0string_to_nl(___nl__5));
#line 269
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 269
c_rt_lib0clear(&___nl__11);
#line 269
c_rt_lib0delete(array0push(&___nl__3, ___nl__10));
#line 269
c_rt_lib0clear(&___nl__10);
#line 270
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 270
goto label_21;
#line 270
label_19:
#line 270
c_rt_lib0clear(&___nl__4);
#line 270
c_rt_lib0clear(&___nl__5);
#line 270
c_rt_lib0clear(&___nl__6);
#line 270
c_rt_lib0clear(&___nl__7);
#line 270
c_rt_lib0clear(&___nl__8);
#line 270
c_rt_lib0clear(&___nl__9);
#line 271
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(826)));
#line 271
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(825)));
#line 271
if(c_rt_lib0check_true_native(___nl__5)){ goto label_23;}
#line 272
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(824)));
#line 272
if(c_rt_lib0check_true_native(___nl__5)){ goto label_24;}
#line 272
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 272
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 272
nl_die_arg(___nl__5);
#line 271
label_23:
#line 272
goto label_22;
#line 272
label_24:
#line 273
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 273
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 273
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 273
c_rt_lib0clear(&___nl__8);
#line 273
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 273
c_rt_lib0clear(&___nl__7);
#line 273
c_rt_lib0move(&___nl__7,___get_global_const(421));
#line 273
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 273
c_rt_lib0clear(&___nl__7);
#line 273
c_rt_lib0move(&___nl__8, array0len(___nl__3));
#line 273
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 273
c_rt_lib0clear(&___nl__9);
#line 273
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 273
c_rt_lib0array_set(&___nl__3, ___nl__8, ___nl__7);
#line 273
c_rt_lib0clear(&___nl__6);
#line 273
c_rt_lib0clear(&___nl__7);
#line 273
c_rt_lib0clear(&___nl__8);
#line 274
goto label_22;
#line 274
label_22:
#line 274
c_rt_lib0clear(&___nl__4);
#line 274
c_rt_lib0clear(&___nl__5);
#line 275
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(826)));
#line 275
c_rt_lib0move(&___nl__4, wprinter0build_str_arr(___nl__3, ___nl__5));
#line 275
c_rt_lib0clear(&___nl__5);
#line 275
c_rt_lib0clear(&___nl__0);
#line 275
c_rt_lib0clear(&___nl__1);
#line 275
c_rt_lib0clear(&___nl__2);
#line 275
c_rt_lib0clear(&___nl__3);
#line 275
return ___nl__4;
#line 275
c_rt_lib0clear(&___nl__4);
#line 275
c_rt_lib0clear(&___nl__3);
#line 275
c_rt_lib0clear(&___nl__2);
#line 276
goto label_1;
#line 276
label_4:
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(778)));
#line 277
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__2));
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
label_5:
#line 278
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(764)));
#line 279
c_rt_lib0move(&___nl__3, pretty_printer_priv0print_variant(___nl__2));
#line 279
c_rt_lib0clear(&___nl__0);
#line 279
c_rt_lib0clear(&___nl__1);
#line 279
c_rt_lib0clear(&___nl__2);
#line 279
return ___nl__3;
#line 279
c_rt_lib0clear(&___nl__3);
#line 279
c_rt_lib0clear(&___nl__2);
#line 280
goto label_1;
#line 280
label_6:
#line 280
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(772)));
#line 281
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__2));
#line 281
c_rt_lib0clear(&___nl__0);
#line 281
c_rt_lib0clear(&___nl__1);
#line 281
c_rt_lib0clear(&___nl__2);
#line 281
return ___nl__3;
#line 281
c_rt_lib0clear(&___nl__3);
#line 281
c_rt_lib0clear(&___nl__2);
#line 282
goto label_1;
#line 282
label_7:
#line 282
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(777)));
#line 283
c_rt_lib0move(&___nl__6,___get_global_const(322));
#line 283
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 283
c_rt_lib0clear(&___nl__6);
#line 283
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__2));
#line 283
c_rt_lib0move(&___nl__8,___get_global_const(176));
#line 283
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 283
c_rt_lib0clear(&___nl__8);
#line 283
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0clear(&___nl__6);
#line 283
c_rt_lib0clear(&___nl__7);
#line 283
c_rt_lib0move(&___nl__3, wprinter0build_pretty_a(___nl__4));
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0clear(&___nl__0);
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
c_rt_lib0clear(&___nl__2);
#line 283
return ___nl__3;
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
c_rt_lib0clear(&___nl__2);
#line 284
goto label_1;
#line 284
label_8:
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(776)));
#line 285
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(784)));
#line 285
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__6));
#line 285
c_rt_lib0clear(&___nl__6);
#line 285
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 285
c_rt_lib0move(&___nl__10,___get_global_const(928));
#line 285
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 285
c_rt_lib0clear(&___nl__10);
#line 285
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(785)));
#line 285
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 285
c_rt_lib0clear(&___nl__11);
#line 285
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__9, ___nl__10));
#line 285
c_rt_lib0clear(&___nl__9);
#line 285
c_rt_lib0clear(&___nl__10);
#line 285
c_rt_lib0move(&___nl__7, wprinter0build_pretty_op_l(___nl__8));
#line 285
c_rt_lib0clear(&___nl__8);
#line 285
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 285
c_rt_lib0move(&___nl__12,___get_global_const(929));
#line 285
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 285
c_rt_lib0clear(&___nl__12);
#line 285
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(786)));
#line 285
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_val(___nl__13));
#line 285
c_rt_lib0clear(&___nl__13);
#line 285
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__11, ___nl__12));
#line 285
c_rt_lib0clear(&___nl__11);
#line 285
c_rt_lib0clear(&___nl__12);
#line 285
c_rt_lib0move(&___nl__9, wprinter0build_pretty_op_l(___nl__10));
#line 285
c_rt_lib0clear(&___nl__10);
#line 285
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(5, ___nl__5, ___nl__6, ___nl__7, ___nl__8, ___nl__9));
#line 285
c_rt_lib0clear(&___nl__5);
#line 285
c_rt_lib0clear(&___nl__6);
#line 285
c_rt_lib0clear(&___nl__7);
#line 285
c_rt_lib0clear(&___nl__8);
#line 285
c_rt_lib0clear(&___nl__9);
#line 285
c_rt_lib0move(&___nl__3, wprinter0build_pretty_a(___nl__4));
#line 285
c_rt_lib0clear(&___nl__4);
#line 285
c_rt_lib0clear(&___nl__0);
#line 285
c_rt_lib0clear(&___nl__1);
#line 285
c_rt_lib0clear(&___nl__2);
#line 285
return ___nl__3;
#line 285
c_rt_lib0clear(&___nl__3);
#line 285
c_rt_lib0clear(&___nl__2);
#line 292
goto label_1;
#line 292
label_9:
#line 292
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(219)));
#line 293
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(401)));
#line 294
c_rt_lib0move(&___nl__4,___get_global_const(774));
#line 294
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 294
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 294
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 295
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(235)));
#line 295
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 295
c_rt_lib0clear(&___nl__10);
#line 295
c_rt_lib0move(&___nl__11,___get_global_const(174));
#line 295
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 295
c_rt_lib0clear(&___nl__11);
#line 295
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__9, ___nl__10));
#line 295
c_rt_lib0clear(&___nl__9);
#line 295
c_rt_lib0clear(&___nl__10);
#line 295
c_rt_lib0move(&___nl__7, wprinter0build_pretty_l(___nl__8));
#line 295
c_rt_lib0clear(&___nl__8);
#line 295
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(236)));
#line 295
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__9));
#line 295
c_rt_lib0clear(&___nl__9);
#line 295
c_rt_lib0move(&___nl__10,___get_global_const(175));
#line 295
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 295
c_rt_lib0clear(&___nl__10);
#line 295
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 295
c_rt_lib0clear(&___nl__7);
#line 295
c_rt_lib0clear(&___nl__8);
#line 295
c_rt_lib0clear(&___nl__9);
#line 295
c_rt_lib0move(&___nl__5, wprinter0build_pretty_a(___nl__6));
#line 295
c_rt_lib0clear(&___nl__6);
#line 295
c_rt_lib0clear(&___nl__0);
#line 295
c_rt_lib0clear(&___nl__1);
#line 295
c_rt_lib0clear(&___nl__2);
#line 295
c_rt_lib0clear(&___nl__3);
#line 295
c_rt_lib0clear(&___nl__4);
#line 295
return ___nl__5;
#line 295
c_rt_lib0clear(&___nl__5);
#line 300
goto label_25;
#line 300
label_26:
#line 300
c_rt_lib0move(&___nl__4,___get_global_const(773));
#line 300
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 300
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 300
if(c_rt_lib0check_true_native(___nl__4)){ goto label_27;}
#line 302
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(235)));
#line 302
c_rt_lib0move(&___nl__6, pretty_printer_priv0is_to_change_ov(___nl__7));
#line 302
c_rt_lib0clear(&___nl__7);
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 302
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 303
c_rt_lib0move(&___nl__10,___get_global_const(322));
#line 303
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 303
c_rt_lib0clear(&___nl__10);
#line 303
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(235)));
#line 303
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 303
c_rt_lib0clear(&___nl__11);
#line 303
c_rt_lib0move(&___nl__12,___get_global_const(176));
#line 303
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 303
c_rt_lib0clear(&___nl__12);
#line 303
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 303
c_rt_lib0clear(&___nl__9);
#line 303
c_rt_lib0clear(&___nl__10);
#line 303
c_rt_lib0clear(&___nl__11);
#line 303
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 303
c_rt_lib0clear(&___nl__8);
#line 303
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 303
c_rt_lib0clear(&___nl__7);
#line 304
goto label_28;
#line 304
label_29:
#line 305
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(235)));
#line 305
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 305
c_rt_lib0clear(&___nl__8);
#line 305
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 305
c_rt_lib0clear(&___nl__7);
#line 306
goto label_28;
#line 306
label_28:
#line 306
c_rt_lib0clear(&___nl__6);
#line 307
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__3));
#line 307
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(236)));
#line 307
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 307
c_rt_lib0clear(&___nl__10);
#line 307
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__5, ___nl__8, ___nl__9));
#line 307
c_rt_lib0clear(&___nl__8);
#line 307
c_rt_lib0clear(&___nl__9);
#line 307
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__7));
#line 307
c_rt_lib0clear(&___nl__7);
#line 307
c_rt_lib0clear(&___nl__0);
#line 307
c_rt_lib0clear(&___nl__1);
#line 307
c_rt_lib0clear(&___nl__2);
#line 307
c_rt_lib0clear(&___nl__3);
#line 307
c_rt_lib0clear(&___nl__4);
#line 307
c_rt_lib0clear(&___nl__5);
#line 307
return ___nl__6;
#line 307
c_rt_lib0clear(&___nl__6);
#line 307
c_rt_lib0clear(&___nl__5);
#line 312
goto label_25;
#line 312
label_27:
#line 313
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(235)));
#line 313
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 313
c_rt_lib0clear(&___nl__10);
#line 313
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 313
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__3));
#line 313
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 313
c_rt_lib0clear(&___nl__9);
#line 313
c_rt_lib0clear(&___nl__10);
#line 313
c_rt_lib0clear(&___nl__11);
#line 313
c_rt_lib0move(&___nl__7, wprinter0build_pretty_op_l(___nl__8));
#line 313
c_rt_lib0clear(&___nl__8);
#line 313
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 313
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(236)));
#line 313
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 313
c_rt_lib0clear(&___nl__10);
#line 313
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 313
c_rt_lib0clear(&___nl__7);
#line 313
c_rt_lib0clear(&___nl__8);
#line 313
c_rt_lib0clear(&___nl__9);
#line 313
c_rt_lib0move(&___nl__5, wprinter0build_pretty_op_l(___nl__6));
#line 313
c_rt_lib0clear(&___nl__6);
#line 313
c_rt_lib0clear(&___nl__0);
#line 313
c_rt_lib0clear(&___nl__1);
#line 313
c_rt_lib0clear(&___nl__2);
#line 313
c_rt_lib0clear(&___nl__3);
#line 313
c_rt_lib0clear(&___nl__4);
#line 313
return ___nl__5;
#line 313
c_rt_lib0clear(&___nl__5);
#line 322
goto label_25;
#line 322
label_25:
#line 322
c_rt_lib0clear(&___nl__4);
#line 322
c_rt_lib0clear(&___nl__3);
#line 322
c_rt_lib0clear(&___nl__2);
#line 323
goto label_1;
#line 323
label_10:
#line 323
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(779)));
#line 325
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(401)));
#line 325
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(221)));
#line 325
if(c_rt_lib0check_true_native(___nl__5)){ goto label_31;}
#line 327
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(220)));
#line 327
if(c_rt_lib0check_true_native(___nl__5)){ goto label_32;}
#line 327
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 327
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 327
nl_die_arg(___nl__5);
#line 325
label_31:
#line 326
c_rt_lib0move(&___nl__6,___get_global_const(807));
#line 326
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 326
c_rt_lib0clear(&___nl__6);
#line 327
goto label_30;
#line 327
label_32:
#line 328
c_rt_lib0move(&___nl__6,___get_global_const(805));
#line 328
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 328
c_rt_lib0clear(&___nl__6);
#line 329
goto label_30;
#line 329
label_30:
#line 329
c_rt_lib0clear(&___nl__4);
#line 329
c_rt_lib0clear(&___nl__5);
#line 330
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(235)));
#line 330
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 330
c_rt_lib0clear(&___nl__7);
#line 330
c_rt_lib0move(&___nl__7, wprinter0get_sep());
#line 330
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__3));
#line 330
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 330
c_rt_lib0move(&___nl__11,___get_global_const(371));
#line 330
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 330
c_rt_lib0clear(&___nl__11);
#line 330
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(821)));
#line 330
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 330
c_rt_lib0clear(&___nl__12);
#line 330
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(6, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 330
c_rt_lib0clear(&___nl__6);
#line 330
c_rt_lib0clear(&___nl__7);
#line 330
c_rt_lib0clear(&___nl__8);
#line 330
c_rt_lib0clear(&___nl__9);
#line 330
c_rt_lib0clear(&___nl__10);
#line 330
c_rt_lib0clear(&___nl__11);
#line 330
c_rt_lib0move(&___nl__4, wprinter0build_pretty_op_l(___nl__5));
#line 330
c_rt_lib0clear(&___nl__5);
#line 330
c_rt_lib0clear(&___nl__0);
#line 330
c_rt_lib0clear(&___nl__1);
#line 330
c_rt_lib0clear(&___nl__2);
#line 330
c_rt_lib0clear(&___nl__3);
#line 330
return ___nl__4;
#line 330
c_rt_lib0clear(&___nl__4);
#line 330
c_rt_lib0clear(&___nl__3);
#line 330
c_rt_lib0clear(&___nl__2);
#line 338
goto label_1;
#line 338
label_11:
#line 338
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(783)));
#line 339
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__2));
#line 339
c_rt_lib0move(&___nl__7,___get_global_const(138));
#line 339
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 339
c_rt_lib0clear(&___nl__7);
#line 339
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 339
c_rt_lib0clear(&___nl__5);
#line 339
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0move(&___nl__3, wprinter0build_pretty_op_l(___nl__4));
#line 339
c_rt_lib0clear(&___nl__4);
#line 339
c_rt_lib0clear(&___nl__0);
#line 339
c_rt_lib0clear(&___nl__1);
#line 339
c_rt_lib0clear(&___nl__2);
#line 339
return ___nl__3;
#line 339
c_rt_lib0clear(&___nl__3);
#line 339
c_rt_lib0clear(&___nl__2);
#line 340
goto label_1;
#line 340
label_12:
#line 340
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(782)));
#line 341
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__2));
#line 341
c_rt_lib0move(&___nl__7,___get_global_const(801));
#line 341
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 341
c_rt_lib0clear(&___nl__7);
#line 341
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 341
c_rt_lib0clear(&___nl__5);
#line 341
c_rt_lib0clear(&___nl__6);
#line 341
c_rt_lib0move(&___nl__3, wprinter0build_pretty_op_l(___nl__4));
#line 341
c_rt_lib0clear(&___nl__4);
#line 341
c_rt_lib0clear(&___nl__0);
#line 341
c_rt_lib0clear(&___nl__1);
#line 341
c_rt_lib0clear(&___nl__2);
#line 341
return ___nl__3;
#line 341
c_rt_lib0clear(&___nl__3);
#line 341
c_rt_lib0clear(&___nl__2);
#line 342
goto label_1;
#line 342
label_13:
#line 342
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(780)));
#line 343
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(401)));
#line 343
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 343
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(234)));
#line 343
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__6));
#line 343
c_rt_lib0clear(&___nl__6);
#line 343
c_rt_lib0move(&___nl__3, wprinter0build_pretty_bind(___nl__4, ___nl__5));
#line 343
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0clear(&___nl__4);
#line 343
c_rt_lib0clear(&___nl__0);
#line 343
c_rt_lib0clear(&___nl__1);
#line 343
c_rt_lib0clear(&___nl__2);
#line 343
return ___nl__3;
#line 343
c_rt_lib0clear(&___nl__3);
#line 343
c_rt_lib0clear(&___nl__2);
#line 344
goto label_1;
#line 344
label_14:
#line 344
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(735)));
#line 345
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(76)));
#line 345
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(99)));
#line 345
c_rt_lib0move(&___nl__3, pretty_printer_priv0get_fun_label(___nl__4, ___nl__5));
#line 345
c_rt_lib0clear(&___nl__5);
#line 345
c_rt_lib0clear(&___nl__4);
#line 345
c_rt_lib0move(&___nl__4,___get_global_const(322));
#line 345
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 345
c_rt_lib0clear(&___nl__4);
#line 346
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 346
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 346
c_rt_lib0clear(&___nl__5);
#line 346
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 346
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 346
c_rt_lib0clear(&___nl__5);
#line 346
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 346
if(c_rt_lib0check_true_native(___nl__4)){ goto label_34;}
#line 347
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 347
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 347
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 347
c_rt_lib0clear(&___nl__6);
#line 347
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(234)));
#line 348
c_rt_lib0move(&___nl__7,___get_global_const(216));
#line 348
c_rt_lib0move(&___nl__6, ov0is(___nl__5, ___nl__7));
#line 348
c_rt_lib0clear(&___nl__7);
#line 348
if(c_rt_lib0check_true_native(___nl__6)){ goto label_37;}
#line 348
c_rt_lib0move(&___nl__7,___get_global_const(215));
#line 348
c_rt_lib0move(&___nl__6, ov0is(___nl__5, ___nl__7));
#line 348
c_rt_lib0clear(&___nl__7);
#line 348
label_37:
#line 348
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 348
if(c_rt_lib0check_true_native(___nl__6)){ goto label_36;}
#line 349
c_rt_lib0move(&___nl__8,___get_global_const(176));
#line 349
c_rt_lib0move(&___nl__7, pretty_printer_priv0get_compressed_fun_val(___nl__5, ___nl__3, ___nl__8));
#line 349
c_rt_lib0clear(&___nl__8);
#line 349
c_rt_lib0clear(&___nl__0);
#line 349
c_rt_lib0clear(&___nl__1);
#line 349
c_rt_lib0clear(&___nl__2);
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0clear(&___nl__4);
#line 349
c_rt_lib0clear(&___nl__5);
#line 349
c_rt_lib0clear(&___nl__6);
#line 349
return ___nl__7;
#line 349
c_rt_lib0clear(&___nl__7);
#line 350
goto label_36;
#line 350
label_36:
#line 350
c_rt_lib0clear(&___nl__6);
#line 350
c_rt_lib0clear(&___nl__5);
#line 351
goto label_38;
#line 351
label_34:
#line 351
c_rt_lib0move(&___nl__4, pretty_printer_priv0is_to_change_ov(___nl__0));
#line 351
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 351
if(c_rt_lib0check_true_native(___nl__4)){ goto label_38;}
#line 352
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 352
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 352
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 352
c_rt_lib0clear(&___nl__9);
#line 352
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(234)));
#line 352
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 352
c_rt_lib0clear(&___nl__8);
#line 352
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 352
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(76)));
#line 352
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 352
c_rt_lib0clear(&___nl__10);
#line 352
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 352
c_rt_lib0move(&___nl__12,___get_global_const(371));
#line 352
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 352
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 352
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__13, ___nl__14));
#line 352
c_rt_lib0clear(&___nl__14);
#line 352
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(234)));
#line 352
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(694)));
#line 352
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(277)));
#line 352
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 352
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__13, ___nl__14));
#line 352
c_rt_lib0clear(&___nl__14);
#line 352
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 352
c_rt_lib0clear(&___nl__13);
#line 352
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 352
c_rt_lib0clear(&___nl__12);
#line 352
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(5, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 352
c_rt_lib0clear(&___nl__7);
#line 352
c_rt_lib0clear(&___nl__8);
#line 352
c_rt_lib0clear(&___nl__9);
#line 352
c_rt_lib0clear(&___nl__10);
#line 352
c_rt_lib0clear(&___nl__11);
#line 352
c_rt_lib0move(&___nl__5, wprinter0build_pretty_op_l(___nl__6));
#line 352
c_rt_lib0clear(&___nl__6);
#line 352
c_rt_lib0clear(&___nl__0);
#line 352
c_rt_lib0clear(&___nl__1);
#line 352
c_rt_lib0clear(&___nl__2);
#line 352
c_rt_lib0clear(&___nl__3);
#line 352
c_rt_lib0clear(&___nl__4);
#line 352
return ___nl__5;
#line 352
c_rt_lib0clear(&___nl__5);
#line 359
goto label_38;
#line 359
label_38:
#line 359
c_rt_lib0clear(&___nl__4);
#line 361
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__3));
#line 361
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 361
c_rt_lib0clear(&___nl__5);
#line 362
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 362
c_rt_lib0move(&___nl__5, pretty_printer_priv0join_print_fun_arg(___nl__6));
#line 362
c_rt_lib0clear(&___nl__6);
#line 362
c_rt_lib0delete(array0append(&___nl__4, ___nl__5));
#line 362
c_rt_lib0clear(&___nl__5);
#line 363
c_rt_lib0move(&___nl__6,___get_global_const(176));
#line 363
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 363
c_rt_lib0clear(&___nl__6);
#line 363
c_rt_lib0delete(array0push(&___nl__4, ___nl__5));
#line 363
c_rt_lib0clear(&___nl__5);
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 364
c_rt_lib0move(&___nl__5, pretty_printer_priv0count_structs(___nl__7));
#line 364
c_rt_lib0clear(&___nl__7);
#line 364
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 364
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 364
c_rt_lib0clear(&___nl__8);
#line 364
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 364
c_rt_lib0clear(&___nl__7);
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 364
if(c_rt_lib0check_true_native(___nl__6)){ goto label_42;}
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 364
c_rt_lib0move(&___nl__5, array0len(___nl__7));
#line 364
c_rt_lib0clear(&___nl__7);
#line 364
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 364
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__7));
#line 364
c_rt_lib0clear(&___nl__7);
#line 364
label_42:
#line 364
c_rt_lib0clear(&___nl__6);
#line 364
if(c_rt_lib0check_true_native(___nl__5)){ goto label_41;}
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 364
c_rt_lib0move(&___nl__5, array0len(___nl__7));
#line 364
c_rt_lib0clear(&___nl__7);
#line 364
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 364
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 364
c_rt_lib0clear(&___nl__7);
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 364
if(c_rt_lib0check_true_native(___nl__6)){ goto label_43;}
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 364
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 364
c_rt_lib0clear(&___nl__8);
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(234)));
#line 364
c_rt_lib0move(&___nl__8,___get_global_const(735));
#line 364
c_rt_lib0move(&___nl__5, ov0is(___nl__7, ___nl__8));
#line 364
c_rt_lib0clear(&___nl__8);
#line 364
c_rt_lib0clear(&___nl__7);
#line 364
label_43:
#line 364
c_rt_lib0clear(&___nl__6);
#line 364
label_41:
#line 364
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 364
if(c_rt_lib0check_true_native(___nl__5)){ goto label_40;}
#line 364
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__4));
#line 364
c_rt_lib0clear(&___nl__0);
#line 364
c_rt_lib0clear(&___nl__1);
#line 364
c_rt_lib0clear(&___nl__2);
#line 364
c_rt_lib0clear(&___nl__3);
#line 364
c_rt_lib0clear(&___nl__4);
#line 364
c_rt_lib0clear(&___nl__5);
#line 364
return ___nl__6;
#line 364
c_rt_lib0clear(&___nl__6);
#line 364
goto label_40;
#line 364
label_40:
#line 364
c_rt_lib0clear(&___nl__5);
#line 368
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__4));
#line 368
c_rt_lib0clear(&___nl__0);
#line 368
c_rt_lib0clear(&___nl__1);
#line 368
c_rt_lib0clear(&___nl__2);
#line 368
c_rt_lib0clear(&___nl__3);
#line 368
c_rt_lib0clear(&___nl__4);
#line 368
return ___nl__5;
#line 368
c_rt_lib0clear(&___nl__5);
#line 368
c_rt_lib0clear(&___nl__3);
#line 368
c_rt_lib0clear(&___nl__4);
#line 368
c_rt_lib0clear(&___nl__2);
#line 369
goto label_1;
#line 369
label_15:
#line 370
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 370
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 370
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(287), ___nl__4));
#line 370
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(157), ___nl__3, ___get_global_const(930), ___nl__4));
#line 370
c_rt_lib0clear(&___nl__3);
#line 370
c_rt_lib0clear(&___nl__4);
#line 370
c_rt_lib0clear(&___nl__0);
#line 370
c_rt_lib0clear(&___nl__1);
#line 370
return ___nl__2;
#line 370
c_rt_lib0clear(&___nl__2);
#line 371
goto label_1;
#line 371
label_16:
#line 371
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(215)));
#line 372
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(215), ___nl__2));
#line 372
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 372
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 372
c_rt_lib0move(&___nl__3, pretty_printer_priv0get_compressed_fun_val(___nl__4, ___nl__5, ___nl__6));
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
#line 372
c_rt_lib0clear(&___nl__2);
#line 373
goto label_1;
#line 373
label_17:
#line 373
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(216)));
#line 374
c_rt_lib0move(&___nl__4, pretty_printer_priv0join_print_hash_elem(___nl__2));
#line 374
c_rt_lib0move(&___nl__5,___get_global_const(168));
#line 374
c_rt_lib0move(&___nl__6,___get_global_const(169));
#line 374
c_rt_lib0move(&___nl__3, wprinter0build_pretty_arr_decl(___nl__4, ___nl__5, ___nl__6));
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
#line 374
c_rt_lib0clear(&___nl__2);
#line 375
goto label_1;
#line 375
label_18:
#line 375
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(781)));
#line 376
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(76)));
#line 376
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(99)));
#line 376
c_rt_lib0move(&___nl__4, pretty_printer_priv0get_fun_label(___nl__5, ___nl__6));
#line 376
c_rt_lib0clear(&___nl__6);
#line 376
c_rt_lib0clear(&___nl__5);
#line 376
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__4));
#line 376
c_rt_lib0clear(&___nl__4);
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
#line 376
c_rt_lib0clear(&___nl__2);
#line 377
goto label_1;
#line 377
label_1:
#line 377
c_rt_lib0clear(&___nl__1);
#line 377
c_rt_lib0clear(&___nl__0);
#line 377
return NULL;
}

ImmT pretty_printer_priv0print_cond_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
pretty_printer_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 382
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 382
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 382
c_rt_lib0move(&___nl__10, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 382
c_rt_lib0move(&___nl__9, wprinter0build_pretty_l(___nl__10));
#line 382
c_rt_lib0clear(&___nl__10);
#line 382
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 382
c_rt_lib0clear(&___nl__7);
#line 382
c_rt_lib0clear(&___nl__8);
#line 382
c_rt_lib0clear(&___nl__9);
#line 387
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 387
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 387
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 387
c_rt_lib0clear(&___nl__8);
#line 387
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 387
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 387
c_rt_lib0move(&___nl__9,___get_global_const(603));
#line 387
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 387
c_rt_lib0clear(&___nl__9);
#line 387
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 387
c_rt_lib0clear(&___nl__8);
#line 387
goto label_2;
#line 387
label_2:
#line 387
c_rt_lib0clear(&___nl__7);
#line 388
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 388
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 388
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 388
c_rt_lib0clear(&___nl__8);
#line 388
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 388
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 388
c_rt_lib0move(&___nl__9,___get_global_const(322));
#line 388
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 388
c_rt_lib0clear(&___nl__9);
#line 388
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 388
c_rt_lib0clear(&___nl__8);
#line 388
goto label_4;
#line 388
label_4:
#line 388
c_rt_lib0clear(&___nl__7);
#line 389
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 389
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 389
c_rt_lib0clear(&___nl__7);
#line 390
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 390
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 390
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 390
c_rt_lib0clear(&___nl__8);
#line 390
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 390
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 390
c_rt_lib0move(&___nl__9,___get_global_const(176));
#line 390
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 390
c_rt_lib0clear(&___nl__9);
#line 390
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 390
c_rt_lib0clear(&___nl__8);
#line 390
goto label_6;
#line 390
label_6:
#line 390
c_rt_lib0clear(&___nl__7);
#line 391
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_simple_statement(___nl__2));
#line 391
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 391
c_rt_lib0move(&___nl__11, wprinter0build_pretty_op_l(___nl__6));
#line 391
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 391
c_rt_lib0clear(&___nl__9);
#line 391
c_rt_lib0clear(&___nl__10);
#line 391
c_rt_lib0clear(&___nl__11);
#line 391
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 391
c_rt_lib0clear(&___nl__8);
#line 391
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__5));
#line 391
c_rt_lib0clear(&___nl__7);
#line 393
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 393
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 393
c_rt_lib0clear(&___nl__7);
#line 393
c_rt_lib0clear(&___nl__6);
#line 393
c_rt_lib0clear(&___nl__1);
#line 393
c_rt_lib0clear(&___nl__2);
#line 393
c_rt_lib0clear(&___nl__3);
#line 393
c_rt_lib0clear(&___nl__4);
#line 393
c_rt_lib0clear(&___nl__5);
#line 393
return NULL;
}

ImmT pretty_printer_priv0print_loop(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
pretty_printer_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 398
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 398
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__8));
#line 398
c_rt_lib0clear(&___nl__7);
#line 398
c_rt_lib0clear(&___nl__8);
#line 399
c_rt_lib0move(&___nl__7, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 399
c_rt_lib0delete(array0append(&___nl__6, ___nl__7));
#line 399
c_rt_lib0clear(&___nl__7);
#line 400
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 400
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 400
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 400
c_rt_lib0clear(&___nl__8);
#line 400
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 400
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 400
c_rt_lib0move(&___nl__9,___get_global_const(603));
#line 400
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 400
c_rt_lib0clear(&___nl__9);
#line 400
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 400
c_rt_lib0clear(&___nl__8);
#line 400
goto label_2;
#line 400
label_2:
#line 400
c_rt_lib0clear(&___nl__7);
#line 401
c_rt_lib0move(&___nl__8,___get_global_const(322));
#line 401
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 401
c_rt_lib0clear(&___nl__8);
#line 401
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 401
c_rt_lib0clear(&___nl__7);
#line 402
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 403
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(930)));
#line 403
c_rt_lib0move(&___nl__10,___get_global_const(277));
#line 403
c_rt_lib0move(&___nl__8, ov0is(___nl__9, ___nl__10));
#line 403
c_rt_lib0clear(&___nl__10);
#line 403
c_rt_lib0clear(&___nl__9);
#line 403
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 403
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 404
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(930)));
#line 404
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(277)));
#line 404
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(277)));
#line 404
c_rt_lib0delete(array0append(&___nl__6, ___nl__9));
#line 404
c_rt_lib0clear(&___nl__9);
#line 405
goto label_3;
#line 405
label_4:
#line 406
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 407
goto label_3;
#line 407
label_3:
#line 407
c_rt_lib0clear(&___nl__8);
#line 409
c_rt_lib0move(&___nl__9,___get_global_const(176));
#line 409
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 409
c_rt_lib0clear(&___nl__9);
#line 409
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 409
c_rt_lib0clear(&___nl__8);
#line 410
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__6));
#line 410
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__8, ___nl__5));
#line 410
c_rt_lib0clear(&___nl__8);
#line 411
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__2, ___nl__5));
#line 411
c_rt_lib0clear(&___nl__6);
#line 411
c_rt_lib0clear(&___nl__7);
#line 411
c_rt_lib0clear(&___nl__1);
#line 411
c_rt_lib0clear(&___nl__2);
#line 411
c_rt_lib0clear(&___nl__3);
#line 411
c_rt_lib0clear(&___nl__4);
#line 411
c_rt_lib0clear(&___nl__5);
#line 411
return NULL;
}

ImmT pretty_printer_priv0print_loop_or_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5,ImmT ___nl__6) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
c_rt_lib0arg_val(___nl__6);
pretty_printer_priv0__const__init();
ImmT ___nl__7 = NULL;
#line 416
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 416
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 416
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 417
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 418
goto label_1;
#line 418
label_2:
#line 419
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 420
goto label_1;
#line 420
label_1:
#line 420
c_rt_lib0clear(&___nl__7);
#line 420
c_rt_lib0clear(&___nl__1);
#line 420
c_rt_lib0clear(&___nl__2);
#line 420
c_rt_lib0clear(&___nl__3);
#line 420
c_rt_lib0clear(&___nl__4);
#line 420
c_rt_lib0clear(&___nl__5);
#line 420
c_rt_lib0clear(&___nl__6);
#line 420
return NULL;
}

ImmT pretty_printer_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
pretty_printer_priv0__const__init();
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
#line 425
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__1));
#line 425
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__3));
#line 425
c_rt_lib0clear(&___nl__3);
#line 426
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(769)));
#line 426
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 428
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(771)));
#line 428
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 430
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(770)));
#line 430
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 430
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 430
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 430
nl_die_arg(___nl__3);
#line 426
label_2:
#line 426
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(769)));
#line 427
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 427
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_var_decl(___nl__4));
#line 427
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 427
c_rt_lib0clear(&___nl__6);
#line 427
c_rt_lib0clear(&___nl__7);
#line 427
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 427
c_rt_lib0clear(&___nl__5);
#line 427
c_rt_lib0clear(&___nl__4);
#line 428
goto label_1;
#line 428
label_3:
#line 428
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(771)));
#line 429
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 429
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 429
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 429
c_rt_lib0clear(&___nl__6);
#line 429
c_rt_lib0clear(&___nl__7);
#line 429
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 429
c_rt_lib0clear(&___nl__5);
#line 429
c_rt_lib0clear(&___nl__4);
#line 430
goto label_1;
#line 430
label_4:
#line 430
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(770)));
#line 431
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 431
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(235)));
#line 431
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 431
c_rt_lib0clear(&___nl__8);
#line 431
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 431
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(401)));
#line 431
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 431
c_rt_lib0clear(&___nl__10);
#line 431
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 431
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(236)));
#line 431
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 431
c_rt_lib0clear(&___nl__12);
#line 431
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(6, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 431
c_rt_lib0clear(&___nl__6);
#line 431
c_rt_lib0clear(&___nl__7);
#line 431
c_rt_lib0clear(&___nl__8);
#line 431
c_rt_lib0clear(&___nl__9);
#line 431
c_rt_lib0clear(&___nl__10);
#line 431
c_rt_lib0clear(&___nl__11);
#line 431
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 431
c_rt_lib0clear(&___nl__5);
#line 431
c_rt_lib0clear(&___nl__4);
#line 433
goto label_1;
#line 433
label_1:
#line 433
c_rt_lib0clear(&___nl__3);
#line 434
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__2));
#line 434
c_rt_lib0clear(&___nl__0);
#line 434
c_rt_lib0clear(&___nl__1);
#line 434
c_rt_lib0clear(&___nl__2);
#line 434
return ___nl__3;
#line 434
c_rt_lib0clear(&___nl__3);
#line 434
c_rt_lib0clear(&___nl__2);
#line 434
c_rt_lib0clear(&___nl__0);
#line 434
c_rt_lib0clear(&___nl__1);
#line 434
return NULL;
}

ImmT pretty_printer_priv0print_return(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 438
c_rt_lib0move(&___nl__3,___get_global_const(210));
#line 438
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 438
c_rt_lib0clear(&___nl__3);
#line 438
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 438
c_rt_lib0clear(&___nl__2);
#line 439
c_rt_lib0move(&___nl__3,___get_global_const(754));
#line 439
c_rt_lib0move(&___nl__2, ov0is(___nl__0, ___nl__3));
#line 439
c_rt_lib0clear(&___nl__3);
#line 439
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 439
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 439
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 440
c_rt_lib0move(&___nl__4, wprinter0get_sep());
#line 440
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__0));
#line 440
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__4, ___nl__5));
#line 440
c_rt_lib0clear(&___nl__4);
#line 440
c_rt_lib0clear(&___nl__5);
#line 440
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 440
c_rt_lib0clear(&___nl__3);
#line 441
goto label_2;
#line 441
label_2:
#line 441
c_rt_lib0clear(&___nl__2);
#line 443
c_rt_lib0move(&___nl__2, wprinter0build_pretty_l(___nl__1));
#line 443
c_rt_lib0clear(&___nl__0);
#line 443
c_rt_lib0clear(&___nl__1);
#line 443
return ___nl__2;
#line 443
c_rt_lib0clear(&___nl__2);
#line 443
c_rt_lib0clear(&___nl__1);
#line 443
c_rt_lib0clear(&___nl__0);
#line 443
return NULL;
}

ImmT pretty_printer_priv0print_sim_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 447
c_rt_lib0move(&___nl__1, pretty_printer_priv0print_val(___nl__0));
#line 448
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(930)));
#line 448
c_rt_lib0move(&___nl__4,___get_global_const(277));
#line 448
c_rt_lib0move(&___nl__2, ov0is(___nl__3, ___nl__4));
#line 448
c_rt_lib0clear(&___nl__4);
#line 448
c_rt_lib0clear(&___nl__3);
#line 448
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 448
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 449
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(930)));
#line 449
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(277)));
#line 449
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(277)));
#line 449
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__4));
#line 449
c_rt_lib0clear(&___nl__4);
#line 449
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 449
c_rt_lib0clear(&___nl__3);
#line 450
goto label_2;
#line 450
label_2:
#line 450
c_rt_lib0clear(&___nl__2);
#line 452
c_rt_lib0clear(&___nl__0);
#line 452
return ___nl__1;
#line 452
c_rt_lib0clear(&___nl__1);
#line 452
c_rt_lib0clear(&___nl__0);
#line 452
return NULL;
}

ImmT pretty_printer_priv0print_break(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(0);}
ImmT pretty_printer_priv0print_break0cal() {
pretty_printer_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 456
c_rt_lib0move(&___nl__1,___get_global_const(748));
#line 456
c_rt_lib0move(&___nl__0, wprinter0build_sim(___nl__1));
#line 456
c_rt_lib0clear(&___nl__1);
#line 456
return ___nl__0;
#line 456
c_rt_lib0clear(&___nl__0);
#line 456
return NULL;
}

ImmT pretty_printer_priv0print_continue(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(1);}
ImmT pretty_printer_priv0print_continue0cal() {
pretty_printer_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 460
c_rt_lib0move(&___nl__1,___get_global_const(749));
#line 460
c_rt_lib0move(&___nl__0, wprinter0build_sim(___nl__1));
#line 460
c_rt_lib0clear(&___nl__1);
#line 460
return ___nl__0;
#line 460
c_rt_lib0clear(&___nl__0);
#line 460
return NULL;
}

ImmT pretty_printer_priv0print_die(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 464
c_rt_lib0move(&___nl__3,___get_global_const(229));
#line 464
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 464
c_rt_lib0clear(&___nl__3);
#line 464
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 464
c_rt_lib0clear(&___nl__2);
#line 465
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 465
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 465
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__2, ___nl__3));
#line 465
c_rt_lib0clear(&___nl__3);
#line 465
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 465
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 465
c_rt_lib0move(&___nl__5,___get_global_const(322));
#line 465
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 465
c_rt_lib0clear(&___nl__5);
#line 465
c_rt_lib0move(&___nl__6, pretty_printer_priv0join_print_val(___nl__0));
#line 465
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__6));
#line 465
c_rt_lib0clear(&___nl__6);
#line 465
c_rt_lib0move(&___nl__7,___get_global_const(176));
#line 465
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 465
c_rt_lib0clear(&___nl__7);
#line 465
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(3, ___nl__4, ___nl__5, ___nl__6));
#line 465
c_rt_lib0clear(&___nl__4);
#line 465
c_rt_lib0clear(&___nl__5);
#line 465
c_rt_lib0clear(&___nl__6);
#line 465
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 465
c_rt_lib0clear(&___nl__3);
#line 465
goto label_2;
#line 465
label_2:
#line 465
c_rt_lib0clear(&___nl__2);
#line 472
c_rt_lib0move(&___nl__2, wprinter0build_pretty_a(___nl__1));
#line 472
c_rt_lib0clear(&___nl__0);
#line 472
c_rt_lib0clear(&___nl__1);
#line 472
return ___nl__2;
#line 472
c_rt_lib0clear(&___nl__2);
#line 472
c_rt_lib0clear(&___nl__1);
#line 472
c_rt_lib0clear(&___nl__0);
#line 472
return NULL;
}

ImmT pretty_printer_priv0print_simple_statement(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 476
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 476
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(641)));
#line 476
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 476
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 477
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 477
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(641)));
#line 477
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_sim_value(___nl__3));
#line 477
c_rt_lib0clear(&___nl__3);
#line 477
c_rt_lib0clear(&___nl__0);
#line 477
c_rt_lib0clear(&___nl__1);
#line 477
return ___nl__2;
#line 477
c_rt_lib0clear(&___nl__2);
#line 478
goto label_1;
#line 478
label_2:
#line 478
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 478
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(210)));
#line 478
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 478
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 479
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 479
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(210)));
#line 479
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_return(___nl__3));
#line 479
c_rt_lib0clear(&___nl__3);
#line 479
c_rt_lib0clear(&___nl__0);
#line 479
c_rt_lib0clear(&___nl__1);
#line 479
return ___nl__2;
#line 479
c_rt_lib0clear(&___nl__2);
#line 480
goto label_1;
#line 480
label_3:
#line 480
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 480
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(748)));
#line 480
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 480
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 481
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_break());
#line 481
c_rt_lib0clear(&___nl__0);
#line 481
c_rt_lib0clear(&___nl__1);
#line 481
return ___nl__2;
#line 481
c_rt_lib0clear(&___nl__2);
#line 482
goto label_1;
#line 482
label_4:
#line 482
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 482
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(749)));
#line 482
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 482
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 483
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_continue());
#line 483
c_rt_lib0clear(&___nl__0);
#line 483
c_rt_lib0clear(&___nl__1);
#line 483
return ___nl__2;
#line 483
c_rt_lib0clear(&___nl__2);
#line 484
goto label_1;
#line 484
label_5:
#line 484
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 484
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(229)));
#line 484
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 484
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 485
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 485
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(229)));
#line 485
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_die(___nl__3));
#line 485
c_rt_lib0clear(&___nl__3);
#line 485
c_rt_lib0clear(&___nl__0);
#line 485
c_rt_lib0clear(&___nl__1);
#line 485
return ___nl__2;
#line 485
c_rt_lib0clear(&___nl__2);
#line 486
goto label_1;
#line 486
label_6:
#line 486
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 486
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(753)));
#line 486
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 486
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 487
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 487
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(753)));
#line 487
c_rt_lib0move(&___nl__4,___get_global_const(753));
#line 487
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 487
c_rt_lib0clear(&___nl__4);
#line 487
c_rt_lib0clear(&___nl__3);
#line 487
c_rt_lib0clear(&___nl__0);
#line 487
c_rt_lib0clear(&___nl__1);
#line 487
return ___nl__2;
#line 487
c_rt_lib0clear(&___nl__2);
#line 488
goto label_1;
#line 488
label_7:
#line 488
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 488
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(78)));
#line 488
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 488
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 489
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 489
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(78)));
#line 489
c_rt_lib0move(&___nl__4,___get_global_const(78));
#line 489
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 489
c_rt_lib0clear(&___nl__4);
#line 489
c_rt_lib0clear(&___nl__3);
#line 489
c_rt_lib0clear(&___nl__0);
#line 489
c_rt_lib0clear(&___nl__1);
#line 489
return ___nl__2;
#line 489
c_rt_lib0clear(&___nl__2);
#line 490
goto label_1;
#line 490
label_8:
#line 491
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__0));
#line 491
nl_die_arg(___nl__2);
#line 491
c_rt_lib0clear(&___nl__2);
#line 492
goto label_1;
#line 492
label_1:
#line 492
c_rt_lib0clear(&___nl__1);
#line 492
c_rt_lib0clear(&___nl__0);
#line 492
return NULL;
}

ImmT pretty_printer_priv0flush_sim_statement(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 497
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__1, ___nl__2));
#line 498
c_rt_lib0move(&___nl__3,___get_global_const(311));
#line 498
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__3));
#line 498
c_rt_lib0clear(&___nl__3);
#line 498
c_rt_lib0clear(&___nl__1);
#line 498
c_rt_lib0clear(&___nl__2);
#line 498
return NULL;
}

ImmT pretty_printer_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
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
#line 502
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(209)));
#line 502
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(740)));
#line 502
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 512
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(745)));
#line 512
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 514
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(741)));
#line 514
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 533
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(751)));
#line 533
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 540
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(754)));
#line 540
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 542
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(750)));
#line 542
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 553
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(742)));
#line 553
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 555
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(743)));
#line 555
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 558
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(744)));
#line 558
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 560
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(117)));
#line 560
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 563
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(746)));
#line 563
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 565
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(747)));
#line 565
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 567
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(641)));
#line 567
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 569
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(753)));
#line 569
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 571
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(78)));
#line 571
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 573
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(210)));
#line 573
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 575
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(748)));
#line 575
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 577
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(749)));
#line 577
if(c_rt_lib0check_true_native(___nl__4)){ goto label_19;}
#line 579
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(229)));
#line 579
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 581
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(752)));
#line 581
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 581
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 581
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 581
nl_die_arg(___nl__4);
#line 502
label_2:
#line 502
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(740)));
#line 503
c_rt_lib0move(&___nl__6,___get_global_const(740));
#line 503
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(740)));
#line 503
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 503
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(755)));
#line 503
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 503
c_rt_lib0clear(&___nl__9);
#line 503
c_rt_lib0clear(&___nl__8);
#line 503
c_rt_lib0clear(&___nl__7);
#line 503
c_rt_lib0clear(&___nl__6);
#line 504
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(756)));
#line 504
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 504
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 504
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 504
label_24:
#line 504
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 504
if(c_rt_lib0check_true_native(___nl__11)){ goto label_22;}
#line 504
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 505
c_rt_lib0move(&___nl__12,___get_global_const(603));
#line 505
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 505
c_rt_lib0clear(&___nl__12);
#line 506
c_rt_lib0move(&___nl__12,___get_global_const(756));
#line 506
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(209)));
#line 506
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 506
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(755)));
#line 506
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__2));
#line 506
c_rt_lib0clear(&___nl__15);
#line 506
c_rt_lib0clear(&___nl__14);
#line 506
c_rt_lib0clear(&___nl__13);
#line 506
c_rt_lib0clear(&___nl__12);
#line 507
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 507
goto label_24;
#line 507
label_22:
#line 507
c_rt_lib0clear(&___nl__6);
#line 507
c_rt_lib0clear(&___nl__7);
#line 507
c_rt_lib0clear(&___nl__8);
#line 507
c_rt_lib0clear(&___nl__9);
#line 507
c_rt_lib0clear(&___nl__10);
#line 507
c_rt_lib0clear(&___nl__11);
#line 508
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(757)));
#line 508
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(209)));
#line 508
c_rt_lib0move(&___nl__8,___get_global_const(754));
#line 508
c_rt_lib0move(&___nl__6, ov0is(___nl__7, ___nl__8));
#line 508
c_rt_lib0clear(&___nl__8);
#line 508
c_rt_lib0clear(&___nl__7);
#line 508
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 508
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 508
if(c_rt_lib0check_true_native(___nl__6)){ goto label_26;}
#line 509
c_rt_lib0move(&___nl__7,___get_global_const(931));
#line 509
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 509
c_rt_lib0clear(&___nl__7);
#line 510
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(757)));
#line 510
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__7, ___nl__2));
#line 510
c_rt_lib0clear(&___nl__7);
#line 511
goto label_26;
#line 511
label_26:
#line 511
c_rt_lib0clear(&___nl__6);
#line 511
c_rt_lib0clear(&___nl__5);
#line 512
goto label_1;
#line 512
label_3:
#line 512
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(745)));
#line 513
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(837)));
#line 513
c_rt_lib0move(&___nl__7,___get_global_const(745));
#line 513
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(209)));
#line 513
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 513
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(755)));
#line 513
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 513
c_rt_lib0clear(&___nl__10);
#line 513
c_rt_lib0clear(&___nl__9);
#line 513
c_rt_lib0clear(&___nl__8);
#line 513
c_rt_lib0clear(&___nl__7);
#line 513
c_rt_lib0clear(&___nl__6);
#line 513
c_rt_lib0clear(&___nl__5);
#line 514
goto label_1;
#line 514
label_4:
#line 514
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(741)));
#line 516
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(758)));
#line 516
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(641)));
#line 516
if(c_rt_lib0check_true_native(___nl__8)){ goto label_28;}
#line 518
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(752)));
#line 518
if(c_rt_lib0check_true_native(___nl__8)){ goto label_29;}
#line 518
c_rt_lib0move(&___nl__8,___get_global_const(74));
#line 518
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 518
nl_die_arg(___nl__8);
#line 516
label_28:
#line 516
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(641)));
#line 517
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__9));
#line 517
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 517
c_rt_lib0clear(&___nl__10);
#line 517
c_rt_lib0clear(&___nl__9);
#line 518
goto label_27;
#line 518
label_29:
#line 518
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(752)));
#line 519
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_var_decl(___nl__9));
#line 519
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 519
c_rt_lib0clear(&___nl__10);
#line 519
c_rt_lib0clear(&___nl__9);
#line 520
goto label_27;
#line 520
label_27:
#line 520
c_rt_lib0clear(&___nl__7);
#line 520
c_rt_lib0clear(&___nl__8);
#line 521
c_rt_lib0move(&___nl__10,___get_global_const(932));
#line 521
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 521
c_rt_lib0clear(&___nl__10);
#line 521
c_rt_lib0move(&___nl__11,___get_global_const(311));
#line 521
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 521
c_rt_lib0clear(&___nl__11);
#line 521
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 521
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(755)));
#line 521
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_val(___nl__13));
#line 521
c_rt_lib0clear(&___nl__13);
#line 521
c_rt_lib0move(&___nl__14,___get_global_const(311));
#line 521
c_rt_lib0move(&___nl__13, wprinter0build_sim(___nl__14));
#line 521
c_rt_lib0clear(&___nl__14);
#line 521
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 521
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(759)));
#line 521
c_rt_lib0move(&___nl__15, pretty_printer_priv0print_val(___nl__16));
#line 521
c_rt_lib0clear(&___nl__16);
#line 521
c_rt_lib0move(&___nl__17,___get_global_const(490));
#line 521
c_rt_lib0move(&___nl__16, wprinter0build_sim(___nl__17));
#line 521
c_rt_lib0clear(&___nl__17);
#line 521
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(9, ___nl__9, ___nl__6, ___nl__10, ___nl__11, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__16));
#line 521
c_rt_lib0clear(&___nl__9);
#line 521
c_rt_lib0clear(&___nl__10);
#line 521
c_rt_lib0clear(&___nl__11);
#line 521
c_rt_lib0clear(&___nl__12);
#line 521
c_rt_lib0clear(&___nl__13);
#line 521
c_rt_lib0clear(&___nl__14);
#line 521
c_rt_lib0clear(&___nl__15);
#line 521
c_rt_lib0clear(&___nl__16);
#line 521
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 521
c_rt_lib0clear(&___nl__8);
#line 521
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__2));
#line 521
c_rt_lib0clear(&___nl__7);
#line 532
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(209)));
#line 532
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__7, ___nl__2));
#line 532
c_rt_lib0clear(&___nl__7);
#line 532
c_rt_lib0clear(&___nl__6);
#line 532
c_rt_lib0clear(&___nl__5);
#line 533
goto label_1;
#line 533
label_5:
#line 533
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(751)));
#line 534
c_rt_lib0move(&___nl__6,___get_global_const(168));
#line 534
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 534
c_rt_lib0clear(&___nl__6);
#line 535
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 535
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 535
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 535
label_32:
#line 535
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 535
if(c_rt_lib0check_true_native(___nl__10)){ goto label_30;}
#line 535
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 536
c_rt_lib0move(&___nl__11, string0lf());
#line 536
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 536
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 536
c_rt_lib0move(&___nl__12, pretty_printer_priv0pind(___nl__13));
#line 536
c_rt_lib0clear(&___nl__13);
#line 536
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 536
c_rt_lib0clear(&___nl__12);
#line 536
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__11));
#line 536
c_rt_lib0clear(&___nl__11);
#line 537
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 537
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__2, ___nl__11));
#line 537
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__6, ___nl__11));
#line 537
c_rt_lib0clear(&___nl__11);
#line 538
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 538
goto label_32;
#line 538
label_30:
#line 538
c_rt_lib0clear(&___nl__6);
#line 538
c_rt_lib0clear(&___nl__7);
#line 538
c_rt_lib0clear(&___nl__8);
#line 538
c_rt_lib0clear(&___nl__9);
#line 538
c_rt_lib0clear(&___nl__10);
#line 539
c_rt_lib0move(&___nl__6, string0lf());
#line 539
c_rt_lib0move(&___nl__7, pretty_printer_priv0pind(___nl__2));
#line 539
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 539
c_rt_lib0clear(&___nl__7);
#line 539
c_rt_lib0move(&___nl__7,___get_global_const(169));
#line 539
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 539
c_rt_lib0clear(&___nl__7);
#line 539
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 539
c_rt_lib0clear(&___nl__6);
#line 539
c_rt_lib0clear(&___nl__5);
#line 540
goto label_1;
#line 540
label_6:
#line 541
c_rt_lib0move(&___nl__5,___get_global_const(311));
#line 541
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__5));
#line 541
c_rt_lib0clear(&___nl__5);
#line 542
goto label_1;
#line 542
label_7:
#line 542
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(750)));
#line 543
c_rt_lib0move(&___nl__9,___get_global_const(933));
#line 543
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 543
c_rt_lib0clear(&___nl__9);
#line 543
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(234)));
#line 543
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 543
c_rt_lib0clear(&___nl__10);
#line 543
c_rt_lib0move(&___nl__11,___get_global_const(176));
#line 543
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 543
c_rt_lib0clear(&___nl__11);
#line 543
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 543
c_rt_lib0clear(&___nl__8);
#line 543
c_rt_lib0clear(&___nl__9);
#line 543
c_rt_lib0clear(&___nl__10);
#line 543
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 543
c_rt_lib0clear(&___nl__7);
#line 543
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__6, ___nl__2));
#line 543
c_rt_lib0clear(&___nl__6);
#line 548
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(763)));
#line 548
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 548
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 548
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 548
label_35:
#line 548
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 548
if(c_rt_lib0check_true_native(___nl__11)){ goto label_33;}
#line 548
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 549
c_rt_lib0move(&___nl__12,___get_global_const(934));
#line 549
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 549
c_rt_lib0clear(&___nl__12);
#line 550
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(764)));
#line 550
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_variant_case_decl(___nl__13));
#line 550
c_rt_lib0clear(&___nl__13);
#line 550
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 550
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 550
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__12, ___nl__13));
#line 550
c_rt_lib0clear(&___nl__13);
#line 550
c_rt_lib0clear(&___nl__12);
#line 551
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(209)));
#line 551
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__12, ___nl__2));
#line 551
c_rt_lib0clear(&___nl__12);
#line 552
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 552
goto label_35;
#line 552
label_33:
#line 552
c_rt_lib0clear(&___nl__6);
#line 552
c_rt_lib0clear(&___nl__7);
#line 552
c_rt_lib0clear(&___nl__8);
#line 552
c_rt_lib0clear(&___nl__9);
#line 552
c_rt_lib0clear(&___nl__10);
#line 552
c_rt_lib0clear(&___nl__11);
#line 552
c_rt_lib0clear(&___nl__5);
#line 553
goto label_1;
#line 553
label_8:
#line 553
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(742)));
#line 554
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(837)));
#line 554
c_rt_lib0move(&___nl__7,___get_global_const(742));
#line 554
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(209)));
#line 554
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(759)));
#line 554
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 554
c_rt_lib0clear(&___nl__10);
#line 554
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(3)));
#line 554
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 554
c_rt_lib0clear(&___nl__10);
#line 554
c_rt_lib0clear(&___nl__9);
#line 554
c_rt_lib0clear(&___nl__8);
#line 554
c_rt_lib0clear(&___nl__7);
#line 554
c_rt_lib0clear(&___nl__6);
#line 554
c_rt_lib0clear(&___nl__5);
#line 555
goto label_1;
#line 555
label_9:
#line 555
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(743)));
#line 556
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(837)));
#line 556
c_rt_lib0move(&___nl__7,___get_global_const(743));
#line 556
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(209)));
#line 556
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(279)));
#line 556
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(234)));
#line 556
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 556
c_rt_lib0clear(&___nl__10);
#line 556
c_rt_lib0clear(&___nl__11);
#line 556
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(278)));
#line 556
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 556
c_rt_lib0clear(&___nl__10);
#line 556
c_rt_lib0clear(&___nl__9);
#line 556
c_rt_lib0clear(&___nl__8);
#line 556
c_rt_lib0clear(&___nl__7);
#line 556
c_rt_lib0clear(&___nl__6);
#line 556
c_rt_lib0clear(&___nl__5);
#line 558
goto label_1;
#line 558
label_10:
#line 558
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(744)));
#line 559
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(837)));
#line 559
c_rt_lib0move(&___nl__7,___get_global_const(744));
#line 559
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(209)));
#line 559
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(759)));
#line 559
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 559
c_rt_lib0clear(&___nl__10);
#line 559
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(760)));
#line 559
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 559
c_rt_lib0clear(&___nl__10);
#line 559
c_rt_lib0clear(&___nl__9);
#line 559
c_rt_lib0clear(&___nl__8);
#line 559
c_rt_lib0clear(&___nl__7);
#line 559
c_rt_lib0clear(&___nl__6);
#line 559
c_rt_lib0clear(&___nl__5);
#line 560
goto label_1;
#line 560
label_11:
#line 560
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(117)));
#line 561
c_rt_lib0move(&___nl__6,___get_global_const(117));
#line 561
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 561
c_rt_lib0clear(&___nl__6);
#line 562
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__5, ___nl__2));
#line 562
c_rt_lib0clear(&___nl__5);
#line 563
goto label_1;
#line 563
label_12:
#line 563
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(746)));
#line 564
c_rt_lib0move(&___nl__6,___get_global_const(740));
#line 564
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(209)));
#line 564
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 564
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(755)));
#line 564
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 564
c_rt_lib0clear(&___nl__9);
#line 564
c_rt_lib0clear(&___nl__8);
#line 564
c_rt_lib0clear(&___nl__7);
#line 564
c_rt_lib0clear(&___nl__6);
#line 564
c_rt_lib0clear(&___nl__5);
#line 565
goto label_1;
#line 565
label_13:
#line 565
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(747)));
#line 566
c_rt_lib0move(&___nl__6,___get_global_const(855));
#line 566
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(209)));
#line 566
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 566
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(755)));
#line 566
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 566
c_rt_lib0clear(&___nl__9);
#line 566
c_rt_lib0clear(&___nl__8);
#line 566
c_rt_lib0clear(&___nl__7);
#line 566
c_rt_lib0clear(&___nl__6);
#line 566
c_rt_lib0clear(&___nl__5);
#line 567
goto label_1;
#line 567
label_14:
#line 567
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(641)));
#line 568
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_sim_value(___nl__5));
#line 568
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 568
c_rt_lib0clear(&___nl__6);
#line 568
c_rt_lib0clear(&___nl__5);
#line 569
goto label_1;
#line 569
label_15:
#line 569
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(753)));
#line 570
c_rt_lib0move(&___nl__7,___get_global_const(753));
#line 570
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 570
c_rt_lib0clear(&___nl__7);
#line 570
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 570
c_rt_lib0clear(&___nl__6);
#line 570
c_rt_lib0clear(&___nl__5);
#line 571
goto label_1;
#line 571
label_16:
#line 571
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(78)));
#line 572
c_rt_lib0move(&___nl__7,___get_global_const(78));
#line 572
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 572
c_rt_lib0clear(&___nl__7);
#line 572
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 572
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0clear(&___nl__5);
#line 573
goto label_1;
#line 573
label_17:
#line 573
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(210)));
#line 574
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_return(___nl__5));
#line 574
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 574
c_rt_lib0clear(&___nl__6);
#line 574
c_rt_lib0clear(&___nl__5);
#line 575
goto label_1;
#line 575
label_18:
#line 576
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_break());
#line 576
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 576
c_rt_lib0clear(&___nl__5);
#line 577
goto label_1;
#line 577
label_19:
#line 578
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_continue());
#line 578
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 578
c_rt_lib0clear(&___nl__5);
#line 579
goto label_1;
#line 579
label_20:
#line 579
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(229)));
#line 580
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_die(___nl__5));
#line 580
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 580
c_rt_lib0clear(&___nl__6);
#line 580
c_rt_lib0clear(&___nl__5);
#line 581
goto label_1;
#line 581
label_21:
#line 581
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(752)));
#line 582
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_var_decl(___nl__5));
#line 582
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 582
c_rt_lib0clear(&___nl__6);
#line 582
c_rt_lib0clear(&___nl__5);
#line 583
goto label_1;
#line 583
label_1:
#line 583
c_rt_lib0clear(&___nl__3);
#line 583
c_rt_lib0clear(&___nl__4);
#line 583
c_rt_lib0clear(&___nl__1);
#line 583
c_rt_lib0clear(&___nl__2);
#line 583
return NULL;
}


static ImmT ___const__[3];
static int ___const_init__ = 1;
void pretty_printer_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[2];


for(int i=0;i<2;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 2);
}}
ImmT pretty_printer_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT pretty_printer_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = pretty_printer_priv0print_break0cal();
	break;
case 1:
	___const__[1] = pretty_printer_priv0print_continue0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
