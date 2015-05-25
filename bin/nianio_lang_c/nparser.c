
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
#include "ov.h"
#include "nast.h"
#include "ntokenizer.h"
#include "singleton.h"
#line 1 "nparser.nl"

static ImmT *__const__f = NULL;
void nparser_priv0__const__init();
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
ImmT nparser_priv0parse_cmd(ImmT * ___ref___0);


ImmT nparser_priv0get_end_list(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(0);}
ImmT nparser_priv0get_end_list0cal() {
nparser_priv0__const__init();
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
c_rt_lib0move(&___nl__2,___get_global_const(311));
#line 17
c_rt_lib0move(&___nl__3,___get_global_const(740));
#line 17
c_rt_lib0move(&___nl__4,___get_global_const(855));
#line 17
c_rt_lib0move(&___nl__5,___get_global_const(742));
#line 17
c_rt_lib0move(&___nl__6,___get_global_const(743));
#line 17
c_rt_lib0move(&___nl__7,___get_global_const(744));
#line 17
c_rt_lib0move(&___nl__8,___get_global_const(745));
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
nparser_priv0__const__init();
return nparser_priv0__const__sing(1);}
ImmT nparser0parse_ret_t0cal() {
nparser_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0module_t0ptr, ___get_global_const(12), ___get_global_const(13)));
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nparser0errors_t0ptr, ___get_global_const(856), ___get_global_const(706)));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(44), ___nl__2, ___get_global_const(95), ___nl__3));
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
nparser_priv0__const__init();
return nparser_priv0__const__sing(2);}
ImmT nparser0state_t0cal() {
nparser_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(ntokenizer0state_t0ptr, ___get_global_const(857), ___get_global_const(858)));
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nparser0errors_t0ptr, ___get_global_const(856), ___get_global_const(706)));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(848), ___nl__2, ___get_global_const(17), ___nl__3));
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
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
nparser_priv0__const__init();
return nparser_priv0__const__sing(3);}
ImmT nparser0try_value_t0cal() {
nparser_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 32
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(815)));
#line 32
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 32
c_rt_lib0move(&___nl__3, ptd0sim());
#line 32
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(44), ___nl__2, ___get_global_const(43), ___nl__3));
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
return ___nl__0;
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return NULL;
}

ImmT nparser0try_cmd_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0try_cmd_t");
return nparser0try_cmd_t();}
ImmT nparser0try_cmd_t(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(4);}
ImmT nparser0try_cmd_t0cal() {
nparser_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 35
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(191)));
#line 35
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 35
c_rt_lib0move(&___nl__3, ptd0sim());
#line 35
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(44), ___nl__2, ___get_global_const(43), ___nl__3));
#line 35
c_rt_lib0clear(&___nl__2);
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 35
c_rt_lib0clear(&___nl__1);
#line 35
return ___nl__0;
#line 35
c_rt_lib0clear(&___nl__0);
#line 35
return NULL;
}

ImmT nparser0sparse0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "nparser0sparse");
return nparser0sparse(_tab[0], _tab[1]);}
ImmT nparser0sparse(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 39
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 39
c_rt_lib0move(&___nl__4, ntokenizer0init(___nl__0));
#line 39
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(17), ___nl__3, ___get_global_const(848), ___nl__4));
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0clear(&___nl__4);
#line 40
c_rt_lib0move(&___nl__3, nparser_priv0parse_module(&___nl__2, ___nl__1));
#line 41
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(17)));
#line 41
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 41
c_rt_lib0clear(&___nl__5);
#line 41
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 41
c_rt_lib0move(&___nl__4, c_rt_lib0gt(___nl__4, ___nl__5));
#line 41
c_rt_lib0clear(&___nl__5);
#line 41
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 41
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 41
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(17)));
#line 41
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__5));
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
goto label_2;
#line 41
label_2:
#line 41
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__3));
#line 42
c_rt_lib0clear(&___nl__0);
#line 42
c_rt_lib0clear(&___nl__1);
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
return ___nl__4;
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
c_rt_lib0clear(&___nl__0);
#line 42
c_rt_lib0clear(&___nl__1);
#line 42
return NULL;
}

ImmT nparser0errors_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0errors_t");
return nparser0errors_t();}
ImmT nparser0errors_t(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(5);}
ImmT nparser0errors_t0cal() {
nparser_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 46
c_rt_lib0move(&___nl__3, ptd0sim());
#line 46
c_rt_lib0move(&___nl__4, ptd0sim());
#line 46
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(98), ___nl__3, ___get_global_const(97), ___nl__4));
#line 46
c_rt_lib0clear(&___nl__3);
#line 46
c_rt_lib0clear(&___nl__4);
#line 46
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 46
c_rt_lib0clear(&___nl__1);
#line 46
return ___nl__0;
#line 46
c_rt_lib0clear(&___nl__0);
#line 46
return NULL;
}

ImmT nparser_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 50
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 50
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 50
c_rt_lib0move(&___nl__2, ntokenizer0get_line(&___nl__3));
#line 50
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 50
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__4);
#line 50
c_rt_lib0clear(&___nl__3);
#line 51
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 51
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(98), ___nl__2, ___get_global_const(97), ___nl__1));
#line 51
c_rt_lib0delete(array0push(&___nl__3, ___nl__4));
#line 51
c_rt_lib0clear(&___nl__4);
#line 51
c_rt_lib0move(&___nl__4,___get_global_const(17));
#line 51
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 51
c_rt_lib0clear(&___nl__4);
#line 51
c_rt_lib0clear(&___nl__3);
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__1);
#line 51
return NULL;
}

ImmT nparser_priv0eat(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 55
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 55
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 55
c_rt_lib0move(&___nl__2, ntokenizer0eat_token(&___nl__3, ___nl__1));
#line 55
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 55
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 55
c_rt_lib0clear(&___nl__4);
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 55
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 55
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
return ___nl__3;
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
goto label_2;
#line 55
label_2:
#line 55
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0move(&___nl__2,___get_global_const(859));
#line 56
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 56
c_rt_lib0move(&___nl__3, string0lf());
#line 56
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 56
c_rt_lib0clear(&___nl__3);
#line 56
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 56
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 56
c_rt_lib0move(&___nl__3, ntokenizer0info(&___nl__4));
#line 56
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 56
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 56
c_rt_lib0clear(&___nl__5);
#line 56
c_rt_lib0clear(&___nl__4);
#line 56
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 56
c_rt_lib0clear(&___nl__3);
#line 56
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 56
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 57
c_rt_lib0clear(&___nl__1);
#line 57
return ___nl__2;
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0clear(&___nl__1);
#line 57
return NULL;
}

ImmT nparser_priv0try_eat(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 61
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 61
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 61
c_rt_lib0move(&___nl__2, ntokenizer0eat_token(&___nl__3, ___nl__1));
#line 61
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 61
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 61
c_rt_lib0clear(&___nl__4);
#line 61
c_rt_lib0clear(&___nl__3);
#line 61
c_rt_lib0clear(&___nl__1);
#line 61
return ___nl__2;
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__1);
#line 61
return NULL;
}

ImmT nparser_priv0parse_module(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 65
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 65
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 65
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(76), ___nl__1, ___get_global_const(126), ___nl__3, ___get_global_const(711), ___nl__4));
#line 65
c_rt_lib0clear(&___nl__3);
#line 65
c_rt_lib0clear(&___nl__4);
#line 66
label_2:
#line 66
c_rt_lib0move(&___nl__4,___get_global_const(860));
#line 66
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 66
c_rt_lib0clear(&___nl__4);
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 66
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 67
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 67
c_rt_lib0move(&___nl__4, ntokenizer0get_line(&___nl__5));
#line 67
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 67
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 67
c_rt_lib0clear(&___nl__6);
#line 67
c_rt_lib0clear(&___nl__5);
#line 68
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 68
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 68
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 68
c_rt_lib0move(&___nl__5, ntokenizer0is_type(&___nl__6, ___nl__7));
#line 68
c_rt_lib0clear(&___nl__7);
#line 68
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 68
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 68
c_rt_lib0clear(&___nl__7);
#line 68
c_rt_lib0clear(&___nl__6);
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 68
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 69
c_rt_lib0move(&___nl__6,___get_global_const(126));
#line 69
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(___nl__2, ___nl__6));
#line 69
c_rt_lib0move(&___nl__9,___get_global_const(848));
#line 69
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 69
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 69
c_rt_lib0move(&___nl__8, ntokenizer0eat_type(&___nl__9, ___nl__10));
#line 69
c_rt_lib0clear(&___nl__10);
#line 69
c_rt_lib0move(&___nl__10,___get_global_const(848));
#line 69
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__10, ___nl__9));
#line 69
c_rt_lib0clear(&___nl__10);
#line 69
c_rt_lib0clear(&___nl__9);
#line 69
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(76), ___nl__8, ___get_global_const(98), ___nl__4));
#line 69
c_rt_lib0clear(&___nl__8);
#line 69
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 69
c_rt_lib0clear(&___nl__7);
#line 69
c_rt_lib0move(&___nl__7,___get_global_const(126));
#line 69
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__2, ___nl__7, ___nl__6));
#line 69
c_rt_lib0clear(&___nl__7);
#line 69
c_rt_lib0clear(&___nl__6);
#line 70
goto label_3;
#line 70
label_4:
#line 71
c_rt_lib0move(&___nl__6,___get_global_const(862));
#line 71
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__6));
#line 71
c_rt_lib0clear(&___nl__6);
#line 72
goto label_3;
#line 72
label_3:
#line 72
c_rt_lib0clear(&___nl__5);
#line 73
c_rt_lib0move(&___nl__5,___get_global_const(311));
#line 73
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 73
c_rt_lib0clear(&___nl__5);
#line 73
c_rt_lib0clear(&___nl__4);
#line 74
goto label_2;
#line 74
label_1:
#line 74
c_rt_lib0clear(&___nl__3);
#line 76
label_6:
#line 76
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 76
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 76
c_rt_lib0move(&___nl__5,___get_global_const(863));
#line 76
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 76
c_rt_lib0clear(&___nl__5);
#line 76
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 76
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 76
c_rt_lib0clear(&___nl__5);
#line 76
c_rt_lib0clear(&___nl__4);
#line 76
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 76
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 77
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_def(___ref___0, ___nl__1));
#line 77
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 77
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 79
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(43)));
#line 79
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 79
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 79
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 79
nl_die_arg(___nl__5);
#line 77
label_8:
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 78
c_rt_lib0move(&___nl__7,___get_global_const(711));
#line 78
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(___nl__2, ___nl__7));
#line 78
c_rt_lib0delete(array0push(&___nl__7, ___nl__6));
#line 78
c_rt_lib0move(&___nl__8,___get_global_const(711));
#line 78
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__2, ___nl__8, ___nl__7));
#line 78
c_rt_lib0clear(&___nl__8);
#line 78
c_rt_lib0clear(&___nl__7);
#line 78
c_rt_lib0clear(&___nl__6);
#line 79
goto label_7;
#line 79
label_9:
#line 79
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(43)));
#line 80
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__6));
#line 81
c_rt_lib0clear(&___nl__1);
#line 81
c_rt_lib0clear(&___nl__3);
#line 81
c_rt_lib0clear(&___nl__4);
#line 81
c_rt_lib0clear(&___nl__5);
#line 81
c_rt_lib0clear(&___nl__6);
#line 81
return ___nl__2;
#line 81
c_rt_lib0clear(&___nl__6);
#line 82
goto label_7;
#line 82
label_7:
#line 82
c_rt_lib0clear(&___nl__4);
#line 82
c_rt_lib0clear(&___nl__5);
#line 83
goto label_6;
#line 83
label_5:
#line 83
c_rt_lib0clear(&___nl__3);
#line 85
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 85
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 85
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(824)));
#line 85
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 85
c_rt_lib0clear(&___nl__5);
#line 85
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 85
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 85
c_rt_lib0clear(&___nl__5);
#line 85
c_rt_lib0clear(&___nl__4);
#line 85
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 85
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 85
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 85
c_rt_lib0move(&___nl__4,___get_global_const(864));
#line 85
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__4));
#line 85
c_rt_lib0clear(&___nl__4);
#line 85
goto label_11;
#line 85
label_11:
#line 85
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0clear(&___nl__1);
#line 86
return ___nl__2;
#line 86
c_rt_lib0clear(&___nl__2);
#line 86
c_rt_lib0clear(&___nl__1);
#line 86
return NULL;
}

ImmT nparser_priv0parse_fun_arg_list(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 90
c_rt_lib0move(&___nl__1,___get_global_const(322));
#line 90
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 90
c_rt_lib0clear(&___nl__1);
#line 91
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 92
label_2:
#line 92
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 92
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 92
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 92
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0move(&___nl__4,___get_global_const(848));
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
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 93
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 93
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 93
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 93
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__4, ___get_global_const(72), ___nl__5, ___get_global_const(76), ___nl__6));
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
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 94
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 94
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(257), ___nl__6);
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0clear(&___nl__6);
#line 94
goto label_4;
#line 94
label_4:
#line 94
c_rt_lib0clear(&___nl__4);
#line 96
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 96
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 96
c_rt_lib0move(&___nl__4, ntokenizer0is_type(&___nl__5, ___nl__6));
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 96
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0clear(&___nl__5);
#line 96
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 96
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 97
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 97
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 97
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 97
c_rt_lib0move(&___nl__5, ntokenizer0eat_type(&___nl__6, ___nl__7));
#line 97
c_rt_lib0clear(&___nl__7);
#line 97
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 97
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 97
c_rt_lib0clear(&___nl__7);
#line 97
c_rt_lib0clear(&___nl__6);
#line 97
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 97
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(76), ___nl__6);
#line 97
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0clear(&___nl__6);
#line 98
goto label_5;
#line 98
label_6:
#line 99
c_rt_lib0move(&___nl__5,___get_global_const(865));
#line 99
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__5));
#line 99
c_rt_lib0clear(&___nl__5);
#line 100
goto label_5;
#line 100
label_5:
#line 100
c_rt_lib0clear(&___nl__4);
#line 101
c_rt_lib0move(&___nl__5,___get_global_const(371));
#line 101
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 101
c_rt_lib0clear(&___nl__5);
#line 101
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 101
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 102
c_rt_lib0move(&___nl__7, nparser_priv0parse_type(___ref___0));
#line 102
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(44)));
#line 102
if(c_rt_lib0check_true_native(___nl__6)){ goto label_9;}
#line 102
c_rt_lib0clear(&___nl__1);
#line 102
c_rt_lib0clear(&___nl__2);
#line 102
c_rt_lib0clear(&___nl__3);
#line 102
c_rt_lib0clear(&___nl__4);
#line 102
c_rt_lib0clear(&___nl__5);
#line 102
c_rt_lib0clear(&___nl__6);
#line 102
return ___nl__7;
#line 102
label_9:
#line 102
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__7, ___get_global_const(44)));
#line 102
c_rt_lib0clear(&___nl__6);
#line 102
c_rt_lib0clear(&___nl__7);
#line 103
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(72), ___nl__5));
#line 103
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 103
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(72), ___nl__7);
#line 103
c_rt_lib0clear(&___nl__6);
#line 103
c_rt_lib0clear(&___nl__7);
#line 103
c_rt_lib0clear(&___nl__5);
#line 104
goto label_8;
#line 104
label_8:
#line 104
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 106
c_rt_lib0move(&___nl__5,___get_global_const(172));
#line 106
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 106
c_rt_lib0clear(&___nl__5);
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 106
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 106
c_rt_lib0clear(&___nl__3);
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
goto label_1;
#line 106
goto label_11;
#line 106
label_11:
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
c_rt_lib0clear(&___nl__3);
#line 107
goto label_2;
#line 107
label_1:
#line 107
c_rt_lib0clear(&___nl__2);
#line 108
c_rt_lib0move(&___nl__2,___get_global_const(176));
#line 108
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 108
c_rt_lib0clear(&___nl__2);
#line 109
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 109
c_rt_lib0clear(&___nl__1);
#line 109
return ___nl__2;
#line 109
c_rt_lib0clear(&___nl__2);
#line 109
c_rt_lib0clear(&___nl__1);
#line 109
return NULL;
}

ImmT nparser_priv0parse_fun_def(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 113
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 113
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 113
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 113
c_rt_lib0move(&___nl__4, ntokenizer0get_line(&___nl__5));
#line 113
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 113
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 113
c_rt_lib0clear(&___nl__6);
#line 113
c_rt_lib0clear(&___nl__5);
#line 113
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 113
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 113
c_rt_lib0move(&___nl__8, nast0empty_debug());
#line 113
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(213), ___nl__8, ___get_global_const(209), ___nl__9));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0clear(&___nl__9);
#line 113
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(330)));
#line 113
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(6, ___get_global_const(712), ___nl__3, ___get_global_const(98), ___nl__4, ___get_global_const(73), ___nl__5, ___get_global_const(76), ___nl__6, ___get_global_const(209), ___nl__7, ___get_global_const(328), ___nl__8));
#line 113
c_rt_lib0clear(&___nl__3);
#line 113
c_rt_lib0clear(&___nl__4);
#line 113
c_rt_lib0clear(&___nl__5);
#line 113
c_rt_lib0clear(&___nl__6);
#line 113
c_rt_lib0clear(&___nl__7);
#line 113
c_rt_lib0clear(&___nl__8);
#line 121
c_rt_lib0move(&___nl__3,___get_global_const(863));
#line 121
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__3));
#line 121
c_rt_lib0clear(&___nl__3);
#line 122
c_rt_lib0move(&___nl__4, nparser_priv0eat_text(___ref___0));
#line 122
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 122
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 122
c_rt_lib0clear(&___nl__1);
#line 122
c_rt_lib0clear(&___nl__2);
#line 122
c_rt_lib0clear(&___nl__3);
#line 122
return ___nl__4;
#line 122
label_1:
#line 122
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 122
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(76), ___nl__5);
#line 122
c_rt_lib0clear(&___nl__3);
#line 122
c_rt_lib0clear(&___nl__4);
#line 122
c_rt_lib0clear(&___nl__5);
#line 123
c_rt_lib0move(&___nl__4,___get_global_const(579));
#line 123
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 123
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 123
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 124
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(76)));
#line 124
c_rt_lib0move(&___nl__4, c_rt_lib0ne(___nl__4, ___nl__1));
#line 124
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 124
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 125
c_rt_lib0move(&___nl__5,___get_global_const(866));
#line 125
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(76)));
#line 125
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 125
c_rt_lib0clear(&___nl__6);
#line 125
c_rt_lib0move(&___nl__6,___get_global_const(867));
#line 125
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 125
c_rt_lib0clear(&___nl__6);
#line 125
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 125
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__5));
#line 125
c_rt_lib0clear(&___nl__5);
#line 126
goto label_5;
#line 126
label_5:
#line 126
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0move(&___nl__5, nparser_priv0eat_text(___ref___0));
#line 127
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 127
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 127
c_rt_lib0clear(&___nl__1);
#line 127
c_rt_lib0clear(&___nl__2);
#line 127
c_rt_lib0clear(&___nl__3);
#line 127
c_rt_lib0clear(&___nl__4);
#line 127
return ___nl__5;
#line 127
label_6:
#line 127
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 127
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(76), ___nl__6);
#line 127
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0clear(&___nl__5);
#line 127
c_rt_lib0clear(&___nl__6);
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 128
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 128
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(328), ___nl__5);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0clear(&___nl__5);
#line 129
goto label_3;
#line 129
label_3:
#line 129
c_rt_lib0clear(&___nl__3);
#line 130
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_arg_list(___ref___0));
#line 130
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 130
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 130
c_rt_lib0clear(&___nl__1);
#line 130
c_rt_lib0clear(&___nl__2);
#line 130
c_rt_lib0clear(&___nl__3);
#line 130
return ___nl__4;
#line 130
label_7:
#line 130
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 130
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(73), ___nl__5);
#line 130
c_rt_lib0clear(&___nl__3);
#line 130
c_rt_lib0clear(&___nl__4);
#line 130
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 131
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 131
c_rt_lib0move(&___nl__5,___get_global_const(371));
#line 131
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 131
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 131
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 131
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0clear(&___nl__4);
#line 131
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 131
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 132
c_rt_lib0move(&___nl__4,___get_global_const(371));
#line 132
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 132
c_rt_lib0clear(&___nl__4);
#line 133
c_rt_lib0move(&___nl__6, nparser_priv0parse_type(___ref___0));
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 133
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 133
c_rt_lib0clear(&___nl__1);
#line 133
c_rt_lib0clear(&___nl__2);
#line 133
c_rt_lib0clear(&___nl__3);
#line 133
c_rt_lib0clear(&___nl__4);
#line 133
c_rt_lib0clear(&___nl__5);
#line 133
return ___nl__6;
#line 133
label_10:
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 133
c_rt_lib0clear(&___nl__5);
#line 133
c_rt_lib0clear(&___nl__6);
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(72), ___nl__4));
#line 134
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 134
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(712), ___nl__6);
#line 134
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0clear(&___nl__6);
#line 134
c_rt_lib0clear(&___nl__4);
#line 135
goto label_9;
#line 135
label_9:
#line 135
c_rt_lib0clear(&___nl__3);
#line 137
c_rt_lib0move(&___nl__4, nparser_priv0parse_block(___ref___0));
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 137
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 137
c_rt_lib0clear(&___nl__1);
#line 137
c_rt_lib0clear(&___nl__2);
#line 137
c_rt_lib0clear(&___nl__3);
#line 137
return ___nl__4;
#line 137
label_11:
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 137
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(209), ___nl__5);
#line 137
c_rt_lib0clear(&___nl__3);
#line 137
c_rt_lib0clear(&___nl__4);
#line 137
c_rt_lib0clear(&___nl__5);
#line 138
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__2));
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
return ___nl__3;
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
return NULL;
}

ImmT nparser_priv0parse_fun_val_arg_list(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 142
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 143
label_2:
#line 143
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 143
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 143
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 143
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 143
c_rt_lib0clear(&___nl__4);
#line 143
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 143
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 143
c_rt_lib0clear(&___nl__4);
#line 143
c_rt_lib0clear(&___nl__3);
#line 143
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 143
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 143
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 144
c_rt_lib0move(&___nl__5, nparser_priv0parse_fun_val_arg(___ref___0));
#line 144
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 144
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 144
c_rt_lib0clear(&___nl__1);
#line 144
c_rt_lib0clear(&___nl__2);
#line 144
c_rt_lib0clear(&___nl__3);
#line 144
c_rt_lib0clear(&___nl__4);
#line 144
return ___nl__5;
#line 144
label_3:
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 144
c_rt_lib0clear(&___nl__4);
#line 144
c_rt_lib0clear(&___nl__5);
#line 145
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 146
c_rt_lib0move(&___nl__5,___get_global_const(172));
#line 146
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 146
c_rt_lib0clear(&___nl__5);
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 146
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
goto label_1;
#line 146
goto label_5;
#line 146
label_5:
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0clear(&___nl__3);
#line 147
goto label_2;
#line 147
label_1:
#line 147
c_rt_lib0clear(&___nl__2);
#line 148
c_rt_lib0move(&___nl__2,___get_global_const(176));
#line 148
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 148
c_rt_lib0clear(&___nl__2);
#line 150
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 150
c_rt_lib0clear(&___nl__1);
#line 150
return ___nl__2;
#line 150
c_rt_lib0clear(&___nl__2);
#line 150
c_rt_lib0clear(&___nl__1);
#line 150
return NULL;
}

ImmT nparser_priv0parse_expr_list(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 155
label_2:
#line 155
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 155
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 155
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 155
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 155
c_rt_lib0clear(&___nl__4);
#line 155
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 155
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 155
c_rt_lib0clear(&___nl__4);
#line 155
c_rt_lib0clear(&___nl__3);
#line 155
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 155
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 155
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 156
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 156
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 156
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 156
c_rt_lib0clear(&___nl__1);
#line 156
c_rt_lib0clear(&___nl__2);
#line 156
c_rt_lib0clear(&___nl__3);
#line 156
c_rt_lib0clear(&___nl__4);
#line 156
return ___nl__5;
#line 156
label_3:
#line 156
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 156
c_rt_lib0clear(&___nl__4);
#line 156
c_rt_lib0clear(&___nl__5);
#line 157
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 158
c_rt_lib0move(&___nl__5,___get_global_const(172));
#line 158
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 158
c_rt_lib0clear(&___nl__5);
#line 158
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 158
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 158
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
goto label_1;
#line 158
goto label_5;
#line 158
label_5:
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0clear(&___nl__3);
#line 159
goto label_2;
#line 159
label_1:
#line 159
c_rt_lib0clear(&___nl__2);
#line 160
c_rt_lib0move(&___nl__2,___get_global_const(176));
#line 160
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 160
c_rt_lib0clear(&___nl__2);
#line 161
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
return ___nl__2;
#line 161
c_rt_lib0clear(&___nl__2);
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
return NULL;
}

ImmT nparser_priv0parse_fun_val_arg(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 165
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 166
c_rt_lib0move(&___nl__3,___get_global_const(5));
#line 166
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 166
c_rt_lib0clear(&___nl__3);
#line 166
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 166
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 166
goto label_1;
#line 166
label_2:
#line 166
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 166
label_1:
#line 166
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 166
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(257), ___nl__3);
#line 166
c_rt_lib0clear(&___nl__2);
#line 166
c_rt_lib0clear(&___nl__3);
#line 167
c_rt_lib0move(&___nl__3, nparser_priv0parse_expr(___ref___0));
#line 167
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(44)));
#line 167
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 167
c_rt_lib0clear(&___nl__1);
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
return ___nl__3;
#line 167
label_3:
#line 167
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__3, ___get_global_const(44)));
#line 167
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(234), ___nl__4);
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
c_rt_lib0clear(&___nl__3);
#line 167
c_rt_lib0clear(&___nl__4);
#line 168
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 168
c_rt_lib0clear(&___nl__1);
#line 168
return ___nl__2;
#line 168
c_rt_lib0clear(&___nl__2);
#line 168
c_rt_lib0clear(&___nl__1);
#line 168
return NULL;
}

ImmT nparser_priv0parse_fun_label(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 172
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 172
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 172
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(76), ___nl__2, ___get_global_const(99), ___nl__3));
#line 172
c_rt_lib0clear(&___nl__2);
#line 172
c_rt_lib0clear(&___nl__3);
#line 173
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 173
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 173
c_rt_lib0move(&___nl__2, ntokenizer0is_type(&___nl__3, ___nl__4));
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 173
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0clear(&___nl__3);
#line 173
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 173
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 173
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 174
c_rt_lib0move(&___nl__3,___get_global_const(868));
#line 174
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 174
c_rt_lib0clear(&___nl__3);
#line 175
c_rt_lib0clear(&___nl__2);
#line 175
return ___nl__1;
#line 176
goto label_2;
#line 176
label_2:
#line 176
c_rt_lib0clear(&___nl__2);
#line 177
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 177
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 177
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 177
c_rt_lib0move(&___nl__2, ntokenizer0eat_type(&___nl__3, ___nl__4));
#line 177
c_rt_lib0clear(&___nl__4);
#line 177
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 177
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 177
c_rt_lib0clear(&___nl__4);
#line 177
c_rt_lib0clear(&___nl__3);
#line 177
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 177
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(99), ___nl__3);
#line 177
c_rt_lib0clear(&___nl__2);
#line 177
c_rt_lib0clear(&___nl__3);
#line 178
c_rt_lib0move(&___nl__4,___get_global_const(579));
#line 178
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 178
c_rt_lib0clear(&___nl__4);
#line 178
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 178
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 178
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 178
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 178
c_rt_lib0move(&___nl__2, ntokenizer0is_text(&___nl__4));
#line 178
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 178
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0clear(&___nl__4);
#line 178
label_5:
#line 178
c_rt_lib0clear(&___nl__3);
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 178
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 179
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 179
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 179
c_rt_lib0move(&___nl__3, ntokenizer0eat_text(&___nl__4));
#line 179
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 179
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 179
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(76), ___nl__4);
#line 179
c_rt_lib0clear(&___nl__3);
#line 179
c_rt_lib0clear(&___nl__4);
#line 180
goto label_3;
#line 180
label_4:
#line 181
c_rt_lib0move(&___nl__3,___get_global_const(869));
#line 181
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 181
c_rt_lib0clear(&___nl__3);
#line 182
goto label_3;
#line 182
label_3:
#line 182
c_rt_lib0clear(&___nl__2);
#line 183
return ___nl__1;
#line 183
c_rt_lib0clear(&___nl__1);
#line 183
return NULL;
}

ImmT nparser_priv0parse_label(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 187
c_rt_lib0move(&___nl__2,___get_global_const(848));
#line 187
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 187
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 187
c_rt_lib0move(&___nl__1, ntokenizer0eat_type(&___nl__2, ___nl__3));
#line 187
c_rt_lib0clear(&___nl__3);
#line 187
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 187
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 187
c_rt_lib0clear(&___nl__3);
#line 187
c_rt_lib0clear(&___nl__2);
#line 188
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 188
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 188
c_rt_lib0move(&___nl__5,___get_global_const(322));
#line 188
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 188
c_rt_lib0clear(&___nl__5);
#line 188
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 188
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 188
c_rt_lib0clear(&___nl__5);
#line 188
c_rt_lib0clear(&___nl__4);
#line 188
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 188
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 188
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 188
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 188
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 188
c_rt_lib0move(&___nl__5,___get_global_const(579));
#line 188
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 188
c_rt_lib0clear(&___nl__5);
#line 188
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 188
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 188
c_rt_lib0clear(&___nl__5);
#line 188
c_rt_lib0clear(&___nl__4);
#line 188
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 188
label_3:
#line 188
c_rt_lib0clear(&___nl__3);
#line 188
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 188
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 188
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(772), ___nl__1));
#line 188
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__3));
#line 188
c_rt_lib0clear(&___nl__1);
#line 188
c_rt_lib0clear(&___nl__2);
#line 188
return ___nl__3;
#line 188
c_rt_lib0clear(&___nl__3);
#line 188
goto label_2;
#line 188
label_2:
#line 188
c_rt_lib0clear(&___nl__2);
#line 189
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 189
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 189
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 189
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(99), ___nl__3, ___get_global_const(76), ___nl__4, ___get_global_const(73), ___nl__5));
#line 189
c_rt_lib0clear(&___nl__3);
#line 189
c_rt_lib0clear(&___nl__4);
#line 189
c_rt_lib0clear(&___nl__5);
#line 190
c_rt_lib0move(&___nl__4,___get_global_const(579));
#line 190
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 190
c_rt_lib0clear(&___nl__4);
#line 190
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 190
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 191
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 191
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(99), ___nl__4);
#line 191
c_rt_lib0clear(&___nl__4);
#line 192
c_rt_lib0move(&___nl__5, nparser_priv0eat_text(___ref___0));
#line 192
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 192
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 192
c_rt_lib0clear(&___nl__1);
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0clear(&___nl__3);
#line 192
c_rt_lib0clear(&___nl__4);
#line 192
return ___nl__5;
#line 192
label_6:
#line 192
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 192
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(76), ___nl__6);
#line 192
c_rt_lib0clear(&___nl__4);
#line 192
c_rt_lib0clear(&___nl__5);
#line 192
c_rt_lib0clear(&___nl__6);
#line 193
goto label_4;
#line 193
label_5:
#line 194
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 194
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(76), ___nl__4);
#line 194
c_rt_lib0clear(&___nl__4);
#line 195
goto label_4;
#line 195
label_4:
#line 195
c_rt_lib0clear(&___nl__3);
#line 197
c_rt_lib0move(&___nl__3,___get_global_const(322));
#line 197
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__3));
#line 197
c_rt_lib0clear(&___nl__3);
#line 198
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_val_arg_list(___ref___0));
#line 198
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 198
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 198
c_rt_lib0clear(&___nl__1);
#line 198
c_rt_lib0clear(&___nl__2);
#line 198
c_rt_lib0clear(&___nl__3);
#line 198
return ___nl__4;
#line 198
label_7:
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 198
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(73), ___nl__5);
#line 198
c_rt_lib0clear(&___nl__3);
#line 198
c_rt_lib0clear(&___nl__4);
#line 198
c_rt_lib0clear(&___nl__5);
#line 199
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(735), ___nl__2));
#line 199
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__3));
#line 199
c_rt_lib0clear(&___nl__1);
#line 199
c_rt_lib0clear(&___nl__2);
#line 199
return ___nl__3;
#line 199
c_rt_lib0clear(&___nl__3);
#line 199
c_rt_lib0clear(&___nl__1);
#line 199
c_rt_lib0clear(&___nl__2);
#line 199
return NULL;
}

ImmT nparser_priv0parse_hash_key(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 203
c_rt_lib0move(&___nl__2,___get_global_const(848));
#line 203
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 203
c_rt_lib0move(&___nl__1, ntokenizer0is_text(&___nl__2));
#line 203
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 203
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 203
c_rt_lib0clear(&___nl__3);
#line 203
c_rt_lib0clear(&___nl__2);
#line 203
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 203
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 203
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 203
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 203
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(778), ___nl__2));
#line 203
c_rt_lib0clear(&___nl__1);
#line 203
return ___nl__2;
#line 203
c_rt_lib0clear(&___nl__2);
#line 203
goto label_2;
#line 203
label_2:
#line 203
c_rt_lib0clear(&___nl__1);
#line 204
c_rt_lib0move(&___nl__2,___get_global_const(848));
#line 204
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 204
c_rt_lib0move(&___nl__1, ntokenizer0eat_text(&___nl__2));
#line 204
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 204
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 204
c_rt_lib0clear(&___nl__3);
#line 204
c_rt_lib0clear(&___nl__2);
#line 205
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(778), ___nl__1));
#line 205
c_rt_lib0clear(&___nl__1);
#line 205
return ___nl__2;
#line 205
c_rt_lib0clear(&___nl__2);
#line 205
c_rt_lib0clear(&___nl__1);
#line 205
return NULL;
}

ImmT nparser_priv0parse_hash(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 209
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 210
c_rt_lib0move(&___nl__2,___get_global_const(168));
#line 210
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 210
c_rt_lib0clear(&___nl__2);
#line 211
label_2:
#line 211
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 211
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 211
c_rt_lib0move(&___nl__4,___get_global_const(169));
#line 211
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 211
c_rt_lib0clear(&___nl__4);
#line 211
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 211
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 211
c_rt_lib0clear(&___nl__4);
#line 211
c_rt_lib0clear(&___nl__3);
#line 211
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 211
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 211
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 212
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 212
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 212
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(279), ___nl__4, ___get_global_const(234), ___nl__5));
#line 212
c_rt_lib0clear(&___nl__4);
#line 212
c_rt_lib0clear(&___nl__5);
#line 213
c_rt_lib0move(&___nl__4, nparser_priv0parse_hash_key(___ref___0));
#line 213
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 213
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(279), ___nl__5);
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0clear(&___nl__5);
#line 214
c_rt_lib0move(&___nl__4,___get_global_const(170));
#line 214
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 214
c_rt_lib0clear(&___nl__4);
#line 215
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 215
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 215
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 215
c_rt_lib0clear(&___nl__1);
#line 215
c_rt_lib0clear(&___nl__2);
#line 215
c_rt_lib0clear(&___nl__3);
#line 215
c_rt_lib0clear(&___nl__4);
#line 215
return ___nl__5;
#line 215
label_3:
#line 215
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 215
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(234), ___nl__6);
#line 215
c_rt_lib0clear(&___nl__4);
#line 215
c_rt_lib0clear(&___nl__5);
#line 215
c_rt_lib0clear(&___nl__6);
#line 216
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 217
c_rt_lib0move(&___nl__5,___get_global_const(172));
#line 217
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 217
c_rt_lib0clear(&___nl__5);
#line 217
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 217
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 217
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 217
c_rt_lib0clear(&___nl__3);
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
goto label_1;
#line 217
goto label_5;
#line 217
label_5:
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0clear(&___nl__3);
#line 218
goto label_2;
#line 218
label_1:
#line 218
c_rt_lib0clear(&___nl__2);
#line 219
c_rt_lib0move(&___nl__2,___get_global_const(169));
#line 219
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 219
c_rt_lib0clear(&___nl__2);
#line 220
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 220
c_rt_lib0clear(&___nl__1);
#line 220
return ___nl__2;
#line 220
c_rt_lib0clear(&___nl__2);
#line 220
c_rt_lib0clear(&___nl__1);
#line 220
return NULL;
}

ImmT nparser_priv0parse_arr(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 224
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 225
c_rt_lib0move(&___nl__2,___get_global_const(174));
#line 225
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 225
c_rt_lib0clear(&___nl__2);
#line 226
label_2:
#line 226
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 226
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 226
c_rt_lib0move(&___nl__4,___get_global_const(175));
#line 226
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 226
c_rt_lib0clear(&___nl__4);
#line 226
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 226
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 226
c_rt_lib0clear(&___nl__4);
#line 226
c_rt_lib0clear(&___nl__3);
#line 226
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 226
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 226
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 227
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 227
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 227
c_rt_lib0clear(&___nl__1);
#line 227
c_rt_lib0clear(&___nl__2);
#line 227
c_rt_lib0clear(&___nl__3);
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
return ___nl__5;
#line 227
label_3:
#line 227
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0clear(&___nl__5);
#line 228
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 229
c_rt_lib0move(&___nl__5,___get_global_const(172));
#line 229
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 229
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 229
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 229
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 229
c_rt_lib0clear(&___nl__3);
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
goto label_1;
#line 229
goto label_5;
#line 229
label_5:
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
c_rt_lib0clear(&___nl__3);
#line 230
goto label_2;
#line 230
label_1:
#line 230
c_rt_lib0clear(&___nl__2);
#line 231
c_rt_lib0move(&___nl__2,___get_global_const(175));
#line 231
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 231
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
return ___nl__2;
#line 232
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
return NULL;
}

ImmT nparser_priv0parse_expr(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 236
c_rt_lib0move(&___nl__3, nparser_priv0parse_expr_rec(___ref___0, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(44)));
#line 236
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 236
c_rt_lib0clear(&___nl__1);
#line 236
c_rt_lib0clear(&___nl__2);
#line 236
return ___nl__3;
#line 236
label_1:
#line 236
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(44)));
#line 236
c_rt_lib0clear(&___nl__2);
#line 236
c_rt_lib0clear(&___nl__3);
#line 237
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 237
c_rt_lib0move(&___nl__2, nparser_priv0parse_expr_rec_left(___ref___0, ___nl__1, ___nl__3));
#line 237
c_rt_lib0clear(&___nl__3);
#line 237
c_rt_lib0clear(&___nl__1);
#line 237
return ___nl__2;
#line 237
c_rt_lib0clear(&___nl__2);
#line 237
c_rt_lib0clear(&___nl__1);
#line 237
return NULL;
}

ImmT nparser_priv0parse_type(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 240
c_rt_lib0move(&___nl__2,___get_global_const(184));
#line 240
c_rt_lib0move(&___nl__1, nparser_priv0try_eat(___ref___0, ___nl__2));
#line 240
c_rt_lib0clear(&___nl__2);
#line 240
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 240
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 241
c_rt_lib0move(&___nl__3,___get_global_const(184));
#line 241
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_label(___ref___0));
#line 241
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(781), ___nl__4));
#line 241
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(401), ___nl__3, ___get_global_const(234), ___nl__4));
#line 241
c_rt_lib0clear(&___nl__3);
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(780), ___nl__2));
#line 241
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__2));
#line 241
c_rt_lib0clear(&___nl__1);
#line 241
return ___nl__2;
#line 241
c_rt_lib0clear(&___nl__2);
#line 242
goto label_2;
#line 242
label_2:
#line 242
c_rt_lib0clear(&___nl__1);
#line 243
c_rt_lib0move(&___nl__2,___get_global_const(848));
#line 243
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 243
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 243
c_rt_lib0move(&___nl__1, ntokenizer0is_type(&___nl__2, ___nl__3));
#line 243
c_rt_lib0clear(&___nl__3);
#line 243
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 243
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 243
c_rt_lib0clear(&___nl__3);
#line 243
c_rt_lib0clear(&___nl__2);
#line 243
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 243
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 244
c_rt_lib0move(&___nl__4, nparser_priv0parse_label(___ref___0));
#line 244
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 244
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 244
c_rt_lib0clear(&___nl__1);
#line 244
c_rt_lib0clear(&___nl__2);
#line 244
c_rt_lib0clear(&___nl__3);
#line 244
return ___nl__4;
#line 244
label_5:
#line 244
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 244
c_rt_lib0clear(&___nl__3);
#line 244
c_rt_lib0clear(&___nl__4);
#line 245
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 245
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(735)));
#line 245
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 245
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 245
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__2));
#line 245
c_rt_lib0clear(&___nl__1);
#line 245
c_rt_lib0clear(&___nl__2);
#line 245
c_rt_lib0clear(&___nl__3);
#line 245
return ___nl__4;
#line 245
c_rt_lib0clear(&___nl__4);
#line 245
goto label_7;
#line 245
label_7:
#line 245
c_rt_lib0clear(&___nl__3);
#line 245
c_rt_lib0clear(&___nl__2);
#line 246
goto label_4;
#line 246
label_4:
#line 246
c_rt_lib0clear(&___nl__1);
#line 247
c_rt_lib0move(&___nl__1,___get_global_const(870));
#line 247
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__1));
#line 247
c_rt_lib0clear(&___nl__1);
#line 248
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 248
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 248
return ___nl__1;
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
return NULL;
}

ImmT nparser_priv0parse_expr_rec_left(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
nparser_priv0__const__init();
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
#line 251
label_2:
#line 252
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 252
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 252
c_rt_lib0move(&___nl__3, ntokenizer0get_token(&___nl__4));
#line 252
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 252
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 252
c_rt_lib0clear(&___nl__5);
#line 252
c_rt_lib0clear(&___nl__4);
#line 254
c_rt_lib0move(&___nl__6, nast0get_ternary_ops());
#line 254
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__3));
#line 254
c_rt_lib0clear(&___nl__6);
#line 254
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 254
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 255
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 256
c_rt_lib0move(&___nl__6,___get_global_const(798));
#line 256
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 256
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 256
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 257
c_rt_lib0move(&___nl__8, nast0get_ternary_ops());
#line 257
c_rt_lib0move(&___nl__9,___get_global_const(798));
#line 257
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__9));
#line 257
c_rt_lib0clear(&___nl__9);
#line 257
c_rt_lib0clear(&___nl__8);
#line 258
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(795)));
#line 258
c_rt_lib0move(&___nl__8, c_rt_lib0lt(___nl__8, ___nl__2));
#line 258
if(c_rt_lib0check_true_native(___nl__8)){ goto label_9;}
#line 258
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(795)));
#line 258
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__2));
#line 258
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 258
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 258
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(796)));
#line 258
c_rt_lib0move(&___nl__11,___get_global_const(235));
#line 258
c_rt_lib0move(&___nl__8, ov0is(___nl__10, ___nl__11));
#line 258
c_rt_lib0clear(&___nl__11);
#line 258
c_rt_lib0clear(&___nl__10);
#line 258
label_10:
#line 258
c_rt_lib0clear(&___nl__9);
#line 258
label_9:
#line 258
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 258
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 258
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 258
c_rt_lib0clear(&___nl__1);
#line 258
c_rt_lib0clear(&___nl__2);
#line 258
c_rt_lib0clear(&___nl__3);
#line 258
c_rt_lib0clear(&___nl__4);
#line 258
c_rt_lib0clear(&___nl__5);
#line 258
c_rt_lib0clear(&___nl__6);
#line 258
c_rt_lib0clear(&___nl__7);
#line 258
c_rt_lib0clear(&___nl__8);
#line 258
return ___nl__9;
#line 258
c_rt_lib0clear(&___nl__9);
#line 258
goto label_8;
#line 258
label_8:
#line 258
c_rt_lib0clear(&___nl__8);
#line 259
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 260
c_rt_lib0move(&___nl__10, nparser_priv0parse_expr(___ref___0));
#line 260
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(44)));
#line 260
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 260
c_rt_lib0clear(&___nl__1);
#line 260
c_rt_lib0clear(&___nl__2);
#line 260
c_rt_lib0clear(&___nl__3);
#line 260
c_rt_lib0clear(&___nl__4);
#line 260
c_rt_lib0clear(&___nl__5);
#line 260
c_rt_lib0clear(&___nl__6);
#line 260
c_rt_lib0clear(&___nl__7);
#line 260
c_rt_lib0clear(&___nl__8);
#line 260
c_rt_lib0clear(&___nl__9);
#line 260
return ___nl__10;
#line 260
label_11:
#line 260
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__10, ___get_global_const(44)));
#line 260
c_rt_lib0clear(&___nl__9);
#line 260
c_rt_lib0clear(&___nl__10);
#line 261
c_rt_lib0move(&___nl__9,___get_global_const(371));
#line 261
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__9));
#line 261
c_rt_lib0clear(&___nl__9);
#line 262
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(795)));
#line 262
c_rt_lib0move(&___nl__11, nparser_priv0parse_expr_rec(___ref___0, ___nl__12));
#line 262
c_rt_lib0clear(&___nl__12);
#line 262
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(44)));
#line 262
if(c_rt_lib0check_true_native(___nl__10)){ goto label_12;}
#line 262
c_rt_lib0clear(&___nl__1);
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
c_rt_lib0clear(&___nl__3);
#line 262
c_rt_lib0clear(&___nl__4);
#line 262
c_rt_lib0clear(&___nl__5);
#line 262
c_rt_lib0clear(&___nl__6);
#line 262
c_rt_lib0clear(&___nl__7);
#line 262
c_rt_lib0clear(&___nl__8);
#line 262
c_rt_lib0clear(&___nl__9);
#line 262
c_rt_lib0clear(&___nl__10);
#line 262
return ___nl__11;
#line 262
label_12:
#line 262
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__11, ___get_global_const(44)));
#line 262
c_rt_lib0clear(&___nl__10);
#line 262
c_rt_lib0clear(&___nl__11);
#line 263
c_rt_lib0move(&___nl__11,___get_global_const(798));
#line 263
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(4, ___get_global_const(784), ___nl__1, ___get_global_const(785), ___nl__8, ___get_global_const(786), ___nl__9, ___get_global_const(401), ___nl__11));
#line 263
c_rt_lib0clear(&___nl__11);
#line 263
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(776), ___nl__10));
#line 263
c_rt_lib0copy(&___nl__1, ___nl__10);
#line 263
c_rt_lib0clear(&___nl__10);
#line 263
c_rt_lib0clear(&___nl__7);
#line 263
c_rt_lib0clear(&___nl__8);
#line 263
c_rt_lib0clear(&___nl__9);
#line 264
goto label_5;
#line 264
label_6:
#line 265
c_rt_lib0move(&___nl__7,___get_global_const(871));
#line 265
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 265
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__7));
#line 265
c_rt_lib0clear(&___nl__1);
#line 265
c_rt_lib0clear(&___nl__2);
#line 265
c_rt_lib0clear(&___nl__3);
#line 265
c_rt_lib0clear(&___nl__4);
#line 265
c_rt_lib0clear(&___nl__5);
#line 265
c_rt_lib0clear(&___nl__6);
#line 265
return ___nl__7;
#line 265
c_rt_lib0clear(&___nl__7);
#line 266
goto label_5;
#line 266
label_5:
#line 266
c_rt_lib0clear(&___nl__6);
#line 267
goto label_3;
#line 267
label_4:
#line 267
c_rt_lib0move(&___nl__6, nast0get_bin_ops());
#line 267
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__3));
#line 267
c_rt_lib0clear(&___nl__6);
#line 267
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 267
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 268
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 269
c_rt_lib0move(&___nl__7, nast0get_bin_ops());
#line 269
c_rt_lib0move(&___nl__6, hash0get_value(___nl__7, ___nl__3));
#line 269
c_rt_lib0clear(&___nl__7);
#line 270
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(795)));
#line 270
c_rt_lib0move(&___nl__7, c_rt_lib0lt(___nl__7, ___nl__2));
#line 270
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 270
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(795)));
#line 270
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__2));
#line 270
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 270
if(c_rt_lib0check_true_native(___nl__8)){ goto label_17;}
#line 270
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(796)));
#line 270
c_rt_lib0move(&___nl__10,___get_global_const(235));
#line 270
c_rt_lib0move(&___nl__7, ov0is(___nl__9, ___nl__10));
#line 270
c_rt_lib0clear(&___nl__10);
#line 270
c_rt_lib0clear(&___nl__9);
#line 270
label_17:
#line 270
c_rt_lib0clear(&___nl__8);
#line 270
label_16:
#line 270
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 270
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 270
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 270
c_rt_lib0clear(&___nl__1);
#line 270
c_rt_lib0clear(&___nl__2);
#line 270
c_rt_lib0clear(&___nl__3);
#line 270
c_rt_lib0clear(&___nl__4);
#line 270
c_rt_lib0clear(&___nl__5);
#line 270
c_rt_lib0clear(&___nl__6);
#line 270
c_rt_lib0clear(&___nl__7);
#line 270
return ___nl__8;
#line 270
c_rt_lib0clear(&___nl__8);
#line 270
goto label_15;
#line 270
label_15:
#line 270
c_rt_lib0clear(&___nl__7);
#line 271
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__3));
#line 272
c_rt_lib0move(&___nl__7,___get_global_const(773));
#line 272
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__4, ___nl__7));
#line 272
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 272
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 273
c_rt_lib0move(&___nl__9, nparser_priv0parse_hash_key(___ref___0));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(401), ___nl__4, ___get_global_const(235), ___nl__1, ___get_global_const(236), ___nl__9));
#line 273
c_rt_lib0clear(&___nl__9);
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__8));
#line 273
c_rt_lib0copy(&___nl__1, ___nl__8);
#line 273
c_rt_lib0clear(&___nl__8);
#line 274
goto label_18;
#line 274
label_19:
#line 274
c_rt_lib0move(&___nl__7,___get_global_const(807));
#line 274
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__4, ___nl__7));
#line 274
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 274
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 275
c_rt_lib0move(&___nl__8,___get_global_const(371));
#line 275
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__8));
#line 275
c_rt_lib0clear(&___nl__8);
#line 276
c_rt_lib0move(&___nl__8, nparser_priv0parse_variant_label(___ref___0));
#line 277
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(221)));
#line 277
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(401), ___nl__10, ___get_global_const(235), ___nl__1, ___get_global_const(821), ___nl__8));
#line 277
c_rt_lib0clear(&___nl__10);
#line 277
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(779), ___nl__9));
#line 277
c_rt_lib0copy(&___nl__1, ___nl__9);
#line 277
c_rt_lib0clear(&___nl__9);
#line 277
c_rt_lib0clear(&___nl__8);
#line 278
goto label_18;
#line 278
label_20:
#line 278
c_rt_lib0move(&___nl__7,___get_global_const(805));
#line 278
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__4, ___nl__7));
#line 278
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 278
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 279
c_rt_lib0move(&___nl__8,___get_global_const(371));
#line 279
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__8));
#line 279
c_rt_lib0clear(&___nl__8);
#line 280
c_rt_lib0move(&___nl__8, nparser_priv0parse_variant_label(___ref___0));
#line 281
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(220)));
#line 281
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(401), ___nl__10, ___get_global_const(235), ___nl__1, ___get_global_const(821), ___nl__8));
#line 281
c_rt_lib0clear(&___nl__10);
#line 281
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(779), ___nl__9));
#line 281
c_rt_lib0copy(&___nl__1, ___nl__9);
#line 281
c_rt_lib0clear(&___nl__9);
#line 281
c_rt_lib0clear(&___nl__8);
#line 282
goto label_18;
#line 282
label_21:
#line 283
c_rt_lib0move(&___nl__8,___get_global_const(787));
#line 283
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 283
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 283
if(c_rt_lib0check_true_native(___nl__8)){ goto label_23;}
#line 283
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___0, ___nl__1));
#line 283
goto label_23;
#line 283
label_23:
#line 283
c_rt_lib0clear(&___nl__8);
#line 284
c_rt_lib0move(&___nl__12, nast0get_bin_ops());
#line 284
c_rt_lib0move(&___nl__11, hash0get_value(___nl__12, ___nl__4));
#line 284
c_rt_lib0clear(&___nl__12);
#line 284
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(795)));
#line 284
c_rt_lib0move(&___nl__10, nparser_priv0parse_expr_rec(___ref___0, ___nl__11));
#line 284
c_rt_lib0clear(&___nl__11);
#line 284
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(44)));
#line 284
if(c_rt_lib0check_true_native(___nl__9)){ goto label_24;}
#line 284
c_rt_lib0clear(&___nl__1);
#line 284
c_rt_lib0clear(&___nl__2);
#line 284
c_rt_lib0clear(&___nl__3);
#line 284
c_rt_lib0clear(&___nl__4);
#line 284
c_rt_lib0clear(&___nl__5);
#line 284
c_rt_lib0clear(&___nl__6);
#line 284
c_rt_lib0clear(&___nl__7);
#line 284
c_rt_lib0clear(&___nl__8);
#line 284
c_rt_lib0clear(&___nl__9);
#line 284
return ___nl__10;
#line 284
label_24:
#line 284
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__10, ___get_global_const(44)));
#line 284
c_rt_lib0clear(&___nl__9);
#line 284
c_rt_lib0clear(&___nl__10);
#line 285
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(235), ___nl__1, ___get_global_const(401), ___nl__4, ___get_global_const(236), ___nl__8));
#line 285
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__9));
#line 285
c_rt_lib0copy(&___nl__1, ___nl__9);
#line 285
c_rt_lib0clear(&___nl__9);
#line 285
c_rt_lib0clear(&___nl__8);
#line 290
goto label_18;
#line 290
label_18:
#line 290
c_rt_lib0clear(&___nl__7);
#line 290
c_rt_lib0clear(&___nl__6);
#line 291
goto label_3;
#line 291
label_13:
#line 291
c_rt_lib0move(&___nl__6,___get_global_const(174));
#line 291
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 291
c_rt_lib0clear(&___nl__6);
#line 291
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 291
if(c_rt_lib0check_true_native(___nl__5)){ goto label_25;}
#line 292
c_rt_lib0move(&___nl__6,___get_global_const(774));
#line 292
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 292
c_rt_lib0clear(&___nl__6);
#line 293
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 293
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 293
if(c_rt_lib0check_true_native(___nl__7)){ goto label_26;}
#line 293
c_rt_lib0clear(&___nl__1);
#line 293
c_rt_lib0clear(&___nl__2);
#line 293
c_rt_lib0clear(&___nl__3);
#line 293
c_rt_lib0clear(&___nl__4);
#line 293
c_rt_lib0clear(&___nl__5);
#line 293
c_rt_lib0clear(&___nl__6);
#line 293
c_rt_lib0clear(&___nl__7);
#line 293
return ___nl__8;
#line 293
label_26:
#line 293
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 293
c_rt_lib0clear(&___nl__7);
#line 293
c_rt_lib0clear(&___nl__8);
#line 294
c_rt_lib0move(&___nl__7,___get_global_const(175));
#line 294
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 294
c_rt_lib0clear(&___nl__7);
#line 295
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(401), ___nl__4, ___get_global_const(235), ___nl__1, ___get_global_const(236), ___nl__6));
#line 295
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__7));
#line 295
c_rt_lib0copy(&___nl__1, ___nl__7);
#line 295
c_rt_lib0clear(&___nl__7);
#line 295
c_rt_lib0clear(&___nl__6);
#line 296
goto label_3;
#line 296
label_25:
#line 296
c_rt_lib0move(&___nl__6,___get_global_const(801));
#line 296
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 296
c_rt_lib0clear(&___nl__6);
#line 296
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 296
if(c_rt_lib0check_true_native(___nl__5)){ goto label_27;}
#line 297
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(782), ___nl__1));
#line 297
c_rt_lib0copy(&___nl__1, ___nl__6);
#line 297
c_rt_lib0clear(&___nl__6);
#line 298
goto label_3;
#line 298
label_27:
#line 298
c_rt_lib0move(&___nl__6,___get_global_const(138));
#line 298
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 298
c_rt_lib0clear(&___nl__6);
#line 298
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 298
if(c_rt_lib0check_true_native(___nl__5)){ goto label_28;}
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(783), ___nl__1));
#line 299
c_rt_lib0copy(&___nl__1, ___nl__6);
#line 299
c_rt_lib0clear(&___nl__6);
#line 300
goto label_3;
#line 300
label_28:
#line 301
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 301
c_rt_lib0clear(&___nl__1);
#line 301
c_rt_lib0clear(&___nl__2);
#line 301
c_rt_lib0clear(&___nl__3);
#line 301
c_rt_lib0clear(&___nl__4);
#line 301
c_rt_lib0clear(&___nl__5);
#line 301
return ___nl__6;
#line 301
c_rt_lib0clear(&___nl__6);
#line 302
goto label_3;
#line 302
label_3:
#line 302
c_rt_lib0clear(&___nl__5);
#line 302
c_rt_lib0clear(&___nl__3);
#line 302
c_rt_lib0clear(&___nl__4);
#line 251
goto label_2;
#line 304
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 304
nl_die_arg(___nl__3);
#line 304
c_rt_lib0clear(&___nl__3);
#line 304
c_rt_lib0clear(&___nl__1);
#line 304
c_rt_lib0clear(&___nl__2);
#line 304
return NULL;
}

ImmT nparser_priv0parse_expr_rec(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 309
c_rt_lib0move(&___nl__4,___get_global_const(322));
#line 309
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 309
c_rt_lib0clear(&___nl__4);
#line 309
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 309
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 310
c_rt_lib0move(&___nl__6, nparser_priv0parse_expr(___ref___0));
#line 310
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 310
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 310
c_rt_lib0clear(&___nl__1);
#line 310
c_rt_lib0clear(&___nl__2);
#line 310
c_rt_lib0clear(&___nl__3);
#line 310
c_rt_lib0clear(&___nl__4);
#line 310
c_rt_lib0clear(&___nl__5);
#line 310
return ___nl__6;
#line 310
label_3:
#line 310
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 310
c_rt_lib0clear(&___nl__5);
#line 310
c_rt_lib0clear(&___nl__6);
#line 311
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(777), ___nl__4));
#line 311
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 311
c_rt_lib0clear(&___nl__5);
#line 312
c_rt_lib0move(&___nl__5,___get_global_const(176));
#line 312
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 312
c_rt_lib0clear(&___nl__5);
#line 312
c_rt_lib0clear(&___nl__4);
#line 313
goto label_1;
#line 313
label_2:
#line 313
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 313
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 313
c_rt_lib0move(&___nl__5,___get_global_const(168));
#line 313
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 313
c_rt_lib0clear(&___nl__5);
#line 313
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 313
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 313
c_rt_lib0clear(&___nl__5);
#line 313
c_rt_lib0clear(&___nl__4);
#line 313
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 313
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 314
c_rt_lib0move(&___nl__6, nparser_priv0parse_hash(___ref___0));
#line 314
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 314
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 314
c_rt_lib0clear(&___nl__1);
#line 314
c_rt_lib0clear(&___nl__2);
#line 314
c_rt_lib0clear(&___nl__3);
#line 314
c_rt_lib0clear(&___nl__4);
#line 314
c_rt_lib0clear(&___nl__5);
#line 314
return ___nl__6;
#line 314
label_5:
#line 314
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 314
c_rt_lib0clear(&___nl__5);
#line 314
c_rt_lib0clear(&___nl__6);
#line 315
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(216), ___nl__4));
#line 315
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 315
c_rt_lib0clear(&___nl__5);
#line 315
c_rt_lib0clear(&___nl__4);
#line 316
goto label_1;
#line 316
label_4:
#line 316
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 316
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 316
c_rt_lib0move(&___nl__5,___get_global_const(174));
#line 316
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 316
c_rt_lib0clear(&___nl__5);
#line 316
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 316
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 316
c_rt_lib0clear(&___nl__5);
#line 316
c_rt_lib0clear(&___nl__4);
#line 316
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 316
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 317
c_rt_lib0move(&___nl__6, nparser_priv0parse_arr(___ref___0));
#line 317
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 317
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 317
c_rt_lib0clear(&___nl__1);
#line 317
c_rt_lib0clear(&___nl__2);
#line 317
c_rt_lib0clear(&___nl__3);
#line 317
c_rt_lib0clear(&___nl__4);
#line 317
c_rt_lib0clear(&___nl__5);
#line 317
return ___nl__6;
#line 317
label_7:
#line 317
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 317
c_rt_lib0clear(&___nl__5);
#line 317
c_rt_lib0clear(&___nl__6);
#line 318
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(215), ___nl__4));
#line 318
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 318
c_rt_lib0clear(&___nl__5);
#line 318
c_rt_lib0clear(&___nl__4);
#line 319
goto label_1;
#line 319
label_6:
#line 319
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 319
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 319
c_rt_lib0move(&___nl__5,___get_global_const(371));
#line 319
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 319
c_rt_lib0clear(&___nl__5);
#line 319
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 319
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 319
c_rt_lib0clear(&___nl__5);
#line 319
c_rt_lib0clear(&___nl__4);
#line 319
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 319
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 320
c_rt_lib0move(&___nl__6, nparser_priv0parse_variant(___ref___0));
#line 320
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 320
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 320
c_rt_lib0clear(&___nl__1);
#line 320
c_rt_lib0clear(&___nl__2);
#line 320
c_rt_lib0clear(&___nl__3);
#line 320
c_rt_lib0clear(&___nl__4);
#line 320
c_rt_lib0clear(&___nl__5);
#line 320
return ___nl__6;
#line 320
label_9:
#line 320
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 320
c_rt_lib0clear(&___nl__5);
#line 320
c_rt_lib0clear(&___nl__6);
#line 321
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(764), ___nl__4));
#line 321
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 321
c_rt_lib0clear(&___nl__5);
#line 321
c_rt_lib0clear(&___nl__4);
#line 322
goto label_1;
#line 322
label_8:
#line 322
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 322
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 322
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(872)));
#line 322
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 322
c_rt_lib0clear(&___nl__5);
#line 322
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 322
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 322
c_rt_lib0clear(&___nl__5);
#line 322
c_rt_lib0clear(&___nl__4);
#line 322
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 322
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 323
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 323
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 323
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(872)));
#line 323
c_rt_lib0move(&___nl__4, ntokenizer0eat_type(&___nl__5, ___nl__6));
#line 323
c_rt_lib0clear(&___nl__6);
#line 323
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 323
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 323
c_rt_lib0clear(&___nl__6);
#line 323
c_rt_lib0clear(&___nl__5);
#line 323
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(294), ___nl__4));
#line 323
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 323
c_rt_lib0clear(&___nl__4);
#line 324
goto label_1;
#line 324
label_10:
#line 324
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 324
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 324
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(873)));
#line 324
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 324
c_rt_lib0clear(&___nl__5);
#line 324
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 324
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 324
c_rt_lib0clear(&___nl__5);
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 324
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 324
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 324
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(694)));
#line 324
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 324
c_rt_lib0clear(&___nl__5);
#line 324
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 324
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 324
c_rt_lib0clear(&___nl__5);
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
label_12:
#line 324
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 324
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 325
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 325
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(1, ___get_global_const(277), ___nl__5));
#line 325
c_rt_lib0clear(&___nl__5);
#line 326
label_14:
#line 326
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 326
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 326
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(873)));
#line 326
c_rt_lib0move(&___nl__5, ntokenizer0is_type(&___nl__6, ___nl__7));
#line 326
c_rt_lib0clear(&___nl__7);
#line 326
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 326
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 326
c_rt_lib0clear(&___nl__7);
#line 326
c_rt_lib0clear(&___nl__6);
#line 326
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 326
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 327
c_rt_lib0move(&___nl__6,___get_global_const(277));
#line 327
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(___nl__4, ___nl__6));
#line 327
c_rt_lib0move(&___nl__8,___get_global_const(848));
#line 327
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 327
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(873)));
#line 327
c_rt_lib0move(&___nl__7, ntokenizer0eat_type(&___nl__8, ___nl__9));
#line 327
c_rt_lib0clear(&___nl__9);
#line 327
c_rt_lib0move(&___nl__9,___get_global_const(848));
#line 327
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__8));
#line 327
c_rt_lib0clear(&___nl__9);
#line 327
c_rt_lib0clear(&___nl__8);
#line 327
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 327
c_rt_lib0clear(&___nl__7);
#line 327
c_rt_lib0move(&___nl__7,___get_global_const(277));
#line 327
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__7, ___nl__6));
#line 327
c_rt_lib0clear(&___nl__7);
#line 327
c_rt_lib0clear(&___nl__6);
#line 328
goto label_14;
#line 328
label_13:
#line 328
c_rt_lib0clear(&___nl__5);
#line 330
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 330
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 330
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(694)));
#line 330
c_rt_lib0move(&___nl__5, ntokenizer0is_type(&___nl__6, ___nl__7));
#line 330
c_rt_lib0clear(&___nl__7);
#line 330
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 330
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 330
c_rt_lib0clear(&___nl__7);
#line 330
c_rt_lib0clear(&___nl__6);
#line 330
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 330
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 331
c_rt_lib0move(&___nl__6,___get_global_const(277));
#line 331
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(___nl__4, ___nl__6));
#line 331
c_rt_lib0move(&___nl__8,___get_global_const(848));
#line 331
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 331
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(694)));
#line 331
c_rt_lib0move(&___nl__7, ntokenizer0eat_type(&___nl__8, ___nl__9));
#line 331
c_rt_lib0clear(&___nl__9);
#line 331
c_rt_lib0move(&___nl__9,___get_global_const(848));
#line 331
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__8));
#line 331
c_rt_lib0clear(&___nl__9);
#line 331
c_rt_lib0clear(&___nl__8);
#line 331
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0move(&___nl__7,___get_global_const(277));
#line 331
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__7, ___nl__6));
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0clear(&___nl__6);
#line 332
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(824)));
#line 332
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 332
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(826), ___nl__7);
#line 332
c_rt_lib0clear(&___nl__6);
#line 332
c_rt_lib0clear(&___nl__7);
#line 333
goto label_15;
#line 333
label_16:
#line 334
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(825)));
#line 334
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 334
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(826), ___nl__7);
#line 334
c_rt_lib0clear(&___nl__6);
#line 334
c_rt_lib0clear(&___nl__7);
#line 335
goto label_15;
#line 335
label_15:
#line 335
c_rt_lib0clear(&___nl__5);
#line 336
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(694), ___nl__4));
#line 336
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 336
c_rt_lib0clear(&___nl__5);
#line 336
c_rt_lib0clear(&___nl__4);
#line 337
goto label_1;
#line 337
label_11:
#line 337
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 337
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 337
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 337
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 337
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0clear(&___nl__4);
#line 337
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 337
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 338
c_rt_lib0move(&___nl__5, nparser_priv0parse_label(___ref___0));
#line 338
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 338
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 338
c_rt_lib0clear(&___nl__1);
#line 338
c_rt_lib0clear(&___nl__2);
#line 338
c_rt_lib0clear(&___nl__3);
#line 338
c_rt_lib0clear(&___nl__4);
#line 338
return ___nl__5;
#line 338
label_18:
#line 338
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 338
c_rt_lib0clear(&___nl__4);
#line 338
c_rt_lib0clear(&___nl__5);
#line 339
goto label_1;
#line 339
label_17:
#line 339
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 339
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 339
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(874)));
#line 339
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__5, ___nl__6));
#line 339
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 339
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 339
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0clear(&___nl__5);
#line 339
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 339
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 339
c_rt_lib0move(&___nl__5, nast0get_unary_ops());
#line 339
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 339
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 339
c_rt_lib0move(&___nl__6, ntokenizer0get_token(&___nl__7));
#line 339
c_rt_lib0move(&___nl__8,___get_global_const(848));
#line 339
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__7));
#line 339
c_rt_lib0clear(&___nl__8);
#line 339
c_rt_lib0clear(&___nl__7);
#line 339
c_rt_lib0move(&___nl__3, hash0has_key(___nl__5, ___nl__6));
#line 339
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0clear(&___nl__5);
#line 339
label_20:
#line 339
c_rt_lib0clear(&___nl__4);
#line 339
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 339
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 340
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 340
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 340
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(874)));
#line 340
c_rt_lib0move(&___nl__4, ntokenizer0eat_type(&___nl__5, ___nl__6));
#line 340
c_rt_lib0clear(&___nl__6);
#line 340
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 340
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 340
c_rt_lib0clear(&___nl__6);
#line 340
c_rt_lib0clear(&___nl__5);
#line 342
c_rt_lib0move(&___nl__6,___get_global_const(184));
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 342
if(c_rt_lib0check_true_native(___nl__6)){ goto label_22;}
#line 343
c_rt_lib0move(&___nl__7, nparser_priv0parse_fun_label(___ref___0));
#line 343
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(781), ___nl__7));
#line 343
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 343
c_rt_lib0clear(&___nl__7);
#line 344
goto label_21;
#line 344
label_22:
#line 345
c_rt_lib0move(&___nl__10, nast0get_unary_ops());
#line 345
c_rt_lib0move(&___nl__9, hash0get_value(___nl__10, ___nl__4));
#line 345
c_rt_lib0clear(&___nl__10);
#line 345
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(795)));
#line 345
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr_rec(___ref___0, ___nl__9));
#line 345
c_rt_lib0clear(&___nl__9);
#line 345
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 345
if(c_rt_lib0check_true_native(___nl__7)){ goto label_23;}
#line 345
c_rt_lib0clear(&___nl__1);
#line 345
c_rt_lib0clear(&___nl__2);
#line 345
c_rt_lib0clear(&___nl__3);
#line 345
c_rt_lib0clear(&___nl__4);
#line 345
c_rt_lib0clear(&___nl__5);
#line 345
c_rt_lib0clear(&___nl__6);
#line 345
c_rt_lib0clear(&___nl__7);
#line 345
return ___nl__8;
#line 345
label_23:
#line 345
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 345
c_rt_lib0clear(&___nl__7);
#line 345
c_rt_lib0clear(&___nl__8);
#line 346
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 346
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(780)));
#line 346
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 346
if(c_rt_lib0check_true_native(___nl__7)){ goto label_25;}
#line 346
c_rt_lib0move(&___nl__8,___get_global_const(875));
#line 346
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__8));
#line 346
c_rt_lib0clear(&___nl__8);
#line 346
goto label_25;
#line 346
label_25:
#line 346
c_rt_lib0clear(&___nl__7);
#line 347
goto label_21;
#line 347
label_21:
#line 347
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(401), ___nl__4, ___get_global_const(234), ___nl__5));
#line 348
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(780), ___nl__6));
#line 348
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0clear(&___nl__4);
#line 348
c_rt_lib0clear(&___nl__5);
#line 349
goto label_1;
#line 349
label_19:
#line 349
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 349
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 349
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(876)));
#line 349
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 349
c_rt_lib0clear(&___nl__5);
#line 349
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 349
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 349
c_rt_lib0clear(&___nl__5);
#line 349
c_rt_lib0clear(&___nl__4);
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 349
if(c_rt_lib0check_true_native(___nl__3)){ goto label_26;}
#line 350
c_rt_lib0move(&___nl__5,___get_global_const(877));
#line 350
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 350
c_rt_lib0clear(&___nl__5);
#line 350
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 350
if(c_rt_lib0check_true_native(___nl__4)){ goto label_28;}
#line 351
c_rt_lib0move(&___nl__6,___get_global_const(6));
#line 351
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 351
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(76), ___nl__6, ___get_global_const(772), ___nl__7));
#line 351
c_rt_lib0clear(&___nl__6);
#line 351
c_rt_lib0clear(&___nl__7);
#line 351
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(764), ___nl__5));
#line 351
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 351
c_rt_lib0clear(&___nl__5);
#line 352
goto label_27;
#line 352
label_28:
#line 352
c_rt_lib0move(&___nl__5,___get_global_const(878));
#line 352
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 352
c_rt_lib0clear(&___nl__5);
#line 352
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 352
if(c_rt_lib0check_true_native(___nl__4)){ goto label_29;}
#line 353
c_rt_lib0move(&___nl__6,___get_global_const(7));
#line 353
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 353
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(76), ___nl__6, ___get_global_const(772), ___nl__7));
#line 353
c_rt_lib0clear(&___nl__6);
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(764), ___nl__5));
#line 353
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 353
c_rt_lib0clear(&___nl__5);
#line 354
goto label_27;
#line 354
label_29:
#line 355
c_rt_lib0move(&___nl__5,___get_global_const(879));
#line 355
c_rt_lib0move(&___nl__6, string0lf());
#line 355
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 355
c_rt_lib0clear(&___nl__6);
#line 355
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 355
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 355
c_rt_lib0move(&___nl__6, ntokenizer0info(&___nl__7));
#line 355
c_rt_lib0move(&___nl__8,___get_global_const(848));
#line 355
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__7));
#line 355
c_rt_lib0clear(&___nl__8);
#line 355
c_rt_lib0clear(&___nl__7);
#line 355
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 355
c_rt_lib0clear(&___nl__6);
#line 356
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__5));
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__5));
#line 357
c_rt_lib0clear(&___nl__1);
#line 357
c_rt_lib0clear(&___nl__2);
#line 357
c_rt_lib0clear(&___nl__3);
#line 357
c_rt_lib0clear(&___nl__4);
#line 357
c_rt_lib0clear(&___nl__5);
#line 357
return ___nl__6;
#line 357
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0clear(&___nl__5);
#line 358
goto label_27;
#line 358
label_27:
#line 358
c_rt_lib0clear(&___nl__4);
#line 359
goto label_1;
#line 359
label_26:
#line 360
c_rt_lib0move(&___nl__4,___get_global_const(880));
#line 360
c_rt_lib0move(&___nl__5, string0lf());
#line 360
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 360
c_rt_lib0clear(&___nl__5);
#line 360
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 360
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 360
c_rt_lib0move(&___nl__5, ntokenizer0info(&___nl__6));
#line 360
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 360
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 360
c_rt_lib0clear(&___nl__7);
#line 360
c_rt_lib0clear(&___nl__6);
#line 360
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 360
c_rt_lib0clear(&___nl__5);
#line 361
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__4));
#line 362
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__4));
#line 362
c_rt_lib0clear(&___nl__1);
#line 362
c_rt_lib0clear(&___nl__2);
#line 362
c_rt_lib0clear(&___nl__3);
#line 362
c_rt_lib0clear(&___nl__4);
#line 362
return ___nl__5;
#line 362
c_rt_lib0clear(&___nl__5);
#line 362
c_rt_lib0clear(&___nl__4);
#line 363
goto label_1;
#line 363
label_1:
#line 363
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0move(&___nl__3, nparser_priv0parse_expr_rec_left(___ref___0, ___nl__2, ___nl__1));
#line 365
c_rt_lib0clear(&___nl__1);
#line 365
c_rt_lib0clear(&___nl__2);
#line 365
return ___nl__3;
#line 365
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0clear(&___nl__2);
#line 365
c_rt_lib0clear(&___nl__1);
#line 365
return NULL;
}

ImmT nparser_priv0eat_text(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 368
c_rt_lib0move(&___nl__2,___get_global_const(848));
#line 368
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 368
c_rt_lib0move(&___nl__1, ntokenizer0is_text(&___nl__2));
#line 368
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 368
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 368
c_rt_lib0clear(&___nl__3);
#line 368
c_rt_lib0clear(&___nl__2);
#line 368
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 368
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 369
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 369
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 369
c_rt_lib0move(&___nl__2, ntokenizer0eat_text(&___nl__3));
#line 369
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 369
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 369
c_rt_lib0clear(&___nl__4);
#line 369
c_rt_lib0clear(&___nl__3);
#line 369
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__2));
#line 369
c_rt_lib0clear(&___nl__1);
#line 369
return ___nl__2;
#line 369
c_rt_lib0clear(&___nl__2);
#line 370
goto label_1;
#line 370
label_2:
#line 371
c_rt_lib0move(&___nl__2,___get_global_const(881));
#line 371
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 371
c_rt_lib0clear(&___nl__2);
#line 372
c_rt_lib0move(&___nl__2,___get_global_const(881));
#line 372
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__2));
#line 372
c_rt_lib0clear(&___nl__1);
#line 372
return ___nl__2;
#line 372
c_rt_lib0clear(&___nl__2);
#line 373
goto label_1;
#line 373
label_1:
#line 373
c_rt_lib0clear(&___nl__1);
#line 373
return NULL;
}

ImmT nparser_priv0parse_variant_label(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 377
c_rt_lib0move(&___nl__2,___get_global_const(848));
#line 377
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 377
c_rt_lib0move(&___nl__1, ntokenizer0is_text(&___nl__2));
#line 377
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 377
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 377
c_rt_lib0clear(&___nl__3);
#line 377
c_rt_lib0clear(&___nl__2);
#line 377
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 377
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 378
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 378
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 378
c_rt_lib0move(&___nl__2, ntokenizer0eat_text(&___nl__3));
#line 378
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 378
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 378
c_rt_lib0clear(&___nl__4);
#line 378
c_rt_lib0clear(&___nl__3);
#line 378
c_rt_lib0clear(&___nl__1);
#line 378
return ___nl__2;
#line 378
c_rt_lib0clear(&___nl__2);
#line 379
goto label_1;
#line 379
label_2:
#line 380
c_rt_lib0move(&___nl__2,___get_global_const(881));
#line 380
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 380
c_rt_lib0clear(&___nl__2);
#line 381
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 381
c_rt_lib0clear(&___nl__1);
#line 381
return ___nl__2;
#line 381
c_rt_lib0clear(&___nl__2);
#line 382
goto label_1;
#line 382
label_1:
#line 382
c_rt_lib0clear(&___nl__1);
#line 382
return NULL;
}

ImmT nparser_priv0parse_variant(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 386
c_rt_lib0move(&___nl__1,___get_global_const(371));
#line 386
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 386
c_rt_lib0clear(&___nl__1);
#line 387
c_rt_lib0move(&___nl__1, nparser_priv0parse_variant_label(___ref___0));
#line 388
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 389
c_rt_lib0move(&___nl__4,___get_global_const(322));
#line 389
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 389
c_rt_lib0clear(&___nl__4);
#line 389
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 389
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 390
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 390
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 390
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 390
c_rt_lib0clear(&___nl__1);
#line 390
c_rt_lib0clear(&___nl__2);
#line 390
c_rt_lib0clear(&___nl__3);
#line 390
c_rt_lib0clear(&___nl__4);
#line 390
return ___nl__5;
#line 390
label_3:
#line 390
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 390
c_rt_lib0clear(&___nl__4);
#line 390
c_rt_lib0clear(&___nl__5);
#line 391
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 391
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 391
c_rt_lib0clear(&___nl__4);
#line 392
goto label_1;
#line 392
label_2:
#line 393
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 393
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 393
c_rt_lib0clear(&___nl__4);
#line 394
goto label_1;
#line 394
label_1:
#line 394
c_rt_lib0clear(&___nl__3);
#line 395
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(76), ___nl__1, ___get_global_const(772), ___nl__2));
#line 395
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__3));
#line 395
c_rt_lib0clear(&___nl__1);
#line 395
c_rt_lib0clear(&___nl__2);
#line 395
return ___nl__3;
#line 395
c_rt_lib0clear(&___nl__3);
#line 395
c_rt_lib0clear(&___nl__1);
#line 395
c_rt_lib0clear(&___nl__2);
#line 395
return NULL;
}

ImmT nparser_priv0check_lvalue(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 398
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 398
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(772)));
#line 398
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 398
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 399
c_rt_lib0clear(&___nl__1);
#line 399
c_rt_lib0clear(&___nl__2);
#line 399
return NULL;
#line 400
goto label_3;
#line 400
label_2:
#line 400
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 400
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(219)));
#line 400
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 400
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 401
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 401
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(219)));
#line 402
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(401)));
#line 402
c_rt_lib0move(&___nl__5,___get_global_const(773));
#line 402
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 402
c_rt_lib0clear(&___nl__5);
#line 402
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 402
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(401)));
#line 402
c_rt_lib0move(&___nl__5,___get_global_const(774));
#line 402
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 402
c_rt_lib0clear(&___nl__5);
#line 402
label_6:
#line 402
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 402
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 403
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(235)));
#line 403
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___0, ___nl__5));
#line 403
c_rt_lib0clear(&___nl__5);
#line 404
c_rt_lib0clear(&___nl__1);
#line 404
c_rt_lib0clear(&___nl__2);
#line 404
c_rt_lib0clear(&___nl__3);
#line 404
c_rt_lib0clear(&___nl__4);
#line 404
return NULL;
#line 405
goto label_5;
#line 405
label_5:
#line 405
c_rt_lib0clear(&___nl__4);
#line 405
c_rt_lib0clear(&___nl__3);
#line 406
goto label_3;
#line 406
label_3:
#line 406
c_rt_lib0clear(&___nl__2);
#line 407
c_rt_lib0move(&___nl__2,___get_global_const(882));
#line 407
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 407
c_rt_lib0clear(&___nl__2);
#line 407
c_rt_lib0clear(&___nl__1);
#line 407
return NULL;
}

ImmT nparser_priv0parse_variant_decl(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 410
c_rt_lib0move(&___nl__1,___get_global_const(371));
#line 410
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 410
c_rt_lib0clear(&___nl__1);
#line 411
c_rt_lib0move(&___nl__2, nparser_priv0parse_variant_label(___ref___0));
#line 411
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 411
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(76), ___nl__2, ___get_global_const(641), ___nl__3));
#line 411
c_rt_lib0clear(&___nl__2);
#line 411
c_rt_lib0clear(&___nl__3);
#line 412
c_rt_lib0move(&___nl__3,___get_global_const(322));
#line 412
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 412
c_rt_lib0clear(&___nl__3);
#line 412
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 412
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 413
c_rt_lib0move(&___nl__3, nparser_priv0parse_var_decl_sim(___ref___0));
#line 413
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(641), ___nl__3));
#line 413
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 413
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(641), ___nl__4);
#line 413
c_rt_lib0clear(&___nl__3);
#line 413
c_rt_lib0clear(&___nl__4);
#line 414
c_rt_lib0move(&___nl__3,___get_global_const(176));
#line 414
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__3));
#line 414
c_rt_lib0clear(&___nl__3);
#line 415
goto label_2;
#line 415
label_2:
#line 415
c_rt_lib0clear(&___nl__2);
#line 417
return ___nl__1;
#line 417
c_rt_lib0clear(&___nl__1);
#line 417
return NULL;
}

ImmT nparser_priv0parse_var_decl(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 421
c_rt_lib0move(&___nl__1,___get_global_const(772));
#line 421
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 421
c_rt_lib0clear(&___nl__1);
#line 422
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 422
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 422
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 422
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(76), ___nl__2, ___get_global_const(72), ___nl__3, ___get_global_const(641), ___nl__4));
#line 422
c_rt_lib0clear(&___nl__2);
#line 422
c_rt_lib0clear(&___nl__3);
#line 422
c_rt_lib0clear(&___nl__4);
#line 423
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 423
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 423
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 423
c_rt_lib0move(&___nl__2, ntokenizer0is_type(&___nl__3, ___nl__4));
#line 423
c_rt_lib0clear(&___nl__4);
#line 423
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 423
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 423
c_rt_lib0clear(&___nl__4);
#line 423
c_rt_lib0clear(&___nl__3);
#line 423
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 423
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 424
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 424
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 424
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 424
c_rt_lib0move(&___nl__3, ntokenizer0eat_type(&___nl__4, ___nl__5));
#line 424
c_rt_lib0clear(&___nl__5);
#line 424
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 424
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 424
c_rt_lib0clear(&___nl__5);
#line 424
c_rt_lib0clear(&___nl__4);
#line 424
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 424
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(76), ___nl__4);
#line 424
c_rt_lib0clear(&___nl__3);
#line 424
c_rt_lib0clear(&___nl__4);
#line 425
goto label_1;
#line 425
label_2:
#line 426
c_rt_lib0move(&___nl__3,___get_global_const(883));
#line 426
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 426
c_rt_lib0clear(&___nl__3);
#line 427
goto label_1;
#line 427
label_1:
#line 427
c_rt_lib0clear(&___nl__2);
#line 428
c_rt_lib0move(&___nl__3,___get_global_const(371));
#line 428
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 428
c_rt_lib0clear(&___nl__3);
#line 428
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 428
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 429
c_rt_lib0move(&___nl__5, nparser_priv0parse_type(___ref___0));
#line 429
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 429
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 429
c_rt_lib0clear(&___nl__1);
#line 429
c_rt_lib0clear(&___nl__2);
#line 429
c_rt_lib0clear(&___nl__3);
#line 429
c_rt_lib0clear(&___nl__4);
#line 429
return ___nl__5;
#line 429
label_5:
#line 429
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 429
c_rt_lib0clear(&___nl__4);
#line 429
c_rt_lib0clear(&___nl__5);
#line 430
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(72), ___nl__3));
#line 430
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 430
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(72), ___nl__5);
#line 430
c_rt_lib0clear(&___nl__4);
#line 430
c_rt_lib0clear(&___nl__5);
#line 430
c_rt_lib0clear(&___nl__3);
#line 431
goto label_4;
#line 431
label_4:
#line 431
c_rt_lib0clear(&___nl__2);
#line 432
c_rt_lib0move(&___nl__3,___get_global_const(787));
#line 432
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 432
c_rt_lib0clear(&___nl__3);
#line 432
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 432
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 433
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 433
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 433
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 433
c_rt_lib0clear(&___nl__1);
#line 433
c_rt_lib0clear(&___nl__2);
#line 433
c_rt_lib0clear(&___nl__3);
#line 433
c_rt_lib0clear(&___nl__4);
#line 433
return ___nl__5;
#line 433
label_8:
#line 433
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 433
c_rt_lib0clear(&___nl__4);
#line 433
c_rt_lib0clear(&___nl__5);
#line 434
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(641), ___nl__3));
#line 434
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 434
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(641), ___nl__5);
#line 434
c_rt_lib0clear(&___nl__4);
#line 434
c_rt_lib0clear(&___nl__5);
#line 434
c_rt_lib0clear(&___nl__3);
#line 435
goto label_7;
#line 435
label_7:
#line 435
c_rt_lib0clear(&___nl__2);
#line 436
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 436
c_rt_lib0clear(&___nl__1);
#line 436
return ___nl__2;
#line 436
c_rt_lib0clear(&___nl__2);
#line 436
c_rt_lib0clear(&___nl__1);
#line 436
return NULL;
}

ImmT nparser_priv0parse_var_decl_sim(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 440
c_rt_lib0move(&___nl__1,___get_global_const(772));
#line 440
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 440
c_rt_lib0clear(&___nl__1);
#line 441
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 441
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 441
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 441
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(76), ___nl__2, ___get_global_const(72), ___nl__3, ___get_global_const(641), ___nl__4));
#line 441
c_rt_lib0clear(&___nl__2);
#line 441
c_rt_lib0clear(&___nl__3);
#line 441
c_rt_lib0clear(&___nl__4);
#line 442
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 442
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 442
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 442
c_rt_lib0move(&___nl__2, ntokenizer0is_type(&___nl__3, ___nl__4));
#line 442
c_rt_lib0clear(&___nl__4);
#line 442
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 442
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 442
c_rt_lib0clear(&___nl__4);
#line 442
c_rt_lib0clear(&___nl__3);
#line 442
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 442
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 443
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 443
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 443
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 443
c_rt_lib0move(&___nl__3, ntokenizer0eat_type(&___nl__4, ___nl__5));
#line 443
c_rt_lib0clear(&___nl__5);
#line 443
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 443
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 443
c_rt_lib0clear(&___nl__5);
#line 443
c_rt_lib0clear(&___nl__4);
#line 443
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 443
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(76), ___nl__4);
#line 443
c_rt_lib0clear(&___nl__3);
#line 443
c_rt_lib0clear(&___nl__4);
#line 444
goto label_1;
#line 444
label_2:
#line 445
c_rt_lib0move(&___nl__3,___get_global_const(883));
#line 445
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 445
c_rt_lib0clear(&___nl__3);
#line 446
goto label_1;
#line 446
label_1:
#line 446
c_rt_lib0clear(&___nl__2);
#line 447
return ___nl__1;
#line 447
c_rt_lib0clear(&___nl__1);
#line 447
return NULL;
}

ImmT nparser_priv0parse_cond(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 450
c_rt_lib0move(&___nl__1,___get_global_const(322));
#line 450
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 450
c_rt_lib0clear(&___nl__1);
#line 451
c_rt_lib0move(&___nl__3, nparser_priv0parse_expr(___ref___0));
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(44)));
#line 451
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 451
c_rt_lib0clear(&___nl__1);
#line 451
c_rt_lib0clear(&___nl__2);
#line 451
return ___nl__3;
#line 451
label_1:
#line 451
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(44)));
#line 451
c_rt_lib0clear(&___nl__2);
#line 451
c_rt_lib0clear(&___nl__3);
#line 452
c_rt_lib0move(&___nl__2,___get_global_const(176));
#line 452
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 452
c_rt_lib0clear(&___nl__2);
#line 453
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 453
c_rt_lib0clear(&___nl__1);
#line 453
return ___nl__2;
#line 453
c_rt_lib0clear(&___nl__2);
#line 453
c_rt_lib0clear(&___nl__1);
#line 453
return NULL;
}

ImmT nparser_priv0parse_block(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 457
c_rt_lib0move(&___nl__2,___get_global_const(848));
#line 457
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 457
c_rt_lib0move(&___nl__1, ntokenizer0get_place(&___nl__2));
#line 457
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 457
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 457
c_rt_lib0clear(&___nl__3);
#line 457
c_rt_lib0clear(&___nl__2);
#line 458
c_rt_lib0move(&___nl__2,___get_global_const(168));
#line 458
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 458
c_rt_lib0clear(&___nl__2);
#line 459
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 460
label_2:
#line 460
c_rt_lib0move(&___nl__4,___get_global_const(169));
#line 460
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 460
c_rt_lib0clear(&___nl__4);
#line 460
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 460
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 460
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 461
c_rt_lib0move(&___nl__5,___get_global_const(311));
#line 461
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 461
c_rt_lib0clear(&___nl__5);
#line 461
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 461
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 461
c_rt_lib0clear(&___nl__4);
#line 461
goto label_2;
#line 461
goto label_4;
#line 461
label_4:
#line 461
c_rt_lib0clear(&___nl__4);
#line 462
c_rt_lib0move(&___nl__6, nparser_priv0parse_cmd(___ref___0));
#line 462
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 462
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 462
c_rt_lib0clear(&___nl__1);
#line 462
c_rt_lib0clear(&___nl__2);
#line 462
c_rt_lib0clear(&___nl__3);
#line 462
c_rt_lib0clear(&___nl__4);
#line 462
c_rt_lib0clear(&___nl__5);
#line 462
return ___nl__6;
#line 462
label_5:
#line 462
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 462
c_rt_lib0clear(&___nl__5);
#line 462
c_rt_lib0clear(&___nl__6);
#line 463
c_rt_lib0delete(array0push(&___nl__2, ___nl__4));
#line 463
c_rt_lib0clear(&___nl__4);
#line 464
goto label_2;
#line 464
label_1:
#line 464
c_rt_lib0clear(&___nl__3);
#line 465
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 465
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 465
c_rt_lib0move(&___nl__3, ntokenizer0get_place_ws(&___nl__4));
#line 465
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 465
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 465
c_rt_lib0clear(&___nl__5);
#line 465
c_rt_lib0clear(&___nl__4);
#line 466
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(396), ___nl__1, ___get_global_const(824), ___nl__3));
#line 470
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(751), ___nl__2));
#line 470
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(213), ___nl__4, ___get_global_const(209), ___nl__6));
#line 470
c_rt_lib0clear(&___nl__6);
#line 470
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 470
c_rt_lib0clear(&___nl__1);
#line 470
c_rt_lib0clear(&___nl__2);
#line 470
c_rt_lib0clear(&___nl__3);
#line 470
c_rt_lib0clear(&___nl__4);
#line 470
return ___nl__5;
#line 470
c_rt_lib0clear(&___nl__5);
#line 470
c_rt_lib0clear(&___nl__1);
#line 470
c_rt_lib0clear(&___nl__2);
#line 470
c_rt_lib0clear(&___nl__3);
#line 470
c_rt_lib0clear(&___nl__4);
#line 470
return NULL;
}

ImmT nparser_priv0parse_try_ensure(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 474
c_rt_lib0move(&___nl__2,___get_global_const(848));
#line 474
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 474
c_rt_lib0move(&___nl__3,___get_global_const(772));
#line 474
c_rt_lib0move(&___nl__1, ntokenizer0next_is(&___nl__2, ___nl__3));
#line 474
c_rt_lib0clear(&___nl__3);
#line 474
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 474
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 474
c_rt_lib0clear(&___nl__3);
#line 474
c_rt_lib0clear(&___nl__2);
#line 474
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 474
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 475
c_rt_lib0move(&___nl__4, nparser_priv0parse_var_decl(___ref___0));
#line 475
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 475
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 475
c_rt_lib0clear(&___nl__1);
#line 475
c_rt_lib0clear(&___nl__2);
#line 475
c_rt_lib0clear(&___nl__3);
#line 475
return ___nl__4;
#line 475
label_3:
#line 475
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 475
c_rt_lib0clear(&___nl__3);
#line 475
c_rt_lib0clear(&___nl__4);
#line 476
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(769), ___nl__2));
#line 476
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__3));
#line 476
c_rt_lib0clear(&___nl__1);
#line 476
c_rt_lib0clear(&___nl__2);
#line 476
return ___nl__3;
#line 476
c_rt_lib0clear(&___nl__3);
#line 476
c_rt_lib0clear(&___nl__2);
#line 477
goto label_1;
#line 477
label_2:
#line 478
c_rt_lib0move(&___nl__4, nparser_priv0parse_expr(___ref___0));
#line 478
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 478
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 478
c_rt_lib0clear(&___nl__1);
#line 478
c_rt_lib0clear(&___nl__2);
#line 478
c_rt_lib0clear(&___nl__3);
#line 478
return ___nl__4;
#line 478
label_4:
#line 478
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 478
c_rt_lib0clear(&___nl__3);
#line 478
c_rt_lib0clear(&___nl__4);
#line 479
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 479
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(219)));
#line 479
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 479
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 479
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 479
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(219)));
#line 479
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(401)));
#line 479
c_rt_lib0move(&___nl__5,___get_global_const(787));
#line 479
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 479
c_rt_lib0clear(&___nl__5);
#line 479
label_7:
#line 479
c_rt_lib0clear(&___nl__4);
#line 479
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 479
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 480
c_rt_lib0copy(&___nl__4, ___nl__2);
#line 480
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(219)));
#line 480
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(770), ___nl__4));
#line 480
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 480
c_rt_lib0clear(&___nl__1);
#line 480
c_rt_lib0clear(&___nl__2);
#line 480
c_rt_lib0clear(&___nl__3);
#line 480
return ___nl__4;
#line 480
c_rt_lib0clear(&___nl__4);
#line 481
goto label_5;
#line 481
label_6:
#line 482
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(771), ___nl__2));
#line 482
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 482
c_rt_lib0clear(&___nl__1);
#line 482
c_rt_lib0clear(&___nl__2);
#line 482
c_rt_lib0clear(&___nl__3);
#line 482
return ___nl__4;
#line 482
c_rt_lib0clear(&___nl__4);
#line 483
goto label_5;
#line 483
label_5:
#line 483
c_rt_lib0clear(&___nl__3);
#line 483
c_rt_lib0clear(&___nl__2);
#line 484
goto label_1;
#line 484
label_1:
#line 484
c_rt_lib0clear(&___nl__1);
#line 484
return NULL;
}

ImmT nparser_priv0parse_cmd(ImmT * ___ref___0) {
nparser_priv0__const__init();
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
#line 488
c_rt_lib0move(&___nl__2,___get_global_const(848));
#line 488
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 488
c_rt_lib0move(&___nl__1, ntokenizer0get_place(&___nl__2));
#line 488
c_rt_lib0move(&___nl__3,___get_global_const(848));
#line 488
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 488
c_rt_lib0clear(&___nl__3);
#line 488
c_rt_lib0clear(&___nl__2);
#line 490
c_rt_lib0move(&___nl__4,___get_global_const(740));
#line 490
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 490
c_rt_lib0clear(&___nl__4);
#line 490
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 490
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 491
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 492
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 492
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 492
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 492
c_rt_lib0clear(&___nl__1);
#line 492
c_rt_lib0clear(&___nl__2);
#line 492
c_rt_lib0clear(&___nl__3);
#line 492
c_rt_lib0clear(&___nl__4);
#line 492
c_rt_lib0clear(&___nl__5);
#line 492
return ___nl__6;
#line 492
label_3:
#line 492
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 492
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(755), ___nl__7);
#line 492
c_rt_lib0clear(&___nl__5);
#line 492
c_rt_lib0clear(&___nl__6);
#line 492
c_rt_lib0clear(&___nl__7);
#line 493
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 493
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 493
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 493
c_rt_lib0clear(&___nl__1);
#line 493
c_rt_lib0clear(&___nl__2);
#line 493
c_rt_lib0clear(&___nl__3);
#line 493
c_rt_lib0clear(&___nl__4);
#line 493
c_rt_lib0clear(&___nl__5);
#line 493
return ___nl__6;
#line 493
label_4:
#line 493
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 493
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(740), ___nl__7);
#line 493
c_rt_lib0clear(&___nl__5);
#line 493
c_rt_lib0clear(&___nl__6);
#line 493
c_rt_lib0clear(&___nl__7);
#line 494
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 495
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 495
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 495
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(756), ___nl__7);
#line 495
c_rt_lib0clear(&___nl__6);
#line 495
c_rt_lib0clear(&___nl__7);
#line 496
label_6:
#line 496
c_rt_lib0move(&___nl__7,___get_global_const(756));
#line 496
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 496
c_rt_lib0clear(&___nl__7);
#line 496
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 496
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 497
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 498
c_rt_lib0move(&___nl__9,___get_global_const(848));
#line 498
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 498
c_rt_lib0move(&___nl__8, ntokenizer0get_place(&___nl__9));
#line 498
c_rt_lib0move(&___nl__10,___get_global_const(848));
#line 498
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__10, ___nl__9));
#line 498
c_rt_lib0clear(&___nl__10);
#line 498
c_rt_lib0clear(&___nl__9);
#line 499
c_rt_lib0move(&___nl__10, nparser_priv0parse_cond(___ref___0));
#line 499
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(44)));
#line 499
if(c_rt_lib0check_true_native(___nl__9)){ goto label_7;}
#line 499
c_rt_lib0clear(&___nl__1);
#line 499
c_rt_lib0clear(&___nl__2);
#line 499
c_rt_lib0clear(&___nl__3);
#line 499
c_rt_lib0clear(&___nl__4);
#line 499
c_rt_lib0clear(&___nl__5);
#line 499
c_rt_lib0clear(&___nl__6);
#line 499
c_rt_lib0clear(&___nl__7);
#line 499
c_rt_lib0clear(&___nl__8);
#line 499
c_rt_lib0clear(&___nl__9);
#line 499
return ___nl__10;
#line 499
label_7:
#line 499
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__10, ___get_global_const(44)));
#line 499
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(755), ___nl__11);
#line 499
c_rt_lib0clear(&___nl__9);
#line 499
c_rt_lib0clear(&___nl__10);
#line 499
c_rt_lib0clear(&___nl__11);
#line 500
c_rt_lib0move(&___nl__10,___get_global_const(848));
#line 500
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___0, ___nl__10));
#line 500
c_rt_lib0move(&___nl__9, ntokenizer0get_place_ws(&___nl__10));
#line 500
c_rt_lib0move(&___nl__11,___get_global_const(848));
#line 500
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__10));
#line 500
c_rt_lib0clear(&___nl__11);
#line 500
c_rt_lib0clear(&___nl__10);
#line 501
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(396), ___nl__8, ___get_global_const(824), ___nl__9));
#line 501
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 501
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(213), ___nl__11);
#line 501
c_rt_lib0clear(&___nl__10);
#line 501
c_rt_lib0clear(&___nl__11);
#line 502
c_rt_lib0move(&___nl__11, nparser_priv0parse_block(___ref___0));
#line 502
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(44)));
#line 502
if(c_rt_lib0check_true_native(___nl__10)){ goto label_8;}
#line 502
c_rt_lib0clear(&___nl__1);
#line 502
c_rt_lib0clear(&___nl__2);
#line 502
c_rt_lib0clear(&___nl__3);
#line 502
c_rt_lib0clear(&___nl__4);
#line 502
c_rt_lib0clear(&___nl__5);
#line 502
c_rt_lib0clear(&___nl__6);
#line 502
c_rt_lib0clear(&___nl__7);
#line 502
c_rt_lib0clear(&___nl__8);
#line 502
c_rt_lib0clear(&___nl__9);
#line 502
c_rt_lib0clear(&___nl__10);
#line 502
return ___nl__11;
#line 502
label_8:
#line 502
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__11, ___get_global_const(44)));
#line 502
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(209), ___nl__12);
#line 502
c_rt_lib0clear(&___nl__10);
#line 502
c_rt_lib0clear(&___nl__11);
#line 502
c_rt_lib0clear(&___nl__12);
#line 503
c_rt_lib0delete(array0push(&___nl__5, ___nl__7));
#line 503
c_rt_lib0clear(&___nl__7);
#line 503
c_rt_lib0clear(&___nl__8);
#line 503
c_rt_lib0clear(&___nl__9);
#line 504
goto label_6;
#line 504
label_5:
#line 504
c_rt_lib0clear(&___nl__6);
#line 505
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 505
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(756), ___nl__6);
#line 505
c_rt_lib0clear(&___nl__6);
#line 506
c_rt_lib0move(&___nl__7,___get_global_const(757));
#line 506
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 506
c_rt_lib0clear(&___nl__7);
#line 506
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 506
if(c_rt_lib0check_true_native(___nl__6)){ goto label_10;}
#line 507
c_rt_lib0move(&___nl__8, nparser_priv0parse_block(___ref___0));
#line 507
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 507
if(c_rt_lib0check_true_native(___nl__7)){ goto label_11;}
#line 507
c_rt_lib0clear(&___nl__1);
#line 507
c_rt_lib0clear(&___nl__2);
#line 507
c_rt_lib0clear(&___nl__3);
#line 507
c_rt_lib0clear(&___nl__4);
#line 507
c_rt_lib0clear(&___nl__5);
#line 507
c_rt_lib0clear(&___nl__6);
#line 507
c_rt_lib0clear(&___nl__7);
#line 507
return ___nl__8;
#line 507
label_11:
#line 507
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 507
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(757), ___nl__9);
#line 507
c_rt_lib0clear(&___nl__7);
#line 507
c_rt_lib0clear(&___nl__8);
#line 507
c_rt_lib0clear(&___nl__9);
#line 508
goto label_9;
#line 508
label_10:
#line 509
c_rt_lib0move(&___nl__8, nast0empty_debug());
#line 509
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 509
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(213), ___nl__8, ___get_global_const(209), ___nl__9));
#line 509
c_rt_lib0clear(&___nl__8);
#line 509
c_rt_lib0clear(&___nl__9);
#line 509
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 509
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(757), ___nl__8);
#line 509
c_rt_lib0clear(&___nl__7);
#line 509
c_rt_lib0clear(&___nl__8);
#line 510
goto label_9;
#line 510
label_9:
#line 510
c_rt_lib0clear(&___nl__6);
#line 511
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(740), ___nl__4));
#line 511
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 511
c_rt_lib0clear(&___nl__6);
#line 511
c_rt_lib0clear(&___nl__4);
#line 511
c_rt_lib0clear(&___nl__5);
#line 512
goto label_1;
#line 512
label_2:
#line 512
c_rt_lib0move(&___nl__4,___get_global_const(742));
#line 512
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 512
c_rt_lib0clear(&___nl__4);
#line 512
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 512
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 513
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 514
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 514
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 514
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(837), ___nl__6);
#line 514
c_rt_lib0clear(&___nl__5);
#line 514
c_rt_lib0clear(&___nl__6);
#line 515
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 515
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 515
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(759), ___nl__6);
#line 515
c_rt_lib0clear(&___nl__5);
#line 515
c_rt_lib0clear(&___nl__6);
#line 516
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 516
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 516
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
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
label_13:
#line 516
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 516
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(3), ___nl__7);
#line 516
c_rt_lib0clear(&___nl__5);
#line 516
c_rt_lib0clear(&___nl__6);
#line 516
c_rt_lib0clear(&___nl__7);
#line 517
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 517
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 517
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 517
c_rt_lib0clear(&___nl__1);
#line 517
c_rt_lib0clear(&___nl__2);
#line 517
c_rt_lib0clear(&___nl__3);
#line 517
c_rt_lib0clear(&___nl__4);
#line 517
c_rt_lib0clear(&___nl__5);
#line 517
return ___nl__6;
#line 517
label_14:
#line 517
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 517
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(209), ___nl__7);
#line 517
c_rt_lib0clear(&___nl__5);
#line 517
c_rt_lib0clear(&___nl__6);
#line 517
c_rt_lib0clear(&___nl__7);
#line 518
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(742), ___nl__4));
#line 518
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 518
c_rt_lib0clear(&___nl__5);
#line 518
c_rt_lib0clear(&___nl__4);
#line 519
goto label_1;
#line 519
label_12:
#line 519
c_rt_lib0move(&___nl__4,___get_global_const(744));
#line 519
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 519
c_rt_lib0clear(&___nl__4);
#line 519
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 519
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 520
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 521
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 521
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 521
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(837), ___nl__6);
#line 521
c_rt_lib0clear(&___nl__5);
#line 521
c_rt_lib0clear(&___nl__6);
#line 522
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 522
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 522
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(759), ___nl__6);
#line 522
c_rt_lib0clear(&___nl__5);
#line 522
c_rt_lib0clear(&___nl__6);
#line 523
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 523
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 523
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 523
c_rt_lib0clear(&___nl__1);
#line 523
c_rt_lib0clear(&___nl__2);
#line 523
c_rt_lib0clear(&___nl__3);
#line 523
c_rt_lib0clear(&___nl__4);
#line 523
c_rt_lib0clear(&___nl__5);
#line 523
return ___nl__6;
#line 523
label_16:
#line 523
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 523
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(760), ___nl__7);
#line 523
c_rt_lib0clear(&___nl__5);
#line 523
c_rt_lib0clear(&___nl__6);
#line 523
c_rt_lib0clear(&___nl__7);
#line 524
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 524
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 524
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 524
c_rt_lib0clear(&___nl__1);
#line 524
c_rt_lib0clear(&___nl__2);
#line 524
c_rt_lib0clear(&___nl__3);
#line 524
c_rt_lib0clear(&___nl__4);
#line 524
c_rt_lib0clear(&___nl__5);
#line 524
return ___nl__6;
#line 524
label_17:
#line 524
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 524
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(209), ___nl__7);
#line 524
c_rt_lib0clear(&___nl__5);
#line 524
c_rt_lib0clear(&___nl__6);
#line 524
c_rt_lib0clear(&___nl__7);
#line 525
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(744), ___nl__4));
#line 525
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 525
c_rt_lib0clear(&___nl__5);
#line 525
c_rt_lib0clear(&___nl__4);
#line 526
goto label_1;
#line 526
label_15:
#line 526
c_rt_lib0move(&___nl__4,___get_global_const(117));
#line 526
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 526
c_rt_lib0clear(&___nl__4);
#line 526
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 526
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 527
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 527
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 527
if(c_rt_lib0check_true_native(___nl__5)){ goto label_19;}
#line 527
c_rt_lib0clear(&___nl__1);
#line 527
c_rt_lib0clear(&___nl__2);
#line 527
c_rt_lib0clear(&___nl__3);
#line 527
c_rt_lib0clear(&___nl__4);
#line 527
c_rt_lib0clear(&___nl__5);
#line 527
return ___nl__6;
#line 527
label_19:
#line 527
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 527
c_rt_lib0clear(&___nl__5);
#line 527
c_rt_lib0clear(&___nl__6);
#line 528
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(117), ___nl__4));
#line 528
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 528
c_rt_lib0clear(&___nl__5);
#line 528
c_rt_lib0clear(&___nl__4);
#line 529
goto label_1;
#line 529
label_18:
#line 529
c_rt_lib0move(&___nl__4,___get_global_const(743));
#line 529
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 529
c_rt_lib0clear(&___nl__4);
#line 529
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 529
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 530
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 531
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 531
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(837), ___nl__6);
#line 531
c_rt_lib0clear(&___nl__5);
#line 531
c_rt_lib0clear(&___nl__6);
#line 532
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 532
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 532
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(279), ___nl__6);
#line 532
c_rt_lib0clear(&___nl__5);
#line 532
c_rt_lib0clear(&___nl__6);
#line 533
c_rt_lib0move(&___nl__5,___get_global_const(172));
#line 533
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 533
c_rt_lib0clear(&___nl__5);
#line 534
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 534
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 534
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(234), ___nl__6);
#line 534
c_rt_lib0clear(&___nl__5);
#line 534
c_rt_lib0clear(&___nl__6);
#line 535
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 535
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 535
if(c_rt_lib0check_true_native(___nl__5)){ goto label_21;}
#line 535
c_rt_lib0clear(&___nl__1);
#line 535
c_rt_lib0clear(&___nl__2);
#line 535
c_rt_lib0clear(&___nl__3);
#line 535
c_rt_lib0clear(&___nl__4);
#line 535
c_rt_lib0clear(&___nl__5);
#line 535
return ___nl__6;
#line 535
label_21:
#line 535
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 535
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(278), ___nl__7);
#line 535
c_rt_lib0clear(&___nl__5);
#line 535
c_rt_lib0clear(&___nl__6);
#line 535
c_rt_lib0clear(&___nl__7);
#line 536
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 536
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 536
if(c_rt_lib0check_true_native(___nl__5)){ goto label_22;}
#line 536
c_rt_lib0clear(&___nl__1);
#line 536
c_rt_lib0clear(&___nl__2);
#line 536
c_rt_lib0clear(&___nl__3);
#line 536
c_rt_lib0clear(&___nl__4);
#line 536
c_rt_lib0clear(&___nl__5);
#line 536
return ___nl__6;
#line 536
label_22:
#line 536
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 536
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(209), ___nl__7);
#line 536
c_rt_lib0clear(&___nl__5);
#line 536
c_rt_lib0clear(&___nl__6);
#line 536
c_rt_lib0clear(&___nl__7);
#line 537
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(743), ___nl__4));
#line 537
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 537
c_rt_lib0clear(&___nl__5);
#line 537
c_rt_lib0clear(&___nl__4);
#line 538
goto label_1;
#line 538
label_20:
#line 538
c_rt_lib0move(&___nl__4,___get_global_const(745));
#line 538
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 538
c_rt_lib0clear(&___nl__4);
#line 538
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 538
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 539
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 540
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 540
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 540
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(837), ___nl__6);
#line 540
c_rt_lib0clear(&___nl__5);
#line 540
c_rt_lib0clear(&___nl__6);
#line 541
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 541
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 541
if(c_rt_lib0check_true_native(___nl__5)){ goto label_24;}
#line 541
c_rt_lib0clear(&___nl__1);
#line 541
c_rt_lib0clear(&___nl__2);
#line 541
c_rt_lib0clear(&___nl__3);
#line 541
c_rt_lib0clear(&___nl__4);
#line 541
c_rt_lib0clear(&___nl__5);
#line 541
return ___nl__6;
#line 541
label_24:
#line 541
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 541
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(755), ___nl__7);
#line 541
c_rt_lib0clear(&___nl__5);
#line 541
c_rt_lib0clear(&___nl__6);
#line 541
c_rt_lib0clear(&___nl__7);
#line 542
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 542
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 542
if(c_rt_lib0check_true_native(___nl__5)){ goto label_25;}
#line 542
c_rt_lib0clear(&___nl__1);
#line 542
c_rt_lib0clear(&___nl__2);
#line 542
c_rt_lib0clear(&___nl__3);
#line 542
c_rt_lib0clear(&___nl__4);
#line 542
c_rt_lib0clear(&___nl__5);
#line 542
return ___nl__6;
#line 542
label_25:
#line 542
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 542
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(209), ___nl__7);
#line 542
c_rt_lib0clear(&___nl__5);
#line 542
c_rt_lib0clear(&___nl__6);
#line 542
c_rt_lib0clear(&___nl__7);
#line 543
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(745), ___nl__4));
#line 543
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 543
c_rt_lib0clear(&___nl__5);
#line 543
c_rt_lib0clear(&___nl__4);
#line 544
goto label_1;
#line 544
label_23:
#line 544
c_rt_lib0move(&___nl__4,___get_global_const(741));
#line 544
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 544
c_rt_lib0clear(&___nl__4);
#line 544
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 544
if(c_rt_lib0check_true_native(___nl__3)){ goto label_26;}
#line 545
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 546
c_rt_lib0move(&___nl__5,___get_global_const(322));
#line 546
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 546
c_rt_lib0clear(&___nl__5);
#line 547
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 547
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 547
c_rt_lib0move(&___nl__7,___get_global_const(772));
#line 547
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 547
c_rt_lib0clear(&___nl__7);
#line 547
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 547
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 547
c_rt_lib0clear(&___nl__7);
#line 547
c_rt_lib0clear(&___nl__6);
#line 547
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 547
if(c_rt_lib0check_true_native(___nl__5)){ goto label_28;}
#line 548
c_rt_lib0move(&___nl__8, nparser_priv0parse_var_decl(___ref___0));
#line 548
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 548
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
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
c_rt_lib0clear(&___nl__6);
#line 548
c_rt_lib0clear(&___nl__7);
#line 548
return ___nl__8;
#line 548
label_29:
#line 548
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 548
c_rt_lib0clear(&___nl__7);
#line 548
c_rt_lib0clear(&___nl__8);
#line 549
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(752), ___nl__6));
#line 549
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 549
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(758), ___nl__8);
#line 549
c_rt_lib0clear(&___nl__7);
#line 549
c_rt_lib0clear(&___nl__8);
#line 549
c_rt_lib0clear(&___nl__6);
#line 550
goto label_27;
#line 550
label_28:
#line 550
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 550
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 550
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 550
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 550
c_rt_lib0clear(&___nl__7);
#line 550
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 550
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 550
c_rt_lib0clear(&___nl__7);
#line 550
c_rt_lib0clear(&___nl__6);
#line 550
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 550
if(c_rt_lib0check_true_native(___nl__5)){ goto label_30;}
#line 551
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 551
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(641), ___nl__6));
#line 551
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 551
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(758), ___nl__7);
#line 551
c_rt_lib0clear(&___nl__6);
#line 551
c_rt_lib0clear(&___nl__7);
#line 552
goto label_27;
#line 552
label_30:
#line 553
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 553
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 553
if(c_rt_lib0check_true_native(___nl__7)){ goto label_31;}
#line 553
c_rt_lib0clear(&___nl__1);
#line 553
c_rt_lib0clear(&___nl__2);
#line 553
c_rt_lib0clear(&___nl__3);
#line 553
c_rt_lib0clear(&___nl__4);
#line 553
c_rt_lib0clear(&___nl__5);
#line 553
c_rt_lib0clear(&___nl__6);
#line 553
c_rt_lib0clear(&___nl__7);
#line 553
return ___nl__8;
#line 553
label_31:
#line 553
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 553
c_rt_lib0clear(&___nl__7);
#line 553
c_rt_lib0clear(&___nl__8);
#line 554
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(641), ___nl__6));
#line 554
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 554
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(758), ___nl__8);
#line 554
c_rt_lib0clear(&___nl__7);
#line 554
c_rt_lib0clear(&___nl__8);
#line 554
c_rt_lib0clear(&___nl__6);
#line 555
goto label_27;
#line 555
label_27:
#line 555
c_rt_lib0clear(&___nl__5);
#line 556
c_rt_lib0move(&___nl__5,___get_global_const(311));
#line 556
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 556
c_rt_lib0clear(&___nl__5);
#line 557
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 557
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 557
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(755), ___nl__6);
#line 557
c_rt_lib0clear(&___nl__5);
#line 557
c_rt_lib0clear(&___nl__6);
#line 558
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 558
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 558
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 558
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 558
c_rt_lib0clear(&___nl__7);
#line 558
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 558
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 558
c_rt_lib0clear(&___nl__7);
#line 558
c_rt_lib0clear(&___nl__6);
#line 558
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 558
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 558
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 558
c_rt_lib0move(&___nl__7, nparser_priv0parse_expr(___ref___0));
#line 558
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(44)));
#line 558
if(c_rt_lib0check_true_native(___nl__6)){ goto label_34;}
#line 558
c_rt_lib0clear(&___nl__1);
#line 558
c_rt_lib0clear(&___nl__2);
#line 558
c_rt_lib0clear(&___nl__3);
#line 558
c_rt_lib0clear(&___nl__4);
#line 558
c_rt_lib0clear(&___nl__5);
#line 558
c_rt_lib0clear(&___nl__6);
#line 558
return ___nl__7;
#line 558
label_34:
#line 558
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__7, ___get_global_const(44)));
#line 558
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(755), ___nl__8);
#line 558
c_rt_lib0clear(&___nl__6);
#line 558
c_rt_lib0clear(&___nl__7);
#line 558
c_rt_lib0clear(&___nl__8);
#line 558
goto label_33;
#line 558
label_33:
#line 558
c_rt_lib0clear(&___nl__5);
#line 559
c_rt_lib0move(&___nl__5,___get_global_const(311));
#line 559
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 559
c_rt_lib0clear(&___nl__5);
#line 560
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 560
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 560
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(759), ___nl__6);
#line 560
c_rt_lib0clear(&___nl__5);
#line 560
c_rt_lib0clear(&___nl__6);
#line 561
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 561
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 561
c_rt_lib0move(&___nl__7,___get_global_const(176));
#line 561
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 561
c_rt_lib0clear(&___nl__7);
#line 561
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 561
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 561
c_rt_lib0clear(&___nl__7);
#line 561
c_rt_lib0clear(&___nl__6);
#line 561
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 561
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 561
if(c_rt_lib0check_true_native(___nl__5)){ goto label_36;}
#line 561
c_rt_lib0move(&___nl__7, nparser_priv0parse_expr(___ref___0));
#line 561
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(44)));
#line 561
if(c_rt_lib0check_true_native(___nl__6)){ goto label_37;}
#line 561
c_rt_lib0clear(&___nl__1);
#line 561
c_rt_lib0clear(&___nl__2);
#line 561
c_rt_lib0clear(&___nl__3);
#line 561
c_rt_lib0clear(&___nl__4);
#line 561
c_rt_lib0clear(&___nl__5);
#line 561
c_rt_lib0clear(&___nl__6);
#line 561
return ___nl__7;
#line 561
label_37:
#line 561
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__7, ___get_global_const(44)));
#line 561
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(759), ___nl__8);
#line 561
c_rt_lib0clear(&___nl__6);
#line 561
c_rt_lib0clear(&___nl__7);
#line 561
c_rt_lib0clear(&___nl__8);
#line 561
goto label_36;
#line 561
label_36:
#line 561
c_rt_lib0clear(&___nl__5);
#line 562
c_rt_lib0move(&___nl__5,___get_global_const(176));
#line 562
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 562
c_rt_lib0clear(&___nl__5);
#line 563
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 563
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 563
if(c_rt_lib0check_true_native(___nl__5)){ goto label_38;}
#line 563
c_rt_lib0clear(&___nl__1);
#line 563
c_rt_lib0clear(&___nl__2);
#line 563
c_rt_lib0clear(&___nl__3);
#line 563
c_rt_lib0clear(&___nl__4);
#line 563
c_rt_lib0clear(&___nl__5);
#line 563
return ___nl__6;
#line 563
label_38:
#line 563
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 563
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(209), ___nl__7);
#line 563
c_rt_lib0clear(&___nl__5);
#line 563
c_rt_lib0clear(&___nl__6);
#line 563
c_rt_lib0clear(&___nl__7);
#line 564
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(741), ___nl__4));
#line 564
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 564
c_rt_lib0clear(&___nl__5);
#line 564
c_rt_lib0clear(&___nl__4);
#line 565
goto label_1;
#line 565
label_26:
#line 565
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 565
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 565
c_rt_lib0move(&___nl__5,___get_global_const(168));
#line 565
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 565
c_rt_lib0clear(&___nl__5);
#line 565
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 565
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 565
c_rt_lib0clear(&___nl__5);
#line 565
c_rt_lib0clear(&___nl__4);
#line 565
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 565
if(c_rt_lib0check_true_native(___nl__3)){ goto label_39;}
#line 566
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 566
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 566
if(c_rt_lib0check_true_native(___nl__5)){ goto label_40;}
#line 566
c_rt_lib0clear(&___nl__1);
#line 566
c_rt_lib0clear(&___nl__2);
#line 566
c_rt_lib0clear(&___nl__3);
#line 566
c_rt_lib0clear(&___nl__4);
#line 566
c_rt_lib0clear(&___nl__5);
#line 566
return ___nl__6;
#line 566
label_40:
#line 566
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 566
c_rt_lib0clear(&___nl__5);
#line 566
c_rt_lib0clear(&___nl__6);
#line 567
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 567
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 567
c_rt_lib0clear(&___nl__5);
#line 567
c_rt_lib0clear(&___nl__4);
#line 568
goto label_1;
#line 568
label_39:
#line 568
c_rt_lib0move(&___nl__4,___get_global_const(748));
#line 568
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 568
c_rt_lib0clear(&___nl__4);
#line 568
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 568
if(c_rt_lib0check_true_native(___nl__3)){ goto label_41;}
#line 569
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(748)));
#line 569
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 569
c_rt_lib0clear(&___nl__4);
#line 570
goto label_1;
#line 570
label_41:
#line 570
c_rt_lib0move(&___nl__4,___get_global_const(749));
#line 570
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 570
c_rt_lib0clear(&___nl__4);
#line 570
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 570
if(c_rt_lib0check_true_native(___nl__3)){ goto label_42;}
#line 571
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(749)));
#line 571
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 571
c_rt_lib0clear(&___nl__4);
#line 572
goto label_1;
#line 572
label_42:
#line 572
c_rt_lib0move(&___nl__4,___get_global_const(210));
#line 572
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 572
c_rt_lib0clear(&___nl__4);
#line 572
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 572
if(c_rt_lib0check_true_native(___nl__3)){ goto label_43;}
#line 573
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 573
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 573
c_rt_lib0move(&___nl__4, ntokenizer0get_token(&___nl__5));
#line 573
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 573
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 573
c_rt_lib0clear(&___nl__6);
#line 573
c_rt_lib0clear(&___nl__5);
#line 574
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 575
c_rt_lib0move(&___nl__6, nparser_priv0get_end_list());
#line 575
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 575
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 575
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 575
label_46:
#line 575
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 575
if(c_rt_lib0check_true_native(___nl__11)){ goto label_44;}
#line 575
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 576
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__4, ___nl__7));
#line 576
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 576
if(c_rt_lib0check_true_native(___nl__12)){ goto label_48;}
#line 577
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 577
c_rt_lib0copy(&___nl__5, ___nl__13);
#line 577
c_rt_lib0clear(&___nl__13);
#line 578
c_rt_lib0clear(&___nl__12);
#line 578
goto label_44;
#line 579
goto label_48;
#line 579
label_48:
#line 579
c_rt_lib0clear(&___nl__12);
#line 580
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 580
goto label_46;
#line 580
label_44:
#line 580
c_rt_lib0clear(&___nl__6);
#line 580
c_rt_lib0clear(&___nl__7);
#line 580
c_rt_lib0clear(&___nl__8);
#line 580
c_rt_lib0clear(&___nl__9);
#line 580
c_rt_lib0clear(&___nl__10);
#line 580
c_rt_lib0clear(&___nl__11);
#line 581
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 581
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 581
if(c_rt_lib0check_true_native(___nl__6)){ goto label_50;}
#line 582
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 582
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(210), ___nl__7));
#line 582
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 582
c_rt_lib0clear(&___nl__7);
#line 583
goto label_49;
#line 583
label_50:
#line 584
c_rt_lib0move(&___nl__9, nparser_priv0parse_expr(___ref___0));
#line 584
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__9, ___get_global_const(44)));
#line 584
if(c_rt_lib0check_true_native(___nl__8)){ goto label_51;}
#line 584
c_rt_lib0clear(&___nl__1);
#line 584
c_rt_lib0clear(&___nl__2);
#line 584
c_rt_lib0clear(&___nl__3);
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
return ___nl__9;
#line 584
label_51:
#line 584
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__9, ___get_global_const(44)));
#line 584
c_rt_lib0clear(&___nl__8);
#line 584
c_rt_lib0clear(&___nl__9);
#line 585
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(210), ___nl__7));
#line 585
c_rt_lib0copy(&___nl__2, ___nl__8);
#line 585
c_rt_lib0clear(&___nl__8);
#line 585
c_rt_lib0clear(&___nl__7);
#line 586
goto label_49;
#line 586
label_49:
#line 586
c_rt_lib0clear(&___nl__6);
#line 586
c_rt_lib0clear(&___nl__4);
#line 586
c_rt_lib0clear(&___nl__5);
#line 587
goto label_1;
#line 587
label_43:
#line 587
c_rt_lib0move(&___nl__4,___get_global_const(750));
#line 587
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 587
c_rt_lib0clear(&___nl__4);
#line 587
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 587
if(c_rt_lib0check_true_native(___nl__3)){ goto label_52;}
#line 588
c_rt_lib0move(&___nl__4,___get_global_const(322));
#line 588
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 588
c_rt_lib0clear(&___nl__4);
#line 589
c_rt_lib0move(&___nl__6, nparser_priv0parse_expr(___ref___0));
#line 589
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 589
if(c_rt_lib0check_true_native(___nl__5)){ goto label_53;}
#line 589
c_rt_lib0clear(&___nl__1);
#line 589
c_rt_lib0clear(&___nl__2);
#line 589
c_rt_lib0clear(&___nl__3);
#line 589
c_rt_lib0clear(&___nl__4);
#line 589
c_rt_lib0clear(&___nl__5);
#line 589
return ___nl__6;
#line 589
label_53:
#line 589
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 589
c_rt_lib0clear(&___nl__5);
#line 589
c_rt_lib0clear(&___nl__6);
#line 590
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 590
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(234), ___nl__4, ___get_global_const(763), ___nl__6));
#line 590
c_rt_lib0clear(&___nl__6);
#line 591
c_rt_lib0move(&___nl__6,___get_global_const(176));
#line 591
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__6));
#line 591
c_rt_lib0clear(&___nl__6);
#line 592
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 592
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 592
c_rt_lib0move(&___nl__6, ntokenizer0get_place(&___nl__7));
#line 592
c_rt_lib0move(&___nl__8,___get_global_const(848));
#line 592
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__7));
#line 592
c_rt_lib0clear(&___nl__8);
#line 592
c_rt_lib0clear(&___nl__7);
#line 593
label_55:
#line 593
c_rt_lib0move(&___nl__8,___get_global_const(821));
#line 593
c_rt_lib0move(&___nl__7, nparser_priv0try_eat(___ref___0, ___nl__8));
#line 593
c_rt_lib0clear(&___nl__8);
#line 593
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 593
if(c_rt_lib0check_true_native(___nl__7)){ goto label_54;}
#line 594
c_rt_lib0move(&___nl__9, nparser_priv0parse_variant_decl(___ref___0));
#line 594
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(1, ___get_global_const(764), ___nl__9));
#line 594
c_rt_lib0clear(&___nl__9);
#line 595
c_rt_lib0move(&___nl__11,___get_global_const(848));
#line 595
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___0, ___nl__11));
#line 595
c_rt_lib0move(&___nl__10, ntokenizer0get_place_ws(&___nl__11));
#line 595
c_rt_lib0move(&___nl__12,___get_global_const(848));
#line 595
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__12, ___nl__11));
#line 595
c_rt_lib0clear(&___nl__12);
#line 595
c_rt_lib0clear(&___nl__11);
#line 595
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(396), ___nl__6, ___get_global_const(824), ___nl__10));
#line 595
c_rt_lib0clear(&___nl__10);
#line 595
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 595
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(213), ___nl__10);
#line 595
c_rt_lib0clear(&___nl__9);
#line 595
c_rt_lib0clear(&___nl__10);
#line 596
c_rt_lib0move(&___nl__10, nparser_priv0parse_block(___ref___0));
#line 596
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(44)));
#line 596
if(c_rt_lib0check_true_native(___nl__9)){ goto label_56;}
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
c_rt_lib0clear(&___nl__6);
#line 596
c_rt_lib0clear(&___nl__7);
#line 596
c_rt_lib0clear(&___nl__8);
#line 596
c_rt_lib0clear(&___nl__9);
#line 596
return ___nl__10;
#line 596
label_56:
#line 596
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__10, ___get_global_const(44)));
#line 596
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(209), ___nl__11);
#line 596
c_rt_lib0clear(&___nl__9);
#line 596
c_rt_lib0clear(&___nl__10);
#line 596
c_rt_lib0clear(&___nl__11);
#line 597
c_rt_lib0move(&___nl__9,___get_global_const(763));
#line 597
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__5, ___nl__9));
#line 597
c_rt_lib0delete(array0push(&___nl__9, ___nl__8));
#line 597
c_rt_lib0move(&___nl__10,___get_global_const(763));
#line 597
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__10, ___nl__9));
#line 597
c_rt_lib0clear(&___nl__10);
#line 597
c_rt_lib0clear(&___nl__9);
#line 598
c_rt_lib0move(&___nl__10,___get_global_const(848));
#line 598
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___0, ___nl__10));
#line 598
c_rt_lib0move(&___nl__9, ntokenizer0get_place(&___nl__10));
#line 598
c_rt_lib0move(&___nl__11,___get_global_const(848));
#line 598
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__10));
#line 598
c_rt_lib0clear(&___nl__11);
#line 598
c_rt_lib0clear(&___nl__10);
#line 598
c_rt_lib0copy(&___nl__6, ___nl__9);
#line 598
c_rt_lib0clear(&___nl__9);
#line 598
c_rt_lib0clear(&___nl__8);
#line 599
goto label_55;
#line 599
label_54:
#line 599
c_rt_lib0clear(&___nl__7);
#line 601
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(750), ___nl__5));
#line 601
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 601
c_rt_lib0clear(&___nl__7);
#line 601
c_rt_lib0clear(&___nl__4);
#line 601
c_rt_lib0clear(&___nl__5);
#line 601
c_rt_lib0clear(&___nl__6);
#line 602
goto label_1;
#line 602
label_52:
#line 602
c_rt_lib0move(&___nl__4,___get_global_const(229));
#line 602
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 602
c_rt_lib0clear(&___nl__4);
#line 602
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 602
if(c_rt_lib0check_true_native(___nl__3)){ goto label_57;}
#line 603
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 604
c_rt_lib0move(&___nl__6,___get_global_const(322));
#line 604
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 604
c_rt_lib0clear(&___nl__6);
#line 604
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 604
if(c_rt_lib0check_true_native(___nl__5)){ goto label_59;}
#line 605
c_rt_lib0move(&___nl__7, nparser_priv0parse_expr_list(___ref___0));
#line 605
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(44)));
#line 605
if(c_rt_lib0check_true_native(___nl__6)){ goto label_60;}
#line 605
c_rt_lib0clear(&___nl__1);
#line 605
c_rt_lib0clear(&___nl__2);
#line 605
c_rt_lib0clear(&___nl__3);
#line 605
c_rt_lib0clear(&___nl__4);
#line 605
c_rt_lib0clear(&___nl__5);
#line 605
c_rt_lib0clear(&___nl__6);
#line 605
return ___nl__7;
#line 605
label_60:
#line 605
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__7, ___get_global_const(44)));
#line 605
c_rt_lib0clear(&___nl__6);
#line 605
c_rt_lib0clear(&___nl__7);
#line 606
goto label_59;
#line 606
label_59:
#line 606
c_rt_lib0clear(&___nl__5);
#line 608
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__4));
#line 608
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 608
c_rt_lib0clear(&___nl__5);
#line 608
c_rt_lib0clear(&___nl__4);
#line 609
goto label_1;
#line 609
label_57:
#line 609
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 609
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 609
c_rt_lib0move(&___nl__5,___get_global_const(772));
#line 609
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 609
c_rt_lib0clear(&___nl__5);
#line 609
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 609
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 609
c_rt_lib0clear(&___nl__5);
#line 609
c_rt_lib0clear(&___nl__4);
#line 609
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 609
if(c_rt_lib0check_true_native(___nl__3)){ goto label_61;}
#line 610
c_rt_lib0move(&___nl__6, nparser_priv0parse_var_decl(___ref___0));
#line 610
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 610
if(c_rt_lib0check_true_native(___nl__5)){ goto label_62;}
#line 610
c_rt_lib0clear(&___nl__1);
#line 610
c_rt_lib0clear(&___nl__2);
#line 610
c_rt_lib0clear(&___nl__3);
#line 610
c_rt_lib0clear(&___nl__4);
#line 610
c_rt_lib0clear(&___nl__5);
#line 610
return ___nl__6;
#line 610
label_62:
#line 610
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 610
c_rt_lib0clear(&___nl__5);
#line 610
c_rt_lib0clear(&___nl__6);
#line 611
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(752), ___nl__4));
#line 611
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 611
c_rt_lib0clear(&___nl__5);
#line 612
c_rt_lib0move(&___nl__5,___get_global_const(311));
#line 612
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 612
c_rt_lib0clear(&___nl__5);
#line 612
c_rt_lib0clear(&___nl__4);
#line 613
goto label_1;
#line 613
label_61:
#line 613
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 613
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 613
c_rt_lib0move(&___nl__5,___get_global_const(753));
#line 613
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 613
c_rt_lib0clear(&___nl__5);
#line 613
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 613
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 613
c_rt_lib0clear(&___nl__5);
#line 613
c_rt_lib0clear(&___nl__4);
#line 613
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 613
if(c_rt_lib0check_true_native(___nl__3)){ goto label_63;}
#line 614
c_rt_lib0move(&___nl__4,___get_global_const(753));
#line 614
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 614
c_rt_lib0clear(&___nl__4);
#line 615
c_rt_lib0move(&___nl__6, nparser_priv0parse_try_ensure(___ref___0));
#line 615
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 615
if(c_rt_lib0check_true_native(___nl__5)){ goto label_64;}
#line 615
c_rt_lib0clear(&___nl__1);
#line 615
c_rt_lib0clear(&___nl__2);
#line 615
c_rt_lib0clear(&___nl__3);
#line 615
c_rt_lib0clear(&___nl__4);
#line 615
c_rt_lib0clear(&___nl__5);
#line 615
return ___nl__6;
#line 615
label_64:
#line 615
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 615
c_rt_lib0clear(&___nl__5);
#line 615
c_rt_lib0clear(&___nl__6);
#line 616
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(753), ___nl__4));
#line 616
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 616
c_rt_lib0clear(&___nl__5);
#line 616
c_rt_lib0clear(&___nl__4);
#line 617
goto label_1;
#line 617
label_63:
#line 617
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 617
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 617
c_rt_lib0move(&___nl__5,___get_global_const(78));
#line 617
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 617
c_rt_lib0clear(&___nl__5);
#line 617
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 617
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 617
c_rt_lib0clear(&___nl__5);
#line 617
c_rt_lib0clear(&___nl__4);
#line 617
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 617
if(c_rt_lib0check_true_native(___nl__3)){ goto label_65;}
#line 618
c_rt_lib0move(&___nl__4,___get_global_const(78));
#line 618
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 618
c_rt_lib0clear(&___nl__4);
#line 619
c_rt_lib0move(&___nl__6, nparser_priv0parse_try_ensure(___ref___0));
#line 619
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 619
if(c_rt_lib0check_true_native(___nl__5)){ goto label_66;}
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
return ___nl__6;
#line 619
label_66:
#line 619
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 619
c_rt_lib0clear(&___nl__5);
#line 619
c_rt_lib0clear(&___nl__6);
#line 620
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__4));
#line 620
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 620
c_rt_lib0clear(&___nl__5);
#line 620
c_rt_lib0clear(&___nl__4);
#line 621
goto label_1;
#line 621
label_65:
#line 622
c_rt_lib0move(&___nl__6, nparser_priv0parse_expr(___ref___0));
#line 622
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 622
if(c_rt_lib0check_true_native(___nl__5)){ goto label_67;}
#line 622
c_rt_lib0clear(&___nl__1);
#line 622
c_rt_lib0clear(&___nl__2);
#line 622
c_rt_lib0clear(&___nl__3);
#line 622
c_rt_lib0clear(&___nl__4);
#line 622
c_rt_lib0clear(&___nl__5);
#line 622
return ___nl__6;
#line 622
label_67:
#line 622
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 622
c_rt_lib0clear(&___nl__5);
#line 622
c_rt_lib0clear(&___nl__6);
#line 623
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(641), ___nl__4));
#line 623
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 623
c_rt_lib0clear(&___nl__5);
#line 623
c_rt_lib0clear(&___nl__4);
#line 624
goto label_1;
#line 624
label_1:
#line 624
c_rt_lib0clear(&___nl__3);
#line 626
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 626
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(748)));
#line 626
if(c_rt_lib0check_true_native(___nl__3)){ goto label_75;}
#line 626
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 626
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(749)));
#line 626
label_75:
#line 626
if(c_rt_lib0check_true_native(___nl__3)){ goto label_74;}
#line 626
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 626
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(641)));
#line 626
label_74:
#line 626
if(c_rt_lib0check_true_native(___nl__3)){ goto label_73;}
#line 626
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 626
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(210)));
#line 626
label_73:
#line 626
if(c_rt_lib0check_true_native(___nl__3)){ goto label_72;}
#line 626
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 626
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(229)));
#line 626
label_72:
#line 626
if(c_rt_lib0check_true_native(___nl__3)){ goto label_71;}
#line 626
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 626
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(78)));
#line 626
label_71:
#line 626
if(c_rt_lib0check_true_native(___nl__3)){ goto label_70;}
#line 626
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 626
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(753)));
#line 626
label_70:
#line 626
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 626
if(c_rt_lib0check_true_native(___nl__3)){ goto label_69;}
#line 628
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 628
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 628
c_rt_lib0move(&___nl__5, ntokenizer0get_place_ws(&___nl__6));
#line 628
c_rt_lib0move(&___nl__7,___get_global_const(848));
#line 628
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 628
c_rt_lib0clear(&___nl__7);
#line 628
c_rt_lib0clear(&___nl__6);
#line 628
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(396), ___nl__1, ___get_global_const(824), ___nl__5));
#line 628
c_rt_lib0clear(&___nl__5);
#line 632
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(213), ___nl__4, ___get_global_const(209), ___nl__2));
#line 632
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(1, ___get_global_const(209), ___nl__6));
#line 632
c_rt_lib0clear(&___nl__6);
#line 633
c_rt_lib0move(&___nl__7,___get_global_const(742));
#line 633
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 633
c_rt_lib0clear(&___nl__7);
#line 633
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 633
if(c_rt_lib0check_true_native(___nl__6)){ goto label_77;}
#line 634
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 634
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 634
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(837), ___nl__8);
#line 634
c_rt_lib0clear(&___nl__7);
#line 634
c_rt_lib0clear(&___nl__8);
#line 635
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 635
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 635
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(759), ___nl__8);
#line 635
c_rt_lib0clear(&___nl__7);
#line 635
c_rt_lib0clear(&___nl__8);
#line 636
c_rt_lib0move(&___nl__7,___get_global_const(322));
#line 636
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 636
c_rt_lib0clear(&___nl__7);
#line 637
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 637
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 637
if(c_rt_lib0check_true_native(___nl__7)){ goto label_78;}
#line 637
c_rt_lib0clear(&___nl__1);
#line 637
c_rt_lib0clear(&___nl__2);
#line 637
c_rt_lib0clear(&___nl__3);
#line 637
c_rt_lib0clear(&___nl__4);
#line 637
c_rt_lib0clear(&___nl__5);
#line 637
c_rt_lib0clear(&___nl__6);
#line 637
c_rt_lib0clear(&___nl__7);
#line 637
return ___nl__8;
#line 637
label_78:
#line 637
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 637
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(3), ___nl__9);
#line 637
c_rt_lib0clear(&___nl__7);
#line 637
c_rt_lib0clear(&___nl__8);
#line 637
c_rt_lib0clear(&___nl__9);
#line 638
c_rt_lib0move(&___nl__7,___get_global_const(176));
#line 638
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 638
c_rt_lib0clear(&___nl__7);
#line 639
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(742), ___nl__5));
#line 639
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 639
c_rt_lib0clear(&___nl__7);
#line 640
goto label_87;
#line 640
label_77:
#line 640
c_rt_lib0move(&___nl__7,___get_global_const(744));
#line 640
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 640
c_rt_lib0clear(&___nl__7);
#line 640
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 640
if(c_rt_lib0check_true_native(___nl__6)){ goto label_79;}
#line 641
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 641
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 641
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(837), ___nl__8);
#line 641
c_rt_lib0clear(&___nl__7);
#line 641
c_rt_lib0clear(&___nl__8);
#line 642
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 642
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 642
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(759), ___nl__8);
#line 642
c_rt_lib0clear(&___nl__7);
#line 642
c_rt_lib0clear(&___nl__8);
#line 643
c_rt_lib0move(&___nl__7,___get_global_const(322));
#line 643
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 643
c_rt_lib0clear(&___nl__7);
#line 644
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 644
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 644
if(c_rt_lib0check_true_native(___nl__7)){ goto label_80;}
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
c_rt_lib0clear(&___nl__6);
#line 644
c_rt_lib0clear(&___nl__7);
#line 644
return ___nl__8;
#line 644
label_80:
#line 644
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 644
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(760), ___nl__9);
#line 644
c_rt_lib0clear(&___nl__7);
#line 644
c_rt_lib0clear(&___nl__8);
#line 644
c_rt_lib0clear(&___nl__9);
#line 645
c_rt_lib0move(&___nl__7,___get_global_const(176));
#line 645
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 645
c_rt_lib0clear(&___nl__7);
#line 646
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(744), ___nl__5));
#line 646
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 646
c_rt_lib0clear(&___nl__7);
#line 647
goto label_87;
#line 647
label_79:
#line 647
c_rt_lib0move(&___nl__7,___get_global_const(743));
#line 647
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 647
c_rt_lib0clear(&___nl__7);
#line 647
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 647
if(c_rt_lib0check_true_native(___nl__6)){ goto label_81;}
#line 648
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 648
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 648
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(837), ___nl__8);
#line 648
c_rt_lib0clear(&___nl__7);
#line 648
c_rt_lib0clear(&___nl__8);
#line 649
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 649
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 649
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(279), ___nl__8);
#line 649
c_rt_lib0clear(&___nl__7);
#line 649
c_rt_lib0clear(&___nl__8);
#line 650
c_rt_lib0move(&___nl__7,___get_global_const(172));
#line 650
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 650
c_rt_lib0clear(&___nl__7);
#line 651
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 651
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 651
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(234), ___nl__8);
#line 651
c_rt_lib0clear(&___nl__7);
#line 651
c_rt_lib0clear(&___nl__8);
#line 652
c_rt_lib0move(&___nl__7,___get_global_const(322));
#line 652
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 652
c_rt_lib0clear(&___nl__7);
#line 653
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 653
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 653
if(c_rt_lib0check_true_native(___nl__7)){ goto label_82;}
#line 653
c_rt_lib0clear(&___nl__1);
#line 653
c_rt_lib0clear(&___nl__2);
#line 653
c_rt_lib0clear(&___nl__3);
#line 653
c_rt_lib0clear(&___nl__4);
#line 653
c_rt_lib0clear(&___nl__5);
#line 653
c_rt_lib0clear(&___nl__6);
#line 653
c_rt_lib0clear(&___nl__7);
#line 653
return ___nl__8;
#line 653
label_82:
#line 653
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 653
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(278), ___nl__9);
#line 653
c_rt_lib0clear(&___nl__7);
#line 653
c_rt_lib0clear(&___nl__8);
#line 653
c_rt_lib0clear(&___nl__9);
#line 654
c_rt_lib0move(&___nl__7,___get_global_const(176));
#line 654
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 654
c_rt_lib0clear(&___nl__7);
#line 655
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(743), ___nl__5));
#line 655
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 655
c_rt_lib0clear(&___nl__7);
#line 656
goto label_87;
#line 656
label_81:
#line 656
c_rt_lib0move(&___nl__7,___get_global_const(740));
#line 656
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 656
c_rt_lib0clear(&___nl__7);
#line 656
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 656
if(c_rt_lib0check_true_native(___nl__6)){ goto label_83;}
#line 657
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 657
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 657
if(c_rt_lib0check_true_native(___nl__7)){ goto label_84;}
#line 657
c_rt_lib0clear(&___nl__1);
#line 657
c_rt_lib0clear(&___nl__2);
#line 657
c_rt_lib0clear(&___nl__3);
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
label_84:
#line 657
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 657
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(755), ___nl__9);
#line 657
c_rt_lib0clear(&___nl__7);
#line 657
c_rt_lib0clear(&___nl__8);
#line 657
c_rt_lib0clear(&___nl__9);
#line 658
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(746), ___nl__5));
#line 658
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 658
c_rt_lib0clear(&___nl__7);
#line 659
goto label_87;
#line 659
label_83:
#line 659
c_rt_lib0move(&___nl__7,___get_global_const(855));
#line 659
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 659
c_rt_lib0clear(&___nl__7);
#line 659
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 659
if(c_rt_lib0check_true_native(___nl__6)){ goto label_85;}
#line 660
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 660
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 660
if(c_rt_lib0check_true_native(___nl__7)){ goto label_86;}
#line 660
c_rt_lib0clear(&___nl__1);
#line 660
c_rt_lib0clear(&___nl__2);
#line 660
c_rt_lib0clear(&___nl__3);
#line 660
c_rt_lib0clear(&___nl__4);
#line 660
c_rt_lib0clear(&___nl__5);
#line 660
c_rt_lib0clear(&___nl__6);
#line 660
c_rt_lib0clear(&___nl__7);
#line 660
return ___nl__8;
#line 660
label_86:
#line 660
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 660
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(755), ___nl__9);
#line 660
c_rt_lib0clear(&___nl__7);
#line 660
c_rt_lib0clear(&___nl__8);
#line 660
c_rt_lib0clear(&___nl__9);
#line 661
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(747), ___nl__5));
#line 661
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 661
c_rt_lib0clear(&___nl__7);
#line 662
goto label_87;
#line 662
label_85:
#line 662
c_rt_lib0move(&___nl__7,___get_global_const(745));
#line 662
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 662
c_rt_lib0clear(&___nl__7);
#line 662
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 662
if(c_rt_lib0check_true_native(___nl__6)){ goto label_87;}
#line 663
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 663
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 663
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(837), ___nl__8);
#line 663
c_rt_lib0clear(&___nl__7);
#line 663
c_rt_lib0clear(&___nl__8);
#line 664
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 664
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 664
if(c_rt_lib0check_true_native(___nl__7)){ goto label_88;}
#line 664
c_rt_lib0clear(&___nl__1);
#line 664
c_rt_lib0clear(&___nl__2);
#line 664
c_rt_lib0clear(&___nl__3);
#line 664
c_rt_lib0clear(&___nl__4);
#line 664
c_rt_lib0clear(&___nl__5);
#line 664
c_rt_lib0clear(&___nl__6);
#line 664
c_rt_lib0clear(&___nl__7);
#line 664
return ___nl__8;
#line 664
label_88:
#line 664
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 664
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(755), ___nl__9);
#line 664
c_rt_lib0clear(&___nl__7);
#line 664
c_rt_lib0clear(&___nl__8);
#line 664
c_rt_lib0clear(&___nl__9);
#line 665
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(745), ___nl__5));
#line 665
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 665
c_rt_lib0clear(&___nl__7);
#line 666
goto label_87;
#line 666
label_87:
#line 666
c_rt_lib0clear(&___nl__6);
#line 667
c_rt_lib0move(&___nl__6,___get_global_const(311));
#line 667
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__6));
#line 667
c_rt_lib0clear(&___nl__6);
#line 667
c_rt_lib0clear(&___nl__4);
#line 667
c_rt_lib0clear(&___nl__5);
#line 668
goto label_69;
#line 668
label_69:
#line 668
c_rt_lib0clear(&___nl__3);
#line 669
c_rt_lib0move(&___nl__4,___get_global_const(848));
#line 669
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 669
c_rt_lib0move(&___nl__3, ntokenizer0get_place_ws(&___nl__4));
#line 669
c_rt_lib0move(&___nl__5,___get_global_const(848));
#line 669
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 669
c_rt_lib0clear(&___nl__5);
#line 669
c_rt_lib0clear(&___nl__4);
#line 670
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(396), ___nl__1, ___get_global_const(824), ___nl__3));
#line 674
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(209), ___nl__2, ___get_global_const(213), ___nl__4));
#line 674
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 674
c_rt_lib0clear(&___nl__1);
#line 674
c_rt_lib0clear(&___nl__2);
#line 674
c_rt_lib0clear(&___nl__3);
#line 674
c_rt_lib0clear(&___nl__4);
#line 674
return ___nl__5;
#line 674
c_rt_lib0clear(&___nl__5);
#line 674
c_rt_lib0clear(&___nl__1);
#line 674
c_rt_lib0clear(&___nl__2);
#line 674
c_rt_lib0clear(&___nl__3);
#line 674
c_rt_lib0clear(&___nl__4);
#line 674
return NULL;
}


static ImmT ___const__[7];
static int ___const_init__ = 1;
void nparser_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[6];


for(int i=0;i<6;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 6);
}}
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
case 5:
	___const__[5] = nparser0errors_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
