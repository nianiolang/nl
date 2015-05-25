
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "translator.h"
#include "array.h"
#include "string.h"
#include "ptd.h"
#include "ov.h"
#include "nast.h"
#include "hash.h"
#include "nlasm.h"
#include "boolean_t.h"
#include "string_utils.h"
#line 1 "translator.nl"

static ImmT *__const__f = NULL;
void translator_priv0__const__init();
ImmT translator_priv0__const__sim(int __nr);
ImmT translator_priv0__const__sing(int __nr);

ImmT translator_priv0print_fun_def(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_array_declaration(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_hash_declaration(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_variant(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_var_decl(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0load_const(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_variable(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_post_operator(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0print_unary_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_var_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_bin_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_cmd_array(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0start_new_instruction(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_cmd(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_loop_break(ImmT * ___ref___0,ImmT ___nl__1);
ImmT translator_priv0print_if_mod(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_unless_mod(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_if(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_call_base(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0save_loop_break(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT translator_priv0print_fora(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_loop(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_rep(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_forh(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_while(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_for(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_match(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0move(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_bin_op_operator_command(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4);
ImmT translator_priv0print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT translator_priv0print_if_goto(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_get_from_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0print_set_at_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0print_get_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0print_set_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0get_stuct_of_lvalue(ImmT * ___ref___0);
ImmT translator_priv0get_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0set_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0make_string(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_ternary_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_die(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_return(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_safe_return(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0convert_str_to_number(ImmT ___nl__0);
ImmT translator_priv0dest_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0def_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0calc_val(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0get_var_register(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0new_declaration(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0new_register(ImmT * ___ref___0);
ImmT translator_priv0save_registers(ImmT * ___ref___0);
ImmT translator_priv0undef_reg(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0restore_registers(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_sim_label(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0get_sim_label(ImmT * ___ref___0);


ImmT translator0function_logic_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0function_logic_t");
return translator0function_logic_t();}
ImmT translator0function_logic_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(0);}
ImmT translator0function_logic_t0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 17
c_rt_lib0move(&___nl__2, ptd0sim());
#line 17
c_rt_lib0move(&___nl__4, ptd0sim());
#line 17
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(1025), ___nl__2, ___get_global_const(643), ___nl__3));
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return ___nl__0;
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT translator0loop0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0loop");
return translator0loop();}
ImmT translator0loop(){
translator_priv0__const__init();
return translator_priv0__const__sing(1);}
ImmT translator0loop0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 23
c_rt_lib0move(&___nl__2, ptd0sim());
#line 23
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1026), ___get_global_const(1027)));
#line 23
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 23
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(1028), ___nl__2, ___get_global_const(1029), ___nl__3));
#line 23
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0clear(&___nl__3);
#line 23
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 23
c_rt_lib0clear(&___nl__1);
#line 23
return ___nl__0;
#line 23
c_rt_lib0clear(&___nl__0);
#line 23
return NULL;
}

ImmT translator0loop_label0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0loop_label");
return translator0loop_label();}
ImmT translator0loop_label(){
translator_priv0__const__init();
return translator_priv0__const__sing(2);}
ImmT translator0loop_label0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1026), ___get_global_const(117)));
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1026), ___get_global_const(117)));
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 29
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(748), ___nl__2, ___get_global_const(749), ___nl__3));
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0clear(&___nl__3);
#line 29
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 29
c_rt_lib0clear(&___nl__1);
#line 29
return ___nl__0;
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
return NULL;
}

ImmT translator0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0state_t");
return translator0state_t();}
ImmT translator0state_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(3);}
ImmT translator0state_t0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 36
c_rt_lib0move(&___nl__2, ptd0sim());
#line 36
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_const(190), ___get_global_const(642)));
#line 36
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 36
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1026), ___get_global_const(1027)));
#line 36
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 36
c_rt_lib0move(&___nl__5, ptd0sim());
#line 36
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_const(190), ___get_global_const(626)));
#line 36
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 36
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(translator0loop_label0ptr, ___get_global_const(1026), ___get_global_const(1030)));
#line 36
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 36
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(6, ___get_global_const(1031), ___nl__2, ___get_global_const(213), ___nl__3, ___get_global_const(1029), ___nl__4, ___get_global_const(430), ___nl__5, ___get_global_const(1032), ___nl__6, ___get_global_const(1030), ___nl__7));
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0clear(&___nl__5);
#line 36
c_rt_lib0clear(&___nl__6);
#line 36
c_rt_lib0clear(&___nl__7);
#line 36
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
return ___nl__0;
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return NULL;
}

ImmT translator0string_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0string_t");
return translator0string_t();}
ImmT translator0string_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(4);}
ImmT translator0string_t0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 47
c_rt_lib0move(&___nl__3, ptd0sim());
#line 47
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 47
c_rt_lib0clear(&___nl__3);
#line 47
c_rt_lib0move(&___nl__5, ptd0none());
#line 47
c_rt_lib0move(&___nl__6, ptd0none());
#line 47
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(824), ___nl__5, ___get_global_const(825), ___nl__6));
#line 47
c_rt_lib0clear(&___nl__5);
#line 47
c_rt_lib0clear(&___nl__6);
#line 47
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 47
c_rt_lib0clear(&___nl__4);
#line 47
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(277), ___nl__2, ___get_global_const(826), ___nl__3));
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__3);
#line 47
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
return ___nl__0;
#line 47
c_rt_lib0clear(&___nl__0);
#line 47
return NULL;
}

ImmT translator0lvalue_values_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0lvalue_values_t");
return translator0lvalue_values_t();}
ImmT translator0lvalue_values_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(5);}
ImmT translator0lvalue_values_t0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(190), ___get_global_const(852)));
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 54
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(190), ___get_global_const(852)));
#line 54
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 54
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(190), ___get_global_const(852)));
#line 54
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 54
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(641), ___nl__6, ___get_global_const(1033), ___nl__7));
#line 54
c_rt_lib0clear(&___nl__6);
#line 54
c_rt_lib0clear(&___nl__7);
#line 54
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 54
c_rt_lib0clear(&___nl__5);
#line 54
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(190), ___get_global_const(852)));
#line 54
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 54
c_rt_lib0move(&___nl__8, ptd0sim());
#line 54
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(641), ___nl__7, ___get_global_const(279), ___nl__8));
#line 54
c_rt_lib0clear(&___nl__7);
#line 54
c_rt_lib0clear(&___nl__8);
#line 54
c_rt_lib0move(&___nl__5, ptd0rec(___nl__6));
#line 54
c_rt_lib0clear(&___nl__6);
#line 54
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(641), ___nl__3, ___get_global_const(1033), ___nl__4, ___get_global_const(279), ___nl__5));
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0clear(&___nl__5);
#line 54
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
return ___nl__0;
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
return NULL;
}

ImmT translator0last_debug_char0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "translator0last_debug_char");
return translator0last_debug_char(_tab[0]);}
ImmT translator0last_debug_char(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 62
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(824)));
#line 62
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(98)));
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(824)));
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(838)));
#line 62
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(98), ___nl__2, ___get_global_const(838), ___nl__3));
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(824)));
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(98)));
#line 66
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(824)));
#line 66
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(838)));
#line 66
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(98), ___nl__3, ___get_global_const(838), ___nl__4));
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__4);
#line 70
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(396), ___nl__1, ___get_global_const(824), ___nl__2));
#line 70
c_rt_lib0clear(&___nl__0);
#line 70
c_rt_lib0clear(&___nl__1);
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
return ___nl__3;
#line 70
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0clear(&___nl__1);
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
c_rt_lib0clear(&___nl__0);
#line 70
return NULL;
}

ImmT translator0translate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "translator0translate");
return translator0translate(_tab[0]);}
ImmT translator0translate(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
ImmT ___nl__19 = NULL;
#line 74
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 74
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 74
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 74
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(430), ___nl__2, ___get_global_const(75), ___nl__3, ___get_global_const(336), ___nl__4));
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 79
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 79
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(336), ___nl__3);
#line 79
c_rt_lib0clear(&___nl__2);
#line 79
c_rt_lib0clear(&___nl__3);
#line 80
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(126)));
#line 80
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 80
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 80
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 80
label_3:
#line 80
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 80
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 81
c_rt_lib0move(&___nl__8,___get_global_const(336));
#line 81
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__1, ___nl__8));
#line 81
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(76)));
#line 81
c_rt_lib0delete(array0push(&___nl__8, ___nl__9));
#line 81
c_rt_lib0clear(&___nl__9);
#line 81
c_rt_lib0move(&___nl__9,___get_global_const(336));
#line 81
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__9, ___nl__8));
#line 81
c_rt_lib0clear(&___nl__9);
#line 81
c_rt_lib0clear(&___nl__8);
#line 82
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 82
goto label_3;
#line 82
label_1:
#line 82
c_rt_lib0clear(&___nl__2);
#line 82
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0clear(&___nl__4);
#line 82
c_rt_lib0clear(&___nl__5);
#line 82
c_rt_lib0clear(&___nl__6);
#line 82
c_rt_lib0clear(&___nl__7);
#line 83
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(711)));
#line 83
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 83
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 83
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 83
label_6:
#line 83
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 83
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 83
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 84
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 84
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 84
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(643), ___nl__9, ___get_global_const(1025), ___nl__10));
#line 84
c_rt_lib0clear(&___nl__9);
#line 84
c_rt_lib0clear(&___nl__10);
#line 85
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 85
c_rt_lib0move(&___nl__11, nlasm0empty_debug());
#line 85
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 85
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 85
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(328)));
#line 85
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 85
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(0));
#line 85
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(0));
#line 85
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(76)));
#line 85
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(6, ___get_global_const(212), ___nl__14, ___get_global_const(328), ___nl__15, ___get_global_const(378), ___nl__16, ___get_global_const(331), ___nl__17, ___get_global_const(380), ___nl__18, ___get_global_const(76), ___nl__19));
#line 85
c_rt_lib0clear(&___nl__14);
#line 85
c_rt_lib0clear(&___nl__15);
#line 85
c_rt_lib0clear(&___nl__16);
#line 85
c_rt_lib0clear(&___nl__17);
#line 85
c_rt_lib0clear(&___nl__18);
#line 85
c_rt_lib0clear(&___nl__19);
#line 85
c_rt_lib0move(&___nl__16,___get_global_const(0));
#line 85
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(2, ___get_global_const(1028), ___nl__16, ___get_global_const(1029), ___nl__8));
#line 85
c_rt_lib0clear(&___nl__16);
#line 85
c_rt_lib0move(&___nl__17,___get_global_const(0));
#line 85
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(1028), ___nl__17, ___get_global_const(1029), ___nl__8));
#line 85
c_rt_lib0clear(&___nl__17);
#line 85
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(748), ___nl__15, ___get_global_const(749), ___nl__16));
#line 85
c_rt_lib0clear(&___nl__15);
#line 85
c_rt_lib0clear(&___nl__16);
#line 85
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(6, ___get_global_const(1031), ___nl__10, ___get_global_const(213), ___nl__11, ___get_global_const(430), ___nl__12, ___get_global_const(1029), ___nl__8, ___get_global_const(1032), ___nl__13, ___get_global_const(1030), ___nl__14));
#line 85
c_rt_lib0clear(&___nl__10);
#line 85
c_rt_lib0clear(&___nl__11);
#line 85
c_rt_lib0clear(&___nl__12);
#line 85
c_rt_lib0clear(&___nl__13);
#line 85
c_rt_lib0clear(&___nl__14);
#line 103
c_rt_lib0delete(translator_priv0print_fun_def(___nl__3, &___nl__9));
#line 104
c_rt_lib0move(&___nl__10,___get_global_const(75));
#line 104
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__1, ___nl__10));
#line 104
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1032)));
#line 104
c_rt_lib0delete(array0push(&___nl__10, ___nl__11));
#line 104
c_rt_lib0clear(&___nl__11);
#line 104
c_rt_lib0move(&___nl__11,___get_global_const(75));
#line 104
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__11, ___nl__10));
#line 104
c_rt_lib0clear(&___nl__11);
#line 104
c_rt_lib0clear(&___nl__10);
#line 104
c_rt_lib0clear(&___nl__8);
#line 104
c_rt_lib0clear(&___nl__9);
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 105
goto label_6;
#line 105
label_4:
#line 105
c_rt_lib0clear(&___nl__2);
#line 105
c_rt_lib0clear(&___nl__3);
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
c_rt_lib0clear(&___nl__7);
#line 106
c_rt_lib0clear(&___nl__0);
#line 106
return ___nl__1;
#line 106
c_rt_lib0clear(&___nl__1);
#line 106
c_rt_lib0clear(&___nl__0);
#line 106
return NULL;
}

ImmT translator_priv0print_fun_def(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 110
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 110
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 110
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 110
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 110
label_3:
#line 110
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 110
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 110
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 111
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(257)));
#line 111
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(37)));
#line 111
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 114
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(5)));
#line 114
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 114
c_rt_lib0move(&___nl__9,___get_global_const(74));
#line 114
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 114
nl_die_arg(___nl__9);
#line 111
label_5:
#line 112
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(76)));
#line 112
c_rt_lib0delete(translator_priv0new_declaration(___nl__10, ___ref___1));
#line 112
c_rt_lib0clear(&___nl__10);
#line 113
c_rt_lib0move(&___nl__10,___get_global_const(1032));
#line 113
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 113
c_rt_lib0move(&___nl__11,___get_global_const(331));
#line 113
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 113
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(234)));
#line 113
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 113
c_rt_lib0clear(&___nl__12);
#line 113
c_rt_lib0move(&___nl__12,___get_global_const(331));
#line 113
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 113
c_rt_lib0move(&___nl__12,___get_global_const(1032));
#line 113
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 113
c_rt_lib0clear(&___nl__12);
#line 113
c_rt_lib0clear(&___nl__10);
#line 113
c_rt_lib0clear(&___nl__11);
#line 114
goto label_4;
#line 114
label_6:
#line 115
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(76)));
#line 115
c_rt_lib0delete(translator_priv0new_declaration(___nl__10, ___ref___1));
#line 115
c_rt_lib0clear(&___nl__10);
#line 116
c_rt_lib0move(&___nl__10,___get_global_const(1032));
#line 116
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 116
c_rt_lib0move(&___nl__11,___get_global_const(331));
#line 116
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 116
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 116
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 116
c_rt_lib0clear(&___nl__12);
#line 116
c_rt_lib0move(&___nl__12,___get_global_const(331));
#line 116
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 116
c_rt_lib0move(&___nl__12,___get_global_const(1032));
#line 116
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 116
c_rt_lib0clear(&___nl__12);
#line 116
c_rt_lib0clear(&___nl__10);
#line 116
c_rt_lib0clear(&___nl__11);
#line 117
goto label_4;
#line 117
label_4:
#line 117
c_rt_lib0clear(&___nl__8);
#line 117
c_rt_lib0clear(&___nl__9);
#line 118
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
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
#line 118
c_rt_lib0clear(&___nl__5);
#line 118
c_rt_lib0clear(&___nl__6);
#line 118
c_rt_lib0clear(&___nl__7);
#line 119
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 119
c_rt_lib0delete(translator_priv0print_cmd(___nl__2, ___ref___1));
#line 119
c_rt_lib0clear(&___nl__2);
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 120
c_rt_lib0delete(translator_priv0print_return(___nl__2, ___ref___1));
#line 120
c_rt_lib0clear(&___nl__2);
#line 120
c_rt_lib0clear(&___nl__0);
#line 120
return NULL;
}

ImmT translator_priv0print_array_declaration(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 124
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 125
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 125
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 125
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__0));
#line 125
label_3:
#line 125
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 125
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 125
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, ___nl__5));
#line 126
c_rt_lib0move(&___nl__9, translator_priv0calc_val(___nl__4, ___ref___2));
#line 126
c_rt_lib0delete(array0push(&___nl__3, ___nl__9));
#line 126
c_rt_lib0clear(&___nl__9);
#line 127
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 127
goto label_3;
#line 127
label_1:
#line 127
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0clear(&___nl__5);
#line 127
c_rt_lib0clear(&___nl__6);
#line 127
c_rt_lib0clear(&___nl__7);
#line 127
c_rt_lib0clear(&___nl__8);
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(233), ___nl__1, ___get_global_const(39), ___nl__3));
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(215), ___nl__4));
#line 128
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__0);
#line 128
c_rt_lib0clear(&___nl__1);
#line 128
return NULL;
}

ImmT translator_priv0print_hash_declaration(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 136
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 137
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 137
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 137
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__0));
#line 137
label_3:
#line 137
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 137
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 137
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, ___nl__5));
#line 138
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(279)));
#line 138
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(778)));
#line 138
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 138
c_rt_lib0move(&___nl__11, translator_priv0calc_val(___nl__12, ___ref___2));
#line 138
c_rt_lib0clear(&___nl__12);
#line 138
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(279), ___nl__10, ___get_global_const(234), ___nl__11));
#line 138
c_rt_lib0clear(&___nl__10);
#line 138
c_rt_lib0clear(&___nl__11);
#line 138
c_rt_lib0delete(array0push(&___nl__3, ___nl__9));
#line 138
c_rt_lib0clear(&___nl__9);
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 142
goto label_3;
#line 142
label_1:
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0clear(&___nl__8);
#line 143
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(233), ___nl__1, ___get_global_const(39), ___nl__3));
#line 143
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(216), ___nl__4));
#line 143
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 143
c_rt_lib0clear(&___nl__4);
#line 143
c_rt_lib0clear(&___nl__3);
#line 143
c_rt_lib0clear(&___nl__0);
#line 143
c_rt_lib0clear(&___nl__1);
#line 143
return NULL;
}

ImmT translator_priv0print_variant(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 151
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(211)));
#line 152
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(772)));
#line 152
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(754)));
#line 152
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 152
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 152
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 153
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(772)));
#line 153
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 153
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 153
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 153
c_rt_lib0clear(&___nl__5);
#line 154
goto label_2;
#line 154
label_2:
#line 154
c_rt_lib0clear(&___nl__4);
#line 155
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 155
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__1, ___get_global_const(39), ___nl__3, ___get_global_const(76), ___nl__5));
#line 155
c_rt_lib0clear(&___nl__5);
#line 155
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(228), ___nl__4));
#line 155
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 155
c_rt_lib0clear(&___nl__4);
#line 155
c_rt_lib0clear(&___nl__3);
#line 155
c_rt_lib0clear(&___nl__0);
#line 155
c_rt_lib0clear(&___nl__1);
#line 155
return NULL;
}

ImmT translator_priv0print_var_decl(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 164
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 164
c_rt_lib0move(&___nl__2, translator_priv0new_declaration(___nl__3, ___ref___1));
#line 164
c_rt_lib0clear(&___nl__3);
#line 165
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(641)));
#line 165
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(37)));
#line 165
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 166
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(641)));
#line 166
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 166
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 166
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 166
nl_die_arg(___nl__4);
#line 165
label_2:
#line 166
goto label_1;
#line 166
label_3:
#line 166
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(641)));
#line 167
c_rt_lib0delete(translator_priv0print_val(___nl__5, ___nl__2, ___ref___1));
#line 167
c_rt_lib0clear(&___nl__5);
#line 168
goto label_1;
#line 168
label_1:
#line 168
c_rt_lib0clear(&___nl__3);
#line 168
c_rt_lib0clear(&___nl__4);
#line 169
c_rt_lib0clear(&___nl__0);
#line 169
return ___nl__2;
#line 169
c_rt_lib0clear(&___nl__2);
#line 169
c_rt_lib0clear(&___nl__0);
#line 169
return NULL;
}

ImmT translator_priv0load_const(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(233), ___nl__1, ___get_global_const(234), ___nl__0));
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__3));
#line 173
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 173
c_rt_lib0clear(&___nl__3);
#line 173
c_rt_lib0clear(&___nl__0);
#line 173
c_rt_lib0clear(&___nl__1);
#line 173
return NULL;
}

ImmT translator0ref_rec_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0ref_rec_args_t");
return translator0ref_rec_args_t();}
ImmT translator0ref_rec_args_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(6);}
ImmT translator0ref_rec_args_t0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 181
c_rt_lib0move(&___nl__3, ptd0sim());
#line 181
c_rt_lib0move(&___nl__4, ptd0sim());
#line 181
c_rt_lib0move(&___nl__5, ptd0sim());
#line 181
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(1034), ___nl__3, ___get_global_const(1035), ___nl__4, ___get_global_const(1036), ___nl__5));
#line 181
c_rt_lib0clear(&___nl__3);
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
c_rt_lib0clear(&___nl__5);
#line 181
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 181
c_rt_lib0clear(&___nl__2);
#line 181
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 181
c_rt_lib0clear(&___nl__1);
#line 181
return ___nl__0;
#line 181
c_rt_lib0clear(&___nl__0);
#line 181
return NULL;
}

ImmT translator_priv0print_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 189
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 191
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 192
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 192
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 192
c_rt_lib0clear(&___nl__8);
#line 192
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 192
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 192
c_rt_lib0clear(&___nl__8);
#line 192
label_2:
#line 192
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 192
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 192
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 192
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 193
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 193
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__7));
#line 193
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(257)));
#line 193
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(5)));
#line 193
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 193
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 193
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 193
c_rt_lib0clear(&___nl__9);
#line 193
goto label_3;
#line 193
goto label_5;
#line 193
label_5:
#line 193
c_rt_lib0clear(&___nl__9);
#line 194
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 194
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__7));
#line 194
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(234)));
#line 195
c_rt_lib0delete(translator_priv0get_stuct_of_lvalue(&___nl__9));
#line 196
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 196
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(772)));
#line 196
c_rt_lib0move(&___nl__10, hash0has_key(___nl__6, ___nl__11));
#line 196
c_rt_lib0clear(&___nl__11);
#line 196
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 196
if(c_rt_lib0check_true_native(___nl__10)){ goto label_7;}
#line 196
c_rt_lib0clear(&___nl__9);
#line 196
c_rt_lib0clear(&___nl__10);
#line 196
goto label_3;
#line 196
goto label_7;
#line 196
label_7:
#line 196
c_rt_lib0clear(&___nl__10);
#line 197
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 197
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(772)));
#line 197
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 197
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__10, ___nl__11));
#line 197
c_rt_lib0clear(&___nl__11);
#line 197
c_rt_lib0clear(&___nl__10);
#line 198
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 198
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__10));
#line 198
c_rt_lib0clear(&___nl__10);
#line 198
c_rt_lib0clear(&___nl__9);
#line 198
label_3:
#line 198
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 198
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__9));
#line 198
c_rt_lib0clear(&___nl__9);
#line 199
goto label_2;
#line 199
label_1:
#line 199
c_rt_lib0clear(&___nl__7);
#line 199
c_rt_lib0clear(&___nl__8);
#line 200
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 201
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 201
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 201
c_rt_lib0clear(&___nl__9);
#line 201
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 201
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 201
label_10:
#line 201
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__9, ___nl__8));
#line 201
if(c_rt_lib0check_true_native(___nl__11)){ goto label_8;}
#line 202
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 202
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__12, ___nl__9));
#line 203
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(257)));
#line 203
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(37)));
#line 203
if(c_rt_lib0check_true_native(___nl__14)){ goto label_12;}
#line 205
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(5)));
#line 205
if(c_rt_lib0check_true_native(___nl__14)){ goto label_13;}
#line 205
c_rt_lib0move(&___nl__14,___get_global_const(74));
#line 205
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 205
nl_die_arg(___nl__14);
#line 203
label_12:
#line 204
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(234)));
#line 204
c_rt_lib0move(&___nl__15, translator_priv0calc_val(___nl__16, ___ref___2));
#line 204
c_rt_lib0clear(&___nl__16);
#line 204
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__15));
#line 204
c_rt_lib0delete(array0push(&___nl__3, ___nl__15));
#line 204
c_rt_lib0clear(&___nl__15);
#line 205
goto label_11;
#line 205
label_13:
#line 206
c_rt_lib0move(&___nl__15, hash0has_key(___nl__5, ___nl__9));
#line 206
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 206
if(c_rt_lib0check_true_native(___nl__15)){ goto label_15;}
#line 207
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(234)));
#line 207
c_rt_lib0move(&___nl__18,___get_global_const(2));
#line 207
c_rt_lib0move(&___nl__16, translator_priv0get_value_of_lvalue(___nl__17, ___nl__18, ___ref___2));
#line 207
c_rt_lib0clear(&___nl__18);
#line 207
c_rt_lib0clear(&___nl__17);
#line 208
c_rt_lib0move(&___nl__18, array0len(___nl__16));
#line 208
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 208
c_rt_lib0move(&___nl__18, c_rt_lib0sub_mod(___nl__18, ___nl__19));
#line 208
c_rt_lib0clear(&___nl__19);
#line 208
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__16, ___nl__18));
#line 208
c_rt_lib0clear(&___nl__18);
#line 208
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__17, ___get_global_const(641)));
#line 209
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__17));
#line 209
c_rt_lib0delete(array0push(&___nl__3, ___nl__18));
#line 209
c_rt_lib0clear(&___nl__18);
#line 210
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__9, ___nl__16));
#line 210
c_rt_lib0clear(&___nl__16);
#line 210
c_rt_lib0clear(&___nl__17);
#line 211
goto label_14;
#line 211
label_15:
#line 212
c_rt_lib0move(&___nl__16, translator_priv0new_register(___ref___2));
#line 213
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(234)));
#line 213
c_rt_lib0delete(translator_priv0print_val(___nl__17, ___nl__16, ___ref___2));
#line 213
c_rt_lib0clear(&___nl__17);
#line 214
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 214
c_rt_lib0delete(array0push(&___nl__3, ___nl__17));
#line 214
c_rt_lib0clear(&___nl__17);
#line 214
c_rt_lib0clear(&___nl__16);
#line 215
goto label_14;
#line 215
label_14:
#line 215
c_rt_lib0clear(&___nl__15);
#line 216
goto label_11;
#line 216
label_11:
#line 216
c_rt_lib0clear(&___nl__13);
#line 216
c_rt_lib0clear(&___nl__14);
#line 217
c_rt_lib0move(&___nl__13, translator_priv0save_registers(___ref___2));
#line 217
c_rt_lib0delete(array0push(&___nl__7, ___nl__13));
#line 217
c_rt_lib0clear(&___nl__13);
#line 217
c_rt_lib0clear(&___nl__12);
#line 218
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 218
goto label_10;
#line 218
label_8:
#line 218
c_rt_lib0clear(&___nl__8);
#line 218
c_rt_lib0clear(&___nl__9);
#line 218
c_rt_lib0clear(&___nl__10);
#line 218
c_rt_lib0clear(&___nl__11);
#line 219
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(99)));
#line 219
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 219
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(4, ___get_global_const(233), ___nl__1, ___get_global_const(257), ___nl__9, ___get_global_const(385), ___nl__10, ___get_global_const(73), ___nl__3));
#line 219
c_rt_lib0clear(&___nl__9);
#line 219
c_rt_lib0clear(&___nl__10);
#line 219
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(217), ___nl__8));
#line 219
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 219
c_rt_lib0clear(&___nl__8);
#line 226
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 226
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 226
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 226
c_rt_lib0clear(&___nl__9);
#line 226
label_17:
#line 226
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 226
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__8, ___nl__9));
#line 226
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 226
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 227
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 227
c_rt_lib0delete(translator_priv0restore_registers(___nl__10, ___ref___2));
#line 227
c_rt_lib0clear(&___nl__10);
#line 228
c_rt_lib0move(&___nl__10, hash0has_key(___nl__4, ___nl__8));
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 228
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 228
c_rt_lib0clear(&___nl__10);
#line 228
goto label_18;
#line 228
goto label_20;
#line 228
label_20:
#line 228
c_rt_lib0clear(&___nl__10);
#line 229
c_rt_lib0move(&___nl__10, hash0get_value(___nl__4, ___nl__8));
#line 229
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 229
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__10, ___nl__11, ___ref___2));
#line 229
c_rt_lib0clear(&___nl__11);
#line 229
c_rt_lib0clear(&___nl__10);
#line 229
label_18:
#line 229
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 229
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__10));
#line 229
c_rt_lib0clear(&___nl__10);
#line 230
goto label_17;
#line 230
label_16:
#line 230
c_rt_lib0clear(&___nl__8);
#line 230
c_rt_lib0clear(&___nl__9);
#line 230
c_rt_lib0clear(&___nl__3);
#line 230
c_rt_lib0clear(&___nl__4);
#line 230
c_rt_lib0clear(&___nl__5);
#line 230
c_rt_lib0clear(&___nl__6);
#line 230
c_rt_lib0clear(&___nl__7);
#line 230
c_rt_lib0clear(&___nl__0);
#line 230
c_rt_lib0clear(&___nl__1);
#line 230
return NULL;
}

ImmT translator_priv0print_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 234
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 235
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(294)));
#line 235
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 237
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(694)));
#line 237
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(776)));
#line 239
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 241
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(778)));
#line 241
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 243
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(764)));
#line 243
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 245
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(772)));
#line 245
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(777)));
#line 247
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(219)));
#line 249
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(779)));
#line 251
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 253
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(780)));
#line 253
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 255
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(735)));
#line 255
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 257
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(215)));
#line 257
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 259
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(216)));
#line 259
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 261
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 261
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 262
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(781)));
#line 262
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(782)));
#line 264
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(783)));
#line 266
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 266
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__0));
#line 266
nl_die_arg(___nl__4);
#line 235
label_2:
#line 235
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(294)));
#line 236
c_rt_lib0move(&___nl__6, translator_priv0convert_str_to_number(___nl__5));
#line 236
c_rt_lib0delete(translator_priv0load_const(___nl__6, ___nl__1, ___ref___2));
#line 236
c_rt_lib0clear(&___nl__6);
#line 236
c_rt_lib0clear(&___nl__5);
#line 237
goto label_1;
#line 237
label_3:
#line 237
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(694)));
#line 238
c_rt_lib0move(&___nl__6, translator_priv0make_string(___nl__5, ___ref___2));
#line 238
c_rt_lib0delete(translator_priv0load_const(___nl__6, ___nl__1, ___ref___2));
#line 238
c_rt_lib0clear(&___nl__6);
#line 238
c_rt_lib0clear(&___nl__5);
#line 239
goto label_1;
#line 239
label_4:
#line 239
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(776)));
#line 240
c_rt_lib0delete(translator_priv0print_ternary_op(___nl__5, ___nl__1, ___ref___2));
#line 240
c_rt_lib0clear(&___nl__5);
#line 241
goto label_1;
#line 241
label_5:
#line 241
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(778)));
#line 242
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 242
nl_die_arg(___nl__6);
#line 242
c_rt_lib0clear(&___nl__6);
#line 242
c_rt_lib0clear(&___nl__5);
#line 243
goto label_1;
#line 243
label_6:
#line 243
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(764)));
#line 244
c_rt_lib0delete(translator_priv0print_variant(___nl__5, ___nl__1, ___ref___2));
#line 244
c_rt_lib0clear(&___nl__5);
#line 245
goto label_1;
#line 245
label_7:
#line 245
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(772)));
#line 246
c_rt_lib0delete(translator_priv0print_variable(___nl__5, ___nl__1, ___ref___2));
#line 246
c_rt_lib0clear(&___nl__5);
#line 247
goto label_1;
#line 247
label_8:
#line 247
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(777)));
#line 248
c_rt_lib0delete(translator_priv0print_val(___nl__5, ___nl__1, ___ref___2));
#line 248
c_rt_lib0clear(&___nl__5);
#line 249
goto label_1;
#line 249
label_9:
#line 249
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(219)));
#line 250
c_rt_lib0delete(translator_priv0print_bin_op(___nl__5, ___nl__1, ___ref___2));
#line 250
c_rt_lib0clear(&___nl__5);
#line 251
goto label_1;
#line 251
label_10:
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(779)));
#line 252
c_rt_lib0delete(translator_priv0print_var_op(___nl__5, ___nl__1, ___ref___2));
#line 252
c_rt_lib0clear(&___nl__5);
#line 253
goto label_1;
#line 253
label_11:
#line 253
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(780)));
#line 254
c_rt_lib0delete(translator_priv0print_unary_op(___nl__5, ___nl__1, ___ref___2));
#line 254
c_rt_lib0clear(&___nl__5);
#line 255
goto label_1;
#line 255
label_12:
#line 255
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(735)));
#line 256
c_rt_lib0delete(translator_priv0print_fun_val(___nl__5, ___nl__1, ___ref___2));
#line 256
c_rt_lib0clear(&___nl__5);
#line 257
goto label_1;
#line 257
label_13:
#line 257
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(215)));
#line 258
c_rt_lib0delete(translator_priv0print_array_declaration(___nl__5, ___nl__1, ___ref___2));
#line 258
c_rt_lib0clear(&___nl__5);
#line 259
goto label_1;
#line 259
label_14:
#line 259
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(216)));
#line 260
c_rt_lib0delete(translator_priv0print_hash_declaration(___nl__5, ___nl__1, ___ref___2));
#line 260
c_rt_lib0clear(&___nl__5);
#line 261
goto label_1;
#line 261
label_15:
#line 262
goto label_1;
#line 262
label_16:
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(781)));
#line 263
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 263
nl_die_arg(___nl__6);
#line 263
c_rt_lib0clear(&___nl__6);
#line 263
c_rt_lib0clear(&___nl__5);
#line 264
goto label_1;
#line 264
label_17:
#line 264
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(782)));
#line 265
c_rt_lib0move(&___nl__6,___get_global_const(801));
#line 265
c_rt_lib0delete(translator_priv0print_post_operator(___nl__5, ___nl__6, ___nl__1, ___ref___2));
#line 265
c_rt_lib0clear(&___nl__6);
#line 265
c_rt_lib0clear(&___nl__5);
#line 266
goto label_1;
#line 266
label_18:
#line 266
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(783)));
#line 267
c_rt_lib0move(&___nl__6,___get_global_const(138));
#line 267
c_rt_lib0delete(translator_priv0print_post_operator(___nl__5, ___nl__6, ___nl__1, ___ref___2));
#line 267
c_rt_lib0clear(&___nl__6);
#line 267
c_rt_lib0clear(&___nl__5);
#line 268
goto label_1;
#line 268
label_1:
#line 268
c_rt_lib0clear(&___nl__4);
#line 269
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 269
c_rt_lib0clear(&___nl__3);
#line 269
c_rt_lib0clear(&___nl__0);
#line 269
c_rt_lib0clear(&___nl__1);
#line 269
return NULL;
}

ImmT translator_priv0print_variable(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 273
c_rt_lib0move(&___nl__3, translator_priv0get_var_register(___nl__0, ___ref___2));
#line 273
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__3, ___ref___2));
#line 273
c_rt_lib0clear(&___nl__3);
#line 273
c_rt_lib0clear(&___nl__0);
#line 273
c_rt_lib0clear(&___nl__1);
#line 273
return NULL;
}

ImmT translator_priv0print_post_operator(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 277
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 277
c_rt_lib0move(&___nl__4, translator_priv0get_value_of_lvalue(___nl__0, ___nl__5, ___ref___3));
#line 277
c_rt_lib0clear(&___nl__5);
#line 278
c_rt_lib0move(&___nl__6, array0len(___nl__4));
#line 278
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 278
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 278
c_rt_lib0clear(&___nl__7);
#line 278
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 278
c_rt_lib0clear(&___nl__6);
#line 278
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(641)));
#line 279
c_rt_lib0delete(translator_priv0move(___nl__2, ___nl__5, ___ref___3));
#line 280
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 280
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(294), ___nl__7));
#line 280
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___3));
#line 280
c_rt_lib0clear(&___nl__7);
#line 281
c_rt_lib0move(&___nl__7,___get_global_const(801));
#line 281
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__1, ___nl__7));
#line 281
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 281
c_rt_lib0move(&___nl__7,___get_global_const(245));
#line 281
goto label_1;
#line 281
label_2:
#line 281
c_rt_lib0move(&___nl__7,___get_global_const(247));
#line 281
label_1:
#line 281
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__5, ___nl__5, ___nl__6, ___nl__7, ___ref___3));
#line 281
c_rt_lib0clear(&___nl__7);
#line 282
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 282
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__4, ___nl__7, ___ref___3));
#line 282
c_rt_lib0clear(&___nl__7);
#line 282
c_rt_lib0clear(&___nl__4);
#line 282
c_rt_lib0clear(&___nl__5);
#line 282
c_rt_lib0clear(&___nl__6);
#line 282
c_rt_lib0clear(&___nl__0);
#line 282
c_rt_lib0clear(&___nl__1);
#line 282
c_rt_lib0clear(&___nl__2);
#line 282
return NULL;
}

ImmT translator_priv0print_unary_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 286
c_rt_lib0move(&___nl__4,___get_global_const(243));
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 286
c_rt_lib0clear(&___nl__4);
#line 286
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 286
c_rt_lib0move(&___nl__4,___get_global_const(245));
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 286
c_rt_lib0clear(&___nl__4);
#line 286
label_4:
#line 286
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 286
c_rt_lib0move(&___nl__4,___get_global_const(247));
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 286
c_rt_lib0clear(&___nl__4);
#line 286
label_3:
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 286
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 289
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 289
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 289
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 289
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 289
c_rt_lib0clear(&___nl__0);
#line 289
c_rt_lib0clear(&___nl__1);
#line 289
c_rt_lib0clear(&___nl__3);
#line 289
c_rt_lib0clear(&___nl__4);
#line 289
return NULL;
#line 289
goto label_6;
#line 289
label_6:
#line 289
c_rt_lib0clear(&___nl__4);
#line 290
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 290
c_rt_lib0delete(translator_priv0print_val(___nl__4, ___nl__1, ___ref___2));
#line 290
c_rt_lib0clear(&___nl__4);
#line 291
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__1, ___get_global_const(39), ___nl__1, ___get_global_const(401), ___nl__5));
#line 291
c_rt_lib0clear(&___nl__5);
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__4));
#line 291
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 291
c_rt_lib0clear(&___nl__4);
#line 297
goto label_1;
#line 297
label_2:
#line 297
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 297
c_rt_lib0move(&___nl__4,___get_global_const(801));
#line 297
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 297
c_rt_lib0clear(&___nl__4);
#line 297
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 297
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 297
c_rt_lib0move(&___nl__4,___get_global_const(138));
#line 297
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 297
c_rt_lib0clear(&___nl__4);
#line 297
label_8:
#line 297
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 297
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 298
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 298
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 298
c_rt_lib0move(&___nl__4, translator_priv0get_value_of_lvalue(___nl__5, ___nl__6, ___ref___2));
#line 298
c_rt_lib0clear(&___nl__6);
#line 298
c_rt_lib0clear(&___nl__5);
#line 299
c_rt_lib0move(&___nl__6, array0len(___nl__4));
#line 299
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 299
c_rt_lib0clear(&___nl__7);
#line 299
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 299
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(641)));
#line 300
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 300
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(294), ___nl__7));
#line 300
c_rt_lib0move(&___nl__6, translator_priv0dest_val(___nl__7, ___nl__1, ___ref___2));
#line 300
c_rt_lib0clear(&___nl__7);
#line 301
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 301
c_rt_lib0move(&___nl__8,___get_global_const(801));
#line 301
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 301
c_rt_lib0clear(&___nl__8);
#line 301
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 301
c_rt_lib0move(&___nl__7,___get_global_const(245));
#line 301
goto label_9;
#line 301
label_10:
#line 301
c_rt_lib0move(&___nl__7,___get_global_const(247));
#line 301
label_9:
#line 301
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__5, ___nl__5, ___nl__6, ___nl__7, ___ref___2));
#line 301
c_rt_lib0clear(&___nl__7);
#line 302
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 303
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 303
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__4, ___nl__7, ___ref___2));
#line 303
c_rt_lib0clear(&___nl__7);
#line 303
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0clear(&___nl__5);
#line 303
c_rt_lib0clear(&___nl__6);
#line 304
goto label_1;
#line 304
label_7:
#line 304
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 304
c_rt_lib0move(&___nl__4,___get_global_const(184));
#line 304
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 304
c_rt_lib0clear(&___nl__4);
#line 304
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 304
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 305
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 305
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 305
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 305
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 305
c_rt_lib0clear(&___nl__0);
#line 305
c_rt_lib0clear(&___nl__1);
#line 305
c_rt_lib0clear(&___nl__3);
#line 305
c_rt_lib0clear(&___nl__4);
#line 305
return NULL;
#line 305
goto label_13;
#line 305
label_13:
#line 305
c_rt_lib0clear(&___nl__4);
#line 306
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 306
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(781)));
#line 307
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(99)));
#line 307
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 307
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__1, ___get_global_const(99), ___nl__6, ___get_global_const(76), ___nl__7));
#line 307
c_rt_lib0clear(&___nl__6);
#line 307
c_rt_lib0clear(&___nl__7);
#line 307
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(71), ___nl__5));
#line 307
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__5));
#line 307
c_rt_lib0clear(&___nl__5);
#line 313
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__1));
#line 313
c_rt_lib0move(&___nl__7,___get_global_const(5));
#line 313
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__1, ___get_global_const(39), ___nl__6, ___get_global_const(76), ___nl__7));
#line 313
c_rt_lib0clear(&___nl__6);
#line 313
c_rt_lib0clear(&___nl__7);
#line 313
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(228), ___nl__5));
#line 313
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__5));
#line 313
c_rt_lib0clear(&___nl__5);
#line 313
c_rt_lib0clear(&___nl__4);
#line 319
goto label_1;
#line 319
label_11:
#line 320
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 320
nl_die_arg(___nl__4);
#line 320
c_rt_lib0clear(&___nl__4);
#line 321
goto label_1;
#line 321
label_1:
#line 321
c_rt_lib0clear(&___nl__3);
#line 321
c_rt_lib0clear(&___nl__0);
#line 321
c_rt_lib0clear(&___nl__1);
#line 321
return NULL;
}

ImmT translator_priv0print_var_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 325
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 325
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 325
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 325
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 325
c_rt_lib0clear(&___nl__0);
#line 325
c_rt_lib0clear(&___nl__1);
#line 325
c_rt_lib0clear(&___nl__3);
#line 325
return NULL;
#line 325
goto label_2;
#line 325
label_2:
#line 325
c_rt_lib0clear(&___nl__3);
#line 326
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 326
c_rt_lib0delete(translator_priv0print_val(___nl__3, ___nl__1, ___ref___2));
#line 326
c_rt_lib0clear(&___nl__3);
#line 328
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 328
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(220)));
#line 328
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 334
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(221)));
#line 334
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 334
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 334
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 334
nl_die_arg(___nl__5);
#line 328
label_4:
#line 329
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(821)));
#line 329
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__1, ___get_global_const(39), ___nl__1, ___get_global_const(72), ___nl__7));
#line 329
c_rt_lib0clear(&___nl__7);
#line 329
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__6));
#line 329
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 329
c_rt_lib0clear(&___nl__6);
#line 334
goto label_3;
#line 334
label_5:
#line 335
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(821)));
#line 335
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__1, ___get_global_const(39), ___nl__1, ___get_global_const(72), ___nl__7));
#line 335
c_rt_lib0clear(&___nl__7);
#line 335
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__6));
#line 335
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 335
c_rt_lib0clear(&___nl__6);
#line 340
goto label_3;
#line 340
label_3:
#line 340
c_rt_lib0clear(&___nl__4);
#line 340
c_rt_lib0clear(&___nl__5);
#line 341
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 341
c_rt_lib0clear(&___nl__3);
#line 341
c_rt_lib0clear(&___nl__0);
#line 341
c_rt_lib0clear(&___nl__1);
#line 341
return NULL;
}

ImmT translator_priv0print_bin_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 344
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 344
c_rt_lib0move(&___nl__4,___get_global_const(787));
#line 344
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 344
c_rt_lib0clear(&___nl__4);
#line 344
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 344
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 345
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 345
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 345
c_rt_lib0clear(&___nl__5);
#line 346
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 346
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 346
c_rt_lib0move(&___nl__5, translator_priv0get_value_of_lvalue(___nl__6, ___nl__7, ___ref___2));
#line 346
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0clear(&___nl__6);
#line 347
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 347
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 347
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 347
c_rt_lib0clear(&___nl__8);
#line 347
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 347
c_rt_lib0clear(&___nl__7);
#line 347
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(641)));
#line 348
c_rt_lib0delete(translator_priv0move(___nl__6, ___nl__4, ___ref___2));
#line 349
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__6, ___ref___2));
#line 350
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 350
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__5, ___nl__7, ___ref___2));
#line 350
c_rt_lib0clear(&___nl__7);
#line 350
c_rt_lib0clear(&___nl__4);
#line 350
c_rt_lib0clear(&___nl__5);
#line 350
c_rt_lib0clear(&___nl__6);
#line 351
goto label_1;
#line 351
label_2:
#line 351
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 351
c_rt_lib0move(&___nl__4,___get_global_const(774));
#line 351
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 351
c_rt_lib0clear(&___nl__4);
#line 351
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 351
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 351
c_rt_lib0move(&___nl__4,___get_global_const(773));
#line 351
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 351
c_rt_lib0clear(&___nl__4);
#line 351
label_4:
#line 351
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 351
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 352
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 352
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 352
c_rt_lib0clear(&___nl__5);
#line 353
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 353
c_rt_lib0move(&___nl__6,___get_global_const(774));
#line 353
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 353
c_rt_lib0clear(&___nl__6);
#line 353
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 353
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 354
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___2));
#line 354
c_rt_lib0clear(&___nl__7);
#line 355
c_rt_lib0delete(translator_priv0print_get_from_index(___nl__1, ___nl__4, ___nl__6, ___ref___2));
#line 355
c_rt_lib0clear(&___nl__6);
#line 356
goto label_5;
#line 356
label_6:
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(778)));
#line 357
c_rt_lib0delete(translator_priv0print_get_value(___nl__1, ___nl__4, ___nl__6, ___ref___2));
#line 357
c_rt_lib0clear(&___nl__6);
#line 358
goto label_5;
#line 358
label_5:
#line 358
c_rt_lib0clear(&___nl__5);
#line 358
c_rt_lib0clear(&___nl__4);
#line 359
goto label_1;
#line 359
label_3:
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 359
c_rt_lib0move(&___nl__4,___get_global_const(788));
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 359
c_rt_lib0clear(&___nl__4);
#line 359
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 359
c_rt_lib0move(&___nl__4,___get_global_const(789));
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 359
c_rt_lib0clear(&___nl__4);
#line 359
label_11:
#line 359
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 359
c_rt_lib0move(&___nl__4,___get_global_const(791));
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 359
c_rt_lib0clear(&___nl__4);
#line 359
label_10:
#line 359
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 359
c_rt_lib0move(&___nl__4,___get_global_const(790));
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 359
c_rt_lib0clear(&___nl__4);
#line 359
label_9:
#line 359
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 359
c_rt_lib0move(&___nl__4,___get_global_const(792));
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 359
c_rt_lib0clear(&___nl__4);
#line 359
label_8:
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 359
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 362
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 362
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___2));
#line 362
c_rt_lib0clear(&___nl__5);
#line 363
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 363
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 363
c_rt_lib0move(&___nl__5, translator_priv0get_value_of_lvalue(___nl__6, ___nl__7, ___ref___2));
#line 363
c_rt_lib0clear(&___nl__7);
#line 363
c_rt_lib0clear(&___nl__6);
#line 364
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 364
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 364
c_rt_lib0clear(&___nl__8);
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 364
c_rt_lib0clear(&___nl__7);
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(641)));
#line 365
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 365
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__6, ___nl__6, ___nl__4, ___nl__7, ___ref___2));
#line 365
c_rt_lib0clear(&___nl__7);
#line 366
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__6, ___ref___2));
#line 367
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 367
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__5, ___nl__7, ___ref___2));
#line 367
c_rt_lib0clear(&___nl__7);
#line 367
c_rt_lib0clear(&___nl__4);
#line 367
c_rt_lib0clear(&___nl__5);
#line 367
c_rt_lib0clear(&___nl__6);
#line 368
goto label_1;
#line 368
label_7:
#line 368
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 368
c_rt_lib0move(&___nl__4,___get_global_const(696));
#line 368
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 368
c_rt_lib0clear(&___nl__4);
#line 368
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 368
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 369
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 370
c_rt_lib0move(&___nl__5, translator_priv0new_register(___ref___2));
#line 371
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 371
c_rt_lib0move(&___nl__6, translator_priv0def_val(___nl__7, ___nl__1, ___nl__5, ___ref___2));
#line 371
c_rt_lib0clear(&___nl__7);
#line 372
c_rt_lib0move(&___nl__8,___get_global_const(243));
#line 372
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__5, ___get_global_const(39), ___nl__6, ___get_global_const(401), ___nl__8));
#line 372
c_rt_lib0clear(&___nl__8);
#line 372
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__7));
#line 372
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__7));
#line 372
c_rt_lib0clear(&___nl__7);
#line 379
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 380
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 380
c_rt_lib0delete(translator_priv0def_val(___nl__7, ___nl__1, ___nl__5, ___ref___2));
#line 380
c_rt_lib0clear(&___nl__7);
#line 381
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 381
c_rt_lib0clear(&___nl__4);
#line 381
c_rt_lib0clear(&___nl__5);
#line 381
c_rt_lib0clear(&___nl__6);
#line 382
goto label_1;
#line 382
label_12:
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 382
c_rt_lib0move(&___nl__4,___get_global_const(697));
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 382
c_rt_lib0clear(&___nl__4);
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 382
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 383
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 384
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 384
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 384
c_rt_lib0clear(&___nl__6);
#line 385
c_rt_lib0move(&___nl__6, c_rt_lib0ne(___nl__1, ___nl__5));
#line 385
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 385
if(c_rt_lib0check_true_native(___nl__6)){ goto label_15;}
#line 385
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 385
goto label_15;
#line 385
label_15:
#line 385
c_rt_lib0clear(&___nl__6);
#line 386
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 387
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 387
c_rt_lib0move(&___nl__6, translator_priv0dest_val(___nl__7, ___nl__1, ___ref___2));
#line 387
c_rt_lib0clear(&___nl__7);
#line 387
c_rt_lib0copy(&___nl__5, ___nl__6);
#line 387
c_rt_lib0clear(&___nl__6);
#line 388
c_rt_lib0move(&___nl__6, c_rt_lib0ne(___nl__5, ___nl__1));
#line 388
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 388
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 388
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 388
goto label_17;
#line 388
label_17:
#line 388
c_rt_lib0clear(&___nl__6);
#line 389
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 389
c_rt_lib0clear(&___nl__4);
#line 389
c_rt_lib0clear(&___nl__5);
#line 390
goto label_1;
#line 390
label_13:
#line 391
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 391
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 391
c_rt_lib0clear(&___nl__5);
#line 393
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__1));
#line 393
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 393
if(c_rt_lib0check_true_native(___nl__6)){ goto label_19;}
#line 394
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 394
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___2));
#line 394
c_rt_lib0clear(&___nl__8);
#line 394
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 394
c_rt_lib0clear(&___nl__7);
#line 395
goto label_18;
#line 395
label_19:
#line 396
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 396
c_rt_lib0move(&___nl__7, translator_priv0dest_val(___nl__8, ___nl__1, ___ref___2));
#line 396
c_rt_lib0clear(&___nl__8);
#line 396
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 396
c_rt_lib0clear(&___nl__7);
#line 397
goto label_18;
#line 397
label_18:
#line 397
c_rt_lib0clear(&___nl__6);
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 398
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__1, ___nl__4, ___nl__5, ___nl__6, ___ref___2));
#line 398
c_rt_lib0clear(&___nl__6);
#line 398
c_rt_lib0clear(&___nl__4);
#line 398
c_rt_lib0clear(&___nl__5);
#line 399
goto label_1;
#line 399
label_1:
#line 399
c_rt_lib0clear(&___nl__3);
#line 399
c_rt_lib0clear(&___nl__0);
#line 399
c_rt_lib0clear(&___nl__1);
#line 399
return NULL;
}

ImmT translator_priv0print_cmd_array(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 403
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 404
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 404
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 404
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__0));
#line 404
label_3:
#line 404
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 404
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 404
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 405
c_rt_lib0delete(translator_priv0print_cmd(___nl__3, ___ref___1));
#line 406
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 406
goto label_3;
#line 406
label_1:
#line 406
c_rt_lib0clear(&___nl__3);
#line 406
c_rt_lib0clear(&___nl__4);
#line 406
c_rt_lib0clear(&___nl__5);
#line 406
c_rt_lib0clear(&___nl__6);
#line 406
c_rt_lib0clear(&___nl__7);
#line 407
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 407
c_rt_lib0clear(&___nl__2);
#line 407
c_rt_lib0clear(&___nl__0);
#line 407
return NULL;
}

ImmT translator_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 411
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(769)));
#line 411
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 416
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(770)));
#line 416
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 417
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(771)));
#line 417
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 417
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 417
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 417
nl_die_arg(___nl__3);
#line 411
label_2:
#line 411
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(769)));
#line 412
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 412
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 412
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 412
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(76), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(641), ___nl__8));
#line 412
c_rt_lib0clear(&___nl__6);
#line 412
c_rt_lib0clear(&___nl__7);
#line 412
c_rt_lib0clear(&___nl__8);
#line 412
c_rt_lib0delete(translator_priv0print_var_decl(___nl__5, ___ref___2));
#line 412
c_rt_lib0clear(&___nl__5);
#line 412
c_rt_lib0clear(&___nl__4);
#line 416
goto label_1;
#line 416
label_3:
#line 416
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(770)));
#line 416
c_rt_lib0clear(&___nl__4);
#line 417
goto label_1;
#line 417
label_4:
#line 417
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(771)));
#line 417
c_rt_lib0clear(&___nl__4);
#line 418
goto label_1;
#line 418
label_1:
#line 418
c_rt_lib0clear(&___nl__3);
#line 420
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 421
c_rt_lib0move(&___nl__4, translator_priv0new_register(___ref___2));
#line 424
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(769)));
#line 424
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 429
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(770)));
#line 429
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 431
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(771)));
#line 431
if(c_rt_lib0check_true_native(___nl__6)){ goto label_8;}
#line 431
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 431
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__0));
#line 431
nl_die_arg(___nl__6);
#line 424
label_6:
#line 424
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(769)));
#line 425
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(641)));
#line 425
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(641)));
#line 425
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 427
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(37)));
#line 427
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 427
c_rt_lib0move(&___nl__9,___get_global_const(74));
#line 427
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 427
nl_die_arg(___nl__9);
#line 425
label_10:
#line 425
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(641)));
#line 426
c_rt_lib0move(&___nl__11, translator_priv0calc_val(___nl__10, ___ref___2));
#line 426
c_rt_lib0copy(&___nl__5, ___nl__11);
#line 426
c_rt_lib0clear(&___nl__11);
#line 426
c_rt_lib0clear(&___nl__10);
#line 427
goto label_9;
#line 427
label_11:
#line 428
goto label_9;
#line 428
label_9:
#line 428
c_rt_lib0clear(&___nl__8);
#line 428
c_rt_lib0clear(&___nl__9);
#line 428
c_rt_lib0clear(&___nl__7);
#line 429
goto label_5;
#line 429
label_7:
#line 429
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(770)));
#line 430
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(236)));
#line 430
c_rt_lib0move(&___nl__8, translator_priv0calc_val(___nl__9, ___ref___2));
#line 430
c_rt_lib0clear(&___nl__9);
#line 430
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 430
c_rt_lib0clear(&___nl__8);
#line 430
c_rt_lib0clear(&___nl__7);
#line 431
goto label_5;
#line 431
label_8:
#line 431
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(771)));
#line 432
c_rt_lib0move(&___nl__8, translator_priv0calc_val(___nl__7, ___ref___2));
#line 432
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 432
c_rt_lib0clear(&___nl__8);
#line 432
c_rt_lib0clear(&___nl__7);
#line 433
goto label_5;
#line 433
label_5:
#line 433
c_rt_lib0clear(&___nl__6);
#line 435
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___2));
#line 437
c_rt_lib0move(&___nl__8,___get_global_const(44));
#line 437
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__4, ___get_global_const(39), ___nl__5, ___get_global_const(72), ___nl__8));
#line 437
c_rt_lib0clear(&___nl__8);
#line 437
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__7));
#line 437
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__7));
#line 437
c_rt_lib0clear(&___nl__7);
#line 444
c_rt_lib0delete(translator_priv0print_if_goto(___nl__6, ___nl__4, ___ref___2));
#line 446
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 446
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 446
if(c_rt_lib0check_true_native(___nl__7)){ goto label_13;}
#line 447
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__5));
#line 447
c_rt_lib0delete(translator_priv0print_safe_return(___nl__8, ___ref___2));
#line 447
c_rt_lib0clear(&___nl__8);
#line 448
goto label_12;
#line 448
label_13:
#line 449
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 449
c_rt_lib0move(&___nl__10,___get_global_const(78));
#line 449
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__5, ___get_global_const(39), ___nl__9, ___get_global_const(76), ___nl__10));
#line 449
c_rt_lib0clear(&___nl__9);
#line 449
c_rt_lib0clear(&___nl__10);
#line 449
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(228), ___nl__8));
#line 449
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 449
c_rt_lib0clear(&___nl__8);
#line 456
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__5));
#line 456
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 456
c_rt_lib0clear(&___nl__8);
#line 457
goto label_12;
#line 457
label_12:
#line 457
c_rt_lib0clear(&___nl__7);
#line 458
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___2));
#line 459
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(769)));
#line 459
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 466
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(770)));
#line 466
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 476
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(771)));
#line 476
if(c_rt_lib0check_true_native(___nl__7)){ goto label_17;}
#line 476
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 476
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__0));
#line 476
nl_die_arg(___nl__7);
#line 459
label_15:
#line 459
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(769)));
#line 460
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(76)));
#line 460
c_rt_lib0move(&___nl__10, translator_priv0get_var_register(___nl__11, ___ref___2));
#line 460
c_rt_lib0clear(&___nl__11);
#line 460
c_rt_lib0move(&___nl__11,___get_global_const(44));
#line 460
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__10, ___get_global_const(39), ___nl__5, ___get_global_const(72), ___nl__11));
#line 460
c_rt_lib0clear(&___nl__10);
#line 460
c_rt_lib0clear(&___nl__11);
#line 460
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__9));
#line 460
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__9));
#line 460
c_rt_lib0clear(&___nl__9);
#line 460
c_rt_lib0clear(&___nl__8);
#line 466
goto label_14;
#line 466
label_16:
#line 466
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(770)));
#line 467
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(235)));
#line 467
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 467
c_rt_lib0move(&___nl__9, translator_priv0get_value_of_lvalue(___nl__10, ___nl__11, ___ref___2));
#line 467
c_rt_lib0clear(&___nl__11);
#line 467
c_rt_lib0clear(&___nl__10);
#line 468
c_rt_lib0move(&___nl__11, array0len(___nl__9));
#line 468
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 468
c_rt_lib0move(&___nl__11, c_rt_lib0sub_mod(___nl__11, ___nl__12));
#line 468
c_rt_lib0clear(&___nl__12);
#line 468
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__9, ___nl__11));
#line 468
c_rt_lib0clear(&___nl__11);
#line 468
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(641)));
#line 469
c_rt_lib0move(&___nl__12,___get_global_const(44));
#line 469
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__10, ___get_global_const(39), ___nl__5, ___get_global_const(72), ___nl__12));
#line 469
c_rt_lib0clear(&___nl__12);
#line 469
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__11));
#line 469
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__11));
#line 469
c_rt_lib0clear(&___nl__11);
#line 475
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 475
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__9, ___nl__11, ___ref___2));
#line 475
c_rt_lib0clear(&___nl__11);
#line 475
c_rt_lib0clear(&___nl__9);
#line 475
c_rt_lib0clear(&___nl__10);
#line 475
c_rt_lib0clear(&___nl__8);
#line 476
goto label_14;
#line 476
label_17:
#line 476
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(771)));
#line 476
c_rt_lib0clear(&___nl__8);
#line 477
goto label_14;
#line 477
label_14:
#line 477
c_rt_lib0clear(&___nl__7);
#line 478
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 478
c_rt_lib0clear(&___nl__3);
#line 478
c_rt_lib0clear(&___nl__4);
#line 478
c_rt_lib0clear(&___nl__5);
#line 478
c_rt_lib0clear(&___nl__6);
#line 478
c_rt_lib0clear(&___nl__0);
#line 478
c_rt_lib0clear(&___nl__1);
#line 478
return NULL;
}

ImmT translator_priv0start_new_instruction(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 482
c_rt_lib0move(&___nl__2,___get_global_const(213));
#line 482
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 482
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 482
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(395), ___nl__3);
#line 482
c_rt_lib0move(&___nl__4,___get_global_const(213));
#line 482
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__4, ___nl__2));
#line 482
c_rt_lib0clear(&___nl__4);
#line 482
c_rt_lib0clear(&___nl__2);
#line 482
c_rt_lib0clear(&___nl__3);
#line 483
c_rt_lib0move(&___nl__2,___get_global_const(213));
#line 483
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 483
c_rt_lib0move(&___nl__3,___get_global_const(634));
#line 483
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(___nl__2, ___nl__3));
#line 483
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 483
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 483
c_rt_lib0move(&___nl__5,___get_global_const(634));
#line 483
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__2, ___nl__5, ___nl__3));
#line 483
c_rt_lib0move(&___nl__5,___get_global_const(213));
#line 483
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__2));
#line 483
c_rt_lib0clear(&___nl__5);
#line 483
c_rt_lib0clear(&___nl__2);
#line 483
c_rt_lib0clear(&___nl__3);
#line 483
c_rt_lib0clear(&___nl__4);
#line 483
c_rt_lib0clear(&___nl__0);
#line 483
return NULL;
}

ImmT translator_priv0print_cmd(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 487
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(213)));
#line 487
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__2, ___ref___1));
#line 487
c_rt_lib0clear(&___nl__2);
#line 488
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 488
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(740)));
#line 488
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 490
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(742)));
#line 490
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 492
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(117)));
#line 492
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 494
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(744)));
#line 494
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 496
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(743)));
#line 496
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 498
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(745)));
#line 498
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 500
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(741)));
#line 500
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 502
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(754)));
#line 502
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 503
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(641)));
#line 503
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 505
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(751)));
#line 505
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 507
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(210)));
#line 507
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 509
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(750)));
#line 509
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 511
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(753)));
#line 511
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 513
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(78)));
#line 513
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 515
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(748)));
#line 515
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 517
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(749)));
#line 517
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 519
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(229)));
#line 519
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 521
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(752)));
#line 521
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 523
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(746)));
#line 523
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 525
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(747)));
#line 525
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 525
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 525
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 525
nl_die_arg(___nl__3);
#line 488
label_2:
#line 488
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(740)));
#line 489
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 489
c_rt_lib0delete(translator_priv0print_if(___nl__4, ___nl__5, ___ref___1));
#line 489
c_rt_lib0clear(&___nl__5);
#line 489
c_rt_lib0clear(&___nl__4);
#line 490
goto label_1;
#line 490
label_3:
#line 490
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(742)));
#line 491
c_rt_lib0delete(translator_priv0print_fora(___nl__4, ___ref___1));
#line 491
c_rt_lib0clear(&___nl__4);
#line 492
goto label_1;
#line 492
label_4:
#line 492
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(117)));
#line 493
c_rt_lib0delete(translator_priv0print_loop(___nl__4, ___ref___1));
#line 493
c_rt_lib0clear(&___nl__4);
#line 494
goto label_1;
#line 494
label_5:
#line 494
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(744)));
#line 495
c_rt_lib0delete(translator_priv0print_rep(___nl__4, ___ref___1));
#line 495
c_rt_lib0clear(&___nl__4);
#line 496
goto label_1;
#line 496
label_6:
#line 496
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(743)));
#line 497
c_rt_lib0delete(translator_priv0print_forh(___nl__4, ___ref___1));
#line 497
c_rt_lib0clear(&___nl__4);
#line 498
goto label_1;
#line 498
label_7:
#line 498
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(745)));
#line 499
c_rt_lib0delete(translator_priv0print_while(___nl__4, ___ref___1));
#line 499
c_rt_lib0clear(&___nl__4);
#line 500
goto label_1;
#line 500
label_8:
#line 500
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(741)));
#line 501
c_rt_lib0delete(translator_priv0print_for(___nl__4, ___ref___1));
#line 501
c_rt_lib0clear(&___nl__4);
#line 502
goto label_1;
#line 502
label_9:
#line 503
goto label_1;
#line 503
label_10:
#line 503
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(641)));
#line 504
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 504
c_rt_lib0delete(translator_priv0print_val(___nl__4, ___nl__5, ___ref___1));
#line 504
c_rt_lib0clear(&___nl__5);
#line 504
c_rt_lib0clear(&___nl__4);
#line 505
goto label_1;
#line 505
label_11:
#line 505
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(751)));
#line 506
c_rt_lib0delete(translator_priv0print_cmd_array(___nl__4, ___ref___1));
#line 506
c_rt_lib0clear(&___nl__4);
#line 507
goto label_1;
#line 507
label_12:
#line 507
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(210)));
#line 508
c_rt_lib0delete(translator_priv0print_return(___nl__4, ___ref___1));
#line 508
c_rt_lib0clear(&___nl__4);
#line 509
goto label_1;
#line 509
label_13:
#line 509
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(750)));
#line 510
c_rt_lib0delete(translator_priv0print_match(___nl__4, ___ref___1));
#line 510
c_rt_lib0clear(&___nl__4);
#line 511
goto label_1;
#line 511
label_14:
#line 511
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(753)));
#line 512
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 512
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__4, ___nl__5, ___ref___1));
#line 512
c_rt_lib0clear(&___nl__5);
#line 512
c_rt_lib0clear(&___nl__4);
#line 513
goto label_1;
#line 513
label_15:
#line 513
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(78)));
#line 514
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 514
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__4, ___nl__5, ___ref___1));
#line 514
c_rt_lib0clear(&___nl__5);
#line 514
c_rt_lib0clear(&___nl__4);
#line 515
goto label_1;
#line 515
label_16:
#line 516
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1030)));
#line 516
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(748)));
#line 516
c_rt_lib0delete(translator_priv0print_loop_break(___ref___1, ___nl__4));
#line 516
c_rt_lib0clear(&___nl__4);
#line 517
goto label_1;
#line 517
label_17:
#line 518
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1030)));
#line 518
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(749)));
#line 518
c_rt_lib0delete(translator_priv0print_loop_break(___ref___1, ___nl__4));
#line 518
c_rt_lib0clear(&___nl__4);
#line 519
goto label_1;
#line 519
label_18:
#line 519
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(229)));
#line 520
c_rt_lib0delete(translator_priv0print_die(___nl__4, ___ref___1));
#line 520
c_rt_lib0clear(&___nl__4);
#line 521
goto label_1;
#line 521
label_19:
#line 521
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(752)));
#line 522
c_rt_lib0delete(translator_priv0print_var_decl(___nl__4, ___ref___1));
#line 522
c_rt_lib0clear(&___nl__4);
#line 523
goto label_1;
#line 523
label_20:
#line 523
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(746)));
#line 524
c_rt_lib0delete(translator_priv0print_if_mod(___nl__4, ___ref___1));
#line 524
c_rt_lib0clear(&___nl__4);
#line 525
goto label_1;
#line 525
label_21:
#line 525
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(747)));
#line 526
c_rt_lib0delete(translator_priv0print_unless_mod(___nl__4, ___ref___1));
#line 526
c_rt_lib0clear(&___nl__4);
#line 527
goto label_1;
#line 527
label_1:
#line 527
c_rt_lib0clear(&___nl__2);
#line 527
c_rt_lib0clear(&___nl__3);
#line 527
c_rt_lib0clear(&___nl__0);
#line 527
return NULL;
}

ImmT translator_priv0print_loop_break(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 530
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1029)));
#line 530
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1025)));
#line 530
label_2:
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1029)));
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1025)));
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 530
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(190), ___get_global_const(852)));
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 531
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__2));
#line 531
c_rt_lib0clear(&___nl__5);
#line 531
c_rt_lib0delete(translator_priv0undef_reg(___nl__4, ___ref___0));
#line 531
c_rt_lib0clear(&___nl__4);
#line 531
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 531
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 531
c_rt_lib0clear(&___nl__4);
#line 532
goto label_2;
#line 532
label_1:
#line 532
c_rt_lib0clear(&___nl__2);
#line 532
c_rt_lib0clear(&___nl__3);
#line 533
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1028)));
#line 533
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__2));
#line 533
c_rt_lib0delete(translator_priv0print(___ref___0, ___nl__2));
#line 533
c_rt_lib0clear(&___nl__2);
#line 533
c_rt_lib0clear(&___nl__1);
#line 533
return NULL;
}

ImmT translator_priv0print_if_mod(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 537
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(755)));
#line 537
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 537
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 537
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 537
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(213)));
#line 537
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 537
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(213), ___nl__7, ___get_global_const(209), ___nl__8));
#line 537
c_rt_lib0clear(&___nl__7);
#line 537
c_rt_lib0clear(&___nl__8);
#line 537
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(755), ___nl__3, ___get_global_const(740), ___nl__4, ___get_global_const(756), ___nl__5, ___get_global_const(757), ___nl__6));
#line 537
c_rt_lib0clear(&___nl__3);
#line 537
c_rt_lib0clear(&___nl__4);
#line 537
c_rt_lib0clear(&___nl__5);
#line 537
c_rt_lib0clear(&___nl__6);
#line 538
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 538
c_rt_lib0delete(translator_priv0print_if(___nl__2, ___nl__3, ___ref___1));
#line 538
c_rt_lib0clear(&___nl__3);
#line 538
c_rt_lib0clear(&___nl__2);
#line 538
c_rt_lib0clear(&___nl__0);
#line 538
return NULL;
}

ImmT translator_priv0print_unless_mod(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 542
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(755)));
#line 542
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(777), ___nl__4));
#line 542
c_rt_lib0move(&___nl__5,___get_global_const(243));
#line 542
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(234), ___nl__4, ___get_global_const(401), ___nl__5));
#line 542
c_rt_lib0clear(&___nl__4);
#line 542
c_rt_lib0clear(&___nl__5);
#line 542
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(780), ___nl__3));
#line 542
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 542
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 542
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 542
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(213)));
#line 542
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 542
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(213), ___nl__7, ___get_global_const(209), ___nl__8));
#line 542
c_rt_lib0clear(&___nl__7);
#line 542
c_rt_lib0clear(&___nl__8);
#line 542
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(755), ___nl__3, ___get_global_const(740), ___nl__4, ___get_global_const(756), ___nl__5, ___get_global_const(757), ___nl__6));
#line 542
c_rt_lib0clear(&___nl__3);
#line 542
c_rt_lib0clear(&___nl__4);
#line 542
c_rt_lib0clear(&___nl__5);
#line 542
c_rt_lib0clear(&___nl__6);
#line 548
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 548
c_rt_lib0delete(translator_priv0print_if(___nl__2, ___nl__3, ___ref___1));
#line 548
c_rt_lib0clear(&___nl__3);
#line 548
c_rt_lib0clear(&___nl__2);
#line 548
c_rt_lib0clear(&___nl__0);
#line 548
return NULL;
}

ImmT translator_priv0print_if(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 552
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 554
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 555
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___2));
#line 557
c_rt_lib0move(&___nl__6, translator_priv0new_register(___ref___2));
#line 558
c_rt_lib0move(&___nl__7, translator_priv0save_registers(___ref___2));
#line 560
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(755)));
#line 560
c_rt_lib0delete(translator_priv0print_val(___nl__8, ___nl__6, ___ref___2));
#line 560
c_rt_lib0clear(&___nl__8);
#line 561
c_rt_lib0move(&___nl__9,___get_global_const(243));
#line 561
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__6, ___get_global_const(39), ___nl__6, ___get_global_const(401), ___nl__9));
#line 561
c_rt_lib0clear(&___nl__9);
#line 561
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__8));
#line 561
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 561
c_rt_lib0clear(&___nl__8);
#line 568
c_rt_lib0delete(translator_priv0restore_registers(___nl__7, ___ref___2));
#line 569
c_rt_lib0delete(translator_priv0print_if_goto(___nl__5, ___nl__6, ___ref___2));
#line 570
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(740)));
#line 570
c_rt_lib0delete(translator_priv0print_cmd(___nl__8, ___ref___2));
#line 570
c_rt_lib0clear(&___nl__8);
#line 571
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 571
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 571
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 571
if(c_rt_lib0check_true_native(___nl__8)){ goto label_2;}
#line 571
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(740)));
#line 571
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(213)));
#line 571
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__10));
#line 571
c_rt_lib0clear(&___nl__10);
#line 571
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___2));
#line 571
c_rt_lib0clear(&___nl__9);
#line 571
goto label_2;
#line 571
label_2:
#line 571
c_rt_lib0clear(&___nl__8);
#line 572
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__4));
#line 572
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 572
c_rt_lib0clear(&___nl__8);
#line 573
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___2));
#line 575
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(756)));
#line 575
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 575
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 575
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 575
label_5:
#line 575
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 575
if(c_rt_lib0check_true_native(___nl__13)){ goto label_3;}
#line 575
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 576
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(213)));
#line 576
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___2));
#line 576
c_rt_lib0clear(&___nl__14);
#line 577
c_rt_lib0move(&___nl__14, translator_priv0get_sim_label(___ref___2));
#line 577
c_rt_lib0copy(&___nl__5, ___nl__14);
#line 577
c_rt_lib0clear(&___nl__14);
#line 579
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(755)));
#line 579
c_rt_lib0delete(translator_priv0print_val(___nl__14, ___nl__6, ___ref___2));
#line 579
c_rt_lib0clear(&___nl__14);
#line 580
c_rt_lib0move(&___nl__15,___get_global_const(243));
#line 580
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__6, ___get_global_const(39), ___nl__6, ___get_global_const(401), ___nl__15));
#line 580
c_rt_lib0clear(&___nl__15);
#line 580
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__14));
#line 580
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__14));
#line 580
c_rt_lib0clear(&___nl__14);
#line 587
c_rt_lib0delete(translator_priv0restore_registers(___nl__7, ___ref___2));
#line 588
c_rt_lib0delete(translator_priv0print_if_goto(___nl__5, ___nl__6, ___ref___2));
#line 589
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(209)));
#line 589
c_rt_lib0delete(translator_priv0print_cmd(___nl__14, ___ref___2));
#line 589
c_rt_lib0clear(&___nl__14);
#line 590
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(209)));
#line 590
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(213)));
#line 590
c_rt_lib0move(&___nl__14, translator0last_debug_char(___nl__15));
#line 590
c_rt_lib0clear(&___nl__15);
#line 590
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___2));
#line 590
c_rt_lib0clear(&___nl__14);
#line 591
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__4));
#line 591
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__14));
#line 591
c_rt_lib0clear(&___nl__14);
#line 592
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___2));
#line 593
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 593
goto label_5;
#line 593
label_3:
#line 593
c_rt_lib0clear(&___nl__8);
#line 593
c_rt_lib0clear(&___nl__9);
#line 593
c_rt_lib0clear(&___nl__10);
#line 593
c_rt_lib0clear(&___nl__11);
#line 593
c_rt_lib0clear(&___nl__12);
#line 593
c_rt_lib0clear(&___nl__13);
#line 594
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(757)));
#line 594
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(209)));
#line 594
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(754)));
#line 594
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 594
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 594
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 595
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(757)));
#line 595
c_rt_lib0delete(translator_priv0print_cmd(___nl__9, ___ref___2));
#line 595
c_rt_lib0clear(&___nl__9);
#line 596
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(757)));
#line 596
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(213)));
#line 596
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__10));
#line 596
c_rt_lib0clear(&___nl__10);
#line 596
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___2));
#line 596
c_rt_lib0clear(&___nl__9);
#line 597
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__4));
#line 597
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__9));
#line 597
c_rt_lib0clear(&___nl__9);
#line 598
goto label_7;
#line 598
label_7:
#line 598
c_rt_lib0clear(&___nl__8);
#line 600
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 601
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 601
c_rt_lib0clear(&___nl__3);
#line 601
c_rt_lib0clear(&___nl__4);
#line 601
c_rt_lib0clear(&___nl__5);
#line 601
c_rt_lib0clear(&___nl__6);
#line 601
c_rt_lib0clear(&___nl__7);
#line 601
c_rt_lib0clear(&___nl__0);
#line 601
c_rt_lib0clear(&___nl__1);
#line 601
return NULL;
}

ImmT translator_priv0print_call_base(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 607
c_rt_lib0move(&___nl__5,___get_global_const(302));
#line 607
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(4, ___get_global_const(233), ___nl__0, ___get_global_const(257), ___nl__5, ___get_global_const(385), ___nl__1, ___get_global_const(73), ___nl__2));
#line 607
c_rt_lib0clear(&___nl__5);
#line 607
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(217), ___nl__4));
#line 607
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 607
c_rt_lib0clear(&___nl__4);
#line 607
c_rt_lib0clear(&___nl__0);
#line 607
c_rt_lib0clear(&___nl__1);
#line 607
c_rt_lib0clear(&___nl__2);
#line 607
return NULL;
}

ImmT translator_priv0save_loop_break(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 617
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1030)));
#line 618
c_rt_lib0move(&___nl__4, translator_priv0save_registers(___ref___0));
#line 619
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1028), ___nl__1, ___get_global_const(1029), ___nl__4));
#line 619
c_rt_lib0move(&___nl__6,___get_global_const(1030));
#line 619
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 619
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 619
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(748), ___nl__7);
#line 619
c_rt_lib0move(&___nl__8,___get_global_const(1030));
#line 619
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__6));
#line 619
c_rt_lib0clear(&___nl__8);
#line 619
c_rt_lib0clear(&___nl__5);
#line 619
c_rt_lib0clear(&___nl__6);
#line 619
c_rt_lib0clear(&___nl__7);
#line 620
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1028), ___nl__2, ___get_global_const(1029), ___nl__4));
#line 620
c_rt_lib0move(&___nl__6,___get_global_const(1030));
#line 620
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 620
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 620
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(749), ___nl__7);
#line 620
c_rt_lib0move(&___nl__8,___get_global_const(1030));
#line 620
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__6));
#line 620
c_rt_lib0clear(&___nl__8);
#line 620
c_rt_lib0clear(&___nl__5);
#line 620
c_rt_lib0clear(&___nl__6);
#line 620
c_rt_lib0clear(&___nl__7);
#line 621
c_rt_lib0clear(&___nl__1);
#line 621
c_rt_lib0clear(&___nl__2);
#line 621
c_rt_lib0clear(&___nl__4);
#line 621
return ___nl__3;
#line 621
c_rt_lib0clear(&___nl__3);
#line 621
c_rt_lib0clear(&___nl__4);
#line 621
c_rt_lib0clear(&___nl__1);
#line 621
c_rt_lib0clear(&___nl__2);
#line 621
return NULL;
}

ImmT translator_priv0print_fora(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 624
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(213)));
#line 624
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(395)));
#line 625
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___1));
#line 627
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(3)));
#line 627
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___1));
#line 627
c_rt_lib0clear(&___nl__5);
#line 628
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(759)));
#line 628
c_rt_lib0move(&___nl__5, translator_priv0print_var_decl(___nl__6, ___ref___1));
#line 628
c_rt_lib0clear(&___nl__6);
#line 630
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 631
c_rt_lib0move(&___nl__7, translator_priv0get_sim_label(___ref___1));
#line 632
c_rt_lib0move(&___nl__8, translator_priv0get_sim_label(___ref___1));
#line 634
c_rt_lib0move(&___nl__9, translator_priv0new_register(___ref___1));
#line 635
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 635
c_rt_lib0delete(translator_priv0load_const(___nl__10, ___nl__9, ___ref___1));
#line 635
c_rt_lib0clear(&___nl__10);
#line 636
c_rt_lib0move(&___nl__10, translator_priv0new_register(___ref___1));
#line 637
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 637
c_rt_lib0delete(translator_priv0load_const(___nl__11, ___nl__10, ___ref___1));
#line 637
c_rt_lib0clear(&___nl__11);
#line 639
c_rt_lib0move(&___nl__11, translator_priv0new_register(___ref___1));
#line 640
c_rt_lib0move(&___nl__12,___get_global_const(1037));
#line 640
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__4));
#line 640
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(1, ___nl__14));
#line 640
c_rt_lib0clear(&___nl__14);
#line 640
c_rt_lib0delete(translator_priv0print_call_base(___nl__11, ___nl__12, ___nl__13, ___ref___1));
#line 640
c_rt_lib0clear(&___nl__13);
#line 640
c_rt_lib0clear(&___nl__12);
#line 642
c_rt_lib0move(&___nl__12, translator_priv0new_register(___ref___1));
#line 644
c_rt_lib0delete(translator_priv0print_sim_label(___nl__8, ___ref___1));
#line 645
c_rt_lib0move(&___nl__13,___get_global_const(268));
#line 645
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__12, ___nl__9, ___nl__11, ___nl__13, ___ref___1));
#line 645
c_rt_lib0clear(&___nl__13);
#line 647
c_rt_lib0delete(translator_priv0print_if_goto(___nl__6, ___nl__12, ___ref___1));
#line 648
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__5, ___get_global_const(39), ___nl__4, ___get_global_const(237), ___nl__9));
#line 648
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__13));
#line 648
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__13));
#line 648
c_rt_lib0clear(&___nl__13);
#line 655
c_rt_lib0move(&___nl__13, translator_priv0save_loop_break(___ref___1, ___nl__6, ___nl__7));
#line 656
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 656
c_rt_lib0delete(translator_priv0print_cmd(___nl__14, ___ref___1));
#line 656
c_rt_lib0clear(&___nl__14);
#line 658
c_rt_lib0delete(translator_priv0print_sim_label(___nl__7, ___ref___1));
#line 659
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(837)));
#line 659
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 659
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 659
if(c_rt_lib0check_true_native(___nl__14)){ goto label_2;}
#line 659
c_rt_lib0move(&___nl__15, translator0last_debug_char(___nl__2));
#line 659
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__15, ___ref___1));
#line 659
c_rt_lib0clear(&___nl__15);
#line 659
goto label_2;
#line 659
label_2:
#line 659
c_rt_lib0clear(&___nl__14);
#line 660
c_rt_lib0move(&___nl__15,___get_global_const(247));
#line 660
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(4, ___get_global_const(233), ___nl__9, ___get_global_const(235), ___nl__9, ___get_global_const(236), ___nl__10, ___get_global_const(401), ___nl__15));
#line 660
c_rt_lib0clear(&___nl__15);
#line 660
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__14));
#line 660
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__14));
#line 660
c_rt_lib0clear(&___nl__14);
#line 667
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__8));
#line 667
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__14));
#line 667
c_rt_lib0clear(&___nl__14);
#line 668
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 670
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 670
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1030), ___nl__14);
#line 670
c_rt_lib0clear(&___nl__14);
#line 671
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___1));
#line 671
c_rt_lib0clear(&___nl__2);
#line 671
c_rt_lib0clear(&___nl__3);
#line 671
c_rt_lib0clear(&___nl__4);
#line 671
c_rt_lib0clear(&___nl__5);
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
#line 671
c_rt_lib0clear(&___nl__12);
#line 671
c_rt_lib0clear(&___nl__13);
#line 671
c_rt_lib0clear(&___nl__0);
#line 671
return NULL;
}

ImmT translator_priv0print_loop(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 675
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 677
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 678
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 680
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 682
c_rt_lib0move(&___nl__5, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 683
c_rt_lib0delete(translator_priv0print_cmd(___nl__0, ___ref___1));
#line 684
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(213)));
#line 684
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__6, ___ref___1));
#line 684
c_rt_lib0clear(&___nl__6);
#line 685
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__4));
#line 685
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__6));
#line 685
c_rt_lib0clear(&___nl__6);
#line 687
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 688
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 688
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1030), ___nl__6);
#line 688
c_rt_lib0clear(&___nl__6);
#line 689
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 689
c_rt_lib0clear(&___nl__2);
#line 689
c_rt_lib0clear(&___nl__3);
#line 689
c_rt_lib0clear(&___nl__4);
#line 689
c_rt_lib0clear(&___nl__5);
#line 689
c_rt_lib0clear(&___nl__0);
#line 689
return NULL;
}

ImmT translator_priv0print_rep(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 693
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 695
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 696
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 697
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 699
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(760)));
#line 699
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___1));
#line 699
c_rt_lib0clear(&___nl__7);
#line 701
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(759)));
#line 701
c_rt_lib0move(&___nl__7, translator_priv0print_var_decl(___nl__8, ___ref___1));
#line 701
c_rt_lib0clear(&___nl__8);
#line 702
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 702
c_rt_lib0delete(translator_priv0load_const(___nl__8, ___nl__7, ___ref___1));
#line 702
c_rt_lib0clear(&___nl__8);
#line 703
c_rt_lib0move(&___nl__8, translator_priv0new_register(___ref___1));
#line 704
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 704
c_rt_lib0delete(translator_priv0load_const(___nl__9, ___nl__8, ___ref___1));
#line 704
c_rt_lib0clear(&___nl__9);
#line 706
c_rt_lib0move(&___nl__9, translator_priv0new_register(___ref___1));
#line 708
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 709
c_rt_lib0move(&___nl__10,___get_global_const(268));
#line 709
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__9, ___nl__7, ___nl__6, ___nl__10, ___ref___1));
#line 709
c_rt_lib0clear(&___nl__10);
#line 710
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__9, ___ref___1));
#line 712
c_rt_lib0move(&___nl__10, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 713
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 713
c_rt_lib0delete(translator_priv0print_cmd(___nl__11, ___ref___1));
#line 713
c_rt_lib0clear(&___nl__11);
#line 715
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 716
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(837)));
#line 716
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 716
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 716
if(c_rt_lib0check_true_native(___nl__11)){ goto label_2;}
#line 716
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 716
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(213)));
#line 716
c_rt_lib0move(&___nl__12, translator0last_debug_char(___nl__13));
#line 716
c_rt_lib0clear(&___nl__13);
#line 716
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__12, ___ref___1));
#line 716
c_rt_lib0clear(&___nl__12);
#line 716
goto label_2;
#line 716
label_2:
#line 716
c_rt_lib0clear(&___nl__11);
#line 717
c_rt_lib0move(&___nl__12,___get_global_const(247));
#line 717
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(4, ___get_global_const(233), ___nl__7, ___get_global_const(235), ___nl__7, ___get_global_const(236), ___nl__8, ___get_global_const(401), ___nl__12));
#line 717
c_rt_lib0clear(&___nl__12);
#line 717
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__11));
#line 717
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__11));
#line 717
c_rt_lib0clear(&___nl__11);
#line 724
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__5));
#line 724
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__11));
#line 724
c_rt_lib0clear(&___nl__11);
#line 725
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 727
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 727
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1030), ___nl__11);
#line 727
c_rt_lib0clear(&___nl__11);
#line 728
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 728
c_rt_lib0clear(&___nl__2);
#line 728
c_rt_lib0clear(&___nl__3);
#line 728
c_rt_lib0clear(&___nl__4);
#line 728
c_rt_lib0clear(&___nl__5);
#line 728
c_rt_lib0clear(&___nl__6);
#line 728
c_rt_lib0clear(&___nl__7);
#line 728
c_rt_lib0clear(&___nl__8);
#line 728
c_rt_lib0clear(&___nl__9);
#line 728
c_rt_lib0clear(&___nl__10);
#line 728
c_rt_lib0clear(&___nl__0);
#line 728
return NULL;
}

ImmT translator_priv0print_forh(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 732
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(213)));
#line 732
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(395)));
#line 733
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___1));
#line 735
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 736
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 737
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 739
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(278)));
#line 739
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___1));
#line 739
c_rt_lib0clear(&___nl__8);
#line 741
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(279)));
#line 741
c_rt_lib0move(&___nl__8, translator_priv0print_var_decl(___nl__9, ___ref___1));
#line 741
c_rt_lib0clear(&___nl__9);
#line 742
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 742
c_rt_lib0move(&___nl__9, translator_priv0print_var_decl(___nl__10, ___ref___1));
#line 742
c_rt_lib0clear(&___nl__10);
#line 744
c_rt_lib0move(&___nl__10, translator_priv0new_register(___ref___1));
#line 745
c_rt_lib0move(&___nl__11,___get_global_const(920));
#line 745
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__7));
#line 745
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 745
c_rt_lib0clear(&___nl__13);
#line 745
c_rt_lib0delete(translator_priv0print_call_base(___nl__10, ___nl__11, ___nl__12, ___ref___1));
#line 745
c_rt_lib0clear(&___nl__12);
#line 745
c_rt_lib0clear(&___nl__11);
#line 747
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 748
c_rt_lib0move(&___nl__11,___get_global_const(921));
#line 748
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__10));
#line 748
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 748
c_rt_lib0clear(&___nl__13);
#line 748
c_rt_lib0delete(translator_priv0print_call_base(___nl__8, ___nl__11, ___nl__12, ___ref___1));
#line 748
c_rt_lib0clear(&___nl__12);
#line 748
c_rt_lib0clear(&___nl__11);
#line 749
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__8, ___ref___1));
#line 751
c_rt_lib0move(&___nl__11,___get_global_const(922));
#line 751
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__10));
#line 751
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 751
c_rt_lib0clear(&___nl__13);
#line 751
c_rt_lib0delete(translator_priv0print_call_base(___nl__8, ___nl__11, ___nl__12, ___ref___1));
#line 751
c_rt_lib0clear(&___nl__12);
#line 751
c_rt_lib0clear(&___nl__11);
#line 752
c_rt_lib0move(&___nl__11,___get_global_const(1038));
#line 752
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__7));
#line 752
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__8));
#line 752
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 752
c_rt_lib0clear(&___nl__13);
#line 752
c_rt_lib0clear(&___nl__14);
#line 752
c_rt_lib0delete(translator_priv0print_call_base(___nl__9, ___nl__11, ___nl__12, ___ref___1));
#line 752
c_rt_lib0clear(&___nl__12);
#line 752
c_rt_lib0clear(&___nl__11);
#line 754
c_rt_lib0move(&___nl__11, translator_priv0save_loop_break(___ref___1, ___nl__4, ___nl__5));
#line 755
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 755
c_rt_lib0delete(translator_priv0print_cmd(___nl__12, ___ref___1));
#line 755
c_rt_lib0clear(&___nl__12);
#line 757
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 758
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(837)));
#line 758
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 758
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 758
if(c_rt_lib0check_true_native(___nl__12)){ goto label_2;}
#line 758
c_rt_lib0move(&___nl__13, translator0last_debug_char(___nl__2));
#line 758
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__13, ___ref___1));
#line 758
c_rt_lib0clear(&___nl__13);
#line 758
goto label_2;
#line 758
label_2:
#line 758
c_rt_lib0clear(&___nl__12);
#line 759
c_rt_lib0move(&___nl__12,___get_global_const(923));
#line 759
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__10));
#line 759
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(1, ___nl__14));
#line 759
c_rt_lib0clear(&___nl__14);
#line 759
c_rt_lib0delete(translator_priv0print_call_base(___nl__10, ___nl__12, ___nl__13, ___ref___1));
#line 759
c_rt_lib0clear(&___nl__13);
#line 759
c_rt_lib0clear(&___nl__12);
#line 760
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__6));
#line 760
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__12));
#line 760
c_rt_lib0clear(&___nl__12);
#line 762
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 764
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 764
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1030), ___nl__12);
#line 764
c_rt_lib0clear(&___nl__12);
#line 765
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___1));
#line 765
c_rt_lib0clear(&___nl__2);
#line 765
c_rt_lib0clear(&___nl__3);
#line 765
c_rt_lib0clear(&___nl__4);
#line 765
c_rt_lib0clear(&___nl__5);
#line 765
c_rt_lib0clear(&___nl__6);
#line 765
c_rt_lib0clear(&___nl__7);
#line 765
c_rt_lib0clear(&___nl__8);
#line 765
c_rt_lib0clear(&___nl__9);
#line 765
c_rt_lib0clear(&___nl__10);
#line 765
c_rt_lib0clear(&___nl__11);
#line 765
c_rt_lib0clear(&___nl__0);
#line 765
return NULL;
}

ImmT translator_priv0print_while(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 769
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 771
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 772
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 774
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(213)));
#line 774
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(395)));
#line 775
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 776
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(755)));
#line 776
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___1));
#line 776
c_rt_lib0clear(&___nl__7);
#line 777
c_rt_lib0move(&___nl__8,___get_global_const(243));
#line 777
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__6, ___get_global_const(39), ___nl__6, ___get_global_const(401), ___nl__8));
#line 777
c_rt_lib0clear(&___nl__8);
#line 777
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__7));
#line 777
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 777
c_rt_lib0clear(&___nl__7);
#line 784
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__6, ___ref___1));
#line 786
c_rt_lib0move(&___nl__7, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 787
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 787
c_rt_lib0delete(translator_priv0print_cmd(___nl__8, ___ref___1));
#line 787
c_rt_lib0clear(&___nl__8);
#line 788
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(837)));
#line 788
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 788
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 788
if(c_rt_lib0check_true_native(___nl__8)){ goto label_2;}
#line 788
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__5));
#line 788
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___1));
#line 788
c_rt_lib0clear(&___nl__9);
#line 788
goto label_2;
#line 788
label_2:
#line 788
c_rt_lib0clear(&___nl__8);
#line 789
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__4));
#line 789
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__8));
#line 789
c_rt_lib0clear(&___nl__8);
#line 790
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 792
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 792
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1030), ___nl__8);
#line 792
c_rt_lib0clear(&___nl__8);
#line 793
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 793
c_rt_lib0clear(&___nl__2);
#line 793
c_rt_lib0clear(&___nl__3);
#line 793
c_rt_lib0clear(&___nl__4);
#line 793
c_rt_lib0clear(&___nl__5);
#line 793
c_rt_lib0clear(&___nl__6);
#line 793
c_rt_lib0clear(&___nl__7);
#line 793
c_rt_lib0clear(&___nl__0);
#line 793
return NULL;
}

ImmT translator_priv0print_for(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 797
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 799
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 800
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 801
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 803
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(758)));
#line 803
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(641)));
#line 803
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 805
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(752)));
#line 805
if(c_rt_lib0check_true_native(___nl__7)){ goto label_3;}
#line 805
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 805
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 805
nl_die_arg(___nl__7);
#line 803
label_2:
#line 803
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(641)));
#line 804
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 804
c_rt_lib0delete(translator_priv0print_val(___nl__8, ___nl__9, ___ref___1));
#line 804
c_rt_lib0clear(&___nl__9);
#line 804
c_rt_lib0clear(&___nl__8);
#line 805
goto label_1;
#line 805
label_3:
#line 805
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(752)));
#line 806
c_rt_lib0delete(translator_priv0print_var_decl(___nl__8, ___ref___1));
#line 806
c_rt_lib0clear(&___nl__8);
#line 807
goto label_1;
#line 807
label_1:
#line 807
c_rt_lib0clear(&___nl__6);
#line 807
c_rt_lib0clear(&___nl__7);
#line 809
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 810
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(755)));
#line 810
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(754)));
#line 810
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 810
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 810
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 811
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(755)));
#line 811
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___1));
#line 811
c_rt_lib0clear(&___nl__8);
#line 812
c_rt_lib0move(&___nl__9,___get_global_const(243));
#line 812
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__7, ___get_global_const(39), ___nl__7, ___get_global_const(401), ___nl__9));
#line 812
c_rt_lib0clear(&___nl__9);
#line 812
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__8));
#line 812
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__8));
#line 812
c_rt_lib0clear(&___nl__8);
#line 819
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__7, ___ref___1));
#line 819
c_rt_lib0clear(&___nl__7);
#line 820
goto label_5;
#line 820
label_5:
#line 820
c_rt_lib0clear(&___nl__6);
#line 821
c_rt_lib0move(&___nl__6, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__5));
#line 822
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 822
c_rt_lib0delete(translator_priv0print_cmd(___nl__7, ___ref___1));
#line 822
c_rt_lib0clear(&___nl__7);
#line 824
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 825
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(759)));
#line 825
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 825
c_rt_lib0delete(translator_priv0print_val(___nl__7, ___nl__8, ___ref___1));
#line 825
c_rt_lib0clear(&___nl__8);
#line 825
c_rt_lib0clear(&___nl__7);
#line 826
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 826
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(213)));
#line 826
c_rt_lib0move(&___nl__7, translator0last_debug_char(___nl__8));
#line 826
c_rt_lib0clear(&___nl__8);
#line 826
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__7, ___ref___1));
#line 826
c_rt_lib0clear(&___nl__7);
#line 827
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__4));
#line 827
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 827
c_rt_lib0clear(&___nl__7);
#line 829
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 831
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 831
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1030), ___nl__7);
#line 831
c_rt_lib0clear(&___nl__7);
#line 832
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 832
c_rt_lib0clear(&___nl__2);
#line 832
c_rt_lib0clear(&___nl__3);
#line 832
c_rt_lib0clear(&___nl__4);
#line 832
c_rt_lib0clear(&___nl__5);
#line 832
c_rt_lib0clear(&___nl__6);
#line 832
c_rt_lib0clear(&___nl__0);
#line 832
return NULL;
}

ImmT translator_priv0print_match(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 836
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 838
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 839
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 839
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___1));
#line 839
c_rt_lib0clear(&___nl__5);
#line 840
c_rt_lib0move(&___nl__5, translator_priv0new_register(___ref___1));
#line 841
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 842
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(763)));
#line 842
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 842
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 842
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__7));
#line 842
label_3:
#line 842
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 842
if(c_rt_lib0check_true_native(___nl__12)){ goto label_1;}
#line 842
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 843
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(213)));
#line 843
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__13, ___ref___1));
#line 843
c_rt_lib0clear(&___nl__13);
#line 844
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(764)));
#line 844
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(76)));
#line 844
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__5, ___get_global_const(39), ___nl__4, ___get_global_const(72), ___nl__14));
#line 844
c_rt_lib0clear(&___nl__14);
#line 844
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__13));
#line 844
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__13));
#line 844
c_rt_lib0clear(&___nl__13);
#line 850
c_rt_lib0move(&___nl__13, translator_priv0get_sim_label(___ref___1));
#line 851
c_rt_lib0delete(translator_priv0print_if_goto(___nl__13, ___nl__5, ___ref___1));
#line 852
c_rt_lib0delete(array0push(&___nl__3, ___nl__13));
#line 852
c_rt_lib0clear(&___nl__13);
#line 853
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 853
goto label_3;
#line 853
label_1:
#line 853
c_rt_lib0clear(&___nl__7);
#line 853
c_rt_lib0clear(&___nl__8);
#line 853
c_rt_lib0clear(&___nl__9);
#line 853
c_rt_lib0clear(&___nl__10);
#line 853
c_rt_lib0clear(&___nl__11);
#line 853
c_rt_lib0clear(&___nl__12);
#line 854
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 854
c_rt_lib0delete(translator_priv0load_const(___nl__7, ___nl__5, ___ref___1));
#line 854
c_rt_lib0clear(&___nl__7);
#line 855
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 855
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(233), ___nl__5, ___get_global_const(39), ___nl__8));
#line 855
c_rt_lib0clear(&___nl__8);
#line 855
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(215), ___nl__7));
#line 855
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 855
c_rt_lib0clear(&___nl__7);
#line 860
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__5));
#line 860
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 860
c_rt_lib0clear(&___nl__7);
#line 861
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 862
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(763)));
#line 862
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 862
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 862
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 862
label_6:
#line 862
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 862
if(c_rt_lib0check_true_native(___nl__13)){ goto label_4;}
#line 862
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 863
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(209)));
#line 863
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(213)));
#line 863
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___1));
#line 863
c_rt_lib0clear(&___nl__14);
#line 864
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 864
c_rt_lib0delete(translator_priv0print_sim_label(___nl__14, ___ref___1));
#line 864
c_rt_lib0clear(&___nl__14);
#line 865
c_rt_lib0move(&___nl__14, translator_priv0save_registers(___ref___1));
#line 866
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(764)));
#line 866
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(641)));
#line 866
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(641)));
#line 866
if(c_rt_lib0check_true_native(___nl__16)){ goto label_8;}
#line 874
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(37)));
#line 874
if(c_rt_lib0check_true_native(___nl__16)){ goto label_9;}
#line 874
c_rt_lib0move(&___nl__16,___get_global_const(74));
#line 874
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 874
nl_die_arg(___nl__16);
#line 866
label_8:
#line 866
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(641)));
#line 867
c_rt_lib0move(&___nl__18, translator_priv0print_var_decl(___nl__17, ___ref___1));
#line 868
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(764)));
#line 868
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__20, ___get_global_const(76)));
#line 868
c_rt_lib0move(&___nl__19, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__18, ___get_global_const(39), ___nl__4, ___get_global_const(72), ___nl__20));
#line 868
c_rt_lib0clear(&___nl__20);
#line 868
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__19));
#line 868
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__19));
#line 868
c_rt_lib0clear(&___nl__19);
#line 868
c_rt_lib0clear(&___nl__18);
#line 868
c_rt_lib0clear(&___nl__17);
#line 874
goto label_7;
#line 874
label_9:
#line 875
goto label_7;
#line 875
label_7:
#line 875
c_rt_lib0clear(&___nl__15);
#line 875
c_rt_lib0clear(&___nl__16);
#line 876
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(209)));
#line 876
c_rt_lib0delete(translator_priv0print_cmd(___nl__15, ___ref___1));
#line 876
c_rt_lib0clear(&___nl__15);
#line 877
c_rt_lib0delete(translator_priv0restore_registers(___nl__14, ___ref___1));
#line 878
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(209)));
#line 878
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(213)));
#line 878
c_rt_lib0move(&___nl__15, translator0last_debug_char(___nl__16));
#line 878
c_rt_lib0clear(&___nl__16);
#line 878
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__15, ___ref___1));
#line 878
c_rt_lib0clear(&___nl__15);
#line 879
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__6));
#line 879
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__15));
#line 879
c_rt_lib0clear(&___nl__15);
#line 880
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 880
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__15));
#line 880
c_rt_lib0clear(&___nl__15);
#line 880
c_rt_lib0clear(&___nl__14);
#line 881
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 881
goto label_6;
#line 881
label_4:
#line 881
c_rt_lib0clear(&___nl__8);
#line 881
c_rt_lib0clear(&___nl__9);
#line 881
c_rt_lib0clear(&___nl__10);
#line 881
c_rt_lib0clear(&___nl__11);
#line 881
c_rt_lib0clear(&___nl__12);
#line 881
c_rt_lib0clear(&___nl__13);
#line 882
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 883
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 883
c_rt_lib0clear(&___nl__2);
#line 883
c_rt_lib0clear(&___nl__3);
#line 883
c_rt_lib0clear(&___nl__4);
#line 883
c_rt_lib0clear(&___nl__5);
#line 883
c_rt_lib0clear(&___nl__6);
#line 883
c_rt_lib0clear(&___nl__7);
#line 883
c_rt_lib0clear(&___nl__0);
#line 883
return NULL;
}

ImmT translator_priv0move(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 888
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 888
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__0, ___nl__3));
#line 888
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 888
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 888
c_rt_lib0clear(&___nl__0);
#line 888
c_rt_lib0clear(&___nl__1);
#line 888
c_rt_lib0clear(&___nl__3);
#line 888
return NULL;
#line 888
goto label_2;
#line 888
label_2:
#line 888
c_rt_lib0clear(&___nl__3);
#line 889
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(233), ___nl__0, ___get_global_const(39), ___nl__1));
#line 889
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__3));
#line 889
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 889
c_rt_lib0clear(&___nl__3);
#line 889
c_rt_lib0clear(&___nl__0);
#line 889
c_rt_lib0clear(&___nl__1);
#line 889
return NULL;
}

ImmT translator_priv0print_bin_op_operator_command(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
translator_priv0__const__init();
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 899
c_rt_lib0move(&___nl__5,___get_global_const(247));
#line 899
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 899
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 899
c_rt_lib0move(&___nl__5,___get_global_const(788));
#line 899
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 899
label_3:
#line 899
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 899
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 900
c_rt_lib0move(&___nl__6,___get_global_const(247));
#line 900
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 900
c_rt_lib0clear(&___nl__6);
#line 901
goto label_10;
#line 901
label_2:
#line 901
c_rt_lib0move(&___nl__5,___get_global_const(245));
#line 901
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 901
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 901
c_rt_lib0move(&___nl__5,___get_global_const(789));
#line 901
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 901
label_5:
#line 901
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 901
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 902
c_rt_lib0move(&___nl__6,___get_global_const(245));
#line 902
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 902
c_rt_lib0clear(&___nl__6);
#line 903
goto label_10;
#line 903
label_4:
#line 903
c_rt_lib0move(&___nl__5,___get_global_const(253));
#line 903
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 903
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 903
c_rt_lib0move(&___nl__5,___get_global_const(790));
#line 903
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 903
label_7:
#line 903
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 903
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 904
c_rt_lib0move(&___nl__6,___get_global_const(253));
#line 904
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 904
c_rt_lib0clear(&___nl__6);
#line 905
goto label_10;
#line 905
label_6:
#line 905
c_rt_lib0move(&___nl__5,___get_global_const(79));
#line 905
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 905
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 905
c_rt_lib0move(&___nl__5,___get_global_const(791));
#line 905
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 905
label_9:
#line 905
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 905
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 906
c_rt_lib0move(&___nl__6,___get_global_const(79));
#line 906
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 906
c_rt_lib0clear(&___nl__6);
#line 907
goto label_10;
#line 907
label_8:
#line 907
c_rt_lib0move(&___nl__5,___get_global_const(81));
#line 907
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 907
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 907
c_rt_lib0move(&___nl__5,___get_global_const(792));
#line 907
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 907
label_11:
#line 907
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 907
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 908
c_rt_lib0move(&___nl__6,___get_global_const(81));
#line 908
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 908
c_rt_lib0clear(&___nl__6);
#line 909
goto label_10;
#line 909
label_10:
#line 909
c_rt_lib0clear(&___nl__5);
#line 910
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(4, ___get_global_const(233), ___nl__0, ___get_global_const(235), ___nl__1, ___get_global_const(236), ___nl__2, ___get_global_const(401), ___nl__3));
#line 910
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__5));
#line 910
c_rt_lib0delete(translator_priv0print(___ref___4, ___nl__5));
#line 910
c_rt_lib0clear(&___nl__5);
#line 910
c_rt_lib0clear(&___nl__0);
#line 910
c_rt_lib0clear(&___nl__1);
#line 910
c_rt_lib0clear(&___nl__2);
#line 910
c_rt_lib0clear(&___nl__3);
#line 910
return NULL;
}

ImmT translator_priv0print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 920
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(213)));
#line 920
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 920
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(209), ___nl__1, ___get_global_const(213), ___nl__3, ___get_global_const(212), ___nl__4));
#line 920
c_rt_lib0clear(&___nl__3);
#line 920
c_rt_lib0clear(&___nl__4);
#line 921
c_rt_lib0move(&___nl__3,___get_global_const(1032));
#line 921
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 921
c_rt_lib0move(&___nl__4,___get_global_const(380));
#line 921
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 921
c_rt_lib0delete(array0push(&___nl__4, ___nl__2));
#line 921
c_rt_lib0move(&___nl__5,___get_global_const(380));
#line 921
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 921
c_rt_lib0move(&___nl__5,___get_global_const(1032));
#line 921
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 921
c_rt_lib0clear(&___nl__5);
#line 921
c_rt_lib0clear(&___nl__3);
#line 921
c_rt_lib0clear(&___nl__4);
#line 922
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 922
c_rt_lib0move(&___nl__4,___get_global_const(213));
#line 922
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 922
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 922
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(650), ___nl__5);
#line 922
c_rt_lib0move(&___nl__6,___get_global_const(213));
#line 922
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 922
c_rt_lib0clear(&___nl__6);
#line 922
c_rt_lib0clear(&___nl__3);
#line 922
c_rt_lib0clear(&___nl__4);
#line 922
c_rt_lib0clear(&___nl__5);
#line 922
c_rt_lib0clear(&___nl__2);
#line 922
c_rt_lib0clear(&___nl__1);
#line 922
return NULL;
}

ImmT translator_priv0print_if_goto(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 926
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(233), ___nl__0, ___get_global_const(39), ___nl__1));
#line 926
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__3));
#line 926
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 926
c_rt_lib0clear(&___nl__3);
#line 926
c_rt_lib0clear(&___nl__0);
#line 926
c_rt_lib0clear(&___nl__1);
#line 926
return NULL;
}

ImmT translator_priv0print_get_from_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 936
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__0, ___get_global_const(39), ___nl__1, ___get_global_const(237), ___nl__2));
#line 936
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__4));
#line 936
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 936
c_rt_lib0clear(&___nl__4);
#line 936
c_rt_lib0clear(&___nl__0);
#line 936
c_rt_lib0clear(&___nl__1);
#line 936
c_rt_lib0clear(&___nl__2);
#line 936
return NULL;
}

ImmT translator_priv0print_set_at_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 948
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(39), ___nl__0, ___get_global_const(237), ___nl__1, ___get_global_const(234), ___nl__2));
#line 948
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(225), ___nl__4));
#line 948
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 948
c_rt_lib0clear(&___nl__4);
#line 948
c_rt_lib0clear(&___nl__0);
#line 948
c_rt_lib0clear(&___nl__1);
#line 948
c_rt_lib0clear(&___nl__2);
#line 948
return NULL;
}

ImmT translator_priv0print_get_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 959
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(233), ___nl__0, ___get_global_const(39), ___nl__1, ___get_global_const(279), ___nl__2));
#line 959
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(226), ___nl__4));
#line 959
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 959
c_rt_lib0clear(&___nl__4);
#line 959
c_rt_lib0clear(&___nl__0);
#line 959
c_rt_lib0clear(&___nl__1);
#line 959
c_rt_lib0clear(&___nl__2);
#line 959
return NULL;
}

ImmT translator_priv0print_set_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 969
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(39), ___nl__0, ___get_global_const(279), ___nl__1, ___get_global_const(234), ___nl__2));
#line 969
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(227), ___nl__4));
#line 969
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 969
c_rt_lib0clear(&___nl__4);
#line 969
c_rt_lib0clear(&___nl__0);
#line 969
c_rt_lib0clear(&___nl__1);
#line 969
c_rt_lib0clear(&___nl__2);
#line 969
return NULL;
}

ImmT translator_priv0get_stuct_of_lvalue(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 977
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 978
label_2:
#line 978
c_rt_lib0move(&___nl__3,___get_global_const(219));
#line 978
c_rt_lib0move(&___nl__2, ov0is(*___ref___0, ___nl__3));
#line 978
c_rt_lib0clear(&___nl__3);
#line 978
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 978
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 979
c_rt_lib0copy(&___nl__3, *___ref___0);
#line 979
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(219)));
#line 980
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(401)));
#line 980
c_rt_lib0move(&___nl__5,___get_global_const(774));
#line 980
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 980
c_rt_lib0clear(&___nl__5);
#line 980
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 980
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(401)));
#line 980
c_rt_lib0move(&___nl__5,___get_global_const(773));
#line 980
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 980
c_rt_lib0clear(&___nl__5);
#line 980
label_5:
#line 980
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 980
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 980
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 980
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 980
nl_die_arg(___nl__5);
#line 980
goto label_4;
#line 980
label_4:
#line 980
c_rt_lib0clear(&___nl__4);
#line 980
c_rt_lib0clear(&___nl__5);
#line 981
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 982
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(401)));
#line 982
c_rt_lib0move(&___nl__6,___get_global_const(774));
#line 982
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 982
c_rt_lib0clear(&___nl__6);
#line 982
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 982
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 983
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(236)));
#line 983
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1033), ___nl__7));
#line 983
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 983
c_rt_lib0clear(&___nl__7);
#line 983
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 983
c_rt_lib0clear(&___nl__6);
#line 984
goto label_6;
#line 984
label_7:
#line 985
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(236)));
#line 985
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(778)));
#line 985
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(279), ___nl__7));
#line 985
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 985
c_rt_lib0clear(&___nl__7);
#line 985
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 985
c_rt_lib0clear(&___nl__6);
#line 986
goto label_6;
#line 986
label_6:
#line 986
c_rt_lib0clear(&___nl__5);
#line 987
c_rt_lib0delete(array0append(&___nl__4, ___nl__1));
#line 988
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 989
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(235)));
#line 989
c_rt_lib0copy(___ref___0, ___nl__5);
#line 989
c_rt_lib0clear(&___nl__5);
#line 989
c_rt_lib0clear(&___nl__3);
#line 989
c_rt_lib0clear(&___nl__4);
#line 990
goto label_2;
#line 990
label_1:
#line 990
c_rt_lib0clear(&___nl__2);
#line 991
return ___nl__1;
#line 991
c_rt_lib0clear(&___nl__1);
#line 991
return NULL;
}

ImmT translator_priv0get_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 995
c_rt_lib0move(&___nl__3, translator_priv0get_stuct_of_lvalue(&___nl__0));
#line 996
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 996
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(772)));
#line 997
c_rt_lib0move(&___nl__6, translator_priv0get_var_register(___nl__4, ___ref___2));
#line 997
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 997
c_rt_lib0clear(&___nl__6);
#line 999
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 1000
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 1000
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 1000
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 1000
label_3:
#line 1000
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__8, ___nl__7));
#line 1000
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 1001
c_rt_lib0move(&___nl__11, translator_priv0new_register(___ref___2));
#line 1001
c_rt_lib0delete(array0push(&___nl__5, ___nl__11));
#line 1001
c_rt_lib0clear(&___nl__11);
#line 1002
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__3, ___nl__8));
#line 1002
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(1033)));
#line 1002
if(c_rt_lib0check_true_native(___nl__12)){ goto label_5;}
#line 1007
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(279)));
#line 1007
if(c_rt_lib0check_true_native(___nl__12)){ goto label_6;}
#line 1007
c_rt_lib0move(&___nl__12,___get_global_const(74));
#line 1007
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 1007
nl_die_arg(___nl__12);
#line 1002
label_5:
#line 1002
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(1033)));
#line 1003
c_rt_lib0move(&___nl__14, translator_priv0calc_val(___nl__13, ___ref___2));
#line 1004
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 1004
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(2, ___get_global_const(641), ___nl__16, ___get_global_const(1033), ___nl__14));
#line 1004
c_rt_lib0clear(&___nl__16);
#line 1004
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(1033), ___nl__15));
#line 1004
c_rt_lib0delete(array0push(&___nl__6, ___nl__15));
#line 1004
c_rt_lib0clear(&___nl__15);
#line 1005
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 1005
c_rt_lib0move(&___nl__15, c_rt_lib0num_eq(___nl__1, ___nl__15));
#line 1005
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__15));
#line 1005
if(c_rt_lib0check_true_native(___nl__16)){ goto label_9;}
#line 1005
c_rt_lib0move(&___nl__15, array0len(___nl__3));
#line 1005
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 1005
c_rt_lib0move(&___nl__15, c_rt_lib0sub_mod(___nl__15, ___nl__17));
#line 1005
c_rt_lib0clear(&___nl__17);
#line 1005
c_rt_lib0move(&___nl__15, c_rt_lib0num_eq(___nl__8, ___nl__15));
#line 1005
label_9:
#line 1005
c_rt_lib0clear(&___nl__16);
#line 1005
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 1005
if(c_rt_lib0check_true_native(___nl__15)){ goto label_8;}
#line 1005
c_rt_lib0clear(&___nl__11);
#line 1005
c_rt_lib0clear(&___nl__12);
#line 1005
c_rt_lib0clear(&___nl__13);
#line 1005
c_rt_lib0clear(&___nl__14);
#line 1005
c_rt_lib0clear(&___nl__15);
#line 1005
goto label_1;
#line 1005
goto label_8;
#line 1005
label_8:
#line 1005
c_rt_lib0clear(&___nl__15);
#line 1006
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 1006
c_rt_lib0move(&___nl__16, c_rt_lib0add(___nl__8, ___nl__16));
#line 1006
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__5, ___nl__16));
#line 1006
c_rt_lib0clear(&___nl__16);
#line 1006
c_rt_lib0move(&___nl__16,___get_global_const(1039));
#line 1006
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 1006
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__18));
#line 1006
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__14));
#line 1006
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(2, ___nl__18, ___nl__19));
#line 1006
c_rt_lib0clear(&___nl__18);
#line 1006
c_rt_lib0clear(&___nl__19);
#line 1006
c_rt_lib0delete(translator_priv0print_call_base(___nl__15, ___nl__16, ___nl__17, ___ref___2));
#line 1006
c_rt_lib0clear(&___nl__17);
#line 1006
c_rt_lib0clear(&___nl__16);
#line 1006
c_rt_lib0clear(&___nl__15);
#line 1006
c_rt_lib0clear(&___nl__14);
#line 1006
c_rt_lib0clear(&___nl__13);
#line 1007
goto label_4;
#line 1007
label_6:
#line 1007
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(279)));
#line 1008
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 1008
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(641), ___nl__15, ___get_global_const(279), ___nl__13));
#line 1008
c_rt_lib0clear(&___nl__15);
#line 1008
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(279), ___nl__14));
#line 1008
c_rt_lib0delete(array0push(&___nl__6, ___nl__14));
#line 1008
c_rt_lib0clear(&___nl__14);
#line 1009
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 1009
c_rt_lib0move(&___nl__14, c_rt_lib0num_eq(___nl__1, ___nl__14));
#line 1009
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__14));
#line 1009
if(c_rt_lib0check_true_native(___nl__15)){ goto label_12;}
#line 1009
c_rt_lib0move(&___nl__14, array0len(___nl__3));
#line 1009
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 1009
c_rt_lib0move(&___nl__14, c_rt_lib0sub_mod(___nl__14, ___nl__16));
#line 1009
c_rt_lib0clear(&___nl__16);
#line 1009
c_rt_lib0move(&___nl__14, c_rt_lib0num_eq(___nl__8, ___nl__14));
#line 1009
label_12:
#line 1009
c_rt_lib0clear(&___nl__15);
#line 1009
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 1009
if(c_rt_lib0check_true_native(___nl__14)){ goto label_11;}
#line 1009
c_rt_lib0clear(&___nl__11);
#line 1009
c_rt_lib0clear(&___nl__12);
#line 1009
c_rt_lib0clear(&___nl__13);
#line 1009
c_rt_lib0clear(&___nl__14);
#line 1009
goto label_1;
#line 1009
goto label_11;
#line 1009
label_11:
#line 1009
c_rt_lib0clear(&___nl__14);
#line 1010
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 1010
c_rt_lib0move(&___nl__15, c_rt_lib0add(___nl__8, ___nl__15));
#line 1010
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__5, ___nl__15));
#line 1010
c_rt_lib0clear(&___nl__15);
#line 1010
c_rt_lib0delete(translator_priv0load_const(___nl__13, ___nl__14, ___ref___2));
#line 1010
c_rt_lib0clear(&___nl__14);
#line 1011
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 1011
c_rt_lib0move(&___nl__15, c_rt_lib0add(___nl__8, ___nl__15));
#line 1011
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__5, ___nl__15));
#line 1011
c_rt_lib0clear(&___nl__15);
#line 1011
c_rt_lib0move(&___nl__15,___get_global_const(1040));
#line 1011
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 1011
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__17));
#line 1011
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 1011
c_rt_lib0move(&___nl__19, c_rt_lib0add(___nl__8, ___nl__19));
#line 1011
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__5, ___nl__19));
#line 1011
c_rt_lib0clear(&___nl__19);
#line 1011
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__18));
#line 1011
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__17, ___nl__18));
#line 1011
c_rt_lib0clear(&___nl__17);
#line 1011
c_rt_lib0clear(&___nl__18);
#line 1011
c_rt_lib0delete(translator_priv0print_call_base(___nl__14, ___nl__15, ___nl__16, ___ref___2));
#line 1011
c_rt_lib0clear(&___nl__16);
#line 1011
c_rt_lib0clear(&___nl__15);
#line 1011
c_rt_lib0clear(&___nl__14);
#line 1011
c_rt_lib0clear(&___nl__13);
#line 1012
goto label_4;
#line 1012
label_4:
#line 1012
c_rt_lib0clear(&___nl__11);
#line 1012
c_rt_lib0clear(&___nl__12);
#line 1013
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 1013
goto label_3;
#line 1013
label_1:
#line 1013
c_rt_lib0clear(&___nl__7);
#line 1013
c_rt_lib0clear(&___nl__8);
#line 1013
c_rt_lib0clear(&___nl__9);
#line 1013
c_rt_lib0clear(&___nl__10);
#line 1014
c_rt_lib0move(&___nl__8, array0len(___nl__5));
#line 1014
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 1014
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 1014
c_rt_lib0clear(&___nl__9);
#line 1014
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 1014
c_rt_lib0clear(&___nl__8);
#line 1014
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(641), ___nl__7));
#line 1014
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 1014
c_rt_lib0clear(&___nl__7);
#line 1015
c_rt_lib0clear(&___nl__0);
#line 1015
c_rt_lib0clear(&___nl__1);
#line 1015
c_rt_lib0clear(&___nl__3);
#line 1015
c_rt_lib0clear(&___nl__4);
#line 1015
c_rt_lib0clear(&___nl__5);
#line 1015
return ___nl__6;
#line 1015
c_rt_lib0clear(&___nl__3);
#line 1015
c_rt_lib0clear(&___nl__4);
#line 1015
c_rt_lib0clear(&___nl__5);
#line 1015
c_rt_lib0clear(&___nl__6);
#line 1015
c_rt_lib0clear(&___nl__0);
#line 1015
c_rt_lib0clear(&___nl__1);
#line 1015
return NULL;
}

ImmT translator_priv0set_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 1019
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 1020
c_rt_lib0move(&___nl__4, array0len(___nl__0));
#line 1021
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 1021
c_rt_lib0move(&___nl__6, c_rt_lib0sub(___nl__4, ___nl__6));
#line 1021
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__0, ___nl__6));
#line 1021
c_rt_lib0clear(&___nl__6);
#line 1021
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(641)));
#line 1022
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 1023
c_rt_lib0move(&___nl__7,___get_global_const(137));
#line 1023
c_rt_lib0move(&___nl__7, c_rt_lib0sub(___nl__4, ___nl__7));
#line 1023
label_2:
#line 1023
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 1023
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 1023
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1023
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 1024
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__0, ___nl__7));
#line 1024
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(641)));
#line 1024
if(c_rt_lib0check_true_native(___nl__10)){ goto label_5;}
#line 1026
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(1033)));
#line 1026
if(c_rt_lib0check_true_native(___nl__10)){ goto label_6;}
#line 1033
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(279)));
#line 1033
if(c_rt_lib0check_true_native(___nl__10)){ goto label_7;}
#line 1033
c_rt_lib0move(&___nl__10,___get_global_const(74));
#line 1033
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 1033
nl_die_arg(___nl__10);
#line 1024
label_5:
#line 1024
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(641)));
#line 1025
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(0));
#line 1025
nl_die_arg(___nl__12);
#line 1025
c_rt_lib0clear(&___nl__12);
#line 1025
c_rt_lib0clear(&___nl__11);
#line 1026
goto label_4;
#line 1026
label_6:
#line 1026
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(1033)));
#line 1027
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 1027
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__1, ___nl__12));
#line 1027
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__12));
#line 1027
if(c_rt_lib0check_true_native(___nl__13)){ goto label_10;}
#line 1027
c_rt_lib0move(&___nl__12,___get_global_const(137));
#line 1027
c_rt_lib0move(&___nl__12, c_rt_lib0sub(___nl__4, ___nl__12));
#line 1027
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__7, ___nl__12));
#line 1027
label_10:
#line 1027
c_rt_lib0clear(&___nl__13);
#line 1027
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1027
if(c_rt_lib0check_true_native(___nl__12)){ goto label_9;}
#line 1028
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(641)));
#line 1028
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(1033)));
#line 1028
c_rt_lib0delete(translator_priv0print_set_at_index(___nl__13, ___nl__14, ___nl__5, ___ref___2));
#line 1028
c_rt_lib0clear(&___nl__14);
#line 1028
c_rt_lib0clear(&___nl__13);
#line 1029
goto label_8;
#line 1029
label_9:
#line 1030
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 1030
c_rt_lib0move(&___nl__14,___get_global_const(1041));
#line 1030
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(641)));
#line 1030
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 1030
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(1033)));
#line 1030
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__17));
#line 1030
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__5));
#line 1030
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 1030
c_rt_lib0clear(&___nl__16);
#line 1030
c_rt_lib0clear(&___nl__17);
#line 1030
c_rt_lib0clear(&___nl__18);
#line 1030
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 1030
c_rt_lib0clear(&___nl__15);
#line 1030
c_rt_lib0clear(&___nl__14);
#line 1030
c_rt_lib0clear(&___nl__13);
#line 1031
goto label_8;
#line 1031
label_8:
#line 1031
c_rt_lib0clear(&___nl__12);
#line 1032
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(641)));
#line 1032
c_rt_lib0copy(&___nl__5, ___nl__12);
#line 1032
c_rt_lib0clear(&___nl__12);
#line 1032
c_rt_lib0clear(&___nl__11);
#line 1033
goto label_4;
#line 1033
label_7:
#line 1033
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(279)));
#line 1034
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 1034
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__1, ___nl__12));
#line 1034
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__12));
#line 1034
if(c_rt_lib0check_true_native(___nl__13)){ goto label_13;}
#line 1034
c_rt_lib0move(&___nl__12,___get_global_const(137));
#line 1034
c_rt_lib0move(&___nl__12, c_rt_lib0sub(___nl__4, ___nl__12));
#line 1034
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__7, ___nl__12));
#line 1034
label_13:
#line 1034
c_rt_lib0clear(&___nl__13);
#line 1034
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1034
if(c_rt_lib0check_true_native(___nl__12)){ goto label_12;}
#line 1035
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(641)));
#line 1035
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(279)));
#line 1035
c_rt_lib0delete(translator_priv0print_set_value(___nl__13, ___nl__14, ___nl__5, ___ref___2));
#line 1035
c_rt_lib0clear(&___nl__14);
#line 1035
c_rt_lib0clear(&___nl__13);
#line 1036
goto label_11;
#line 1036
label_12:
#line 1037
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 1037
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__6, ___nl__13));
#line 1037
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 1037
if(c_rt_lib0check_true_native(___nl__13)){ goto label_15;}
#line 1037
c_rt_lib0move(&___nl__14, translator_priv0new_register(___ref___2));
#line 1037
c_rt_lib0copy(&___nl__6, ___nl__14);
#line 1037
c_rt_lib0clear(&___nl__14);
#line 1037
goto label_15;
#line 1037
label_15:
#line 1037
c_rt_lib0clear(&___nl__13);
#line 1038
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(279)));
#line 1038
c_rt_lib0delete(translator_priv0load_const(___nl__13, ___nl__6, ___ref___2));
#line 1038
c_rt_lib0clear(&___nl__13);
#line 1039
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 1039
c_rt_lib0move(&___nl__14,___get_global_const(1042));
#line 1039
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(641)));
#line 1039
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 1039
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__6));
#line 1039
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__5));
#line 1039
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 1039
c_rt_lib0clear(&___nl__16);
#line 1039
c_rt_lib0clear(&___nl__17);
#line 1039
c_rt_lib0clear(&___nl__18);
#line 1039
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 1039
c_rt_lib0clear(&___nl__15);
#line 1039
c_rt_lib0clear(&___nl__14);
#line 1039
c_rt_lib0clear(&___nl__13);
#line 1040
goto label_11;
#line 1040
label_11:
#line 1040
c_rt_lib0clear(&___nl__12);
#line 1041
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(641)));
#line 1041
c_rt_lib0copy(&___nl__5, ___nl__12);
#line 1041
c_rt_lib0clear(&___nl__12);
#line 1041
c_rt_lib0clear(&___nl__11);
#line 1042
goto label_4;
#line 1042
label_4:
#line 1042
c_rt_lib0clear(&___nl__9);
#line 1042
c_rt_lib0clear(&___nl__10);
#line 1042
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 1042
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__9));
#line 1042
c_rt_lib0clear(&___nl__9);
#line 1043
goto label_2;
#line 1043
label_1:
#line 1043
c_rt_lib0clear(&___nl__7);
#line 1043
c_rt_lib0clear(&___nl__8);
#line 1044
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 1044
c_rt_lib0move(&___nl__7, c_rt_lib0ne(___nl__6, ___nl__7));
#line 1044
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1044
if(c_rt_lib0check_true_native(___nl__7)){ goto label_17;}
#line 1044
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 1044
goto label_17;
#line 1044
label_17:
#line 1044
c_rt_lib0clear(&___nl__7);
#line 1044
c_rt_lib0clear(&___nl__3);
#line 1044
c_rt_lib0clear(&___nl__4);
#line 1044
c_rt_lib0clear(&___nl__5);
#line 1044
c_rt_lib0clear(&___nl__6);
#line 1044
c_rt_lib0clear(&___nl__0);
#line 1044
c_rt_lib0clear(&___nl__1);
#line 1044
return NULL;
}

ImmT translator_priv0make_string(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 1048
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 1049
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 1050
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(277)));
#line 1050
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 1050
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 1050
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 1050
label_3:
#line 1050
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 1050
if(c_rt_lib0check_true_native(___nl__9)){ goto label_1;}
#line 1050
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 1051
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 1051
c_rt_lib0move(&___nl__10, c_rt_lib0gt(___nl__3, ___nl__10));
#line 1051
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1051
if(c_rt_lib0check_true_native(___nl__10)){ goto label_5;}
#line 1051
c_rt_lib0move(&___nl__11, string0lf());
#line 1051
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__11));
#line 1051
c_rt_lib0clear(&___nl__11);
#line 1051
goto label_5;
#line 1051
label_5:
#line 1051
c_rt_lib0clear(&___nl__10);
#line 1052
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 1053
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 1053
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__10));
#line 1053
c_rt_lib0clear(&___nl__10);
#line 1054
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 1054
goto label_3;
#line 1054
label_1:
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
c_rt_lib0clear(&___nl__9);
#line 1055
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(826)));
#line 1055
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(825)));
#line 1055
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 1057
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(824)));
#line 1057
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 1057
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 1057
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 1057
nl_die_arg(___nl__5);
#line 1055
label_7:
#line 1056
c_rt_lib0move(&___nl__6, string0lf());
#line 1056
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 1056
c_rt_lib0clear(&___nl__6);
#line 1057
goto label_6;
#line 1057
label_8:
#line 1058
goto label_6;
#line 1058
label_6:
#line 1058
c_rt_lib0clear(&___nl__4);
#line 1058
c_rt_lib0clear(&___nl__5);
#line 1059
c_rt_lib0clear(&___nl__0);
#line 1059
c_rt_lib0clear(&___nl__3);
#line 1059
return ___nl__2;
#line 1059
c_rt_lib0clear(&___nl__2);
#line 1059
c_rt_lib0clear(&___nl__3);
#line 1059
c_rt_lib0clear(&___nl__0);
#line 1059
return NULL;
}

ImmT translator_priv0print_ternary_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 1065
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 1065
c_rt_lib0move(&___nl__4,___get_global_const(798));
#line 1065
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 1065
c_rt_lib0clear(&___nl__4);
#line 1065
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1065
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1065
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 1065
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 1065
nl_die_arg(___nl__4);
#line 1065
goto label_2;
#line 1065
label_2:
#line 1065
c_rt_lib0clear(&___nl__3);
#line 1065
c_rt_lib0clear(&___nl__4);
#line 1067
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___2));
#line 1068
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 1070
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(784)));
#line 1070
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 1070
c_rt_lib0clear(&___nl__6);
#line 1072
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 1073
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(786)));
#line 1073
c_rt_lib0delete(translator_priv0print_val(___nl__6, ___nl__1, ___ref___2));
#line 1073
c_rt_lib0clear(&___nl__6);
#line 1074
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__3));
#line 1074
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__6));
#line 1074
c_rt_lib0clear(&___nl__6);
#line 1076
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 1077
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(785)));
#line 1077
c_rt_lib0delete(translator_priv0print_val(___nl__6, ___nl__1, ___ref___2));
#line 1077
c_rt_lib0clear(&___nl__6);
#line 1079
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___2));
#line 1079
c_rt_lib0clear(&___nl__3);
#line 1079
c_rt_lib0clear(&___nl__4);
#line 1079
c_rt_lib0clear(&___nl__5);
#line 1079
c_rt_lib0clear(&___nl__0);
#line 1079
c_rt_lib0clear(&___nl__1);
#line 1079
return NULL;
}

ImmT translator_priv0print_die(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 1084
c_rt_lib0move(&___nl__2, translator_priv0new_register(___ref___1));
#line 1085
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(215), ___nl__0));
#line 1085
c_rt_lib0delete(translator_priv0print_val(___nl__3, ___nl__2, ___ref___1));
#line 1085
c_rt_lib0clear(&___nl__3);
#line 1086
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__2));
#line 1086
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__3));
#line 1086
c_rt_lib0clear(&___nl__3);
#line 1086
c_rt_lib0clear(&___nl__2);
#line 1086
c_rt_lib0clear(&___nl__0);
#line 1086
return NULL;
}

ImmT translator_priv0print_return(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1090
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 1091
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(211)));
#line 1092
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 1092
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(754)));
#line 1092
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1092
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1092
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 1093
c_rt_lib0move(&___nl__5, translator_priv0calc_val(___nl__0, ___ref___1));
#line 1093
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__5));
#line 1093
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 1093
c_rt_lib0clear(&___nl__5);
#line 1094
goto label_2;
#line 1094
label_2:
#line 1094
c_rt_lib0clear(&___nl__4);
#line 1095
c_rt_lib0delete(translator_priv0print_safe_return(___nl__3, ___ref___1));
#line 1096
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 1096
c_rt_lib0clear(&___nl__2);
#line 1096
c_rt_lib0clear(&___nl__3);
#line 1096
c_rt_lib0clear(&___nl__0);
#line 1096
return NULL;
}

ImmT translator_priv0print_safe_return(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 1099
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 1100
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 1100
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1025)));
#line 1101
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 1101
c_rt_lib0move(&___nl__4, c_rt_lib0unary_minus(___nl__4));
#line 1102
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1032)));
#line 1102
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(331)));
#line 1103
c_rt_lib0copy(&___nl__6, ___nl__0);
#line 1103
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(234)));
#line 1103
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1103
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 1104
c_rt_lib0copy(&___nl__7, ___nl__0);
#line 1104
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(234)));
#line 1104
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 1104
c_rt_lib0clear(&___nl__7);
#line 1105
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 1105
c_rt_lib0move(&___nl__7, c_rt_lib0lt(___nl__4, ___nl__7));
#line 1105
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 1105
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 1105
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__5, ___nl__4));
#line 1105
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 1105
label_5:
#line 1105
c_rt_lib0clear(&___nl__8);
#line 1105
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1105
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 1106
c_rt_lib0move(&___nl__8, translator_priv0new_register(___ref___1));
#line 1106
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 1106
c_rt_lib0clear(&___nl__8);
#line 1107
c_rt_lib0copy(&___nl__8, ___nl__0);
#line 1107
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(234)));
#line 1107
c_rt_lib0delete(translator_priv0move(___nl__4, ___nl__8, ___ref___1));
#line 1107
c_rt_lib0clear(&___nl__8);
#line 1108
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__4));
#line 1108
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 1108
c_rt_lib0clear(&___nl__8);
#line 1109
goto label_4;
#line 1109
label_4:
#line 1109
c_rt_lib0clear(&___nl__7);
#line 1110
goto label_2;
#line 1110
label_2:
#line 1110
c_rt_lib0clear(&___nl__6);
#line 1111
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 1111
label_7:
#line 1111
c_rt_lib0move(&___nl__7, c_rt_lib0lt(___nl__6, ___nl__3));
#line 1111
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1111
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 1112
c_rt_lib0move(&___nl__8, array0len(___nl__5));
#line 1112
c_rt_lib0move(&___nl__8, c_rt_lib0lt(___nl__6, ___nl__8));
#line 1112
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 1112
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 1112
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 1112
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(5)));
#line 1112
label_11:
#line 1112
c_rt_lib0clear(&___nl__9);
#line 1112
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1112
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 1112
c_rt_lib0clear(&___nl__8);
#line 1112
goto label_8;
#line 1112
goto label_10;
#line 1112
label_10:
#line 1112
c_rt_lib0clear(&___nl__8);
#line 1113
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__6, ___nl__4));
#line 1113
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1113
if(c_rt_lib0check_true_native(___nl__8)){ goto label_13;}
#line 1113
c_rt_lib0clear(&___nl__8);
#line 1113
goto label_8;
#line 1113
goto label_13;
#line 1113
label_13:
#line 1113
c_rt_lib0clear(&___nl__8);
#line 1114
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(190), ___get_global_const(852)));
#line 1114
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 1114
c_rt_lib0move(&___nl__8, ptd0ensure(___nl__9, ___nl__6));
#line 1114
c_rt_lib0clear(&___nl__9);
#line 1114
c_rt_lib0delete(translator_priv0undef_reg(___nl__8, ___ref___1));
#line 1114
c_rt_lib0clear(&___nl__8);
#line 1114
label_8:
#line 1114
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 1114
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__8));
#line 1114
c_rt_lib0clear(&___nl__8);
#line 1115
goto label_7;
#line 1115
label_6:
#line 1115
c_rt_lib0clear(&___nl__6);
#line 1115
c_rt_lib0clear(&___nl__7);
#line 1116
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(210), ___nl__0));
#line 1116
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__6));
#line 1116
c_rt_lib0clear(&___nl__6);
#line 1117
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 1117
c_rt_lib0clear(&___nl__2);
#line 1117
c_rt_lib0clear(&___nl__3);
#line 1117
c_rt_lib0clear(&___nl__4);
#line 1117
c_rt_lib0clear(&___nl__5);
#line 1117
c_rt_lib0clear(&___nl__0);
#line 1117
return NULL;
}

ImmT translator_priv0convert_str_to_number(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 1120
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 1121
c_rt_lib0move(&___nl__2,___get_global_const(941));
#line 1121
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 1121
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 1121
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 1121
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 1121
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 1121
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__4, ___nl__5));
#line 1121
c_rt_lib0clear(&___nl__5);
#line 1121
c_rt_lib0clear(&___nl__4);
#line 1121
c_rt_lib0move(&___nl__4,___get_global_const(903));
#line 1121
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 1121
c_rt_lib0clear(&___nl__4);
#line 1121
label_3:
#line 1121
c_rt_lib0clear(&___nl__3);
#line 1121
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 1121
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 1122
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 1123
c_rt_lib0move(&___nl__4,___get_global_const(137));
#line 1123
label_5:
#line 1123
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__4, ___nl__1));
#line 1123
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1123
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 1124
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 1124
c_rt_lib0move(&___nl__6, string0substr(___nl__0, ___nl__4, ___nl__7));
#line 1124
c_rt_lib0clear(&___nl__7);
#line 1125
c_rt_lib0move(&___nl__7, string0ord(___nl__6));
#line 1126
c_rt_lib0move(&___nl__8,___get_global_const(1043));
#line 1126
c_rt_lib0move(&___nl__8, c_rt_lib0mul(___nl__3, ___nl__8));
#line 1126
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 1126
c_rt_lib0clear(&___nl__8);
#line 1127
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 1127
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 1127
c_rt_lib0clear(&___nl__10);
#line 1127
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 1127
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 1127
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 1127
c_rt_lib0move(&___nl__10,___get_global_const(158));
#line 1127
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 1127
c_rt_lib0clear(&___nl__10);
#line 1127
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 1127
label_9:
#line 1127
c_rt_lib0clear(&___nl__9);
#line 1127
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1127
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 1128
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 1128
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 1128
c_rt_lib0clear(&___nl__10);
#line 1128
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 1128
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 1128
c_rt_lib0clear(&___nl__9);
#line 1129
goto label_7;
#line 1129
label_8:
#line 1129
c_rt_lib0move(&___nl__10,___get_global_const(1044));
#line 1129
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 1129
c_rt_lib0clear(&___nl__10);
#line 1129
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 1129
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 1129
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 1129
c_rt_lib0move(&___nl__10,___get_global_const(1045));
#line 1129
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 1129
c_rt_lib0clear(&___nl__10);
#line 1129
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 1129
label_11:
#line 1129
c_rt_lib0clear(&___nl__9);
#line 1129
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1129
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 1130
c_rt_lib0move(&___nl__10,___get_global_const(1044));
#line 1130
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 1130
c_rt_lib0clear(&___nl__10);
#line 1130
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 1130
c_rt_lib0move(&___nl__10,___get_global_const(152));
#line 1130
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 1130
c_rt_lib0clear(&___nl__10);
#line 1130
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 1130
c_rt_lib0clear(&___nl__9);
#line 1131
goto label_7;
#line 1131
label_10:
#line 1131
c_rt_lib0move(&___nl__10,___get_global_const(1023));
#line 1131
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 1131
c_rt_lib0clear(&___nl__10);
#line 1131
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 1131
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 1131
if(c_rt_lib0check_true_native(___nl__9)){ goto label_13;}
#line 1131
c_rt_lib0move(&___nl__10,___get_global_const(1046));
#line 1131
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 1131
c_rt_lib0clear(&___nl__10);
#line 1131
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 1131
label_13:
#line 1131
c_rt_lib0clear(&___nl__9);
#line 1131
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1131
if(c_rt_lib0check_true_native(___nl__8)){ goto label_12;}
#line 1132
c_rt_lib0move(&___nl__10,___get_global_const(1023));
#line 1132
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 1132
c_rt_lib0clear(&___nl__10);
#line 1132
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 1132
c_rt_lib0move(&___nl__10,___get_global_const(152));
#line 1132
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 1132
c_rt_lib0clear(&___nl__10);
#line 1132
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 1132
c_rt_lib0clear(&___nl__9);
#line 1133
goto label_7;
#line 1133
label_12:
#line 1134
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 1134
nl_die_arg(___nl__9);
#line 1134
c_rt_lib0clear(&___nl__9);
#line 1135
goto label_7;
#line 1135
label_7:
#line 1135
c_rt_lib0clear(&___nl__8);
#line 1135
c_rt_lib0clear(&___nl__6);
#line 1135
c_rt_lib0clear(&___nl__7);
#line 1135
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 1135
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 1135
c_rt_lib0clear(&___nl__6);
#line 1136
goto label_5;
#line 1136
label_4:
#line 1136
c_rt_lib0clear(&___nl__4);
#line 1136
c_rt_lib0clear(&___nl__5);
#line 1137
c_rt_lib0clear(&___nl__0);
#line 1137
c_rt_lib0clear(&___nl__1);
#line 1137
c_rt_lib0clear(&___nl__2);
#line 1137
return ___nl__3;
#line 1137
c_rt_lib0clear(&___nl__3);
#line 1138
goto label_1;
#line 1138
label_2:
#line 1138
c_rt_lib0move(&___nl__2,___get_global_const(137));
#line 1138
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 1138
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 1138
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 1138
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 1138
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 1138
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__5, ___nl__6));
#line 1138
c_rt_lib0clear(&___nl__6);
#line 1138
c_rt_lib0clear(&___nl__5);
#line 1138
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 1138
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__5));
#line 1138
c_rt_lib0clear(&___nl__5);
#line 1138
label_16:
#line 1138
c_rt_lib0clear(&___nl__4);
#line 1138
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 1138
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 1138
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__0));
#line 1138
label_15:
#line 1138
c_rt_lib0clear(&___nl__3);
#line 1138
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 1138
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 1139
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 1140
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 1140
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 1140
label_19:
#line 1140
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__1));
#line 1140
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 1141
c_rt_lib0move(&___nl__7,___get_global_const(1047));
#line 1141
c_rt_lib0move(&___nl__3, c_rt_lib0mul_mod(___nl__3, ___nl__7));
#line 1141
c_rt_lib0clear(&___nl__7);
#line 1142
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 1142
c_rt_lib0move(&___nl__8, string0substr(___nl__0, ___nl__4, ___nl__9));
#line 1142
c_rt_lib0clear(&___nl__9);
#line 1142
c_rt_lib0move(&___nl__7, string0ord(___nl__8));
#line 1142
c_rt_lib0clear(&___nl__8);
#line 1142
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 1142
c_rt_lib0move(&___nl__8, string0ord(___nl__9));
#line 1142
c_rt_lib0clear(&___nl__9);
#line 1142
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 1142
c_rt_lib0clear(&___nl__8);
#line 1142
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__7));
#line 1142
c_rt_lib0clear(&___nl__7);
#line 1143
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 1143
goto label_19;
#line 1143
label_17:
#line 1143
c_rt_lib0clear(&___nl__4);
#line 1143
c_rt_lib0clear(&___nl__5);
#line 1143
c_rt_lib0clear(&___nl__6);
#line 1144
c_rt_lib0clear(&___nl__0);
#line 1144
c_rt_lib0clear(&___nl__1);
#line 1144
c_rt_lib0clear(&___nl__2);
#line 1144
return ___nl__3;
#line 1144
c_rt_lib0clear(&___nl__3);
#line 1145
goto label_1;
#line 1145
label_14:
#line 1146
c_rt_lib0clear(&___nl__1);
#line 1146
c_rt_lib0clear(&___nl__2);
#line 1146
return ___nl__0;
#line 1147
goto label_1;
#line 1147
label_1:
#line 1147
c_rt_lib0clear(&___nl__2);
#line 1147
c_rt_lib0clear(&___nl__1);
#line 1147
c_rt_lib0clear(&___nl__0);
#line 1147
return NULL;
}

ImmT translator_priv0dest_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1151
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 1151
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(772)));
#line 1151
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1151
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 1152
c_rt_lib0copy(&___nl__5, ___nl__0);
#line 1152
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(772)));
#line 1152
c_rt_lib0move(&___nl__4, translator_priv0get_var_register(___nl__5, ___ref___2));
#line 1152
c_rt_lib0clear(&___nl__5);
#line 1152
c_rt_lib0clear(&___nl__0);
#line 1152
c_rt_lib0clear(&___nl__1);
#line 1152
c_rt_lib0clear(&___nl__3);
#line 1152
return ___nl__4;
#line 1152
c_rt_lib0clear(&___nl__4);
#line 1153
goto label_2;
#line 1153
label_2:
#line 1153
c_rt_lib0clear(&___nl__3);
#line 1154
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 1154
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 1154
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1154
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 1154
c_rt_lib0move(&___nl__4, translator_priv0new_register(___ref___2));
#line 1154
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 1154
c_rt_lib0clear(&___nl__4);
#line 1154
goto label_4;
#line 1154
label_4:
#line 1154
c_rt_lib0clear(&___nl__3);
#line 1155
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__1, ___ref___2));
#line 1156
c_rt_lib0clear(&___nl__0);
#line 1156
return ___nl__1;
#line 1156
c_rt_lib0clear(&___nl__0);
#line 1156
c_rt_lib0clear(&___nl__1);
#line 1156
return NULL;
}

ImmT translator_priv0def_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 1159
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 1159
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 1159
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1159
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 1159
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 1159
goto label_2;
#line 1159
label_2:
#line 1159
c_rt_lib0clear(&___nl__4);
#line 1160
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__1, ___ref___3));
#line 1161
c_rt_lib0clear(&___nl__0);
#line 1161
c_rt_lib0clear(&___nl__2);
#line 1161
return ___nl__1;
#line 1161
c_rt_lib0clear(&___nl__0);
#line 1161
c_rt_lib0clear(&___nl__1);
#line 1161
c_rt_lib0clear(&___nl__2);
#line 1161
return NULL;
}

ImmT translator_priv0calc_val(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 1165
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 1165
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(772)));
#line 1165
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 1165
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 1166
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 1166
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(772)));
#line 1166
c_rt_lib0move(&___nl__3, translator_priv0get_var_register(___nl__4, ___ref___1));
#line 1166
c_rt_lib0clear(&___nl__4);
#line 1166
c_rt_lib0clear(&___nl__0);
#line 1166
c_rt_lib0clear(&___nl__2);
#line 1166
return ___nl__3;
#line 1166
c_rt_lib0clear(&___nl__3);
#line 1167
goto label_2;
#line 1167
label_2:
#line 1167
c_rt_lib0clear(&___nl__2);
#line 1168
c_rt_lib0move(&___nl__2, translator_priv0new_register(___ref___1));
#line 1169
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__2, ___ref___1));
#line 1170
c_rt_lib0clear(&___nl__0);
#line 1170
return ___nl__2;
#line 1170
c_rt_lib0clear(&___nl__2);
#line 1170
c_rt_lib0clear(&___nl__0);
#line 1170
return NULL;
}

ImmT translator_priv0get_var_register(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 1174
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 1174
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(643)));
#line 1174
c_rt_lib0move(&___nl__2, hash0get_value(___nl__3, ___nl__0));
#line 1174
c_rt_lib0clear(&___nl__3);
#line 1174
c_rt_lib0clear(&___nl__0);
#line 1174
return ___nl__2;
#line 1174
c_rt_lib0clear(&___nl__2);
#line 1174
c_rt_lib0clear(&___nl__0);
#line 1174
return NULL;
}

ImmT translator_priv0new_declaration(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1178
c_rt_lib0move(&___nl__2, translator_priv0new_register(___ref___1));
#line 1179
c_rt_lib0move(&___nl__3,___get_global_const(1029));
#line 1179
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 1179
c_rt_lib0move(&___nl__4,___get_global_const(643));
#line 1179
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 1179
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__0, ___nl__2));
#line 1179
c_rt_lib0move(&___nl__5,___get_global_const(643));
#line 1179
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 1179
c_rt_lib0move(&___nl__5,___get_global_const(1029));
#line 1179
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__3));
#line 1179
c_rt_lib0clear(&___nl__5);
#line 1179
c_rt_lib0clear(&___nl__3);
#line 1179
c_rt_lib0clear(&___nl__4);
#line 1180
c_rt_lib0move(&___nl__3,___get_global_const(213));
#line 1180
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 1180
c_rt_lib0move(&___nl__4,___get_global_const(650));
#line 1180
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 1180
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__0, ___nl__2));
#line 1180
c_rt_lib0move(&___nl__5,___get_global_const(650));
#line 1180
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 1180
c_rt_lib0move(&___nl__5,___get_global_const(213));
#line 1180
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__3));
#line 1180
c_rt_lib0clear(&___nl__5);
#line 1180
c_rt_lib0clear(&___nl__3);
#line 1180
c_rt_lib0clear(&___nl__4);
#line 1181
c_rt_lib0clear(&___nl__0);
#line 1181
return ___nl__2;
#line 1181
c_rt_lib0clear(&___nl__2);
#line 1181
c_rt_lib0clear(&___nl__0);
#line 1181
return NULL;
}

ImmT translator_priv0new_register(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1185
c_rt_lib0move(&___nl__1,___get_global_const(1029));
#line 1185
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_hash(*___ref___0, ___nl__1));
#line 1185
c_rt_lib0move(&___nl__2,___get_global_const(1025));
#line 1185
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(___nl__1, ___nl__2));
#line 1185
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 1185
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 1185
c_rt_lib0move(&___nl__4,___get_global_const(1025));
#line 1185
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__4, ___nl__2));
#line 1185
c_rt_lib0move(&___nl__4,___get_global_const(1029));
#line 1185
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__1));
#line 1185
c_rt_lib0clear(&___nl__4);
#line 1185
c_rt_lib0clear(&___nl__1);
#line 1185
c_rt_lib0clear(&___nl__2);
#line 1185
c_rt_lib0clear(&___nl__3);
#line 1186
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1032)));
#line 1186
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(378)));
#line 1186
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1029)));
#line 1186
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1025)));
#line 1186
c_rt_lib0move(&___nl__1, c_rt_lib0lt(___nl__1, ___nl__2));
#line 1186
c_rt_lib0clear(&___nl__2);
#line 1186
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 1186
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 1186
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1029)));
#line 1186
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1025)));
#line 1186
c_rt_lib0move(&___nl__3,___get_global_const(1032));
#line 1186
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 1186
c_rt_lib0copy(&___nl__4, ___nl__2);
#line 1186
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(378), ___nl__4);
#line 1186
c_rt_lib0move(&___nl__5,___get_global_const(1032));
#line 1186
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 1186
c_rt_lib0clear(&___nl__5);
#line 1186
c_rt_lib0clear(&___nl__2);
#line 1186
c_rt_lib0clear(&___nl__3);
#line 1186
c_rt_lib0clear(&___nl__4);
#line 1186
goto label_2;
#line 1186
label_2:
#line 1186
c_rt_lib0clear(&___nl__1);
#line 1188
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1029)));
#line 1188
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1025)));
#line 1188
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 1188
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 1188
c_rt_lib0clear(&___nl__2);
#line 1188
return ___nl__1;
#line 1188
c_rt_lib0clear(&___nl__1);
#line 1188
return NULL;
}

ImmT translator_priv0save_registers(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 1192
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1029)));
#line 1192
return ___nl__1;
#line 1192
c_rt_lib0clear(&___nl__1);
#line 1192
return NULL;
}

ImmT translator_priv0undef_reg(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 1195
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(195), ___nl__0));
#line 1195
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__2));
#line 1195
c_rt_lib0clear(&___nl__2);
#line 1195
c_rt_lib0clear(&___nl__0);
#line 1195
return NULL;
}

ImmT translator_priv0restore_registers(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1200
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(1025)));
#line 1200
label_2:
#line 1200
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 1200
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1025)));
#line 1200
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 1200
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1200
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 1201
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(190), ___get_global_const(852)));
#line 1201
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 1201
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__2));
#line 1201
c_rt_lib0clear(&___nl__5);
#line 1201
c_rt_lib0delete(translator_priv0undef_reg(___nl__4, ___ref___1));
#line 1201
c_rt_lib0clear(&___nl__4);
#line 1201
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 1201
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 1201
c_rt_lib0clear(&___nl__4);
#line 1202
goto label_2;
#line 1202
label_1:
#line 1202
c_rt_lib0clear(&___nl__2);
#line 1202
c_rt_lib0clear(&___nl__3);
#line 1203
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 1203
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1029), ___nl__2);
#line 1203
c_rt_lib0clear(&___nl__2);
#line 1203
c_rt_lib0clear(&___nl__0);
#line 1203
return NULL;
}

ImmT translator_priv0print_sim_label(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 1207
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__0));
#line 1207
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__2));
#line 1207
c_rt_lib0clear(&___nl__2);
#line 1207
c_rt_lib0clear(&___nl__0);
#line 1207
return NULL;
}

ImmT translator_priv0get_sim_label(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 1210
c_rt_lib0move(&___nl__1,___get_global_const(1031));
#line 1210
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_hash(*___ref___0, ___nl__1));
#line 1210
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 1210
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__2));
#line 1210
c_rt_lib0move(&___nl__3,___get_global_const(1031));
#line 1210
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__1));
#line 1210
c_rt_lib0clear(&___nl__3);
#line 1210
c_rt_lib0clear(&___nl__1);
#line 1210
c_rt_lib0clear(&___nl__2);
#line 1211
c_rt_lib0move(&___nl__1,___get_global_const(1048));
#line 1211
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1031)));
#line 1211
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 1211
c_rt_lib0clear(&___nl__2);
#line 1211
return ___nl__1;
#line 1211
c_rt_lib0clear(&___nl__1);
#line 1211
return NULL;
}


static ImmT ___const__[8];
static int ___const_init__ = 1;
void translator_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[7];


for(int i=0;i<7;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 7);
}}
ImmT translator_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT translator_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = translator0function_logic_t0cal();
	break;
case 1:
	___const__[1] = translator0loop0cal();
	break;
case 2:
	___const__[2] = translator0loop_label0cal();
	break;
case 3:
	___const__[3] = translator0state_t0cal();
	break;
case 4:
	___const__[4] = translator0string_t0cal();
	break;
case 5:
	___const__[5] = translator0lvalue_values_t0cal();
	break;
case 6:
	___const__[6] = translator0ref_rec_args_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
