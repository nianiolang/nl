
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "pretty_printer.h"
#include "string.h"
#include "array.h"
#include "ptd.h"
#include "nast.h"
#include "wprinter.h"
#include "boolean_t.h"
#line 1 "pretty_printer.nl"

static ImmT *__const__f = NULL;
ImmT pretty_printer_priv0__const__sim(int __nr);
ImmT pretty_printer_priv0__const__sing(int __nr);

ImmT pretty_printer_priv0state_print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT pretty_printer_priv0print_fun_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0print_fun_def_head(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
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
ImmT pretty_printer_priv0is_proper_hash_key(ImmT ___nl__0);


ImmT pretty_printer_priv0state_print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 14
c_rt_lib0move(&___nl__2,___get_global_const(167));
#line 14
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 14
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 14
c_rt_lib0move(&___nl__3,___get_global_const(167));
#line 14
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 14
c_rt_lib0clear(&___nl__3);
#line 14
c_rt_lib0clear(&___nl__2);
#line 14
c_rt_lib0clear(&___nl__1);
#line 14
return NULL;
}

ImmT pretty_printer0struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "pretty_printer0struct_t");
return pretty_printer0struct_t();}
ImmT pretty_printer0struct_t(){
return pretty_printer_priv0__const__sing(0);}
ImmT pretty_printer0struct_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 19
c_rt_lib0move(&___nl__3, ptd0sim());
#line 19
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 19
c_rt_lib0clear(&___nl__3);
#line 20
c_rt_lib0move(&___nl__6, ptd0sim());
#line 20
c_rt_lib0move(&___nl__7, ptd0sim());
#line 20
c_rt_lib0move(&___nl__8, ptd0sim());
#line 20
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__6, ___get_global_const(1002), ___nl__7, ___get_global_const(1003), ___nl__8));
#line 20
c_rt_lib0clear(&___nl__6);
#line 20
c_rt_lib0clear(&___nl__7);
#line 20
c_rt_lib0clear(&___nl__8);
#line 20
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 20
c_rt_lib0clear(&___nl__5);
#line 20
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 20
c_rt_lib0clear(&___nl__4);
#line 20
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(384), ___nl__2, ___get_global_const(92), ___nl__3));
#line 20
c_rt_lib0clear(&___nl__2);
#line 20
c_rt_lib0clear(&___nl__3);
#line 20
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 20
c_rt_lib0clear(&___nl__1);
#line 20
return ___nl__0;
#line 20
c_rt_lib0clear(&___nl__0);
#line 20
return NULL;
}

ImmT pretty_printer0print_module_to_struct0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "pretty_printer0print_module_to_struct");
return pretty_printer0print_module_to_struct(_tab[0]);}
ImmT pretty_printer0print_module_to_struct(ImmT ___nl__0) {
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
ImmT ___nl__18 = NULL;
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(384), ___nl__2, ___get_global_const(92), ___nl__3));
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(150)));
#line 26
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 26
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 26
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 26
label_9:
#line 26
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 26
if(c_rt_lib0check_true_native(___nl__7)){ goto label_33;}
#line 26
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 27
c_rt_lib0move(&___nl__8,___get_global_const(384));
#line 27
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__1, ___nl__8));
#line 27
c_rt_lib0move(&___nl__9,___get_global_const(630));
#line 27
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 27
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 27
c_rt_lib0clear(&___nl__10);
#line 27
c_rt_lib0move(&___nl__10,___get_global_const(360));
#line 27
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 27
c_rt_lib0clear(&___nl__10);
#line 27
c_rt_lib0move(&___nl__10, string0lf());
#line 27
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 27
c_rt_lib0clear(&___nl__10);
#line 27
c_rt_lib0delete(array0push(&___nl__8, ___nl__9));
#line 27
c_rt_lib0clear(&___nl__9);
#line 27
c_rt_lib0move(&___nl__9,___get_global_const(384));
#line 27
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__9, ___nl__8));
#line 27
c_rt_lib0clear(&___nl__9);
#line 27
c_rt_lib0clear(&___nl__8);
#line 28
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 28
goto label_9;
#line 28
label_33:
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0clear(&___nl__5);
#line 28
c_rt_lib0clear(&___nl__6);
#line 28
c_rt_lib0clear(&___nl__7);
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(787)));
#line 29
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 29
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 29
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 29
label_44:
#line 29
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 29
if(c_rt_lib0check_true_native(___nl__7)){ goto label_120;}
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 30
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 30
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(1, ___get_global_const(167), ___nl__9));
#line 30
c_rt_lib0clear(&___nl__9);
#line 31
c_rt_lib0move(&___nl__9, string0lf());
#line 31
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__8, ___nl__9));
#line 31
c_rt_lib0clear(&___nl__9);
#line 32
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 32
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(&___nl__8, ___nl__3, ___nl__9));
#line 32
c_rt_lib0clear(&___nl__9);
#line 33
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(167)));
#line 34
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 34
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 34
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(167), ___nl__11);
#line 34
c_rt_lib0clear(&___nl__10);
#line 34
c_rt_lib0clear(&___nl__11);
#line 35
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(201)));
#line 35
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(201)));
#line 35
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(828)));
#line 35
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 35
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 35
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 35
label_69:
#line 35
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 35
if(c_rt_lib0check_true_native(___nl__15)){ goto label_86;}
#line 35
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 36
c_rt_lib0move(&___nl__16, string0lf());
#line 36
c_rt_lib0move(&___nl__18,___get_global_const(1));
#line 36
c_rt_lib0move(&___nl__17, pretty_printer_priv0pind(___nl__18));
#line 36
c_rt_lib0clear(&___nl__18);
#line 36
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 36
c_rt_lib0clear(&___nl__17);
#line 36
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__8, ___nl__16));
#line 36
c_rt_lib0clear(&___nl__16);
#line 37
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 37
c_rt_lib0delete(pretty_printer_priv0print_cmd(&___nl__8, ___nl__11, ___nl__16));
#line 37
c_rt_lib0clear(&___nl__16);
#line 38
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 38
goto label_69;
#line 38
label_86:
#line 38
c_rt_lib0clear(&___nl__10);
#line 38
c_rt_lib0clear(&___nl__11);
#line 38
c_rt_lib0clear(&___nl__12);
#line 38
c_rt_lib0clear(&___nl__13);
#line 38
c_rt_lib0clear(&___nl__14);
#line 38
c_rt_lib0clear(&___nl__15);
#line 39
c_rt_lib0move(&___nl__10,___get_global_const(92));
#line 39
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__1, ___nl__10));
#line 40
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(182)));
#line 40
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(379)));
#line 40
if(c_rt_lib0check_true_native(___nl__12)){ goto label_100;}
#line 40
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 40
goto label_102;
#line 40
label_100:
#line 40
c_rt_lib0move(&___nl__12,___get_global_const(185));
#line 40
label_102:
#line 40
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 40
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 40
c_rt_lib0clear(&___nl__13);
#line 42
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(167)));
#line 42
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__12, ___get_global_const(1002), ___nl__9, ___get_global_const(1003), ___nl__13));
#line 42
c_rt_lib0clear(&___nl__12);
#line 42
c_rt_lib0clear(&___nl__13);
#line 42
c_rt_lib0delete(array0push(&___nl__10, ___nl__11));
#line 42
c_rt_lib0clear(&___nl__11);
#line 42
c_rt_lib0move(&___nl__11,___get_global_const(92));
#line 42
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__11, ___nl__10));
#line 42
c_rt_lib0clear(&___nl__11);
#line 42
c_rt_lib0clear(&___nl__10);
#line 42
c_rt_lib0clear(&___nl__8);
#line 42
c_rt_lib0clear(&___nl__9);
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 44
goto label_44;
#line 44
label_120:
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
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
return ___nl__1;
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
return NULL;
}

ImmT pretty_printer0print_module_to_str0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "pretty_printer0print_module_to_str");
return pretty_printer0print_module_to_str(_tab[0]);}
ImmT pretty_printer0print_module_to_str(ImmT ___nl__0) {
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
#line 49
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 49
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(1, ___get_global_const(167), ___nl__2));
#line 49
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(899)));
#line 50
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 50
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(899)));
#line 51
c_rt_lib0move(&___nl__4, string0lf());
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 51
c_rt_lib0clear(&___nl__4);
#line 51
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 51
c_rt_lib0clear(&___nl__3);
#line 52
goto label_42;
#line 52
label_16:
#line 53
c_rt_lib0move(&___nl__3,___get_global_const(1004));
#line 53
c_rt_lib0move(&___nl__4, string0lf());
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(1005));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0move(&___nl__4, string0lf());
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(1004));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0move(&___nl__4, string0lf());
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__4, string0lf());
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__4, string0lf());
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 55
goto label_42;
#line 55
label_42:
#line 55
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 57
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(150)));
#line 57
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 57
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 57
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 57
label_49:
#line 57
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 57
if(c_rt_lib0check_true_native(___nl__8)){ goto label_64;}
#line 57
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 58
c_rt_lib0move(&___nl__9,___get_global_const(630));
#line 58
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 58
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 58
c_rt_lib0clear(&___nl__10);
#line 58
c_rt_lib0move(&___nl__10,___get_global_const(360));
#line 58
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 58
c_rt_lib0clear(&___nl__10);
#line 58
c_rt_lib0delete(array0push(&___nl__2, ___nl__9));
#line 58
c_rt_lib0clear(&___nl__9);
#line 59
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 59
goto label_49;
#line 59
label_64:
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
#line 60
c_rt_lib0move(&___nl__4, string0lf());
#line 60
c_rt_lib0move(&___nl__3, array0join(___nl__4, ___nl__2));
#line 60
c_rt_lib0clear(&___nl__4);
#line 60
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 60
c_rt_lib0clear(&___nl__3);
#line 61
c_rt_lib0move(&___nl__3, string0lf());
#line 61
c_rt_lib0move(&___nl__4, string0lf());
#line 61
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 61
c_rt_lib0clear(&___nl__4);
#line 61
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 61
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(787)));
#line 62
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 62
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 62
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 62
label_86:
#line 62
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 62
if(c_rt_lib0check_true_native(___nl__8)){ goto label_101;}
#line 62
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 63
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 63
c_rt_lib0delete(pretty_printer_priv0print_fun_def(&___nl__1, ___nl__4, ___nl__9));
#line 63
c_rt_lib0clear(&___nl__9);
#line 64
c_rt_lib0move(&___nl__9, string0lf());
#line 64
c_rt_lib0move(&___nl__10, string0lf());
#line 64
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 64
c_rt_lib0clear(&___nl__10);
#line 64
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__9));
#line 64
c_rt_lib0clear(&___nl__9);
#line 65
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 65
goto label_86;
#line 65
label_101:
#line 65
c_rt_lib0clear(&___nl__3);
#line 65
c_rt_lib0clear(&___nl__4);
#line 65
c_rt_lib0clear(&___nl__5);
#line 65
c_rt_lib0clear(&___nl__6);
#line 65
c_rt_lib0clear(&___nl__7);
#line 65
c_rt_lib0clear(&___nl__8);
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(167)));
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
c_rt_lib0clear(&___nl__1);
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
return ___nl__3;
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__1);
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
return NULL;
}

ImmT pretty_printer_priv0print_fun_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 70
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(___ref___0, ___nl__1, ___nl__2));
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(201)));
#line 71
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 71
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__3, ___nl__4));
#line 71
c_rt_lib0clear(&___nl__4);
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0clear(&___nl__1);
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
return NULL;
}

ImmT pretty_printer_priv0print_fun_def_head(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
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
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
#line 75
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 76
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(182)));
#line 76
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(183)));
#line 76
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 78
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(379)));
#line 78
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 78
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 78
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 78
nl_die_arg(___nl__5);
#line 76
label_9:
#line 77
c_rt_lib0move(&___nl__6,___get_global_const(185));
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__2, ___nl__6));
#line 77
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 77
c_rt_lib0clear(&___nl__6);
#line 78
goto label_17;
#line 78
label_15:
#line 79
goto label_17;
#line 79
label_17:
#line 79
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 80
c_rt_lib0clear(&___nl__4);
#line 82
c_rt_lib0move(&___nl__6,___get_global_const(950));
#line 82
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 82
c_rt_lib0clear(&___nl__6);
#line 83
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 84
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__3));
#line 85
c_rt_lib0move(&___nl__9,___get_global_const(373));
#line 85
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 85
c_rt_lib0clear(&___nl__9);
#line 85
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(4, ___nl__5, ___nl__6, ___nl__7, ___nl__8));
#line 85
c_rt_lib0clear(&___nl__5);
#line 85
c_rt_lib0clear(&___nl__6);
#line 85
c_rt_lib0clear(&___nl__7);
#line 85
c_rt_lib0clear(&___nl__8);
#line 87
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 87
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 87
c_rt_lib0clear(&___nl__6);
#line 87
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 87
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 87
label_41:
#line 87
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__6, ___nl__5));
#line 87
if(c_rt_lib0check_true_native(___nl__8)){ goto label_129;}
#line 88
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 88
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__6));
#line 89
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(222)));
#line 89
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(5)));
#line 89
if(c_rt_lib0check_true_native(___nl__11)){ goto label_54;}
#line 91
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(41)));
#line 91
if(c_rt_lib0check_true_native(___nl__11)){ goto label_65;}
#line 91
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 91
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 91
nl_die_arg(___nl__11);
#line 89
label_54:
#line 90
c_rt_lib0move(&___nl__14,___get_global_const(5));
#line 90
c_rt_lib0move(&___nl__13, wprinter0build_sim(___nl__14));
#line 90
c_rt_lib0clear(&___nl__14);
#line 90
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 90
c_rt_lib0clear(&___nl__13);
#line 90
c_rt_lib0clear(&___nl__14);
#line 90
c_rt_lib0delete(array0append(&___nl__4, ___nl__12));
#line 90
c_rt_lib0clear(&___nl__12);
#line 91
goto label_67;
#line 91
label_65:
#line 92
goto label_67;
#line 92
label_67:
#line 92
c_rt_lib0clear(&___nl__10);
#line 92
c_rt_lib0clear(&___nl__11);
#line 93
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(93)));
#line 93
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 93
c_rt_lib0clear(&___nl__11);
#line 93
c_rt_lib0delete(array0push(&___nl__4, ___nl__10));
#line 93
c_rt_lib0clear(&___nl__10);
#line 94
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 94
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(63)));
#line 94
if(c_rt_lib0check_true_native(___nl__11)){ goto label_83;}
#line 96
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(41)));
#line 96
if(c_rt_lib0check_true_native(___nl__11)){ goto label_100;}
#line 96
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 96
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 96
nl_die_arg(___nl__11);
#line 94
label_83:
#line 94
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__10, ___get_global_const(63)));
#line 95
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 95
c_rt_lib0move(&___nl__16,___get_global_const(417));
#line 95
c_rt_lib0move(&___nl__15, wprinter0build_sim(___nl__16));
#line 95
c_rt_lib0clear(&___nl__16);
#line 95
c_rt_lib0move(&___nl__16, wprinter0get_sep());
#line 95
c_rt_lib0move(&___nl__17, pretty_printer_priv0print_val(___nl__12));
#line 95
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(4, ___nl__14, ___nl__15, ___nl__16, ___nl__17));
#line 95
c_rt_lib0clear(&___nl__14);
#line 95
c_rt_lib0clear(&___nl__15);
#line 95
c_rt_lib0clear(&___nl__16);
#line 95
c_rt_lib0clear(&___nl__17);
#line 95
c_rt_lib0delete(array0append(&___nl__4, ___nl__13));
#line 95
c_rt_lib0clear(&___nl__13);
#line 95
c_rt_lib0clear(&___nl__12);
#line 96
goto label_102;
#line 96
label_100:
#line 97
goto label_102;
#line 97
label_102:
#line 97
c_rt_lib0clear(&___nl__10);
#line 97
c_rt_lib0clear(&___nl__11);
#line 98
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 98
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 98
c_rt_lib0clear(&___nl__11);
#line 98
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 98
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 98
c_rt_lib0clear(&___nl__11);
#line 98
c_rt_lib0move(&___nl__10, c_rt_lib0num_ne(___nl__6, ___nl__10));
#line 98
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 98
if(c_rt_lib0check_true_native(___nl__10)){ goto label_124;}
#line 98
c_rt_lib0move(&___nl__13,___get_global_const(256));
#line 98
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 98
c_rt_lib0clear(&___nl__13);
#line 98
c_rt_lib0move(&___nl__13, wprinter0get_sep());
#line 98
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__12, ___nl__13));
#line 98
c_rt_lib0clear(&___nl__12);
#line 98
c_rt_lib0clear(&___nl__13);
#line 98
c_rt_lib0delete(array0append(&___nl__4, ___nl__11));
#line 98
c_rt_lib0clear(&___nl__11);
#line 98
goto label_124;
#line 98
label_124:
#line 98
c_rt_lib0clear(&___nl__10);
#line 98
c_rt_lib0clear(&___nl__9);
#line 99
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 99
goto label_41;
#line 99
label_129:
#line 99
c_rt_lib0clear(&___nl__5);
#line 99
c_rt_lib0clear(&___nl__6);
#line 99
c_rt_lib0clear(&___nl__7);
#line 99
c_rt_lib0clear(&___nl__8);
#line 100
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 100
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 100
c_rt_lib0clear(&___nl__6);
#line 100
c_rt_lib0delete(array0push(&___nl__4, ___nl__5));
#line 100
c_rt_lib0clear(&___nl__5);
#line 101
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(788)));
#line 101
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(63)));
#line 101
if(c_rt_lib0check_true_native(___nl__6)){ goto label_147;}
#line 108
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(41)));
#line 108
if(c_rt_lib0check_true_native(___nl__6)){ goto label_164;}
#line 108
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 108
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 108
nl_die_arg(___nl__6);
#line 101
label_147:
#line 101
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(63)));
#line 103
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 104
c_rt_lib0move(&___nl__11,___get_global_const(417));
#line 104
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 104
c_rt_lib0clear(&___nl__11);
#line 105
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 106
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_sim_value(___nl__7));
#line 106
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(4, ___nl__9, ___nl__10, ___nl__11, ___nl__12));
#line 106
c_rt_lib0clear(&___nl__9);
#line 106
c_rt_lib0clear(&___nl__10);
#line 106
c_rt_lib0clear(&___nl__11);
#line 106
c_rt_lib0clear(&___nl__12);
#line 106
c_rt_lib0delete(array0append(&___nl__4, ___nl__8));
#line 106
c_rt_lib0clear(&___nl__8);
#line 106
c_rt_lib0clear(&___nl__7);
#line 108
goto label_166;
#line 108
label_164:
#line 109
goto label_166;
#line 109
label_166:
#line 109
c_rt_lib0clear(&___nl__5);
#line 109
c_rt_lib0clear(&___nl__6);
#line 110
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__4));
#line 110
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 110
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__5, ___nl__6));
#line 110
c_rt_lib0clear(&___nl__6);
#line 110
c_rt_lib0clear(&___nl__5);
#line 110
c_rt_lib0clear(&___nl__3);
#line 110
c_rt_lib0clear(&___nl__4);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
c_rt_lib0clear(&___nl__2);
#line 110
return NULL;
}

ImmT pretty_printer_priv0join_print_var_decl(ImmT ___nl__0) {
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
#line 114
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 115
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 115
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 115
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 115
label_4:
#line 115
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 115
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 116
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 116
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_var_decl(___nl__7));
#line 116
c_rt_lib0clear(&___nl__7);
#line 116
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 116
c_rt_lib0clear(&___nl__6);
#line 117
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 117
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 117
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 117
c_rt_lib0clear(&___nl__7);
#line 117
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 117
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 117
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 117
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 117
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 117
c_rt_lib0clear(&___nl__9);
#line 117
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 117
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 117
c_rt_lib0clear(&___nl__8);
#line 117
c_rt_lib0clear(&___nl__9);
#line 117
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 117
c_rt_lib0clear(&___nl__7);
#line 117
goto label_29;
#line 117
label_29:
#line 117
c_rt_lib0clear(&___nl__6);
#line 118
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 118
goto label_4;
#line 118
label_33:
#line 118
c_rt_lib0clear(&___nl__2);
#line 118
c_rt_lib0clear(&___nl__3);
#line 118
c_rt_lib0clear(&___nl__4);
#line 118
c_rt_lib0clear(&___nl__5);
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

ImmT pretty_printer_priv0print_var_decl(ImmT ___nl__0) {
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
#line 123
c_rt_lib0move(&___nl__3,___get_global_const(849));
#line 123
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0move(&___nl__3, wprinter0get_sep());
#line 123
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__2, ___nl__3));
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0clear(&___nl__3);
#line 124
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 124
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(63)));
#line 124
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(41)));
#line 132
if(c_rt_lib0check_true_native(___nl__3)){ goto label_36;}
#line 132
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 132
nl_die_arg(___nl__3);
#line 124
label_15:
#line 124
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(63)));
#line 126
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 126
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 126
c_rt_lib0clear(&___nl__7);
#line 127
c_rt_lib0move(&___nl__7, wprinter0get_sep());
#line 128
c_rt_lib0move(&___nl__9,___get_global_const(417));
#line 128
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 128
c_rt_lib0clear(&___nl__9);
#line 129
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 130
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__4));
#line 130
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(5, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10));
#line 130
c_rt_lib0clear(&___nl__6);
#line 130
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0clear(&___nl__8);
#line 130
c_rt_lib0clear(&___nl__9);
#line 130
c_rt_lib0clear(&___nl__10);
#line 130
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 130
c_rt_lib0clear(&___nl__5);
#line 130
c_rt_lib0clear(&___nl__4);
#line 132
goto label_43;
#line 132
label_36:
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 133
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 133
c_rt_lib0clear(&___nl__5);
#line 133
c_rt_lib0delete(array0push(&___nl__1, ___nl__4));
#line 133
c_rt_lib0clear(&___nl__4);
#line 134
goto label_43;
#line 134
label_43:
#line 134
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0clear(&___nl__3);
#line 135
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 135
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(192)));
#line 135
if(c_rt_lib0check_true_native(___nl__3)){ goto label_54;}
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(41)));
#line 137
if(c_rt_lib0check_true_native(___nl__3)){ goto label_71;}
#line 137
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 137
nl_die_arg(___nl__3);
#line 135
label_54:
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(192)));
#line 136
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 136
c_rt_lib0move(&___nl__8,___get_global_const(865));
#line 136
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 136
c_rt_lib0clear(&___nl__8);
#line 136
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 136
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__4));
#line 136
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(4, ___nl__6, ___nl__7, ___nl__8, ___nl__9));
#line 136
c_rt_lib0clear(&___nl__6);
#line 136
c_rt_lib0clear(&___nl__7);
#line 136
c_rt_lib0clear(&___nl__8);
#line 136
c_rt_lib0clear(&___nl__9);
#line 136
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 136
c_rt_lib0clear(&___nl__5);
#line 136
c_rt_lib0clear(&___nl__4);
#line 137
goto label_73;
#line 137
label_71:
#line 138
goto label_73;
#line 138
label_73:
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0move(&___nl__2, wprinter0build_pretty_l(___nl__1));
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
return ___nl__2;
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
return NULL;
}

ImmT pretty_printer_priv0pind(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 143
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 144
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 144
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 144
label_3:
#line 144
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__0));
#line 144
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 144
c_rt_lib0move(&___nl__6,___get_global_const(243));
#line 144
c_rt_lib0move(&___nl__5, string0chr(___nl__6));
#line 144
c_rt_lib0clear(&___nl__6);
#line 144
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__5));
#line 144
c_rt_lib0clear(&___nl__5);
#line 144
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 144
goto label_3;
#line 144
label_13:
#line 144
c_rt_lib0clear(&___nl__2);
#line 144
c_rt_lib0clear(&___nl__3);
#line 144
c_rt_lib0clear(&___nl__4);
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
return ___nl__1;
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
return NULL;
}

ImmT pretty_printer_priv0join_print_hash_elem(ImmT ___nl__0) {
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
#line 149
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 150
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 150
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 150
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 150
label_4:
#line 150
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 150
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 151
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 151
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_hash_elem(___nl__7));
#line 151
c_rt_lib0clear(&___nl__7);
#line 151
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 151
c_rt_lib0clear(&___nl__6);
#line 152
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 152
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 152
c_rt_lib0clear(&___nl__7);
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 152
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 152
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 152
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 152
c_rt_lib0clear(&___nl__9);
#line 152
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 152
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 152
c_rt_lib0clear(&___nl__8);
#line 152
c_rt_lib0clear(&___nl__9);
#line 152
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 152
c_rt_lib0clear(&___nl__7);
#line 152
goto label_29;
#line 152
label_29:
#line 152
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 153
goto label_4;
#line 153
label_33:
#line 153
c_rt_lib0clear(&___nl__2);
#line 153
c_rt_lib0clear(&___nl__3);
#line 153
c_rt_lib0clear(&___nl__4);
#line 153
c_rt_lib0clear(&___nl__5);
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
return ___nl__1;
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
return NULL;
}

ImmT pretty_printer_priv0print_hash_elem(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(205)));
#line 158
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(204)));
#line 158
label_7:
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 158
if(c_rt_lib0check_true_native(___nl__1)){ goto label_42;}
#line 159
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 159
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(192)));
#line 159
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__2, ___get_global_const(856)));
#line 160
c_rt_lib0move(&___nl__3, pretty_printer_priv0is_proper_hash_key(___nl__2));
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 160
if(c_rt_lib0check_true_native(___nl__3)){ goto label_25;}
#line 160
c_rt_lib0move(&___nl__4,___get_global_const(464));
#line 160
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__2));
#line 160
c_rt_lib0move(&___nl__5,___get_global_const(464));
#line 160
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 160
c_rt_lib0clear(&___nl__5);
#line 160
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
goto label_25;
#line 160
label_25:
#line 160
c_rt_lib0clear(&___nl__3);
#line 161
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 161
c_rt_lib0move(&___nl__5,___get_global_const(270));
#line 161
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__2, ___nl__5));
#line 161
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 161
c_rt_lib0move(&___nl__3, pretty_printer_priv0get_compressed_fun_val(___nl__4, ___nl__5, ___nl__6));
#line 161
c_rt_lib0clear(&___nl__6);
#line 161
c_rt_lib0clear(&___nl__5);
#line 161
c_rt_lib0clear(&___nl__4);
#line 161
c_rt_lib0clear(&___nl__0);
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
c_rt_lib0clear(&___nl__2);
#line 161
return ___nl__3;
#line 161
c_rt_lib0clear(&___nl__3);
#line 161
c_rt_lib0clear(&___nl__2);
#line 162
goto label_42;
#line 162
label_42:
#line 162
c_rt_lib0clear(&___nl__1);
#line 164
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 164
c_rt_lib0move(&___nl__3, pretty_printer_priv0print_val(___nl__4));
#line 164
c_rt_lib0clear(&___nl__4);
#line 165
c_rt_lib0move(&___nl__4, wprinter0get_sep());
#line 166
c_rt_lib0move(&___nl__6,___get_global_const(254));
#line 166
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 166
c_rt_lib0clear(&___nl__6);
#line 167
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 168
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 168
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 168
c_rt_lib0clear(&___nl__8);
#line 168
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(5, ___nl__3, ___nl__4, ___nl__5, ___nl__6, ___nl__7));
#line 168
c_rt_lib0clear(&___nl__3);
#line 168
c_rt_lib0clear(&___nl__4);
#line 168
c_rt_lib0clear(&___nl__5);
#line 168
c_rt_lib0clear(&___nl__6);
#line 168
c_rt_lib0clear(&___nl__7);
#line 168
c_rt_lib0move(&___nl__1, wprinter0build_pretty_l(___nl__2));
#line 168
c_rt_lib0clear(&___nl__2);
#line 168
c_rt_lib0clear(&___nl__0);
#line 168
return ___nl__1;
#line 168
c_rt_lib0clear(&___nl__1);
#line 168
c_rt_lib0clear(&___nl__0);
#line 168
return NULL;
}

ImmT pretty_printer_priv0print_variant(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 173
c_rt_lib0move(&___nl__3,___get_global_const(7));
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__3));
#line 173
c_rt_lib0clear(&___nl__3);
#line 173
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 173
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(849)));
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(831)));
#line 173
label_9:
#line 173
c_rt_lib0clear(&___nl__2);
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 173
if(c_rt_lib0check_true_native(___nl__1)){ goto label_21;}
#line 174
c_rt_lib0move(&___nl__3,___get_global_const(964));
#line 174
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 174
c_rt_lib0clear(&___nl__3);
#line 174
c_rt_lib0clear(&___nl__0);
#line 174
c_rt_lib0clear(&___nl__1);
#line 174
return ___nl__2;
#line 174
c_rt_lib0clear(&___nl__2);
#line 175
goto label_43;
#line 175
label_21:
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 175
c_rt_lib0move(&___nl__3,___get_global_const(8));
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__3));
#line 175
c_rt_lib0clear(&___nl__3);
#line 175
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 175
if(c_rt_lib0check_true_native(___nl__2)){ goto label_31;}
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(849)));
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(831)));
#line 175
label_31:
#line 175
c_rt_lib0clear(&___nl__2);
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 175
if(c_rt_lib0check_true_native(___nl__1)){ goto label_43;}
#line 176
c_rt_lib0move(&___nl__3,___get_global_const(965));
#line 176
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 176
c_rt_lib0clear(&___nl__3);
#line 176
c_rt_lib0clear(&___nl__0);
#line 176
c_rt_lib0clear(&___nl__1);
#line 176
return ___nl__2;
#line 176
c_rt_lib0clear(&___nl__2);
#line 177
goto label_43;
#line 177
label_43:
#line 177
c_rt_lib0clear(&___nl__1);
#line 178
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(849)));
#line 178
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 178
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(204)));
#line 178
if(c_rt_lib0check_true_native(___nl__1)){ goto label_52;}
#line 178
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(849)));
#line 178
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 178
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(205)));
#line 178
label_52:
#line 178
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 178
if(c_rt_lib0check_true_native(___nl__1)){ goto label_73;}
#line 179
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(849)));
#line 179
c_rt_lib0move(&___nl__4,___get_global_const(417));
#line 179
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 179
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 179
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 179
c_rt_lib0move(&___nl__2, pretty_printer_priv0get_compressed_fun_val(___nl__3, ___nl__4, ___nl__5));
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0clear(&___nl__3);
#line 179
c_rt_lib0clear(&___nl__0);
#line 179
c_rt_lib0clear(&___nl__1);
#line 179
return ___nl__2;
#line 179
c_rt_lib0clear(&___nl__2);
#line 180
goto label_73;
#line 180
label_73:
#line 180
c_rt_lib0clear(&___nl__1);
#line 181
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 182
c_rt_lib0move(&___nl__3,___get_global_const(417));
#line 182
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 182
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 182
c_rt_lib0clear(&___nl__4);
#line 182
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 182
c_rt_lib0clear(&___nl__3);
#line 182
c_rt_lib0delete(array0push(&___nl__1, ___nl__2));
#line 182
c_rt_lib0clear(&___nl__2);
#line 184
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(849)));
#line 184
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(192)));
#line 184
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(831)));
#line 184
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 184
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 184
if(c_rt_lib0check_true_native(___nl__2)){ goto label_106;}
#line 183
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 183
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 183
c_rt_lib0clear(&___nl__5);
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(849)));
#line 183
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__6));
#line 183
c_rt_lib0clear(&___nl__6);
#line 183
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 183
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 183
c_rt_lib0clear(&___nl__7);
#line 183
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(3, ___nl__4, ___nl__5, ___nl__6));
#line 183
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0clear(&___nl__5);
#line 183
c_rt_lib0clear(&___nl__6);
#line 183
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 183
c_rt_lib0clear(&___nl__3);
#line 183
goto label_106;
#line 183
label_106:
#line 183
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 185
c_rt_lib0clear(&___nl__0);
#line 185
c_rt_lib0clear(&___nl__1);
#line 185
return ___nl__2;
#line 185
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0clear(&___nl__1);
#line 185
c_rt_lib0clear(&___nl__0);
#line 185
return NULL;
}

ImmT pretty_printer_priv0print_variant_case_decl(ImmT ___nl__0) {
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
#line 189
c_rt_lib0move(&___nl__3,___get_global_const(417));
#line 189
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 189
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 189
c_rt_lib0clear(&___nl__4);
#line 189
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 189
c_rt_lib0clear(&___nl__3);
#line 189
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 189
c_rt_lib0clear(&___nl__2);
#line 190
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 190
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(192)));
#line 190
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 192
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(41)));
#line 192
if(c_rt_lib0check_true_native(___nl__3)){ goto label_33;}
#line 192
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 192
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 192
nl_die_arg(___nl__3);
#line 190
label_16:
#line 190
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(192)));
#line 191
c_rt_lib0move(&___nl__7,___get_global_const(373));
#line 191
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 191
c_rt_lib0clear(&___nl__7);
#line 191
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_var_decl(___nl__4));
#line 191
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 191
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 191
c_rt_lib0clear(&___nl__9);
#line 191
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(3, ___nl__6, ___nl__7, ___nl__8));
#line 191
c_rt_lib0clear(&___nl__6);
#line 191
c_rt_lib0clear(&___nl__7);
#line 191
c_rt_lib0clear(&___nl__8);
#line 191
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 191
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0clear(&___nl__4);
#line 192
goto label_35;
#line 192
label_33:
#line 193
goto label_35;
#line 193
label_35:
#line 193
c_rt_lib0clear(&___nl__2);
#line 193
c_rt_lib0clear(&___nl__3);
#line 194
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 194
c_rt_lib0clear(&___nl__0);
#line 194
c_rt_lib0clear(&___nl__1);
#line 194
return ___nl__2;
#line 194
c_rt_lib0clear(&___nl__2);
#line 194
c_rt_lib0clear(&___nl__1);
#line 194
c_rt_lib0clear(&___nl__0);
#line 194
return NULL;
}

ImmT pretty_printer_priv0join_print_fun_arg(ImmT ___nl__0) {
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
#line 198
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 199
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 199
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 199
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 199
label_4:
#line 199
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 199
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 200
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 200
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_fun_arg(___nl__7));
#line 200
c_rt_lib0clear(&___nl__7);
#line 200
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 200
c_rt_lib0clear(&___nl__6);
#line 201
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 201
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 201
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 201
c_rt_lib0clear(&___nl__7);
#line 201
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 201
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 201
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 201
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 201
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 201
c_rt_lib0clear(&___nl__9);
#line 201
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 201
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 201
c_rt_lib0clear(&___nl__8);
#line 201
c_rt_lib0clear(&___nl__9);
#line 201
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 201
c_rt_lib0clear(&___nl__7);
#line 201
goto label_29;
#line 201
label_29:
#line 201
c_rt_lib0clear(&___nl__6);
#line 202
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 202
goto label_4;
#line 202
label_33:
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0clear(&___nl__3);
#line 202
c_rt_lib0clear(&___nl__4);
#line 202
c_rt_lib0clear(&___nl__5);
#line 203
c_rt_lib0clear(&___nl__0);
#line 203
return ___nl__1;
#line 203
c_rt_lib0clear(&___nl__1);
#line 203
c_rt_lib0clear(&___nl__0);
#line 203
return NULL;
}

ImmT pretty_printer_priv0print_fun_arg(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 207
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 208
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(222)));
#line 208
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(5)));
#line 208
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 210
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(41)));
#line 210
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 210
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 210
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 210
nl_die_arg(___nl__3);
#line 208
label_9:
#line 209
c_rt_lib0move(&___nl__6,___get_global_const(5));
#line 209
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 209
c_rt_lib0clear(&___nl__6);
#line 209
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 209
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 209
c_rt_lib0clear(&___nl__5);
#line 209
c_rt_lib0clear(&___nl__6);
#line 209
c_rt_lib0delete(array0append(&___nl__1, ___nl__4));
#line 209
c_rt_lib0clear(&___nl__4);
#line 210
goto label_22;
#line 210
label_20:
#line 211
goto label_22;
#line 211
label_22:
#line 211
c_rt_lib0clear(&___nl__2);
#line 211
c_rt_lib0clear(&___nl__3);
#line 212
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 212
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_val(___nl__3));
#line 212
c_rt_lib0clear(&___nl__3);
#line 212
c_rt_lib0delete(array0push(&___nl__1, ___nl__2));
#line 212
c_rt_lib0clear(&___nl__2);
#line 213
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 213
c_rt_lib0clear(&___nl__0);
#line 213
c_rt_lib0clear(&___nl__1);
#line 213
return ___nl__2;
#line 213
c_rt_lib0clear(&___nl__2);
#line 213
c_rt_lib0clear(&___nl__1);
#line 213
c_rt_lib0clear(&___nl__0);
#line 213
return NULL;
}

ImmT pretty_printer_priv0count_structs(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 217
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 218
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 218
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 218
label_4:
#line 218
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 218
if(c_rt_lib0check_true_native(___nl__6)){ goto label_26;}
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 219
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 219
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(192)));
#line 219
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(204)));
#line 219
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 219
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 219
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(192)));
#line 219
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(205)));
#line 219
label_15:
#line 219
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 219
if(c_rt_lib0check_true_native(___nl__7)){ goto label_22;}
#line 219
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 219
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__8));
#line 219
c_rt_lib0clear(&___nl__8);
#line 219
goto label_22;
#line 219
label_22:
#line 219
c_rt_lib0clear(&___nl__7);
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 220
goto label_4;
#line 220
label_26:
#line 220
c_rt_lib0clear(&___nl__2);
#line 220
c_rt_lib0clear(&___nl__3);
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0clear(&___nl__5);
#line 220
c_rt_lib0clear(&___nl__6);
#line 221
c_rt_lib0clear(&___nl__0);
#line 221
return ___nl__1;
#line 221
c_rt_lib0clear(&___nl__1);
#line 221
c_rt_lib0clear(&___nl__0);
#line 221
return NULL;
}

ImmT pretty_printer_priv0get_compressed_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
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
#line 226
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 227
c_rt_lib0copy(&___nl__5, ___nl__2);
#line 228
label_2:
#line 229
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 229
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(204)));
#line 229
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 229
if(c_rt_lib0check_true_native(___nl__6)){ goto label_39;}
#line 230
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 230
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(204)));
#line 231
c_rt_lib0move(&___nl__8,___get_global_const(258));
#line 231
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__8));
#line 231
c_rt_lib0clear(&___nl__8);
#line 232
c_rt_lib0move(&___nl__8,___get_global_const(259));
#line 232
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 232
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 232
c_rt_lib0clear(&___nl__8);
#line 233
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 233
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 233
c_rt_lib0move(&___nl__8, c_rt_lib0num_ne(___nl__8, ___nl__9));
#line 233
c_rt_lib0clear(&___nl__9);
#line 233
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 233
if(c_rt_lib0check_true_native(___nl__8)){ goto label_30;}
#line 234
c_rt_lib0move(&___nl__9, pretty_printer_priv0join_print_val(___nl__7));
#line 234
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 234
c_rt_lib0clear(&___nl__9);
#line 235
c_rt_lib0clear(&___nl__6);
#line 235
c_rt_lib0clear(&___nl__7);
#line 235
c_rt_lib0clear(&___nl__8);
#line 235
goto label_73;
#line 236
goto label_30;
#line 236
label_30:
#line 236
c_rt_lib0clear(&___nl__8);
#line 237
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 237
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 237
c_rt_lib0clear(&___nl__9);
#line 237
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 237
c_rt_lib0clear(&___nl__8);
#line 237
c_rt_lib0clear(&___nl__7);
#line 238
goto label_70;
#line 238
label_39:
#line 238
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 238
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(205)));
#line 238
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 238
if(c_rt_lib0check_true_native(___nl__6)){ goto label_61;}
#line 239
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 239
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(205)));
#line 240
c_rt_lib0move(&___nl__8,___get_global_const(252));
#line 240
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__8));
#line 240
c_rt_lib0clear(&___nl__8);
#line 241
c_rt_lib0move(&___nl__8,___get_global_const(253));
#line 241
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 241
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 241
c_rt_lib0clear(&___nl__8);
#line 242
c_rt_lib0move(&___nl__8, pretty_printer_priv0join_print_hash_elem(___nl__7));
#line 242
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 242
c_rt_lib0clear(&___nl__8);
#line 243
c_rt_lib0clear(&___nl__6);
#line 243
c_rt_lib0clear(&___nl__7);
#line 243
goto label_73;
#line 243
c_rt_lib0clear(&___nl__7);
#line 244
goto label_70;
#line 244
label_61:
#line 245
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__0));
#line 245
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 245
c_rt_lib0clear(&___nl__8);
#line 245
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 245
c_rt_lib0clear(&___nl__7);
#line 246
c_rt_lib0clear(&___nl__6);
#line 246
goto label_73;
#line 247
goto label_70;
#line 247
label_70:
#line 247
c_rt_lib0clear(&___nl__6);
#line 228
goto label_2;
#line 228
label_73:
#line 249
c_rt_lib0move(&___nl__6, wprinter0build_pretty_arr_decl(___nl__3, ___nl__4, ___nl__5));
#line 249
c_rt_lib0clear(&___nl__0);
#line 249
c_rt_lib0clear(&___nl__1);
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
c_rt_lib0clear(&___nl__3);
#line 249
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0clear(&___nl__5);
#line 249
return ___nl__6;
#line 249
c_rt_lib0clear(&___nl__6);
#line 249
c_rt_lib0clear(&___nl__3);
#line 249
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0clear(&___nl__5);
#line 249
c_rt_lib0clear(&___nl__0);
#line 249
c_rt_lib0clear(&___nl__1);
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
return NULL;
}

ImmT pretty_printer_priv0print_st(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 253
c_rt_lib0move(&___nl__3,___get_global_const(571));
#line 253
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__3));
#line 253
c_rt_lib0clear(&___nl__3);
#line 254
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__1, ___nl__2));
#line 254
c_rt_lib0clear(&___nl__1);
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
return NULL;
}

ImmT pretty_printer_priv0get_fun_label(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 258
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 258
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 258
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 258
c_rt_lib0move(&___nl__2,___get_global_const(185));
#line 258
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 258
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 258
goto label_9;
#line 258
label_7:
#line 258
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 258
label_9:
#line 258
c_rt_lib0clear(&___nl__0);
#line 258
c_rt_lib0clear(&___nl__1);
#line 258
return ___nl__2;
#line 258
c_rt_lib0clear(&___nl__2);
#line 258
c_rt_lib0clear(&___nl__0);
#line 258
c_rt_lib0clear(&___nl__1);
#line 258
return NULL;
}

ImmT pretty_printer_priv0string_to_nl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 262
c_rt_lib0move(&___nl__2,___get_global_const(464));
#line 262
c_rt_lib0move(&___nl__3,___get_global_const(1006));
#line 262
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 262
c_rt_lib0clear(&___nl__3);
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
c_rt_lib0clear(&___nl__0);
#line 262
return ___nl__1;
#line 262
c_rt_lib0clear(&___nl__1);
#line 262
c_rt_lib0clear(&___nl__0);
#line 262
return NULL;
}

ImmT pretty_printer_priv0join_print_val(ImmT ___nl__0) {
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
#line 266
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 267
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 267
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 267
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 267
label_4:
#line 267
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 267
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 268
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 268
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 268
c_rt_lib0clear(&___nl__7);
#line 268
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 268
c_rt_lib0clear(&___nl__6);
#line 269
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 269
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 269
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 269
c_rt_lib0clear(&___nl__7);
#line 269
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 269
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 269
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 269
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 269
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 269
c_rt_lib0clear(&___nl__9);
#line 269
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 269
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 269
c_rt_lib0clear(&___nl__8);
#line 269
c_rt_lib0clear(&___nl__9);
#line 269
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 269
c_rt_lib0clear(&___nl__7);
#line 269
goto label_29;
#line 269
label_29:
#line 269
c_rt_lib0clear(&___nl__6);
#line 270
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 270
goto label_4;
#line 270
label_33:
#line 270
c_rt_lib0clear(&___nl__2);
#line 270
c_rt_lib0clear(&___nl__3);
#line 270
c_rt_lib0clear(&___nl__4);
#line 270
c_rt_lib0clear(&___nl__5);
#line 271
c_rt_lib0clear(&___nl__0);
#line 271
return ___nl__1;
#line 271
c_rt_lib0clear(&___nl__1);
#line 271
c_rt_lib0clear(&___nl__0);
#line 271
return NULL;
}

ImmT pretty_printer_priv0is_to_change_ov(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 275
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 275
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(812)));
#line 275
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 275
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 275
if(c_rt_lib0check_true_native(___nl__1)){ goto label_11;}
#line 275
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 275
c_rt_lib0clear(&___nl__0);
#line 275
c_rt_lib0clear(&___nl__1);
#line 275
return ___nl__2;
#line 275
c_rt_lib0clear(&___nl__2);
#line 275
goto label_11;
#line 275
label_11:
#line 275
c_rt_lib0clear(&___nl__1);
#line 276
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 276
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__1, ___get_global_const(812)));
#line 277
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 277
c_rt_lib0move(&___nl__2, array0len(___nl__4));
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0move(&___nl__4,___get_global_const(6));
#line 277
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__4));
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 277
if(c_rt_lib0check_true_native(___nl__3)){ goto label_32;}
#line 277
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(132)));
#line 277
c_rt_lib0move(&___nl__4,___get_global_const(772));
#line 277
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
if(c_rt_lib0check_true_native(___nl__2)){ goto label_32;}
#line 277
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(132)));
#line 277
c_rt_lib0move(&___nl__4,___get_global_const(1007));
#line 277
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
label_32:
#line 277
c_rt_lib0clear(&___nl__3);
#line 277
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 277
if(c_rt_lib0check_true_native(___nl__2)){ goto label_106;}
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 278
c_rt_lib0move(&___nl__5,___get_global_const(886));
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 278
c_rt_lib0clear(&___nl__5);
#line 278
if(c_rt_lib0check_true_native(___nl__3)){ goto label_45;}
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 278
c_rt_lib0move(&___nl__5,___get_global_const(884));
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 278
c_rt_lib0clear(&___nl__5);
#line 278
label_45:
#line 278
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 278
if(c_rt_lib0check_true_native(___nl__4)){ goto label_55;}
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 278
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 278
c_rt_lib0clear(&___nl__5);
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(198)));
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(192)));
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(771)));
#line 278
label_55:
#line 278
c_rt_lib0clear(&___nl__4);
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 278
if(c_rt_lib0check_true_native(___nl__3)){ goto label_103;}
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 279
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 279
c_rt_lib0clear(&___nl__5);
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(771)));
#line 280
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(327)));
#line 280
c_rt_lib0move(&___nl__5, array0len(___nl__7));
#line 280
c_rt_lib0clear(&___nl__7);
#line 280
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 280
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 280
c_rt_lib0clear(&___nl__7);
#line 280
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 280
if(c_rt_lib0check_true_native(___nl__6)){ goto label_85;}
#line 280
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(327)));
#line 280
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 280
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 280
c_rt_lib0clear(&___nl__8);
#line 280
c_rt_lib0move(&___nl__8,___get_global_const(571));
#line 280
c_rt_lib0move(&___nl__5, string0index2(___nl__7, ___nl__8));
#line 280
c_rt_lib0clear(&___nl__8);
#line 280
c_rt_lib0clear(&___nl__7);
#line 280
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 280
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__5, ___nl__7));
#line 280
c_rt_lib0clear(&___nl__7);
#line 280
label_85:
#line 280
c_rt_lib0clear(&___nl__6);
#line 280
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 280
if(c_rt_lib0check_true_native(___nl__5)){ goto label_99;}
#line 281
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 281
c_rt_lib0clear(&___nl__0);
#line 281
c_rt_lib0clear(&___nl__1);
#line 281
c_rt_lib0clear(&___nl__2);
#line 281
c_rt_lib0clear(&___nl__3);
#line 281
c_rt_lib0clear(&___nl__4);
#line 281
c_rt_lib0clear(&___nl__5);
#line 281
return ___nl__6;
#line 281
c_rt_lib0clear(&___nl__6);
#line 282
goto label_99;
#line 282
label_99:
#line 282
c_rt_lib0clear(&___nl__5);
#line 282
c_rt_lib0clear(&___nl__4);
#line 283
goto label_103;
#line 283
label_103:
#line 283
c_rt_lib0clear(&___nl__3);
#line 284
goto label_106;
#line 284
label_106:
#line 284
c_rt_lib0clear(&___nl__2);
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 285
c_rt_lib0clear(&___nl__0);
#line 285
c_rt_lib0clear(&___nl__1);
#line 285
return ___nl__2;
#line 285
c_rt_lib0clear(&___nl__2);
#line 285
c_rt_lib0clear(&___nl__1);
#line 285
c_rt_lib0clear(&___nl__0);
#line 285
return NULL;
}

ImmT pretty_printer_priv0print_val(ImmT ___nl__0) {
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
#line 289
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 289
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(196)));
#line 289
if(c_rt_lib0check_true_native(___nl__2)){ goto label_38;}
#line 291
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(771)));
#line 291
if(c_rt_lib0check_true_native(___nl__2)){ goto label_49;}
#line 301
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(856)));
#line 301
if(c_rt_lib0check_true_native(___nl__2)){ goto label_121;}
#line 304
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(841)));
#line 304
if(c_rt_lib0check_true_native(___nl__2)){ goto label_146;}
#line 306
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(849)));
#line 306
if(c_rt_lib0check_true_native(___nl__2)){ goto label_157;}
#line 308
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(855)));
#line 308
if(c_rt_lib0check_true_native(___nl__2)){ goto label_168;}
#line 310
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(854)));
#line 310
if(c_rt_lib0check_true_native(___nl__2)){ goto label_191;}
#line 318
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(208)));
#line 318
if(c_rt_lib0check_true_native(___nl__2)){ goto label_236;}
#line 351
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(857)));
#line 351
if(c_rt_lib0check_true_native(___nl__2)){ goto label_405;}
#line 366
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(861)));
#line 366
if(c_rt_lib0check_true_native(___nl__2)){ goto label_459;}
#line 368
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(860)));
#line 368
if(c_rt_lib0check_true_native(___nl__2)){ goto label_478;}
#line 370
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(858)));
#line 370
if(c_rt_lib0check_true_native(___nl__2)){ goto label_497;}
#line 372
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(812)));
#line 372
if(c_rt_lib0check_true_native(___nl__2)){ goto label_516;}
#line 396
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(831)));
#line 396
if(c_rt_lib0check_true_native(___nl__2)){ goto label_694;}
#line 398
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(204)));
#line 398
if(c_rt_lib0check_true_native(___nl__2)){ goto label_707;}
#line 400
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(205)));
#line 400
if(c_rt_lib0check_true_native(___nl__2)){ goto label_722;}
#line 402
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(859)));
#line 402
if(c_rt_lib0check_true_native(___nl__2)){ goto label_739;}
#line 402
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 402
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 402
nl_die_arg(___nl__2);
#line 289
label_38:
#line 289
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(196)));
#line 290
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__3));
#line 290
c_rt_lib0clear(&___nl__0);
#line 290
c_rt_lib0clear(&___nl__1);
#line 290
c_rt_lib0clear(&___nl__2);
#line 290
c_rt_lib0clear(&___nl__3);
#line 290
return ___nl__4;
#line 290
c_rt_lib0clear(&___nl__4);
#line 290
c_rt_lib0clear(&___nl__3);
#line 291
goto label_756;
#line 291
label_49:
#line 291
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(771)));
#line 292
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 293
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(327)));
#line 293
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 293
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 293
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 293
label_56:
#line 293
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 293
if(c_rt_lib0check_true_native(___nl__10)){ goto label_68;}
#line 293
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 294
c_rt_lib0move(&___nl__11,___get_global_const(464));
#line 294
c_rt_lib0move(&___nl__12, pretty_printer_priv0string_to_nl(___nl__6));
#line 294
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 294
c_rt_lib0clear(&___nl__12);
#line 294
c_rt_lib0delete(array0push(&___nl__4, ___nl__11));
#line 294
c_rt_lib0clear(&___nl__11);
#line 295
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 295
goto label_56;
#line 295
label_68:
#line 295
c_rt_lib0clear(&___nl__5);
#line 295
c_rt_lib0clear(&___nl__6);
#line 295
c_rt_lib0clear(&___nl__7);
#line 295
c_rt_lib0clear(&___nl__8);
#line 295
c_rt_lib0clear(&___nl__9);
#line 295
c_rt_lib0clear(&___nl__10);
#line 296
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(908)));
#line 296
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(907)));
#line 296
if(c_rt_lib0check_true_native(___nl__6)){ goto label_83;}
#line 297
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(906)));
#line 297
if(c_rt_lib0check_true_native(___nl__6)){ goto label_85;}
#line 297
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 297
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 297
nl_die_arg(___nl__6);
#line 296
label_83:
#line 297
goto label_105;
#line 297
label_85:
#line 298
c_rt_lib0move(&___nl__8, array0len(___nl__4));
#line 298
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 298
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 298
c_rt_lib0clear(&___nl__9);
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__4, ___nl__8));
#line 298
c_rt_lib0clear(&___nl__8);
#line 298
c_rt_lib0move(&___nl__8,___get_global_const(464));
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 298
c_rt_lib0clear(&___nl__8);
#line 298
c_rt_lib0move(&___nl__9, array0len(___nl__4));
#line 298
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 298
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__10));
#line 298
c_rt_lib0clear(&___nl__10);
#line 298
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 298
c_rt_lib0array_set(&___nl__4, ___nl__9, ___nl__8);
#line 298
c_rt_lib0clear(&___nl__7);
#line 298
c_rt_lib0clear(&___nl__8);
#line 298
c_rt_lib0clear(&___nl__9);
#line 299
goto label_105;
#line 299
label_105:
#line 299
c_rt_lib0clear(&___nl__5);
#line 299
c_rt_lib0clear(&___nl__6);
#line 300
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(908)));
#line 300
c_rt_lib0move(&___nl__5, wprinter0build_str_arr(___nl__4, ___nl__6));
#line 300
c_rt_lib0clear(&___nl__6);
#line 300
c_rt_lib0clear(&___nl__0);
#line 300
c_rt_lib0clear(&___nl__1);
#line 300
c_rt_lib0clear(&___nl__2);
#line 300
c_rt_lib0clear(&___nl__3);
#line 300
c_rt_lib0clear(&___nl__4);
#line 300
return ___nl__5;
#line 300
c_rt_lib0clear(&___nl__5);
#line 300
c_rt_lib0clear(&___nl__4);
#line 300
c_rt_lib0clear(&___nl__3);
#line 301
goto label_756;
#line 301
label_121:
#line 301
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(856)));
#line 302
c_rt_lib0move(&___nl__4, pretty_printer_priv0is_proper_hash_key(___nl__3));
#line 302
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 302
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 302
if(c_rt_lib0check_true_native(___nl__4)){ goto label_135;}
#line 302
c_rt_lib0move(&___nl__5,___get_global_const(464));
#line 302
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 302
c_rt_lib0move(&___nl__6,___get_global_const(464));
#line 302
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 302
c_rt_lib0clear(&___nl__6);
#line 302
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 302
c_rt_lib0clear(&___nl__5);
#line 302
goto label_135;
#line 302
label_135:
#line 302
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__3));
#line 303
c_rt_lib0clear(&___nl__0);
#line 303
c_rt_lib0clear(&___nl__1);
#line 303
c_rt_lib0clear(&___nl__2);
#line 303
c_rt_lib0clear(&___nl__3);
#line 303
return ___nl__4;
#line 303
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0clear(&___nl__3);
#line 304
goto label_756;
#line 304
label_146:
#line 304
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(841)));
#line 305
c_rt_lib0move(&___nl__4, pretty_printer_priv0print_variant(___nl__3));
#line 305
c_rt_lib0clear(&___nl__0);
#line 305
c_rt_lib0clear(&___nl__1);
#line 305
c_rt_lib0clear(&___nl__2);
#line 305
c_rt_lib0clear(&___nl__3);
#line 305
return ___nl__4;
#line 305
c_rt_lib0clear(&___nl__4);
#line 305
c_rt_lib0clear(&___nl__3);
#line 306
goto label_756;
#line 306
label_157:
#line 306
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(849)));
#line 307
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__3));
#line 307
c_rt_lib0clear(&___nl__0);
#line 307
c_rt_lib0clear(&___nl__1);
#line 307
c_rt_lib0clear(&___nl__2);
#line 307
c_rt_lib0clear(&___nl__3);
#line 307
return ___nl__4;
#line 307
c_rt_lib0clear(&___nl__4);
#line 307
c_rt_lib0clear(&___nl__3);
#line 308
goto label_756;
#line 308
label_168:
#line 308
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(855)));
#line 309
c_rt_lib0move(&___nl__7,___get_global_const(373));
#line 309
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 309
c_rt_lib0clear(&___nl__7);
#line 309
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__3));
#line 309
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 309
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 309
c_rt_lib0clear(&___nl__9);
#line 309
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(3, ___nl__6, ___nl__7, ___nl__8));
#line 309
c_rt_lib0clear(&___nl__6);
#line 309
c_rt_lib0clear(&___nl__7);
#line 309
c_rt_lib0clear(&___nl__8);
#line 309
c_rt_lib0move(&___nl__4, wprinter0build_pretty_a(___nl__5));
#line 309
c_rt_lib0clear(&___nl__5);
#line 309
c_rt_lib0clear(&___nl__0);
#line 309
c_rt_lib0clear(&___nl__1);
#line 309
c_rt_lib0clear(&___nl__2);
#line 309
c_rt_lib0clear(&___nl__3);
#line 309
return ___nl__4;
#line 309
c_rt_lib0clear(&___nl__4);
#line 309
c_rt_lib0clear(&___nl__3);
#line 310
goto label_756;
#line 310
label_191:
#line 310
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(854)));
#line 312
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(862)));
#line 312
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 312
c_rt_lib0clear(&___nl__7);
#line 313
c_rt_lib0move(&___nl__7, wprinter0get_sep());
#line 314
c_rt_lib0move(&___nl__11,___get_global_const(1008));
#line 314
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 314
c_rt_lib0clear(&___nl__11);
#line 314
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(863)));
#line 314
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 314
c_rt_lib0clear(&___nl__12);
#line 314
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 314
c_rt_lib0clear(&___nl__10);
#line 314
c_rt_lib0clear(&___nl__11);
#line 314
c_rt_lib0move(&___nl__8, wprinter0build_pretty_op_l(___nl__9));
#line 314
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 316
c_rt_lib0move(&___nl__13,___get_global_const(1009));
#line 316
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 316
c_rt_lib0clear(&___nl__13);
#line 316
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(864)));
#line 316
c_rt_lib0move(&___nl__13, pretty_printer_priv0print_val(___nl__14));
#line 316
c_rt_lib0clear(&___nl__14);
#line 316
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__12, ___nl__13));
#line 316
c_rt_lib0clear(&___nl__12);
#line 316
c_rt_lib0clear(&___nl__13);
#line 316
c_rt_lib0move(&___nl__10, wprinter0build_pretty_op_l(___nl__11));
#line 316
c_rt_lib0clear(&___nl__11);
#line 316
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(5, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10));
#line 316
c_rt_lib0clear(&___nl__6);
#line 316
c_rt_lib0clear(&___nl__7);
#line 316
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
c_rt_lib0clear(&___nl__10);
#line 316
c_rt_lib0move(&___nl__4, wprinter0build_pretty_a(___nl__5));
#line 316
c_rt_lib0clear(&___nl__5);
#line 316
c_rt_lib0clear(&___nl__0);
#line 316
c_rt_lib0clear(&___nl__1);
#line 316
c_rt_lib0clear(&___nl__2);
#line 316
c_rt_lib0clear(&___nl__3);
#line 316
return ___nl__4;
#line 316
c_rt_lib0clear(&___nl__4);
#line 316
c_rt_lib0clear(&___nl__3);
#line 318
goto label_756;
#line 318
label_236:
#line 318
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(208)));
#line 319
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 320
c_rt_lib0move(&___nl__5,___get_global_const(851));
#line 320
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 320
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 320
if(c_rt_lib0check_true_native(___nl__5)){ goto label_275;}
#line 322
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 322
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 322
c_rt_lib0clear(&___nl__11);
#line 322
c_rt_lib0move(&___nl__12,___get_global_const(258));
#line 322
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 322
c_rt_lib0clear(&___nl__12);
#line 322
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 322
c_rt_lib0clear(&___nl__10);
#line 322
c_rt_lib0clear(&___nl__11);
#line 322
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__9));
#line 322
c_rt_lib0clear(&___nl__9);
#line 323
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 323
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 323
c_rt_lib0clear(&___nl__10);
#line 324
c_rt_lib0move(&___nl__11,___get_global_const(259));
#line 324
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 324
c_rt_lib0clear(&___nl__11);
#line 324
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 324
c_rt_lib0clear(&___nl__8);
#line 324
c_rt_lib0clear(&___nl__9);
#line 324
c_rt_lib0clear(&___nl__10);
#line 324
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 324
c_rt_lib0clear(&___nl__7);
#line 324
c_rt_lib0clear(&___nl__0);
#line 324
c_rt_lib0clear(&___nl__1);
#line 324
c_rt_lib0clear(&___nl__2);
#line 324
c_rt_lib0clear(&___nl__3);
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
c_rt_lib0clear(&___nl__5);
#line 324
return ___nl__6;
#line 324
c_rt_lib0clear(&___nl__6);
#line 326
goto label_400;
#line 326
label_275:
#line 326
c_rt_lib0move(&___nl__5,___get_global_const(852));
#line 326
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 326
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 326
if(c_rt_lib0check_true_native(___nl__5)){ goto label_312;}
#line 328
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 328
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 328
c_rt_lib0clear(&___nl__11);
#line 328
c_rt_lib0move(&___nl__12,___get_global_const(252));
#line 328
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 328
c_rt_lib0clear(&___nl__12);
#line 328
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 328
c_rt_lib0clear(&___nl__10);
#line 328
c_rt_lib0clear(&___nl__11);
#line 328
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__9));
#line 328
c_rt_lib0clear(&___nl__9);
#line 329
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 329
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 329
c_rt_lib0clear(&___nl__10);
#line 330
c_rt_lib0move(&___nl__11,___get_global_const(253));
#line 330
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 330
c_rt_lib0clear(&___nl__11);
#line 330
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 330
c_rt_lib0clear(&___nl__8);
#line 330
c_rt_lib0clear(&___nl__9);
#line 330
c_rt_lib0clear(&___nl__10);
#line 330
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 330
c_rt_lib0clear(&___nl__7);
#line 330
c_rt_lib0clear(&___nl__0);
#line 330
c_rt_lib0clear(&___nl__1);
#line 330
c_rt_lib0clear(&___nl__2);
#line 330
c_rt_lib0clear(&___nl__3);
#line 330
c_rt_lib0clear(&___nl__4);
#line 330
c_rt_lib0clear(&___nl__5);
#line 330
return ___nl__6;
#line 330
c_rt_lib0clear(&___nl__6);
#line 332
goto label_400;
#line 332
label_312:
#line 332
c_rt_lib0move(&___nl__5,___get_global_const(850));
#line 332
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 332
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 332
if(c_rt_lib0check_true_native(___nl__5)){ goto label_369;}
#line 334
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 334
c_rt_lib0move(&___nl__7, pretty_printer_priv0is_to_change_ov(___nl__8));
#line 334
c_rt_lib0clear(&___nl__8);
#line 334
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 334
if(c_rt_lib0check_true_native(___nl__7)){ goto label_340;}
#line 336
c_rt_lib0move(&___nl__11,___get_global_const(373));
#line 336
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 336
c_rt_lib0clear(&___nl__11);
#line 337
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 337
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 337
c_rt_lib0clear(&___nl__12);
#line 338
c_rt_lib0move(&___nl__13,___get_global_const(260));
#line 338
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 338
c_rt_lib0clear(&___nl__13);
#line 338
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(3, ___nl__10, ___nl__11, ___nl__12));
#line 338
c_rt_lib0clear(&___nl__10);
#line 338
c_rt_lib0clear(&___nl__11);
#line 338
c_rt_lib0clear(&___nl__12);
#line 338
c_rt_lib0move(&___nl__8, wprinter0build_pretty_a(___nl__9));
#line 338
c_rt_lib0clear(&___nl__9);
#line 338
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 338
c_rt_lib0clear(&___nl__8);
#line 340
goto label_347;
#line 340
label_340:
#line 341
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 341
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__9));
#line 341
c_rt_lib0clear(&___nl__9);
#line 341
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 341
c_rt_lib0clear(&___nl__8);
#line 342
goto label_347;
#line 342
label_347:
#line 342
c_rt_lib0clear(&___nl__7);
#line 343
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__4));
#line 343
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 343
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 343
c_rt_lib0clear(&___nl__11);
#line 343
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__6, ___nl__9, ___nl__10));
#line 343
c_rt_lib0clear(&___nl__9);
#line 343
c_rt_lib0clear(&___nl__10);
#line 343
c_rt_lib0move(&___nl__7, wprinter0build_pretty_op_l(___nl__8));
#line 343
c_rt_lib0clear(&___nl__8);
#line 343
c_rt_lib0clear(&___nl__0);
#line 343
c_rt_lib0clear(&___nl__1);
#line 343
c_rt_lib0clear(&___nl__2);
#line 343
c_rt_lib0clear(&___nl__3);
#line 343
c_rt_lib0clear(&___nl__4);
#line 343
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0clear(&___nl__6);
#line 343
return ___nl__7;
#line 343
c_rt_lib0clear(&___nl__7);
#line 343
c_rt_lib0clear(&___nl__6);
#line 344
goto label_400;
#line 344
label_369:
#line 346
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 346
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 346
c_rt_lib0clear(&___nl__11);
#line 346
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 346
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__4));
#line 346
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(3, ___nl__10, ___nl__11, ___nl__12));
#line 346
c_rt_lib0clear(&___nl__10);
#line 346
c_rt_lib0clear(&___nl__11);
#line 346
c_rt_lib0clear(&___nl__12);
#line 346
c_rt_lib0move(&___nl__8, wprinter0build_pretty_op_l(___nl__9));
#line 346
c_rt_lib0clear(&___nl__9);
#line 347
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 348
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 348
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 348
c_rt_lib0clear(&___nl__11);
#line 348
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 348
c_rt_lib0clear(&___nl__8);
#line 348
c_rt_lib0clear(&___nl__9);
#line 348
c_rt_lib0clear(&___nl__10);
#line 348
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__7));
#line 348
c_rt_lib0clear(&___nl__7);
#line 348
c_rt_lib0clear(&___nl__0);
#line 348
c_rt_lib0clear(&___nl__1);
#line 348
c_rt_lib0clear(&___nl__2);
#line 348
c_rt_lib0clear(&___nl__3);
#line 348
c_rt_lib0clear(&___nl__4);
#line 348
c_rt_lib0clear(&___nl__5);
#line 348
return ___nl__6;
#line 348
c_rt_lib0clear(&___nl__6);
#line 350
goto label_400;
#line 350
label_400:
#line 350
c_rt_lib0clear(&___nl__5);
#line 350
c_rt_lib0clear(&___nl__4);
#line 350
c_rt_lib0clear(&___nl__3);
#line 351
goto label_756;
#line 351
label_405:
#line 351
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(857)));
#line 353
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 353
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(210)));
#line 353
if(c_rt_lib0check_true_native(___nl__6)){ goto label_415;}
#line 355
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(209)));
#line 355
if(c_rt_lib0check_true_native(___nl__6)){ goto label_420;}
#line 355
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 355
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 355
nl_die_arg(___nl__6);
#line 353
label_415:
#line 354
c_rt_lib0move(&___nl__7,___get_global_const(886));
#line 354
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 354
c_rt_lib0clear(&___nl__7);
#line 355
goto label_425;
#line 355
label_420:
#line 356
c_rt_lib0move(&___nl__7,___get_global_const(884));
#line 356
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 356
c_rt_lib0clear(&___nl__7);
#line 357
goto label_425;
#line 357
label_425:
#line 357
c_rt_lib0clear(&___nl__5);
#line 357
c_rt_lib0clear(&___nl__6);
#line 359
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 359
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 359
c_rt_lib0clear(&___nl__8);
#line 360
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 361
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__4));
#line 362
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 363
c_rt_lib0move(&___nl__12,___get_global_const(417));
#line 363
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 363
c_rt_lib0clear(&___nl__12);
#line 364
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(902)));
#line 364
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 364
c_rt_lib0clear(&___nl__13);
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11, ___nl__12));
#line 364
c_rt_lib0clear(&___nl__7);
#line 364
c_rt_lib0clear(&___nl__8);
#line 364
c_rt_lib0clear(&___nl__9);
#line 364
c_rt_lib0clear(&___nl__10);
#line 364
c_rt_lib0clear(&___nl__11);
#line 364
c_rt_lib0clear(&___nl__12);
#line 364
c_rt_lib0move(&___nl__5, wprinter0build_pretty_op_l(___nl__6));
#line 364
c_rt_lib0clear(&___nl__6);
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
return ___nl__5;
#line 364
c_rt_lib0clear(&___nl__5);
#line 364
c_rt_lib0clear(&___nl__4);
#line 364
c_rt_lib0clear(&___nl__3);
#line 366
goto label_756;
#line 366
label_459:
#line 366
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(861)));
#line 367
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__3));
#line 367
c_rt_lib0move(&___nl__8,___get_global_const(165));
#line 367
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 367
c_rt_lib0clear(&___nl__8);
#line 367
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 367
c_rt_lib0clear(&___nl__6);
#line 367
c_rt_lib0clear(&___nl__7);
#line 367
c_rt_lib0move(&___nl__4, wprinter0build_pretty_op_l(___nl__5));
#line 367
c_rt_lib0clear(&___nl__5);
#line 367
c_rt_lib0clear(&___nl__0);
#line 367
c_rt_lib0clear(&___nl__1);
#line 367
c_rt_lib0clear(&___nl__2);
#line 367
c_rt_lib0clear(&___nl__3);
#line 367
return ___nl__4;
#line 367
c_rt_lib0clear(&___nl__4);
#line 367
c_rt_lib0clear(&___nl__3);
#line 368
goto label_756;
#line 368
label_478:
#line 368
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(860)));
#line 369
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__3));
#line 369
c_rt_lib0move(&___nl__8,___get_global_const(880));
#line 369
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 369
c_rt_lib0clear(&___nl__8);
#line 369
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 369
c_rt_lib0clear(&___nl__6);
#line 369
c_rt_lib0clear(&___nl__7);
#line 369
c_rt_lib0move(&___nl__4, wprinter0build_pretty_op_l(___nl__5));
#line 369
c_rt_lib0clear(&___nl__5);
#line 369
c_rt_lib0clear(&___nl__0);
#line 369
c_rt_lib0clear(&___nl__1);
#line 369
c_rt_lib0clear(&___nl__2);
#line 369
c_rt_lib0clear(&___nl__3);
#line 369
return ___nl__4;
#line 369
c_rt_lib0clear(&___nl__4);
#line 369
c_rt_lib0clear(&___nl__3);
#line 370
goto label_756;
#line 370
label_497:
#line 370
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(858)));
#line 371
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 371
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 371
c_rt_lib0clear(&___nl__6);
#line 371
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(198)));
#line 371
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 371
c_rt_lib0clear(&___nl__7);
#line 371
c_rt_lib0move(&___nl__4, wprinter0build_pretty_bind(___nl__5, ___nl__6));
#line 371
c_rt_lib0clear(&___nl__6);
#line 371
c_rt_lib0clear(&___nl__5);
#line 371
c_rt_lib0clear(&___nl__0);
#line 371
c_rt_lib0clear(&___nl__1);
#line 371
c_rt_lib0clear(&___nl__2);
#line 371
c_rt_lib0clear(&___nl__3);
#line 371
return ___nl__4;
#line 371
c_rt_lib0clear(&___nl__4);
#line 371
c_rt_lib0clear(&___nl__3);
#line 372
goto label_756;
#line 372
label_516:
#line 372
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(812)));
#line 373
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 373
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(132)));
#line 373
c_rt_lib0move(&___nl__4, pretty_printer_priv0get_fun_label(___nl__5, ___nl__6));
#line 373
c_rt_lib0clear(&___nl__6);
#line 373
c_rt_lib0clear(&___nl__5);
#line 373
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 373
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 373
c_rt_lib0clear(&___nl__5);
#line 374
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 374
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 374
c_rt_lib0clear(&___nl__6);
#line 374
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 374
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 374
c_rt_lib0clear(&___nl__6);
#line 374
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 374
if(c_rt_lib0check_true_native(___nl__5)){ goto label_565;}
#line 375
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 375
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 375
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 375
c_rt_lib0clear(&___nl__7);
#line 375
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(198)));
#line 376
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 376
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(205)));
#line 376
if(c_rt_lib0check_true_native(___nl__7)){ goto label_544;}
#line 376
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 376
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(204)));
#line 376
label_544:
#line 376
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 376
if(c_rt_lib0check_true_native(___nl__7)){ goto label_561;}
#line 377
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 377
c_rt_lib0move(&___nl__8, pretty_printer_priv0get_compressed_fun_val(___nl__6, ___nl__4, ___nl__9));
#line 377
c_rt_lib0clear(&___nl__9);
#line 377
c_rt_lib0clear(&___nl__0);
#line 377
c_rt_lib0clear(&___nl__1);
#line 377
c_rt_lib0clear(&___nl__2);
#line 377
c_rt_lib0clear(&___nl__3);
#line 377
c_rt_lib0clear(&___nl__4);
#line 377
c_rt_lib0clear(&___nl__5);
#line 377
c_rt_lib0clear(&___nl__6);
#line 377
c_rt_lib0clear(&___nl__7);
#line 377
return ___nl__8;
#line 377
c_rt_lib0clear(&___nl__8);
#line 378
goto label_561;
#line 378
label_561:
#line 378
c_rt_lib0clear(&___nl__7);
#line 378
c_rt_lib0clear(&___nl__6);
#line 379
goto label_614;
#line 379
label_565:
#line 379
c_rt_lib0move(&___nl__5, pretty_printer_priv0is_to_change_ov(___nl__0));
#line 379
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 379
if(c_rt_lib0check_true_native(___nl__5)){ goto label_614;}
#line 381
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 381
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 381
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__10));
#line 381
c_rt_lib0clear(&___nl__10);
#line 381
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 381
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__9));
#line 381
c_rt_lib0clear(&___nl__9);
#line 382
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 383
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 383
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 383
c_rt_lib0clear(&___nl__11);
#line 384
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 385
c_rt_lib0move(&___nl__13,___get_global_const(417));
#line 385
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 385
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 385
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__14, ___nl__15));
#line 385
c_rt_lib0clear(&___nl__15);
#line 385
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(198)));
#line 385
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(192)));
#line 385
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(771)));
#line 385
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(327)));
#line 385
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 385
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__14, ___nl__15));
#line 385
c_rt_lib0clear(&___nl__15);
#line 385
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 385
c_rt_lib0clear(&___nl__14);
#line 385
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 385
c_rt_lib0clear(&___nl__13);
#line 385
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(5, ___nl__8, ___nl__9, ___nl__10, ___nl__11, ___nl__12));
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
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__7));
#line 385
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0clear(&___nl__0);
#line 385
c_rt_lib0clear(&___nl__1);
#line 385
c_rt_lib0clear(&___nl__2);
#line 385
c_rt_lib0clear(&___nl__3);
#line 385
c_rt_lib0clear(&___nl__4);
#line 385
c_rt_lib0clear(&___nl__5);
#line 385
return ___nl__6;
#line 385
c_rt_lib0clear(&___nl__6);
#line 387
goto label_614;
#line 387
label_614:
#line 387
c_rt_lib0clear(&___nl__5);
#line 388
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__4));
#line 388
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 388
c_rt_lib0clear(&___nl__6);
#line 389
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 389
c_rt_lib0move(&___nl__6, pretty_printer_priv0join_print_fun_arg(___nl__7));
#line 389
c_rt_lib0clear(&___nl__7);
#line 389
c_rt_lib0delete(array0append(&___nl__5, ___nl__6));
#line 389
c_rt_lib0clear(&___nl__6);
#line 390
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 390
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 390
c_rt_lib0clear(&___nl__7);
#line 390
c_rt_lib0delete(array0push(&___nl__5, ___nl__6));
#line 390
c_rt_lib0clear(&___nl__6);
#line 393
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 393
c_rt_lib0move(&___nl__6, pretty_printer_priv0count_structs(___nl__8));
#line 393
c_rt_lib0clear(&___nl__8);
#line 393
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 393
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 393
c_rt_lib0clear(&___nl__9);
#line 393
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__8));
#line 393
c_rt_lib0clear(&___nl__8);
#line 393
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 393
if(c_rt_lib0check_true_native(___nl__7)){ goto label_645;}
#line 393
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 393
c_rt_lib0move(&___nl__6, array0len(___nl__8));
#line 393
c_rt_lib0clear(&___nl__8);
#line 393
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 393
c_rt_lib0move(&___nl__6, c_rt_lib0gt(___nl__6, ___nl__8));
#line 393
c_rt_lib0clear(&___nl__8);
#line 393
label_645:
#line 393
c_rt_lib0clear(&___nl__7);
#line 393
if(c_rt_lib0check_true_native(___nl__6)){ goto label_665;}
#line 394
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 394
c_rt_lib0move(&___nl__6, array0len(___nl__8));
#line 394
c_rt_lib0clear(&___nl__8);
#line 394
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 394
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__8));
#line 394
c_rt_lib0clear(&___nl__8);
#line 394
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 394
if(c_rt_lib0check_true_native(___nl__7)){ goto label_663;}
#line 394
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 394
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 394
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 394
c_rt_lib0clear(&___nl__8);
#line 394
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(198)));
#line 394
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 394
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(812)));
#line 394
label_663:
#line 394
c_rt_lib0clear(&___nl__7);
#line 394
label_665:
#line 394
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 394
if(c_rt_lib0check_true_native(___nl__6)){ goto label_679;}
#line 391
c_rt_lib0move(&___nl__7, wprinter0build_pretty_op_l(___nl__5));
#line 391
c_rt_lib0clear(&___nl__0);
#line 391
c_rt_lib0clear(&___nl__1);
#line 391
c_rt_lib0clear(&___nl__2);
#line 391
c_rt_lib0clear(&___nl__3);
#line 391
c_rt_lib0clear(&___nl__4);
#line 391
c_rt_lib0clear(&___nl__5);
#line 391
c_rt_lib0clear(&___nl__6);
#line 391
return ___nl__7;
#line 391
c_rt_lib0clear(&___nl__7);
#line 391
goto label_679;
#line 391
label_679:
#line 391
c_rt_lib0clear(&___nl__6);
#line 395
c_rt_lib0move(&___nl__6, wprinter0build_pretty_l(___nl__5));
#line 395
c_rt_lib0clear(&___nl__0);
#line 395
c_rt_lib0clear(&___nl__1);
#line 395
c_rt_lib0clear(&___nl__2);
#line 395
c_rt_lib0clear(&___nl__3);
#line 395
c_rt_lib0clear(&___nl__4);
#line 395
c_rt_lib0clear(&___nl__5);
#line 395
return ___nl__6;
#line 395
c_rt_lib0clear(&___nl__6);
#line 395
c_rt_lib0clear(&___nl__4);
#line 395
c_rt_lib0clear(&___nl__5);
#line 395
c_rt_lib0clear(&___nl__3);
#line 396
goto label_756;
#line 396
label_694:
#line 397
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 397
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 397
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(337), ___nl__5));
#line 397
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__4, ___get_global_const(1010), ___nl__5));
#line 397
c_rt_lib0clear(&___nl__4);
#line 397
c_rt_lib0clear(&___nl__5);
#line 397
c_rt_lib0clear(&___nl__0);
#line 397
c_rt_lib0clear(&___nl__1);
#line 397
c_rt_lib0clear(&___nl__2);
#line 397
return ___nl__3;
#line 397
c_rt_lib0clear(&___nl__3);
#line 398
goto label_756;
#line 398
label_707:
#line 398
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(204)));
#line 399
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 399
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 399
c_rt_lib0move(&___nl__4, pretty_printer_priv0get_compressed_fun_val(___nl__0, ___nl__5, ___nl__6));
#line 399
c_rt_lib0clear(&___nl__6);
#line 399
c_rt_lib0clear(&___nl__5);
#line 399
c_rt_lib0clear(&___nl__0);
#line 399
c_rt_lib0clear(&___nl__1);
#line 399
c_rt_lib0clear(&___nl__2);
#line 399
c_rt_lib0clear(&___nl__3);
#line 399
return ___nl__4;
#line 399
c_rt_lib0clear(&___nl__4);
#line 399
c_rt_lib0clear(&___nl__3);
#line 400
goto label_756;
#line 400
label_722:
#line 400
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(205)));
#line 401
c_rt_lib0move(&___nl__5, pretty_printer_priv0join_print_hash_elem(___nl__3));
#line 401
c_rt_lib0move(&___nl__6,___get_global_const(252));
#line 401
c_rt_lib0move(&___nl__7,___get_global_const(253));
#line 401
c_rt_lib0move(&___nl__4, wprinter0build_pretty_arr_decl(___nl__5, ___nl__6, ___nl__7));
#line 401
c_rt_lib0clear(&___nl__7);
#line 401
c_rt_lib0clear(&___nl__6);
#line 401
c_rt_lib0clear(&___nl__5);
#line 401
c_rt_lib0clear(&___nl__0);
#line 401
c_rt_lib0clear(&___nl__1);
#line 401
c_rt_lib0clear(&___nl__2);
#line 401
c_rt_lib0clear(&___nl__3);
#line 401
return ___nl__4;
#line 401
c_rt_lib0clear(&___nl__4);
#line 401
c_rt_lib0clear(&___nl__3);
#line 402
goto label_756;
#line 402
label_739:
#line 402
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(859)));
#line 403
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 403
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(132)));
#line 403
c_rt_lib0move(&___nl__5, pretty_printer_priv0get_fun_label(___nl__6, ___nl__7));
#line 403
c_rt_lib0clear(&___nl__7);
#line 403
c_rt_lib0clear(&___nl__6);
#line 403
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 403
c_rt_lib0clear(&___nl__5);
#line 403
c_rt_lib0clear(&___nl__0);
#line 403
c_rt_lib0clear(&___nl__1);
#line 403
c_rt_lib0clear(&___nl__2);
#line 403
c_rt_lib0clear(&___nl__3);
#line 403
return ___nl__4;
#line 403
c_rt_lib0clear(&___nl__4);
#line 403
c_rt_lib0clear(&___nl__3);
#line 404
goto label_756;
#line 404
label_756:
#line 404
c_rt_lib0clear(&___nl__1);
#line 404
c_rt_lib0clear(&___nl__2);
#line 404
c_rt_lib0clear(&___nl__0);
#line 404
return NULL;
}

ImmT pretty_printer_priv0print_cond_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 410
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 411
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 412
c_rt_lib0move(&___nl__10, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 412
c_rt_lib0move(&___nl__9, wprinter0build_pretty_l(___nl__10));
#line 412
c_rt_lib0clear(&___nl__10);
#line 412
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 412
c_rt_lib0clear(&___nl__7);
#line 412
c_rt_lib0clear(&___nl__8);
#line 412
c_rt_lib0clear(&___nl__9);
#line 414
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 414
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 414
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 414
c_rt_lib0clear(&___nl__8);
#line 414
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 414
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 414
c_rt_lib0move(&___nl__9,___get_global_const(571));
#line 414
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 414
c_rt_lib0clear(&___nl__9);
#line 414
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 414
c_rt_lib0clear(&___nl__8);
#line 414
goto label_21;
#line 414
label_21:
#line 414
c_rt_lib0clear(&___nl__7);
#line 415
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 415
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 415
if(c_rt_lib0check_true_native(___nl__7)){ goto label_35;}
#line 415
c_rt_lib0move(&___nl__9,___get_global_const(373));
#line 415
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 415
c_rt_lib0clear(&___nl__9);
#line 415
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
goto label_35;
#line 415
label_35:
#line 415
c_rt_lib0clear(&___nl__7);
#line 416
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 416
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 416
c_rt_lib0clear(&___nl__7);
#line 417
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 417
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 417
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 417
c_rt_lib0clear(&___nl__8);
#line 417
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 417
if(c_rt_lib0check_true_native(___nl__7)){ goto label_52;}
#line 417
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 417
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 417
c_rt_lib0clear(&___nl__9);
#line 417
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 417
c_rt_lib0clear(&___nl__8);
#line 417
goto label_52;
#line 417
label_52:
#line 417
c_rt_lib0clear(&___nl__7);
#line 419
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_simple_statement(___nl__2));
#line 420
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 421
c_rt_lib0move(&___nl__11, wprinter0build_pretty_op_l(___nl__6));
#line 421
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 421
c_rt_lib0clear(&___nl__9);
#line 421
c_rt_lib0clear(&___nl__10);
#line 421
c_rt_lib0clear(&___nl__11);
#line 421
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 421
c_rt_lib0clear(&___nl__8);
#line 421
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__5));
#line 421
c_rt_lib0clear(&___nl__7);
#line 423
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 423
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 423
c_rt_lib0clear(&___nl__7);
#line 423
c_rt_lib0clear(&___nl__6);
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
return NULL;
}

ImmT pretty_printer_priv0print_loop(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 428
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 428
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 428
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__8));
#line 428
c_rt_lib0clear(&___nl__7);
#line 428
c_rt_lib0clear(&___nl__8);
#line 429
c_rt_lib0move(&___nl__7, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 429
c_rt_lib0delete(array0append(&___nl__6, ___nl__7));
#line 429
c_rt_lib0clear(&___nl__7);
#line 430
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 430
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 430
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 430
c_rt_lib0clear(&___nl__8);
#line 430
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 430
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 430
c_rt_lib0move(&___nl__9,___get_global_const(571));
#line 430
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 430
c_rt_lib0clear(&___nl__9);
#line 430
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 430
c_rt_lib0clear(&___nl__8);
#line 430
goto label_20;
#line 430
label_20:
#line 430
c_rt_lib0clear(&___nl__7);
#line 431
c_rt_lib0move(&___nl__8,___get_global_const(373));
#line 431
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 431
c_rt_lib0clear(&___nl__8);
#line 431
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 431
c_rt_lib0clear(&___nl__7);
#line 432
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 433
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(1010)));
#line 433
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(327)));
#line 433
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 433
if(c_rt_lib0check_true_native(___nl__8)){ goto label_38;}
#line 434
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(1010)));
#line 434
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(327)));
#line 434
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(327)));
#line 434
c_rt_lib0delete(array0append(&___nl__6, ___nl__9));
#line 434
c_rt_lib0clear(&___nl__9);
#line 435
goto label_41;
#line 435
label_38:
#line 436
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 437
goto label_41;
#line 437
label_41:
#line 437
c_rt_lib0clear(&___nl__8);
#line 438
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 438
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 438
c_rt_lib0clear(&___nl__9);
#line 438
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 438
c_rt_lib0clear(&___nl__8);
#line 439
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__6));
#line 439
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__8, ___nl__5));
#line 439
c_rt_lib0clear(&___nl__8);
#line 440
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__2, ___nl__5));
#line 440
c_rt_lib0clear(&___nl__6);
#line 440
c_rt_lib0clear(&___nl__7);
#line 440
c_rt_lib0clear(&___nl__1);
#line 440
c_rt_lib0clear(&___nl__2);
#line 440
c_rt_lib0clear(&___nl__3);
#line 440
c_rt_lib0clear(&___nl__4);
#line 440
c_rt_lib0clear(&___nl__5);
#line 440
return NULL;
}

ImmT pretty_printer_priv0print_loop_or_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5,ImmT ___nl__6) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
c_rt_lib0arg_val(___nl__6);
ImmT ___nl__7 = NULL;
#line 445
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 445
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 445
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 446
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 447
goto label_8;
#line 447
label_5:
#line 448
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 449
goto label_8;
#line 449
label_8:
#line 449
c_rt_lib0clear(&___nl__7);
#line 449
c_rt_lib0clear(&___nl__1);
#line 449
c_rt_lib0clear(&___nl__2);
#line 449
c_rt_lib0clear(&___nl__3);
#line 449
c_rt_lib0clear(&___nl__4);
#line 449
c_rt_lib0clear(&___nl__5);
#line 449
c_rt_lib0clear(&___nl__6);
#line 449
return NULL;
}

ImmT pretty_printer_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1) {
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
#line 453
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__1));
#line 453
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__3));
#line 453
c_rt_lib0clear(&___nl__3);
#line 454
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(846)));
#line 454
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 456
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(848)));
#line 456
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 458
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(847)));
#line 458
if(c_rt_lib0check_true_native(___nl__3)){ goto label_34;}
#line 458
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 458
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 458
nl_die_arg(___nl__3);
#line 454
label_12:
#line 454
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(846)));
#line 455
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 455
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_var_decl(___nl__4));
#line 455
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 455
c_rt_lib0clear(&___nl__6);
#line 455
c_rt_lib0clear(&___nl__7);
#line 455
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 455
c_rt_lib0clear(&___nl__5);
#line 455
c_rt_lib0clear(&___nl__4);
#line 456
goto label_59;
#line 456
label_23:
#line 456
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(848)));
#line 457
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 457
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 457
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 457
c_rt_lib0clear(&___nl__6);
#line 457
c_rt_lib0clear(&___nl__7);
#line 457
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 457
c_rt_lib0clear(&___nl__5);
#line 457
c_rt_lib0clear(&___nl__4);
#line 458
goto label_59;
#line 458
label_34:
#line 458
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(847)));
#line 460
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 461
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 461
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 461
c_rt_lib0clear(&___nl__8);
#line 462
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 463
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 463
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 463
c_rt_lib0clear(&___nl__10);
#line 464
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 465
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(231)));
#line 465
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 465
c_rt_lib0clear(&___nl__12);
#line 465
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(6, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 465
c_rt_lib0clear(&___nl__6);
#line 465
c_rt_lib0clear(&___nl__7);
#line 465
c_rt_lib0clear(&___nl__8);
#line 465
c_rt_lib0clear(&___nl__9);
#line 465
c_rt_lib0clear(&___nl__10);
#line 465
c_rt_lib0clear(&___nl__11);
#line 465
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 465
c_rt_lib0clear(&___nl__5);
#line 465
c_rt_lib0clear(&___nl__4);
#line 467
goto label_59;
#line 467
label_59:
#line 467
c_rt_lib0clear(&___nl__3);
#line 468
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__2));
#line 468
c_rt_lib0clear(&___nl__0);
#line 468
c_rt_lib0clear(&___nl__1);
#line 468
c_rt_lib0clear(&___nl__2);
#line 468
return ___nl__3;
#line 468
c_rt_lib0clear(&___nl__3);
#line 468
c_rt_lib0clear(&___nl__2);
#line 468
c_rt_lib0clear(&___nl__0);
#line 468
c_rt_lib0clear(&___nl__1);
#line 468
return NULL;
}

ImmT pretty_printer_priv0print_return(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 472
c_rt_lib0move(&___nl__3,___get_global_const(90));
#line 472
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 472
c_rt_lib0clear(&___nl__3);
#line 472
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 472
c_rt_lib0clear(&___nl__2);
#line 473
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 473
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(831)));
#line 473
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 473
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 473
if(c_rt_lib0check_true_native(___nl__2)){ goto label_18;}
#line 474
c_rt_lib0move(&___nl__4, wprinter0get_sep());
#line 474
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__0));
#line 474
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__4, ___nl__5));
#line 474
c_rt_lib0clear(&___nl__4);
#line 474
c_rt_lib0clear(&___nl__5);
#line 474
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 474
c_rt_lib0clear(&___nl__3);
#line 475
goto label_18;
#line 475
label_18:
#line 475
c_rt_lib0clear(&___nl__2);
#line 476
c_rt_lib0move(&___nl__2, wprinter0build_pretty_l(___nl__1));
#line 476
c_rt_lib0clear(&___nl__0);
#line 476
c_rt_lib0clear(&___nl__1);
#line 476
return ___nl__2;
#line 476
c_rt_lib0clear(&___nl__2);
#line 476
c_rt_lib0clear(&___nl__1);
#line 476
c_rt_lib0clear(&___nl__0);
#line 476
return NULL;
}

ImmT pretty_printer_priv0print_sim_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 480
c_rt_lib0move(&___nl__1, pretty_printer_priv0print_val(___nl__0));
#line 481
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1010)));
#line 481
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(327)));
#line 481
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 481
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 482
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1010)));
#line 482
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(327)));
#line 482
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(327)));
#line 482
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__4));
#line 482
c_rt_lib0clear(&___nl__4);
#line 482
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 482
c_rt_lib0clear(&___nl__3);
#line 483
goto label_13;
#line 483
label_13:
#line 483
c_rt_lib0clear(&___nl__2);
#line 484
c_rt_lib0clear(&___nl__0);
#line 484
return ___nl__1;
#line 484
c_rt_lib0clear(&___nl__1);
#line 484
c_rt_lib0clear(&___nl__0);
#line 484
return NULL;
}

ImmT pretty_printer_priv0print_break(){
return pretty_printer_priv0__const__sing(1);}
ImmT pretty_printer_priv0print_break0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 488
c_rt_lib0move(&___nl__1,___get_global_const(825));
#line 488
c_rt_lib0move(&___nl__0, wprinter0build_sim(___nl__1));
#line 488
c_rt_lib0clear(&___nl__1);
#line 488
return ___nl__0;
#line 488
c_rt_lib0clear(&___nl__0);
#line 488
return NULL;
}

ImmT pretty_printer_priv0print_continue(){
return pretty_printer_priv0__const__sing(2);}
ImmT pretty_printer_priv0print_continue0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 492
c_rt_lib0move(&___nl__1,___get_global_const(826));
#line 492
c_rt_lib0move(&___nl__0, wprinter0build_sim(___nl__1));
#line 492
c_rt_lib0clear(&___nl__1);
#line 492
return ___nl__0;
#line 492
c_rt_lib0clear(&___nl__0);
#line 492
return NULL;
}

ImmT pretty_printer_priv0print_die(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 496
c_rt_lib0move(&___nl__3,___get_global_const(217));
#line 496
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 496
c_rt_lib0clear(&___nl__3);
#line 496
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 496
c_rt_lib0clear(&___nl__2);
#line 502
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 502
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 502
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__2, ___nl__3));
#line 502
c_rt_lib0clear(&___nl__3);
#line 502
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 502
if(c_rt_lib0check_true_native(___nl__2)){ goto label_27;}
#line 498
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 498
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 498
c_rt_lib0clear(&___nl__5);
#line 499
c_rt_lib0move(&___nl__6, pretty_printer_priv0join_print_val(___nl__0));
#line 499
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__6));
#line 499
c_rt_lib0clear(&___nl__6);
#line 500
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 500
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 500
c_rt_lib0clear(&___nl__7);
#line 500
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(3, ___nl__4, ___nl__5, ___nl__6));
#line 500
c_rt_lib0clear(&___nl__4);
#line 500
c_rt_lib0clear(&___nl__5);
#line 500
c_rt_lib0clear(&___nl__6);
#line 500
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 500
c_rt_lib0clear(&___nl__3);
#line 500
goto label_27;
#line 500
label_27:
#line 500
c_rt_lib0clear(&___nl__2);
#line 503
c_rt_lib0move(&___nl__2, wprinter0build_pretty_a(___nl__1));
#line 503
c_rt_lib0clear(&___nl__0);
#line 503
c_rt_lib0clear(&___nl__1);
#line 503
return ___nl__2;
#line 503
c_rt_lib0clear(&___nl__2);
#line 503
c_rt_lib0clear(&___nl__1);
#line 503
c_rt_lib0clear(&___nl__0);
#line 503
return NULL;
}

ImmT pretty_printer_priv0print_simple_statement(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(192)));
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 507
if(c_rt_lib0check_true_native(___nl__1)){ goto label_13;}
#line 508
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 508
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(192)));
#line 508
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_sim_value(___nl__3));
#line 508
c_rt_lib0clear(&___nl__3);
#line 508
c_rt_lib0clear(&___nl__0);
#line 508
c_rt_lib0clear(&___nl__1);
#line 508
return ___nl__2;
#line 508
c_rt_lib0clear(&___nl__2);
#line 509
goto label_100;
#line 509
label_13:
#line 509
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 509
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(90)));
#line 509
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 509
if(c_rt_lib0check_true_native(___nl__1)){ goto label_27;}
#line 510
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 510
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(90)));
#line 510
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_return(___nl__3));
#line 510
c_rt_lib0clear(&___nl__3);
#line 510
c_rt_lib0clear(&___nl__0);
#line 510
c_rt_lib0clear(&___nl__1);
#line 510
return ___nl__2;
#line 510
c_rt_lib0clear(&___nl__2);
#line 511
goto label_100;
#line 511
label_27:
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(825)));
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 511
if(c_rt_lib0check_true_native(___nl__1)){ goto label_38;}
#line 512
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_break());
#line 512
c_rt_lib0clear(&___nl__0);
#line 512
c_rt_lib0clear(&___nl__1);
#line 512
return ___nl__2;
#line 512
c_rt_lib0clear(&___nl__2);
#line 513
goto label_100;
#line 513
label_38:
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(826)));
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 513
if(c_rt_lib0check_true_native(___nl__1)){ goto label_49;}
#line 514
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_continue());
#line 514
c_rt_lib0clear(&___nl__0);
#line 514
c_rt_lib0clear(&___nl__1);
#line 514
return ___nl__2;
#line 514
c_rt_lib0clear(&___nl__2);
#line 515
goto label_100;
#line 515
label_49:
#line 515
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 515
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(217)));
#line 515
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 515
if(c_rt_lib0check_true_native(___nl__1)){ goto label_63;}
#line 516
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 516
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(217)));
#line 516
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_die(___nl__3));
#line 516
c_rt_lib0clear(&___nl__3);
#line 516
c_rt_lib0clear(&___nl__0);
#line 516
c_rt_lib0clear(&___nl__1);
#line 516
return ___nl__2;
#line 516
c_rt_lib0clear(&___nl__2);
#line 517
goto label_100;
#line 517
label_63:
#line 517
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 517
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(830)));
#line 517
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 517
if(c_rt_lib0check_true_native(___nl__1)){ goto label_79;}
#line 518
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 518
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(830)));
#line 518
c_rt_lib0move(&___nl__4,___get_global_const(830));
#line 518
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 518
c_rt_lib0clear(&___nl__4);
#line 518
c_rt_lib0clear(&___nl__3);
#line 518
c_rt_lib0clear(&___nl__0);
#line 518
c_rt_lib0clear(&___nl__1);
#line 518
return ___nl__2;
#line 518
c_rt_lib0clear(&___nl__2);
#line 519
goto label_100;
#line 519
label_79:
#line 519
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 519
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(95)));
#line 519
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 519
if(c_rt_lib0check_true_native(___nl__1)){ goto label_95;}
#line 520
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 520
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(95)));
#line 520
c_rt_lib0move(&___nl__4,___get_global_const(95));
#line 520
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 520
c_rt_lib0clear(&___nl__4);
#line 520
c_rt_lib0clear(&___nl__3);
#line 520
c_rt_lib0clear(&___nl__0);
#line 520
c_rt_lib0clear(&___nl__1);
#line 520
return ___nl__2;
#line 520
c_rt_lib0clear(&___nl__2);
#line 521
goto label_100;
#line 521
label_95:
#line 522
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__0));
#line 522
nl_die_arg(___nl__2);
#line 522
c_rt_lib0clear(&___nl__2);
#line 523
goto label_100;
#line 523
label_100:
#line 523
c_rt_lib0clear(&___nl__1);
#line 523
c_rt_lib0clear(&___nl__0);
#line 523
return NULL;
}

ImmT pretty_printer_priv0flush_sim_statement(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 527
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__1, ___nl__2));
#line 528
c_rt_lib0move(&___nl__3,___get_global_const(360));
#line 528
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__3));
#line 528
c_rt_lib0clear(&___nl__3);
#line 528
c_rt_lib0clear(&___nl__1);
#line 528
c_rt_lib0clear(&___nl__2);
#line 528
return NULL;
}

ImmT pretty_printer_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
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
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
#line 532
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(201)));
#line 532
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(817)));
#line 532
if(c_rt_lib0check_true_native(___nl__4)){ goto label_44;}
#line 542
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(822)));
#line 542
if(c_rt_lib0check_true_native(___nl__4)){ goto label_101;}
#line 544
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(818)));
#line 544
if(c_rt_lib0check_true_native(___nl__4)){ goto label_116;}
#line 563
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(828)));
#line 563
if(c_rt_lib0check_true_native(___nl__4)){ goto label_182;}
#line 570
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(831)));
#line 570
if(c_rt_lib0check_true_native(___nl__4)){ goto label_226;}
#line 572
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(827)));
#line 572
if(c_rt_lib0check_true_native(___nl__4)){ goto label_231;}
#line 583
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(819)));
#line 583
if(c_rt_lib0check_true_native(___nl__4)){ goto label_283;}
#line 585
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(820)));
#line 585
if(c_rt_lib0check_true_native(___nl__4)){ goto label_300;}
#line 588
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(821)));
#line 588
if(c_rt_lib0check_true_native(___nl__4)){ goto label_319;}
#line 590
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(140)));
#line 590
if(c_rt_lib0check_true_native(___nl__4)){ goto label_336;}
#line 593
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(823)));
#line 593
if(c_rt_lib0check_true_native(___nl__4)){ goto label_344;}
#line 595
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(824)));
#line 595
if(c_rt_lib0check_true_native(___nl__4)){ goto label_357;}
#line 597
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(192)));
#line 597
if(c_rt_lib0check_true_native(___nl__4)){ goto label_370;}
#line 599
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(830)));
#line 599
if(c_rt_lib0check_true_native(___nl__4)){ goto label_377;}
#line 601
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(95)));
#line 601
if(c_rt_lib0check_true_native(___nl__4)){ goto label_386;}
#line 603
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(90)));
#line 603
if(c_rt_lib0check_true_native(___nl__4)){ goto label_395;}
#line 605
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(825)));
#line 605
if(c_rt_lib0check_true_native(___nl__4)){ goto label_402;}
#line 607
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(826)));
#line 607
if(c_rt_lib0check_true_native(___nl__4)){ goto label_407;}
#line 609
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(217)));
#line 609
if(c_rt_lib0check_true_native(___nl__4)){ goto label_412;}
#line 611
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(829)));
#line 611
if(c_rt_lib0check_true_native(___nl__4)){ goto label_419;}
#line 611
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 611
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 611
nl_die_arg(___nl__4);
#line 532
label_44:
#line 532
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(817)));
#line 533
c_rt_lib0move(&___nl__6,___get_global_const(817));
#line 533
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(817)));
#line 533
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 533
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(832)));
#line 533
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 533
c_rt_lib0clear(&___nl__9);
#line 533
c_rt_lib0clear(&___nl__8);
#line 533
c_rt_lib0clear(&___nl__7);
#line 533
c_rt_lib0clear(&___nl__6);
#line 534
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(833)));
#line 534
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 534
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 534
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 534
label_59:
#line 534
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 534
if(c_rt_lib0check_true_native(___nl__11)){ goto label_77;}
#line 534
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 535
c_rt_lib0move(&___nl__12,___get_global_const(571));
#line 535
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 535
c_rt_lib0clear(&___nl__12);
#line 536
c_rt_lib0move(&___nl__12,___get_global_const(833));
#line 536
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(201)));
#line 536
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 536
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(832)));
#line 536
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__2));
#line 536
c_rt_lib0clear(&___nl__15);
#line 536
c_rt_lib0clear(&___nl__14);
#line 536
c_rt_lib0clear(&___nl__13);
#line 536
c_rt_lib0clear(&___nl__12);
#line 537
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 537
goto label_59;
#line 537
label_77:
#line 537
c_rt_lib0clear(&___nl__6);
#line 537
c_rt_lib0clear(&___nl__7);
#line 537
c_rt_lib0clear(&___nl__8);
#line 537
c_rt_lib0clear(&___nl__9);
#line 537
c_rt_lib0clear(&___nl__10);
#line 537
c_rt_lib0clear(&___nl__11);
#line 538
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(834)));
#line 538
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(201)));
#line 538
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(831)));
#line 538
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 538
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 538
if(c_rt_lib0check_true_native(___nl__6)){ goto label_97;}
#line 539
c_rt_lib0move(&___nl__7,___get_global_const(1011));
#line 539
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 539
c_rt_lib0clear(&___nl__7);
#line 540
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(834)));
#line 540
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__7, ___nl__2));
#line 540
c_rt_lib0clear(&___nl__7);
#line 541
goto label_97;
#line 541
label_97:
#line 541
c_rt_lib0clear(&___nl__6);
#line 541
c_rt_lib0clear(&___nl__5);
#line 542
goto label_426;
#line 542
label_101:
#line 542
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(822)));
#line 543
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(919)));
#line 543
c_rt_lib0move(&___nl__7,___get_global_const(822));
#line 543
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 543
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 543
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(832)));
#line 543
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 543
c_rt_lib0clear(&___nl__10);
#line 543
c_rt_lib0clear(&___nl__9);
#line 543
c_rt_lib0clear(&___nl__8);
#line 543
c_rt_lib0clear(&___nl__7);
#line 543
c_rt_lib0clear(&___nl__6);
#line 543
c_rt_lib0clear(&___nl__5);
#line 544
goto label_426;
#line 544
label_116:
#line 544
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(818)));
#line 546
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(835)));
#line 546
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(192)));
#line 546
if(c_rt_lib0check_true_native(___nl__8)){ goto label_126;}
#line 548
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(829)));
#line 548
if(c_rt_lib0check_true_native(___nl__8)){ goto label_133;}
#line 548
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 548
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 548
nl_die_arg(___nl__8);
#line 546
label_126:
#line 546
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(192)));
#line 547
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__9));
#line 547
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 547
c_rt_lib0clear(&___nl__10);
#line 547
c_rt_lib0clear(&___nl__9);
#line 548
goto label_140;
#line 548
label_133:
#line 548
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(829)));
#line 549
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_var_decl(___nl__9));
#line 549
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 549
c_rt_lib0clear(&___nl__10);
#line 549
c_rt_lib0clear(&___nl__9);
#line 550
goto label_140;
#line 550
label_140:
#line 550
c_rt_lib0clear(&___nl__7);
#line 550
c_rt_lib0clear(&___nl__8);
#line 552
c_rt_lib0move(&___nl__10,___get_global_const(1012));
#line 552
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 552
c_rt_lib0clear(&___nl__10);
#line 554
c_rt_lib0move(&___nl__11,___get_global_const(360));
#line 554
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 554
c_rt_lib0clear(&___nl__11);
#line 555
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 556
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(832)));
#line 556
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_val(___nl__13));
#line 556
c_rt_lib0clear(&___nl__13);
#line 557
c_rt_lib0move(&___nl__14,___get_global_const(360));
#line 557
c_rt_lib0move(&___nl__13, wprinter0build_sim(___nl__14));
#line 557
c_rt_lib0clear(&___nl__14);
#line 558
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 559
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(836)));
#line 559
c_rt_lib0move(&___nl__15, pretty_printer_priv0print_val(___nl__16));
#line 559
c_rt_lib0clear(&___nl__16);
#line 560
c_rt_lib0move(&___nl__17,___get_global_const(533));
#line 560
c_rt_lib0move(&___nl__16, wprinter0build_sim(___nl__17));
#line 560
c_rt_lib0clear(&___nl__17);
#line 560
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(9, ___nl__9, ___nl__6, ___nl__10, ___nl__11, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__16));
#line 560
c_rt_lib0clear(&___nl__9);
#line 560
c_rt_lib0clear(&___nl__10);
#line 560
c_rt_lib0clear(&___nl__11);
#line 560
c_rt_lib0clear(&___nl__12);
#line 560
c_rt_lib0clear(&___nl__13);
#line 560
c_rt_lib0clear(&___nl__14);
#line 560
c_rt_lib0clear(&___nl__15);
#line 560
c_rt_lib0clear(&___nl__16);
#line 560
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 560
c_rt_lib0clear(&___nl__8);
#line 560
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__2));
#line 560
c_rt_lib0clear(&___nl__7);
#line 562
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 562
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__7, ___nl__2));
#line 562
c_rt_lib0clear(&___nl__7);
#line 562
c_rt_lib0clear(&___nl__6);
#line 562
c_rt_lib0clear(&___nl__5);
#line 563
goto label_426;
#line 563
label_182:
#line 563
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(828)));
#line 564
c_rt_lib0move(&___nl__6,___get_global_const(252));
#line 564
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 564
c_rt_lib0clear(&___nl__6);
#line 565
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 565
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 565
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 565
label_190:
#line 565
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 565
if(c_rt_lib0check_true_native(___nl__10)){ goto label_209;}
#line 565
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 566
c_rt_lib0move(&___nl__11, string0lf());
#line 566
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 566
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 566
c_rt_lib0move(&___nl__12, pretty_printer_priv0pind(___nl__13));
#line 566
c_rt_lib0clear(&___nl__13);
#line 566
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 566
c_rt_lib0clear(&___nl__12);
#line 566
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__11));
#line 566
c_rt_lib0clear(&___nl__11);
#line 567
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 567
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__2, ___nl__11));
#line 567
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__6, ___nl__11));
#line 567
c_rt_lib0clear(&___nl__11);
#line 568
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 568
goto label_190;
#line 568
label_209:
#line 568
c_rt_lib0clear(&___nl__6);
#line 568
c_rt_lib0clear(&___nl__7);
#line 568
c_rt_lib0clear(&___nl__8);
#line 568
c_rt_lib0clear(&___nl__9);
#line 568
c_rt_lib0clear(&___nl__10);
#line 569
c_rt_lib0move(&___nl__6, string0lf());
#line 569
c_rt_lib0move(&___nl__7, pretty_printer_priv0pind(___nl__2));
#line 569
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 569
c_rt_lib0clear(&___nl__7);
#line 569
c_rt_lib0move(&___nl__7,___get_global_const(253));
#line 569
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 569
c_rt_lib0clear(&___nl__7);
#line 569
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 569
c_rt_lib0clear(&___nl__6);
#line 569
c_rt_lib0clear(&___nl__5);
#line 570
goto label_426;
#line 570
label_226:
#line 571
c_rt_lib0move(&___nl__5,___get_global_const(360));
#line 571
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__5));
#line 571
c_rt_lib0clear(&___nl__5);
#line 572
goto label_426;
#line 572
label_231:
#line 572
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(827)));
#line 574
c_rt_lib0move(&___nl__9,___get_global_const(1013));
#line 574
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 574
c_rt_lib0clear(&___nl__9);
#line 575
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(198)));
#line 575
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 575
c_rt_lib0clear(&___nl__10);
#line 576
c_rt_lib0move(&___nl__11,___get_global_const(260));
#line 576
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 576
c_rt_lib0clear(&___nl__11);
#line 576
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 576
c_rt_lib0clear(&___nl__8);
#line 576
c_rt_lib0clear(&___nl__9);
#line 576
c_rt_lib0clear(&___nl__10);
#line 576
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 576
c_rt_lib0clear(&___nl__7);
#line 576
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__6, ___nl__2));
#line 576
c_rt_lib0clear(&___nl__6);
#line 578
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(840)));
#line 578
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 578
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 578
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 578
label_254:
#line 578
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 578
if(c_rt_lib0check_true_native(___nl__11)){ goto label_274;}
#line 578
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 579
c_rt_lib0move(&___nl__12,___get_global_const(1014));
#line 579
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 579
c_rt_lib0clear(&___nl__12);
#line 580
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(841)));
#line 580
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_variant_case_decl(___nl__13));
#line 580
c_rt_lib0clear(&___nl__13);
#line 580
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 580
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 580
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__12, ___nl__13));
#line 580
c_rt_lib0clear(&___nl__13);
#line 580
c_rt_lib0clear(&___nl__12);
#line 581
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(201)));
#line 581
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__12, ___nl__2));
#line 581
c_rt_lib0clear(&___nl__12);
#line 582
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 582
goto label_254;
#line 582
label_274:
#line 582
c_rt_lib0clear(&___nl__6);
#line 582
c_rt_lib0clear(&___nl__7);
#line 582
c_rt_lib0clear(&___nl__8);
#line 582
c_rt_lib0clear(&___nl__9);
#line 582
c_rt_lib0clear(&___nl__10);
#line 582
c_rt_lib0clear(&___nl__11);
#line 582
c_rt_lib0clear(&___nl__5);
#line 583
goto label_426;
#line 583
label_283:
#line 583
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(819)));
#line 584
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(919)));
#line 584
c_rt_lib0move(&___nl__7,___get_global_const(819));
#line 584
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 584
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(836)));
#line 584
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 584
c_rt_lib0clear(&___nl__10);
#line 584
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(3)));
#line 584
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 584
c_rt_lib0clear(&___nl__10);
#line 584
c_rt_lib0clear(&___nl__9);
#line 584
c_rt_lib0clear(&___nl__8);
#line 584
c_rt_lib0clear(&___nl__7);
#line 584
c_rt_lib0clear(&___nl__6);
#line 584
c_rt_lib0clear(&___nl__5);
#line 585
goto label_426;
#line 585
label_300:
#line 585
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(820)));
#line 586
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(919)));
#line 586
c_rt_lib0move(&___nl__7,___get_global_const(820));
#line 586
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 586
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(329)));
#line 586
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(198)));
#line 586
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 586
c_rt_lib0clear(&___nl__10);
#line 586
c_rt_lib0clear(&___nl__11);
#line 586
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(328)));
#line 586
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 586
c_rt_lib0clear(&___nl__10);
#line 586
c_rt_lib0clear(&___nl__9);
#line 586
c_rt_lib0clear(&___nl__8);
#line 586
c_rt_lib0clear(&___nl__7);
#line 586
c_rt_lib0clear(&___nl__6);
#line 586
c_rt_lib0clear(&___nl__5);
#line 588
goto label_426;
#line 588
label_319:
#line 588
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(821)));
#line 589
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(919)));
#line 589
c_rt_lib0move(&___nl__7,___get_global_const(821));
#line 589
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 589
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(836)));
#line 589
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 589
c_rt_lib0clear(&___nl__10);
#line 589
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(837)));
#line 589
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 589
c_rt_lib0clear(&___nl__10);
#line 589
c_rt_lib0clear(&___nl__9);
#line 589
c_rt_lib0clear(&___nl__8);
#line 589
c_rt_lib0clear(&___nl__7);
#line 589
c_rt_lib0clear(&___nl__6);
#line 589
c_rt_lib0clear(&___nl__5);
#line 590
goto label_426;
#line 590
label_336:
#line 590
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(140)));
#line 591
c_rt_lib0move(&___nl__6,___get_global_const(140));
#line 591
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 591
c_rt_lib0clear(&___nl__6);
#line 592
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__5, ___nl__2));
#line 592
c_rt_lib0clear(&___nl__5);
#line 593
goto label_426;
#line 593
label_344:
#line 593
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(823)));
#line 594
c_rt_lib0move(&___nl__6,___get_global_const(817));
#line 594
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 594
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 594
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(832)));
#line 594
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 594
c_rt_lib0clear(&___nl__9);
#line 594
c_rt_lib0clear(&___nl__8);
#line 594
c_rt_lib0clear(&___nl__7);
#line 594
c_rt_lib0clear(&___nl__6);
#line 594
c_rt_lib0clear(&___nl__5);
#line 595
goto label_426;
#line 595
label_357:
#line 595
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(824)));
#line 596
c_rt_lib0move(&___nl__6,___get_global_const(943));
#line 596
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 596
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 596
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(832)));
#line 596
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 596
c_rt_lib0clear(&___nl__9);
#line 596
c_rt_lib0clear(&___nl__8);
#line 596
c_rt_lib0clear(&___nl__7);
#line 596
c_rt_lib0clear(&___nl__6);
#line 596
c_rt_lib0clear(&___nl__5);
#line 597
goto label_426;
#line 597
label_370:
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(192)));
#line 598
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_sim_value(___nl__5));
#line 598
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 598
c_rt_lib0clear(&___nl__6);
#line 598
c_rt_lib0clear(&___nl__5);
#line 599
goto label_426;
#line 599
label_377:
#line 599
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(830)));
#line 600
c_rt_lib0move(&___nl__7,___get_global_const(830));
#line 600
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 600
c_rt_lib0clear(&___nl__7);
#line 600
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 600
c_rt_lib0clear(&___nl__6);
#line 600
c_rt_lib0clear(&___nl__5);
#line 601
goto label_426;
#line 601
label_386:
#line 601
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(95)));
#line 602
c_rt_lib0move(&___nl__7,___get_global_const(95));
#line 602
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 602
c_rt_lib0clear(&___nl__7);
#line 602
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 602
c_rt_lib0clear(&___nl__6);
#line 602
c_rt_lib0clear(&___nl__5);
#line 603
goto label_426;
#line 603
label_395:
#line 603
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(90)));
#line 604
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_return(___nl__5));
#line 604
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 604
c_rt_lib0clear(&___nl__6);
#line 604
c_rt_lib0clear(&___nl__5);
#line 605
goto label_426;
#line 605
label_402:
#line 606
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_break());
#line 606
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 606
c_rt_lib0clear(&___nl__5);
#line 607
goto label_426;
#line 607
label_407:
#line 608
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_continue());
#line 608
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 608
c_rt_lib0clear(&___nl__5);
#line 609
goto label_426;
#line 609
label_412:
#line 609
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(217)));
#line 610
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_die(___nl__5));
#line 610
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 610
c_rt_lib0clear(&___nl__6);
#line 610
c_rt_lib0clear(&___nl__5);
#line 611
goto label_426;
#line 611
label_419:
#line 611
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(829)));
#line 612
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_var_decl(___nl__5));
#line 612
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 612
c_rt_lib0clear(&___nl__6);
#line 612
c_rt_lib0clear(&___nl__5);
#line 613
goto label_426;
#line 613
label_426:
#line 613
c_rt_lib0clear(&___nl__3);
#line 613
c_rt_lib0clear(&___nl__4);
#line 613
c_rt_lib0clear(&___nl__1);
#line 613
c_rt_lib0clear(&___nl__2);
#line 613
return NULL;
}

ImmT pretty_printer_priv0is_proper_hash_key(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 617
c_rt_lib0move(&___nl__1, string0to_array(___nl__0));
#line 617
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 617
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 617
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__1));
#line 617
label_4:
#line 617
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 617
if(c_rt_lib0check_true_native(___nl__6)){ goto label_35;}
#line 617
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 618
c_rt_lib0move(&___nl__7, string0is_letter(___nl__2));
#line 618
if(c_rt_lib0check_true_native(___nl__7)){ goto label_11;}
#line 618
c_rt_lib0move(&___nl__7, string0is_digit(___nl__2));
#line 618
label_11:
#line 618
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 618
c_rt_lib0move(&___nl__7,___get_global_const(83));
#line 618
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__2, ___nl__7));
#line 618
label_15:
#line 618
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 618
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 618
if(c_rt_lib0check_true_native(___nl__7)){ goto label_31;}
#line 618
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 618
c_rt_lib0clear(&___nl__0);
#line 618
c_rt_lib0clear(&___nl__1);
#line 618
c_rt_lib0clear(&___nl__2);
#line 618
c_rt_lib0clear(&___nl__3);
#line 618
c_rt_lib0clear(&___nl__4);
#line 618
c_rt_lib0clear(&___nl__5);
#line 618
c_rt_lib0clear(&___nl__6);
#line 618
c_rt_lib0clear(&___nl__7);
#line 618
return ___nl__8;
#line 618
c_rt_lib0clear(&___nl__8);
#line 618
goto label_31;
#line 618
label_31:
#line 618
c_rt_lib0clear(&___nl__7);
#line 619
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 619
goto label_4;
#line 619
label_35:
#line 619
c_rt_lib0clear(&___nl__1);
#line 619
c_rt_lib0clear(&___nl__2);
#line 619
c_rt_lib0clear(&___nl__3);
#line 619
c_rt_lib0clear(&___nl__4);
#line 619
c_rt_lib0clear(&___nl__5);
#line 619
c_rt_lib0clear(&___nl__6);
#line 620
c_rt_lib0move(&___nl__1, c_rt_lib0get_true());
#line 620
c_rt_lib0clear(&___nl__0);
#line 620
return ___nl__1;
#line 620
c_rt_lib0clear(&___nl__1);
#line 620
c_rt_lib0clear(&___nl__0);
#line 620
return NULL;
}


static ImmT ___const__[4];
static int ___const_init__ = 1;
void pretty_printer0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[3];


for(int i=0;i<3;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 3);
}
ImmT pretty_printer_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT pretty_printer_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = pretty_printer0struct_t0cal();
	break;
case 1:
	___const__[1] = pretty_printer_priv0print_break0cal();
	break;
case 2:
	___const__[2] = pretty_printer_priv0print_continue0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
