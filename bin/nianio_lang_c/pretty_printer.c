
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
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__6, ___get_global_const(1001), ___nl__7, ___get_global_const(1002), ___nl__8));
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
c_rt_lib0move(&___nl__9,___get_global_const(629));
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
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(786)));
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
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(827)));
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
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__12, ___get_global_const(1001), ___nl__9, ___get_global_const(1002), ___nl__13));
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
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(898)));
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
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(898)));
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
c_rt_lib0move(&___nl__3,___get_global_const(1003));
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
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(1003));
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
c_rt_lib0move(&___nl__9,___get_global_const(629));
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
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(786)));
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
c_rt_lib0move(&___nl__6,___get_global_const(949));
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
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(787)));
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
c_rt_lib0move(&___nl__3,___get_global_const(848));
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
c_rt_lib0move(&___nl__8,___get_global_const(864));
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
if(c_rt_lib0check_true_native(___nl__1)){ goto label_46;}
#line 159
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 159
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(192)));
#line 159
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__2, ___get_global_const(855)));
#line 160
c_rt_lib0move(&___nl__4,___get_global_const(571));
#line 160
c_rt_lib0move(&___nl__3, string0index2(___nl__2, ___nl__4));
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__4));
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 160
if(c_rt_lib0check_true_native(___nl__3)){ goto label_29;}
#line 161
c_rt_lib0move(&___nl__4,___get_global_const(464));
#line 161
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__2));
#line 161
c_rt_lib0move(&___nl__5,___get_global_const(464));
#line 161
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 161
c_rt_lib0clear(&___nl__5);
#line 161
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 161
c_rt_lib0clear(&___nl__4);
#line 162
goto label_29;
#line 162
label_29:
#line 162
c_rt_lib0clear(&___nl__3);
#line 163
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 163
c_rt_lib0move(&___nl__5,___get_global_const(270));
#line 163
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__2, ___nl__5));
#line 163
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 163
c_rt_lib0move(&___nl__3, pretty_printer_priv0get_compressed_fun_val(___nl__4, ___nl__5, ___nl__6));
#line 163
c_rt_lib0clear(&___nl__6);
#line 163
c_rt_lib0clear(&___nl__5);
#line 163
c_rt_lib0clear(&___nl__4);
#line 163
c_rt_lib0clear(&___nl__0);
#line 163
c_rt_lib0clear(&___nl__1);
#line 163
c_rt_lib0clear(&___nl__2);
#line 163
return ___nl__3;
#line 163
c_rt_lib0clear(&___nl__3);
#line 163
c_rt_lib0clear(&___nl__2);
#line 164
goto label_46;
#line 164
label_46:
#line 164
c_rt_lib0clear(&___nl__1);
#line 166
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 166
c_rt_lib0move(&___nl__3, pretty_printer_priv0print_val(___nl__4));
#line 166
c_rt_lib0clear(&___nl__4);
#line 167
c_rt_lib0move(&___nl__4, wprinter0get_sep());
#line 168
c_rt_lib0move(&___nl__6,___get_global_const(254));
#line 168
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 168
c_rt_lib0clear(&___nl__6);
#line 169
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 170
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 170
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 170
c_rt_lib0clear(&___nl__8);
#line 170
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(5, ___nl__3, ___nl__4, ___nl__5, ___nl__6, ___nl__7));
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
c_rt_lib0move(&___nl__1, wprinter0build_pretty_l(___nl__2));
#line 170
c_rt_lib0clear(&___nl__2);
#line 170
c_rt_lib0clear(&___nl__0);
#line 170
return ___nl__1;
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
c_rt_lib0clear(&___nl__0);
#line 170
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
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 175
c_rt_lib0move(&___nl__3,___get_global_const(7));
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__3));
#line 175
c_rt_lib0clear(&___nl__3);
#line 175
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 175
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(830)));
#line 175
label_9:
#line 175
c_rt_lib0clear(&___nl__2);
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 175
if(c_rt_lib0check_true_native(___nl__1)){ goto label_21;}
#line 176
c_rt_lib0move(&___nl__3,___get_global_const(963));
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
label_21:
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 177
c_rt_lib0move(&___nl__3,___get_global_const(8));
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__3));
#line 177
c_rt_lib0clear(&___nl__3);
#line 177
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 177
if(c_rt_lib0check_true_native(___nl__2)){ goto label_31;}
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(830)));
#line 177
label_31:
#line 177
c_rt_lib0clear(&___nl__2);
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 177
if(c_rt_lib0check_true_native(___nl__1)){ goto label_43;}
#line 178
c_rt_lib0move(&___nl__3,___get_global_const(964));
#line 178
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 178
c_rt_lib0clear(&___nl__3);
#line 178
c_rt_lib0clear(&___nl__0);
#line 178
c_rt_lib0clear(&___nl__1);
#line 178
return ___nl__2;
#line 178
c_rt_lib0clear(&___nl__2);
#line 179
goto label_43;
#line 179
label_43:
#line 179
c_rt_lib0clear(&___nl__1);
#line 180
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 180
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 180
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(204)));
#line 180
if(c_rt_lib0check_true_native(___nl__1)){ goto label_52;}
#line 180
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 180
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 180
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(205)));
#line 180
label_52:
#line 180
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 180
if(c_rt_lib0check_true_native(___nl__1)){ goto label_73;}
#line 181
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 181
c_rt_lib0move(&___nl__4,___get_global_const(417));
#line 181
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 181
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 181
c_rt_lib0clear(&___nl__5);
#line 181
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 181
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 181
c_rt_lib0clear(&___nl__5);
#line 181
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 181
c_rt_lib0move(&___nl__2, pretty_printer_priv0get_compressed_fun_val(___nl__3, ___nl__4, ___nl__5));
#line 181
c_rt_lib0clear(&___nl__5);
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
c_rt_lib0clear(&___nl__3);
#line 181
c_rt_lib0clear(&___nl__0);
#line 181
c_rt_lib0clear(&___nl__1);
#line 181
return ___nl__2;
#line 181
c_rt_lib0clear(&___nl__2);
#line 182
goto label_73;
#line 182
label_73:
#line 182
c_rt_lib0clear(&___nl__1);
#line 183
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 184
c_rt_lib0move(&___nl__3,___get_global_const(417));
#line 184
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 184
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 184
c_rt_lib0clear(&___nl__4);
#line 184
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 184
c_rt_lib0clear(&___nl__3);
#line 184
c_rt_lib0delete(array0push(&___nl__1, ___nl__2));
#line 184
c_rt_lib0clear(&___nl__2);
#line 186
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 186
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(192)));
#line 186
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(830)));
#line 186
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 186
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 186
if(c_rt_lib0check_true_native(___nl__2)){ goto label_106;}
#line 185
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 185
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 185
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 185
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__6));
#line 185
c_rt_lib0clear(&___nl__6);
#line 185
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 185
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 185
c_rt_lib0clear(&___nl__7);
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(3, ___nl__4, ___nl__5, ___nl__6));
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0clear(&___nl__6);
#line 185
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 185
c_rt_lib0clear(&___nl__3);
#line 185
goto label_106;
#line 185
label_106:
#line 185
c_rt_lib0clear(&___nl__2);
#line 187
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 187
c_rt_lib0clear(&___nl__0);
#line 187
c_rt_lib0clear(&___nl__1);
#line 187
return ___nl__2;
#line 187
c_rt_lib0clear(&___nl__2);
#line 187
c_rt_lib0clear(&___nl__1);
#line 187
c_rt_lib0clear(&___nl__0);
#line 187
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
#line 191
c_rt_lib0move(&___nl__3,___get_global_const(417));
#line 191
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 191
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 191
c_rt_lib0clear(&___nl__3);
#line 191
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 191
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 192
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(192)));
#line 192
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(41)));
#line 194
if(c_rt_lib0check_true_native(___nl__3)){ goto label_33;}
#line 194
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 194
nl_die_arg(___nl__3);
#line 192
label_16:
#line 192
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(192)));
#line 193
c_rt_lib0move(&___nl__7,___get_global_const(373));
#line 193
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 193
c_rt_lib0clear(&___nl__7);
#line 193
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_var_decl(___nl__4));
#line 193
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 193
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 193
c_rt_lib0clear(&___nl__9);
#line 193
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(3, ___nl__6, ___nl__7, ___nl__8));
#line 193
c_rt_lib0clear(&___nl__6);
#line 193
c_rt_lib0clear(&___nl__7);
#line 193
c_rt_lib0clear(&___nl__8);
#line 193
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 193
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0clear(&___nl__4);
#line 194
goto label_35;
#line 194
label_33:
#line 195
goto label_35;
#line 195
label_35:
#line 195
c_rt_lib0clear(&___nl__2);
#line 195
c_rt_lib0clear(&___nl__3);
#line 196
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 196
c_rt_lib0clear(&___nl__0);
#line 196
c_rt_lib0clear(&___nl__1);
#line 196
return ___nl__2;
#line 196
c_rt_lib0clear(&___nl__2);
#line 196
c_rt_lib0clear(&___nl__1);
#line 196
c_rt_lib0clear(&___nl__0);
#line 196
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
#line 200
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 201
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 201
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 201
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 201
label_4:
#line 201
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 201
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 202
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 202
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_fun_arg(___nl__7));
#line 202
c_rt_lib0clear(&___nl__7);
#line 202
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 202
c_rt_lib0clear(&___nl__6);
#line 203
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 203
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 203
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 203
c_rt_lib0clear(&___nl__7);
#line 203
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 203
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 203
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 203
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 203
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 203
c_rt_lib0clear(&___nl__9);
#line 203
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 203
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 203
c_rt_lib0clear(&___nl__8);
#line 203
c_rt_lib0clear(&___nl__9);
#line 203
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 203
c_rt_lib0clear(&___nl__7);
#line 203
goto label_29;
#line 203
label_29:
#line 203
c_rt_lib0clear(&___nl__6);
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 204
goto label_4;
#line 204
label_33:
#line 204
c_rt_lib0clear(&___nl__2);
#line 204
c_rt_lib0clear(&___nl__3);
#line 204
c_rt_lib0clear(&___nl__4);
#line 204
c_rt_lib0clear(&___nl__5);
#line 205
c_rt_lib0clear(&___nl__0);
#line 205
return ___nl__1;
#line 205
c_rt_lib0clear(&___nl__1);
#line 205
c_rt_lib0clear(&___nl__0);
#line 205
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
#line 209
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 210
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(222)));
#line 210
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(5)));
#line 210
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 212
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(41)));
#line 212
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 212
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 212
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 212
nl_die_arg(___nl__3);
#line 210
label_9:
#line 211
c_rt_lib0move(&___nl__6,___get_global_const(5));
#line 211
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 211
c_rt_lib0clear(&___nl__6);
#line 211
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 211
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 211
c_rt_lib0clear(&___nl__5);
#line 211
c_rt_lib0clear(&___nl__6);
#line 211
c_rt_lib0delete(array0append(&___nl__1, ___nl__4));
#line 211
c_rt_lib0clear(&___nl__4);
#line 212
goto label_22;
#line 212
label_20:
#line 213
goto label_22;
#line 213
label_22:
#line 213
c_rt_lib0clear(&___nl__2);
#line 213
c_rt_lib0clear(&___nl__3);
#line 214
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 214
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_val(___nl__3));
#line 214
c_rt_lib0clear(&___nl__3);
#line 214
c_rt_lib0delete(array0push(&___nl__1, ___nl__2));
#line 214
c_rt_lib0clear(&___nl__2);
#line 215
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 215
c_rt_lib0clear(&___nl__0);
#line 215
c_rt_lib0clear(&___nl__1);
#line 215
return ___nl__2;
#line 215
c_rt_lib0clear(&___nl__2);
#line 215
c_rt_lib0clear(&___nl__1);
#line 215
c_rt_lib0clear(&___nl__0);
#line 215
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
#line 219
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 220
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 220
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 220
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 220
label_4:
#line 220
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 220
if(c_rt_lib0check_true_native(___nl__6)){ goto label_26;}
#line 220
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 221
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 221
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(192)));
#line 221
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(204)));
#line 221
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 221
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 221
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(192)));
#line 221
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(205)));
#line 221
label_15:
#line 221
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 221
if(c_rt_lib0check_true_native(___nl__7)){ goto label_22;}
#line 221
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 221
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__8));
#line 221
c_rt_lib0clear(&___nl__8);
#line 221
goto label_22;
#line 221
label_22:
#line 221
c_rt_lib0clear(&___nl__7);
#line 222
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 222
goto label_4;
#line 222
label_26:
#line 222
c_rt_lib0clear(&___nl__2);
#line 222
c_rt_lib0clear(&___nl__3);
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0clear(&___nl__6);
#line 223
c_rt_lib0clear(&___nl__0);
#line 223
return ___nl__1;
#line 223
c_rt_lib0clear(&___nl__1);
#line 223
c_rt_lib0clear(&___nl__0);
#line 223
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
#line 228
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 229
c_rt_lib0copy(&___nl__5, ___nl__2);
#line 230
label_2:
#line 231
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 231
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(204)));
#line 231
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 231
if(c_rt_lib0check_true_native(___nl__6)){ goto label_39;}
#line 232
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 232
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(204)));
#line 233
c_rt_lib0move(&___nl__8,___get_global_const(258));
#line 233
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__8));
#line 233
c_rt_lib0clear(&___nl__8);
#line 234
c_rt_lib0move(&___nl__8,___get_global_const(259));
#line 234
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 234
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 234
c_rt_lib0clear(&___nl__8);
#line 235
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 235
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 235
c_rt_lib0move(&___nl__8, c_rt_lib0num_ne(___nl__8, ___nl__9));
#line 235
c_rt_lib0clear(&___nl__9);
#line 235
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 235
if(c_rt_lib0check_true_native(___nl__8)){ goto label_30;}
#line 236
c_rt_lib0move(&___nl__9, pretty_printer_priv0join_print_val(___nl__7));
#line 236
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 236
c_rt_lib0clear(&___nl__9);
#line 237
c_rt_lib0clear(&___nl__6);
#line 237
c_rt_lib0clear(&___nl__7);
#line 237
c_rt_lib0clear(&___nl__8);
#line 237
goto label_73;
#line 238
goto label_30;
#line 238
label_30:
#line 238
c_rt_lib0clear(&___nl__8);
#line 239
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 239
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 239
c_rt_lib0clear(&___nl__9);
#line 239
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 239
c_rt_lib0clear(&___nl__8);
#line 239
c_rt_lib0clear(&___nl__7);
#line 240
goto label_70;
#line 240
label_39:
#line 240
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 240
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(205)));
#line 240
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 240
if(c_rt_lib0check_true_native(___nl__6)){ goto label_61;}
#line 241
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 241
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(205)));
#line 242
c_rt_lib0move(&___nl__8,___get_global_const(252));
#line 242
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__8));
#line 242
c_rt_lib0clear(&___nl__8);
#line 243
c_rt_lib0move(&___nl__8,___get_global_const(253));
#line 243
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 243
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 243
c_rt_lib0clear(&___nl__8);
#line 244
c_rt_lib0move(&___nl__8, pretty_printer_priv0join_print_hash_elem(___nl__7));
#line 244
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 244
c_rt_lib0clear(&___nl__8);
#line 245
c_rt_lib0clear(&___nl__6);
#line 245
c_rt_lib0clear(&___nl__7);
#line 245
goto label_73;
#line 245
c_rt_lib0clear(&___nl__7);
#line 246
goto label_70;
#line 246
label_61:
#line 247
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__0));
#line 247
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 247
c_rt_lib0clear(&___nl__8);
#line 247
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 247
c_rt_lib0clear(&___nl__7);
#line 248
c_rt_lib0clear(&___nl__6);
#line 248
goto label_73;
#line 249
goto label_70;
#line 249
label_70:
#line 249
c_rt_lib0clear(&___nl__6);
#line 230
goto label_2;
#line 230
label_73:
#line 251
c_rt_lib0move(&___nl__6, wprinter0build_pretty_arr_decl(___nl__3, ___nl__4, ___nl__5));
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
c_rt_lib0clear(&___nl__2);
#line 251
c_rt_lib0clear(&___nl__3);
#line 251
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0clear(&___nl__5);
#line 251
return ___nl__6;
#line 251
c_rt_lib0clear(&___nl__6);
#line 251
c_rt_lib0clear(&___nl__3);
#line 251
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
c_rt_lib0clear(&___nl__2);
#line 251
return NULL;
}

ImmT pretty_printer_priv0print_st(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 255
c_rt_lib0move(&___nl__3,___get_global_const(571));
#line 255
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__3));
#line 255
c_rt_lib0clear(&___nl__3);
#line 256
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__1, ___nl__2));
#line 256
c_rt_lib0clear(&___nl__1);
#line 256
c_rt_lib0clear(&___nl__2);
#line 256
return NULL;
}

ImmT pretty_printer_priv0get_fun_label(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 260
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 260
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 260
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 260
c_rt_lib0move(&___nl__2,___get_global_const(185));
#line 260
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 260
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 260
goto label_9;
#line 260
label_7:
#line 260
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 260
label_9:
#line 260
c_rt_lib0clear(&___nl__0);
#line 260
c_rt_lib0clear(&___nl__1);
#line 260
return ___nl__2;
#line 260
c_rt_lib0clear(&___nl__2);
#line 260
c_rt_lib0clear(&___nl__0);
#line 260
c_rt_lib0clear(&___nl__1);
#line 260
return NULL;
}

ImmT pretty_printer_priv0string_to_nl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 264
c_rt_lib0move(&___nl__2,___get_global_const(464));
#line 264
c_rt_lib0move(&___nl__3,___get_global_const(1005));
#line 264
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 264
c_rt_lib0clear(&___nl__3);
#line 264
c_rt_lib0clear(&___nl__2);
#line 264
c_rt_lib0clear(&___nl__0);
#line 264
return ___nl__1;
#line 264
c_rt_lib0clear(&___nl__1);
#line 264
c_rt_lib0clear(&___nl__0);
#line 264
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
#line 268
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 269
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 269
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 269
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 269
label_4:
#line 269
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 269
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 270
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 270
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 270
c_rt_lib0clear(&___nl__7);
#line 270
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 270
c_rt_lib0clear(&___nl__6);
#line 271
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 271
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 271
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 271
c_rt_lib0clear(&___nl__7);
#line 271
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 271
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 271
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 271
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 271
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 271
c_rt_lib0clear(&___nl__9);
#line 271
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 271
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 271
c_rt_lib0clear(&___nl__8);
#line 271
c_rt_lib0clear(&___nl__9);
#line 271
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 271
c_rt_lib0clear(&___nl__7);
#line 271
goto label_29;
#line 271
label_29:
#line 271
c_rt_lib0clear(&___nl__6);
#line 272
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 272
goto label_4;
#line 272
label_33:
#line 272
c_rt_lib0clear(&___nl__2);
#line 272
c_rt_lib0clear(&___nl__3);
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0clear(&___nl__5);
#line 273
c_rt_lib0clear(&___nl__0);
#line 273
return ___nl__1;
#line 273
c_rt_lib0clear(&___nl__1);
#line 273
c_rt_lib0clear(&___nl__0);
#line 273
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
#line 277
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 277
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(811)));
#line 277
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 277
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 277
if(c_rt_lib0check_true_native(___nl__1)){ goto label_11;}
#line 277
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 277
c_rt_lib0clear(&___nl__0);
#line 277
c_rt_lib0clear(&___nl__1);
#line 277
return ___nl__2;
#line 277
c_rt_lib0clear(&___nl__2);
#line 277
goto label_11;
#line 277
label_11:
#line 277
c_rt_lib0clear(&___nl__1);
#line 278
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 278
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__1, ___get_global_const(811)));
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 279
c_rt_lib0move(&___nl__2, array0len(___nl__4));
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0move(&___nl__4,___get_global_const(6));
#line 279
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__4));
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 279
if(c_rt_lib0check_true_native(___nl__3)){ goto label_32;}
#line 279
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(132)));
#line 279
c_rt_lib0move(&___nl__4,___get_global_const(771));
#line 279
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
if(c_rt_lib0check_true_native(___nl__2)){ goto label_32;}
#line 279
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(132)));
#line 279
c_rt_lib0move(&___nl__4,___get_global_const(1006));
#line 279
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
label_32:
#line 279
c_rt_lib0clear(&___nl__3);
#line 279
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 279
if(c_rt_lib0check_true_native(___nl__2)){ goto label_106;}
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 280
c_rt_lib0move(&___nl__5,___get_global_const(885));
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 280
c_rt_lib0clear(&___nl__5);
#line 280
if(c_rt_lib0check_true_native(___nl__3)){ goto label_45;}
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 280
c_rt_lib0move(&___nl__5,___get_global_const(883));
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 280
c_rt_lib0clear(&___nl__5);
#line 280
label_45:
#line 280
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 280
if(c_rt_lib0check_true_native(___nl__4)){ goto label_55;}
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 280
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 280
c_rt_lib0clear(&___nl__5);
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(198)));
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(192)));
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(770)));
#line 280
label_55:
#line 280
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 280
if(c_rt_lib0check_true_native(___nl__3)){ goto label_103;}
#line 281
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 281
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 281
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 281
c_rt_lib0clear(&___nl__5);
#line 281
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 281
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 281
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(770)));
#line 282
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(327)));
#line 282
c_rt_lib0move(&___nl__5, array0len(___nl__7));
#line 282
c_rt_lib0clear(&___nl__7);
#line 282
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 282
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 282
c_rt_lib0clear(&___nl__7);
#line 282
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 282
if(c_rt_lib0check_true_native(___nl__6)){ goto label_85;}
#line 282
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(327)));
#line 282
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 282
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 282
c_rt_lib0clear(&___nl__8);
#line 282
c_rt_lib0move(&___nl__8,___get_global_const(571));
#line 282
c_rt_lib0move(&___nl__5, string0index2(___nl__7, ___nl__8));
#line 282
c_rt_lib0clear(&___nl__8);
#line 282
c_rt_lib0clear(&___nl__7);
#line 282
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 282
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__5, ___nl__7));
#line 282
c_rt_lib0clear(&___nl__7);
#line 282
label_85:
#line 282
c_rt_lib0clear(&___nl__6);
#line 282
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 282
if(c_rt_lib0check_true_native(___nl__5)){ goto label_99;}
#line 283
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 283
c_rt_lib0clear(&___nl__0);
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
c_rt_lib0clear(&___nl__2);
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
return ___nl__6;
#line 283
c_rt_lib0clear(&___nl__6);
#line 284
goto label_99;
#line 284
label_99:
#line 284
c_rt_lib0clear(&___nl__5);
#line 284
c_rt_lib0clear(&___nl__4);
#line 285
goto label_103;
#line 285
label_103:
#line 285
c_rt_lib0clear(&___nl__3);
#line 286
goto label_106;
#line 286
label_106:
#line 286
c_rt_lib0clear(&___nl__2);
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 287
c_rt_lib0clear(&___nl__0);
#line 287
c_rt_lib0clear(&___nl__1);
#line 287
return ___nl__2;
#line 287
c_rt_lib0clear(&___nl__2);
#line 287
c_rt_lib0clear(&___nl__1);
#line 287
c_rt_lib0clear(&___nl__0);
#line 287
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
#line 291
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 291
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(196)));
#line 291
if(c_rt_lib0check_true_native(___nl__2)){ goto label_38;}
#line 293
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(770)));
#line 293
if(c_rt_lib0check_true_native(___nl__2)){ goto label_49;}
#line 303
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(855)));
#line 303
if(c_rt_lib0check_true_native(___nl__2)){ goto label_121;}
#line 308
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(840)));
#line 308
if(c_rt_lib0check_true_native(___nl__2)){ goto label_150;}
#line 310
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(848)));
#line 310
if(c_rt_lib0check_true_native(___nl__2)){ goto label_161;}
#line 312
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(854)));
#line 312
if(c_rt_lib0check_true_native(___nl__2)){ goto label_172;}
#line 314
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(853)));
#line 314
if(c_rt_lib0check_true_native(___nl__2)){ goto label_195;}
#line 322
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(208)));
#line 322
if(c_rt_lib0check_true_native(___nl__2)){ goto label_240;}
#line 355
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(856)));
#line 355
if(c_rt_lib0check_true_native(___nl__2)){ goto label_409;}
#line 370
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(860)));
#line 370
if(c_rt_lib0check_true_native(___nl__2)){ goto label_463;}
#line 372
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(859)));
#line 372
if(c_rt_lib0check_true_native(___nl__2)){ goto label_482;}
#line 374
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(857)));
#line 374
if(c_rt_lib0check_true_native(___nl__2)){ goto label_501;}
#line 376
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(811)));
#line 376
if(c_rt_lib0check_true_native(___nl__2)){ goto label_520;}
#line 400
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(830)));
#line 400
if(c_rt_lib0check_true_native(___nl__2)){ goto label_698;}
#line 402
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(204)));
#line 402
if(c_rt_lib0check_true_native(___nl__2)){ goto label_711;}
#line 404
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(205)));
#line 404
if(c_rt_lib0check_true_native(___nl__2)){ goto label_726;}
#line 406
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(858)));
#line 406
if(c_rt_lib0check_true_native(___nl__2)){ goto label_743;}
#line 406
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 406
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 406
nl_die_arg(___nl__2);
#line 291
label_38:
#line 291
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(196)));
#line 292
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__3));
#line 292
c_rt_lib0clear(&___nl__0);
#line 292
c_rt_lib0clear(&___nl__1);
#line 292
c_rt_lib0clear(&___nl__2);
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
return ___nl__4;
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0clear(&___nl__3);
#line 293
goto label_760;
#line 293
label_49:
#line 293
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(770)));
#line 294
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 295
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(327)));
#line 295
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 295
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 295
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 295
label_56:
#line 295
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 295
if(c_rt_lib0check_true_native(___nl__10)){ goto label_68;}
#line 295
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 296
c_rt_lib0move(&___nl__11,___get_global_const(464));
#line 296
c_rt_lib0move(&___nl__12, pretty_printer_priv0string_to_nl(___nl__6));
#line 296
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 296
c_rt_lib0clear(&___nl__12);
#line 296
c_rt_lib0delete(array0push(&___nl__4, ___nl__11));
#line 296
c_rt_lib0clear(&___nl__11);
#line 297
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 297
goto label_56;
#line 297
label_68:
#line 297
c_rt_lib0clear(&___nl__5);
#line 297
c_rt_lib0clear(&___nl__6);
#line 297
c_rt_lib0clear(&___nl__7);
#line 297
c_rt_lib0clear(&___nl__8);
#line 297
c_rt_lib0clear(&___nl__9);
#line 297
c_rt_lib0clear(&___nl__10);
#line 298
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(907)));
#line 298
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(906)));
#line 298
if(c_rt_lib0check_true_native(___nl__6)){ goto label_83;}
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(905)));
#line 299
if(c_rt_lib0check_true_native(___nl__6)){ goto label_85;}
#line 299
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 299
nl_die_arg(___nl__6);
#line 298
label_83:
#line 299
goto label_105;
#line 299
label_85:
#line 300
c_rt_lib0move(&___nl__8, array0len(___nl__4));
#line 300
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 300
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 300
c_rt_lib0clear(&___nl__9);
#line 300
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__4, ___nl__8));
#line 300
c_rt_lib0clear(&___nl__8);
#line 300
c_rt_lib0move(&___nl__8,___get_global_const(464));
#line 300
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 300
c_rt_lib0clear(&___nl__8);
#line 300
c_rt_lib0move(&___nl__9, array0len(___nl__4));
#line 300
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 300
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__10));
#line 300
c_rt_lib0clear(&___nl__10);
#line 300
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 300
c_rt_lib0array_set(&___nl__4, ___nl__9, ___nl__8);
#line 300
c_rt_lib0clear(&___nl__7);
#line 300
c_rt_lib0clear(&___nl__8);
#line 300
c_rt_lib0clear(&___nl__9);
#line 301
goto label_105;
#line 301
label_105:
#line 301
c_rt_lib0clear(&___nl__5);
#line 301
c_rt_lib0clear(&___nl__6);
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(907)));
#line 302
c_rt_lib0move(&___nl__5, wprinter0build_str_arr(___nl__4, ___nl__6));
#line 302
c_rt_lib0clear(&___nl__6);
#line 302
c_rt_lib0clear(&___nl__0);
#line 302
c_rt_lib0clear(&___nl__1);
#line 302
c_rt_lib0clear(&___nl__2);
#line 302
c_rt_lib0clear(&___nl__3);
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
return ___nl__5;
#line 302
c_rt_lib0clear(&___nl__5);
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
c_rt_lib0clear(&___nl__3);
#line 303
goto label_760;
#line 303
label_121:
#line 303
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(855)));
#line 304
c_rt_lib0move(&___nl__5,___get_global_const(571));
#line 304
c_rt_lib0move(&___nl__4, string0index2(___nl__3, ___nl__5));
#line 304
c_rt_lib0clear(&___nl__5);
#line 304
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 304
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__4, ___nl__5));
#line 304
c_rt_lib0clear(&___nl__5);
#line 304
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 304
if(c_rt_lib0check_true_native(___nl__4)){ goto label_139;}
#line 305
c_rt_lib0move(&___nl__5,___get_global_const(464));
#line 305
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 305
c_rt_lib0move(&___nl__6,___get_global_const(464));
#line 305
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 305
c_rt_lib0clear(&___nl__6);
#line 305
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 305
c_rt_lib0clear(&___nl__5);
#line 306
goto label_139;
#line 306
label_139:
#line 306
c_rt_lib0clear(&___nl__4);
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
goto label_760;
#line 308
label_150:
#line 308
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(840)));
#line 309
c_rt_lib0move(&___nl__4, pretty_printer_priv0print_variant(___nl__3));
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
goto label_760;
#line 310
label_161:
#line 310
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(848)));
#line 311
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__3));
#line 311
c_rt_lib0clear(&___nl__0);
#line 311
c_rt_lib0clear(&___nl__1);
#line 311
c_rt_lib0clear(&___nl__2);
#line 311
c_rt_lib0clear(&___nl__3);
#line 311
return ___nl__4;
#line 311
c_rt_lib0clear(&___nl__4);
#line 311
c_rt_lib0clear(&___nl__3);
#line 312
goto label_760;
#line 312
label_172:
#line 312
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(854)));
#line 313
c_rt_lib0move(&___nl__7,___get_global_const(373));
#line 313
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 313
c_rt_lib0clear(&___nl__7);
#line 313
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__3));
#line 313
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 313
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 313
c_rt_lib0clear(&___nl__9);
#line 313
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(3, ___nl__6, ___nl__7, ___nl__8));
#line 313
c_rt_lib0clear(&___nl__6);
#line 313
c_rt_lib0clear(&___nl__7);
#line 313
c_rt_lib0clear(&___nl__8);
#line 313
c_rt_lib0move(&___nl__4, wprinter0build_pretty_a(___nl__5));
#line 313
c_rt_lib0clear(&___nl__5);
#line 313
c_rt_lib0clear(&___nl__0);
#line 313
c_rt_lib0clear(&___nl__1);
#line 313
c_rt_lib0clear(&___nl__2);
#line 313
c_rt_lib0clear(&___nl__3);
#line 313
return ___nl__4;
#line 313
c_rt_lib0clear(&___nl__4);
#line 313
c_rt_lib0clear(&___nl__3);
#line 314
goto label_760;
#line 314
label_195:
#line 314
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(853)));
#line 316
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(861)));
#line 316
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 316
c_rt_lib0clear(&___nl__7);
#line 317
c_rt_lib0move(&___nl__7, wprinter0get_sep());
#line 318
c_rt_lib0move(&___nl__11,___get_global_const(1007));
#line 318
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 318
c_rt_lib0clear(&___nl__11);
#line 318
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(862)));
#line 318
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 318
c_rt_lib0clear(&___nl__12);
#line 318
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 318
c_rt_lib0clear(&___nl__10);
#line 318
c_rt_lib0clear(&___nl__11);
#line 318
c_rt_lib0move(&___nl__8, wprinter0build_pretty_op_l(___nl__9));
#line 318
c_rt_lib0clear(&___nl__9);
#line 319
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 320
c_rt_lib0move(&___nl__13,___get_global_const(1008));
#line 320
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 320
c_rt_lib0clear(&___nl__13);
#line 320
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(863)));
#line 320
c_rt_lib0move(&___nl__13, pretty_printer_priv0print_val(___nl__14));
#line 320
c_rt_lib0clear(&___nl__14);
#line 320
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__12, ___nl__13));
#line 320
c_rt_lib0clear(&___nl__12);
#line 320
c_rt_lib0clear(&___nl__13);
#line 320
c_rt_lib0move(&___nl__10, wprinter0build_pretty_op_l(___nl__11));
#line 320
c_rt_lib0clear(&___nl__11);
#line 320
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(5, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10));
#line 320
c_rt_lib0clear(&___nl__6);
#line 320
c_rt_lib0clear(&___nl__7);
#line 320
c_rt_lib0clear(&___nl__8);
#line 320
c_rt_lib0clear(&___nl__9);
#line 320
c_rt_lib0clear(&___nl__10);
#line 320
c_rt_lib0move(&___nl__4, wprinter0build_pretty_a(___nl__5));
#line 320
c_rt_lib0clear(&___nl__5);
#line 320
c_rt_lib0clear(&___nl__0);
#line 320
c_rt_lib0clear(&___nl__1);
#line 320
c_rt_lib0clear(&___nl__2);
#line 320
c_rt_lib0clear(&___nl__3);
#line 320
return ___nl__4;
#line 320
c_rt_lib0clear(&___nl__4);
#line 320
c_rt_lib0clear(&___nl__3);
#line 322
goto label_760;
#line 322
label_240:
#line 322
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(208)));
#line 323
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 324
c_rt_lib0move(&___nl__5,___get_global_const(850));
#line 324
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 324
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 324
if(c_rt_lib0check_true_native(___nl__5)){ goto label_279;}
#line 326
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 326
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 326
c_rt_lib0clear(&___nl__11);
#line 326
c_rt_lib0move(&___nl__12,___get_global_const(258));
#line 326
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 326
c_rt_lib0clear(&___nl__12);
#line 326
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 326
c_rt_lib0clear(&___nl__10);
#line 326
c_rt_lib0clear(&___nl__11);
#line 326
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__9));
#line 326
c_rt_lib0clear(&___nl__9);
#line 327
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 327
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 327
c_rt_lib0clear(&___nl__10);
#line 328
c_rt_lib0move(&___nl__11,___get_global_const(259));
#line 328
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 328
c_rt_lib0clear(&___nl__11);
#line 328
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 328
c_rt_lib0clear(&___nl__8);
#line 328
c_rt_lib0clear(&___nl__9);
#line 328
c_rt_lib0clear(&___nl__10);
#line 328
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 328
c_rt_lib0clear(&___nl__7);
#line 328
c_rt_lib0clear(&___nl__0);
#line 328
c_rt_lib0clear(&___nl__1);
#line 328
c_rt_lib0clear(&___nl__2);
#line 328
c_rt_lib0clear(&___nl__3);
#line 328
c_rt_lib0clear(&___nl__4);
#line 328
c_rt_lib0clear(&___nl__5);
#line 328
return ___nl__6;
#line 328
c_rt_lib0clear(&___nl__6);
#line 330
goto label_404;
#line 330
label_279:
#line 330
c_rt_lib0move(&___nl__5,___get_global_const(851));
#line 330
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 330
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 330
if(c_rt_lib0check_true_native(___nl__5)){ goto label_316;}
#line 332
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 332
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 332
c_rt_lib0clear(&___nl__11);
#line 332
c_rt_lib0move(&___nl__12,___get_global_const(252));
#line 332
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 332
c_rt_lib0clear(&___nl__12);
#line 332
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 332
c_rt_lib0clear(&___nl__10);
#line 332
c_rt_lib0clear(&___nl__11);
#line 332
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__9));
#line 332
c_rt_lib0clear(&___nl__9);
#line 333
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 333
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 333
c_rt_lib0clear(&___nl__10);
#line 334
c_rt_lib0move(&___nl__11,___get_global_const(253));
#line 334
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 334
c_rt_lib0clear(&___nl__11);
#line 334
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 334
c_rt_lib0clear(&___nl__8);
#line 334
c_rt_lib0clear(&___nl__9);
#line 334
c_rt_lib0clear(&___nl__10);
#line 334
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 334
c_rt_lib0clear(&___nl__7);
#line 334
c_rt_lib0clear(&___nl__0);
#line 334
c_rt_lib0clear(&___nl__1);
#line 334
c_rt_lib0clear(&___nl__2);
#line 334
c_rt_lib0clear(&___nl__3);
#line 334
c_rt_lib0clear(&___nl__4);
#line 334
c_rt_lib0clear(&___nl__5);
#line 334
return ___nl__6;
#line 334
c_rt_lib0clear(&___nl__6);
#line 336
goto label_404;
#line 336
label_316:
#line 336
c_rt_lib0move(&___nl__5,___get_global_const(849));
#line 336
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 336
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 336
if(c_rt_lib0check_true_native(___nl__5)){ goto label_373;}
#line 338
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 338
c_rt_lib0move(&___nl__7, pretty_printer_priv0is_to_change_ov(___nl__8));
#line 338
c_rt_lib0clear(&___nl__8);
#line 338
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 338
if(c_rt_lib0check_true_native(___nl__7)){ goto label_344;}
#line 340
c_rt_lib0move(&___nl__11,___get_global_const(373));
#line 340
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 340
c_rt_lib0clear(&___nl__11);
#line 341
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 341
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 341
c_rt_lib0clear(&___nl__12);
#line 342
c_rt_lib0move(&___nl__13,___get_global_const(260));
#line 342
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 342
c_rt_lib0clear(&___nl__13);
#line 342
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(3, ___nl__10, ___nl__11, ___nl__12));
#line 342
c_rt_lib0clear(&___nl__10);
#line 342
c_rt_lib0clear(&___nl__11);
#line 342
c_rt_lib0clear(&___nl__12);
#line 342
c_rt_lib0move(&___nl__8, wprinter0build_pretty_a(___nl__9));
#line 342
c_rt_lib0clear(&___nl__9);
#line 342
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 342
c_rt_lib0clear(&___nl__8);
#line 344
goto label_351;
#line 344
label_344:
#line 345
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 345
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__9));
#line 345
c_rt_lib0clear(&___nl__9);
#line 345
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 345
c_rt_lib0clear(&___nl__8);
#line 346
goto label_351;
#line 346
label_351:
#line 346
c_rt_lib0clear(&___nl__7);
#line 347
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__4));
#line 347
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 347
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 347
c_rt_lib0clear(&___nl__11);
#line 347
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__6, ___nl__9, ___nl__10));
#line 347
c_rt_lib0clear(&___nl__9);
#line 347
c_rt_lib0clear(&___nl__10);
#line 347
c_rt_lib0move(&___nl__7, wprinter0build_pretty_op_l(___nl__8));
#line 347
c_rt_lib0clear(&___nl__8);
#line 347
c_rt_lib0clear(&___nl__0);
#line 347
c_rt_lib0clear(&___nl__1);
#line 347
c_rt_lib0clear(&___nl__2);
#line 347
c_rt_lib0clear(&___nl__3);
#line 347
c_rt_lib0clear(&___nl__4);
#line 347
c_rt_lib0clear(&___nl__5);
#line 347
c_rt_lib0clear(&___nl__6);
#line 347
return ___nl__7;
#line 347
c_rt_lib0clear(&___nl__7);
#line 347
c_rt_lib0clear(&___nl__6);
#line 348
goto label_404;
#line 348
label_373:
#line 350
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 350
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 350
c_rt_lib0clear(&___nl__11);
#line 350
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 350
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__4));
#line 350
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(3, ___nl__10, ___nl__11, ___nl__12));
#line 350
c_rt_lib0clear(&___nl__10);
#line 350
c_rt_lib0clear(&___nl__11);
#line 350
c_rt_lib0clear(&___nl__12);
#line 350
c_rt_lib0move(&___nl__8, wprinter0build_pretty_op_l(___nl__9));
#line 350
c_rt_lib0clear(&___nl__9);
#line 351
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 352
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 352
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 352
c_rt_lib0clear(&___nl__11);
#line 352
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 352
c_rt_lib0clear(&___nl__8);
#line 352
c_rt_lib0clear(&___nl__9);
#line 352
c_rt_lib0clear(&___nl__10);
#line 352
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__7));
#line 352
c_rt_lib0clear(&___nl__7);
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
c_rt_lib0clear(&___nl__5);
#line 352
return ___nl__6;
#line 352
c_rt_lib0clear(&___nl__6);
#line 354
goto label_404;
#line 354
label_404:
#line 354
c_rt_lib0clear(&___nl__5);
#line 354
c_rt_lib0clear(&___nl__4);
#line 354
c_rt_lib0clear(&___nl__3);
#line 355
goto label_760;
#line 355
label_409:
#line 355
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(856)));
#line 357
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(210)));
#line 357
if(c_rt_lib0check_true_native(___nl__6)){ goto label_419;}
#line 359
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(209)));
#line 359
if(c_rt_lib0check_true_native(___nl__6)){ goto label_424;}
#line 359
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 359
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 359
nl_die_arg(___nl__6);
#line 357
label_419:
#line 358
c_rt_lib0move(&___nl__7,___get_global_const(885));
#line 358
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 358
c_rt_lib0clear(&___nl__7);
#line 359
goto label_429;
#line 359
label_424:
#line 360
c_rt_lib0move(&___nl__7,___get_global_const(883));
#line 360
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 360
c_rt_lib0clear(&___nl__7);
#line 361
goto label_429;
#line 361
label_429:
#line 361
c_rt_lib0clear(&___nl__5);
#line 361
c_rt_lib0clear(&___nl__6);
#line 363
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 363
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 363
c_rt_lib0clear(&___nl__8);
#line 364
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 365
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__4));
#line 366
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 367
c_rt_lib0move(&___nl__12,___get_global_const(417));
#line 367
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 367
c_rt_lib0clear(&___nl__12);
#line 368
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(901)));
#line 368
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 368
c_rt_lib0clear(&___nl__13);
#line 368
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11, ___nl__12));
#line 368
c_rt_lib0clear(&___nl__7);
#line 368
c_rt_lib0clear(&___nl__8);
#line 368
c_rt_lib0clear(&___nl__9);
#line 368
c_rt_lib0clear(&___nl__10);
#line 368
c_rt_lib0clear(&___nl__11);
#line 368
c_rt_lib0clear(&___nl__12);
#line 368
c_rt_lib0move(&___nl__5, wprinter0build_pretty_op_l(___nl__6));
#line 368
c_rt_lib0clear(&___nl__6);
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
c_rt_lib0clear(&___nl__4);
#line 368
c_rt_lib0clear(&___nl__3);
#line 370
goto label_760;
#line 370
label_463:
#line 370
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(860)));
#line 371
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__3));
#line 371
c_rt_lib0move(&___nl__8,___get_global_const(165));
#line 371
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 371
c_rt_lib0clear(&___nl__8);
#line 371
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 371
c_rt_lib0clear(&___nl__6);
#line 371
c_rt_lib0clear(&___nl__7);
#line 371
c_rt_lib0move(&___nl__4, wprinter0build_pretty_op_l(___nl__5));
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
goto label_760;
#line 372
label_482:
#line 372
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(859)));
#line 373
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__3));
#line 373
c_rt_lib0move(&___nl__8,___get_global_const(879));
#line 373
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 373
c_rt_lib0clear(&___nl__8);
#line 373
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 373
c_rt_lib0clear(&___nl__6);
#line 373
c_rt_lib0clear(&___nl__7);
#line 373
c_rt_lib0move(&___nl__4, wprinter0build_pretty_op_l(___nl__5));
#line 373
c_rt_lib0clear(&___nl__5);
#line 373
c_rt_lib0clear(&___nl__0);
#line 373
c_rt_lib0clear(&___nl__1);
#line 373
c_rt_lib0clear(&___nl__2);
#line 373
c_rt_lib0clear(&___nl__3);
#line 373
return ___nl__4;
#line 373
c_rt_lib0clear(&___nl__4);
#line 373
c_rt_lib0clear(&___nl__3);
#line 374
goto label_760;
#line 374
label_501:
#line 374
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(857)));
#line 375
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 375
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 375
c_rt_lib0clear(&___nl__6);
#line 375
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(198)));
#line 375
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 375
c_rt_lib0clear(&___nl__7);
#line 375
c_rt_lib0move(&___nl__4, wprinter0build_pretty_bind(___nl__5, ___nl__6));
#line 375
c_rt_lib0clear(&___nl__6);
#line 375
c_rt_lib0clear(&___nl__5);
#line 375
c_rt_lib0clear(&___nl__0);
#line 375
c_rt_lib0clear(&___nl__1);
#line 375
c_rt_lib0clear(&___nl__2);
#line 375
c_rt_lib0clear(&___nl__3);
#line 375
return ___nl__4;
#line 375
c_rt_lib0clear(&___nl__4);
#line 375
c_rt_lib0clear(&___nl__3);
#line 376
goto label_760;
#line 376
label_520:
#line 376
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(811)));
#line 377
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 377
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(132)));
#line 377
c_rt_lib0move(&___nl__4, pretty_printer_priv0get_fun_label(___nl__5, ___nl__6));
#line 377
c_rt_lib0clear(&___nl__6);
#line 377
c_rt_lib0clear(&___nl__5);
#line 377
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 377
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 377
c_rt_lib0clear(&___nl__5);
#line 378
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 378
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 378
c_rt_lib0clear(&___nl__6);
#line 378
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 378
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 378
c_rt_lib0clear(&___nl__6);
#line 378
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 378
if(c_rt_lib0check_true_native(___nl__5)){ goto label_569;}
#line 379
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 379
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 379
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 379
c_rt_lib0clear(&___nl__7);
#line 379
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(198)));
#line 380
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 380
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(205)));
#line 380
if(c_rt_lib0check_true_native(___nl__7)){ goto label_548;}
#line 380
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 380
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(204)));
#line 380
label_548:
#line 380
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 380
if(c_rt_lib0check_true_native(___nl__7)){ goto label_565;}
#line 381
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 381
c_rt_lib0move(&___nl__8, pretty_printer_priv0get_compressed_fun_val(___nl__6, ___nl__4, ___nl__9));
#line 381
c_rt_lib0clear(&___nl__9);
#line 381
c_rt_lib0clear(&___nl__0);
#line 381
c_rt_lib0clear(&___nl__1);
#line 381
c_rt_lib0clear(&___nl__2);
#line 381
c_rt_lib0clear(&___nl__3);
#line 381
c_rt_lib0clear(&___nl__4);
#line 381
c_rt_lib0clear(&___nl__5);
#line 381
c_rt_lib0clear(&___nl__6);
#line 381
c_rt_lib0clear(&___nl__7);
#line 381
return ___nl__8;
#line 381
c_rt_lib0clear(&___nl__8);
#line 382
goto label_565;
#line 382
label_565:
#line 382
c_rt_lib0clear(&___nl__7);
#line 382
c_rt_lib0clear(&___nl__6);
#line 383
goto label_618;
#line 383
label_569:
#line 383
c_rt_lib0move(&___nl__5, pretty_printer_priv0is_to_change_ov(___nl__0));
#line 383
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 383
if(c_rt_lib0check_true_native(___nl__5)){ goto label_618;}
#line 385
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 385
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 385
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__10));
#line 385
c_rt_lib0clear(&___nl__10);
#line 385
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 385
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__9));
#line 385
c_rt_lib0clear(&___nl__9);
#line 386
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 387
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 387
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 387
c_rt_lib0clear(&___nl__11);
#line 388
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 389
c_rt_lib0move(&___nl__13,___get_global_const(417));
#line 389
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 389
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 389
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__14, ___nl__15));
#line 389
c_rt_lib0clear(&___nl__15);
#line 389
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(198)));
#line 389
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(192)));
#line 389
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(770)));
#line 389
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(327)));
#line 389
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 389
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__14, ___nl__15));
#line 389
c_rt_lib0clear(&___nl__15);
#line 389
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 389
c_rt_lib0clear(&___nl__14);
#line 389
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 389
c_rt_lib0clear(&___nl__13);
#line 389
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(5, ___nl__8, ___nl__9, ___nl__10, ___nl__11, ___nl__12));
#line 389
c_rt_lib0clear(&___nl__8);
#line 389
c_rt_lib0clear(&___nl__9);
#line 389
c_rt_lib0clear(&___nl__10);
#line 389
c_rt_lib0clear(&___nl__11);
#line 389
c_rt_lib0clear(&___nl__12);
#line 389
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__7));
#line 389
c_rt_lib0clear(&___nl__7);
#line 389
c_rt_lib0clear(&___nl__0);
#line 389
c_rt_lib0clear(&___nl__1);
#line 389
c_rt_lib0clear(&___nl__2);
#line 389
c_rt_lib0clear(&___nl__3);
#line 389
c_rt_lib0clear(&___nl__4);
#line 389
c_rt_lib0clear(&___nl__5);
#line 389
return ___nl__6;
#line 389
c_rt_lib0clear(&___nl__6);
#line 391
goto label_618;
#line 391
label_618:
#line 391
c_rt_lib0clear(&___nl__5);
#line 392
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__4));
#line 392
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 392
c_rt_lib0clear(&___nl__6);
#line 393
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 393
c_rt_lib0move(&___nl__6, pretty_printer_priv0join_print_fun_arg(___nl__7));
#line 393
c_rt_lib0clear(&___nl__7);
#line 393
c_rt_lib0delete(array0append(&___nl__5, ___nl__6));
#line 393
c_rt_lib0clear(&___nl__6);
#line 394
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 394
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 394
c_rt_lib0clear(&___nl__7);
#line 394
c_rt_lib0delete(array0push(&___nl__5, ___nl__6));
#line 394
c_rt_lib0clear(&___nl__6);
#line 397
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 397
c_rt_lib0move(&___nl__6, pretty_printer_priv0count_structs(___nl__8));
#line 397
c_rt_lib0clear(&___nl__8);
#line 397
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 397
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 397
c_rt_lib0clear(&___nl__9);
#line 397
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__8));
#line 397
c_rt_lib0clear(&___nl__8);
#line 397
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 397
if(c_rt_lib0check_true_native(___nl__7)){ goto label_649;}
#line 397
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 397
c_rt_lib0move(&___nl__6, array0len(___nl__8));
#line 397
c_rt_lib0clear(&___nl__8);
#line 397
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 397
c_rt_lib0move(&___nl__6, c_rt_lib0gt(___nl__6, ___nl__8));
#line 397
c_rt_lib0clear(&___nl__8);
#line 397
label_649:
#line 397
c_rt_lib0clear(&___nl__7);
#line 397
if(c_rt_lib0check_true_native(___nl__6)){ goto label_669;}
#line 398
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 398
c_rt_lib0move(&___nl__6, array0len(___nl__8));
#line 398
c_rt_lib0clear(&___nl__8);
#line 398
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__8));
#line 398
c_rt_lib0clear(&___nl__8);
#line 398
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 398
if(c_rt_lib0check_true_native(___nl__7)){ goto label_667;}
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(89)));
#line 398
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 398
c_rt_lib0clear(&___nl__8);
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(198)));
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(811)));
#line 398
label_667:
#line 398
c_rt_lib0clear(&___nl__7);
#line 398
label_669:
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 398
if(c_rt_lib0check_true_native(___nl__6)){ goto label_683;}
#line 395
c_rt_lib0move(&___nl__7, wprinter0build_pretty_op_l(___nl__5));
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
c_rt_lib0clear(&___nl__6);
#line 395
return ___nl__7;
#line 395
c_rt_lib0clear(&___nl__7);
#line 395
goto label_683;
#line 395
label_683:
#line 395
c_rt_lib0clear(&___nl__6);
#line 399
c_rt_lib0move(&___nl__6, wprinter0build_pretty_l(___nl__5));
#line 399
c_rt_lib0clear(&___nl__0);
#line 399
c_rt_lib0clear(&___nl__1);
#line 399
c_rt_lib0clear(&___nl__2);
#line 399
c_rt_lib0clear(&___nl__3);
#line 399
c_rt_lib0clear(&___nl__4);
#line 399
c_rt_lib0clear(&___nl__5);
#line 399
return ___nl__6;
#line 399
c_rt_lib0clear(&___nl__6);
#line 399
c_rt_lib0clear(&___nl__4);
#line 399
c_rt_lib0clear(&___nl__5);
#line 399
c_rt_lib0clear(&___nl__3);
#line 400
goto label_760;
#line 400
label_698:
#line 401
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 401
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 401
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(337), ___nl__5));
#line 401
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__4, ___get_global_const(1009), ___nl__5));
#line 401
c_rt_lib0clear(&___nl__4);
#line 401
c_rt_lib0clear(&___nl__5);
#line 401
c_rt_lib0clear(&___nl__0);
#line 401
c_rt_lib0clear(&___nl__1);
#line 401
c_rt_lib0clear(&___nl__2);
#line 401
return ___nl__3;
#line 401
c_rt_lib0clear(&___nl__3);
#line 402
goto label_760;
#line 402
label_711:
#line 402
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(204)));
#line 403
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 403
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 403
c_rt_lib0move(&___nl__4, pretty_printer_priv0get_compressed_fun_val(___nl__0, ___nl__5, ___nl__6));
#line 403
c_rt_lib0clear(&___nl__6);
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
goto label_760;
#line 404
label_726:
#line 404
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(205)));
#line 405
c_rt_lib0move(&___nl__5, pretty_printer_priv0join_print_hash_elem(___nl__3));
#line 405
c_rt_lib0move(&___nl__6,___get_global_const(252));
#line 405
c_rt_lib0move(&___nl__7,___get_global_const(253));
#line 405
c_rt_lib0move(&___nl__4, wprinter0build_pretty_arr_decl(___nl__5, ___nl__6, ___nl__7));
#line 405
c_rt_lib0clear(&___nl__7);
#line 405
c_rt_lib0clear(&___nl__6);
#line 405
c_rt_lib0clear(&___nl__5);
#line 405
c_rt_lib0clear(&___nl__0);
#line 405
c_rt_lib0clear(&___nl__1);
#line 405
c_rt_lib0clear(&___nl__2);
#line 405
c_rt_lib0clear(&___nl__3);
#line 405
return ___nl__4;
#line 405
c_rt_lib0clear(&___nl__4);
#line 405
c_rt_lib0clear(&___nl__3);
#line 406
goto label_760;
#line 406
label_743:
#line 406
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(858)));
#line 407
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 407
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(132)));
#line 407
c_rt_lib0move(&___nl__5, pretty_printer_priv0get_fun_label(___nl__6, ___nl__7));
#line 407
c_rt_lib0clear(&___nl__7);
#line 407
c_rt_lib0clear(&___nl__6);
#line 407
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 407
c_rt_lib0clear(&___nl__5);
#line 407
c_rt_lib0clear(&___nl__0);
#line 407
c_rt_lib0clear(&___nl__1);
#line 407
c_rt_lib0clear(&___nl__2);
#line 407
c_rt_lib0clear(&___nl__3);
#line 407
return ___nl__4;
#line 407
c_rt_lib0clear(&___nl__4);
#line 407
c_rt_lib0clear(&___nl__3);
#line 408
goto label_760;
#line 408
label_760:
#line 408
c_rt_lib0clear(&___nl__1);
#line 408
c_rt_lib0clear(&___nl__2);
#line 408
c_rt_lib0clear(&___nl__0);
#line 408
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
#line 414
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 415
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 416
c_rt_lib0move(&___nl__10, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 416
c_rt_lib0move(&___nl__9, wprinter0build_pretty_l(___nl__10));
#line 416
c_rt_lib0clear(&___nl__10);
#line 416
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 416
c_rt_lib0clear(&___nl__7);
#line 416
c_rt_lib0clear(&___nl__8);
#line 416
c_rt_lib0clear(&___nl__9);
#line 418
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 418
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 418
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 418
c_rt_lib0clear(&___nl__8);
#line 418
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 418
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 418
c_rt_lib0move(&___nl__9,___get_global_const(571));
#line 418
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 418
c_rt_lib0clear(&___nl__9);
#line 418
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 418
c_rt_lib0clear(&___nl__8);
#line 418
goto label_21;
#line 418
label_21:
#line 418
c_rt_lib0clear(&___nl__7);
#line 419
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 419
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 419
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 419
c_rt_lib0clear(&___nl__8);
#line 419
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 419
if(c_rt_lib0check_true_native(___nl__7)){ goto label_35;}
#line 419
c_rt_lib0move(&___nl__9,___get_global_const(373));
#line 419
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 419
c_rt_lib0clear(&___nl__9);
#line 419
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 419
c_rt_lib0clear(&___nl__8);
#line 419
goto label_35;
#line 419
label_35:
#line 419
c_rt_lib0clear(&___nl__7);
#line 420
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 420
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 420
c_rt_lib0clear(&___nl__7);
#line 421
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 421
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 421
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 421
c_rt_lib0clear(&___nl__8);
#line 421
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 421
if(c_rt_lib0check_true_native(___nl__7)){ goto label_52;}
#line 421
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 421
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 421
c_rt_lib0clear(&___nl__9);
#line 421
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 421
c_rt_lib0clear(&___nl__8);
#line 421
goto label_52;
#line 421
label_52:
#line 421
c_rt_lib0clear(&___nl__7);
#line 423
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_simple_statement(___nl__2));
#line 424
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 425
c_rt_lib0move(&___nl__11, wprinter0build_pretty_op_l(___nl__6));
#line 425
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 425
c_rt_lib0clear(&___nl__9);
#line 425
c_rt_lib0clear(&___nl__10);
#line 425
c_rt_lib0clear(&___nl__11);
#line 425
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 425
c_rt_lib0clear(&___nl__8);
#line 425
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__5));
#line 425
c_rt_lib0clear(&___nl__7);
#line 427
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 427
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 427
c_rt_lib0clear(&___nl__7);
#line 427
c_rt_lib0clear(&___nl__6);
#line 427
c_rt_lib0clear(&___nl__1);
#line 427
c_rt_lib0clear(&___nl__2);
#line 427
c_rt_lib0clear(&___nl__3);
#line 427
c_rt_lib0clear(&___nl__4);
#line 427
c_rt_lib0clear(&___nl__5);
#line 427
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
#line 432
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 432
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 432
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__8));
#line 432
c_rt_lib0clear(&___nl__7);
#line 432
c_rt_lib0clear(&___nl__8);
#line 433
c_rt_lib0move(&___nl__7, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 433
c_rt_lib0delete(array0append(&___nl__6, ___nl__7));
#line 433
c_rt_lib0clear(&___nl__7);
#line 434
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 434
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 434
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 434
c_rt_lib0clear(&___nl__8);
#line 434
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 434
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 434
c_rt_lib0move(&___nl__9,___get_global_const(571));
#line 434
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 434
c_rt_lib0clear(&___nl__9);
#line 434
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 434
c_rt_lib0clear(&___nl__8);
#line 434
goto label_20;
#line 434
label_20:
#line 434
c_rt_lib0clear(&___nl__7);
#line 435
c_rt_lib0move(&___nl__8,___get_global_const(373));
#line 435
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 435
c_rt_lib0clear(&___nl__8);
#line 435
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 435
c_rt_lib0clear(&___nl__7);
#line 436
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 437
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(1009)));
#line 437
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(327)));
#line 437
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 437
if(c_rt_lib0check_true_native(___nl__8)){ goto label_38;}
#line 438
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(1009)));
#line 438
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(327)));
#line 438
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(327)));
#line 438
c_rt_lib0delete(array0append(&___nl__6, ___nl__9));
#line 438
c_rt_lib0clear(&___nl__9);
#line 439
goto label_41;
#line 439
label_38:
#line 440
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 441
goto label_41;
#line 441
label_41:
#line 441
c_rt_lib0clear(&___nl__8);
#line 442
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 442
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 442
c_rt_lib0clear(&___nl__9);
#line 442
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 442
c_rt_lib0clear(&___nl__8);
#line 443
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__6));
#line 443
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__8, ___nl__5));
#line 443
c_rt_lib0clear(&___nl__8);
#line 444
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__2, ___nl__5));
#line 444
c_rt_lib0clear(&___nl__6);
#line 444
c_rt_lib0clear(&___nl__7);
#line 444
c_rt_lib0clear(&___nl__1);
#line 444
c_rt_lib0clear(&___nl__2);
#line 444
c_rt_lib0clear(&___nl__3);
#line 444
c_rt_lib0clear(&___nl__4);
#line 444
c_rt_lib0clear(&___nl__5);
#line 444
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
#line 449
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 449
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 449
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 450
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 451
goto label_8;
#line 451
label_5:
#line 452
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 453
goto label_8;
#line 453
label_8:
#line 453
c_rt_lib0clear(&___nl__7);
#line 453
c_rt_lib0clear(&___nl__1);
#line 453
c_rt_lib0clear(&___nl__2);
#line 453
c_rt_lib0clear(&___nl__3);
#line 453
c_rt_lib0clear(&___nl__4);
#line 453
c_rt_lib0clear(&___nl__5);
#line 453
c_rt_lib0clear(&___nl__6);
#line 453
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
#line 457
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__1));
#line 457
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__3));
#line 457
c_rt_lib0clear(&___nl__3);
#line 458
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(845)));
#line 458
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 460
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(847)));
#line 460
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 462
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(846)));
#line 462
if(c_rt_lib0check_true_native(___nl__3)){ goto label_34;}
#line 462
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 462
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 462
nl_die_arg(___nl__3);
#line 458
label_12:
#line 458
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(845)));
#line 459
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 459
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_var_decl(___nl__4));
#line 459
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 459
c_rt_lib0clear(&___nl__6);
#line 459
c_rt_lib0clear(&___nl__7);
#line 459
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 459
c_rt_lib0clear(&___nl__5);
#line 459
c_rt_lib0clear(&___nl__4);
#line 460
goto label_59;
#line 460
label_23:
#line 460
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(847)));
#line 461
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 461
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 461
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 461
c_rt_lib0clear(&___nl__6);
#line 461
c_rt_lib0clear(&___nl__7);
#line 461
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 461
c_rt_lib0clear(&___nl__5);
#line 461
c_rt_lib0clear(&___nl__4);
#line 462
goto label_59;
#line 462
label_34:
#line 462
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(846)));
#line 464
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 465
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 465
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 465
c_rt_lib0clear(&___nl__8);
#line 466
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 467
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 467
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 467
c_rt_lib0clear(&___nl__10);
#line 468
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 469
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(231)));
#line 469
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 469
c_rt_lib0clear(&___nl__12);
#line 469
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(6, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 469
c_rt_lib0clear(&___nl__6);
#line 469
c_rt_lib0clear(&___nl__7);
#line 469
c_rt_lib0clear(&___nl__8);
#line 469
c_rt_lib0clear(&___nl__9);
#line 469
c_rt_lib0clear(&___nl__10);
#line 469
c_rt_lib0clear(&___nl__11);
#line 469
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 469
c_rt_lib0clear(&___nl__5);
#line 469
c_rt_lib0clear(&___nl__4);
#line 471
goto label_59;
#line 471
label_59:
#line 471
c_rt_lib0clear(&___nl__3);
#line 472
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__2));
#line 472
c_rt_lib0clear(&___nl__0);
#line 472
c_rt_lib0clear(&___nl__1);
#line 472
c_rt_lib0clear(&___nl__2);
#line 472
return ___nl__3;
#line 472
c_rt_lib0clear(&___nl__3);
#line 472
c_rt_lib0clear(&___nl__2);
#line 472
c_rt_lib0clear(&___nl__0);
#line 472
c_rt_lib0clear(&___nl__1);
#line 472
return NULL;
}

ImmT pretty_printer_priv0print_return(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 476
c_rt_lib0move(&___nl__3,___get_global_const(90));
#line 476
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 476
c_rt_lib0clear(&___nl__3);
#line 476
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 476
c_rt_lib0clear(&___nl__2);
#line 477
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 477
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(830)));
#line 477
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 477
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 477
if(c_rt_lib0check_true_native(___nl__2)){ goto label_18;}
#line 478
c_rt_lib0move(&___nl__4, wprinter0get_sep());
#line 478
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__0));
#line 478
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__4, ___nl__5));
#line 478
c_rt_lib0clear(&___nl__4);
#line 478
c_rt_lib0clear(&___nl__5);
#line 478
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 478
c_rt_lib0clear(&___nl__3);
#line 479
goto label_18;
#line 479
label_18:
#line 479
c_rt_lib0clear(&___nl__2);
#line 480
c_rt_lib0move(&___nl__2, wprinter0build_pretty_l(___nl__1));
#line 480
c_rt_lib0clear(&___nl__0);
#line 480
c_rt_lib0clear(&___nl__1);
#line 480
return ___nl__2;
#line 480
c_rt_lib0clear(&___nl__2);
#line 480
c_rt_lib0clear(&___nl__1);
#line 480
c_rt_lib0clear(&___nl__0);
#line 480
return NULL;
}

ImmT pretty_printer_priv0print_sim_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 484
c_rt_lib0move(&___nl__1, pretty_printer_priv0print_val(___nl__0));
#line 485
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1009)));
#line 485
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(327)));
#line 485
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 485
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 486
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1009)));
#line 486
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(327)));
#line 486
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(327)));
#line 486
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__4));
#line 486
c_rt_lib0clear(&___nl__4);
#line 486
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 486
c_rt_lib0clear(&___nl__3);
#line 487
goto label_13;
#line 487
label_13:
#line 487
c_rt_lib0clear(&___nl__2);
#line 488
c_rt_lib0clear(&___nl__0);
#line 488
return ___nl__1;
#line 488
c_rt_lib0clear(&___nl__1);
#line 488
c_rt_lib0clear(&___nl__0);
#line 488
return NULL;
}

ImmT pretty_printer_priv0print_break(){
return pretty_printer_priv0__const__sing(1);}
ImmT pretty_printer_priv0print_break0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 492
c_rt_lib0move(&___nl__1,___get_global_const(824));
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

ImmT pretty_printer_priv0print_continue(){
return pretty_printer_priv0__const__sing(2);}
ImmT pretty_printer_priv0print_continue0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 496
c_rt_lib0move(&___nl__1,___get_global_const(825));
#line 496
c_rt_lib0move(&___nl__0, wprinter0build_sim(___nl__1));
#line 496
c_rt_lib0clear(&___nl__1);
#line 496
return ___nl__0;
#line 496
c_rt_lib0clear(&___nl__0);
#line 496
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
#line 500
c_rt_lib0move(&___nl__3,___get_global_const(217));
#line 500
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 500
c_rt_lib0clear(&___nl__3);
#line 500
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 500
c_rt_lib0clear(&___nl__2);
#line 506
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 506
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 506
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__2, ___nl__3));
#line 506
c_rt_lib0clear(&___nl__3);
#line 506
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 506
if(c_rt_lib0check_true_native(___nl__2)){ goto label_27;}
#line 502
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 502
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 502
c_rt_lib0clear(&___nl__5);
#line 503
c_rt_lib0move(&___nl__6, pretty_printer_priv0join_print_val(___nl__0));
#line 503
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__6));
#line 503
c_rt_lib0clear(&___nl__6);
#line 504
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 504
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 504
c_rt_lib0clear(&___nl__7);
#line 504
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(3, ___nl__4, ___nl__5, ___nl__6));
#line 504
c_rt_lib0clear(&___nl__4);
#line 504
c_rt_lib0clear(&___nl__5);
#line 504
c_rt_lib0clear(&___nl__6);
#line 504
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 504
c_rt_lib0clear(&___nl__3);
#line 504
goto label_27;
#line 504
label_27:
#line 504
c_rt_lib0clear(&___nl__2);
#line 507
c_rt_lib0move(&___nl__2, wprinter0build_pretty_a(___nl__1));
#line 507
c_rt_lib0clear(&___nl__0);
#line 507
c_rt_lib0clear(&___nl__1);
#line 507
return ___nl__2;
#line 507
c_rt_lib0clear(&___nl__2);
#line 507
c_rt_lib0clear(&___nl__1);
#line 507
c_rt_lib0clear(&___nl__0);
#line 507
return NULL;
}

ImmT pretty_printer_priv0print_simple_statement(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(192)));
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 511
if(c_rt_lib0check_true_native(___nl__1)){ goto label_13;}
#line 512
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 512
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(192)));
#line 512
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_sim_value(___nl__3));
#line 512
c_rt_lib0clear(&___nl__3);
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
label_13:
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(90)));
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 513
if(c_rt_lib0check_true_native(___nl__1)){ goto label_27;}
#line 514
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 514
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(90)));
#line 514
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_return(___nl__3));
#line 514
c_rt_lib0clear(&___nl__3);
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
label_27:
#line 515
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 515
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(824)));
#line 515
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 515
if(c_rt_lib0check_true_native(___nl__1)){ goto label_38;}
#line 516
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_break());
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
label_38:
#line 517
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 517
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(825)));
#line 517
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 517
if(c_rt_lib0check_true_native(___nl__1)){ goto label_49;}
#line 518
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_continue());
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
label_49:
#line 519
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 519
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(217)));
#line 519
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 519
if(c_rt_lib0check_true_native(___nl__1)){ goto label_63;}
#line 520
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 520
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(217)));
#line 520
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_die(___nl__3));
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
label_63:
#line 521
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 521
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(829)));
#line 521
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 521
if(c_rt_lib0check_true_native(___nl__1)){ goto label_79;}
#line 522
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 522
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(829)));
#line 522
c_rt_lib0move(&___nl__4,___get_global_const(829));
#line 522
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 522
c_rt_lib0clear(&___nl__4);
#line 522
c_rt_lib0clear(&___nl__3);
#line 522
c_rt_lib0clear(&___nl__0);
#line 522
c_rt_lib0clear(&___nl__1);
#line 522
return ___nl__2;
#line 522
c_rt_lib0clear(&___nl__2);
#line 523
goto label_100;
#line 523
label_79:
#line 523
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 523
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(95)));
#line 523
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 523
if(c_rt_lib0check_true_native(___nl__1)){ goto label_95;}
#line 524
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 524
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(95)));
#line 524
c_rt_lib0move(&___nl__4,___get_global_const(95));
#line 524
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 524
c_rt_lib0clear(&___nl__4);
#line 524
c_rt_lib0clear(&___nl__3);
#line 524
c_rt_lib0clear(&___nl__0);
#line 524
c_rt_lib0clear(&___nl__1);
#line 524
return ___nl__2;
#line 524
c_rt_lib0clear(&___nl__2);
#line 525
goto label_100;
#line 525
label_95:
#line 526
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__0));
#line 526
nl_die_arg(___nl__2);
#line 526
c_rt_lib0clear(&___nl__2);
#line 527
goto label_100;
#line 527
label_100:
#line 527
c_rt_lib0clear(&___nl__1);
#line 527
c_rt_lib0clear(&___nl__0);
#line 527
return NULL;
}

ImmT pretty_printer_priv0flush_sim_statement(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 531
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__1, ___nl__2));
#line 532
c_rt_lib0move(&___nl__3,___get_global_const(360));
#line 532
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__3));
#line 532
c_rt_lib0clear(&___nl__3);
#line 532
c_rt_lib0clear(&___nl__1);
#line 532
c_rt_lib0clear(&___nl__2);
#line 532
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
#line 536
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(201)));
#line 536
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(816)));
#line 536
if(c_rt_lib0check_true_native(___nl__4)){ goto label_44;}
#line 546
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(821)));
#line 546
if(c_rt_lib0check_true_native(___nl__4)){ goto label_101;}
#line 548
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(817)));
#line 548
if(c_rt_lib0check_true_native(___nl__4)){ goto label_116;}
#line 567
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(827)));
#line 567
if(c_rt_lib0check_true_native(___nl__4)){ goto label_182;}
#line 574
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(830)));
#line 574
if(c_rt_lib0check_true_native(___nl__4)){ goto label_226;}
#line 576
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(826)));
#line 576
if(c_rt_lib0check_true_native(___nl__4)){ goto label_231;}
#line 587
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(818)));
#line 587
if(c_rt_lib0check_true_native(___nl__4)){ goto label_283;}
#line 589
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(819)));
#line 589
if(c_rt_lib0check_true_native(___nl__4)){ goto label_300;}
#line 592
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(820)));
#line 592
if(c_rt_lib0check_true_native(___nl__4)){ goto label_319;}
#line 594
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(140)));
#line 594
if(c_rt_lib0check_true_native(___nl__4)){ goto label_336;}
#line 597
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(822)));
#line 597
if(c_rt_lib0check_true_native(___nl__4)){ goto label_344;}
#line 599
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(823)));
#line 599
if(c_rt_lib0check_true_native(___nl__4)){ goto label_357;}
#line 601
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(192)));
#line 601
if(c_rt_lib0check_true_native(___nl__4)){ goto label_370;}
#line 603
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(829)));
#line 603
if(c_rt_lib0check_true_native(___nl__4)){ goto label_377;}
#line 605
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(95)));
#line 605
if(c_rt_lib0check_true_native(___nl__4)){ goto label_386;}
#line 607
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(90)));
#line 607
if(c_rt_lib0check_true_native(___nl__4)){ goto label_395;}
#line 609
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(824)));
#line 609
if(c_rt_lib0check_true_native(___nl__4)){ goto label_402;}
#line 611
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(825)));
#line 611
if(c_rt_lib0check_true_native(___nl__4)){ goto label_407;}
#line 613
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(217)));
#line 613
if(c_rt_lib0check_true_native(___nl__4)){ goto label_412;}
#line 615
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(828)));
#line 615
if(c_rt_lib0check_true_native(___nl__4)){ goto label_419;}
#line 615
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 615
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 615
nl_die_arg(___nl__4);
#line 536
label_44:
#line 536
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(816)));
#line 537
c_rt_lib0move(&___nl__6,___get_global_const(816));
#line 537
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(816)));
#line 537
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 537
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(831)));
#line 537
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 537
c_rt_lib0clear(&___nl__9);
#line 537
c_rt_lib0clear(&___nl__8);
#line 537
c_rt_lib0clear(&___nl__7);
#line 537
c_rt_lib0clear(&___nl__6);
#line 538
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(832)));
#line 538
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 538
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 538
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 538
label_59:
#line 538
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 538
if(c_rt_lib0check_true_native(___nl__11)){ goto label_77;}
#line 538
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 539
c_rt_lib0move(&___nl__12,___get_global_const(571));
#line 539
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 539
c_rt_lib0clear(&___nl__12);
#line 540
c_rt_lib0move(&___nl__12,___get_global_const(832));
#line 540
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(201)));
#line 540
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 540
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(831)));
#line 540
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__2));
#line 540
c_rt_lib0clear(&___nl__15);
#line 540
c_rt_lib0clear(&___nl__14);
#line 540
c_rt_lib0clear(&___nl__13);
#line 540
c_rt_lib0clear(&___nl__12);
#line 541
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 541
goto label_59;
#line 541
label_77:
#line 541
c_rt_lib0clear(&___nl__6);
#line 541
c_rt_lib0clear(&___nl__7);
#line 541
c_rt_lib0clear(&___nl__8);
#line 541
c_rt_lib0clear(&___nl__9);
#line 541
c_rt_lib0clear(&___nl__10);
#line 541
c_rt_lib0clear(&___nl__11);
#line 542
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(833)));
#line 542
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(201)));
#line 542
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(830)));
#line 542
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 542
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 542
if(c_rt_lib0check_true_native(___nl__6)){ goto label_97;}
#line 543
c_rt_lib0move(&___nl__7,___get_global_const(1010));
#line 543
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 543
c_rt_lib0clear(&___nl__7);
#line 544
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(833)));
#line 544
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__7, ___nl__2));
#line 544
c_rt_lib0clear(&___nl__7);
#line 545
goto label_97;
#line 545
label_97:
#line 545
c_rt_lib0clear(&___nl__6);
#line 545
c_rt_lib0clear(&___nl__5);
#line 546
goto label_426;
#line 546
label_101:
#line 546
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(821)));
#line 547
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(918)));
#line 547
c_rt_lib0move(&___nl__7,___get_global_const(821));
#line 547
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 547
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 547
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(831)));
#line 547
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 547
c_rt_lib0clear(&___nl__10);
#line 547
c_rt_lib0clear(&___nl__9);
#line 547
c_rt_lib0clear(&___nl__8);
#line 547
c_rt_lib0clear(&___nl__7);
#line 547
c_rt_lib0clear(&___nl__6);
#line 547
c_rt_lib0clear(&___nl__5);
#line 548
goto label_426;
#line 548
label_116:
#line 548
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(817)));
#line 550
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(834)));
#line 550
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(192)));
#line 550
if(c_rt_lib0check_true_native(___nl__8)){ goto label_126;}
#line 552
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(828)));
#line 552
if(c_rt_lib0check_true_native(___nl__8)){ goto label_133;}
#line 552
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 552
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 552
nl_die_arg(___nl__8);
#line 550
label_126:
#line 550
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(192)));
#line 551
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__9));
#line 551
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 551
c_rt_lib0clear(&___nl__10);
#line 551
c_rt_lib0clear(&___nl__9);
#line 552
goto label_140;
#line 552
label_133:
#line 552
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(828)));
#line 553
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_var_decl(___nl__9));
#line 553
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 553
c_rt_lib0clear(&___nl__10);
#line 553
c_rt_lib0clear(&___nl__9);
#line 554
goto label_140;
#line 554
label_140:
#line 554
c_rt_lib0clear(&___nl__7);
#line 554
c_rt_lib0clear(&___nl__8);
#line 556
c_rt_lib0move(&___nl__10,___get_global_const(1011));
#line 556
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 556
c_rt_lib0clear(&___nl__10);
#line 558
c_rt_lib0move(&___nl__11,___get_global_const(360));
#line 558
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 558
c_rt_lib0clear(&___nl__11);
#line 559
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 560
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(831)));
#line 560
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_val(___nl__13));
#line 560
c_rt_lib0clear(&___nl__13);
#line 561
c_rt_lib0move(&___nl__14,___get_global_const(360));
#line 561
c_rt_lib0move(&___nl__13, wprinter0build_sim(___nl__14));
#line 561
c_rt_lib0clear(&___nl__14);
#line 562
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 563
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(835)));
#line 563
c_rt_lib0move(&___nl__15, pretty_printer_priv0print_val(___nl__16));
#line 563
c_rt_lib0clear(&___nl__16);
#line 564
c_rt_lib0move(&___nl__17,___get_global_const(533));
#line 564
c_rt_lib0move(&___nl__16, wprinter0build_sim(___nl__17));
#line 564
c_rt_lib0clear(&___nl__17);
#line 564
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(9, ___nl__9, ___nl__6, ___nl__10, ___nl__11, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__16));
#line 564
c_rt_lib0clear(&___nl__9);
#line 564
c_rt_lib0clear(&___nl__10);
#line 564
c_rt_lib0clear(&___nl__11);
#line 564
c_rt_lib0clear(&___nl__12);
#line 564
c_rt_lib0clear(&___nl__13);
#line 564
c_rt_lib0clear(&___nl__14);
#line 564
c_rt_lib0clear(&___nl__15);
#line 564
c_rt_lib0clear(&___nl__16);
#line 564
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 564
c_rt_lib0clear(&___nl__8);
#line 564
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__2));
#line 564
c_rt_lib0clear(&___nl__7);
#line 566
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 566
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__7, ___nl__2));
#line 566
c_rt_lib0clear(&___nl__7);
#line 566
c_rt_lib0clear(&___nl__6);
#line 566
c_rt_lib0clear(&___nl__5);
#line 567
goto label_426;
#line 567
label_182:
#line 567
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(827)));
#line 568
c_rt_lib0move(&___nl__6,___get_global_const(252));
#line 568
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 568
c_rt_lib0clear(&___nl__6);
#line 569
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 569
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 569
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 569
label_190:
#line 569
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 569
if(c_rt_lib0check_true_native(___nl__10)){ goto label_209;}
#line 569
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 570
c_rt_lib0move(&___nl__11, string0lf());
#line 570
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 570
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 570
c_rt_lib0move(&___nl__12, pretty_printer_priv0pind(___nl__13));
#line 570
c_rt_lib0clear(&___nl__13);
#line 570
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 570
c_rt_lib0clear(&___nl__12);
#line 570
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__11));
#line 570
c_rt_lib0clear(&___nl__11);
#line 571
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 571
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__2, ___nl__11));
#line 571
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__6, ___nl__11));
#line 571
c_rt_lib0clear(&___nl__11);
#line 572
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 572
goto label_190;
#line 572
label_209:
#line 572
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0clear(&___nl__7);
#line 572
c_rt_lib0clear(&___nl__8);
#line 572
c_rt_lib0clear(&___nl__9);
#line 572
c_rt_lib0clear(&___nl__10);
#line 573
c_rt_lib0move(&___nl__6, string0lf());
#line 573
c_rt_lib0move(&___nl__7, pretty_printer_priv0pind(___nl__2));
#line 573
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 573
c_rt_lib0clear(&___nl__7);
#line 573
c_rt_lib0move(&___nl__7,___get_global_const(253));
#line 573
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 573
c_rt_lib0clear(&___nl__7);
#line 573
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 573
c_rt_lib0clear(&___nl__6);
#line 573
c_rt_lib0clear(&___nl__5);
#line 574
goto label_426;
#line 574
label_226:
#line 575
c_rt_lib0move(&___nl__5,___get_global_const(360));
#line 575
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__5));
#line 575
c_rt_lib0clear(&___nl__5);
#line 576
goto label_426;
#line 576
label_231:
#line 576
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(826)));
#line 578
c_rt_lib0move(&___nl__9,___get_global_const(1012));
#line 578
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 578
c_rt_lib0clear(&___nl__9);
#line 579
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(198)));
#line 579
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 579
c_rt_lib0clear(&___nl__10);
#line 580
c_rt_lib0move(&___nl__11,___get_global_const(260));
#line 580
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 580
c_rt_lib0clear(&___nl__11);
#line 580
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 580
c_rt_lib0clear(&___nl__8);
#line 580
c_rt_lib0clear(&___nl__9);
#line 580
c_rt_lib0clear(&___nl__10);
#line 580
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 580
c_rt_lib0clear(&___nl__7);
#line 580
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__6, ___nl__2));
#line 580
c_rt_lib0clear(&___nl__6);
#line 582
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(839)));
#line 582
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 582
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 582
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 582
label_254:
#line 582
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 582
if(c_rt_lib0check_true_native(___nl__11)){ goto label_274;}
#line 582
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 583
c_rt_lib0move(&___nl__12,___get_global_const(1013));
#line 583
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 583
c_rt_lib0clear(&___nl__12);
#line 584
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(840)));
#line 584
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_variant_case_decl(___nl__13));
#line 584
c_rt_lib0clear(&___nl__13);
#line 584
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 584
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 584
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__12, ___nl__13));
#line 584
c_rt_lib0clear(&___nl__13);
#line 584
c_rt_lib0clear(&___nl__12);
#line 585
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(201)));
#line 585
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__12, ___nl__2));
#line 585
c_rt_lib0clear(&___nl__12);
#line 586
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 586
goto label_254;
#line 586
label_274:
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
c_rt_lib0clear(&___nl__11);
#line 586
c_rt_lib0clear(&___nl__5);
#line 587
goto label_426;
#line 587
label_283:
#line 587
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(818)));
#line 588
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(918)));
#line 588
c_rt_lib0move(&___nl__7,___get_global_const(818));
#line 588
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 588
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(835)));
#line 588
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 588
c_rt_lib0clear(&___nl__10);
#line 588
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(3)));
#line 588
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 588
c_rt_lib0clear(&___nl__10);
#line 588
c_rt_lib0clear(&___nl__9);
#line 588
c_rt_lib0clear(&___nl__8);
#line 588
c_rt_lib0clear(&___nl__7);
#line 588
c_rt_lib0clear(&___nl__6);
#line 588
c_rt_lib0clear(&___nl__5);
#line 589
goto label_426;
#line 589
label_300:
#line 589
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(819)));
#line 590
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(918)));
#line 590
c_rt_lib0move(&___nl__7,___get_global_const(819));
#line 590
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 590
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(329)));
#line 590
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(198)));
#line 590
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 590
c_rt_lib0clear(&___nl__10);
#line 590
c_rt_lib0clear(&___nl__11);
#line 590
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(328)));
#line 590
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 590
c_rt_lib0clear(&___nl__10);
#line 590
c_rt_lib0clear(&___nl__9);
#line 590
c_rt_lib0clear(&___nl__8);
#line 590
c_rt_lib0clear(&___nl__7);
#line 590
c_rt_lib0clear(&___nl__6);
#line 590
c_rt_lib0clear(&___nl__5);
#line 592
goto label_426;
#line 592
label_319:
#line 592
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(820)));
#line 593
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(918)));
#line 593
c_rt_lib0move(&___nl__7,___get_global_const(820));
#line 593
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 593
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(835)));
#line 593
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 593
c_rt_lib0clear(&___nl__10);
#line 593
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(836)));
#line 593
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 593
c_rt_lib0clear(&___nl__10);
#line 593
c_rt_lib0clear(&___nl__9);
#line 593
c_rt_lib0clear(&___nl__8);
#line 593
c_rt_lib0clear(&___nl__7);
#line 593
c_rt_lib0clear(&___nl__6);
#line 593
c_rt_lib0clear(&___nl__5);
#line 594
goto label_426;
#line 594
label_336:
#line 594
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(140)));
#line 595
c_rt_lib0move(&___nl__6,___get_global_const(140));
#line 595
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 595
c_rt_lib0clear(&___nl__6);
#line 596
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__5, ___nl__2));
#line 596
c_rt_lib0clear(&___nl__5);
#line 597
goto label_426;
#line 597
label_344:
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(822)));
#line 598
c_rt_lib0move(&___nl__6,___get_global_const(816));
#line 598
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 598
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 598
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(831)));
#line 598
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 598
c_rt_lib0clear(&___nl__9);
#line 598
c_rt_lib0clear(&___nl__8);
#line 598
c_rt_lib0clear(&___nl__7);
#line 598
c_rt_lib0clear(&___nl__6);
#line 598
c_rt_lib0clear(&___nl__5);
#line 599
goto label_426;
#line 599
label_357:
#line 599
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(823)));
#line 600
c_rt_lib0move(&___nl__6,___get_global_const(942));
#line 600
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 600
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 600
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(831)));
#line 600
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 600
c_rt_lib0clear(&___nl__9);
#line 600
c_rt_lib0clear(&___nl__8);
#line 600
c_rt_lib0clear(&___nl__7);
#line 600
c_rt_lib0clear(&___nl__6);
#line 600
c_rt_lib0clear(&___nl__5);
#line 601
goto label_426;
#line 601
label_370:
#line 601
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(192)));
#line 602
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_sim_value(___nl__5));
#line 602
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 602
c_rt_lib0clear(&___nl__6);
#line 602
c_rt_lib0clear(&___nl__5);
#line 603
goto label_426;
#line 603
label_377:
#line 603
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(829)));
#line 604
c_rt_lib0move(&___nl__7,___get_global_const(829));
#line 604
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 604
c_rt_lib0clear(&___nl__7);
#line 604
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 604
c_rt_lib0clear(&___nl__6);
#line 604
c_rt_lib0clear(&___nl__5);
#line 605
goto label_426;
#line 605
label_386:
#line 605
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(95)));
#line 606
c_rt_lib0move(&___nl__7,___get_global_const(95));
#line 606
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 606
c_rt_lib0clear(&___nl__7);
#line 606
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 606
c_rt_lib0clear(&___nl__6);
#line 606
c_rt_lib0clear(&___nl__5);
#line 607
goto label_426;
#line 607
label_395:
#line 607
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(90)));
#line 608
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_return(___nl__5));
#line 608
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 608
c_rt_lib0clear(&___nl__6);
#line 608
c_rt_lib0clear(&___nl__5);
#line 609
goto label_426;
#line 609
label_402:
#line 610
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_break());
#line 610
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 610
c_rt_lib0clear(&___nl__5);
#line 611
goto label_426;
#line 611
label_407:
#line 612
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_continue());
#line 612
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 612
c_rt_lib0clear(&___nl__5);
#line 613
goto label_426;
#line 613
label_412:
#line 613
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(217)));
#line 614
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_die(___nl__5));
#line 614
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 614
c_rt_lib0clear(&___nl__6);
#line 614
c_rt_lib0clear(&___nl__5);
#line 615
goto label_426;
#line 615
label_419:
#line 615
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(828)));
#line 616
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_var_decl(___nl__5));
#line 616
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 616
c_rt_lib0clear(&___nl__6);
#line 616
c_rt_lib0clear(&___nl__5);
#line 617
goto label_426;
#line 617
label_426:
#line 617
c_rt_lib0clear(&___nl__3);
#line 617
c_rt_lib0clear(&___nl__4);
#line 617
c_rt_lib0clear(&___nl__1);
#line 617
c_rt_lib0clear(&___nl__2);
#line 617
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
