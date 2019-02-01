
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "nparser.h"
#include "string.h"
#include "array.h"
#include "hash.h"
#include "boolean_t.h"
#include "ptd.h"
#include "nast.h"
#include "ntokenizer.h"
#include "singleton.h"
#include "compiler_lib.h"
#include "nast.h"
#include "compiler_lib.h"
#include "ntokenizer.h"
#line 1 "nparser.nl"

static ImmT *__const__f = NULL;
ImmT nparser_priv0__const__sim(int __nr);
ImmT nparser_priv0__const__sing(int __nr);

ImmT nparser_priv0get_end_list();
ImmT nparser_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0eat(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0try_eat(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0parse_module(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0parse_fun_arg_list(ImmT * ___ref___0);
ImmT nparser_priv0parse_fun_def(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0parse_fun_val_arg_list(ImmT * ___ref___0);
ImmT nparser_priv0parse_expr_list(ImmT * ___ref___0);
ImmT nparser_priv0parse_fun_val_arg(ImmT * ___ref___0);
ImmT nparser_priv0parse_fun_label(ImmT * ___ref___0);
ImmT nparser_priv0parse_label(ImmT * ___ref___0);
ImmT nparser_priv0parse_hash_key(ImmT * ___ref___0);
ImmT nparser_priv0parse_hash(ImmT * ___ref___0);
ImmT nparser_priv0parse_arr(ImmT * ___ref___0);
ImmT nparser_priv0parse_expr(ImmT * ___ref___0);
ImmT nparser_priv0parse_type(ImmT * ___ref___0);
ImmT nparser_priv0parse_expr_rec_left(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT nparser_priv0parse_expr_rec(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0get_value_nop(ImmT * ___ref___0);
ImmT nparser_priv0eat_text(ImmT * ___ref___0);
ImmT nparser_priv0parse_variant_label(ImmT * ___ref___0);
ImmT nparser_priv0parse_variant(ImmT * ___ref___0);
ImmT nparser_priv0check_lvalue(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0parse_variant_decl(ImmT * ___ref___0);
ImmT nparser_priv0parse_var_decl(ImmT * ___ref___0);
ImmT nparser_priv0parse_var_decl_sim(ImmT * ___ref___0);
ImmT nparser_priv0parse_cond(ImmT * ___ref___0);
ImmT nparser_priv0parse_block(ImmT * ___ref___0);
ImmT nparser_priv0parse_try_ensure(ImmT * ___ref___0);
ImmT nparser_priv0get_debug_from_begin(ImmT ___nl__0);
ImmT nparser_priv0parse_cmd(ImmT * ___ref___0);


ImmT nparser_priv0get_end_list(){
return nparser_priv0__const__sing(0);}
ImmT nparser_priv0get_end_list0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 17
c_rt_lib0move(&___nl__2,___get_global_const(360));
#line 17
c_rt_lib0move(&___nl__3,___get_global_const(817));
#line 17
c_rt_lib0move(&___nl__4,___get_global_const(943));
#line 17
c_rt_lib0move(&___nl__5,___get_global_const(819));
#line 17
c_rt_lib0move(&___nl__6,___get_global_const(820));
#line 17
c_rt_lib0move(&___nl__7,___get_global_const(821));
#line 17
c_rt_lib0move(&___nl__8,___get_global_const(822));
#line 17
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(7, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6, ___nl__7, ___nl__8));
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
c_rt_lib0clear(&___nl__6);
#line 17
c_rt_lib0clear(&___nl__7);
#line 17
c_rt_lib0clear(&___nl__8);
#line 17
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return ___nl__0;
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT nparser0parse_ret_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0parse_ret_t");
return nparser0parse_ret_t();}
ImmT nparser0parse_ret_t(){
return nparser_priv0__const__sing(1);}
ImmT nparser0parse_ret_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0module_t0ptr, ___get_global_const(13), ___get_global_const(14)));
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(20), ___get_global_const(782)));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__2, ___get_global_const(112), ___nl__3));
#line 21
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
return ___nl__0;
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return NULL;
}

ImmT nparser0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0state_t");
return nparser0state_t();}
ImmT nparser0state_t(){
return nparser_priv0__const__sing(2);}
ImmT nparser0state_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(ntokenizer0state_t0ptr, ___get_global_const(944), ___get_global_const(945)));
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(20), ___get_global_const(782)));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 25
c_rt_lib0move(&___nl__4, ptd0sim());
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(933), ___nl__2, ___get_global_const(18), ___nl__3, ___get_global_const(186), ___nl__4));
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0clear(&___nl__4);
#line 25
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 25
c_rt_lib0clear(&___nl__1);
#line 25
return ___nl__0;
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
return NULL;
}

ImmT nparser0try_value_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0try_value_t");
return nparser0try_value_t();}
ImmT nparser0try_value_t(){
return nparser_priv0__const__sing(3);}
ImmT nparser0try_value_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 29
c_rt_lib0move(&___nl__3, ptd0sim());
#line 29
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__2, ___get_global_const(47), ___nl__3));
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0clear(&___nl__3);
#line 29
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 29
c_rt_lib0clear(&___nl__1);
#line 29
return ___nl__0;
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
return NULL;
}

ImmT nparser0try_cmd_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0try_cmd_t");
return nparser0try_cmd_t();}
ImmT nparser0try_cmd_t(){
return nparser_priv0__const__sing(4);}
ImmT nparser0try_cmd_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 33
c_rt_lib0move(&___nl__3, ptd0sim());
#line 33
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__2, ___get_global_const(47), ___nl__3));
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 33
c_rt_lib0clear(&___nl__1);
#line 33
return ___nl__0;
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
return NULL;
}

ImmT nparser0sparse0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "nparser0sparse");
return nparser0sparse(_tab[0], _tab[1]);}
ImmT nparser0sparse(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 40
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 40
c_rt_lib0move(&___nl__4, ntokenizer0init(___nl__0));
#line 40
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(18), ___nl__3, ___get_global_const(933), ___nl__4, ___get_global_const(186), ___nl__1));
#line 40
c_rt_lib0clear(&___nl__3);
#line 40
c_rt_lib0clear(&___nl__4);
#line 41
c_rt_lib0move(&___nl__3, nparser_priv0parse_module(&___nl__2, ___nl__1));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(18)));
#line 42
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 42
c_rt_lib0clear(&___nl__5);
#line 42
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0gt(___nl__4, ___nl__5));
#line 42
c_rt_lib0clear(&___nl__5);
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 42
if(c_rt_lib0check_true_native(___nl__4)){ goto label_24;}
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(18)));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__5));
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
return ___nl__5;
#line 42
c_rt_lib0clear(&___nl__5);
#line 42
goto label_24;
#line 42
label_24:
#line 42
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
return ___nl__4;
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
return NULL;
}

ImmT nparser_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 47
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(933)));
#line 47
c_rt_lib0move(&___nl__2, ntokenizer0get_line(___nl__3));
#line 47
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(933)));
#line 48
c_rt_lib0move(&___nl__3, ntokenizer0get_column(___nl__4));
#line 48
c_rt_lib0clear(&___nl__4);
#line 49
c_rt_lib0move(&___nl__4,___get_global_const(18));
#line 49
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 49
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(186)));
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(112)));
#line 49
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(5, ___get_global_const(134), ___nl__2, ___get_global_const(132), ___nl__6, ___get_global_const(179), ___nl__3, ___get_global_const(137), ___nl__1, ___get_global_const(63), ___nl__7));
#line 49
c_rt_lib0clear(&___nl__6);
#line 49
c_rt_lib0clear(&___nl__7);
#line 49
c_rt_lib0delete(array0push(&___nl__4, ___nl__5));
#line 49
c_rt_lib0clear(&___nl__5);
#line 49
c_rt_lib0move(&___nl__5,___get_global_const(18));
#line 49
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 49
c_rt_lib0clear(&___nl__5);
#line 49
c_rt_lib0clear(&___nl__4);
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__1);
#line 49
return NULL;
}

ImmT nparser_priv0eat(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 53
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 53
c_rt_lib0move(&___nl__2, ntokenizer0eat_token(&___nl__3, ___nl__1));
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 53
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 53
if(c_rt_lib0check_true_native(___nl__2)){ goto label_15;}
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 53
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
return ___nl__3;
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
goto label_15;
#line 53
label_15:
#line 53
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0move(&___nl__2,___get_global_const(946));
#line 54
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 54
c_rt_lib0move(&___nl__3, string0lf());
#line 54
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(933)));
#line 54
c_rt_lib0move(&___nl__3, ntokenizer0info(___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 54
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
return ___nl__2;
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
return NULL;
}

ImmT nparser_priv0try_eat(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 59
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 59
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 59
c_rt_lib0move(&___nl__2, ntokenizer0eat_token(&___nl__3, ___nl__1));
#line 59
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 59
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 59
c_rt_lib0clear(&___nl__4);
#line 59
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0clear(&___nl__1);
#line 59
return ___nl__2;
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__1);
#line 59
return NULL;
}

ImmT nparser_priv0parse_module(ImmT * ___ref___0,ImmT ___nl__1) {
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
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 63
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 63
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 63
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(93), ___nl__1, ___get_global_const(150), ___nl__3, ___get_global_const(787), ___nl__4, ___get_global_const(899), ___nl__5));
#line 63
c_rt_lib0clear(&___nl__3);
#line 63
c_rt_lib0clear(&___nl__4);
#line 63
c_rt_lib0clear(&___nl__5);
#line 64
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(933)));
#line 64
c_rt_lib0move(&___nl__3, ntokenizer0get_last_comment(___nl__4));
#line 64
c_rt_lib0clear(&___nl__4);
#line 64
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 64
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(899), ___nl__4);
#line 64
c_rt_lib0clear(&___nl__3);
#line 64
c_rt_lib0clear(&___nl__4);
#line 65
label_14:
#line 65
c_rt_lib0move(&___nl__4,___get_global_const(947));
#line 65
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 65
c_rt_lib0clear(&___nl__4);
#line 65
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 65
if(c_rt_lib0check_true_native(___nl__3)){ goto label_66;}
#line 66
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(933)));
#line 66
c_rt_lib0move(&___nl__4, ntokenizer0get_line(___nl__5));
#line 66
c_rt_lib0clear(&___nl__5);
#line 67
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 67
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 67
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 67
c_rt_lib0move(&___nl__5, ntokenizer0is_type(&___nl__6, ___nl__7));
#line 67
c_rt_lib0clear(&___nl__7);
#line 67
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 67
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 67
c_rt_lib0clear(&___nl__7);
#line 67
c_rt_lib0clear(&___nl__6);
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 67
if(c_rt_lib0check_true_native(___nl__5)){ goto label_54;}
#line 68
c_rt_lib0move(&___nl__6,___get_global_const(150));
#line 68
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(___nl__2, ___nl__6));
#line 68
c_rt_lib0move(&___nl__9,___get_global_const(933));
#line 68
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 68
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 68
c_rt_lib0move(&___nl__8, ntokenizer0eat_type(&___nl__9, ___nl__10));
#line 68
c_rt_lib0clear(&___nl__10);
#line 68
c_rt_lib0move(&___nl__10,___get_global_const(933));
#line 68
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__10, ___nl__9));
#line 68
c_rt_lib0clear(&___nl__10);
#line 68
c_rt_lib0clear(&___nl__9);
#line 68
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__8, ___get_global_const(134), ___nl__4));
#line 68
c_rt_lib0clear(&___nl__8);
#line 68
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 68
c_rt_lib0clear(&___nl__7);
#line 68
c_rt_lib0move(&___nl__7,___get_global_const(150));
#line 68
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__2, ___nl__7, ___nl__6));
#line 68
c_rt_lib0clear(&___nl__7);
#line 68
c_rt_lib0clear(&___nl__6);
#line 69
goto label_59;
#line 69
label_54:
#line 70
c_rt_lib0move(&___nl__6,___get_global_const(949));
#line 70
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__6));
#line 70
c_rt_lib0clear(&___nl__6);
#line 71
goto label_59;
#line 71
label_59:
#line 71
c_rt_lib0clear(&___nl__5);
#line 72
c_rt_lib0move(&___nl__5,___get_global_const(360));
#line 72
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 72
c_rt_lib0clear(&___nl__5);
#line 72
c_rt_lib0clear(&___nl__4);
#line 73
goto label_14;
#line 73
label_66:
#line 73
c_rt_lib0clear(&___nl__3);
#line 74
label_68:
#line 74
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 74
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 74
c_rt_lib0move(&___nl__5,___get_global_const(950));
#line 74
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 74
c_rt_lib0clear(&___nl__5);
#line 74
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 74
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 74
c_rt_lib0clear(&___nl__5);
#line 74
c_rt_lib0clear(&___nl__4);
#line 74
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 74
if(c_rt_lib0check_true_native(___nl__3)){ goto label_114;}
#line 75
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_def(___ref___0, ___nl__1));
#line 75
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 75
if(c_rt_lib0check_true_native(___nl__5)){ goto label_88;}
#line 77
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(47)));
#line 77
if(c_rt_lib0check_true_native(___nl__5)){ goto label_99;}
#line 77
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 77
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 77
nl_die_arg(___nl__5);
#line 75
label_88:
#line 75
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 76
c_rt_lib0move(&___nl__7,___get_global_const(787));
#line 76
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(___nl__2, ___nl__7));
#line 76
c_rt_lib0delete(array0push(&___nl__7, ___nl__6));
#line 76
c_rt_lib0move(&___nl__8,___get_global_const(787));
#line 76
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__2, ___nl__8, ___nl__7));
#line 76
c_rt_lib0clear(&___nl__8);
#line 76
c_rt_lib0clear(&___nl__7);
#line 76
c_rt_lib0clear(&___nl__6);
#line 77
goto label_110;
#line 77
label_99:
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(47)));
#line 78
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__6));
#line 79
c_rt_lib0clear(&___nl__1);
#line 79
c_rt_lib0clear(&___nl__3);
#line 79
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0clear(&___nl__5);
#line 79
c_rt_lib0clear(&___nl__6);
#line 79
return ___nl__2;
#line 79
c_rt_lib0clear(&___nl__6);
#line 80
goto label_110;
#line 80
label_110:
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
c_rt_lib0clear(&___nl__5);
#line 81
goto label_68;
#line 81
label_114:
#line 81
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 82
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 82
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(906)));
#line 82
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 82
c_rt_lib0clear(&___nl__5);
#line 82
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 82
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 82
c_rt_lib0clear(&___nl__5);
#line 82
c_rt_lib0clear(&___nl__4);
#line 82
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 82
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 82
if(c_rt_lib0check_true_native(___nl__3)){ goto label_132;}
#line 82
c_rt_lib0move(&___nl__4,___get_global_const(951));
#line 82
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__4));
#line 82
c_rt_lib0clear(&___nl__4);
#line 82
goto label_132;
#line 82
label_132:
#line 82
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
return ___nl__2;
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
return NULL;
}

ImmT nparser_priv0parse_fun_arg_list(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 90
c_rt_lib0move(&___nl__1,___get_global_const(373));
#line 90
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 90
c_rt_lib0clear(&___nl__1);
#line 91
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 92
label_4:
#line 92
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 92
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 92
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 92
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 92
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0clear(&___nl__3);
#line 92
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 92
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 92
if(c_rt_lib0check_true_native(___nl__2)){ goto label_112;}
#line 93
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 93
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 93
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 93
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__4, ___get_global_const(63), ___nl__5, ___get_global_const(93), ___nl__6));
#line 93
c_rt_lib0clear(&___nl__4);
#line 93
c_rt_lib0clear(&___nl__5);
#line 93
c_rt_lib0clear(&___nl__6);
#line 94
c_rt_lib0move(&___nl__5,___get_global_const(5));
#line 94
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 94
if(c_rt_lib0check_true_native(___nl__4)){ goto label_35;}
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 94
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 94
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(222), ___nl__6);
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0clear(&___nl__6);
#line 94
goto label_35;
#line 94
label_35:
#line 94
c_rt_lib0clear(&___nl__4);
#line 95
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 95
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 95
c_rt_lib0move(&___nl__4, ntokenizer0is_type(&___nl__5, ___nl__6));
#line 95
c_rt_lib0clear(&___nl__6);
#line 95
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 95
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 95
c_rt_lib0clear(&___nl__6);
#line 95
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 95
if(c_rt_lib0check_true_native(___nl__4)){ goto label_62;}
#line 96
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 96
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 96
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 96
c_rt_lib0move(&___nl__5, ntokenizer0eat_type(&___nl__6, ___nl__7));
#line 96
c_rt_lib0clear(&___nl__7);
#line 96
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 96
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 96
c_rt_lib0clear(&___nl__7);
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 96
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(93), ___nl__6);
#line 96
c_rt_lib0clear(&___nl__5);
#line 96
c_rt_lib0clear(&___nl__6);
#line 97
goto label_67;
#line 97
label_62:
#line 98
c_rt_lib0move(&___nl__5,___get_global_const(952));
#line 98
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__5));
#line 98
c_rt_lib0clear(&___nl__5);
#line 99
goto label_67;
#line 99
label_67:
#line 99
c_rt_lib0clear(&___nl__4);
#line 100
c_rt_lib0move(&___nl__5,___get_global_const(417));
#line 100
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 100
c_rt_lib0clear(&___nl__5);
#line 100
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 100
if(c_rt_lib0check_true_native(___nl__4)){ goto label_95;}
#line 101
c_rt_lib0move(&___nl__7, nparser_priv0parse_type(___ref___0));
#line 101
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(48)));
#line 101
if(c_rt_lib0check_true_native(___nl__6)){ goto label_84;}
#line 101
c_rt_lib0clear(&___nl__1);
#line 101
c_rt_lib0clear(&___nl__2);
#line 101
c_rt_lib0clear(&___nl__3);
#line 101
c_rt_lib0clear(&___nl__4);
#line 101
c_rt_lib0clear(&___nl__5);
#line 101
c_rt_lib0clear(&___nl__6);
#line 101
return ___nl__7;
#line 101
label_84:
#line 101
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__7, ___get_global_const(48)));
#line 101
c_rt_lib0clear(&___nl__6);
#line 101
c_rt_lib0clear(&___nl__7);
#line 102
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(63), ___nl__5));
#line 102
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 102
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(63), ___nl__7);
#line 102
c_rt_lib0clear(&___nl__6);
#line 102
c_rt_lib0clear(&___nl__7);
#line 102
c_rt_lib0clear(&___nl__5);
#line 103
goto label_95;
#line 103
label_95:
#line 103
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 105
c_rt_lib0move(&___nl__5,___get_global_const(256));
#line 105
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 105
if(c_rt_lib0check_true_native(___nl__4)){ goto label_108;}
#line 105
c_rt_lib0clear(&___nl__3);
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
goto label_112;
#line 105
goto label_108;
#line 105
label_108:
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0clear(&___nl__3);
#line 106
goto label_4;
#line 106
label_112:
#line 106
c_rt_lib0clear(&___nl__2);
#line 107
c_rt_lib0move(&___nl__2,___get_global_const(260));
#line 107
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 107
c_rt_lib0clear(&___nl__2);
#line 108
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 108
c_rt_lib0clear(&___nl__1);
#line 108
return ___nl__2;
#line 108
c_rt_lib0clear(&___nl__2);
#line 108
c_rt_lib0clear(&___nl__1);
#line 108
return NULL;
}

ImmT nparser_priv0parse_fun_def(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 116
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 117
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(933)));
#line 117
c_rt_lib0move(&___nl__4, ntokenizer0get_line(___nl__5));
#line 117
c_rt_lib0clear(&___nl__5);
#line 118
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 119
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 120
c_rt_lib0move(&___nl__8, nparser_priv0get_debug_from_begin(*___ref___0));
#line 120
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(831)));
#line 120
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__8, ___get_global_const(201), ___nl__9));
#line 120
c_rt_lib0clear(&___nl__8);
#line 120
c_rt_lib0clear(&___nl__9);
#line 121
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(379)));
#line 121
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(6, ___get_global_const(788), ___nl__3, ___get_global_const(134), ___nl__4, ___get_global_const(89), ___nl__5, ___get_global_const(93), ___nl__6, ___get_global_const(201), ___nl__7, ___get_global_const(182), ___nl__8));
#line 121
c_rt_lib0clear(&___nl__3);
#line 121
c_rt_lib0clear(&___nl__4);
#line 121
c_rt_lib0clear(&___nl__5);
#line 121
c_rt_lib0clear(&___nl__6);
#line 121
c_rt_lib0clear(&___nl__7);
#line 121
c_rt_lib0clear(&___nl__8);
#line 123
c_rt_lib0move(&___nl__3,___get_global_const(950));
#line 123
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__3));
#line 123
c_rt_lib0clear(&___nl__3);
#line 124
c_rt_lib0move(&___nl__4, nparser_priv0eat_text(___ref___0));
#line 124
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 124
if(c_rt_lib0check_true_native(___nl__3)){ goto label_29;}
#line 124
c_rt_lib0clear(&___nl__1);
#line 124
c_rt_lib0clear(&___nl__2);
#line 124
c_rt_lib0clear(&___nl__3);
#line 124
return ___nl__4;
#line 124
label_29:
#line 124
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 124
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(93), ___nl__5);
#line 124
c_rt_lib0clear(&___nl__3);
#line 124
c_rt_lib0clear(&___nl__4);
#line 124
c_rt_lib0clear(&___nl__5);
#line 125
c_rt_lib0move(&___nl__4,___get_global_const(185));
#line 125
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 125
c_rt_lib0clear(&___nl__4);
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 125
if(c_rt_lib0check_true_native(___nl__3)){ goto label_77;}
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(93)));
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0ne(___nl__4, ___nl__1));
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 126
if(c_rt_lib0check_true_native(___nl__4)){ goto label_55;}
#line 127
c_rt_lib0move(&___nl__5,___get_global_const(953));
#line 127
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(93)));
#line 127
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 127
c_rt_lib0clear(&___nl__6);
#line 127
c_rt_lib0move(&___nl__6,___get_global_const(954));
#line 127
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 127
c_rt_lib0clear(&___nl__6);
#line 127
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 127
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__5));
#line 127
c_rt_lib0clear(&___nl__5);
#line 128
goto label_55;
#line 128
label_55:
#line 128
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0move(&___nl__5, nparser_priv0eat_text(___ref___0));
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 129
if(c_rt_lib0check_true_native(___nl__4)){ goto label_65;}
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
return ___nl__5;
#line 129
label_65:
#line 129
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 129
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(93), ___nl__6);
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0clear(&___nl__5);
#line 129
c_rt_lib0clear(&___nl__6);
#line 130
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(183)));
#line 130
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 130
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(182), ___nl__5);
#line 130
c_rt_lib0clear(&___nl__4);
#line 130
c_rt_lib0clear(&___nl__5);
#line 131
goto label_77;
#line 131
label_77:
#line 131
c_rt_lib0clear(&___nl__3);
#line 132
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_arg_list(___ref___0));
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 132
if(c_rt_lib0check_true_native(___nl__3)){ goto label_86;}
#line 132
c_rt_lib0clear(&___nl__1);
#line 132
c_rt_lib0clear(&___nl__2);
#line 132
c_rt_lib0clear(&___nl__3);
#line 132
return ___nl__4;
#line 132
label_86:
#line 132
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 132
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(89), ___nl__5);
#line 132
c_rt_lib0clear(&___nl__3);
#line 132
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0clear(&___nl__5);
#line 133
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 133
c_rt_lib0move(&___nl__5,___get_global_const(417));
#line 133
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 133
c_rt_lib0clear(&___nl__5);
#line 133
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 133
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 133
c_rt_lib0clear(&___nl__5);
#line 133
c_rt_lib0clear(&___nl__4);
#line 133
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 133
if(c_rt_lib0check_true_native(___nl__3)){ goto label_126;}
#line 134
c_rt_lib0move(&___nl__4,___get_global_const(417));
#line 134
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 134
c_rt_lib0clear(&___nl__4);
#line 135
c_rt_lib0move(&___nl__6, nparser_priv0parse_type(___ref___0));
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 135
if(c_rt_lib0check_true_native(___nl__5)){ goto label_115;}
#line 135
c_rt_lib0clear(&___nl__1);
#line 135
c_rt_lib0clear(&___nl__2);
#line 135
c_rt_lib0clear(&___nl__3);
#line 135
c_rt_lib0clear(&___nl__4);
#line 135
c_rt_lib0clear(&___nl__5);
#line 135
return ___nl__6;
#line 135
label_115:
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 135
c_rt_lib0clear(&___nl__5);
#line 135
c_rt_lib0clear(&___nl__6);
#line 136
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(63), ___nl__4));
#line 136
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 136
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(788), ___nl__6);
#line 136
c_rt_lib0clear(&___nl__5);
#line 136
c_rt_lib0clear(&___nl__6);
#line 136
c_rt_lib0clear(&___nl__4);
#line 137
goto label_126;
#line 137
label_126:
#line 137
c_rt_lib0clear(&___nl__3);
#line 138
c_rt_lib0move(&___nl__4, nparser_priv0parse_block(___ref___0));
#line 138
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 138
if(c_rt_lib0check_true_native(___nl__3)){ goto label_135;}
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
return ___nl__4;
#line 138
label_135:
#line 138
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 138
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(201), ___nl__5);
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
c_rt_lib0clear(&___nl__4);
#line 138
c_rt_lib0clear(&___nl__5);
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__2));
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
return ___nl__3;
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
return NULL;
}

ImmT nparser_priv0parse_fun_val_arg_list(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 146
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 147
label_1:
#line 147
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 147
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 147
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 147
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
c_rt_lib0clear(&___nl__3);
#line 147
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 147
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 147
if(c_rt_lib0check_true_native(___nl__2)){ goto label_41;}
#line 148
c_rt_lib0move(&___nl__5, nparser_priv0parse_fun_val_arg(___ref___0));
#line 148
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 148
if(c_rt_lib0check_true_native(___nl__4)){ goto label_22;}
#line 148
c_rt_lib0clear(&___nl__1);
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
c_rt_lib0clear(&___nl__4);
#line 148
return ___nl__5;
#line 148
label_22:
#line 148
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 148
c_rt_lib0clear(&___nl__4);
#line 148
c_rt_lib0clear(&___nl__5);
#line 149
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 150
c_rt_lib0move(&___nl__5,___get_global_const(256));
#line 150
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 150
c_rt_lib0clear(&___nl__5);
#line 150
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 150
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 150
if(c_rt_lib0check_true_native(___nl__4)){ goto label_37;}
#line 150
c_rt_lib0clear(&___nl__3);
#line 150
c_rt_lib0clear(&___nl__4);
#line 150
goto label_41;
#line 150
goto label_37;
#line 150
label_37:
#line 150
c_rt_lib0clear(&___nl__4);
#line 150
c_rt_lib0clear(&___nl__3);
#line 151
goto label_1;
#line 151
label_41:
#line 151
c_rt_lib0clear(&___nl__2);
#line 152
c_rt_lib0move(&___nl__2,___get_global_const(260));
#line 152
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 152
c_rt_lib0clear(&___nl__2);
#line 153
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 153
c_rt_lib0clear(&___nl__1);
#line 153
return ___nl__2;
#line 153
c_rt_lib0clear(&___nl__2);
#line 153
c_rt_lib0clear(&___nl__1);
#line 153
return NULL;
}

ImmT nparser_priv0parse_expr_list(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 157
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 158
label_1:
#line 158
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 158
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 158
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 158
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 158
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 158
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 158
if(c_rt_lib0check_true_native(___nl__2)){ goto label_41;}
#line 159
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 159
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 159
if(c_rt_lib0check_true_native(___nl__4)){ goto label_22;}
#line 159
c_rt_lib0clear(&___nl__1);
#line 159
c_rt_lib0clear(&___nl__2);
#line 159
c_rt_lib0clear(&___nl__3);
#line 159
c_rt_lib0clear(&___nl__4);
#line 159
return ___nl__5;
#line 159
label_22:
#line 159
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 159
c_rt_lib0clear(&___nl__4);
#line 159
c_rt_lib0clear(&___nl__5);
#line 160
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 161
c_rt_lib0move(&___nl__5,___get_global_const(256));
#line 161
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 161
c_rt_lib0clear(&___nl__5);
#line 161
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 161
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 161
if(c_rt_lib0check_true_native(___nl__4)){ goto label_37;}
#line 161
c_rt_lib0clear(&___nl__3);
#line 161
c_rt_lib0clear(&___nl__4);
#line 161
goto label_41;
#line 161
goto label_37;
#line 161
label_37:
#line 161
c_rt_lib0clear(&___nl__4);
#line 161
c_rt_lib0clear(&___nl__3);
#line 162
goto label_1;
#line 162
label_41:
#line 162
c_rt_lib0clear(&___nl__2);
#line 163
c_rt_lib0move(&___nl__2,___get_global_const(260));
#line 163
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 163
c_rt_lib0clear(&___nl__2);
#line 164
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 164
c_rt_lib0clear(&___nl__1);
#line 164
return ___nl__2;
#line 164
c_rt_lib0clear(&___nl__2);
#line 164
c_rt_lib0clear(&___nl__1);
#line 164
return NULL;
}

ImmT nparser_priv0parse_fun_val_arg(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 168
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 169
c_rt_lib0move(&___nl__3,___get_global_const(5));
#line 169
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 169
c_rt_lib0clear(&___nl__3);
#line 169
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 169
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 169
goto label_9;
#line 169
label_7:
#line 169
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 169
label_9:
#line 169
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 169
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(222), ___nl__3);
#line 169
c_rt_lib0clear(&___nl__2);
#line 169
c_rt_lib0clear(&___nl__3);
#line 170
c_rt_lib0move(&___nl__3, nparser_priv0parse_expr(___ref___0));
#line 170
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(48)));
#line 170
if(c_rt_lib0check_true_native(___nl__2)){ goto label_20;}
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
c_rt_lib0clear(&___nl__2);
#line 170
return ___nl__3;
#line 170
label_20:
#line 170
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__3, ___get_global_const(48)));
#line 170
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(198), ___nl__4);
#line 170
c_rt_lib0clear(&___nl__2);
#line 170
c_rt_lib0clear(&___nl__3);
#line 170
c_rt_lib0clear(&___nl__4);
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 171
c_rt_lib0clear(&___nl__1);
#line 171
return ___nl__2;
#line 171
c_rt_lib0clear(&___nl__2);
#line 171
c_rt_lib0clear(&___nl__1);
#line 171
return NULL;
}

ImmT nparser_priv0parse_fun_label(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 175
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 175
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__2, ___get_global_const(132), ___nl__3));
#line 175
c_rt_lib0clear(&___nl__2);
#line 175
c_rt_lib0clear(&___nl__3);
#line 176
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 176
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 176
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 176
c_rt_lib0move(&___nl__2, ntokenizer0is_type(&___nl__3, ___nl__4));
#line 176
c_rt_lib0clear(&___nl__4);
#line 176
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 176
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 176
c_rt_lib0clear(&___nl__4);
#line 176
c_rt_lib0clear(&___nl__3);
#line 176
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 176
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 176
if(c_rt_lib0check_true_native(___nl__2)){ goto label_23;}
#line 177
c_rt_lib0move(&___nl__3,___get_global_const(955));
#line 177
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 177
c_rt_lib0clear(&___nl__3);
#line 178
c_rt_lib0clear(&___nl__2);
#line 178
return ___nl__1;
#line 179
goto label_23;
#line 179
label_23:
#line 179
c_rt_lib0clear(&___nl__2);
#line 180
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 180
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 180
c_rt_lib0move(&___nl__2, ntokenizer0eat_type(&___nl__3, ___nl__4));
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 180
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0clear(&___nl__3);
#line 180
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 180
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(132), ___nl__3);
#line 180
c_rt_lib0clear(&___nl__2);
#line 180
c_rt_lib0clear(&___nl__3);
#line 181
c_rt_lib0move(&___nl__4,___get_global_const(185));
#line 181
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 181
if(c_rt_lib0check_true_native(___nl__3)){ goto label_50;}
#line 181
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 181
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 181
c_rt_lib0move(&___nl__2, ntokenizer0is_text(&___nl__4));
#line 181
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 181
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 181
c_rt_lib0clear(&___nl__5);
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
label_50:
#line 181
c_rt_lib0clear(&___nl__3);
#line 181
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 181
if(c_rt_lib0check_true_native(___nl__2)){ goto label_66;}
#line 182
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 182
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 182
c_rt_lib0move(&___nl__3, ntokenizer0eat_text(&___nl__4));
#line 182
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 182
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 182
c_rt_lib0clear(&___nl__5);
#line 182
c_rt_lib0clear(&___nl__4);
#line 182
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 182
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(93), ___nl__4);
#line 182
c_rt_lib0clear(&___nl__3);
#line 182
c_rt_lib0clear(&___nl__4);
#line 183
goto label_71;
#line 183
label_66:
#line 184
c_rt_lib0move(&___nl__3,___get_global_const(956));
#line 184
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 184
c_rt_lib0clear(&___nl__3);
#line 185
goto label_71;
#line 185
label_71:
#line 185
c_rt_lib0clear(&___nl__2);
#line 186
return ___nl__1;
#line 186
c_rt_lib0clear(&___nl__1);
#line 186
return NULL;
}

ImmT nparser_priv0parse_label(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 193
c_rt_lib0move(&___nl__2,___get_global_const(933));
#line 193
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 193
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 193
c_rt_lib0move(&___nl__1, ntokenizer0eat_type(&___nl__2, ___nl__3));
#line 193
c_rt_lib0clear(&___nl__3);
#line 193
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 193
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 193
c_rt_lib0clear(&___nl__3);
#line 193
c_rt_lib0clear(&___nl__2);
#line 195
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 195
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 195
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 195
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 195
c_rt_lib0clear(&___nl__5);
#line 195
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 195
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 195
c_rt_lib0clear(&___nl__5);
#line 195
c_rt_lib0clear(&___nl__4);
#line 195
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 195
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 195
if(c_rt_lib0check_true_native(___nl__3)){ goto label_31;}
#line 195
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 195
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 195
c_rt_lib0move(&___nl__5,___get_global_const(185));
#line 195
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 195
c_rt_lib0clear(&___nl__5);
#line 195
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 195
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 195
c_rt_lib0clear(&___nl__5);
#line 195
c_rt_lib0clear(&___nl__4);
#line 195
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 195
label_31:
#line 195
c_rt_lib0clear(&___nl__3);
#line 195
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 195
if(c_rt_lib0check_true_native(___nl__2)){ goto label_42;}
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(849), ___nl__1));
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 194
c_rt_lib0clear(&___nl__1);
#line 194
c_rt_lib0clear(&___nl__2);
#line 194
return ___nl__3;
#line 194
c_rt_lib0clear(&___nl__3);
#line 194
goto label_42;
#line 194
label_42:
#line 194
c_rt_lib0clear(&___nl__2);
#line 196
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 196
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 196
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 196
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(132), ___nl__3, ___get_global_const(93), ___nl__4, ___get_global_const(89), ___nl__5));
#line 196
c_rt_lib0clear(&___nl__3);
#line 196
c_rt_lib0clear(&___nl__4);
#line 196
c_rt_lib0clear(&___nl__5);
#line 197
c_rt_lib0move(&___nl__4,___get_global_const(185));
#line 197
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 197
c_rt_lib0clear(&___nl__4);
#line 197
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 197
if(c_rt_lib0check_true_native(___nl__3)){ goto label_74;}
#line 198
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 198
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(132), ___nl__4);
#line 198
c_rt_lib0clear(&___nl__4);
#line 199
c_rt_lib0move(&___nl__5, nparser_priv0eat_text(___ref___0));
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 199
if(c_rt_lib0check_true_native(___nl__4)){ goto label_67;}
#line 199
c_rt_lib0clear(&___nl__1);
#line 199
c_rt_lib0clear(&___nl__2);
#line 199
c_rt_lib0clear(&___nl__3);
#line 199
c_rt_lib0clear(&___nl__4);
#line 199
return ___nl__5;
#line 199
label_67:
#line 199
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 199
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(93), ___nl__6);
#line 199
c_rt_lib0clear(&___nl__4);
#line 199
c_rt_lib0clear(&___nl__5);
#line 199
c_rt_lib0clear(&___nl__6);
#line 200
goto label_79;
#line 200
label_74:
#line 201
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 201
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(93), ___nl__4);
#line 201
c_rt_lib0clear(&___nl__4);
#line 202
goto label_79;
#line 202
label_79:
#line 202
c_rt_lib0clear(&___nl__3);
#line 203
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 203
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__3));
#line 203
c_rt_lib0clear(&___nl__3);
#line 204
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_val_arg_list(___ref___0));
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 204
if(c_rt_lib0check_true_native(___nl__3)){ goto label_91;}
#line 204
c_rt_lib0clear(&___nl__1);
#line 204
c_rt_lib0clear(&___nl__2);
#line 204
c_rt_lib0clear(&___nl__3);
#line 204
return ___nl__4;
#line 204
label_91:
#line 204
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 204
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(89), ___nl__5);
#line 204
c_rt_lib0clear(&___nl__3);
#line 204
c_rt_lib0clear(&___nl__4);
#line 204
c_rt_lib0clear(&___nl__5);
#line 205
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(812), ___nl__2));
#line 205
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 205
c_rt_lib0clear(&___nl__1);
#line 205
c_rt_lib0clear(&___nl__2);
#line 205
return ___nl__3;
#line 205
c_rt_lib0clear(&___nl__3);
#line 205
c_rt_lib0clear(&___nl__1);
#line 205
c_rt_lib0clear(&___nl__2);
#line 205
return NULL;
}

ImmT nparser_priv0parse_hash_key(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 209
c_rt_lib0move(&___nl__2,___get_global_const(933));
#line 209
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 209
c_rt_lib0move(&___nl__1, ntokenizer0get_place(&___nl__2));
#line 209
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 209
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 209
c_rt_lib0clear(&___nl__3);
#line 209
c_rt_lib0clear(&___nl__2);
#line 210
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 210
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(856), ___nl__2));
#line 211
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 211
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 211
c_rt_lib0move(&___nl__3, ntokenizer0is_text(&___nl__4));
#line 211
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 211
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 211
c_rt_lib0clear(&___nl__5);
#line 211
c_rt_lib0clear(&___nl__4);
#line 211
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 211
if(c_rt_lib0check_true_native(___nl__3)){ goto label_29;}
#line 212
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 212
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 212
c_rt_lib0move(&___nl__4, ntokenizer0eat_text(&___nl__5));
#line 212
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 212
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 212
c_rt_lib0clear(&___nl__6);
#line 212
c_rt_lib0clear(&___nl__5);
#line 212
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(856), ___nl__4));
#line 212
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 212
c_rt_lib0clear(&___nl__4);
#line 213
goto label_54;
#line 213
label_29:
#line 213
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 213
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(771)));
#line 213
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 213
c_rt_lib0clear(&___nl__5);
#line 213
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 213
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 213
c_rt_lib0clear(&___nl__5);
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 213
if(c_rt_lib0check_true_native(___nl__3)){ goto label_54;}
#line 214
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 214
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 214
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(771)));
#line 214
c_rt_lib0move(&___nl__4, ntokenizer0eat_type(&___nl__5, ___nl__6));
#line 214
c_rt_lib0clear(&___nl__6);
#line 214
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 214
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 214
c_rt_lib0clear(&___nl__6);
#line 214
c_rt_lib0clear(&___nl__5);
#line 214
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(856), ___nl__4));
#line 214
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 214
c_rt_lib0clear(&___nl__4);
#line 215
goto label_54;
#line 215
label_54:
#line 215
c_rt_lib0clear(&___nl__3);
#line 217
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 217
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 217
c_rt_lib0move(&___nl__5, ntokenizer0get_place(&___nl__6));
#line 217
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 217
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 217
c_rt_lib0clear(&___nl__7);
#line 217
c_rt_lib0clear(&___nl__6);
#line 217
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__1, ___get_global_const(906), ___nl__5));
#line 217
c_rt_lib0clear(&___nl__5);
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__4, ___get_global_const(192), ___nl__2));
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0clear(&___nl__1);
#line 217
c_rt_lib0clear(&___nl__2);
#line 217
return ___nl__3;
#line 217
c_rt_lib0clear(&___nl__3);
#line 217
c_rt_lib0clear(&___nl__1);
#line 217
c_rt_lib0clear(&___nl__2);
#line 217
return NULL;
}

ImmT nparser_priv0parse_hash(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 223
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 224
c_rt_lib0move(&___nl__2,___get_global_const(252));
#line 224
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 224
c_rt_lib0clear(&___nl__2);
#line 225
label_4:
#line 225
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 225
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 225
c_rt_lib0move(&___nl__4,___get_global_const(253));
#line 225
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 225
c_rt_lib0clear(&___nl__4);
#line 225
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 225
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 225
c_rt_lib0clear(&___nl__4);
#line 225
c_rt_lib0clear(&___nl__3);
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 225
if(c_rt_lib0check_true_native(___nl__2)){ goto label_53;}
#line 226
c_rt_lib0move(&___nl__3, nparser_priv0parse_hash_key(___ref___0));
#line 227
c_rt_lib0move(&___nl__4,___get_global_const(254));
#line 227
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 227
c_rt_lib0clear(&___nl__4);
#line 228
c_rt_lib0move(&___nl__6, nparser_priv0parse_expr(___ref___0));
#line 228
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 228
if(c_rt_lib0check_true_native(___nl__5)){ goto label_30;}
#line 228
c_rt_lib0clear(&___nl__1);
#line 228
c_rt_lib0clear(&___nl__2);
#line 228
c_rt_lib0clear(&___nl__3);
#line 228
c_rt_lib0clear(&___nl__4);
#line 228
c_rt_lib0clear(&___nl__5);
#line 228
return ___nl__6;
#line 228
label_30:
#line 228
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 228
c_rt_lib0clear(&___nl__5);
#line 228
c_rt_lib0clear(&___nl__6);
#line 229
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(329), ___nl__3, ___get_global_const(198), ___nl__4));
#line 229
c_rt_lib0delete(array0push(&___nl__1, ___nl__5));
#line 229
c_rt_lib0clear(&___nl__5);
#line 230
c_rt_lib0move(&___nl__6,___get_global_const(256));
#line 230
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 230
c_rt_lib0clear(&___nl__6);
#line 230
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 230
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 230
if(c_rt_lib0check_true_native(___nl__5)){ goto label_48;}
#line 230
c_rt_lib0clear(&___nl__3);
#line 230
c_rt_lib0clear(&___nl__4);
#line 230
c_rt_lib0clear(&___nl__5);
#line 230
goto label_53;
#line 230
goto label_48;
#line 230
label_48:
#line 230
c_rt_lib0clear(&___nl__5);
#line 230
c_rt_lib0clear(&___nl__3);
#line 230
c_rt_lib0clear(&___nl__4);
#line 231
goto label_4;
#line 231
label_53:
#line 231
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0move(&___nl__2,___get_global_const(253));
#line 232
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 232
c_rt_lib0clear(&___nl__2);
#line 233
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 233
c_rt_lib0clear(&___nl__1);
#line 233
return ___nl__2;
#line 233
c_rt_lib0clear(&___nl__2);
#line 233
c_rt_lib0clear(&___nl__1);
#line 233
return NULL;
}

ImmT nparser_priv0parse_arr(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 237
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 238
c_rt_lib0move(&___nl__2,___get_global_const(258));
#line 238
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 238
c_rt_lib0clear(&___nl__2);
#line 239
label_4:
#line 239
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 239
c_rt_lib0move(&___nl__4,___get_global_const(259));
#line 239
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 239
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 239
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 239
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0clear(&___nl__3);
#line 239
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 239
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 239
if(c_rt_lib0check_true_native(___nl__2)){ goto label_44;}
#line 240
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 240
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 240
if(c_rt_lib0check_true_native(___nl__4)){ goto label_25;}
#line 240
c_rt_lib0clear(&___nl__1);
#line 240
c_rt_lib0clear(&___nl__2);
#line 240
c_rt_lib0clear(&___nl__3);
#line 240
c_rt_lib0clear(&___nl__4);
#line 240
return ___nl__5;
#line 240
label_25:
#line 240
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 240
c_rt_lib0clear(&___nl__4);
#line 240
c_rt_lib0clear(&___nl__5);
#line 241
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 242
c_rt_lib0move(&___nl__5,___get_global_const(256));
#line 242
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 242
c_rt_lib0clear(&___nl__5);
#line 242
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 242
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 242
if(c_rt_lib0check_true_native(___nl__4)){ goto label_40;}
#line 242
c_rt_lib0clear(&___nl__3);
#line 242
c_rt_lib0clear(&___nl__4);
#line 242
goto label_44;
#line 242
goto label_40;
#line 242
label_40:
#line 242
c_rt_lib0clear(&___nl__4);
#line 242
c_rt_lib0clear(&___nl__3);
#line 243
goto label_4;
#line 243
label_44:
#line 243
c_rt_lib0clear(&___nl__2);
#line 244
c_rt_lib0move(&___nl__2,___get_global_const(259));
#line 244
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 244
c_rt_lib0clear(&___nl__2);
#line 245
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 245
c_rt_lib0clear(&___nl__1);
#line 245
return ___nl__2;
#line 245
c_rt_lib0clear(&___nl__2);
#line 245
c_rt_lib0clear(&___nl__1);
#line 245
return NULL;
}

ImmT nparser_priv0parse_expr(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 249
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 249
c_rt_lib0move(&___nl__3, nparser_priv0parse_expr_rec(___ref___0, ___nl__4));
#line 249
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(48)));
#line 249
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 249
c_rt_lib0clear(&___nl__1);
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
return ___nl__3;
#line 249
label_8:
#line 249
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(48)));
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
c_rt_lib0clear(&___nl__3);
#line 250
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 250
c_rt_lib0move(&___nl__2, nparser_priv0parse_expr_rec_left(___ref___0, ___nl__1, ___nl__3));
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
return ___nl__2;
#line 250
c_rt_lib0clear(&___nl__2);
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
return NULL;
}

ImmT nparser_priv0parse_type(ImmT * ___ref___0) {
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
#line 254
c_rt_lib0move(&___nl__2,___get_global_const(933));
#line 254
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 254
c_rt_lib0move(&___nl__1, ntokenizer0get_place(&___nl__2));
#line 254
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 254
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 254
c_rt_lib0clear(&___nl__3);
#line 254
c_rt_lib0clear(&___nl__2);
#line 255
c_rt_lib0move(&___nl__3,___get_global_const(267));
#line 255
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 255
c_rt_lib0clear(&___nl__3);
#line 255
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 255
if(c_rt_lib0check_true_native(___nl__2)){ goto label_60;}
#line 256
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 256
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 256
c_rt_lib0move(&___nl__3, ntokenizer0get_place(&___nl__4));
#line 256
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 256
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 256
c_rt_lib0clear(&___nl__5);
#line 256
c_rt_lib0clear(&___nl__4);
#line 257
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_label(___ref___0));
#line 257
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(859), ___nl__4));
#line 258
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 258
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 258
c_rt_lib0move(&___nl__5, ntokenizer0get_place(&___nl__6));
#line 258
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 258
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 258
c_rt_lib0clear(&___nl__7);
#line 258
c_rt_lib0clear(&___nl__6);
#line 262
c_rt_lib0move(&___nl__9,___get_global_const(933));
#line 262
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 262
c_rt_lib0move(&___nl__8, ntokenizer0get_place(&___nl__9));
#line 262
c_rt_lib0move(&___nl__10,___get_global_const(933));
#line 262
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__10, ___nl__9));
#line 262
c_rt_lib0clear(&___nl__10);
#line 262
c_rt_lib0clear(&___nl__9);
#line 262
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__1, ___get_global_const(906), ___nl__8));
#line 262
c_rt_lib0clear(&___nl__8);
#line 264
c_rt_lib0move(&___nl__9,___get_global_const(267));
#line 264
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__3, ___get_global_const(906), ___nl__5));
#line 264
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__11, ___get_global_const(192), ___nl__4));
#line 264
c_rt_lib0clear(&___nl__11);
#line 264
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(443), ___nl__9, ___get_global_const(198), ___nl__10));
#line 264
c_rt_lib0clear(&___nl__9);
#line 264
c_rt_lib0clear(&___nl__10);
#line 264
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(858), ___nl__8));
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__7, ___get_global_const(192), ___nl__8));
#line 264
c_rt_lib0clear(&___nl__7);
#line 264
c_rt_lib0clear(&___nl__8);
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__6));
#line 264
c_rt_lib0clear(&___nl__1);
#line 264
c_rt_lib0clear(&___nl__2);
#line 264
c_rt_lib0clear(&___nl__3);
#line 264
c_rt_lib0clear(&___nl__4);
#line 264
c_rt_lib0clear(&___nl__5);
#line 264
return ___nl__6;
#line 264
c_rt_lib0clear(&___nl__6);
#line 264
c_rt_lib0clear(&___nl__3);
#line 264
c_rt_lib0clear(&___nl__4);
#line 264
c_rt_lib0clear(&___nl__5);
#line 266
goto label_60;
#line 266
label_60:
#line 266
c_rt_lib0clear(&___nl__2);
#line 267
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 267
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 267
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 267
c_rt_lib0move(&___nl__2, ntokenizer0is_type(&___nl__3, ___nl__4));
#line 267
c_rt_lib0clear(&___nl__4);
#line 267
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 267
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 267
c_rt_lib0clear(&___nl__4);
#line 267
c_rt_lib0clear(&___nl__3);
#line 267
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 267
if(c_rt_lib0check_true_native(___nl__2)){ goto label_112;}
#line 268
c_rt_lib0move(&___nl__5, nparser_priv0parse_label(___ref___0));
#line 268
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 268
if(c_rt_lib0check_true_native(___nl__4)){ goto label_81;}
#line 268
c_rt_lib0clear(&___nl__1);
#line 268
c_rt_lib0clear(&___nl__2);
#line 268
c_rt_lib0clear(&___nl__3);
#line 268
c_rt_lib0clear(&___nl__4);
#line 268
return ___nl__5;
#line 268
label_81:
#line 268
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 268
c_rt_lib0clear(&___nl__4);
#line 268
c_rt_lib0clear(&___nl__5);
#line 269
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(812)));
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 269
if(c_rt_lib0check_true_native(___nl__4)){ goto label_108;}
#line 269
c_rt_lib0move(&___nl__8,___get_global_const(933));
#line 269
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 269
c_rt_lib0move(&___nl__7, ntokenizer0get_place(&___nl__8));
#line 269
c_rt_lib0move(&___nl__9,___get_global_const(933));
#line 269
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__8));
#line 269
c_rt_lib0clear(&___nl__9);
#line 269
c_rt_lib0clear(&___nl__8);
#line 269
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__1, ___get_global_const(906), ___nl__7));
#line 269
c_rt_lib0clear(&___nl__7);
#line 269
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__6, ___get_global_const(192), ___nl__3));
#line 269
c_rt_lib0clear(&___nl__6);
#line 269
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__5));
#line 269
c_rt_lib0clear(&___nl__1);
#line 269
c_rt_lib0clear(&___nl__2);
#line 269
c_rt_lib0clear(&___nl__3);
#line 269
c_rt_lib0clear(&___nl__4);
#line 269
return ___nl__5;
#line 269
c_rt_lib0clear(&___nl__5);
#line 269
goto label_108;
#line 269
label_108:
#line 269
c_rt_lib0clear(&___nl__4);
#line 269
c_rt_lib0clear(&___nl__3);
#line 270
goto label_112;
#line 270
label_112:
#line 270
c_rt_lib0clear(&___nl__2);
#line 271
c_rt_lib0move(&___nl__2,___get_global_const(957));
#line 271
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 271
c_rt_lib0clear(&___nl__2);
#line 272
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 272
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 272
c_rt_lib0move(&___nl__4, ntokenizer0get_place(&___nl__5));
#line 272
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 272
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 272
c_rt_lib0clear(&___nl__6);
#line 272
c_rt_lib0clear(&___nl__5);
#line 272
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__1, ___get_global_const(906), ___nl__4));
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(831)));
#line 272
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__3, ___get_global_const(192), ___nl__4));
#line 272
c_rt_lib0clear(&___nl__3);
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__2));
#line 272
c_rt_lib0clear(&___nl__1);
#line 272
return ___nl__2;
#line 272
c_rt_lib0clear(&___nl__2);
#line 272
c_rt_lib0clear(&___nl__1);
#line 272
return NULL;
}

ImmT nparser_priv0parse_expr_rec_left(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
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
#line 276
label_0:
#line 278
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 278
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 278
c_rt_lib0move(&___nl__4, ntokenizer0get_place(&___nl__5));
#line 278
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 278
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 278
c_rt_lib0clear(&___nl__6);
#line 278
c_rt_lib0clear(&___nl__5);
#line 279
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 279
c_rt_lib0move(&___nl__5, ntokenizer0get_token(&___nl__6));
#line 279
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 279
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0clear(&___nl__6);
#line 281
c_rt_lib0move(&___nl__8, nast0get_ternary_ops());
#line 281
c_rt_lib0move(&___nl__7, hash0has_key(___nl__8, ___nl__5));
#line 281
c_rt_lib0clear(&___nl__8);
#line 281
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 281
if(c_rt_lib0check_true_native(___nl__7)){ goto label_133;}
#line 282
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 283
c_rt_lib0move(&___nl__8,___get_global_const(877));
#line 283
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__6, ___nl__8));
#line 283
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 283
if(c_rt_lib0check_true_native(___nl__8)){ goto label_115;}
#line 284
c_rt_lib0move(&___nl__10, nast0get_ternary_ops());
#line 284
c_rt_lib0move(&___nl__11,___get_global_const(877));
#line 284
c_rt_lib0move(&___nl__9, hash0get_value(___nl__10, ___nl__11));
#line 284
c_rt_lib0clear(&___nl__11);
#line 284
c_rt_lib0clear(&___nl__10);
#line 285
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(874)));
#line 285
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__10, ___nl__2));
#line 285
if(c_rt_lib0check_true_native(___nl__10)){ goto label_41;}
#line 285
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(874)));
#line 285
c_rt_lib0move(&___nl__10, c_rt_lib0num_eq(___nl__10, ___nl__2));
#line 285
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 285
if(c_rt_lib0check_true_native(___nl__11)){ goto label_39;}
#line 285
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(875)));
#line 285
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(230)));
#line 285
label_39:
#line 285
c_rt_lib0clear(&___nl__11);
#line 285
label_41:
#line 285
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 285
if(c_rt_lib0check_true_native(___nl__10)){ goto label_58;}
#line 285
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 285
c_rt_lib0clear(&___nl__1);
#line 285
c_rt_lib0clear(&___nl__2);
#line 285
c_rt_lib0clear(&___nl__3);
#line 285
c_rt_lib0clear(&___nl__4);
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
c_rt_lib0clear(&___nl__10);
#line 285
return ___nl__11;
#line 285
c_rt_lib0clear(&___nl__11);
#line 285
goto label_58;
#line 285
label_58:
#line 285
c_rt_lib0clear(&___nl__10);
#line 286
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__6));
#line 287
c_rt_lib0move(&___nl__12, nparser_priv0parse_expr(___ref___0));
#line 287
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__12, ___get_global_const(48)));
#line 287
if(c_rt_lib0check_true_native(___nl__11)){ goto label_76;}
#line 287
c_rt_lib0clear(&___nl__1);
#line 287
c_rt_lib0clear(&___nl__2);
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0clear(&___nl__4);
#line 287
c_rt_lib0clear(&___nl__5);
#line 287
c_rt_lib0clear(&___nl__6);
#line 287
c_rt_lib0clear(&___nl__7);
#line 287
c_rt_lib0clear(&___nl__8);
#line 287
c_rt_lib0clear(&___nl__9);
#line 287
c_rt_lib0clear(&___nl__10);
#line 287
c_rt_lib0clear(&___nl__11);
#line 287
return ___nl__12;
#line 287
label_76:
#line 287
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__12, ___get_global_const(48)));
#line 287
c_rt_lib0clear(&___nl__11);
#line 287
c_rt_lib0clear(&___nl__12);
#line 288
c_rt_lib0move(&___nl__11,___get_global_const(417));
#line 288
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__11));
#line 288
c_rt_lib0clear(&___nl__11);
#line 289
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(874)));
#line 289
c_rt_lib0move(&___nl__13, nparser_priv0parse_expr_rec(___ref___0, ___nl__14));
#line 289
c_rt_lib0clear(&___nl__14);
#line 289
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__13, ___get_global_const(48)));
#line 289
if(c_rt_lib0check_true_native(___nl__12)){ goto label_101;}
#line 289
c_rt_lib0clear(&___nl__1);
#line 289
c_rt_lib0clear(&___nl__2);
#line 289
c_rt_lib0clear(&___nl__3);
#line 289
c_rt_lib0clear(&___nl__4);
#line 289
c_rt_lib0clear(&___nl__5);
#line 289
c_rt_lib0clear(&___nl__6);
#line 289
c_rt_lib0clear(&___nl__7);
#line 289
c_rt_lib0clear(&___nl__8);
#line 289
c_rt_lib0clear(&___nl__9);
#line 289
c_rt_lib0clear(&___nl__10);
#line 289
c_rt_lib0clear(&___nl__11);
#line 289
c_rt_lib0clear(&___nl__12);
#line 289
return ___nl__13;
#line 289
label_101:
#line 289
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__13, ___get_global_const(48)));
#line 289
c_rt_lib0clear(&___nl__12);
#line 289
c_rt_lib0clear(&___nl__13);
#line 290
c_rt_lib0move(&___nl__13,___get_global_const(877));
#line 290
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(4, ___get_global_const(862), ___nl__1, ___get_global_const(863), ___nl__10, ___get_global_const(864), ___nl__11, ___get_global_const(443), ___nl__13));
#line 290
c_rt_lib0clear(&___nl__13);
#line 290
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(854), ___nl__12));
#line 290
c_rt_lib0copy(&___nl__3, ___nl__12);
#line 290
c_rt_lib0clear(&___nl__12);
#line 290
c_rt_lib0clear(&___nl__9);
#line 290
c_rt_lib0clear(&___nl__10);
#line 290
c_rt_lib0clear(&___nl__11);
#line 291
goto label_130;
#line 291
label_115:
#line 292
c_rt_lib0move(&___nl__9,___get_global_const(958));
#line 292
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 292
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__9));
#line 292
c_rt_lib0clear(&___nl__1);
#line 292
c_rt_lib0clear(&___nl__2);
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0clear(&___nl__5);
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
#line 293
goto label_130;
#line 293
label_130:
#line 293
c_rt_lib0clear(&___nl__8);
#line 294
goto label_363;
#line 294
label_133:
#line 294
c_rt_lib0move(&___nl__8, nast0get_bin_ops());
#line 294
c_rt_lib0move(&___nl__7, hash0has_key(___nl__8, ___nl__5));
#line 294
c_rt_lib0clear(&___nl__8);
#line 294
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 294
if(c_rt_lib0check_true_native(___nl__7)){ goto label_261;}
#line 295
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 296
c_rt_lib0move(&___nl__9, nast0get_bin_ops());
#line 296
c_rt_lib0move(&___nl__8, hash0get_value(___nl__9, ___nl__5));
#line 296
c_rt_lib0clear(&___nl__9);
#line 297
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(874)));
#line 297
c_rt_lib0move(&___nl__9, c_rt_lib0lt(___nl__9, ___nl__2));
#line 297
if(c_rt_lib0check_true_native(___nl__9)){ goto label_154;}
#line 297
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(874)));
#line 297
c_rt_lib0move(&___nl__9, c_rt_lib0num_eq(___nl__9, ___nl__2));
#line 297
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__9));
#line 297
if(c_rt_lib0check_true_native(___nl__10)){ goto label_152;}
#line 297
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(875)));
#line 297
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(230)));
#line 297
label_152:
#line 297
c_rt_lib0clear(&___nl__10);
#line 297
label_154:
#line 297
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 297
if(c_rt_lib0check_true_native(___nl__9)){ goto label_170;}
#line 297
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 297
c_rt_lib0clear(&___nl__1);
#line 297
c_rt_lib0clear(&___nl__2);
#line 297
c_rt_lib0clear(&___nl__3);
#line 297
c_rt_lib0clear(&___nl__4);
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
return ___nl__10;
#line 297
c_rt_lib0clear(&___nl__10);
#line 297
goto label_170;
#line 297
label_170:
#line 297
c_rt_lib0clear(&___nl__9);
#line 298
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 299
c_rt_lib0move(&___nl__9,___get_global_const(850));
#line 299
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__6, ___nl__9));
#line 299
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 299
if(c_rt_lib0check_true_native(___nl__9)){ goto label_184;}
#line 300
c_rt_lib0move(&___nl__11, nparser_priv0parse_hash_key(___ref___0));
#line 300
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(3, ___get_global_const(443), ___nl__6, ___get_global_const(230), ___nl__1, ___get_global_const(231), ___nl__11));
#line 300
c_rt_lib0clear(&___nl__11);
#line 300
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(208), ___nl__10));
#line 300
c_rt_lib0copy(&___nl__3, ___nl__10);
#line 300
c_rt_lib0clear(&___nl__10);
#line 301
goto label_257;
#line 301
label_184:
#line 301
c_rt_lib0move(&___nl__9,___get_global_const(886));
#line 301
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__6, ___nl__9));
#line 301
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 301
if(c_rt_lib0check_true_native(___nl__9)){ goto label_201;}
#line 302
c_rt_lib0move(&___nl__10,___get_global_const(417));
#line 302
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__10));
#line 302
c_rt_lib0clear(&___nl__10);
#line 303
c_rt_lib0move(&___nl__10, nparser_priv0parse_variant_label(___ref___0));
#line 304
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(210)));
#line 304
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(443), ___nl__12, ___get_global_const(230), ___nl__1, ___get_global_const(902), ___nl__10));
#line 304
c_rt_lib0clear(&___nl__12);
#line 304
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(857), ___nl__11));
#line 304
c_rt_lib0copy(&___nl__3, ___nl__11);
#line 304
c_rt_lib0clear(&___nl__11);
#line 304
c_rt_lib0clear(&___nl__10);
#line 305
goto label_257;
#line 305
label_201:
#line 305
c_rt_lib0move(&___nl__9,___get_global_const(884));
#line 305
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__6, ___nl__9));
#line 305
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 305
if(c_rt_lib0check_true_native(___nl__9)){ goto label_218;}
#line 306
c_rt_lib0move(&___nl__10,___get_global_const(417));
#line 306
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__10));
#line 306
c_rt_lib0clear(&___nl__10);
#line 307
c_rt_lib0move(&___nl__10, nparser_priv0parse_variant_label(___ref___0));
#line 308
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(209)));
#line 308
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(443), ___nl__12, ___get_global_const(230), ___nl__1, ___get_global_const(902), ___nl__10));
#line 308
c_rt_lib0clear(&___nl__12);
#line 308
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(857), ___nl__11));
#line 308
c_rt_lib0copy(&___nl__3, ___nl__11);
#line 308
c_rt_lib0clear(&___nl__11);
#line 308
c_rt_lib0clear(&___nl__10);
#line 309
goto label_257;
#line 309
label_218:
#line 310
c_rt_lib0move(&___nl__10,___get_global_const(865));
#line 310
c_rt_lib0move(&___nl__10, c_rt_lib0eq(___nl__6, ___nl__10));
#line 310
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 310
if(c_rt_lib0check_true_native(___nl__10)){ goto label_225;}
#line 310
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___0, ___nl__1));
#line 310
goto label_225;
#line 310
label_225:
#line 310
c_rt_lib0clear(&___nl__10);
#line 311
c_rt_lib0move(&___nl__14, nast0get_bin_ops());
#line 311
c_rt_lib0move(&___nl__13, hash0get_value(___nl__14, ___nl__6));
#line 311
c_rt_lib0clear(&___nl__14);
#line 311
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(874)));
#line 311
c_rt_lib0move(&___nl__12, nparser_priv0parse_expr_rec(___ref___0, ___nl__13));
#line 311
c_rt_lib0clear(&___nl__13);
#line 311
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__12, ___get_global_const(48)));
#line 311
if(c_rt_lib0check_true_native(___nl__11)){ goto label_247;}
#line 311
c_rt_lib0clear(&___nl__1);
#line 311
c_rt_lib0clear(&___nl__2);
#line 311
c_rt_lib0clear(&___nl__3);
#line 311
c_rt_lib0clear(&___nl__4);
#line 311
c_rt_lib0clear(&___nl__5);
#line 311
c_rt_lib0clear(&___nl__6);
#line 311
c_rt_lib0clear(&___nl__7);
#line 311
c_rt_lib0clear(&___nl__8);
#line 311
c_rt_lib0clear(&___nl__9);
#line 311
c_rt_lib0clear(&___nl__10);
#line 311
c_rt_lib0clear(&___nl__11);
#line 311
return ___nl__12;
#line 311
label_247:
#line 311
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__12, ___get_global_const(48)));
#line 311
c_rt_lib0clear(&___nl__11);
#line 311
c_rt_lib0clear(&___nl__12);
#line 312
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(230), ___nl__1, ___get_global_const(443), ___nl__6, ___get_global_const(231), ___nl__10));
#line 312
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(208), ___nl__11));
#line 312
c_rt_lib0copy(&___nl__3, ___nl__11);
#line 312
c_rt_lib0clear(&___nl__11);
#line 312
c_rt_lib0clear(&___nl__10);
#line 313
goto label_257;
#line 313
label_257:
#line 313
c_rt_lib0clear(&___nl__9);
#line 313
c_rt_lib0clear(&___nl__8);
#line 314
goto label_363;
#line 314
label_261:
#line 314
c_rt_lib0move(&___nl__8,___get_global_const(258));
#line 314
c_rt_lib0move(&___nl__7, nparser_priv0try_eat(___ref___0, ___nl__8));
#line 314
c_rt_lib0clear(&___nl__8);
#line 314
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 314
if(c_rt_lib0check_true_native(___nl__7)){ goto label_296;}
#line 315
c_rt_lib0move(&___nl__8,___get_global_const(851));
#line 315
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 315
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0move(&___nl__10, nparser_priv0parse_expr(___ref___0));
#line 316
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(48)));
#line 316
if(c_rt_lib0check_true_native(___nl__9)){ goto label_283;}
#line 316
c_rt_lib0clear(&___nl__1);
#line 316
c_rt_lib0clear(&___nl__2);
#line 316
c_rt_lib0clear(&___nl__3);
#line 316
c_rt_lib0clear(&___nl__4);
#line 316
c_rt_lib0clear(&___nl__5);
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
label_283:
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__10, ___get_global_const(48)));
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
c_rt_lib0clear(&___nl__10);
#line 317
c_rt_lib0move(&___nl__9,___get_global_const(259));
#line 317
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__9));
#line 317
c_rt_lib0clear(&___nl__9);
#line 318
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(443), ___nl__6, ___get_global_const(230), ___nl__1, ___get_global_const(231), ___nl__8));
#line 318
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(208), ___nl__9));
#line 318
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 318
c_rt_lib0clear(&___nl__9);
#line 318
c_rt_lib0clear(&___nl__8);
#line 319
goto label_363;
#line 319
label_296:
#line 319
c_rt_lib0move(&___nl__8,___get_global_const(252));
#line 319
c_rt_lib0move(&___nl__7, nparser_priv0try_eat(___ref___0, ___nl__8));
#line 319
c_rt_lib0clear(&___nl__8);
#line 319
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 319
if(c_rt_lib0check_true_native(___nl__7)){ goto label_331;}
#line 320
c_rt_lib0move(&___nl__8,___get_global_const(852));
#line 320
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 320
c_rt_lib0clear(&___nl__8);
#line 321
c_rt_lib0move(&___nl__10, nparser_priv0parse_expr(___ref___0));
#line 321
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(48)));
#line 321
if(c_rt_lib0check_true_native(___nl__9)){ goto label_318;}
#line 321
c_rt_lib0clear(&___nl__1);
#line 321
c_rt_lib0clear(&___nl__2);
#line 321
c_rt_lib0clear(&___nl__3);
#line 321
c_rt_lib0clear(&___nl__4);
#line 321
c_rt_lib0clear(&___nl__5);
#line 321
c_rt_lib0clear(&___nl__6);
#line 321
c_rt_lib0clear(&___nl__7);
#line 321
c_rt_lib0clear(&___nl__8);
#line 321
c_rt_lib0clear(&___nl__9);
#line 321
return ___nl__10;
#line 321
label_318:
#line 321
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__10, ___get_global_const(48)));
#line 321
c_rt_lib0clear(&___nl__9);
#line 321
c_rt_lib0clear(&___nl__10);
#line 322
c_rt_lib0move(&___nl__9,___get_global_const(253));
#line 322
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__9));
#line 322
c_rt_lib0clear(&___nl__9);
#line 323
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(443), ___nl__6, ___get_global_const(230), ___nl__1, ___get_global_const(231), ___nl__8));
#line 323
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(208), ___nl__9));
#line 323
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 323
c_rt_lib0clear(&___nl__9);
#line 323
c_rt_lib0clear(&___nl__8);
#line 324
goto label_363;
#line 324
label_331:
#line 324
c_rt_lib0move(&___nl__8,___get_global_const(880));
#line 324
c_rt_lib0move(&___nl__7, nparser_priv0try_eat(___ref___0, ___nl__8));
#line 324
c_rt_lib0clear(&___nl__8);
#line 324
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 324
if(c_rt_lib0check_true_native(___nl__7)){ goto label_341;}
#line 325
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(860), ___nl__1));
#line 325
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 325
c_rt_lib0clear(&___nl__8);
#line 326
goto label_363;
#line 326
label_341:
#line 326
c_rt_lib0move(&___nl__8,___get_global_const(165));
#line 326
c_rt_lib0move(&___nl__7, nparser_priv0try_eat(___ref___0, ___nl__8));
#line 326
c_rt_lib0clear(&___nl__8);
#line 326
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 326
if(c_rt_lib0check_true_native(___nl__7)){ goto label_351;}
#line 327
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(861), ___nl__1));
#line 327
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 327
c_rt_lib0clear(&___nl__8);
#line 328
goto label_363;
#line 328
label_351:
#line 329
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 329
c_rt_lib0clear(&___nl__1);
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0clear(&___nl__3);
#line 329
c_rt_lib0clear(&___nl__4);
#line 329
c_rt_lib0clear(&___nl__5);
#line 329
c_rt_lib0clear(&___nl__6);
#line 329
c_rt_lib0clear(&___nl__7);
#line 329
return ___nl__8;
#line 329
c_rt_lib0clear(&___nl__8);
#line 330
goto label_363;
#line 330
label_363:
#line 330
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0move(&___nl__10,___get_global_const(933));
#line 331
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___0, ___nl__10));
#line 331
c_rt_lib0move(&___nl__9, ntokenizer0get_place(&___nl__10));
#line 331
c_rt_lib0move(&___nl__11,___get_global_const(933));
#line 331
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__10));
#line 331
c_rt_lib0clear(&___nl__11);
#line 331
c_rt_lib0clear(&___nl__10);
#line 331
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__4, ___get_global_const(906), ___nl__9));
#line 331
c_rt_lib0clear(&___nl__9);
#line 331
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__8, ___get_global_const(192), ___nl__3));
#line 331
c_rt_lib0clear(&___nl__8);
#line 331
c_rt_lib0copy(&___nl__1, ___nl__7);
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0clear(&___nl__3);
#line 331
c_rt_lib0clear(&___nl__4);
#line 331
c_rt_lib0clear(&___nl__5);
#line 331
c_rt_lib0clear(&___nl__6);
#line 276
goto label_0;
#line 333
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 333
nl_die_arg(___nl__3);
#line 333
c_rt_lib0clear(&___nl__3);
#line 333
c_rt_lib0clear(&___nl__1);
#line 333
c_rt_lib0clear(&___nl__2);
#line 333
return NULL;
}

ImmT nparser_priv0parse_expr_rec(ImmT * ___ref___0,ImmT ___nl__1) {
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
#line 338
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 338
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 338
c_rt_lib0move(&___nl__3, ntokenizer0get_place(&___nl__4));
#line 338
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 338
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 338
c_rt_lib0clear(&___nl__5);
#line 338
c_rt_lib0clear(&___nl__4);
#line 339
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 339
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 339
c_rt_lib0clear(&___nl__5);
#line 339
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 339
if(c_rt_lib0check_true_native(___nl__4)){ goto label_34;}
#line 340
c_rt_lib0move(&___nl__7, nparser_priv0parse_expr(___ref___0));
#line 340
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(48)));
#line 340
if(c_rt_lib0check_true_native(___nl__6)){ goto label_22;}
#line 340
c_rt_lib0clear(&___nl__1);
#line 340
c_rt_lib0clear(&___nl__2);
#line 340
c_rt_lib0clear(&___nl__3);
#line 340
c_rt_lib0clear(&___nl__4);
#line 340
c_rt_lib0clear(&___nl__5);
#line 340
c_rt_lib0clear(&___nl__6);
#line 340
return ___nl__7;
#line 340
label_22:
#line 340
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__7, ___get_global_const(48)));
#line 340
c_rt_lib0clear(&___nl__6);
#line 340
c_rt_lib0clear(&___nl__7);
#line 341
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(855), ___nl__5));
#line 341
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 341
c_rt_lib0clear(&___nl__6);
#line 342
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 342
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__6));
#line 342
c_rt_lib0clear(&___nl__6);
#line 342
c_rt_lib0clear(&___nl__5);
#line 343
goto label_478;
#line 343
label_34:
#line 343
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 343
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 343
c_rt_lib0move(&___nl__6,___get_global_const(252));
#line 343
c_rt_lib0move(&___nl__4, ntokenizer0next_is(&___nl__5, ___nl__6));
#line 343
c_rt_lib0clear(&___nl__6);
#line 343
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 343
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 343
c_rt_lib0clear(&___nl__6);
#line 343
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 343
if(c_rt_lib0check_true_native(___nl__4)){ goto label_65;}
#line 344
c_rt_lib0move(&___nl__7, nparser_priv0parse_hash(___ref___0));
#line 344
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(48)));
#line 344
if(c_rt_lib0check_true_native(___nl__6)){ goto label_56;}
#line 344
c_rt_lib0clear(&___nl__1);
#line 344
c_rt_lib0clear(&___nl__2);
#line 344
c_rt_lib0clear(&___nl__3);
#line 344
c_rt_lib0clear(&___nl__4);
#line 344
c_rt_lib0clear(&___nl__5);
#line 344
c_rt_lib0clear(&___nl__6);
#line 344
return ___nl__7;
#line 344
label_56:
#line 344
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__7, ___get_global_const(48)));
#line 344
c_rt_lib0clear(&___nl__6);
#line 344
c_rt_lib0clear(&___nl__7);
#line 345
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(205), ___nl__5));
#line 345
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 345
c_rt_lib0clear(&___nl__6);
#line 345
c_rt_lib0clear(&___nl__5);
#line 346
goto label_478;
#line 346
label_65:
#line 346
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 346
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 346
c_rt_lib0move(&___nl__6,___get_global_const(258));
#line 346
c_rt_lib0move(&___nl__4, ntokenizer0next_is(&___nl__5, ___nl__6));
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 346
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0clear(&___nl__5);
#line 346
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 346
if(c_rt_lib0check_true_native(___nl__4)){ goto label_96;}
#line 347
c_rt_lib0move(&___nl__7, nparser_priv0parse_arr(___ref___0));
#line 347
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(48)));
#line 347
if(c_rt_lib0check_true_native(___nl__6)){ goto label_87;}
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
label_87:
#line 347
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__7, ___get_global_const(48)));
#line 347
c_rt_lib0clear(&___nl__6);
#line 347
c_rt_lib0clear(&___nl__7);
#line 348
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(204), ___nl__5));
#line 348
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0clear(&___nl__5);
#line 349
goto label_478;
#line 349
label_96:
#line 349
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 349
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 349
c_rt_lib0move(&___nl__6,___get_global_const(417));
#line 349
c_rt_lib0move(&___nl__4, ntokenizer0next_is(&___nl__5, ___nl__6));
#line 349
c_rt_lib0clear(&___nl__6);
#line 349
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 349
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 349
c_rt_lib0clear(&___nl__6);
#line 349
c_rt_lib0clear(&___nl__5);
#line 349
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 349
if(c_rt_lib0check_true_native(___nl__4)){ goto label_127;}
#line 350
c_rt_lib0move(&___nl__7, nparser_priv0parse_variant(___ref___0));
#line 350
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(48)));
#line 350
if(c_rt_lib0check_true_native(___nl__6)){ goto label_118;}
#line 350
c_rt_lib0clear(&___nl__1);
#line 350
c_rt_lib0clear(&___nl__2);
#line 350
c_rt_lib0clear(&___nl__3);
#line 350
c_rt_lib0clear(&___nl__4);
#line 350
c_rt_lib0clear(&___nl__5);
#line 350
c_rt_lib0clear(&___nl__6);
#line 350
return ___nl__7;
#line 350
label_118:
#line 350
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__7, ___get_global_const(48)));
#line 350
c_rt_lib0clear(&___nl__6);
#line 350
c_rt_lib0clear(&___nl__7);
#line 351
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(841), ___nl__5));
#line 351
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 351
c_rt_lib0clear(&___nl__6);
#line 351
c_rt_lib0clear(&___nl__5);
#line 352
goto label_478;
#line 352
label_127:
#line 352
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 352
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 352
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(959)));
#line 352
c_rt_lib0move(&___nl__4, ntokenizer0is_type(&___nl__5, ___nl__6));
#line 352
c_rt_lib0clear(&___nl__6);
#line 352
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 352
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 352
c_rt_lib0clear(&___nl__6);
#line 352
c_rt_lib0clear(&___nl__5);
#line 352
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 352
if(c_rt_lib0check_true_native(___nl__4)){ goto label_152;}
#line 353
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 353
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 353
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(959)));
#line 353
c_rt_lib0move(&___nl__5, ntokenizer0eat_type(&___nl__6, ___nl__7));
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 353
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
c_rt_lib0clear(&___nl__6);
#line 353
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(196), ___nl__5));
#line 353
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 353
c_rt_lib0clear(&___nl__5);
#line 354
goto label_478;
#line 354
label_152:
#line 354
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 354
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 354
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(960)));
#line 354
c_rt_lib0move(&___nl__4, ntokenizer0is_type(&___nl__5, ___nl__6));
#line 354
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 354
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 354
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0clear(&___nl__5);
#line 354
if(c_rt_lib0check_true_native(___nl__4)){ goto label_172;}
#line 354
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 354
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 354
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(771)));
#line 354
c_rt_lib0move(&___nl__4, ntokenizer0is_type(&___nl__5, ___nl__6));
#line 354
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 354
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 354
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0clear(&___nl__5);
#line 354
label_172:
#line 354
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 354
if(c_rt_lib0check_true_native(___nl__4)){ goto label_258;}
#line 355
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 355
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(1, ___get_global_const(327), ___nl__6));
#line 355
c_rt_lib0clear(&___nl__6);
#line 356
label_178:
#line 356
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 356
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 356
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(960)));
#line 356
c_rt_lib0move(&___nl__6, ntokenizer0is_type(&___nl__7, ___nl__8));
#line 356
c_rt_lib0clear(&___nl__8);
#line 356
c_rt_lib0move(&___nl__8,___get_global_const(933));
#line 356
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__7));
#line 356
c_rt_lib0clear(&___nl__8);
#line 356
c_rt_lib0clear(&___nl__7);
#line 356
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 356
if(c_rt_lib0check_true_native(___nl__6)){ goto label_208;}
#line 357
c_rt_lib0move(&___nl__7,___get_global_const(327));
#line 357
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(___nl__5, ___nl__7));
#line 357
c_rt_lib0move(&___nl__9,___get_global_const(933));
#line 357
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 357
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(960)));
#line 357
c_rt_lib0move(&___nl__8, ntokenizer0eat_type(&___nl__9, ___nl__10));
#line 357
c_rt_lib0clear(&___nl__10);
#line 357
c_rt_lib0move(&___nl__10,___get_global_const(933));
#line 357
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__10, ___nl__9));
#line 357
c_rt_lib0clear(&___nl__10);
#line 357
c_rt_lib0clear(&___nl__9);
#line 357
c_rt_lib0delete(array0push(&___nl__7, ___nl__8));
#line 357
c_rt_lib0clear(&___nl__8);
#line 357
c_rt_lib0move(&___nl__8,___get_global_const(327));
#line 357
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__8, ___nl__7));
#line 357
c_rt_lib0clear(&___nl__8);
#line 357
c_rt_lib0clear(&___nl__7);
#line 358
goto label_178;
#line 358
label_208:
#line 358
c_rt_lib0clear(&___nl__6);
#line 359
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 359
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 359
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(771)));
#line 359
c_rt_lib0move(&___nl__6, ntokenizer0is_type(&___nl__7, ___nl__8));
#line 359
c_rt_lib0clear(&___nl__8);
#line 359
c_rt_lib0move(&___nl__8,___get_global_const(933));
#line 359
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__7));
#line 359
c_rt_lib0clear(&___nl__8);
#line 359
c_rt_lib0clear(&___nl__7);
#line 359
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 359
if(c_rt_lib0check_true_native(___nl__6)){ goto label_244;}
#line 360
c_rt_lib0move(&___nl__7,___get_global_const(327));
#line 360
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(___nl__5, ___nl__7));
#line 360
c_rt_lib0move(&___nl__9,___get_global_const(933));
#line 360
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 360
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(771)));
#line 360
c_rt_lib0move(&___nl__8, ntokenizer0eat_type(&___nl__9, ___nl__10));
#line 360
c_rt_lib0clear(&___nl__10);
#line 360
c_rt_lib0move(&___nl__10,___get_global_const(933));
#line 360
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__10, ___nl__9));
#line 360
c_rt_lib0clear(&___nl__10);
#line 360
c_rt_lib0clear(&___nl__9);
#line 360
c_rt_lib0delete(array0push(&___nl__7, ___nl__8));
#line 360
c_rt_lib0clear(&___nl__8);
#line 360
c_rt_lib0move(&___nl__8,___get_global_const(327));
#line 360
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__8, ___nl__7));
#line 360
c_rt_lib0clear(&___nl__8);
#line 360
c_rt_lib0clear(&___nl__7);
#line 361
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(906)));
#line 361
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 361
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(908), ___nl__8);
#line 361
c_rt_lib0clear(&___nl__7);
#line 361
c_rt_lib0clear(&___nl__8);
#line 362
goto label_251;
#line 362
label_244:
#line 363
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(907)));
#line 363
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 363
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(908), ___nl__8);
#line 363
c_rt_lib0clear(&___nl__7);
#line 363
c_rt_lib0clear(&___nl__8);
#line 364
goto label_251;
#line 364
label_251:
#line 364
c_rt_lib0clear(&___nl__6);
#line 365
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(771), ___nl__5));
#line 365
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 365
c_rt_lib0clear(&___nl__6);
#line 365
c_rt_lib0clear(&___nl__5);
#line 366
goto label_478;
#line 366
label_258:
#line 366
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 366
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 366
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 366
c_rt_lib0move(&___nl__4, ntokenizer0is_type(&___nl__5, ___nl__6));
#line 366
c_rt_lib0clear(&___nl__6);
#line 366
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 366
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 366
c_rt_lib0clear(&___nl__6);
#line 366
c_rt_lib0clear(&___nl__5);
#line 366
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 366
if(c_rt_lib0check_true_native(___nl__4)){ goto label_284;}
#line 367
c_rt_lib0move(&___nl__6, nparser_priv0parse_label(___ref___0));
#line 367
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 367
if(c_rt_lib0check_true_native(___nl__5)){ goto label_279;}
#line 367
c_rt_lib0clear(&___nl__1);
#line 367
c_rt_lib0clear(&___nl__2);
#line 367
c_rt_lib0clear(&___nl__3);
#line 367
c_rt_lib0clear(&___nl__4);
#line 367
c_rt_lib0clear(&___nl__5);
#line 367
return ___nl__6;
#line 367
label_279:
#line 367
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 367
c_rt_lib0clear(&___nl__5);
#line 367
c_rt_lib0clear(&___nl__6);
#line 368
goto label_478;
#line 368
label_284:
#line 368
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 368
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 368
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(961)));
#line 368
c_rt_lib0move(&___nl__4, ntokenizer0is_type(&___nl__6, ___nl__7));
#line 368
c_rt_lib0clear(&___nl__7);
#line 368
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 368
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 368
c_rt_lib0clear(&___nl__7);
#line 368
c_rt_lib0clear(&___nl__6);
#line 368
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 368
if(c_rt_lib0check_true_native(___nl__5)){ goto label_307;}
#line 368
c_rt_lib0move(&___nl__6, nast0get_unary_ops());
#line 369
c_rt_lib0move(&___nl__8,___get_global_const(933));
#line 369
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 369
c_rt_lib0move(&___nl__7, ntokenizer0get_token(&___nl__8));
#line 369
c_rt_lib0move(&___nl__9,___get_global_const(933));
#line 369
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__8));
#line 369
c_rt_lib0clear(&___nl__9);
#line 369
c_rt_lib0clear(&___nl__8);
#line 369
c_rt_lib0move(&___nl__4, hash0has_key(___nl__6, ___nl__7));
#line 369
c_rt_lib0clear(&___nl__7);
#line 369
c_rt_lib0clear(&___nl__6);
#line 369
label_307:
#line 369
c_rt_lib0clear(&___nl__5);
#line 369
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 369
if(c_rt_lib0check_true_native(___nl__4)){ goto label_391;}
#line 370
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 370
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 370
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(961)));
#line 370
c_rt_lib0move(&___nl__5, ntokenizer0eat_type(&___nl__6, ___nl__7));
#line 370
c_rt_lib0clear(&___nl__7);
#line 370
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 370
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 370
c_rt_lib0clear(&___nl__7);
#line 370
c_rt_lib0clear(&___nl__6);
#line 372
c_rt_lib0move(&___nl__7,___get_global_const(267));
#line 372
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__5, ___nl__7));
#line 372
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 372
if(c_rt_lib0check_true_native(___nl__7)){ goto label_349;}
#line 373
c_rt_lib0move(&___nl__9,___get_global_const(933));
#line 373
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 373
c_rt_lib0move(&___nl__8, ntokenizer0get_place(&___nl__9));
#line 373
c_rt_lib0move(&___nl__10,___get_global_const(933));
#line 373
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__10, ___nl__9));
#line 373
c_rt_lib0clear(&___nl__10);
#line 373
c_rt_lib0clear(&___nl__9);
#line 374
c_rt_lib0move(&___nl__9, nparser_priv0parse_fun_label(___ref___0));
#line 374
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(859), ___nl__9));
#line 375
c_rt_lib0move(&___nl__11,___get_global_const(933));
#line 375
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___0, ___nl__11));
#line 375
c_rt_lib0move(&___nl__10, ntokenizer0get_place(&___nl__11));
#line 375
c_rt_lib0move(&___nl__12,___get_global_const(933));
#line 375
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__12, ___nl__11));
#line 375
c_rt_lib0clear(&___nl__12);
#line 375
c_rt_lib0clear(&___nl__11);
#line 377
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__8, ___get_global_const(906), ___nl__10));
#line 377
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__12, ___get_global_const(192), ___nl__9));
#line 377
c_rt_lib0clear(&___nl__12);
#line 377
c_rt_lib0copy(&___nl__6, ___nl__11);
#line 377
c_rt_lib0clear(&___nl__11);
#line 377
c_rt_lib0clear(&___nl__8);
#line 377
c_rt_lib0clear(&___nl__9);
#line 377
c_rt_lib0clear(&___nl__10);
#line 383
goto label_382;
#line 383
label_349:
#line 384
c_rt_lib0move(&___nl__11, nast0get_unary_ops());
#line 384
c_rt_lib0move(&___nl__10, hash0get_value(___nl__11, ___nl__5));
#line 384
c_rt_lib0clear(&___nl__11);
#line 384
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(874)));
#line 384
c_rt_lib0move(&___nl__9, nparser_priv0parse_expr_rec(___ref___0, ___nl__10));
#line 384
c_rt_lib0clear(&___nl__10);
#line 384
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__9, ___get_global_const(48)));
#line 384
if(c_rt_lib0check_true_native(___nl__8)){ goto label_367;}
#line 384
c_rt_lib0clear(&___nl__1);
#line 384
c_rt_lib0clear(&___nl__2);
#line 384
c_rt_lib0clear(&___nl__3);
#line 384
c_rt_lib0clear(&___nl__4);
#line 384
c_rt_lib0clear(&___nl__5);
#line 384
c_rt_lib0clear(&___nl__6);
#line 384
c_rt_lib0clear(&___nl__7);
#line 384
c_rt_lib0clear(&___nl__8);
#line 384
return ___nl__9;
#line 384
label_367:
#line 384
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__9, ___get_global_const(48)));
#line 384
c_rt_lib0clear(&___nl__8);
#line 384
c_rt_lib0clear(&___nl__9);
#line 385
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 385
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(858)));
#line 385
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 385
if(c_rt_lib0check_true_native(___nl__8)){ goto label_379;}
#line 385
c_rt_lib0move(&___nl__9,___get_global_const(962));
#line 385
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__9));
#line 385
c_rt_lib0clear(&___nl__9);
#line 385
goto label_379;
#line 385
label_379:
#line 385
c_rt_lib0clear(&___nl__8);
#line 386
goto label_382;
#line 386
label_382:
#line 386
c_rt_lib0clear(&___nl__7);
#line 387
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(443), ___nl__5, ___get_global_const(198), ___nl__6));
#line 387
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(858), ___nl__7));
#line 387
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 387
c_rt_lib0clear(&___nl__7);
#line 387
c_rt_lib0clear(&___nl__5);
#line 387
c_rt_lib0clear(&___nl__6);
#line 388
goto label_478;
#line 388
label_391:
#line 388
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 388
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 388
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(963)));
#line 388
c_rt_lib0move(&___nl__4, ntokenizer0is_type(&___nl__5, ___nl__6));
#line 388
c_rt_lib0clear(&___nl__6);
#line 388
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 388
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 388
c_rt_lib0clear(&___nl__6);
#line 388
c_rt_lib0clear(&___nl__5);
#line 388
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 388
if(c_rt_lib0check_true_native(___nl__4)){ goto label_457;}
#line 389
c_rt_lib0move(&___nl__6,___get_global_const(964));
#line 389
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 389
c_rt_lib0clear(&___nl__6);
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 389
if(c_rt_lib0check_true_native(___nl__5)){ goto label_417;}
#line 390
c_rt_lib0move(&___nl__7,___get_global_const(7));
#line 390
c_rt_lib0move(&___nl__8, nparser_priv0get_value_nop(___ref___0));
#line 390
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__7, ___get_global_const(849), ___nl__8));
#line 390
c_rt_lib0clear(&___nl__7);
#line 390
c_rt_lib0clear(&___nl__8);
#line 390
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(841), ___nl__6));
#line 390
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 390
c_rt_lib0clear(&___nl__6);
#line 391
goto label_454;
#line 391
label_417:
#line 391
c_rt_lib0move(&___nl__6,___get_global_const(965));
#line 391
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 391
c_rt_lib0clear(&___nl__6);
#line 391
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 391
if(c_rt_lib0check_true_native(___nl__5)){ goto label_432;}
#line 392
c_rt_lib0move(&___nl__7,___get_global_const(8));
#line 392
c_rt_lib0move(&___nl__8, nparser_priv0get_value_nop(___ref___0));
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__7, ___get_global_const(849), ___nl__8));
#line 392
c_rt_lib0clear(&___nl__7);
#line 392
c_rt_lib0clear(&___nl__8);
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(841), ___nl__6));
#line 392
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 392
c_rt_lib0clear(&___nl__6);
#line 393
goto label_454;
#line 393
label_432:
#line 394
c_rt_lib0move(&___nl__6,___get_global_const(966));
#line 394
c_rt_lib0move(&___nl__7, string0lf());
#line 394
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 394
c_rt_lib0clear(&___nl__7);
#line 394
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(933)));
#line 394
c_rt_lib0move(&___nl__7, ntokenizer0info(___nl__8));
#line 394
c_rt_lib0clear(&___nl__8);
#line 394
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 394
c_rt_lib0clear(&___nl__7);
#line 395
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__6));
#line 396
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__6));
#line 396
c_rt_lib0clear(&___nl__1);
#line 396
c_rt_lib0clear(&___nl__2);
#line 396
c_rt_lib0clear(&___nl__3);
#line 396
c_rt_lib0clear(&___nl__4);
#line 396
c_rt_lib0clear(&___nl__5);
#line 396
c_rt_lib0clear(&___nl__6);
#line 396
return ___nl__7;
#line 396
c_rt_lib0clear(&___nl__7);
#line 396
c_rt_lib0clear(&___nl__6);
#line 397
goto label_454;
#line 397
label_454:
#line 397
c_rt_lib0clear(&___nl__5);
#line 398
goto label_478;
#line 398
label_457:
#line 399
c_rt_lib0move(&___nl__5,___get_global_const(967));
#line 399
c_rt_lib0move(&___nl__6, string0lf());
#line 399
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 399
c_rt_lib0clear(&___nl__6);
#line 399
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(933)));
#line 399
c_rt_lib0move(&___nl__6, ntokenizer0info(___nl__7));
#line 399
c_rt_lib0clear(&___nl__7);
#line 399
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 399
c_rt_lib0clear(&___nl__6);
#line 400
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__5));
#line 401
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__5));
#line 401
c_rt_lib0clear(&___nl__1);
#line 401
c_rt_lib0clear(&___nl__2);
#line 401
c_rt_lib0clear(&___nl__3);
#line 401
c_rt_lib0clear(&___nl__4);
#line 401
c_rt_lib0clear(&___nl__5);
#line 401
return ___nl__6;
#line 401
c_rt_lib0clear(&___nl__6);
#line 401
c_rt_lib0clear(&___nl__5);
#line 402
goto label_478;
#line 402
label_478:
#line 402
c_rt_lib0clear(&___nl__4);
#line 403
c_rt_lib0move(&___nl__8,___get_global_const(933));
#line 403
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 403
c_rt_lib0move(&___nl__7, ntokenizer0get_place(&___nl__8));
#line 403
c_rt_lib0move(&___nl__9,___get_global_const(933));
#line 403
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__8));
#line 403
c_rt_lib0clear(&___nl__9);
#line 403
c_rt_lib0clear(&___nl__8);
#line 403
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__3, ___get_global_const(906), ___nl__7));
#line 403
c_rt_lib0clear(&___nl__7);
#line 403
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__6, ___get_global_const(192), ___nl__2));
#line 403
c_rt_lib0clear(&___nl__6);
#line 403
c_rt_lib0move(&___nl__4, nparser_priv0parse_expr_rec_left(___ref___0, ___nl__5, ___nl__1));
#line 403
c_rt_lib0clear(&___nl__5);
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
c_rt_lib0clear(&___nl__2);
#line 403
c_rt_lib0clear(&___nl__3);
#line 403
c_rt_lib0clear(&___nl__1);
#line 403
return NULL;
}

ImmT nparser_priv0get_value_nop(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 410
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 410
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 410
c_rt_lib0move(&___nl__3, ntokenizer0get_place(&___nl__4));
#line 410
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 410
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 410
c_rt_lib0clear(&___nl__5);
#line 410
c_rt_lib0clear(&___nl__4);
#line 411
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 411
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 411
c_rt_lib0move(&___nl__4, ntokenizer0get_place(&___nl__5));
#line 411
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 411
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 411
c_rt_lib0clear(&___nl__6);
#line 411
c_rt_lib0clear(&___nl__5);
#line 411
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__3, ___get_global_const(906), ___nl__4));
#line 411
c_rt_lib0clear(&___nl__3);
#line 411
c_rt_lib0clear(&___nl__4);
#line 413
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(831)));
#line 413
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__2, ___get_global_const(192), ___nl__3));
#line 413
c_rt_lib0clear(&___nl__2);
#line 413
c_rt_lib0clear(&___nl__3);
#line 413
return ___nl__1;
#line 413
c_rt_lib0clear(&___nl__1);
#line 413
return NULL;
}

ImmT nparser_priv0eat_text(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 420
c_rt_lib0move(&___nl__2,___get_global_const(933));
#line 420
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 420
c_rt_lib0move(&___nl__1, ntokenizer0is_text(&___nl__2));
#line 420
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 420
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 420
c_rt_lib0clear(&___nl__3);
#line 420
c_rt_lib0clear(&___nl__2);
#line 420
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 420
if(c_rt_lib0check_true_native(___nl__1)){ goto label_21;}
#line 421
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 421
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 421
c_rt_lib0move(&___nl__2, ntokenizer0eat_text(&___nl__3));
#line 421
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 421
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 421
c_rt_lib0clear(&___nl__4);
#line 421
c_rt_lib0clear(&___nl__3);
#line 421
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__2));
#line 421
c_rt_lib0clear(&___nl__1);
#line 421
return ___nl__2;
#line 421
c_rt_lib0clear(&___nl__2);
#line 422
goto label_31;
#line 422
label_21:
#line 423
c_rt_lib0move(&___nl__2,___get_global_const(968));
#line 423
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 423
c_rt_lib0clear(&___nl__2);
#line 424
c_rt_lib0move(&___nl__2,___get_global_const(968));
#line 424
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__2));
#line 424
c_rt_lib0clear(&___nl__1);
#line 424
return ___nl__2;
#line 424
c_rt_lib0clear(&___nl__2);
#line 425
goto label_31;
#line 425
label_31:
#line 425
c_rt_lib0clear(&___nl__1);
#line 425
return NULL;
}

ImmT nparser_priv0parse_variant_label(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 429
c_rt_lib0move(&___nl__2,___get_global_const(933));
#line 429
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 429
c_rt_lib0move(&___nl__1, ntokenizer0is_text(&___nl__2));
#line 429
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 429
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 429
c_rt_lib0clear(&___nl__3);
#line 429
c_rt_lib0clear(&___nl__2);
#line 429
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 429
if(c_rt_lib0check_true_native(___nl__1)){ goto label_20;}
#line 430
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 430
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 430
c_rt_lib0move(&___nl__2, ntokenizer0eat_text(&___nl__3));
#line 430
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 430
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 430
c_rt_lib0clear(&___nl__4);
#line 430
c_rt_lib0clear(&___nl__3);
#line 430
c_rt_lib0clear(&___nl__1);
#line 430
return ___nl__2;
#line 430
c_rt_lib0clear(&___nl__2);
#line 431
goto label_29;
#line 431
label_20:
#line 432
c_rt_lib0move(&___nl__2,___get_global_const(968));
#line 432
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 432
c_rt_lib0clear(&___nl__2);
#line 433
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 433
c_rt_lib0clear(&___nl__1);
#line 433
return ___nl__2;
#line 433
c_rt_lib0clear(&___nl__2);
#line 434
goto label_29;
#line 434
label_29:
#line 434
c_rt_lib0clear(&___nl__1);
#line 434
return NULL;
}

ImmT nparser_priv0parse_variant(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 438
c_rt_lib0move(&___nl__1,___get_global_const(417));
#line 438
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 438
c_rt_lib0clear(&___nl__1);
#line 439
c_rt_lib0move(&___nl__1, nparser_priv0parse_variant_label(___ref___0));
#line 440
c_rt_lib0move(&___nl__2, nparser_priv0get_value_nop(___ref___0));
#line 441
c_rt_lib0move(&___nl__4,___get_global_const(373));
#line 441
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 441
c_rt_lib0clear(&___nl__4);
#line 441
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 441
if(c_rt_lib0check_true_native(___nl__3)){ goto label_26;}
#line 442
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 442
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 442
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 442
c_rt_lib0clear(&___nl__1);
#line 442
c_rt_lib0clear(&___nl__2);
#line 442
c_rt_lib0clear(&___nl__3);
#line 442
c_rt_lib0clear(&___nl__4);
#line 442
return ___nl__5;
#line 442
label_18:
#line 442
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 442
c_rt_lib0clear(&___nl__4);
#line 442
c_rt_lib0clear(&___nl__5);
#line 443
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 443
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 443
c_rt_lib0clear(&___nl__4);
#line 444
goto label_31;
#line 444
label_26:
#line 445
c_rt_lib0move(&___nl__4, nparser_priv0get_value_nop(___ref___0));
#line 445
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 445
c_rt_lib0clear(&___nl__4);
#line 446
goto label_31;
#line 446
label_31:
#line 446
c_rt_lib0clear(&___nl__3);
#line 447
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__1, ___get_global_const(849), ___nl__2));
#line 447
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 447
c_rt_lib0clear(&___nl__1);
#line 447
c_rt_lib0clear(&___nl__2);
#line 447
return ___nl__3;
#line 447
c_rt_lib0clear(&___nl__3);
#line 447
c_rt_lib0clear(&___nl__1);
#line 447
c_rt_lib0clear(&___nl__2);
#line 447
return NULL;
}

ImmT nparser_priv0check_lvalue(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(849)));
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 451
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 452
c_rt_lib0clear(&___nl__1);
#line 452
c_rt_lib0clear(&___nl__2);
#line 452
return NULL;
#line 453
goto label_46;
#line 453
label_8:
#line 453
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 453
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(208)));
#line 453
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 453
if(c_rt_lib0check_true_native(___nl__2)){ goto label_46;}
#line 454
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(192)));
#line 454
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(208)));
#line 455
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 455
c_rt_lib0move(&___nl__5,___get_global_const(850));
#line 455
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 455
c_rt_lib0clear(&___nl__5);
#line 455
if(c_rt_lib0check_true_native(___nl__4)){ goto label_24;}
#line 455
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 455
c_rt_lib0move(&___nl__5,___get_global_const(851));
#line 455
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 455
c_rt_lib0clear(&___nl__5);
#line 455
label_24:
#line 455
if(c_rt_lib0check_true_native(___nl__4)){ goto label_30;}
#line 455
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 455
c_rt_lib0move(&___nl__5,___get_global_const(852));
#line 455
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 455
c_rt_lib0clear(&___nl__5);
#line 455
label_30:
#line 455
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 455
if(c_rt_lib0check_true_native(___nl__4)){ goto label_42;}
#line 456
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 456
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___0, ___nl__5));
#line 456
c_rt_lib0clear(&___nl__5);
#line 457
c_rt_lib0clear(&___nl__1);
#line 457
c_rt_lib0clear(&___nl__2);
#line 457
c_rt_lib0clear(&___nl__3);
#line 457
c_rt_lib0clear(&___nl__4);
#line 457
return NULL;
#line 458
goto label_42;
#line 458
label_42:
#line 458
c_rt_lib0clear(&___nl__4);
#line 458
c_rt_lib0clear(&___nl__3);
#line 459
goto label_46;
#line 459
label_46:
#line 459
c_rt_lib0clear(&___nl__2);
#line 460
c_rt_lib0move(&___nl__2,___get_global_const(969));
#line 460
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 460
c_rt_lib0clear(&___nl__2);
#line 460
c_rt_lib0clear(&___nl__1);
#line 460
return NULL;
}

ImmT nparser_priv0parse_variant_decl(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 464
c_rt_lib0move(&___nl__1,___get_global_const(417));
#line 464
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 464
c_rt_lib0clear(&___nl__1);
#line 465
c_rt_lib0move(&___nl__2, nparser_priv0parse_variant_label(___ref___0));
#line 465
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 465
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__2, ___get_global_const(192), ___nl__3));
#line 465
c_rt_lib0clear(&___nl__2);
#line 465
c_rt_lib0clear(&___nl__3);
#line 466
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 466
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 466
c_rt_lib0clear(&___nl__3);
#line 466
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 466
if(c_rt_lib0check_true_native(___nl__2)){ goto label_23;}
#line 467
c_rt_lib0move(&___nl__3, nparser_priv0parse_var_decl_sim(___ref___0));
#line 467
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(192), ___nl__3));
#line 467
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 467
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(192), ___nl__4);
#line 467
c_rt_lib0clear(&___nl__3);
#line 467
c_rt_lib0clear(&___nl__4);
#line 468
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 468
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__3));
#line 468
c_rt_lib0clear(&___nl__3);
#line 469
goto label_23;
#line 469
label_23:
#line 469
c_rt_lib0clear(&___nl__2);
#line 470
return ___nl__1;
#line 470
c_rt_lib0clear(&___nl__1);
#line 470
return NULL;
}

ImmT nparser_priv0parse_var_decl(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 474
c_rt_lib0move(&___nl__1,___get_global_const(849));
#line 474
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 474
c_rt_lib0clear(&___nl__1);
#line 475
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 475
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 475
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 475
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__2, ___get_global_const(63), ___nl__3, ___get_global_const(192), ___nl__4));
#line 475
c_rt_lib0clear(&___nl__2);
#line 475
c_rt_lib0clear(&___nl__3);
#line 475
c_rt_lib0clear(&___nl__4);
#line 476
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 476
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 476
c_rt_lib0move(&___nl__2, ntokenizer0is_type(&___nl__3, ___nl__4));
#line 476
c_rt_lib0clear(&___nl__4);
#line 476
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 476
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 476
c_rt_lib0clear(&___nl__4);
#line 476
c_rt_lib0clear(&___nl__3);
#line 476
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 476
if(c_rt_lib0check_true_native(___nl__2)){ goto label_35;}
#line 477
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 477
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 477
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 477
c_rt_lib0move(&___nl__3, ntokenizer0eat_type(&___nl__4, ___nl__5));
#line 477
c_rt_lib0clear(&___nl__5);
#line 477
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 477
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 477
c_rt_lib0clear(&___nl__5);
#line 477
c_rt_lib0clear(&___nl__4);
#line 477
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 477
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(93), ___nl__4);
#line 477
c_rt_lib0clear(&___nl__3);
#line 477
c_rt_lib0clear(&___nl__4);
#line 478
goto label_40;
#line 478
label_35:
#line 479
c_rt_lib0move(&___nl__3,___get_global_const(970));
#line 479
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 479
c_rt_lib0clear(&___nl__3);
#line 480
goto label_40;
#line 480
label_40:
#line 480
c_rt_lib0clear(&___nl__2);
#line 481
c_rt_lib0move(&___nl__3,___get_global_const(417));
#line 481
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 481
c_rt_lib0clear(&___nl__3);
#line 481
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 481
if(c_rt_lib0check_true_native(___nl__2)){ goto label_66;}
#line 482
c_rt_lib0move(&___nl__5, nparser_priv0parse_type(___ref___0));
#line 482
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 482
if(c_rt_lib0check_true_native(___nl__4)){ goto label_55;}
#line 482
c_rt_lib0clear(&___nl__1);
#line 482
c_rt_lib0clear(&___nl__2);
#line 482
c_rt_lib0clear(&___nl__3);
#line 482
c_rt_lib0clear(&___nl__4);
#line 482
return ___nl__5;
#line 482
label_55:
#line 482
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 482
c_rt_lib0clear(&___nl__4);
#line 482
c_rt_lib0clear(&___nl__5);
#line 483
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(63), ___nl__3));
#line 483
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 483
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(63), ___nl__5);
#line 483
c_rt_lib0clear(&___nl__4);
#line 483
c_rt_lib0clear(&___nl__5);
#line 483
c_rt_lib0clear(&___nl__3);
#line 484
goto label_66;
#line 484
label_66:
#line 484
c_rt_lib0clear(&___nl__2);
#line 485
c_rt_lib0move(&___nl__3,___get_global_const(865));
#line 485
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 485
c_rt_lib0clear(&___nl__3);
#line 485
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 485
if(c_rt_lib0check_true_native(___nl__2)){ goto label_92;}
#line 486
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 486
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 486
if(c_rt_lib0check_true_native(___nl__4)){ goto label_81;}
#line 486
c_rt_lib0clear(&___nl__1);
#line 486
c_rt_lib0clear(&___nl__2);
#line 486
c_rt_lib0clear(&___nl__3);
#line 486
c_rt_lib0clear(&___nl__4);
#line 486
return ___nl__5;
#line 486
label_81:
#line 486
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 486
c_rt_lib0clear(&___nl__4);
#line 486
c_rt_lib0clear(&___nl__5);
#line 487
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(192), ___nl__3));
#line 487
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 487
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(192), ___nl__5);
#line 487
c_rt_lib0clear(&___nl__4);
#line 487
c_rt_lib0clear(&___nl__5);
#line 487
c_rt_lib0clear(&___nl__3);
#line 488
goto label_92;
#line 488
label_92:
#line 488
c_rt_lib0clear(&___nl__2);
#line 489
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 489
c_rt_lib0clear(&___nl__1);
#line 489
return ___nl__2;
#line 489
c_rt_lib0clear(&___nl__2);
#line 489
c_rt_lib0clear(&___nl__1);
#line 489
return NULL;
}

ImmT nparser_priv0parse_var_decl_sim(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 493
c_rt_lib0move(&___nl__1,___get_global_const(849));
#line 493
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 493
c_rt_lib0clear(&___nl__1);
#line 494
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 494
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 494
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 494
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__2, ___get_global_const(63), ___nl__3, ___get_global_const(192), ___nl__4));
#line 494
c_rt_lib0clear(&___nl__2);
#line 494
c_rt_lib0clear(&___nl__3);
#line 494
c_rt_lib0clear(&___nl__4);
#line 495
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 495
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 495
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 495
c_rt_lib0move(&___nl__2, ntokenizer0is_type(&___nl__3, ___nl__4));
#line 495
c_rt_lib0clear(&___nl__4);
#line 495
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 495
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 495
c_rt_lib0clear(&___nl__4);
#line 495
c_rt_lib0clear(&___nl__3);
#line 495
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 495
if(c_rt_lib0check_true_native(___nl__2)){ goto label_35;}
#line 496
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 496
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 496
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 496
c_rt_lib0move(&___nl__3, ntokenizer0eat_type(&___nl__4, ___nl__5));
#line 496
c_rt_lib0clear(&___nl__5);
#line 496
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 496
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 496
c_rt_lib0clear(&___nl__5);
#line 496
c_rt_lib0clear(&___nl__4);
#line 496
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 496
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(93), ___nl__4);
#line 496
c_rt_lib0clear(&___nl__3);
#line 496
c_rt_lib0clear(&___nl__4);
#line 497
goto label_40;
#line 497
label_35:
#line 498
c_rt_lib0move(&___nl__3,___get_global_const(970));
#line 498
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 498
c_rt_lib0clear(&___nl__3);
#line 499
goto label_40;
#line 499
label_40:
#line 499
c_rt_lib0clear(&___nl__2);
#line 500
return ___nl__1;
#line 500
c_rt_lib0clear(&___nl__1);
#line 500
return NULL;
}

ImmT nparser_priv0parse_cond(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 504
c_rt_lib0move(&___nl__1,___get_global_const(373));
#line 504
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 504
c_rt_lib0clear(&___nl__1);
#line 505
c_rt_lib0move(&___nl__3, nparser_priv0parse_expr(___ref___0));
#line 505
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(48)));
#line 505
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 505
c_rt_lib0clear(&___nl__1);
#line 505
c_rt_lib0clear(&___nl__2);
#line 505
return ___nl__3;
#line 505
label_9:
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(48)));
#line 505
c_rt_lib0clear(&___nl__2);
#line 505
c_rt_lib0clear(&___nl__3);
#line 506
c_rt_lib0move(&___nl__2,___get_global_const(260));
#line 506
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 506
c_rt_lib0clear(&___nl__2);
#line 507
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 507
c_rt_lib0clear(&___nl__1);
#line 507
return ___nl__2;
#line 507
c_rt_lib0clear(&___nl__2);
#line 507
c_rt_lib0clear(&___nl__1);
#line 507
return NULL;
}

ImmT nparser_priv0parse_block(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 511
c_rt_lib0move(&___nl__2,___get_global_const(933));
#line 511
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 511
c_rt_lib0move(&___nl__1, ntokenizer0get_place(&___nl__2));
#line 511
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 511
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 511
c_rt_lib0clear(&___nl__3);
#line 511
c_rt_lib0clear(&___nl__2);
#line 512
c_rt_lib0move(&___nl__2,___get_global_const(252));
#line 512
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 512
c_rt_lib0clear(&___nl__2);
#line 513
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 514
label_11:
#line 514
c_rt_lib0move(&___nl__4,___get_global_const(253));
#line 514
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 514
c_rt_lib0clear(&___nl__4);
#line 514
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 514
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 514
if(c_rt_lib0check_true_native(___nl__3)){ goto label_44;}
#line 515
c_rt_lib0move(&___nl__5,___get_global_const(360));
#line 515
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 515
c_rt_lib0clear(&___nl__5);
#line 515
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 515
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 515
c_rt_lib0clear(&___nl__4);
#line 515
goto label_11;
#line 515
goto label_26;
#line 515
label_26:
#line 515
c_rt_lib0clear(&___nl__4);
#line 516
c_rt_lib0move(&___nl__6, nparser_priv0parse_cmd(___ref___0));
#line 516
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 516
if(c_rt_lib0check_true_native(___nl__5)){ goto label_37;}
#line 516
c_rt_lib0clear(&___nl__1);
#line 516
c_rt_lib0clear(&___nl__2);
#line 516
c_rt_lib0clear(&___nl__3);
#line 516
c_rt_lib0clear(&___nl__4);
#line 516
c_rt_lib0clear(&___nl__5);
#line 516
return ___nl__6;
#line 516
label_37:
#line 516
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 516
c_rt_lib0clear(&___nl__5);
#line 516
c_rt_lib0clear(&___nl__6);
#line 517
c_rt_lib0delete(array0push(&___nl__2, ___nl__4));
#line 517
c_rt_lib0clear(&___nl__4);
#line 518
goto label_11;
#line 518
label_44:
#line 518
c_rt_lib0clear(&___nl__3);
#line 519
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 519
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 519
c_rt_lib0move(&___nl__3, ntokenizer0get_place_ws(&___nl__4));
#line 519
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 519
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 519
c_rt_lib0clear(&___nl__5);
#line 519
c_rt_lib0clear(&___nl__4);
#line 520
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__1, ___get_global_const(906), ___nl__3));
#line 521
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(828), ___nl__2));
#line 521
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__4, ___get_global_const(201), ___nl__6));
#line 521
c_rt_lib0clear(&___nl__6);
#line 521
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__5));
#line 521
c_rt_lib0clear(&___nl__1);
#line 521
c_rt_lib0clear(&___nl__2);
#line 521
c_rt_lib0clear(&___nl__3);
#line 521
c_rt_lib0clear(&___nl__4);
#line 521
return ___nl__5;
#line 521
c_rt_lib0clear(&___nl__5);
#line 521
c_rt_lib0clear(&___nl__1);
#line 521
c_rt_lib0clear(&___nl__2);
#line 521
c_rt_lib0clear(&___nl__3);
#line 521
c_rt_lib0clear(&___nl__4);
#line 521
return NULL;
}

ImmT nparser_priv0parse_try_ensure(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 525
c_rt_lib0move(&___nl__2,___get_global_const(933));
#line 525
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 525
c_rt_lib0move(&___nl__3,___get_global_const(849));
#line 525
c_rt_lib0move(&___nl__1, ntokenizer0next_is(&___nl__2, ___nl__3));
#line 525
c_rt_lib0clear(&___nl__3);
#line 525
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 525
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 525
c_rt_lib0clear(&___nl__3);
#line 525
c_rt_lib0clear(&___nl__2);
#line 525
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 525
if(c_rt_lib0check_true_native(___nl__1)){ goto label_30;}
#line 526
c_rt_lib0move(&___nl__4, nparser_priv0parse_var_decl(___ref___0));
#line 526
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 526
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 526
c_rt_lib0clear(&___nl__1);
#line 526
c_rt_lib0clear(&___nl__2);
#line 526
c_rt_lib0clear(&___nl__3);
#line 526
return ___nl__4;
#line 526
label_18:
#line 526
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 526
c_rt_lib0clear(&___nl__3);
#line 526
c_rt_lib0clear(&___nl__4);
#line 527
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(846), ___nl__2));
#line 527
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 527
c_rt_lib0clear(&___nl__1);
#line 527
c_rt_lib0clear(&___nl__2);
#line 527
return ___nl__3;
#line 527
c_rt_lib0clear(&___nl__3);
#line 527
c_rt_lib0clear(&___nl__2);
#line 528
goto label_79;
#line 528
label_30:
#line 529
c_rt_lib0move(&___nl__4, nparser_priv0parse_expr(___ref___0));
#line 529
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 529
if(c_rt_lib0check_true_native(___nl__3)){ goto label_38;}
#line 529
c_rt_lib0clear(&___nl__1);
#line 529
c_rt_lib0clear(&___nl__2);
#line 529
c_rt_lib0clear(&___nl__3);
#line 529
return ___nl__4;
#line 529
label_38:
#line 529
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 529
c_rt_lib0clear(&___nl__3);
#line 529
c_rt_lib0clear(&___nl__4);
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(192)));
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(208)));
#line 530
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 530
if(c_rt_lib0check_true_native(___nl__4)){ goto label_52;}
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(192)));
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(208)));
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 530
c_rt_lib0move(&___nl__5,___get_global_const(865));
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 530
c_rt_lib0clear(&___nl__5);
#line 530
label_52:
#line 530
c_rt_lib0clear(&___nl__4);
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 530
if(c_rt_lib0check_true_native(___nl__3)){ goto label_66;}
#line 531
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(192)));
#line 531
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(208)));
#line 531
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(847), ___nl__4));
#line 531
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__4));
#line 531
c_rt_lib0clear(&___nl__1);
#line 531
c_rt_lib0clear(&___nl__2);
#line 531
c_rt_lib0clear(&___nl__3);
#line 531
return ___nl__4;
#line 531
c_rt_lib0clear(&___nl__4);
#line 532
goto label_75;
#line 532
label_66:
#line 533
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(848), ___nl__2));
#line 533
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__4));
#line 533
c_rt_lib0clear(&___nl__1);
#line 533
c_rt_lib0clear(&___nl__2);
#line 533
c_rt_lib0clear(&___nl__3);
#line 533
return ___nl__4;
#line 533
c_rt_lib0clear(&___nl__4);
#line 534
goto label_75;
#line 534
label_75:
#line 534
c_rt_lib0clear(&___nl__3);
#line 534
c_rt_lib0clear(&___nl__2);
#line 535
goto label_79;
#line 535
label_79:
#line 535
c_rt_lib0clear(&___nl__1);
#line 535
return NULL;
}

ImmT nparser_priv0get_debug_from_begin(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 539
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 539
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(___nl__0, ___nl__3));
#line 539
c_rt_lib0move(&___nl__2, ntokenizer0get_place(&___nl__3));
#line 539
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 539
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__0, ___nl__4, ___nl__3));
#line 539
c_rt_lib0clear(&___nl__4);
#line 539
c_rt_lib0clear(&___nl__3);
#line 539
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 539
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__0, ___nl__4));
#line 539
c_rt_lib0move(&___nl__3, ntokenizer0get_place(&___nl__4));
#line 539
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 539
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__0, ___nl__5, ___nl__4));
#line 539
c_rt_lib0clear(&___nl__5);
#line 539
c_rt_lib0clear(&___nl__4);
#line 539
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__2, ___get_global_const(906), ___nl__3));
#line 539
c_rt_lib0clear(&___nl__2);
#line 539
c_rt_lib0clear(&___nl__3);
#line 539
c_rt_lib0clear(&___nl__0);
#line 539
return ___nl__1;
#line 539
c_rt_lib0clear(&___nl__1);
#line 539
c_rt_lib0clear(&___nl__0);
#line 539
return NULL;
}

ImmT nparser_priv0parse_cmd(ImmT * ___ref___0) {
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
#line 543
c_rt_lib0move(&___nl__2,___get_global_const(933));
#line 543
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 543
c_rt_lib0move(&___nl__1, ntokenizer0get_place(&___nl__2));
#line 543
c_rt_lib0move(&___nl__3,___get_global_const(933));
#line 543
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 543
c_rt_lib0clear(&___nl__3);
#line 543
c_rt_lib0clear(&___nl__2);
#line 545
c_rt_lib0move(&___nl__4,___get_global_const(817));
#line 545
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 545
c_rt_lib0clear(&___nl__4);
#line 545
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 545
if(c_rt_lib0check_true_native(___nl__3)){ goto label_166;}
#line 546
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 547
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 547
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 547
if(c_rt_lib0check_true_native(___nl__5)){ goto label_22;}
#line 547
c_rt_lib0clear(&___nl__1);
#line 547
c_rt_lib0clear(&___nl__2);
#line 547
c_rt_lib0clear(&___nl__3);
#line 547
c_rt_lib0clear(&___nl__4);
#line 547
c_rt_lib0clear(&___nl__5);
#line 547
return ___nl__6;
#line 547
label_22:
#line 547
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 547
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(832), ___nl__7);
#line 547
c_rt_lib0clear(&___nl__5);
#line 547
c_rt_lib0clear(&___nl__6);
#line 547
c_rt_lib0clear(&___nl__7);
#line 548
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 548
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 548
if(c_rt_lib0check_true_native(___nl__5)){ goto label_37;}
#line 548
c_rt_lib0clear(&___nl__1);
#line 548
c_rt_lib0clear(&___nl__2);
#line 548
c_rt_lib0clear(&___nl__3);
#line 548
c_rt_lib0clear(&___nl__4);
#line 548
c_rt_lib0clear(&___nl__5);
#line 548
return ___nl__6;
#line 548
label_37:
#line 548
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 548
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(817), ___nl__7);
#line 548
c_rt_lib0clear(&___nl__5);
#line 548
c_rt_lib0clear(&___nl__6);
#line 548
c_rt_lib0clear(&___nl__7);
#line 549
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 550
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 550
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 550
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(833), ___nl__7);
#line 550
c_rt_lib0clear(&___nl__6);
#line 550
c_rt_lib0clear(&___nl__7);
#line 551
label_49:
#line 551
c_rt_lib0move(&___nl__7,___get_global_const(833));
#line 551
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 551
c_rt_lib0clear(&___nl__7);
#line 551
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 551
if(c_rt_lib0check_true_native(___nl__6)){ goto label_119;}
#line 552
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 553
c_rt_lib0move(&___nl__9,___get_global_const(933));
#line 553
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 553
c_rt_lib0move(&___nl__8, ntokenizer0get_place(&___nl__9));
#line 553
c_rt_lib0move(&___nl__10,___get_global_const(933));
#line 553
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__10, ___nl__9));
#line 553
c_rt_lib0clear(&___nl__10);
#line 553
c_rt_lib0clear(&___nl__9);
#line 554
c_rt_lib0move(&___nl__10, nparser_priv0parse_cond(___ref___0));
#line 554
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(48)));
#line 554
if(c_rt_lib0check_true_native(___nl__9)){ goto label_76;}
#line 554
c_rt_lib0clear(&___nl__1);
#line 554
c_rt_lib0clear(&___nl__2);
#line 554
c_rt_lib0clear(&___nl__3);
#line 554
c_rt_lib0clear(&___nl__4);
#line 554
c_rt_lib0clear(&___nl__5);
#line 554
c_rt_lib0clear(&___nl__6);
#line 554
c_rt_lib0clear(&___nl__7);
#line 554
c_rt_lib0clear(&___nl__8);
#line 554
c_rt_lib0clear(&___nl__9);
#line 554
return ___nl__10;
#line 554
label_76:
#line 554
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__10, ___get_global_const(48)));
#line 554
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(832), ___nl__11);
#line 554
c_rt_lib0clear(&___nl__9);
#line 554
c_rt_lib0clear(&___nl__10);
#line 554
c_rt_lib0clear(&___nl__11);
#line 555
c_rt_lib0move(&___nl__10,___get_global_const(933));
#line 555
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___0, ___nl__10));
#line 555
c_rt_lib0move(&___nl__9, ntokenizer0get_place_ws(&___nl__10));
#line 555
c_rt_lib0move(&___nl__11,___get_global_const(933));
#line 555
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__10));
#line 555
c_rt_lib0clear(&___nl__11);
#line 555
c_rt_lib0clear(&___nl__10);
#line 556
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__8, ___get_global_const(906), ___nl__9));
#line 556
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 556
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(195), ___nl__11);
#line 556
c_rt_lib0clear(&___nl__10);
#line 556
c_rt_lib0clear(&___nl__11);
#line 557
c_rt_lib0move(&___nl__11, nparser_priv0parse_block(___ref___0));
#line 557
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(48)));
#line 557
if(c_rt_lib0check_true_native(___nl__10)){ goto label_108;}
#line 557
c_rt_lib0clear(&___nl__1);
#line 557
c_rt_lib0clear(&___nl__2);
#line 557
c_rt_lib0clear(&___nl__3);
#line 557
c_rt_lib0clear(&___nl__4);
#line 557
c_rt_lib0clear(&___nl__5);
#line 557
c_rt_lib0clear(&___nl__6);
#line 557
c_rt_lib0clear(&___nl__7);
#line 557
c_rt_lib0clear(&___nl__8);
#line 557
c_rt_lib0clear(&___nl__9);
#line 557
c_rt_lib0clear(&___nl__10);
#line 557
return ___nl__11;
#line 557
label_108:
#line 557
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__11, ___get_global_const(48)));
#line 557
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(201), ___nl__12);
#line 557
c_rt_lib0clear(&___nl__10);
#line 557
c_rt_lib0clear(&___nl__11);
#line 557
c_rt_lib0clear(&___nl__12);
#line 558
c_rt_lib0delete(array0push(&___nl__5, ___nl__7));
#line 558
c_rt_lib0clear(&___nl__7);
#line 558
c_rt_lib0clear(&___nl__8);
#line 558
c_rt_lib0clear(&___nl__9);
#line 559
goto label_49;
#line 559
label_119:
#line 559
c_rt_lib0clear(&___nl__6);
#line 560
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 560
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(833), ___nl__6);
#line 560
c_rt_lib0clear(&___nl__6);
#line 561
c_rt_lib0move(&___nl__7,___get_global_const(834));
#line 561
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 561
c_rt_lib0clear(&___nl__7);
#line 561
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 561
if(c_rt_lib0check_true_native(___nl__6)){ goto label_147;}
#line 562
c_rt_lib0move(&___nl__8, nparser_priv0parse_block(___ref___0));
#line 562
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 562
if(c_rt_lib0check_true_native(___nl__7)){ goto label_140;}
#line 562
c_rt_lib0clear(&___nl__1);
#line 562
c_rt_lib0clear(&___nl__2);
#line 562
c_rt_lib0clear(&___nl__3);
#line 562
c_rt_lib0clear(&___nl__4);
#line 562
c_rt_lib0clear(&___nl__5);
#line 562
c_rt_lib0clear(&___nl__6);
#line 562
c_rt_lib0clear(&___nl__7);
#line 562
return ___nl__8;
#line 562
label_140:
#line 562
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 562
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(834), ___nl__9);
#line 562
c_rt_lib0clear(&___nl__7);
#line 562
c_rt_lib0clear(&___nl__8);
#line 562
c_rt_lib0clear(&___nl__9);
#line 563
goto label_158;
#line 563
label_147:
#line 564
c_rt_lib0move(&___nl__8, nparser_priv0get_debug_from_begin(*___ref___0));
#line 564
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(831)));
#line 564
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__8, ___get_global_const(201), ___nl__9));
#line 564
c_rt_lib0clear(&___nl__8);
#line 564
c_rt_lib0clear(&___nl__9);
#line 564
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 564
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(834), ___nl__8);
#line 564
c_rt_lib0clear(&___nl__7);
#line 564
c_rt_lib0clear(&___nl__8);
#line 565
goto label_158;
#line 565
label_158:
#line 565
c_rt_lib0clear(&___nl__6);
#line 566
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(817), ___nl__4));
#line 566
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 566
c_rt_lib0clear(&___nl__6);
#line 566
c_rt_lib0clear(&___nl__4);
#line 566
c_rt_lib0clear(&___nl__5);
#line 567
goto label_971;
#line 567
label_166:
#line 567
c_rt_lib0move(&___nl__4,___get_global_const(819));
#line 567
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 567
c_rt_lib0clear(&___nl__4);
#line 567
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 567
if(c_rt_lib0check_true_native(___nl__3)){ goto label_218;}
#line 568
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 569
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 569
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 569
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(919), ___nl__6);
#line 569
c_rt_lib0clear(&___nl__5);
#line 569
c_rt_lib0clear(&___nl__6);
#line 570
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 570
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 570
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(836), ___nl__6);
#line 570
c_rt_lib0clear(&___nl__5);
#line 570
c_rt_lib0clear(&___nl__6);
#line 571
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 571
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 571
if(c_rt_lib0check_true_native(___nl__5)){ goto label_192;}
#line 571
c_rt_lib0clear(&___nl__1);
#line 571
c_rt_lib0clear(&___nl__2);
#line 571
c_rt_lib0clear(&___nl__3);
#line 571
c_rt_lib0clear(&___nl__4);
#line 571
c_rt_lib0clear(&___nl__5);
#line 571
return ___nl__6;
#line 571
label_192:
#line 571
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 571
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(3), ___nl__7);
#line 571
c_rt_lib0clear(&___nl__5);
#line 571
c_rt_lib0clear(&___nl__6);
#line 571
c_rt_lib0clear(&___nl__7);
#line 572
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 572
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 572
if(c_rt_lib0check_true_native(___nl__5)){ goto label_207;}
#line 572
c_rt_lib0clear(&___nl__1);
#line 572
c_rt_lib0clear(&___nl__2);
#line 572
c_rt_lib0clear(&___nl__3);
#line 572
c_rt_lib0clear(&___nl__4);
#line 572
c_rt_lib0clear(&___nl__5);
#line 572
return ___nl__6;
#line 572
label_207:
#line 572
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 572
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(201), ___nl__7);
#line 572
c_rt_lib0clear(&___nl__5);
#line 572
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0clear(&___nl__7);
#line 573
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(819), ___nl__4));
#line 573
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 573
c_rt_lib0clear(&___nl__5);
#line 573
c_rt_lib0clear(&___nl__4);
#line 574
goto label_971;
#line 574
label_218:
#line 574
c_rt_lib0move(&___nl__4,___get_global_const(821));
#line 574
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 574
c_rt_lib0clear(&___nl__4);
#line 574
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 574
if(c_rt_lib0check_true_native(___nl__3)){ goto label_270;}
#line 575
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 576
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 576
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 576
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(919), ___nl__6);
#line 576
c_rt_lib0clear(&___nl__5);
#line 576
c_rt_lib0clear(&___nl__6);
#line 577
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 577
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 577
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(836), ___nl__6);
#line 577
c_rt_lib0clear(&___nl__5);
#line 577
c_rt_lib0clear(&___nl__6);
#line 578
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 578
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 578
if(c_rt_lib0check_true_native(___nl__5)){ goto label_244;}
#line 578
c_rt_lib0clear(&___nl__1);
#line 578
c_rt_lib0clear(&___nl__2);
#line 578
c_rt_lib0clear(&___nl__3);
#line 578
c_rt_lib0clear(&___nl__4);
#line 578
c_rt_lib0clear(&___nl__5);
#line 578
return ___nl__6;
#line 578
label_244:
#line 578
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 578
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(837), ___nl__7);
#line 578
c_rt_lib0clear(&___nl__5);
#line 578
c_rt_lib0clear(&___nl__6);
#line 578
c_rt_lib0clear(&___nl__7);
#line 579
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 579
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 579
if(c_rt_lib0check_true_native(___nl__5)){ goto label_259;}
#line 579
c_rt_lib0clear(&___nl__1);
#line 579
c_rt_lib0clear(&___nl__2);
#line 579
c_rt_lib0clear(&___nl__3);
#line 579
c_rt_lib0clear(&___nl__4);
#line 579
c_rt_lib0clear(&___nl__5);
#line 579
return ___nl__6;
#line 579
label_259:
#line 579
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 579
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(201), ___nl__7);
#line 579
c_rt_lib0clear(&___nl__5);
#line 579
c_rt_lib0clear(&___nl__6);
#line 579
c_rt_lib0clear(&___nl__7);
#line 580
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(821), ___nl__4));
#line 580
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 580
c_rt_lib0clear(&___nl__5);
#line 580
c_rt_lib0clear(&___nl__4);
#line 581
goto label_971;
#line 581
label_270:
#line 581
c_rt_lib0move(&___nl__4,___get_global_const(140));
#line 581
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 581
c_rt_lib0clear(&___nl__4);
#line 581
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 581
if(c_rt_lib0check_true_native(___nl__3)){ goto label_294;}
#line 582
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 582
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 582
if(c_rt_lib0check_true_native(___nl__5)){ goto label_285;}
#line 582
c_rt_lib0clear(&___nl__1);
#line 582
c_rt_lib0clear(&___nl__2);
#line 582
c_rt_lib0clear(&___nl__3);
#line 582
c_rt_lib0clear(&___nl__4);
#line 582
c_rt_lib0clear(&___nl__5);
#line 582
return ___nl__6;
#line 582
label_285:
#line 582
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 582
c_rt_lib0clear(&___nl__5);
#line 582
c_rt_lib0clear(&___nl__6);
#line 583
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(140), ___nl__4));
#line 583
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 583
c_rt_lib0clear(&___nl__5);
#line 583
c_rt_lib0clear(&___nl__4);
#line 584
goto label_971;
#line 584
label_294:
#line 584
c_rt_lib0move(&___nl__4,___get_global_const(820));
#line 584
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 584
c_rt_lib0clear(&___nl__4);
#line 584
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 584
if(c_rt_lib0check_true_native(___nl__3)){ goto label_354;}
#line 585
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 586
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 586
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 586
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(919), ___nl__6);
#line 586
c_rt_lib0clear(&___nl__5);
#line 586
c_rt_lib0clear(&___nl__6);
#line 587
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 587
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 587
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(329), ___nl__6);
#line 587
c_rt_lib0clear(&___nl__5);
#line 587
c_rt_lib0clear(&___nl__6);
#line 588
c_rt_lib0move(&___nl__5,___get_global_const(256));
#line 588
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 588
c_rt_lib0clear(&___nl__5);
#line 589
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 589
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 589
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(198), ___nl__6);
#line 589
c_rt_lib0clear(&___nl__5);
#line 589
c_rt_lib0clear(&___nl__6);
#line 590
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 590
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 590
if(c_rt_lib0check_true_native(___nl__5)){ goto label_328;}
#line 590
c_rt_lib0clear(&___nl__1);
#line 590
c_rt_lib0clear(&___nl__2);
#line 590
c_rt_lib0clear(&___nl__3);
#line 590
c_rt_lib0clear(&___nl__4);
#line 590
c_rt_lib0clear(&___nl__5);
#line 590
return ___nl__6;
#line 590
label_328:
#line 590
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 590
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(328), ___nl__7);
#line 590
c_rt_lib0clear(&___nl__5);
#line 590
c_rt_lib0clear(&___nl__6);
#line 590
c_rt_lib0clear(&___nl__7);
#line 591
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 591
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 591
if(c_rt_lib0check_true_native(___nl__5)){ goto label_343;}
#line 591
c_rt_lib0clear(&___nl__1);
#line 591
c_rt_lib0clear(&___nl__2);
#line 591
c_rt_lib0clear(&___nl__3);
#line 591
c_rt_lib0clear(&___nl__4);
#line 591
c_rt_lib0clear(&___nl__5);
#line 591
return ___nl__6;
#line 591
label_343:
#line 591
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 591
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(201), ___nl__7);
#line 591
c_rt_lib0clear(&___nl__5);
#line 591
c_rt_lib0clear(&___nl__6);
#line 591
c_rt_lib0clear(&___nl__7);
#line 592
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(820), ___nl__4));
#line 592
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 592
c_rt_lib0clear(&___nl__5);
#line 592
c_rt_lib0clear(&___nl__4);
#line 593
goto label_971;
#line 593
label_354:
#line 593
c_rt_lib0move(&___nl__4,___get_global_const(822));
#line 593
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 593
c_rt_lib0clear(&___nl__4);
#line 593
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 593
if(c_rt_lib0check_true_native(___nl__3)){ goto label_401;}
#line 594
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 595
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 595
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 595
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(919), ___nl__6);
#line 595
c_rt_lib0clear(&___nl__5);
#line 595
c_rt_lib0clear(&___nl__6);
#line 596
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 596
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 596
if(c_rt_lib0check_true_native(___nl__5)){ goto label_375;}
#line 596
c_rt_lib0clear(&___nl__1);
#line 596
c_rt_lib0clear(&___nl__2);
#line 596
c_rt_lib0clear(&___nl__3);
#line 596
c_rt_lib0clear(&___nl__4);
#line 596
c_rt_lib0clear(&___nl__5);
#line 596
return ___nl__6;
#line 596
label_375:
#line 596
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 596
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(832), ___nl__7);
#line 596
c_rt_lib0clear(&___nl__5);
#line 596
c_rt_lib0clear(&___nl__6);
#line 596
c_rt_lib0clear(&___nl__7);
#line 597
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 597
if(c_rt_lib0check_true_native(___nl__5)){ goto label_390;}
#line 597
c_rt_lib0clear(&___nl__1);
#line 597
c_rt_lib0clear(&___nl__2);
#line 597
c_rt_lib0clear(&___nl__3);
#line 597
c_rt_lib0clear(&___nl__4);
#line 597
c_rt_lib0clear(&___nl__5);
#line 597
return ___nl__6;
#line 597
label_390:
#line 597
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 597
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(201), ___nl__7);
#line 597
c_rt_lib0clear(&___nl__5);
#line 597
c_rt_lib0clear(&___nl__6);
#line 597
c_rt_lib0clear(&___nl__7);
#line 598
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(822), ___nl__4));
#line 598
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 598
c_rt_lib0clear(&___nl__5);
#line 598
c_rt_lib0clear(&___nl__4);
#line 599
goto label_971;
#line 599
label_401:
#line 599
c_rt_lib0move(&___nl__4,___get_global_const(818));
#line 599
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 599
c_rt_lib0clear(&___nl__4);
#line 599
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 599
if(c_rt_lib0check_true_native(___nl__3)){ goto label_589;}
#line 600
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 601
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 601
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 601
c_rt_lib0clear(&___nl__5);
#line 602
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 602
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 602
c_rt_lib0move(&___nl__7,___get_global_const(849));
#line 602
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 602
c_rt_lib0clear(&___nl__7);
#line 602
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 602
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 602
c_rt_lib0clear(&___nl__7);
#line 602
c_rt_lib0clear(&___nl__6);
#line 602
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 602
if(c_rt_lib0check_true_native(___nl__5)){ goto label_444;}
#line 603
c_rt_lib0move(&___nl__8, nparser_priv0parse_var_decl(___ref___0));
#line 603
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 603
if(c_rt_lib0check_true_native(___nl__7)){ goto label_433;}
#line 603
c_rt_lib0clear(&___nl__1);
#line 603
c_rt_lib0clear(&___nl__2);
#line 603
c_rt_lib0clear(&___nl__3);
#line 603
c_rt_lib0clear(&___nl__4);
#line 603
c_rt_lib0clear(&___nl__5);
#line 603
c_rt_lib0clear(&___nl__6);
#line 603
c_rt_lib0clear(&___nl__7);
#line 603
return ___nl__8;
#line 603
label_433:
#line 603
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 603
c_rt_lib0clear(&___nl__7);
#line 603
c_rt_lib0clear(&___nl__8);
#line 604
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(829), ___nl__6));
#line 604
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 604
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(835), ___nl__8);
#line 604
c_rt_lib0clear(&___nl__7);
#line 604
c_rt_lib0clear(&___nl__8);
#line 604
c_rt_lib0clear(&___nl__6);
#line 605
goto label_486;
#line 605
label_444:
#line 605
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 605
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 605
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 605
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 605
c_rt_lib0clear(&___nl__7);
#line 605
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 605
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 605
c_rt_lib0clear(&___nl__7);
#line 605
c_rt_lib0clear(&___nl__6);
#line 605
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 605
if(c_rt_lib0check_true_native(___nl__5)){ goto label_463;}
#line 606
c_rt_lib0move(&___nl__6, nparser_priv0get_value_nop(___ref___0));
#line 606
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(192), ___nl__6));
#line 606
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 606
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(835), ___nl__7);
#line 606
c_rt_lib0clear(&___nl__6);
#line 606
c_rt_lib0clear(&___nl__7);
#line 607
goto label_486;
#line 607
label_463:
#line 608
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 608
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 608
if(c_rt_lib0check_true_native(___nl__7)){ goto label_475;}
#line 608
c_rt_lib0clear(&___nl__1);
#line 608
c_rt_lib0clear(&___nl__2);
#line 608
c_rt_lib0clear(&___nl__3);
#line 608
c_rt_lib0clear(&___nl__4);
#line 608
c_rt_lib0clear(&___nl__5);
#line 608
c_rt_lib0clear(&___nl__6);
#line 608
c_rt_lib0clear(&___nl__7);
#line 608
return ___nl__8;
#line 608
label_475:
#line 608
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 608
c_rt_lib0clear(&___nl__7);
#line 608
c_rt_lib0clear(&___nl__8);
#line 609
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(192), ___nl__6));
#line 609
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 609
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(835), ___nl__8);
#line 609
c_rt_lib0clear(&___nl__7);
#line 609
c_rt_lib0clear(&___nl__8);
#line 609
c_rt_lib0clear(&___nl__6);
#line 610
goto label_486;
#line 610
label_486:
#line 610
c_rt_lib0clear(&___nl__5);
#line 611
c_rt_lib0move(&___nl__5,___get_global_const(360));
#line 611
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 611
c_rt_lib0clear(&___nl__5);
#line 612
c_rt_lib0move(&___nl__5, nparser_priv0get_value_nop(___ref___0));
#line 612
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 612
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(832), ___nl__6);
#line 612
c_rt_lib0clear(&___nl__5);
#line 612
c_rt_lib0clear(&___nl__6);
#line 613
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 613
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 613
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 613
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 613
c_rt_lib0clear(&___nl__7);
#line 613
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 613
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 613
c_rt_lib0clear(&___nl__7);
#line 613
c_rt_lib0clear(&___nl__6);
#line 613
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 613
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 613
if(c_rt_lib0check_true_native(___nl__5)){ goto label_525;}
#line 613
c_rt_lib0move(&___nl__7, nparser_priv0parse_expr(___ref___0));
#line 613
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(48)));
#line 613
if(c_rt_lib0check_true_native(___nl__6)){ goto label_518;}
#line 613
c_rt_lib0clear(&___nl__1);
#line 613
c_rt_lib0clear(&___nl__2);
#line 613
c_rt_lib0clear(&___nl__3);
#line 613
c_rt_lib0clear(&___nl__4);
#line 613
c_rt_lib0clear(&___nl__5);
#line 613
c_rt_lib0clear(&___nl__6);
#line 613
return ___nl__7;
#line 613
label_518:
#line 613
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__7, ___get_global_const(48)));
#line 613
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(832), ___nl__8);
#line 613
c_rt_lib0clear(&___nl__6);
#line 613
c_rt_lib0clear(&___nl__7);
#line 613
c_rt_lib0clear(&___nl__8);
#line 613
goto label_525;
#line 613
label_525:
#line 613
c_rt_lib0clear(&___nl__5);
#line 614
c_rt_lib0move(&___nl__5,___get_global_const(360));
#line 614
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 614
c_rt_lib0clear(&___nl__5);
#line 615
c_rt_lib0move(&___nl__5, nparser_priv0get_value_nop(___ref___0));
#line 615
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 615
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(836), ___nl__6);
#line 615
c_rt_lib0clear(&___nl__5);
#line 615
c_rt_lib0clear(&___nl__6);
#line 616
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 616
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 616
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 616
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 616
c_rt_lib0clear(&___nl__7);
#line 616
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 616
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 616
c_rt_lib0clear(&___nl__7);
#line 616
c_rt_lib0clear(&___nl__6);
#line 616
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 616
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 616
if(c_rt_lib0check_true_native(___nl__5)){ goto label_564;}
#line 616
c_rt_lib0move(&___nl__7, nparser_priv0parse_expr(___ref___0));
#line 616
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(48)));
#line 616
if(c_rt_lib0check_true_native(___nl__6)){ goto label_557;}
#line 616
c_rt_lib0clear(&___nl__1);
#line 616
c_rt_lib0clear(&___nl__2);
#line 616
c_rt_lib0clear(&___nl__3);
#line 616
c_rt_lib0clear(&___nl__4);
#line 616
c_rt_lib0clear(&___nl__5);
#line 616
c_rt_lib0clear(&___nl__6);
#line 616
return ___nl__7;
#line 616
label_557:
#line 616
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__7, ___get_global_const(48)));
#line 616
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(836), ___nl__8);
#line 616
c_rt_lib0clear(&___nl__6);
#line 616
c_rt_lib0clear(&___nl__7);
#line 616
c_rt_lib0clear(&___nl__8);
#line 616
goto label_564;
#line 616
label_564:
#line 616
c_rt_lib0clear(&___nl__5);
#line 617
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 617
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 617
c_rt_lib0clear(&___nl__5);
#line 618
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 618
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 618
if(c_rt_lib0check_true_native(___nl__5)){ goto label_578;}
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
return ___nl__6;
#line 618
label_578:
#line 618
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 618
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(201), ___nl__7);
#line 618
c_rt_lib0clear(&___nl__5);
#line 618
c_rt_lib0clear(&___nl__6);
#line 618
c_rt_lib0clear(&___nl__7);
#line 619
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(818), ___nl__4));
#line 619
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 619
c_rt_lib0clear(&___nl__5);
#line 619
c_rt_lib0clear(&___nl__4);
#line 620
goto label_971;
#line 620
label_589:
#line 620
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 620
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 620
c_rt_lib0move(&___nl__5,___get_global_const(252));
#line 620
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 620
c_rt_lib0clear(&___nl__5);
#line 620
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 620
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 620
c_rt_lib0clear(&___nl__5);
#line 620
c_rt_lib0clear(&___nl__4);
#line 620
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 620
if(c_rt_lib0check_true_native(___nl__3)){ goto label_619;}
#line 621
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 621
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 621
if(c_rt_lib0check_true_native(___nl__5)){ goto label_610;}
#line 621
c_rt_lib0clear(&___nl__1);
#line 621
c_rt_lib0clear(&___nl__2);
#line 621
c_rt_lib0clear(&___nl__3);
#line 621
c_rt_lib0clear(&___nl__4);
#line 621
c_rt_lib0clear(&___nl__5);
#line 621
return ___nl__6;
#line 621
label_610:
#line 621
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 621
c_rt_lib0clear(&___nl__5);
#line 621
c_rt_lib0clear(&___nl__6);
#line 622
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 622
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 622
c_rt_lib0clear(&___nl__5);
#line 622
c_rt_lib0clear(&___nl__4);
#line 623
goto label_971;
#line 623
label_619:
#line 623
c_rt_lib0move(&___nl__4,___get_global_const(825));
#line 623
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 623
c_rt_lib0clear(&___nl__4);
#line 623
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 623
if(c_rt_lib0check_true_native(___nl__3)){ goto label_629;}
#line 624
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(825)));
#line 624
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 624
c_rt_lib0clear(&___nl__4);
#line 625
goto label_971;
#line 625
label_629:
#line 625
c_rt_lib0move(&___nl__4,___get_global_const(826));
#line 625
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 625
c_rt_lib0clear(&___nl__4);
#line 625
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 625
if(c_rt_lib0check_true_native(___nl__3)){ goto label_639;}
#line 626
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(826)));
#line 626
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 626
c_rt_lib0clear(&___nl__4);
#line 627
goto label_971;
#line 627
label_639:
#line 627
c_rt_lib0move(&___nl__4,___get_global_const(90));
#line 627
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 627
c_rt_lib0clear(&___nl__4);
#line 627
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 627
if(c_rt_lib0check_true_native(___nl__3)){ goto label_716;}
#line 628
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 628
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 628
c_rt_lib0move(&___nl__4, ntokenizer0get_token(&___nl__5));
#line 628
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 628
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 628
c_rt_lib0clear(&___nl__6);
#line 628
c_rt_lib0clear(&___nl__5);
#line 629
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 630
c_rt_lib0move(&___nl__6, nparser_priv0get_end_list());
#line 630
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 630
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 630
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 630
label_657:
#line 630
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 630
if(c_rt_lib0check_true_native(___nl__11)){ goto label_674;}
#line 630
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 631
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__4, ___nl__7));
#line 631
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 631
if(c_rt_lib0check_true_native(___nl__12)){ goto label_670;}
#line 632
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 632
c_rt_lib0copy(&___nl__5, ___nl__13);
#line 632
c_rt_lib0clear(&___nl__13);
#line 633
c_rt_lib0clear(&___nl__12);
#line 633
goto label_674;
#line 634
goto label_670;
#line 634
label_670:
#line 634
c_rt_lib0clear(&___nl__12);
#line 635
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 635
goto label_657;
#line 635
label_674:
#line 635
c_rt_lib0clear(&___nl__6);
#line 635
c_rt_lib0clear(&___nl__7);
#line 635
c_rt_lib0clear(&___nl__8);
#line 635
c_rt_lib0clear(&___nl__9);
#line 635
c_rt_lib0clear(&___nl__10);
#line 635
c_rt_lib0clear(&___nl__11);
#line 636
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 636
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 636
if(c_rt_lib0check_true_native(___nl__6)){ goto label_689;}
#line 637
c_rt_lib0move(&___nl__7, nparser_priv0get_value_nop(___ref___0));
#line 637
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(90), ___nl__7));
#line 637
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 637
c_rt_lib0clear(&___nl__7);
#line 638
goto label_711;
#line 638
label_689:
#line 639
c_rt_lib0move(&___nl__9, nparser_priv0parse_expr(___ref___0));
#line 639
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__9, ___get_global_const(48)));
#line 639
if(c_rt_lib0check_true_native(___nl__8)){ goto label_702;}
#line 639
c_rt_lib0clear(&___nl__1);
#line 639
c_rt_lib0clear(&___nl__2);
#line 639
c_rt_lib0clear(&___nl__3);
#line 639
c_rt_lib0clear(&___nl__4);
#line 639
c_rt_lib0clear(&___nl__5);
#line 639
c_rt_lib0clear(&___nl__6);
#line 639
c_rt_lib0clear(&___nl__7);
#line 639
c_rt_lib0clear(&___nl__8);
#line 639
return ___nl__9;
#line 639
label_702:
#line 639
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__9, ___get_global_const(48)));
#line 639
c_rt_lib0clear(&___nl__8);
#line 639
c_rt_lib0clear(&___nl__9);
#line 640
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(90), ___nl__7));
#line 640
c_rt_lib0copy(&___nl__2, ___nl__8);
#line 640
c_rt_lib0clear(&___nl__8);
#line 640
c_rt_lib0clear(&___nl__7);
#line 641
goto label_711;
#line 641
label_711:
#line 641
c_rt_lib0clear(&___nl__6);
#line 641
c_rt_lib0clear(&___nl__4);
#line 641
c_rt_lib0clear(&___nl__5);
#line 642
goto label_971;
#line 642
label_716:
#line 642
c_rt_lib0move(&___nl__4,___get_global_const(827));
#line 642
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 642
c_rt_lib0clear(&___nl__4);
#line 642
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 642
if(c_rt_lib0check_true_native(___nl__3)){ goto label_819;}
#line 643
c_rt_lib0move(&___nl__4,___get_global_const(373));
#line 643
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 643
c_rt_lib0clear(&___nl__4);
#line 644
c_rt_lib0move(&___nl__6, nparser_priv0parse_expr(___ref___0));
#line 644
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 644
if(c_rt_lib0check_true_native(___nl__5)){ goto label_734;}
#line 644
c_rt_lib0clear(&___nl__1);
#line 644
c_rt_lib0clear(&___nl__2);
#line 644
c_rt_lib0clear(&___nl__3);
#line 644
c_rt_lib0clear(&___nl__4);
#line 644
c_rt_lib0clear(&___nl__5);
#line 644
return ___nl__6;
#line 644
label_734:
#line 644
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 644
c_rt_lib0clear(&___nl__5);
#line 644
c_rt_lib0clear(&___nl__6);
#line 645
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 645
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(198), ___nl__4, ___get_global_const(840), ___nl__6));
#line 645
c_rt_lib0clear(&___nl__6);
#line 646
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 646
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__6));
#line 646
c_rt_lib0clear(&___nl__6);
#line 647
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 647
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 647
c_rt_lib0move(&___nl__6, ntokenizer0get_place(&___nl__7));
#line 647
c_rt_lib0move(&___nl__8,___get_global_const(933));
#line 647
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__7));
#line 647
c_rt_lib0clear(&___nl__8);
#line 647
c_rt_lib0clear(&___nl__7);
#line 648
label_751:
#line 648
c_rt_lib0move(&___nl__8,___get_global_const(902));
#line 648
c_rt_lib0move(&___nl__7, nparser_priv0try_eat(___ref___0, ___nl__8));
#line 648
c_rt_lib0clear(&___nl__8);
#line 648
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 648
if(c_rt_lib0check_true_native(___nl__7)){ goto label_810;}
#line 649
c_rt_lib0move(&___nl__9, nparser_priv0parse_variant_decl(___ref___0));
#line 649
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(1, ___get_global_const(841), ___nl__9));
#line 649
c_rt_lib0clear(&___nl__9);
#line 650
c_rt_lib0move(&___nl__11,___get_global_const(933));
#line 650
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___0, ___nl__11));
#line 650
c_rt_lib0move(&___nl__10, ntokenizer0get_place_ws(&___nl__11));
#line 650
c_rt_lib0move(&___nl__12,___get_global_const(933));
#line 650
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__12, ___nl__11));
#line 650
c_rt_lib0clear(&___nl__12);
#line 650
c_rt_lib0clear(&___nl__11);
#line 650
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__6, ___get_global_const(906), ___nl__10));
#line 650
c_rt_lib0clear(&___nl__10);
#line 650
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 650
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(195), ___nl__10);
#line 650
c_rt_lib0clear(&___nl__9);
#line 650
c_rt_lib0clear(&___nl__10);
#line 651
c_rt_lib0move(&___nl__10, nparser_priv0parse_block(___ref___0));
#line 651
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(48)));
#line 651
if(c_rt_lib0check_true_native(___nl__9)){ goto label_786;}
#line 651
c_rt_lib0clear(&___nl__1);
#line 651
c_rt_lib0clear(&___nl__2);
#line 651
c_rt_lib0clear(&___nl__3);
#line 651
c_rt_lib0clear(&___nl__4);
#line 651
c_rt_lib0clear(&___nl__5);
#line 651
c_rt_lib0clear(&___nl__6);
#line 651
c_rt_lib0clear(&___nl__7);
#line 651
c_rt_lib0clear(&___nl__8);
#line 651
c_rt_lib0clear(&___nl__9);
#line 651
return ___nl__10;
#line 651
label_786:
#line 651
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__10, ___get_global_const(48)));
#line 651
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(201), ___nl__11);
#line 651
c_rt_lib0clear(&___nl__9);
#line 651
c_rt_lib0clear(&___nl__10);
#line 651
c_rt_lib0clear(&___nl__11);
#line 652
c_rt_lib0move(&___nl__9,___get_global_const(840));
#line 652
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__5, ___nl__9));
#line 652
c_rt_lib0delete(array0push(&___nl__9, ___nl__8));
#line 652
c_rt_lib0move(&___nl__10,___get_global_const(840));
#line 652
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__10, ___nl__9));
#line 652
c_rt_lib0clear(&___nl__10);
#line 652
c_rt_lib0clear(&___nl__9);
#line 653
c_rt_lib0move(&___nl__10,___get_global_const(933));
#line 653
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___0, ___nl__10));
#line 653
c_rt_lib0move(&___nl__9, ntokenizer0get_place(&___nl__10));
#line 653
c_rt_lib0move(&___nl__11,___get_global_const(933));
#line 653
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__10));
#line 653
c_rt_lib0clear(&___nl__11);
#line 653
c_rt_lib0clear(&___nl__10);
#line 653
c_rt_lib0copy(&___nl__6, ___nl__9);
#line 653
c_rt_lib0clear(&___nl__9);
#line 653
c_rt_lib0clear(&___nl__8);
#line 654
goto label_751;
#line 654
label_810:
#line 654
c_rt_lib0clear(&___nl__7);
#line 655
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(827), ___nl__5));
#line 655
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 655
c_rt_lib0clear(&___nl__7);
#line 655
c_rt_lib0clear(&___nl__4);
#line 655
c_rt_lib0clear(&___nl__5);
#line 655
c_rt_lib0clear(&___nl__6);
#line 656
goto label_971;
#line 656
label_819:
#line 656
c_rt_lib0move(&___nl__4,___get_global_const(217));
#line 656
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 656
c_rt_lib0clear(&___nl__4);
#line 656
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 656
if(c_rt_lib0check_true_native(___nl__3)){ goto label_853;}
#line 657
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 658
c_rt_lib0move(&___nl__6,___get_global_const(373));
#line 658
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 658
c_rt_lib0clear(&___nl__6);
#line 658
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 658
if(c_rt_lib0check_true_native(___nl__5)){ goto label_846;}
#line 659
c_rt_lib0move(&___nl__7, nparser_priv0parse_expr_list(___ref___0));
#line 659
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(48)));
#line 659
if(c_rt_lib0check_true_native(___nl__6)){ goto label_841;}
#line 659
c_rt_lib0clear(&___nl__1);
#line 659
c_rt_lib0clear(&___nl__2);
#line 659
c_rt_lib0clear(&___nl__3);
#line 659
c_rt_lib0clear(&___nl__4);
#line 659
c_rt_lib0clear(&___nl__5);
#line 659
c_rt_lib0clear(&___nl__6);
#line 659
return ___nl__7;
#line 659
label_841:
#line 659
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__7, ___get_global_const(48)));
#line 659
c_rt_lib0clear(&___nl__6);
#line 659
c_rt_lib0clear(&___nl__7);
#line 660
goto label_846;
#line 660
label_846:
#line 660
c_rt_lib0clear(&___nl__5);
#line 661
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(217), ___nl__4));
#line 661
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 661
c_rt_lib0clear(&___nl__5);
#line 661
c_rt_lib0clear(&___nl__4);
#line 662
goto label_971;
#line 662
label_853:
#line 662
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 662
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 662
c_rt_lib0move(&___nl__5,___get_global_const(849));
#line 662
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 662
c_rt_lib0clear(&___nl__5);
#line 662
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 662
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 662
c_rt_lib0clear(&___nl__5);
#line 662
c_rt_lib0clear(&___nl__4);
#line 662
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 662
if(c_rt_lib0check_true_native(___nl__3)){ goto label_886;}
#line 663
c_rt_lib0move(&___nl__6, nparser_priv0parse_var_decl(___ref___0));
#line 663
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 663
if(c_rt_lib0check_true_native(___nl__5)){ goto label_874;}
#line 663
c_rt_lib0clear(&___nl__1);
#line 663
c_rt_lib0clear(&___nl__2);
#line 663
c_rt_lib0clear(&___nl__3);
#line 663
c_rt_lib0clear(&___nl__4);
#line 663
c_rt_lib0clear(&___nl__5);
#line 663
return ___nl__6;
#line 663
label_874:
#line 663
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 663
c_rt_lib0clear(&___nl__5);
#line 663
c_rt_lib0clear(&___nl__6);
#line 664
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(829), ___nl__4));
#line 664
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 664
c_rt_lib0clear(&___nl__5);
#line 665
c_rt_lib0move(&___nl__5,___get_global_const(360));
#line 665
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 665
c_rt_lib0clear(&___nl__5);
#line 665
c_rt_lib0clear(&___nl__4);
#line 666
goto label_971;
#line 666
label_886:
#line 666
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 666
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 666
c_rt_lib0move(&___nl__5,___get_global_const(830));
#line 666
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 666
c_rt_lib0clear(&___nl__5);
#line 666
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 666
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 666
c_rt_lib0clear(&___nl__5);
#line 666
c_rt_lib0clear(&___nl__4);
#line 666
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 666
if(c_rt_lib0check_true_native(___nl__3)){ goto label_919;}
#line 667
c_rt_lib0move(&___nl__4,___get_global_const(830));
#line 667
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 667
c_rt_lib0clear(&___nl__4);
#line 668
c_rt_lib0move(&___nl__6, nparser_priv0parse_try_ensure(___ref___0));
#line 668
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 668
if(c_rt_lib0check_true_native(___nl__5)){ goto label_910;}
#line 668
c_rt_lib0clear(&___nl__1);
#line 668
c_rt_lib0clear(&___nl__2);
#line 668
c_rt_lib0clear(&___nl__3);
#line 668
c_rt_lib0clear(&___nl__4);
#line 668
c_rt_lib0clear(&___nl__5);
#line 668
return ___nl__6;
#line 668
label_910:
#line 668
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 668
c_rt_lib0clear(&___nl__5);
#line 668
c_rt_lib0clear(&___nl__6);
#line 669
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(830), ___nl__4));
#line 669
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 669
c_rt_lib0clear(&___nl__5);
#line 669
c_rt_lib0clear(&___nl__4);
#line 670
goto label_971;
#line 670
label_919:
#line 670
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 670
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 670
c_rt_lib0move(&___nl__5,___get_global_const(95));
#line 670
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 670
c_rt_lib0clear(&___nl__5);
#line 670
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 670
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 670
c_rt_lib0clear(&___nl__5);
#line 670
c_rt_lib0clear(&___nl__4);
#line 670
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 670
if(c_rt_lib0check_true_native(___nl__3)){ goto label_952;}
#line 671
c_rt_lib0move(&___nl__4,___get_global_const(95));
#line 671
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 671
c_rt_lib0clear(&___nl__4);
#line 672
c_rt_lib0move(&___nl__6, nparser_priv0parse_try_ensure(___ref___0));
#line 672
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 672
if(c_rt_lib0check_true_native(___nl__5)){ goto label_943;}
#line 672
c_rt_lib0clear(&___nl__1);
#line 672
c_rt_lib0clear(&___nl__2);
#line 672
c_rt_lib0clear(&___nl__3);
#line 672
c_rt_lib0clear(&___nl__4);
#line 672
c_rt_lib0clear(&___nl__5);
#line 672
return ___nl__6;
#line 672
label_943:
#line 672
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 672
c_rt_lib0clear(&___nl__5);
#line 672
c_rt_lib0clear(&___nl__6);
#line 673
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__4));
#line 673
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 673
c_rt_lib0clear(&___nl__5);
#line 673
c_rt_lib0clear(&___nl__4);
#line 674
goto label_971;
#line 674
label_952:
#line 675
c_rt_lib0move(&___nl__6, nparser_priv0parse_expr(___ref___0));
#line 675
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 675
if(c_rt_lib0check_true_native(___nl__5)){ goto label_962;}
#line 675
c_rt_lib0clear(&___nl__1);
#line 675
c_rt_lib0clear(&___nl__2);
#line 675
c_rt_lib0clear(&___nl__3);
#line 675
c_rt_lib0clear(&___nl__4);
#line 675
c_rt_lib0clear(&___nl__5);
#line 675
return ___nl__6;
#line 675
label_962:
#line 675
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 675
c_rt_lib0clear(&___nl__5);
#line 675
c_rt_lib0clear(&___nl__6);
#line 676
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(192), ___nl__4));
#line 676
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 676
c_rt_lib0clear(&___nl__5);
#line 676
c_rt_lib0clear(&___nl__4);
#line 677
goto label_971;
#line 677
label_971:
#line 677
c_rt_lib0clear(&___nl__3);
#line 678
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 678
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(825)));
#line 678
if(c_rt_lib0check_true_native(___nl__3)){ goto label_978;}
#line 678
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 678
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(826)));
#line 678
label_978:
#line 678
if(c_rt_lib0check_true_native(___nl__3)){ goto label_982;}
#line 678
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 678
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(192)));
#line 678
label_982:
#line 678
if(c_rt_lib0check_true_native(___nl__3)){ goto label_986;}
#line 678
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 678
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(90)));
#line 678
label_986:
#line 678
if(c_rt_lib0check_true_native(___nl__3)){ goto label_990;}
#line 678
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 678
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(217)));
#line 678
label_990:
#line 678
if(c_rt_lib0check_true_native(___nl__3)){ goto label_994;}
#line 678
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 678
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(95)));
#line 678
label_994:
#line 678
if(c_rt_lib0check_true_native(___nl__3)){ goto label_998;}
#line 678
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 678
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(830)));
#line 678
label_998:
#line 678
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 678
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1243;}
#line 680
c_rt_lib0move(&___nl__6,___get_global_const(933));
#line 680
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 680
c_rt_lib0move(&___nl__5, ntokenizer0get_place_ws(&___nl__6));
#line 680
c_rt_lib0move(&___nl__7,___get_global_const(933));
#line 680
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 680
c_rt_lib0clear(&___nl__7);
#line 680
c_rt_lib0clear(&___nl__6);
#line 680
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__1, ___get_global_const(906), ___nl__5));
#line 680
c_rt_lib0clear(&___nl__5);
#line 681
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__4, ___get_global_const(201), ___nl__2));
#line 681
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(1, ___get_global_const(201), ___nl__6));
#line 681
c_rt_lib0clear(&___nl__6);
#line 682
c_rt_lib0move(&___nl__7,___get_global_const(819));
#line 682
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 682
c_rt_lib0clear(&___nl__7);
#line 682
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 682
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1055;}
#line 683
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 683
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 683
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(919), ___nl__8);
#line 683
c_rt_lib0clear(&___nl__7);
#line 683
c_rt_lib0clear(&___nl__8);
#line 684
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 684
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 684
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(836), ___nl__8);
#line 684
c_rt_lib0clear(&___nl__7);
#line 684
c_rt_lib0clear(&___nl__8);
#line 685
c_rt_lib0move(&___nl__7,___get_global_const(373));
#line 685
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 685
c_rt_lib0clear(&___nl__7);
#line 686
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 686
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 686
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1042;}
#line 686
c_rt_lib0clear(&___nl__1);
#line 686
c_rt_lib0clear(&___nl__2);
#line 686
c_rt_lib0clear(&___nl__3);
#line 686
c_rt_lib0clear(&___nl__4);
#line 686
c_rt_lib0clear(&___nl__5);
#line 686
c_rt_lib0clear(&___nl__6);
#line 686
c_rt_lib0clear(&___nl__7);
#line 686
return ___nl__8;
#line 686
label_1042:
#line 686
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 686
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(3), ___nl__9);
#line 686
c_rt_lib0clear(&___nl__7);
#line 686
c_rt_lib0clear(&___nl__8);
#line 686
c_rt_lib0clear(&___nl__9);
#line 687
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 687
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 687
c_rt_lib0clear(&___nl__7);
#line 688
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(819), ___nl__5));
#line 688
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 688
c_rt_lib0clear(&___nl__7);
#line 689
goto label_1235;
#line 689
label_1055:
#line 689
c_rt_lib0move(&___nl__7,___get_global_const(821));
#line 689
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 689
c_rt_lib0clear(&___nl__7);
#line 689
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 689
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1098;}
#line 690
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 690
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 690
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(919), ___nl__8);
#line 690
c_rt_lib0clear(&___nl__7);
#line 690
c_rt_lib0clear(&___nl__8);
#line 691
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 691
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 691
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(836), ___nl__8);
#line 691
c_rt_lib0clear(&___nl__7);
#line 691
c_rt_lib0clear(&___nl__8);
#line 692
c_rt_lib0move(&___nl__7,___get_global_const(373));
#line 692
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 692
c_rt_lib0clear(&___nl__7);
#line 693
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 693
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 693
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1085;}
#line 693
c_rt_lib0clear(&___nl__1);
#line 693
c_rt_lib0clear(&___nl__2);
#line 693
c_rt_lib0clear(&___nl__3);
#line 693
c_rt_lib0clear(&___nl__4);
#line 693
c_rt_lib0clear(&___nl__5);
#line 693
c_rt_lib0clear(&___nl__6);
#line 693
c_rt_lib0clear(&___nl__7);
#line 693
return ___nl__8;
#line 693
label_1085:
#line 693
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 693
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(837), ___nl__9);
#line 693
c_rt_lib0clear(&___nl__7);
#line 693
c_rt_lib0clear(&___nl__8);
#line 693
c_rt_lib0clear(&___nl__9);
#line 694
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 694
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 694
c_rt_lib0clear(&___nl__7);
#line 695
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(821), ___nl__5));
#line 695
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 695
c_rt_lib0clear(&___nl__7);
#line 696
goto label_1235;
#line 696
label_1098:
#line 696
c_rt_lib0move(&___nl__7,___get_global_const(820));
#line 696
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 696
c_rt_lib0clear(&___nl__7);
#line 696
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 696
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1149;}
#line 697
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 697
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 697
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(919), ___nl__8);
#line 697
c_rt_lib0clear(&___nl__7);
#line 697
c_rt_lib0clear(&___nl__8);
#line 698
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 698
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 698
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(329), ___nl__8);
#line 698
c_rt_lib0clear(&___nl__7);
#line 698
c_rt_lib0clear(&___nl__8);
#line 699
c_rt_lib0move(&___nl__7,___get_global_const(256));
#line 699
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 699
c_rt_lib0clear(&___nl__7);
#line 700
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 700
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 700
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(198), ___nl__8);
#line 700
c_rt_lib0clear(&___nl__7);
#line 700
c_rt_lib0clear(&___nl__8);
#line 701
c_rt_lib0move(&___nl__7,___get_global_const(373));
#line 701
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 701
c_rt_lib0clear(&___nl__7);
#line 702
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 702
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 702
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1136;}
#line 702
c_rt_lib0clear(&___nl__1);
#line 702
c_rt_lib0clear(&___nl__2);
#line 702
c_rt_lib0clear(&___nl__3);
#line 702
c_rt_lib0clear(&___nl__4);
#line 702
c_rt_lib0clear(&___nl__5);
#line 702
c_rt_lib0clear(&___nl__6);
#line 702
c_rt_lib0clear(&___nl__7);
#line 702
return ___nl__8;
#line 702
label_1136:
#line 702
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 702
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(328), ___nl__9);
#line 702
c_rt_lib0clear(&___nl__7);
#line 702
c_rt_lib0clear(&___nl__8);
#line 702
c_rt_lib0clear(&___nl__9);
#line 703
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 703
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 703
c_rt_lib0clear(&___nl__7);
#line 704
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(820), ___nl__5));
#line 704
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 704
c_rt_lib0clear(&___nl__7);
#line 705
goto label_1235;
#line 705
label_1149:
#line 705
c_rt_lib0move(&___nl__7,___get_global_const(817));
#line 705
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 705
c_rt_lib0clear(&___nl__7);
#line 705
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 705
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1176;}
#line 706
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 706
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 706
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1166;}
#line 706
c_rt_lib0clear(&___nl__1);
#line 706
c_rt_lib0clear(&___nl__2);
#line 706
c_rt_lib0clear(&___nl__3);
#line 706
c_rt_lib0clear(&___nl__4);
#line 706
c_rt_lib0clear(&___nl__5);
#line 706
c_rt_lib0clear(&___nl__6);
#line 706
c_rt_lib0clear(&___nl__7);
#line 706
return ___nl__8;
#line 706
label_1166:
#line 706
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 706
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(832), ___nl__9);
#line 706
c_rt_lib0clear(&___nl__7);
#line 706
c_rt_lib0clear(&___nl__8);
#line 706
c_rt_lib0clear(&___nl__9);
#line 707
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(823), ___nl__5));
#line 707
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 707
c_rt_lib0clear(&___nl__7);
#line 708
goto label_1235;
#line 708
label_1176:
#line 708
c_rt_lib0move(&___nl__7,___get_global_const(943));
#line 708
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 708
c_rt_lib0clear(&___nl__7);
#line 708
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 708
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1203;}
#line 709
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 709
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 709
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1193;}
#line 709
c_rt_lib0clear(&___nl__1);
#line 709
c_rt_lib0clear(&___nl__2);
#line 709
c_rt_lib0clear(&___nl__3);
#line 709
c_rt_lib0clear(&___nl__4);
#line 709
c_rt_lib0clear(&___nl__5);
#line 709
c_rt_lib0clear(&___nl__6);
#line 709
c_rt_lib0clear(&___nl__7);
#line 709
return ___nl__8;
#line 709
label_1193:
#line 709
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 709
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(832), ___nl__9);
#line 709
c_rt_lib0clear(&___nl__7);
#line 709
c_rt_lib0clear(&___nl__8);
#line 709
c_rt_lib0clear(&___nl__9);
#line 710
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(824), ___nl__5));
#line 710
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 710
c_rt_lib0clear(&___nl__7);
#line 711
goto label_1235;
#line 711
label_1203:
#line 711
c_rt_lib0move(&___nl__7,___get_global_const(822));
#line 711
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 711
c_rt_lib0clear(&___nl__7);
#line 711
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 711
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1235;}
#line 712
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 712
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 712
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(919), ___nl__8);
#line 712
c_rt_lib0clear(&___nl__7);
#line 712
c_rt_lib0clear(&___nl__8);
#line 713
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 713
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 713
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1225;}
#line 713
c_rt_lib0clear(&___nl__1);
#line 713
c_rt_lib0clear(&___nl__2);
#line 713
c_rt_lib0clear(&___nl__3);
#line 713
c_rt_lib0clear(&___nl__4);
#line 713
c_rt_lib0clear(&___nl__5);
#line 713
c_rt_lib0clear(&___nl__6);
#line 713
c_rt_lib0clear(&___nl__7);
#line 713
return ___nl__8;
#line 713
label_1225:
#line 713
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 713
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(832), ___nl__9);
#line 713
c_rt_lib0clear(&___nl__7);
#line 713
c_rt_lib0clear(&___nl__8);
#line 713
c_rt_lib0clear(&___nl__9);
#line 714
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(822), ___nl__5));
#line 714
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 714
c_rt_lib0clear(&___nl__7);
#line 715
goto label_1235;
#line 715
label_1235:
#line 715
c_rt_lib0clear(&___nl__6);
#line 716
c_rt_lib0move(&___nl__6,___get_global_const(360));
#line 716
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__6));
#line 716
c_rt_lib0clear(&___nl__6);
#line 716
c_rt_lib0clear(&___nl__4);
#line 716
c_rt_lib0clear(&___nl__5);
#line 717
goto label_1243;
#line 717
label_1243:
#line 717
c_rt_lib0clear(&___nl__3);
#line 718
c_rt_lib0move(&___nl__4,___get_global_const(933));
#line 718
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 718
c_rt_lib0move(&___nl__3, ntokenizer0get_place_ws(&___nl__4));
#line 718
c_rt_lib0move(&___nl__5,___get_global_const(933));
#line 718
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 718
c_rt_lib0clear(&___nl__5);
#line 718
c_rt_lib0clear(&___nl__4);
#line 719
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__1, ___get_global_const(906), ___nl__3));
#line 720
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(201), ___nl__2, ___get_global_const(195), ___nl__4));
#line 720
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__5));
#line 720
c_rt_lib0clear(&___nl__1);
#line 720
c_rt_lib0clear(&___nl__2);
#line 720
c_rt_lib0clear(&___nl__3);
#line 720
c_rt_lib0clear(&___nl__4);
#line 720
return ___nl__5;
#line 720
c_rt_lib0clear(&___nl__5);
#line 720
c_rt_lib0clear(&___nl__1);
#line 720
c_rt_lib0clear(&___nl__2);
#line 720
c_rt_lib0clear(&___nl__3);
#line 720
c_rt_lib0clear(&___nl__4);
#line 720
return NULL;
}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void nparser0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}
ImmT nparser_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nparser_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = nparser_priv0get_end_list0cal();
	break;
case 1:
	___const__[1] = nparser0parse_ret_t0cal();
	break;
case 2:
	___const__[2] = nparser0state_t0cal();
	break;
case 3:
	___const__[3] = nparser0try_value_t0cal();
	break;
case 4:
	___const__[4] = nparser0try_cmd_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
