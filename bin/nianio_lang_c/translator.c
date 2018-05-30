
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "translator.h"
#include "array.h"
#include "string.h"
#include "ptd.h"
#include "nast.h"
#include "hash.h"
#include "nlasm.h"
#include "boolean_t.h"
#include "string_utils.h"
#include "translator.h"
#include "nlasm.h"
#line 1 "translator.nl"

static ImmT *__const__f = NULL;
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
ImmT translator_priv0get_struct_of_lvalue(ImmT * ___ref___0);
ImmT translator_priv0get_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0set_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0make_string(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_ternary_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_die(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
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
return translator_priv0__const__sing(0);}
ImmT translator0function_logic_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 16
c_rt_lib0move(&___nl__2, ptd0sim());
#line 16
c_rt_lib0move(&___nl__4, ptd0sim());
#line 16
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(1146), ___nl__2, ___get_global_const(702), ___nl__3));
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
return ___nl__0;
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return NULL;
}

ImmT translator0loop0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0loop");
return translator0loop();}
ImmT translator0loop(){
return translator_priv0__const__sing(1);}
ImmT translator0loop0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 20
c_rt_lib0move(&___nl__2, ptd0sim());
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1147), ___get_global_const(1148)));
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 20
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(1149), ___nl__2, ___get_global_const(1150), ___nl__3));
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

ImmT translator0loop_label0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0loop_label");
return translator0loop_label();}
ImmT translator0loop_label(){
return translator_priv0__const__sing(2);}
ImmT translator0loop_label0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 24
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1147), ___get_global_const(140)));
#line 24
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1147), ___get_global_const(140)));
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 24
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(824), ___nl__2, ___get_global_const(825), ___nl__3));
#line 24
c_rt_lib0clear(&___nl__2);
#line 24
c_rt_lib0clear(&___nl__3);
#line 24
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 24
c_rt_lib0clear(&___nl__1);
#line 24
return ___nl__0;
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
return NULL;
}

ImmT translator0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0state_t");
return translator0state_t();}
ImmT translator0state_t(){
return translator_priv0__const__sing(3);}
ImmT translator0state_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 29
c_rt_lib0move(&___nl__2, ptd0sim());
#line 30
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_const(273), ___get_global_const(701)));
#line 30
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 31
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1147), ___get_global_const(1148)));
#line 31
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 32
c_rt_lib0move(&___nl__5, ptd0sim());
#line 33
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_const(273), ___get_global_const(681)));
#line 33
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 34
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(translator0loop_label0ptr, ___get_global_const(1147), ___get_global_const(1151)));
#line 34
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 34
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(6, ___get_global_const(1152), ___nl__2, ___get_global_const(195), ___nl__3, ___get_global_const(1150), ___nl__4, ___get_global_const(186), ___nl__5, ___get_global_const(1153), ___nl__6, ___get_global_const(1151), ___nl__7));
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
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
return ___nl__0;
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
return NULL;
}

ImmT translator0string_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0string_t");
return translator0string_t();}
ImmT translator0string_t(){
return translator_priv0__const__sing(4);}
ImmT translator0string_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 39
c_rt_lib0move(&___nl__3, ptd0sim());
#line 39
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0move(&___nl__5, ptd0none());
#line 39
c_rt_lib0move(&___nl__6, ptd0none());
#line 39
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(905), ___nl__5, ___get_global_const(906), ___nl__6));
#line 39
c_rt_lib0clear(&___nl__5);
#line 39
c_rt_lib0clear(&___nl__6);
#line 39
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 39
c_rt_lib0clear(&___nl__4);
#line 39
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__2, ___get_global_const(907), ___nl__3));
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 39
c_rt_lib0clear(&___nl__1);
#line 39
return ___nl__0;
#line 39
c_rt_lib0clear(&___nl__0);
#line 39
return NULL;
}

ImmT translator0lvalue_values_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0lvalue_values_t");
return translator0lvalue_values_t();}
ImmT translator0lvalue_values_t(){
return translator_priv0__const__sing(5);}
ImmT translator0lvalue_values_t0cal() {
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
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(273), ___get_global_const(938)));
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 45
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(273), ___get_global_const(938)));
#line 45
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 45
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(273), ___get_global_const(938)));
#line 45
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 45
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(192), ___nl__6, ___get_global_const(1154), ___nl__7));
#line 45
c_rt_lib0clear(&___nl__6);
#line 45
c_rt_lib0clear(&___nl__7);
#line 45
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 45
c_rt_lib0clear(&___nl__5);
#line 46
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(273), ___get_global_const(938)));
#line 46
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 46
c_rt_lib0move(&___nl__8, ptd0sim());
#line 46
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(192), ___nl__7, ___get_global_const(329), ___nl__8));
#line 46
c_rt_lib0clear(&___nl__7);
#line 46
c_rt_lib0clear(&___nl__8);
#line 46
c_rt_lib0move(&___nl__5, ptd0rec(___nl__6));
#line 46
c_rt_lib0clear(&___nl__6);
#line 47
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(273), ___get_global_const(938)));
#line 47
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 47
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(273), ___get_global_const(938)));
#line 47
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 47
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(192), ___nl__8, ___get_global_const(329), ___nl__9));
#line 47
c_rt_lib0clear(&___nl__8);
#line 47
c_rt_lib0clear(&___nl__9);
#line 47
c_rt_lib0move(&___nl__6, ptd0rec(___nl__7));
#line 47
c_rt_lib0clear(&___nl__7);
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(192), ___nl__3, ___get_global_const(1154), ___nl__4, ___get_global_const(329), ___nl__5, ___get_global_const(1141), ___nl__6));
#line 47
c_rt_lib0clear(&___nl__3);
#line 47
c_rt_lib0clear(&___nl__4);
#line 47
c_rt_lib0clear(&___nl__5);
#line 47
c_rt_lib0clear(&___nl__6);
#line 47
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
return ___nl__0;
#line 47
c_rt_lib0clear(&___nl__0);
#line 47
return NULL;
}

ImmT translator0last_debug_char0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "translator0last_debug_char");
return translator0last_debug_char(_tab[0]);}
ImmT translator0last_debug_char(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 52
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(905)));
#line 52
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(134)));
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(905)));
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(919)));
#line 52
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 52
c_rt_lib0clear(&___nl__4);
#line 52
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(134), ___nl__2, ___get_global_const(919), ___nl__3));
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(905)));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(134)));
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(905)));
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(919)));
#line 53
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(134), ___nl__3, ___get_global_const(919), ___nl__4));
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__1, ___get_global_const(905), ___nl__2));
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
return ___nl__3;
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
return NULL;
}

ImmT translator0translate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "translator0translate");
return translator0translate(_tab[0]);}
ImmT translator0translate(ImmT ___nl__0) {
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
ImmT ___nl__19 = NULL;
#line 58
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 58
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 58
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 58
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(186), ___nl__2, ___get_global_const(92), ___nl__3, ___get_global_const(384), ___nl__4));
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
c_rt_lib0clear(&___nl__4);
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 59
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 59
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(384), ___nl__3);
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__3);
#line 60
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(150)));
#line 60
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 60
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 60
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 60
label_16:
#line 60
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 60
if(c_rt_lib0check_true_native(___nl__7)){ goto label_31;}
#line 60
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 61
c_rt_lib0move(&___nl__8,___get_global_const(384));
#line 61
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__1, ___nl__8));
#line 61
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 61
c_rt_lib0delete(array0push(&___nl__8, ___nl__9));
#line 61
c_rt_lib0clear(&___nl__9);
#line 61
c_rt_lib0move(&___nl__9,___get_global_const(384));
#line 61
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__9, ___nl__8));
#line 61
c_rt_lib0clear(&___nl__9);
#line 61
c_rt_lib0clear(&___nl__8);
#line 62
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 62
goto label_16;
#line 62
label_31:
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
c_rt_lib0clear(&___nl__5);
#line 62
c_rt_lib0clear(&___nl__6);
#line 62
c_rt_lib0clear(&___nl__7);
#line 63
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(786)));
#line 63
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 63
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 63
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 63
label_42:
#line 63
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 63
if(c_rt_lib0check_true_native(___nl__7)){ goto label_96;}
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 64
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 64
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 64
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(702), ___nl__9, ___get_global_const(1146), ___nl__10));
#line 64
c_rt_lib0clear(&___nl__9);
#line 64
c_rt_lib0clear(&___nl__10);
#line 66
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 67
c_rt_lib0move(&___nl__11, nlasm0empty_debug());
#line 68
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 71
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 72
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(182)));
#line 73
c_rt_lib0move(&___nl__16,___get_global_const(0));
#line 74
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(0));
#line 75
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(0));
#line 76
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 76
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(6, ___get_global_const(200), ___nl__14, ___get_global_const(182), ___nl__15, ___get_global_const(189), ___nl__16, ___get_global_const(188), ___nl__17, ___get_global_const(187), ___nl__18, ___get_global_const(93), ___nl__19));
#line 76
c_rt_lib0clear(&___nl__14);
#line 76
c_rt_lib0clear(&___nl__15);
#line 76
c_rt_lib0clear(&___nl__16);
#line 76
c_rt_lib0clear(&___nl__17);
#line 76
c_rt_lib0clear(&___nl__18);
#line 76
c_rt_lib0clear(&___nl__19);
#line 78
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 78
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(2, ___get_global_const(1149), ___nl__16, ___get_global_const(1150), ___nl__8));
#line 78
c_rt_lib0clear(&___nl__16);
#line 78
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 78
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(1149), ___nl__17, ___get_global_const(1150), ___nl__8));
#line 78
c_rt_lib0clear(&___nl__17);
#line 78
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(824), ___nl__15, ___get_global_const(825), ___nl__16));
#line 78
c_rt_lib0clear(&___nl__15);
#line 78
c_rt_lib0clear(&___nl__16);
#line 78
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(6, ___get_global_const(1152), ___nl__10, ___get_global_const(195), ___nl__11, ___get_global_const(186), ___nl__12, ___get_global_const(1150), ___nl__8, ___get_global_const(1153), ___nl__13, ___get_global_const(1151), ___nl__14));
#line 78
c_rt_lib0clear(&___nl__10);
#line 78
c_rt_lib0clear(&___nl__11);
#line 78
c_rt_lib0clear(&___nl__12);
#line 78
c_rt_lib0clear(&___nl__13);
#line 78
c_rt_lib0clear(&___nl__14);
#line 80
c_rt_lib0delete(translator_priv0print_fun_def(___nl__3, &___nl__9));
#line 81
c_rt_lib0move(&___nl__10,___get_global_const(92));
#line 81
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__1, ___nl__10));
#line 81
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1153)));
#line 81
c_rt_lib0delete(array0push(&___nl__10, ___nl__11));
#line 81
c_rt_lib0clear(&___nl__11);
#line 81
c_rt_lib0move(&___nl__11,___get_global_const(92));
#line 81
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__11, ___nl__10));
#line 81
c_rt_lib0clear(&___nl__11);
#line 81
c_rt_lib0clear(&___nl__10);
#line 81
c_rt_lib0clear(&___nl__8);
#line 81
c_rt_lib0clear(&___nl__9);
#line 82
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 82
goto label_42;
#line 82
label_96:
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
c_rt_lib0clear(&___nl__0);
#line 83
return ___nl__1;
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
return NULL;
}

ImmT translator_priv0print_fun_def(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 87
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 87
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 87
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 87
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 87
label_4:
#line 87
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 87
if(c_rt_lib0check_true_native(___nl__7)){ goto label_59;}
#line 87
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 88
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(222)));
#line 88
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(41)));
#line 88
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 91
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(5)));
#line 91
if(c_rt_lib0check_true_native(___nl__9)){ goto label_35;}
#line 91
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 91
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 91
nl_die_arg(___nl__9);
#line 88
label_16:
#line 89
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 89
c_rt_lib0delete(translator_priv0new_declaration(___nl__10, ___ref___1));
#line 89
c_rt_lib0clear(&___nl__10);
#line 90
c_rt_lib0move(&___nl__10,___get_global_const(1153));
#line 90
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 90
c_rt_lib0move(&___nl__11,___get_global_const(188));
#line 90
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(198)));
#line 90
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 90
c_rt_lib0clear(&___nl__12);
#line 90
c_rt_lib0move(&___nl__12,___get_global_const(188));
#line 90
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 90
c_rt_lib0move(&___nl__12,___get_global_const(1153));
#line 90
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 90
c_rt_lib0clear(&___nl__12);
#line 90
c_rt_lib0clear(&___nl__10);
#line 90
c_rt_lib0clear(&___nl__11);
#line 91
goto label_54;
#line 91
label_35:
#line 92
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 92
c_rt_lib0delete(translator_priv0new_declaration(___nl__10, ___ref___1));
#line 92
c_rt_lib0clear(&___nl__10);
#line 93
c_rt_lib0move(&___nl__10,___get_global_const(1153));
#line 93
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 93
c_rt_lib0move(&___nl__11,___get_global_const(188));
#line 93
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 93
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 93
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 93
c_rt_lib0clear(&___nl__12);
#line 93
c_rt_lib0move(&___nl__12,___get_global_const(188));
#line 93
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 93
c_rt_lib0move(&___nl__12,___get_global_const(1153));
#line 93
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 93
c_rt_lib0clear(&___nl__12);
#line 93
c_rt_lib0clear(&___nl__10);
#line 93
c_rt_lib0clear(&___nl__11);
#line 94
goto label_54;
#line 94
label_54:
#line 94
c_rt_lib0clear(&___nl__8);
#line 94
c_rt_lib0clear(&___nl__9);
#line 95
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 95
goto label_4;
#line 95
label_59:
#line 95
c_rt_lib0clear(&___nl__2);
#line 95
c_rt_lib0clear(&___nl__3);
#line 95
c_rt_lib0clear(&___nl__4);
#line 95
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0clear(&___nl__6);
#line 95
c_rt_lib0clear(&___nl__7);
#line 96
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 96
c_rt_lib0delete(translator_priv0print_cmd(___nl__2, ___ref___1));
#line 96
c_rt_lib0clear(&___nl__2);
#line 97
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 97
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(195)));
#line 97
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(905)));
#line 97
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 97
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(195)));
#line 97
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(905)));
#line 97
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__4, ___get_global_const(905), ___nl__5));
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(830)));
#line 97
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__3, ___get_global_const(192), ___nl__4));
#line 97
c_rt_lib0clear(&___nl__3);
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
c_rt_lib0delete(translator_priv0print_return(___nl__2, ___ref___1));
#line 97
c_rt_lib0clear(&___nl__2);
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
return NULL;
}

ImmT translator_priv0print_array_declaration(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 102
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 103
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 103
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 103
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__0));
#line 103
label_4:
#line 103
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 103
if(c_rt_lib0check_true_native(___nl__8)){ goto label_13;}
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, ___nl__5));
#line 104
c_rt_lib0move(&___nl__9, translator_priv0calc_val(___nl__4, ___ref___2));
#line 104
c_rt_lib0delete(array0push(&___nl__3, ___nl__9));
#line 104
c_rt_lib0clear(&___nl__9);
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 105
goto label_4;
#line 105
label_13:
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
c_rt_lib0clear(&___nl__7);
#line 105
c_rt_lib0clear(&___nl__8);
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(197), ___nl__1, ___get_global_const(43), ___nl__3));
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(204), ___nl__4));
#line 106
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
c_rt_lib0clear(&___nl__3);
#line 106
c_rt_lib0clear(&___nl__0);
#line 106
c_rt_lib0clear(&___nl__1);
#line 106
return NULL;
}

ImmT translator_priv0print_hash_declaration(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
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
#line 111
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 112
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 112
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__0));
#line 112
label_4:
#line 112
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 112
if(c_rt_lib0check_true_native(___nl__8)){ goto label_21;}
#line 112
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, ___nl__5));
#line 113
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(329)));
#line 113
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(192)));
#line 113
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(855)));
#line 113
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 113
c_rt_lib0move(&___nl__11, translator_priv0calc_val(___nl__12, ___ref___2));
#line 113
c_rt_lib0clear(&___nl__12);
#line 113
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(329), ___nl__10, ___get_global_const(198), ___nl__11));
#line 113
c_rt_lib0clear(&___nl__10);
#line 113
c_rt_lib0clear(&___nl__11);
#line 113
c_rt_lib0delete(array0push(&___nl__3, ___nl__9));
#line 113
c_rt_lib0clear(&___nl__9);
#line 114
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 114
goto label_4;
#line 114
label_21:
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0clear(&___nl__5);
#line 114
c_rt_lib0clear(&___nl__6);
#line 114
c_rt_lib0clear(&___nl__7);
#line 114
c_rt_lib0clear(&___nl__8);
#line 115
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(197), ___nl__1, ___get_global_const(43), ___nl__3));
#line 115
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(205), ___nl__4));
#line 115
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 115
c_rt_lib0clear(&___nl__4);
#line 115
c_rt_lib0clear(&___nl__3);
#line 115
c_rt_lib0clear(&___nl__0);
#line 115
c_rt_lib0clear(&___nl__1);
#line 115
return NULL;
}

ImmT translator_priv0print_variant(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 119
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(288)));
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(830)));
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 120
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 121
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 121
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 121
c_rt_lib0clear(&___nl__6);
#line 121
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__5));
#line 121
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 121
c_rt_lib0clear(&___nl__5);
#line 122
goto label_14;
#line 122
label_14:
#line 122
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__1, ___get_global_const(43), ___nl__3, ___get_global_const(93), ___nl__5));
#line 123
c_rt_lib0clear(&___nl__5);
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(216), ___nl__4));
#line 123
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 123
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__0);
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
return NULL;
}

ImmT translator_priv0print_var_decl(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 127
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 127
c_rt_lib0move(&___nl__2, translator_priv0new_declaration(___nl__3, ___ref___1));
#line 127
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(41)));
#line 128
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(192)));
#line 129
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 129
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 129
nl_die_arg(___nl__4);
#line 128
label_11:
#line 129
goto label_18;
#line 129
label_13:
#line 129
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(192)));
#line 130
c_rt_lib0delete(translator_priv0print_val(___nl__5, ___nl__2, ___ref___1));
#line 130
c_rt_lib0clear(&___nl__5);
#line 131
goto label_18;
#line 131
label_18:
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0clear(&___nl__0);
#line 132
return ___nl__2;
#line 132
c_rt_lib0clear(&___nl__2);
#line 132
c_rt_lib0clear(&___nl__0);
#line 132
return NULL;
}

ImmT translator_priv0load_const(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
#line 136
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(197), ___nl__1, ___get_global_const(198), ___nl__0));
#line 136
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(199), ___nl__3));
#line 136
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 136
c_rt_lib0clear(&___nl__3);
#line 136
c_rt_lib0clear(&___nl__0);
#line 136
c_rt_lib0clear(&___nl__1);
#line 136
return NULL;
}

ImmT translator0ref_rec_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0ref_rec_args_t");
return translator0ref_rec_args_t();}
ImmT translator0ref_rec_args_t(){
return translator_priv0__const__sing(6);}
ImmT translator0ref_rec_args_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 140
c_rt_lib0move(&___nl__3, ptd0sim());
#line 140
c_rt_lib0move(&___nl__4, ptd0sim());
#line 140
c_rt_lib0move(&___nl__5, ptd0sim());
#line 140
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(1155), ___nl__3, ___get_global_const(1156), ___nl__4, ___get_global_const(1157), ___nl__5));
#line 140
c_rt_lib0clear(&___nl__3);
#line 140
c_rt_lib0clear(&___nl__4);
#line 140
c_rt_lib0clear(&___nl__5);
#line 140
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
return ___nl__0;
#line 140
c_rt_lib0clear(&___nl__0);
#line 140
return NULL;
}

ImmT translator_priv0print_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
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
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 145
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 146
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 147
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 148
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 148
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 148
c_rt_lib0clear(&___nl__8);
#line 148
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 148
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 148
c_rt_lib0clear(&___nl__8);
#line 148
label_10:
#line 148
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 148
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 148
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 148
if(c_rt_lib0check_true_native(___nl__8)){ goto label_58;}
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__7));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(222)));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(5)));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 149
if(c_rt_lib0check_true_native(___nl__9)){ goto label_25;}
#line 149
c_rt_lib0clear(&___nl__9);
#line 149
goto label_53;
#line 149
goto label_25;
#line 149
label_25:
#line 149
c_rt_lib0clear(&___nl__9);
#line 150
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 150
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__7));
#line 150
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 151
c_rt_lib0delete(translator_priv0get_struct_of_lvalue(&___nl__9));
#line 152
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(192)));
#line 152
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(848)));
#line 152
c_rt_lib0move(&___nl__10, hash0has_key(___nl__6, ___nl__11));
#line 152
c_rt_lib0clear(&___nl__11);
#line 152
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 152
if(c_rt_lib0check_true_native(___nl__10)){ goto label_41;}
#line 152
c_rt_lib0clear(&___nl__9);
#line 152
c_rt_lib0clear(&___nl__10);
#line 152
goto label_53;
#line 152
goto label_41;
#line 152
label_41:
#line 152
c_rt_lib0clear(&___nl__10);
#line 153
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(192)));
#line 153
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(848)));
#line 153
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 153
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__10, ___nl__11));
#line 153
c_rt_lib0clear(&___nl__11);
#line 153
c_rt_lib0clear(&___nl__10);
#line 154
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 154
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__10));
#line 154
c_rt_lib0clear(&___nl__10);
#line 154
c_rt_lib0clear(&___nl__9);
#line 154
label_53:
#line 148
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 148
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__9));
#line 148
c_rt_lib0clear(&___nl__9);
#line 155
goto label_10;
#line 155
label_58:
#line 155
c_rt_lib0clear(&___nl__7);
#line 155
c_rt_lib0clear(&___nl__8);
#line 156
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 157
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 157
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 157
c_rt_lib0clear(&___nl__9);
#line 157
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 157
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 157
label_67:
#line 157
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__9, ___nl__8));
#line 157
if(c_rt_lib0check_true_native(___nl__11)){ goto label_133;}
#line 158
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 158
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__12, ___nl__9));
#line 159
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(222)));
#line 159
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(41)));
#line 159
if(c_rt_lib0check_true_native(___nl__14)){ goto label_80;}
#line 161
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(5)));
#line 161
if(c_rt_lib0check_true_native(___nl__14)){ goto label_88;}
#line 161
c_rt_lib0move(&___nl__14,___get_global_const(91));
#line 161
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 161
nl_die_arg(___nl__14);
#line 159
label_80:
#line 160
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(198)));
#line 160
c_rt_lib0move(&___nl__15, translator_priv0calc_val(___nl__16, ___ref___2));
#line 160
c_rt_lib0clear(&___nl__16);
#line 160
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__15));
#line 160
c_rt_lib0delete(array0push(&___nl__3, ___nl__15));
#line 160
c_rt_lib0clear(&___nl__15);
#line 161
goto label_124;
#line 161
label_88:
#line 162
c_rt_lib0move(&___nl__15, hash0has_key(___nl__5, ___nl__9));
#line 162
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 162
if(c_rt_lib0check_true_native(___nl__15)){ goto label_111;}
#line 163
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(198)));
#line 163
c_rt_lib0move(&___nl__18, c_rt_lib0get_true());
#line 163
c_rt_lib0move(&___nl__16, translator_priv0get_value_of_lvalue(___nl__17, ___nl__18, ___ref___2));
#line 163
c_rt_lib0clear(&___nl__18);
#line 163
c_rt_lib0clear(&___nl__17);
#line 164
c_rt_lib0move(&___nl__18, array0len(___nl__16));
#line 164
c_rt_lib0move(&___nl__19,___get_global_const(1));
#line 164
c_rt_lib0move(&___nl__18, c_rt_lib0sub_mod(___nl__18, ___nl__19));
#line 164
c_rt_lib0clear(&___nl__19);
#line 164
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__16, ___nl__18));
#line 164
c_rt_lib0clear(&___nl__18);
#line 164
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__17, ___get_global_const(192)));
#line 165
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__17));
#line 165
c_rt_lib0delete(array0push(&___nl__3, ___nl__18));
#line 165
c_rt_lib0clear(&___nl__18);
#line 166
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__9, ___nl__16));
#line 166
c_rt_lib0clear(&___nl__16);
#line 166
c_rt_lib0clear(&___nl__17);
#line 167
goto label_121;
#line 167
label_111:
#line 168
c_rt_lib0move(&___nl__16, translator_priv0new_register(___ref___2));
#line 169
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(198)));
#line 169
c_rt_lib0delete(translator_priv0print_val(___nl__17, ___nl__16, ___ref___2));
#line 169
c_rt_lib0clear(&___nl__17);
#line 170
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 170
c_rt_lib0delete(array0push(&___nl__3, ___nl__17));
#line 170
c_rt_lib0clear(&___nl__17);
#line 170
c_rt_lib0clear(&___nl__16);
#line 171
goto label_121;
#line 171
label_121:
#line 171
c_rt_lib0clear(&___nl__15);
#line 172
goto label_124;
#line 172
label_124:
#line 172
c_rt_lib0clear(&___nl__13);
#line 172
c_rt_lib0clear(&___nl__14);
#line 173
c_rt_lib0move(&___nl__13, translator_priv0save_registers(___ref___2));
#line 173
c_rt_lib0delete(array0push(&___nl__7, ___nl__13));
#line 173
c_rt_lib0clear(&___nl__13);
#line 173
c_rt_lib0clear(&___nl__12);
#line 174
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 174
goto label_67;
#line 174
label_133:
#line 174
c_rt_lib0clear(&___nl__8);
#line 174
c_rt_lib0clear(&___nl__9);
#line 174
c_rt_lib0clear(&___nl__10);
#line 174
c_rt_lib0clear(&___nl__11);
#line 175
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 175
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 175
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(4, ___get_global_const(197), ___nl__1, ___get_global_const(222), ___nl__9, ___get_global_const(224), ___nl__10, ___get_global_const(89), ___nl__3));
#line 175
c_rt_lib0clear(&___nl__9);
#line 175
c_rt_lib0clear(&___nl__10);
#line 175
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(206), ___nl__8));
#line 175
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 175
c_rt_lib0clear(&___nl__8);
#line 176
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 176
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 176
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 176
c_rt_lib0clear(&___nl__9);
#line 176
label_150:
#line 176
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 176
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__8, ___nl__9));
#line 176
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 176
if(c_rt_lib0check_true_native(___nl__9)){ goto label_177;}
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 177
c_rt_lib0delete(translator_priv0restore_registers(___nl__10, ___ref___2));
#line 177
c_rt_lib0clear(&___nl__10);
#line 178
c_rt_lib0move(&___nl__10, hash0has_key(___nl__4, ___nl__8));
#line 178
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 178
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 178
if(c_rt_lib0check_true_native(___nl__10)){ goto label_165;}
#line 178
c_rt_lib0clear(&___nl__10);
#line 178
goto label_172;
#line 178
goto label_165;
#line 178
label_165:
#line 178
c_rt_lib0clear(&___nl__10);
#line 179
c_rt_lib0move(&___nl__10, hash0get_value(___nl__4, ___nl__8));
#line 179
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 179
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__10, ___nl__11, ___ref___2));
#line 179
c_rt_lib0clear(&___nl__11);
#line 179
c_rt_lib0clear(&___nl__10);
#line 179
label_172:
#line 176
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 176
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__10));
#line 176
c_rt_lib0clear(&___nl__10);
#line 180
goto label_150;
#line 180
label_177:
#line 180
c_rt_lib0clear(&___nl__8);
#line 180
c_rt_lib0clear(&___nl__9);
#line 180
c_rt_lib0clear(&___nl__3);
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0clear(&___nl__5);
#line 180
c_rt_lib0clear(&___nl__6);
#line 180
c_rt_lib0clear(&___nl__7);
#line 180
c_rt_lib0clear(&___nl__0);
#line 180
c_rt_lib0clear(&___nl__1);
#line 180
return NULL;
}

ImmT translator_priv0print_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 184
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 184
c_rt_lib0move(&___nl__4,___get_global_const(195));
#line 184
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 184
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 184
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(439), ___nl__5);
#line 184
c_rt_lib0move(&___nl__6,___get_global_const(195));
#line 184
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__6, ___nl__4));
#line 184
c_rt_lib0clear(&___nl__6);
#line 184
c_rt_lib0clear(&___nl__3);
#line 184
c_rt_lib0clear(&___nl__4);
#line 184
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 186
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 186
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(196)));
#line 186
if(c_rt_lib0check_true_native(___nl__5)){ goto label_50;}
#line 188
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(770)));
#line 188
if(c_rt_lib0check_true_native(___nl__5)){ goto label_57;}
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(853)));
#line 190
if(c_rt_lib0check_true_native(___nl__5)){ goto label_64;}
#line 192
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(855)));
#line 192
if(c_rt_lib0check_true_native(___nl__5)){ goto label_69;}
#line 194
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(840)));
#line 194
if(c_rt_lib0check_true_native(___nl__5)){ goto label_76;}
#line 196
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(848)));
#line 196
if(c_rt_lib0check_true_native(___nl__5)){ goto label_81;}
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(854)));
#line 198
if(c_rt_lib0check_true_native(___nl__5)){ goto label_86;}
#line 200
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(208)));
#line 200
if(c_rt_lib0check_true_native(___nl__5)){ goto label_91;}
#line 202
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(856)));
#line 202
if(c_rt_lib0check_true_native(___nl__5)){ goto label_96;}
#line 204
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(857)));
#line 204
if(c_rt_lib0check_true_native(___nl__5)){ goto label_101;}
#line 206
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(811)));
#line 206
if(c_rt_lib0check_true_native(___nl__5)){ goto label_106;}
#line 208
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(204)));
#line 208
if(c_rt_lib0check_true_native(___nl__5)){ goto label_111;}
#line 210
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(205)));
#line 210
if(c_rt_lib0check_true_native(___nl__5)){ goto label_116;}
#line 212
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(830)));
#line 212
if(c_rt_lib0check_true_native(___nl__5)){ goto label_121;}
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(858)));
#line 213
if(c_rt_lib0check_true_native(___nl__5)){ goto label_123;}
#line 215
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(859)));
#line 215
if(c_rt_lib0check_true_native(___nl__5)){ goto label_130;}
#line 217
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(860)));
#line 217
if(c_rt_lib0check_true_native(___nl__5)){ goto label_137;}
#line 217
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 217
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 217
nl_die_arg(___nl__5);
#line 186
label_50:
#line 186
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(196)));
#line 187
c_rt_lib0move(&___nl__7, translator_priv0convert_str_to_number(___nl__6));
#line 187
c_rt_lib0delete(translator_priv0load_const(___nl__7, ___nl__1, ___ref___2));
#line 187
c_rt_lib0clear(&___nl__7);
#line 187
c_rt_lib0clear(&___nl__6);
#line 188
goto label_144;
#line 188
label_57:
#line 188
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(770)));
#line 189
c_rt_lib0move(&___nl__7, translator_priv0make_string(___nl__6, ___ref___2));
#line 189
c_rt_lib0delete(translator_priv0load_const(___nl__7, ___nl__1, ___ref___2));
#line 189
c_rt_lib0clear(&___nl__7);
#line 189
c_rt_lib0clear(&___nl__6);
#line 190
goto label_144;
#line 190
label_64:
#line 190
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(853)));
#line 191
c_rt_lib0delete(translator_priv0print_ternary_op(___nl__6, ___nl__1, ___ref___2));
#line 191
c_rt_lib0clear(&___nl__6);
#line 192
goto label_144;
#line 192
label_69:
#line 192
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(855)));
#line 193
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 193
nl_die_arg(___nl__7);
#line 193
c_rt_lib0clear(&___nl__7);
#line 193
c_rt_lib0clear(&___nl__6);
#line 194
goto label_144;
#line 194
label_76:
#line 194
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(840)));
#line 195
c_rt_lib0delete(translator_priv0print_variant(___nl__6, ___nl__1, ___ref___2));
#line 195
c_rt_lib0clear(&___nl__6);
#line 196
goto label_144;
#line 196
label_81:
#line 196
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(848)));
#line 197
c_rt_lib0delete(translator_priv0print_variable(___nl__6, ___nl__1, ___ref___2));
#line 197
c_rt_lib0clear(&___nl__6);
#line 198
goto label_144;
#line 198
label_86:
#line 198
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(854)));
#line 199
c_rt_lib0delete(translator_priv0print_val(___nl__6, ___nl__1, ___ref___2));
#line 199
c_rt_lib0clear(&___nl__6);
#line 200
goto label_144;
#line 200
label_91:
#line 200
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(208)));
#line 201
c_rt_lib0delete(translator_priv0print_bin_op(___nl__6, ___nl__1, ___ref___2));
#line 201
c_rt_lib0clear(&___nl__6);
#line 202
goto label_144;
#line 202
label_96:
#line 202
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(856)));
#line 203
c_rt_lib0delete(translator_priv0print_var_op(___nl__6, ___nl__1, ___ref___2));
#line 203
c_rt_lib0clear(&___nl__6);
#line 204
goto label_144;
#line 204
label_101:
#line 204
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(857)));
#line 205
c_rt_lib0delete(translator_priv0print_unary_op(___nl__6, ___nl__1, ___ref___2));
#line 205
c_rt_lib0clear(&___nl__6);
#line 206
goto label_144;
#line 206
label_106:
#line 206
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(811)));
#line 207
c_rt_lib0delete(translator_priv0print_fun_val(___nl__6, ___nl__1, ___ref___2));
#line 207
c_rt_lib0clear(&___nl__6);
#line 208
goto label_144;
#line 208
label_111:
#line 208
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(204)));
#line 209
c_rt_lib0delete(translator_priv0print_array_declaration(___nl__6, ___nl__1, ___ref___2));
#line 209
c_rt_lib0clear(&___nl__6);
#line 210
goto label_144;
#line 210
label_116:
#line 210
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(205)));
#line 211
c_rt_lib0delete(translator_priv0print_hash_declaration(___nl__6, ___nl__1, ___ref___2));
#line 211
c_rt_lib0clear(&___nl__6);
#line 212
goto label_144;
#line 212
label_121:
#line 213
goto label_144;
#line 213
label_123:
#line 213
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(858)));
#line 214
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 214
nl_die_arg(___nl__7);
#line 214
c_rt_lib0clear(&___nl__7);
#line 214
c_rt_lib0clear(&___nl__6);
#line 215
goto label_144;
#line 215
label_130:
#line 215
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(859)));
#line 216
c_rt_lib0move(&___nl__7,___get_global_const(879));
#line 216
c_rt_lib0delete(translator_priv0print_post_operator(___nl__6, ___nl__7, ___nl__1, ___ref___2));
#line 216
c_rt_lib0clear(&___nl__7);
#line 216
c_rt_lib0clear(&___nl__6);
#line 217
goto label_144;
#line 217
label_137:
#line 217
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(860)));
#line 218
c_rt_lib0move(&___nl__7,___get_global_const(165));
#line 218
c_rt_lib0delete(translator_priv0print_post_operator(___nl__6, ___nl__7, ___nl__1, ___ref___2));
#line 218
c_rt_lib0clear(&___nl__7);
#line 218
c_rt_lib0clear(&___nl__6);
#line 219
goto label_144;
#line 219
label_144:
#line 219
c_rt_lib0clear(&___nl__4);
#line 219
c_rt_lib0clear(&___nl__5);
#line 220
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 220
c_rt_lib0clear(&___nl__3);
#line 220
c_rt_lib0clear(&___nl__0);
#line 220
c_rt_lib0clear(&___nl__1);
#line 220
return NULL;
}

ImmT translator_priv0print_variable(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
#line 224
c_rt_lib0move(&___nl__3, translator_priv0get_var_register(___nl__0, ___ref___2));
#line 224
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__3, ___ref___2));
#line 224
c_rt_lib0clear(&___nl__3);
#line 224
c_rt_lib0clear(&___nl__0);
#line 224
c_rt_lib0clear(&___nl__1);
#line 224
return NULL;
}

ImmT translator_priv0print_post_operator(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 229
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 229
c_rt_lib0move(&___nl__4, translator_priv0get_value_of_lvalue(___nl__0, ___nl__5, ___ref___3));
#line 229
c_rt_lib0clear(&___nl__5);
#line 230
c_rt_lib0move(&___nl__6, array0len(___nl__4));
#line 230
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 230
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 230
c_rt_lib0clear(&___nl__7);
#line 230
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 230
c_rt_lib0clear(&___nl__6);
#line 230
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(192)));
#line 231
c_rt_lib0delete(translator_priv0move(___nl__2, ___nl__5, ___ref___3));
#line 232
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 232
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 232
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(196), ___nl__9));
#line 232
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__8, ___get_global_const(192), ___nl__9));
#line 232
c_rt_lib0clear(&___nl__8);
#line 232
c_rt_lib0clear(&___nl__9);
#line 232
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___3));
#line 232
c_rt_lib0clear(&___nl__7);
#line 233
c_rt_lib0move(&___nl__7,___get_global_const(879));
#line 233
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__1, ___nl__7));
#line 233
if(c_rt_lib0check_true_native(___nl__7)){ goto label_24;}
#line 233
c_rt_lib0move(&___nl__7,___get_global_const(296));
#line 233
goto label_26;
#line 233
label_24:
#line 233
c_rt_lib0move(&___nl__7,___get_global_const(298));
#line 233
label_26:
#line 233
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__5, ___nl__5, ___nl__6, ___nl__7, ___ref___3));
#line 233
c_rt_lib0clear(&___nl__7);
#line 234
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 234
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__4, ___nl__7, ___ref___3));
#line 234
c_rt_lib0clear(&___nl__7);
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0clear(&___nl__0);
#line 234
c_rt_lib0clear(&___nl__1);
#line 234
c_rt_lib0clear(&___nl__2);
#line 234
return NULL;
}

ImmT translator_priv0print_unary_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 238
c_rt_lib0move(&___nl__4,___get_global_const(294));
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 238
c_rt_lib0clear(&___nl__4);
#line 238
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 238
c_rt_lib0move(&___nl__4,___get_global_const(296));
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 238
c_rt_lib0clear(&___nl__4);
#line 238
label_9:
#line 238
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 238
c_rt_lib0move(&___nl__4,___get_global_const(298));
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 238
c_rt_lib0clear(&___nl__4);
#line 238
label_15:
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 238
if(c_rt_lib0check_true_native(___nl__3)){ goto label_40;}
#line 239
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 239
if(c_rt_lib0check_true_native(___nl__4)){ goto label_28;}
#line 239
c_rt_lib0clear(&___nl__0);
#line 239
c_rt_lib0clear(&___nl__1);
#line 239
c_rt_lib0clear(&___nl__3);
#line 239
c_rt_lib0clear(&___nl__4);
#line 239
return NULL;
#line 239
goto label_28;
#line 239
label_28:
#line 239
c_rt_lib0clear(&___nl__4);
#line 240
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 240
c_rt_lib0delete(translator_priv0print_val(___nl__4, ___nl__1, ___ref___2));
#line 240
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 241
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__1, ___get_global_const(43), ___nl__1, ___get_global_const(443), ___nl__5));
#line 241
c_rt_lib0clear(&___nl__5);
#line 241
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(207), ___nl__4));
#line 241
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 241
c_rt_lib0clear(&___nl__4);
#line 242
goto label_139;
#line 242
label_40:
#line 242
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 242
c_rt_lib0move(&___nl__4,___get_global_const(879));
#line 242
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 242
c_rt_lib0clear(&___nl__4);
#line 242
if(c_rt_lib0check_true_native(___nl__3)){ goto label_50;}
#line 242
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 242
c_rt_lib0move(&___nl__4,___get_global_const(165));
#line 242
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 242
c_rt_lib0clear(&___nl__4);
#line 242
label_50:
#line 242
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 242
if(c_rt_lib0check_true_native(___nl__3)){ goto label_94;}
#line 243
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 243
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 243
c_rt_lib0move(&___nl__4, translator_priv0get_value_of_lvalue(___nl__5, ___nl__6, ___ref___2));
#line 243
c_rt_lib0clear(&___nl__6);
#line 243
c_rt_lib0clear(&___nl__5);
#line 244
c_rt_lib0move(&___nl__6, array0len(___nl__4));
#line 244
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 244
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 244
c_rt_lib0clear(&___nl__7);
#line 244
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 244
c_rt_lib0clear(&___nl__6);
#line 244
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(192)));
#line 245
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 245
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(195)));
#line 245
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 245
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(196), ___nl__9));
#line 245
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__8, ___get_global_const(192), ___nl__9));
#line 245
c_rt_lib0clear(&___nl__8);
#line 245
c_rt_lib0clear(&___nl__9);
#line 245
c_rt_lib0move(&___nl__6, translator_priv0dest_val(___nl__7, ___nl__1, ___ref___2));
#line 245
c_rt_lib0clear(&___nl__7);
#line 246
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 246
c_rt_lib0move(&___nl__8,___get_global_const(879));
#line 246
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 246
c_rt_lib0clear(&___nl__8);
#line 246
if(c_rt_lib0check_true_native(___nl__7)){ goto label_81;}
#line 246
c_rt_lib0move(&___nl__7,___get_global_const(296));
#line 246
goto label_83;
#line 246
label_81:
#line 246
c_rt_lib0move(&___nl__7,___get_global_const(298));
#line 246
label_83:
#line 246
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__5, ___nl__5, ___nl__6, ___nl__7, ___ref___2));
#line 246
c_rt_lib0clear(&___nl__7);
#line 247
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 248
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 248
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__4, ___nl__7, ___ref___2));
#line 248
c_rt_lib0clear(&___nl__7);
#line 248
c_rt_lib0clear(&___nl__4);
#line 248
c_rt_lib0clear(&___nl__5);
#line 248
c_rt_lib0clear(&___nl__6);
#line 249
goto label_139;
#line 249
label_94:
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 249
c_rt_lib0move(&___nl__4,___get_global_const(267));
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 249
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 249
if(c_rt_lib0check_true_native(___nl__3)){ goto label_134;}
#line 250
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 250
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 250
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 250
if(c_rt_lib0check_true_native(___nl__4)){ goto label_111;}
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
c_rt_lib0clear(&___nl__4);
#line 250
return NULL;
#line 250
goto label_111;
#line 250
label_111:
#line 250
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(858)));
#line 252
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(132)));
#line 252
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 252
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__1, ___get_global_const(132), ___nl__6, ___get_global_const(93), ___nl__7));
#line 252
c_rt_lib0clear(&___nl__6);
#line 252
c_rt_lib0clear(&___nl__7);
#line 252
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(88), ___nl__5));
#line 252
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__5));
#line 252
c_rt_lib0clear(&___nl__5);
#line 253
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__1));
#line 253
c_rt_lib0move(&___nl__7,___get_global_const(5));
#line 253
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__1, ___get_global_const(43), ___nl__6, ___get_global_const(93), ___nl__7));
#line 253
c_rt_lib0clear(&___nl__6);
#line 253
c_rt_lib0clear(&___nl__7);
#line 253
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(216), ___nl__5));
#line 253
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__5));
#line 253
c_rt_lib0clear(&___nl__5);
#line 253
c_rt_lib0clear(&___nl__4);
#line 254
goto label_139;
#line 254
label_134:
#line 255
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 255
nl_die_arg(___nl__4);
#line 255
c_rt_lib0clear(&___nl__4);
#line 256
goto label_139;
#line 256
label_139:
#line 256
c_rt_lib0clear(&___nl__3);
#line 256
c_rt_lib0clear(&___nl__0);
#line 256
c_rt_lib0clear(&___nl__1);
#line 256
return NULL;
}

ImmT translator_priv0print_var_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 260
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 260
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 260
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 260
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 260
c_rt_lib0clear(&___nl__0);
#line 260
c_rt_lib0clear(&___nl__1);
#line 260
c_rt_lib0clear(&___nl__3);
#line 260
return NULL;
#line 260
goto label_9;
#line 260
label_9:
#line 260
c_rt_lib0clear(&___nl__3);
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 261
c_rt_lib0delete(translator_priv0print_val(___nl__3, ___nl__1, ___ref___2));
#line 261
c_rt_lib0clear(&___nl__3);
#line 263
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 263
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(209)));
#line 263
if(c_rt_lib0check_true_native(___nl__5)){ goto label_22;}
#line 265
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(210)));
#line 265
if(c_rt_lib0check_true_native(___nl__5)){ goto label_30;}
#line 265
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 265
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 265
nl_die_arg(___nl__5);
#line 263
label_22:
#line 264
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(901)));
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__1, ___get_global_const(43), ___nl__1, ___get_global_const(63), ___nl__7));
#line 264
c_rt_lib0clear(&___nl__7);
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(209), ___nl__6));
#line 264
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 264
c_rt_lib0clear(&___nl__6);
#line 265
goto label_38;
#line 265
label_30:
#line 266
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(901)));
#line 266
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__1, ___get_global_const(43), ___nl__1, ___get_global_const(63), ___nl__7));
#line 266
c_rt_lib0clear(&___nl__7);
#line 266
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(210), ___nl__6));
#line 266
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 266
c_rt_lib0clear(&___nl__6);
#line 267
goto label_38;
#line 267
label_38:
#line 267
c_rt_lib0clear(&___nl__4);
#line 267
c_rt_lib0clear(&___nl__5);
#line 268
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 268
c_rt_lib0clear(&___nl__3);
#line 268
c_rt_lib0clear(&___nl__0);
#line 268
c_rt_lib0clear(&___nl__1);
#line 268
return NULL;
}

ImmT translator_priv0print_bin_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 272
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 272
c_rt_lib0move(&___nl__4,___get_global_const(864));
#line 272
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 272
if(c_rt_lib0check_true_native(___nl__3)){ goto label_30;}
#line 273
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 273
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 273
c_rt_lib0clear(&___nl__5);
#line 274
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 274
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 274
c_rt_lib0move(&___nl__5, translator_priv0get_value_of_lvalue(___nl__6, ___nl__7, ___ref___2));
#line 274
c_rt_lib0clear(&___nl__7);
#line 274
c_rt_lib0clear(&___nl__6);
#line 275
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 275
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 275
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 275
c_rt_lib0clear(&___nl__8);
#line 275
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 275
c_rt_lib0clear(&___nl__7);
#line 275
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(192)));
#line 276
c_rt_lib0delete(translator_priv0move(___nl__6, ___nl__4, ___ref___2));
#line 277
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__6, ___ref___2));
#line 278
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 278
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__5, ___nl__7, ___ref___2));
#line 278
c_rt_lib0clear(&___nl__7);
#line 278
c_rt_lib0clear(&___nl__4);
#line 278
c_rt_lib0clear(&___nl__5);
#line 278
c_rt_lib0clear(&___nl__6);
#line 279
goto label_272;
#line 279
label_30:
#line 279
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 279
c_rt_lib0move(&___nl__4,___get_global_const(893));
#line 279
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 279
if(c_rt_lib0check_true_native(___nl__3)){ goto label_59;}
#line 281
c_rt_lib0move(&___nl__5,___get_global_const(1158));
#line 282
c_rt_lib0move(&___nl__6,___get_global_const(225));
#line 283
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 283
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 283
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(198), ___nl__9, ___get_global_const(222), ___nl__10));
#line 283
c_rt_lib0clear(&___nl__9);
#line 283
c_rt_lib0clear(&___nl__10);
#line 283
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 283
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 283
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(198), ___nl__10, ___get_global_const(222), ___nl__11));
#line 283
c_rt_lib0clear(&___nl__10);
#line 283
c_rt_lib0clear(&___nl__11);
#line 283
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 283
c_rt_lib0clear(&___nl__8);
#line 283
c_rt_lib0clear(&___nl__9);
#line 283
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__5, ___get_global_const(132), ___nl__6, ___get_global_const(89), ___nl__7));
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0clear(&___nl__6);
#line 283
c_rt_lib0clear(&___nl__7);
#line 283
c_rt_lib0delete(translator_priv0print_fun_val(___nl__4, ___nl__1, ___ref___2));
#line 283
c_rt_lib0clear(&___nl__4);
#line 285
goto label_272;
#line 285
label_59:
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 285
c_rt_lib0move(&___nl__4,___get_global_const(850));
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 285
c_rt_lib0clear(&___nl__4);
#line 285
if(c_rt_lib0check_true_native(___nl__3)){ goto label_69;}
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 285
c_rt_lib0move(&___nl__4,___get_global_const(851));
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 285
c_rt_lib0clear(&___nl__4);
#line 285
label_69:
#line 285
if(c_rt_lib0check_true_native(___nl__3)){ goto label_75;}
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 285
c_rt_lib0move(&___nl__4,___get_global_const(849));
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 285
c_rt_lib0clear(&___nl__4);
#line 285
label_75:
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 285
if(c_rt_lib0check_true_native(___nl__3)){ goto label_125;}
#line 286
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 286
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 286
c_rt_lib0clear(&___nl__5);
#line 287
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 287
c_rt_lib0move(&___nl__6,___get_global_const(850));
#line 287
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 287
c_rt_lib0clear(&___nl__6);
#line 287
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 287
if(c_rt_lib0check_true_native(___nl__5)){ goto label_93;}
#line 288
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 288
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___2));
#line 288
c_rt_lib0clear(&___nl__7);
#line 289
c_rt_lib0delete(translator_priv0print_get_from_index(___nl__1, ___nl__4, ___nl__6, ___ref___2));
#line 289
c_rt_lib0clear(&___nl__6);
#line 290
goto label_121;
#line 290
label_93:
#line 290
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 290
c_rt_lib0move(&___nl__6,___get_global_const(851));
#line 290
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 290
c_rt_lib0clear(&___nl__6);
#line 290
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 290
if(c_rt_lib0check_true_native(___nl__5)){ goto label_114;}
#line 291
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 291
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___2));
#line 291
c_rt_lib0clear(&___nl__7);
#line 292
c_rt_lib0move(&___nl__7,___get_global_const(602));
#line 292
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__4));
#line 292
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__6));
#line 292
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__9, ___nl__10));
#line 292
c_rt_lib0clear(&___nl__9);
#line 292
c_rt_lib0clear(&___nl__10);
#line 292
c_rt_lib0delete(translator_priv0print_call_base(___nl__1, ___nl__7, ___nl__8, ___ref___2));
#line 292
c_rt_lib0clear(&___nl__8);
#line 292
c_rt_lib0clear(&___nl__7);
#line 292
c_rt_lib0clear(&___nl__6);
#line 293
goto label_121;
#line 293
label_114:
#line 294
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 294
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 294
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(855)));
#line 294
c_rt_lib0delete(translator_priv0print_get_value(___nl__1, ___nl__4, ___nl__6, ___ref___2));
#line 294
c_rt_lib0clear(&___nl__6);
#line 295
goto label_121;
#line 295
label_121:
#line 295
c_rt_lib0clear(&___nl__5);
#line 295
c_rt_lib0clear(&___nl__4);
#line 296
goto label_272;
#line 296
label_125:
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 296
c_rt_lib0move(&___nl__4,___get_global_const(865));
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 296
c_rt_lib0clear(&___nl__4);
#line 296
if(c_rt_lib0check_true_native(___nl__3)){ goto label_135;}
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 296
c_rt_lib0move(&___nl__4,___get_global_const(866));
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 296
c_rt_lib0clear(&___nl__4);
#line 296
label_135:
#line 296
if(c_rt_lib0check_true_native(___nl__3)){ goto label_141;}
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 296
c_rt_lib0move(&___nl__4,___get_global_const(868));
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 296
c_rt_lib0clear(&___nl__4);
#line 296
label_141:
#line 296
if(c_rt_lib0check_true_native(___nl__3)){ goto label_147;}
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 296
c_rt_lib0move(&___nl__4,___get_global_const(867));
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 296
c_rt_lib0clear(&___nl__4);
#line 296
label_147:
#line 296
if(c_rt_lib0check_true_native(___nl__3)){ goto label_153;}
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 296
c_rt_lib0move(&___nl__4,___get_global_const(869));
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 296
c_rt_lib0clear(&___nl__4);
#line 296
label_153:
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 296
if(c_rt_lib0check_true_native(___nl__3)){ goto label_182;}
#line 297
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 297
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___2));
#line 297
c_rt_lib0clear(&___nl__5);
#line 298
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 298
c_rt_lib0move(&___nl__5, translator_priv0get_value_of_lvalue(___nl__6, ___nl__7, ___ref___2));
#line 298
c_rt_lib0clear(&___nl__7);
#line 298
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 299
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 299
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 299
c_rt_lib0clear(&___nl__8);
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 299
c_rt_lib0clear(&___nl__7);
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(192)));
#line 300
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 300
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__6, ___nl__6, ___nl__4, ___nl__7, ___ref___2));
#line 300
c_rt_lib0clear(&___nl__7);
#line 301
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__6, ___ref___2));
#line 302
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 302
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__5, ___nl__7, ___ref___2));
#line 302
c_rt_lib0clear(&___nl__7);
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
c_rt_lib0clear(&___nl__5);
#line 302
c_rt_lib0clear(&___nl__6);
#line 303
goto label_272;
#line 303
label_182:
#line 303
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 303
c_rt_lib0move(&___nl__4,___get_global_const(773));
#line 303
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 303
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 303
if(c_rt_lib0check_true_native(___nl__3)){ goto label_209;}
#line 304
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 305
c_rt_lib0move(&___nl__5, translator_priv0new_register(___ref___2));
#line 306
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 306
c_rt_lib0move(&___nl__6, translator_priv0def_val(___nl__7, ___nl__1, ___nl__5, ___ref___2));
#line 306
c_rt_lib0clear(&___nl__7);
#line 307
c_rt_lib0move(&___nl__8,___get_global_const(294));
#line 307
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__5, ___get_global_const(43), ___nl__6, ___get_global_const(443), ___nl__8));
#line 307
c_rt_lib0clear(&___nl__8);
#line 307
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(207), ___nl__7));
#line 307
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__7));
#line 307
c_rt_lib0clear(&___nl__7);
#line 308
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 309
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 309
c_rt_lib0delete(translator_priv0def_val(___nl__7, ___nl__1, ___nl__5, ___ref___2));
#line 309
c_rt_lib0clear(&___nl__7);
#line 310
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 310
c_rt_lib0clear(&___nl__4);
#line 310
c_rt_lib0clear(&___nl__5);
#line 310
c_rt_lib0clear(&___nl__6);
#line 311
goto label_272;
#line 311
label_209:
#line 311
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 311
c_rt_lib0move(&___nl__4,___get_global_const(774));
#line 311
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 311
c_rt_lib0clear(&___nl__4);
#line 311
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 311
if(c_rt_lib0check_true_native(___nl__3)){ goto label_244;}
#line 312
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 313
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 313
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 313
c_rt_lib0clear(&___nl__6);
#line 314
c_rt_lib0move(&___nl__6, c_rt_lib0ne(___nl__1, ___nl__5));
#line 314
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 314
if(c_rt_lib0check_true_native(___nl__6)){ goto label_225;}
#line 314
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 314
goto label_225;
#line 314
label_225:
#line 314
c_rt_lib0clear(&___nl__6);
#line 315
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 316
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 316
c_rt_lib0move(&___nl__6, translator_priv0dest_val(___nl__7, ___nl__1, ___ref___2));
#line 316
c_rt_lib0clear(&___nl__7);
#line 316
c_rt_lib0copy(&___nl__5, ___nl__6);
#line 316
c_rt_lib0clear(&___nl__6);
#line 317
c_rt_lib0move(&___nl__6, c_rt_lib0ne(___nl__5, ___nl__1));
#line 317
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 317
if(c_rt_lib0check_true_native(___nl__6)){ goto label_238;}
#line 317
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 317
goto label_238;
#line 317
label_238:
#line 317
c_rt_lib0clear(&___nl__6);
#line 318
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 318
c_rt_lib0clear(&___nl__4);
#line 318
c_rt_lib0clear(&___nl__5);
#line 319
goto label_272;
#line 319
label_244:
#line 320
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 320
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 320
c_rt_lib0clear(&___nl__5);
#line 322
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__1));
#line 322
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 322
if(c_rt_lib0check_true_native(___nl__6)){ goto label_257;}
#line 323
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 323
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___2));
#line 323
c_rt_lib0clear(&___nl__8);
#line 323
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 323
c_rt_lib0clear(&___nl__7);
#line 324
goto label_264;
#line 324
label_257:
#line 325
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 325
c_rt_lib0move(&___nl__7, translator_priv0dest_val(___nl__8, ___nl__1, ___ref___2));
#line 325
c_rt_lib0clear(&___nl__8);
#line 325
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 325
c_rt_lib0clear(&___nl__7);
#line 326
goto label_264;
#line 326
label_264:
#line 326
c_rt_lib0clear(&___nl__6);
#line 327
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 327
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__1, ___nl__4, ___nl__5, ___nl__6, ___ref___2));
#line 327
c_rt_lib0clear(&___nl__6);
#line 327
c_rt_lib0clear(&___nl__4);
#line 327
c_rt_lib0clear(&___nl__5);
#line 328
goto label_272;
#line 328
label_272:
#line 328
c_rt_lib0clear(&___nl__3);
#line 328
c_rt_lib0clear(&___nl__0);
#line 328
c_rt_lib0clear(&___nl__1);
#line 328
return NULL;
}

ImmT translator_priv0print_cmd_array(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 332
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 333
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 333
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 333
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__0));
#line 333
label_4:
#line 333
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 333
if(c_rt_lib0check_true_native(___nl__7)){ goto label_11;}
#line 333
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 334
c_rt_lib0delete(translator_priv0print_cmd(___nl__3, ___ref___1));
#line 335
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 335
goto label_4;
#line 335
label_11:
#line 335
c_rt_lib0clear(&___nl__3);
#line 335
c_rt_lib0clear(&___nl__4);
#line 335
c_rt_lib0clear(&___nl__5);
#line 335
c_rt_lib0clear(&___nl__6);
#line 335
c_rt_lib0clear(&___nl__7);
#line 336
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 336
c_rt_lib0clear(&___nl__2);
#line 336
c_rt_lib0clear(&___nl__0);
#line 336
return NULL;
}

ImmT translator_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
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
#line 340
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(845)));
#line 340
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 342
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(846)));
#line 342
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 343
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(847)));
#line 343
if(c_rt_lib0check_true_native(___nl__3)){ goto label_26;}
#line 343
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 343
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 343
nl_die_arg(___nl__3);
#line 340
label_9:
#line 340
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(845)));
#line 341
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 341
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 341
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 341
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(192), ___nl__8));
#line 341
c_rt_lib0clear(&___nl__6);
#line 341
c_rt_lib0clear(&___nl__7);
#line 341
c_rt_lib0clear(&___nl__8);
#line 341
c_rt_lib0delete(translator_priv0print_var_decl(___nl__5, ___ref___2));
#line 341
c_rt_lib0clear(&___nl__5);
#line 341
c_rt_lib0clear(&___nl__4);
#line 342
goto label_30;
#line 342
label_22:
#line 342
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(846)));
#line 342
c_rt_lib0clear(&___nl__4);
#line 343
goto label_30;
#line 343
label_26:
#line 343
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(847)));
#line 343
c_rt_lib0clear(&___nl__4);
#line 344
goto label_30;
#line 344
label_30:
#line 344
c_rt_lib0clear(&___nl__3);
#line 345
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 346
c_rt_lib0move(&___nl__4, translator_priv0new_register(___ref___2));
#line 348
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(845)));
#line 348
if(c_rt_lib0check_true_native(___nl__6)){ goto label_43;}
#line 353
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(846)));
#line 353
if(c_rt_lib0check_true_native(___nl__6)){ goto label_67;}
#line 355
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(847)));
#line 355
if(c_rt_lib0check_true_native(___nl__6)){ goto label_76;}
#line 355
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 355
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__0));
#line 355
nl_die_arg(___nl__6);
#line 348
label_43:
#line 348
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(845)));
#line 349
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(192)));
#line 349
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(192)));
#line 349
if(c_rt_lib0check_true_native(___nl__9)){ goto label_53;}
#line 351
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(41)));
#line 351
if(c_rt_lib0check_true_native(___nl__9)){ goto label_60;}
#line 351
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 351
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 351
nl_die_arg(___nl__9);
#line 349
label_53:
#line 349
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(192)));
#line 350
c_rt_lib0move(&___nl__11, translator_priv0calc_val(___nl__10, ___ref___2));
#line 350
c_rt_lib0copy(&___nl__5, ___nl__11);
#line 350
c_rt_lib0clear(&___nl__11);
#line 350
c_rt_lib0clear(&___nl__10);
#line 351
goto label_62;
#line 351
label_60:
#line 352
goto label_62;
#line 352
label_62:
#line 352
c_rt_lib0clear(&___nl__8);
#line 352
c_rt_lib0clear(&___nl__9);
#line 352
c_rt_lib0clear(&___nl__7);
#line 353
goto label_83;
#line 353
label_67:
#line 353
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(846)));
#line 354
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(231)));
#line 354
c_rt_lib0move(&___nl__8, translator_priv0calc_val(___nl__9, ___ref___2));
#line 354
c_rt_lib0clear(&___nl__9);
#line 354
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 354
c_rt_lib0clear(&___nl__8);
#line 354
c_rt_lib0clear(&___nl__7);
#line 355
goto label_83;
#line 355
label_76:
#line 355
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(847)));
#line 356
c_rt_lib0move(&___nl__8, translator_priv0calc_val(___nl__7, ___ref___2));
#line 356
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 356
c_rt_lib0clear(&___nl__8);
#line 356
c_rt_lib0clear(&___nl__7);
#line 357
goto label_83;
#line 357
label_83:
#line 357
c_rt_lib0clear(&___nl__6);
#line 358
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___2));
#line 359
c_rt_lib0move(&___nl__8,___get_global_const(48));
#line 359
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__4, ___get_global_const(43), ___nl__5, ___get_global_const(63), ___nl__8));
#line 359
c_rt_lib0clear(&___nl__8);
#line 359
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(209), ___nl__7));
#line 359
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__7));
#line 359
c_rt_lib0clear(&___nl__7);
#line 360
c_rt_lib0delete(translator_priv0print_if_goto(___nl__6, ___nl__4, ___ref___2));
#line 361
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 361
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 361
if(c_rt_lib0check_true_native(___nl__7)){ goto label_100;}
#line 362
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__5));
#line 362
c_rt_lib0delete(translator_priv0print_safe_return(___nl__8, ___ref___2));
#line 362
c_rt_lib0clear(&___nl__8);
#line 363
goto label_113;
#line 363
label_100:
#line 364
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__5));
#line 364
c_rt_lib0move(&___nl__10,___get_global_const(95));
#line 364
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__5, ___get_global_const(43), ___nl__9, ___get_global_const(93), ___nl__10));
#line 364
c_rt_lib0clear(&___nl__9);
#line 364
c_rt_lib0clear(&___nl__10);
#line 364
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(216), ___nl__8));
#line 364
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 364
c_rt_lib0clear(&___nl__8);
#line 365
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(217), ___nl__5));
#line 365
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 365
c_rt_lib0clear(&___nl__8);
#line 366
goto label_113;
#line 366
label_113:
#line 366
c_rt_lib0clear(&___nl__7);
#line 367
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___2));
#line 368
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(845)));
#line 368
if(c_rt_lib0check_true_native(___nl__7)){ goto label_125;}
#line 370
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(846)));
#line 370
if(c_rt_lib0check_true_native(___nl__7)){ goto label_139;}
#line 375
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(847)));
#line 375
if(c_rt_lib0check_true_native(___nl__7)){ goto label_166;}
#line 375
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 375
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__0));
#line 375
nl_die_arg(___nl__7);
#line 368
label_125:
#line 368
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(845)));
#line 369
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(93)));
#line 369
c_rt_lib0move(&___nl__10, translator_priv0get_var_register(___nl__11, ___ref___2));
#line 369
c_rt_lib0clear(&___nl__11);
#line 369
c_rt_lib0move(&___nl__11,___get_global_const(48));
#line 369
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__10, ___get_global_const(43), ___nl__5, ___get_global_const(63), ___nl__11));
#line 369
c_rt_lib0clear(&___nl__10);
#line 369
c_rt_lib0clear(&___nl__11);
#line 369
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(210), ___nl__9));
#line 369
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__9));
#line 369
c_rt_lib0clear(&___nl__9);
#line 369
c_rt_lib0clear(&___nl__8);
#line 370
goto label_170;
#line 370
label_139:
#line 370
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(846)));
#line 371
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(230)));
#line 371
c_rt_lib0move(&___nl__11, c_rt_lib0get_false());
#line 371
c_rt_lib0move(&___nl__9, translator_priv0get_value_of_lvalue(___nl__10, ___nl__11, ___ref___2));
#line 371
c_rt_lib0clear(&___nl__11);
#line 371
c_rt_lib0clear(&___nl__10);
#line 372
c_rt_lib0move(&___nl__11, array0len(___nl__9));
#line 372
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 372
c_rt_lib0move(&___nl__11, c_rt_lib0sub_mod(___nl__11, ___nl__12));
#line 372
c_rt_lib0clear(&___nl__12);
#line 372
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__9, ___nl__11));
#line 372
c_rt_lib0clear(&___nl__11);
#line 372
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(192)));
#line 373
c_rt_lib0move(&___nl__12,___get_global_const(48));
#line 373
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__10, ___get_global_const(43), ___nl__5, ___get_global_const(63), ___nl__12));
#line 373
c_rt_lib0clear(&___nl__12);
#line 373
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(210), ___nl__11));
#line 373
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__11));
#line 373
c_rt_lib0clear(&___nl__11);
#line 374
c_rt_lib0move(&___nl__11, c_rt_lib0get_false());
#line 374
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__9, ___nl__11, ___ref___2));
#line 374
c_rt_lib0clear(&___nl__11);
#line 374
c_rt_lib0clear(&___nl__9);
#line 374
c_rt_lib0clear(&___nl__10);
#line 374
c_rt_lib0clear(&___nl__8);
#line 375
goto label_170;
#line 375
label_166:
#line 375
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(847)));
#line 375
c_rt_lib0clear(&___nl__8);
#line 376
goto label_170;
#line 376
label_170:
#line 376
c_rt_lib0clear(&___nl__7);
#line 377
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 377
c_rt_lib0clear(&___nl__3);
#line 377
c_rt_lib0clear(&___nl__4);
#line 377
c_rt_lib0clear(&___nl__5);
#line 377
c_rt_lib0clear(&___nl__6);
#line 377
c_rt_lib0clear(&___nl__0);
#line 377
c_rt_lib0clear(&___nl__1);
#line 377
return NULL;
}

ImmT translator_priv0start_new_instruction(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 381
c_rt_lib0move(&___nl__2,___get_global_const(195));
#line 381
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 381
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 381
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(439), ___nl__3);
#line 381
c_rt_lib0move(&___nl__4,___get_global_const(195));
#line 381
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__4, ___nl__2));
#line 381
c_rt_lib0clear(&___nl__4);
#line 381
c_rt_lib0clear(&___nl__2);
#line 381
c_rt_lib0clear(&___nl__3);
#line 382
c_rt_lib0move(&___nl__2,___get_global_const(195));
#line 382
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 382
c_rt_lib0move(&___nl__3,___get_global_const(691));
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(___nl__2, ___nl__3));
#line 382
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 382
c_rt_lib0move(&___nl__5,___get_global_const(691));
#line 382
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__2, ___nl__5, ___nl__3));
#line 382
c_rt_lib0move(&___nl__5,___get_global_const(195));
#line 382
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__2));
#line 382
c_rt_lib0clear(&___nl__5);
#line 382
c_rt_lib0clear(&___nl__2);
#line 382
c_rt_lib0clear(&___nl__3);
#line 382
c_rt_lib0clear(&___nl__4);
#line 382
c_rt_lib0clear(&___nl__0);
#line 382
return NULL;
}

ImmT translator_priv0print_cmd(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 386
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 386
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__2, ___ref___1));
#line 386
c_rt_lib0clear(&___nl__2);
#line 387
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 387
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(816)));
#line 387
if(c_rt_lib0check_true_native(___nl__3)){ goto label_47;}
#line 389
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(818)));
#line 389
if(c_rt_lib0check_true_native(___nl__3)){ goto label_54;}
#line 391
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(140)));
#line 391
if(c_rt_lib0check_true_native(___nl__3)){ goto label_59;}
#line 393
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(820)));
#line 393
if(c_rt_lib0check_true_native(___nl__3)){ goto label_64;}
#line 395
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(819)));
#line 395
if(c_rt_lib0check_true_native(___nl__3)){ goto label_69;}
#line 397
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(821)));
#line 397
if(c_rt_lib0check_true_native(___nl__3)){ goto label_74;}
#line 399
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(817)));
#line 399
if(c_rt_lib0check_true_native(___nl__3)){ goto label_79;}
#line 401
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(830)));
#line 401
if(c_rt_lib0check_true_native(___nl__3)){ goto label_84;}
#line 402
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(192)));
#line 402
if(c_rt_lib0check_true_native(___nl__3)){ goto label_86;}
#line 404
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(827)));
#line 404
if(c_rt_lib0check_true_native(___nl__3)){ goto label_93;}
#line 406
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(90)));
#line 406
if(c_rt_lib0check_true_native(___nl__3)){ goto label_98;}
#line 408
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(826)));
#line 408
if(c_rt_lib0check_true_native(___nl__3)){ goto label_103;}
#line 410
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(829)));
#line 410
if(c_rt_lib0check_true_native(___nl__3)){ goto label_108;}
#line 412
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(95)));
#line 412
if(c_rt_lib0check_true_native(___nl__3)){ goto label_115;}
#line 414
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(824)));
#line 414
if(c_rt_lib0check_true_native(___nl__3)){ goto label_122;}
#line 416
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(825)));
#line 416
if(c_rt_lib0check_true_native(___nl__3)){ goto label_128;}
#line 418
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(217)));
#line 418
if(c_rt_lib0check_true_native(___nl__3)){ goto label_134;}
#line 420
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(828)));
#line 420
if(c_rt_lib0check_true_native(___nl__3)){ goto label_141;}
#line 422
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(822)));
#line 422
if(c_rt_lib0check_true_native(___nl__3)){ goto label_146;}
#line 424
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(823)));
#line 424
if(c_rt_lib0check_true_native(___nl__3)){ goto label_151;}
#line 424
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 424
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 424
nl_die_arg(___nl__3);
#line 387
label_47:
#line 387
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(816)));
#line 388
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 388
c_rt_lib0delete(translator_priv0print_if(___nl__4, ___nl__5, ___ref___1));
#line 388
c_rt_lib0clear(&___nl__5);
#line 388
c_rt_lib0clear(&___nl__4);
#line 389
goto label_156;
#line 389
label_54:
#line 389
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(818)));
#line 390
c_rt_lib0delete(translator_priv0print_fora(___nl__4, ___ref___1));
#line 390
c_rt_lib0clear(&___nl__4);
#line 391
goto label_156;
#line 391
label_59:
#line 391
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(140)));
#line 392
c_rt_lib0delete(translator_priv0print_loop(___nl__4, ___ref___1));
#line 392
c_rt_lib0clear(&___nl__4);
#line 393
goto label_156;
#line 393
label_64:
#line 393
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(820)));
#line 394
c_rt_lib0delete(translator_priv0print_rep(___nl__4, ___ref___1));
#line 394
c_rt_lib0clear(&___nl__4);
#line 395
goto label_156;
#line 395
label_69:
#line 395
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(819)));
#line 396
c_rt_lib0delete(translator_priv0print_forh(___nl__4, ___ref___1));
#line 396
c_rt_lib0clear(&___nl__4);
#line 397
goto label_156;
#line 397
label_74:
#line 397
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(821)));
#line 398
c_rt_lib0delete(translator_priv0print_while(___nl__4, ___ref___1));
#line 398
c_rt_lib0clear(&___nl__4);
#line 399
goto label_156;
#line 399
label_79:
#line 399
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(817)));
#line 400
c_rt_lib0delete(translator_priv0print_for(___nl__4, ___ref___1));
#line 400
c_rt_lib0clear(&___nl__4);
#line 401
goto label_156;
#line 401
label_84:
#line 402
goto label_156;
#line 402
label_86:
#line 402
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(192)));
#line 403
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 403
c_rt_lib0delete(translator_priv0print_val(___nl__4, ___nl__5, ___ref___1));
#line 403
c_rt_lib0clear(&___nl__5);
#line 403
c_rt_lib0clear(&___nl__4);
#line 404
goto label_156;
#line 404
label_93:
#line 404
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(827)));
#line 405
c_rt_lib0delete(translator_priv0print_cmd_array(___nl__4, ___ref___1));
#line 405
c_rt_lib0clear(&___nl__4);
#line 406
goto label_156;
#line 406
label_98:
#line 406
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(90)));
#line 407
c_rt_lib0delete(translator_priv0print_return(___nl__4, ___ref___1));
#line 407
c_rt_lib0clear(&___nl__4);
#line 408
goto label_156;
#line 408
label_103:
#line 408
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(826)));
#line 409
c_rt_lib0delete(translator_priv0print_match(___nl__4, ___ref___1));
#line 409
c_rt_lib0clear(&___nl__4);
#line 410
goto label_156;
#line 410
label_108:
#line 410
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(829)));
#line 411
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 411
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__4, ___nl__5, ___ref___1));
#line 411
c_rt_lib0clear(&___nl__5);
#line 411
c_rt_lib0clear(&___nl__4);
#line 412
goto label_156;
#line 412
label_115:
#line 412
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(95)));
#line 413
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 413
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__4, ___nl__5, ___ref___1));
#line 413
c_rt_lib0clear(&___nl__5);
#line 413
c_rt_lib0clear(&___nl__4);
#line 414
goto label_156;
#line 414
label_122:
#line 415
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1151)));
#line 415
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(824)));
#line 415
c_rt_lib0delete(translator_priv0print_loop_break(___ref___1, ___nl__4));
#line 415
c_rt_lib0clear(&___nl__4);
#line 416
goto label_156;
#line 416
label_128:
#line 417
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1151)));
#line 417
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(825)));
#line 417
c_rt_lib0delete(translator_priv0print_loop_break(___ref___1, ___nl__4));
#line 417
c_rt_lib0clear(&___nl__4);
#line 418
goto label_156;
#line 418
label_134:
#line 418
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(217)));
#line 419
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 419
c_rt_lib0delete(translator_priv0print_die(___nl__4, ___nl__5, ___ref___1));
#line 419
c_rt_lib0clear(&___nl__5);
#line 419
c_rt_lib0clear(&___nl__4);
#line 420
goto label_156;
#line 420
label_141:
#line 420
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(828)));
#line 421
c_rt_lib0delete(translator_priv0print_var_decl(___nl__4, ___ref___1));
#line 421
c_rt_lib0clear(&___nl__4);
#line 422
goto label_156;
#line 422
label_146:
#line 422
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(822)));
#line 423
c_rt_lib0delete(translator_priv0print_if_mod(___nl__4, ___ref___1));
#line 423
c_rt_lib0clear(&___nl__4);
#line 424
goto label_156;
#line 424
label_151:
#line 424
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(823)));
#line 425
c_rt_lib0delete(translator_priv0print_unless_mod(___nl__4, ___ref___1));
#line 425
c_rt_lib0clear(&___nl__4);
#line 426
goto label_156;
#line 426
label_156:
#line 426
c_rt_lib0clear(&___nl__2);
#line 426
c_rt_lib0clear(&___nl__3);
#line 426
c_rt_lib0clear(&___nl__0);
#line 426
return NULL;
}

ImmT translator_priv0print_loop_break(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 430
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1150)));
#line 430
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1146)));
#line 430
label_2:
#line 430
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1150)));
#line 430
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1146)));
#line 430
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 430
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 430
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 431
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(273), ___get_global_const(938)));
#line 431
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 431
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__2));
#line 431
c_rt_lib0clear(&___nl__5);
#line 431
c_rt_lib0delete(translator_priv0undef_reg(___nl__4, ___ref___0));
#line 431
c_rt_lib0clear(&___nl__4);
#line 430
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 430
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 430
c_rt_lib0clear(&___nl__4);
#line 432
goto label_2;
#line 432
label_18:
#line 432
c_rt_lib0clear(&___nl__2);
#line 432
c_rt_lib0clear(&___nl__3);
#line 433
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1149)));
#line 433
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__2));
#line 433
c_rt_lib0delete(translator_priv0print(___ref___0, ___nl__2));
#line 433
c_rt_lib0clear(&___nl__2);
#line 433
c_rt_lib0clear(&___nl__1);
#line 433
return NULL;
}

ImmT translator_priv0print_if_mod(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 438
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(831)));
#line 439
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 440
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 441
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 441
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(195)));
#line 441
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(830)));
#line 441
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__7, ___get_global_const(201), ___nl__8));
#line 441
c_rt_lib0clear(&___nl__7);
#line 441
c_rt_lib0clear(&___nl__8);
#line 441
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(831), ___nl__3, ___get_global_const(816), ___nl__4, ___get_global_const(832), ___nl__5, ___get_global_const(833), ___nl__6));
#line 441
c_rt_lib0clear(&___nl__3);
#line 441
c_rt_lib0clear(&___nl__4);
#line 441
c_rt_lib0clear(&___nl__5);
#line 441
c_rt_lib0clear(&___nl__6);
#line 443
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 443
c_rt_lib0delete(translator_priv0print_if(___nl__2, ___nl__3, ___ref___1));
#line 443
c_rt_lib0clear(&___nl__3);
#line 443
c_rt_lib0clear(&___nl__2);
#line 443
c_rt_lib0clear(&___nl__0);
#line 443
return NULL;
}

ImmT translator_priv0print_unless_mod(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 449
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(831)));
#line 449
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(195)));
#line 451
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(831)));
#line 451
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(195)));
#line 452
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(831)));
#line 452
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(854), ___nl__8));
#line 452
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__7, ___get_global_const(192), ___nl__8));
#line 452
c_rt_lib0clear(&___nl__7);
#line 452
c_rt_lib0clear(&___nl__8);
#line 453
c_rt_lib0move(&___nl__7,___get_global_const(294));
#line 453
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(198), ___nl__6, ___get_global_const(443), ___nl__7));
#line 453
c_rt_lib0clear(&___nl__6);
#line 453
c_rt_lib0clear(&___nl__7);
#line 453
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(857), ___nl__5));
#line 453
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__4, ___get_global_const(192), ___nl__5));
#line 453
c_rt_lib0clear(&___nl__4);
#line 453
c_rt_lib0clear(&___nl__5);
#line 454
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 455
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 456
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 456
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(195)));
#line 456
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(830)));
#line 456
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__7, ___get_global_const(201), ___nl__8));
#line 456
c_rt_lib0clear(&___nl__7);
#line 456
c_rt_lib0clear(&___nl__8);
#line 456
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(831), ___nl__3, ___get_global_const(816), ___nl__4, ___get_global_const(832), ___nl__5, ___get_global_const(833), ___nl__6));
#line 456
c_rt_lib0clear(&___nl__3);
#line 456
c_rt_lib0clear(&___nl__4);
#line 456
c_rt_lib0clear(&___nl__5);
#line 456
c_rt_lib0clear(&___nl__6);
#line 458
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 458
c_rt_lib0delete(translator_priv0print_if(___nl__2, ___nl__3, ___ref___1));
#line 458
c_rt_lib0clear(&___nl__3);
#line 458
c_rt_lib0clear(&___nl__2);
#line 458
c_rt_lib0clear(&___nl__0);
#line 458
return NULL;
}

ImmT translator_priv0print_if(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
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
#line 462
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 463
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 464
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___2));
#line 465
c_rt_lib0move(&___nl__6, translator_priv0new_register(___ref___2));
#line 466
c_rt_lib0move(&___nl__7, translator_priv0save_registers(___ref___2));
#line 467
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(831)));
#line 467
c_rt_lib0delete(translator_priv0print_val(___nl__8, ___nl__6, ___ref___2));
#line 467
c_rt_lib0clear(&___nl__8);
#line 468
c_rt_lib0move(&___nl__9,___get_global_const(294));
#line 468
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__6, ___get_global_const(43), ___nl__6, ___get_global_const(443), ___nl__9));
#line 468
c_rt_lib0clear(&___nl__9);
#line 468
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(207), ___nl__8));
#line 468
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 468
c_rt_lib0clear(&___nl__8);
#line 469
c_rt_lib0delete(translator_priv0restore_registers(___nl__7, ___ref___2));
#line 470
c_rt_lib0delete(translator_priv0print_if_goto(___nl__5, ___nl__6, ___ref___2));
#line 471
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(816)));
#line 471
c_rt_lib0delete(translator_priv0print_cmd(___nl__8, ___ref___2));
#line 471
c_rt_lib0clear(&___nl__8);
#line 472
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 472
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 472
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 472
if(c_rt_lib0check_true_native(___nl__8)){ goto label_30;}
#line 472
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(816)));
#line 472
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(195)));
#line 472
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__10));
#line 472
c_rt_lib0clear(&___nl__10);
#line 472
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___2));
#line 472
c_rt_lib0clear(&___nl__9);
#line 472
goto label_30;
#line 472
label_30:
#line 472
c_rt_lib0clear(&___nl__8);
#line 473
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__4));
#line 473
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 473
c_rt_lib0clear(&___nl__8);
#line 474
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___2));
#line 475
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(832)));
#line 475
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 475
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 475
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 475
label_40:
#line 475
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 475
if(c_rt_lib0check_true_native(___nl__13)){ goto label_76;}
#line 475
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 476
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(195)));
#line 476
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___2));
#line 476
c_rt_lib0clear(&___nl__14);
#line 477
c_rt_lib0move(&___nl__14, translator_priv0get_sim_label(___ref___2));
#line 477
c_rt_lib0copy(&___nl__5, ___nl__14);
#line 477
c_rt_lib0clear(&___nl__14);
#line 478
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(831)));
#line 478
c_rt_lib0delete(translator_priv0print_val(___nl__14, ___nl__6, ___ref___2));
#line 478
c_rt_lib0clear(&___nl__14);
#line 479
c_rt_lib0move(&___nl__15,___get_global_const(294));
#line 479
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__6, ___get_global_const(43), ___nl__6, ___get_global_const(443), ___nl__15));
#line 479
c_rt_lib0clear(&___nl__15);
#line 479
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(207), ___nl__14));
#line 479
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__14));
#line 479
c_rt_lib0clear(&___nl__14);
#line 480
c_rt_lib0delete(translator_priv0restore_registers(___nl__7, ___ref___2));
#line 481
c_rt_lib0delete(translator_priv0print_if_goto(___nl__5, ___nl__6, ___ref___2));
#line 482
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(201)));
#line 482
c_rt_lib0delete(translator_priv0print_cmd(___nl__14, ___ref___2));
#line 482
c_rt_lib0clear(&___nl__14);
#line 483
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(201)));
#line 483
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(195)));
#line 483
c_rt_lib0move(&___nl__14, translator0last_debug_char(___nl__15));
#line 483
c_rt_lib0clear(&___nl__15);
#line 483
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___2));
#line 483
c_rt_lib0clear(&___nl__14);
#line 484
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__4));
#line 484
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__14));
#line 484
c_rt_lib0clear(&___nl__14);
#line 485
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___2));
#line 486
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 486
goto label_40;
#line 486
label_76:
#line 486
c_rt_lib0clear(&___nl__8);
#line 486
c_rt_lib0clear(&___nl__9);
#line 486
c_rt_lib0clear(&___nl__10);
#line 486
c_rt_lib0clear(&___nl__11);
#line 486
c_rt_lib0clear(&___nl__12);
#line 486
c_rt_lib0clear(&___nl__13);
#line 487
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(833)));
#line 487
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(201)));
#line 487
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(830)));
#line 487
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 487
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 487
if(c_rt_lib0check_true_native(___nl__8)){ goto label_102;}
#line 488
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(833)));
#line 488
c_rt_lib0delete(translator_priv0print_cmd(___nl__9, ___ref___2));
#line 488
c_rt_lib0clear(&___nl__9);
#line 489
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(833)));
#line 489
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(195)));
#line 489
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__10));
#line 489
c_rt_lib0clear(&___nl__10);
#line 489
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___2));
#line 489
c_rt_lib0clear(&___nl__9);
#line 490
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__4));
#line 490
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__9));
#line 490
c_rt_lib0clear(&___nl__9);
#line 491
goto label_102;
#line 491
label_102:
#line 491
c_rt_lib0clear(&___nl__8);
#line 492
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 493
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 493
c_rt_lib0clear(&___nl__3);
#line 493
c_rt_lib0clear(&___nl__4);
#line 493
c_rt_lib0clear(&___nl__5);
#line 493
c_rt_lib0clear(&___nl__6);
#line 493
c_rt_lib0clear(&___nl__7);
#line 493
c_rt_lib0clear(&___nl__0);
#line 493
c_rt_lib0clear(&___nl__1);
#line 493
return NULL;
}

ImmT translator_priv0print_call_base(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 500
c_rt_lib0move(&___nl__5,___get_global_const(225));
#line 500
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(4, ___get_global_const(197), ___nl__0, ___get_global_const(222), ___nl__5, ___get_global_const(224), ___nl__1, ___get_global_const(89), ___nl__2));
#line 500
c_rt_lib0clear(&___nl__5);
#line 500
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(206), ___nl__4));
#line 500
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 500
c_rt_lib0clear(&___nl__4);
#line 500
c_rt_lib0clear(&___nl__0);
#line 500
c_rt_lib0clear(&___nl__1);
#line 500
c_rt_lib0clear(&___nl__2);
#line 500
return NULL;
}

ImmT translator_priv0save_loop_break(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 504
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1151)));
#line 505
c_rt_lib0move(&___nl__4, translator_priv0save_registers(___ref___0));
#line 506
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1149), ___nl__1, ___get_global_const(1150), ___nl__4));
#line 506
c_rt_lib0move(&___nl__6,___get_global_const(1151));
#line 506
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 506
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 506
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(824), ___nl__7);
#line 506
c_rt_lib0move(&___nl__8,___get_global_const(1151));
#line 506
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__6));
#line 506
c_rt_lib0clear(&___nl__8);
#line 506
c_rt_lib0clear(&___nl__5);
#line 506
c_rt_lib0clear(&___nl__6);
#line 506
c_rt_lib0clear(&___nl__7);
#line 507
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1149), ___nl__2, ___get_global_const(1150), ___nl__4));
#line 507
c_rt_lib0move(&___nl__6,___get_global_const(1151));
#line 507
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 507
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 507
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(825), ___nl__7);
#line 507
c_rt_lib0move(&___nl__8,___get_global_const(1151));
#line 507
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__6));
#line 507
c_rt_lib0clear(&___nl__8);
#line 507
c_rt_lib0clear(&___nl__5);
#line 507
c_rt_lib0clear(&___nl__6);
#line 507
c_rt_lib0clear(&___nl__7);
#line 508
c_rt_lib0clear(&___nl__1);
#line 508
c_rt_lib0clear(&___nl__2);
#line 508
c_rt_lib0clear(&___nl__4);
#line 508
return ___nl__3;
#line 508
c_rt_lib0clear(&___nl__3);
#line 508
c_rt_lib0clear(&___nl__4);
#line 508
c_rt_lib0clear(&___nl__1);
#line 508
c_rt_lib0clear(&___nl__2);
#line 508
return NULL;
}

ImmT translator_priv0print_fora(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 512
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(195)));
#line 512
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(439)));
#line 513
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___1));
#line 514
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(3)));
#line 514
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___1));
#line 514
c_rt_lib0clear(&___nl__5);
#line 515
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(835)));
#line 515
c_rt_lib0move(&___nl__5, translator_priv0print_var_decl(___nl__6, ___ref___1));
#line 515
c_rt_lib0clear(&___nl__6);
#line 516
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 517
c_rt_lib0move(&___nl__7, translator_priv0get_sim_label(___ref___1));
#line 518
c_rt_lib0move(&___nl__8, translator_priv0get_sim_label(___ref___1));
#line 519
c_rt_lib0move(&___nl__9, translator_priv0new_register(___ref___1));
#line 520
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 520
c_rt_lib0delete(translator_priv0load_const(___nl__10, ___nl__9, ___ref___1));
#line 520
c_rt_lib0clear(&___nl__10);
#line 521
c_rt_lib0move(&___nl__10, translator_priv0new_register(___ref___1));
#line 522
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 522
c_rt_lib0delete(translator_priv0load_const(___nl__11, ___nl__10, ___ref___1));
#line 522
c_rt_lib0clear(&___nl__11);
#line 523
c_rt_lib0move(&___nl__11, translator_priv0new_register(___ref___1));
#line 524
c_rt_lib0move(&___nl__12,___get_global_const(1159));
#line 524
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__4));
#line 524
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(1, ___nl__14));
#line 524
c_rt_lib0clear(&___nl__14);
#line 524
c_rt_lib0delete(translator_priv0print_call_base(___nl__11, ___nl__12, ___nl__13, ___ref___1));
#line 524
c_rt_lib0clear(&___nl__13);
#line 524
c_rt_lib0clear(&___nl__12);
#line 525
c_rt_lib0move(&___nl__12, translator_priv0new_register(___ref___1));
#line 526
c_rt_lib0delete(translator_priv0print_sim_label(___nl__8, ___ref___1));
#line 527
c_rt_lib0move(&___nl__13,___get_global_const(318));
#line 527
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__12, ___nl__9, ___nl__11, ___nl__13, ___ref___1));
#line 527
c_rt_lib0clear(&___nl__13);
#line 528
c_rt_lib0delete(translator_priv0print_if_goto(___nl__6, ___nl__12, ___ref___1));
#line 529
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__5, ___get_global_const(43), ___nl__4, ___get_global_const(232), ___nl__9));
#line 529
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(212), ___nl__13));
#line 529
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__13));
#line 529
c_rt_lib0clear(&___nl__13);
#line 530
c_rt_lib0move(&___nl__13, translator_priv0save_loop_break(___ref___1, ___nl__6, ___nl__7));
#line 531
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 531
c_rt_lib0delete(translator_priv0print_cmd(___nl__14, ___ref___1));
#line 531
c_rt_lib0clear(&___nl__14);
#line 532
c_rt_lib0delete(translator_priv0print_sim_label(___nl__7, ___ref___1));
#line 533
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(918)));
#line 533
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 533
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 533
if(c_rt_lib0check_true_native(___nl__14)){ goto label_51;}
#line 533
c_rt_lib0move(&___nl__15, translator0last_debug_char(___nl__2));
#line 533
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__15, ___ref___1));
#line 533
c_rt_lib0clear(&___nl__15);
#line 533
goto label_51;
#line 533
label_51:
#line 533
c_rt_lib0clear(&___nl__14);
#line 534
c_rt_lib0move(&___nl__15,___get_global_const(298));
#line 534
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(4, ___get_global_const(197), ___nl__9, ___get_global_const(230), ___nl__9, ___get_global_const(231), ___nl__10, ___get_global_const(443), ___nl__15));
#line 534
c_rt_lib0clear(&___nl__15);
#line 534
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(208), ___nl__14));
#line 534
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__14));
#line 534
c_rt_lib0clear(&___nl__14);
#line 535
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__8));
#line 535
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__14));
#line 535
c_rt_lib0clear(&___nl__14);
#line 536
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 537
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 537
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1151), ___nl__14);
#line 537
c_rt_lib0clear(&___nl__14);
#line 538
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___1));
#line 538
c_rt_lib0clear(&___nl__2);
#line 538
c_rt_lib0clear(&___nl__3);
#line 538
c_rt_lib0clear(&___nl__4);
#line 538
c_rt_lib0clear(&___nl__5);
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
#line 538
c_rt_lib0clear(&___nl__11);
#line 538
c_rt_lib0clear(&___nl__12);
#line 538
c_rt_lib0clear(&___nl__13);
#line 538
c_rt_lib0clear(&___nl__0);
#line 538
return NULL;
}

ImmT translator_priv0print_loop(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 542
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 543
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 544
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 545
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 546
c_rt_lib0move(&___nl__5, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 547
c_rt_lib0delete(translator_priv0print_cmd(___nl__0, ___ref___1));
#line 548
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 548
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__6, ___ref___1));
#line 548
c_rt_lib0clear(&___nl__6);
#line 549
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__4));
#line 549
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__6));
#line 549
c_rt_lib0clear(&___nl__6);
#line 550
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 551
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 551
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1151), ___nl__6);
#line 551
c_rt_lib0clear(&___nl__6);
#line 552
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 552
c_rt_lib0clear(&___nl__2);
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

ImmT translator_priv0print_rep(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 556
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 557
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 558
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 559
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 560
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(836)));
#line 560
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___1));
#line 560
c_rt_lib0clear(&___nl__7);
#line 561
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(835)));
#line 561
c_rt_lib0move(&___nl__7, translator_priv0print_var_decl(___nl__8, ___ref___1));
#line 561
c_rt_lib0clear(&___nl__8);
#line 562
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 562
c_rt_lib0delete(translator_priv0load_const(___nl__8, ___nl__7, ___ref___1));
#line 562
c_rt_lib0clear(&___nl__8);
#line 563
c_rt_lib0move(&___nl__8, translator_priv0new_register(___ref___1));
#line 564
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 564
c_rt_lib0delete(translator_priv0load_const(___nl__9, ___nl__8, ___ref___1));
#line 564
c_rt_lib0clear(&___nl__9);
#line 565
c_rt_lib0move(&___nl__9, translator_priv0new_register(___ref___1));
#line 566
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 567
c_rt_lib0move(&___nl__10,___get_global_const(318));
#line 567
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__9, ___nl__7, ___nl__6, ___nl__10, ___ref___1));
#line 567
c_rt_lib0clear(&___nl__10);
#line 568
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__9, ___ref___1));
#line 569
c_rt_lib0move(&___nl__10, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 570
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 570
c_rt_lib0delete(translator_priv0print_cmd(___nl__11, ___ref___1));
#line 570
c_rt_lib0clear(&___nl__11);
#line 571
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 572
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(918)));
#line 572
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 572
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 572
if(c_rt_lib0check_true_native(___nl__11)){ goto label_39;}
#line 572
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 572
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(195)));
#line 572
c_rt_lib0move(&___nl__12, translator0last_debug_char(___nl__13));
#line 572
c_rt_lib0clear(&___nl__13);
#line 572
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__12, ___ref___1));
#line 572
c_rt_lib0clear(&___nl__12);
#line 572
goto label_39;
#line 572
label_39:
#line 572
c_rt_lib0clear(&___nl__11);
#line 573
c_rt_lib0move(&___nl__12,___get_global_const(298));
#line 573
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(4, ___get_global_const(197), ___nl__7, ___get_global_const(230), ___nl__7, ___get_global_const(231), ___nl__8, ___get_global_const(443), ___nl__12));
#line 573
c_rt_lib0clear(&___nl__12);
#line 573
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(208), ___nl__11));
#line 573
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__11));
#line 573
c_rt_lib0clear(&___nl__11);
#line 574
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__5));
#line 574
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__11));
#line 574
c_rt_lib0clear(&___nl__11);
#line 575
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 576
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 576
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1151), ___nl__11);
#line 576
c_rt_lib0clear(&___nl__11);
#line 577
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 577
c_rt_lib0clear(&___nl__2);
#line 577
c_rt_lib0clear(&___nl__3);
#line 577
c_rt_lib0clear(&___nl__4);
#line 577
c_rt_lib0clear(&___nl__5);
#line 577
c_rt_lib0clear(&___nl__6);
#line 577
c_rt_lib0clear(&___nl__7);
#line 577
c_rt_lib0clear(&___nl__8);
#line 577
c_rt_lib0clear(&___nl__9);
#line 577
c_rt_lib0clear(&___nl__10);
#line 577
c_rt_lib0clear(&___nl__0);
#line 577
return NULL;
}

ImmT translator_priv0print_forh(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 581
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(195)));
#line 581
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(439)));
#line 582
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___1));
#line 583
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 584
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 585
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 586
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(328)));
#line 586
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___1));
#line 586
c_rt_lib0clear(&___nl__8);
#line 587
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 587
c_rt_lib0move(&___nl__8, translator_priv0print_var_decl(___nl__9, ___ref___1));
#line 587
c_rt_lib0clear(&___nl__9);
#line 588
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 588
c_rt_lib0move(&___nl__9, translator_priv0print_var_decl(___nl__10, ___ref___1));
#line 588
c_rt_lib0clear(&___nl__10);
#line 589
c_rt_lib0move(&___nl__10, translator_priv0new_register(___ref___1));
#line 590
c_rt_lib0move(&___nl__11,___get_global_const(226));
#line 590
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__7));
#line 590
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 590
c_rt_lib0clear(&___nl__13);
#line 590
c_rt_lib0delete(translator_priv0print_call_base(___nl__10, ___nl__11, ___nl__12, ___ref___1));
#line 590
c_rt_lib0clear(&___nl__12);
#line 590
c_rt_lib0clear(&___nl__11);
#line 591
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 592
c_rt_lib0move(&___nl__11,___get_global_const(227));
#line 592
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__10));
#line 592
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 592
c_rt_lib0clear(&___nl__13);
#line 592
c_rt_lib0delete(translator_priv0print_call_base(___nl__8, ___nl__11, ___nl__12, ___ref___1));
#line 592
c_rt_lib0clear(&___nl__12);
#line 592
c_rt_lib0clear(&___nl__11);
#line 593
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__8, ___ref___1));
#line 594
c_rt_lib0move(&___nl__11,___get_global_const(228));
#line 594
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__10));
#line 594
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 594
c_rt_lib0clear(&___nl__13);
#line 594
c_rt_lib0delete(translator_priv0print_call_base(___nl__8, ___nl__11, ___nl__12, ___ref___1));
#line 594
c_rt_lib0clear(&___nl__12);
#line 594
c_rt_lib0clear(&___nl__11);
#line 595
c_rt_lib0move(&___nl__11,___get_global_const(602));
#line 595
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__7));
#line 595
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__8));
#line 595
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 595
c_rt_lib0clear(&___nl__13);
#line 595
c_rt_lib0clear(&___nl__14);
#line 595
c_rt_lib0delete(translator_priv0print_call_base(___nl__9, ___nl__11, ___nl__12, ___ref___1));
#line 595
c_rt_lib0clear(&___nl__12);
#line 595
c_rt_lib0clear(&___nl__11);
#line 596
c_rt_lib0move(&___nl__11, translator_priv0save_loop_break(___ref___1, ___nl__4, ___nl__5));
#line 597
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 597
c_rt_lib0delete(translator_priv0print_cmd(___nl__12, ___ref___1));
#line 597
c_rt_lib0clear(&___nl__12);
#line 598
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 599
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(918)));
#line 599
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 599
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 599
if(c_rt_lib0check_true_native(___nl__12)){ goto label_61;}
#line 599
c_rt_lib0move(&___nl__13, translator0last_debug_char(___nl__2));
#line 599
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__13, ___ref___1));
#line 599
c_rt_lib0clear(&___nl__13);
#line 599
goto label_61;
#line 599
label_61:
#line 599
c_rt_lib0clear(&___nl__12);
#line 600
c_rt_lib0move(&___nl__12,___get_global_const(229));
#line 600
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__10));
#line 600
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(1, ___nl__14));
#line 600
c_rt_lib0clear(&___nl__14);
#line 600
c_rt_lib0delete(translator_priv0print_call_base(___nl__10, ___nl__12, ___nl__13, ___ref___1));
#line 600
c_rt_lib0clear(&___nl__13);
#line 600
c_rt_lib0clear(&___nl__12);
#line 601
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__6));
#line 601
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__12));
#line 601
c_rt_lib0clear(&___nl__12);
#line 602
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 603
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 603
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1151), ___nl__12);
#line 603
c_rt_lib0clear(&___nl__12);
#line 604
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___1));
#line 604
c_rt_lib0clear(&___nl__2);
#line 604
c_rt_lib0clear(&___nl__3);
#line 604
c_rt_lib0clear(&___nl__4);
#line 604
c_rt_lib0clear(&___nl__5);
#line 604
c_rt_lib0clear(&___nl__6);
#line 604
c_rt_lib0clear(&___nl__7);
#line 604
c_rt_lib0clear(&___nl__8);
#line 604
c_rt_lib0clear(&___nl__9);
#line 604
c_rt_lib0clear(&___nl__10);
#line 604
c_rt_lib0clear(&___nl__11);
#line 604
c_rt_lib0clear(&___nl__0);
#line 604
return NULL;
}

ImmT translator_priv0print_while(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 608
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 609
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 610
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 611
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(195)));
#line 611
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(439)));
#line 612
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 613
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(831)));
#line 613
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___1));
#line 613
c_rt_lib0clear(&___nl__7);
#line 614
c_rt_lib0move(&___nl__8,___get_global_const(294));
#line 614
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__6, ___get_global_const(43), ___nl__6, ___get_global_const(443), ___nl__8));
#line 614
c_rt_lib0clear(&___nl__8);
#line 614
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(207), ___nl__7));
#line 614
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 614
c_rt_lib0clear(&___nl__7);
#line 615
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__6, ___ref___1));
#line 616
c_rt_lib0move(&___nl__7, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 617
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 617
c_rt_lib0delete(translator_priv0print_cmd(___nl__8, ___ref___1));
#line 617
c_rt_lib0clear(&___nl__8);
#line 618
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(918)));
#line 618
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 618
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 618
if(c_rt_lib0check_true_native(___nl__8)){ goto label_28;}
#line 618
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__5));
#line 618
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___1));
#line 618
c_rt_lib0clear(&___nl__9);
#line 618
goto label_28;
#line 618
label_28:
#line 618
c_rt_lib0clear(&___nl__8);
#line 619
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__4));
#line 619
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__8));
#line 619
c_rt_lib0clear(&___nl__8);
#line 620
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 621
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 621
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1151), ___nl__8);
#line 621
c_rt_lib0clear(&___nl__8);
#line 622
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 622
c_rt_lib0clear(&___nl__2);
#line 622
c_rt_lib0clear(&___nl__3);
#line 622
c_rt_lib0clear(&___nl__4);
#line 622
c_rt_lib0clear(&___nl__5);
#line 622
c_rt_lib0clear(&___nl__6);
#line 622
c_rt_lib0clear(&___nl__7);
#line 622
c_rt_lib0clear(&___nl__0);
#line 622
return NULL;
}

ImmT translator_priv0print_for(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 626
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 627
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 628
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 629
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 630
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(834)));
#line 630
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(192)));
#line 630
if(c_rt_lib0check_true_native(___nl__7)){ goto label_12;}
#line 632
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(828)));
#line 632
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 632
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 632
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 632
nl_die_arg(___nl__7);
#line 630
label_12:
#line 630
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(192)));
#line 631
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 631
c_rt_lib0delete(translator_priv0print_val(___nl__8, ___nl__9, ___ref___1));
#line 631
c_rt_lib0clear(&___nl__9);
#line 631
c_rt_lib0clear(&___nl__8);
#line 632
goto label_24;
#line 632
label_19:
#line 632
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(828)));
#line 633
c_rt_lib0delete(translator_priv0print_var_decl(___nl__8, ___ref___1));
#line 633
c_rt_lib0clear(&___nl__8);
#line 634
goto label_24;
#line 634
label_24:
#line 634
c_rt_lib0clear(&___nl__6);
#line 634
c_rt_lib0clear(&___nl__7);
#line 635
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 636
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(831)));
#line 636
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 636
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(830)));
#line 636
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 636
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 636
if(c_rt_lib0check_true_native(___nl__6)){ goto label_46;}
#line 637
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(831)));
#line 637
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___1));
#line 637
c_rt_lib0clear(&___nl__8);
#line 638
c_rt_lib0move(&___nl__9,___get_global_const(294));
#line 638
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__7, ___get_global_const(43), ___nl__7, ___get_global_const(443), ___nl__9));
#line 638
c_rt_lib0clear(&___nl__9);
#line 638
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(207), ___nl__8));
#line 638
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__8));
#line 638
c_rt_lib0clear(&___nl__8);
#line 639
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__7, ___ref___1));
#line 639
c_rt_lib0clear(&___nl__7);
#line 640
goto label_46;
#line 640
label_46:
#line 640
c_rt_lib0clear(&___nl__6);
#line 641
c_rt_lib0move(&___nl__6, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__5));
#line 642
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 642
c_rt_lib0delete(translator_priv0print_cmd(___nl__7, ___ref___1));
#line 642
c_rt_lib0clear(&___nl__7);
#line 643
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 644
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(835)));
#line 644
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 644
c_rt_lib0delete(translator_priv0print_val(___nl__7, ___nl__8, ___ref___1));
#line 644
c_rt_lib0clear(&___nl__8);
#line 644
c_rt_lib0clear(&___nl__7);
#line 645
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 645
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(195)));
#line 645
c_rt_lib0move(&___nl__7, translator0last_debug_char(___nl__8));
#line 645
c_rt_lib0clear(&___nl__8);
#line 645
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__7, ___ref___1));
#line 645
c_rt_lib0clear(&___nl__7);
#line 646
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__4));
#line 646
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 646
c_rt_lib0clear(&___nl__7);
#line 647
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 648
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 648
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1151), ___nl__7);
#line 648
c_rt_lib0clear(&___nl__7);
#line 649
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 649
c_rt_lib0clear(&___nl__2);
#line 649
c_rt_lib0clear(&___nl__3);
#line 649
c_rt_lib0clear(&___nl__4);
#line 649
c_rt_lib0clear(&___nl__5);
#line 649
c_rt_lib0clear(&___nl__6);
#line 649
c_rt_lib0clear(&___nl__0);
#line 649
return NULL;
}

ImmT translator_priv0print_match(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 653
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 654
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 655
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 655
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___1));
#line 655
c_rt_lib0clear(&___nl__5);
#line 656
c_rt_lib0move(&___nl__5, translator_priv0new_register(___ref___1));
#line 657
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 658
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(839)));
#line 658
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 658
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 658
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__7));
#line 658
label_11:
#line 658
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 658
if(c_rt_lib0check_true_native(___nl__12)){ goto label_31;}
#line 658
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 659
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(195)));
#line 659
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__13, ___ref___1));
#line 659
c_rt_lib0clear(&___nl__13);
#line 660
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(840)));
#line 660
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(93)));
#line 660
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__5, ___get_global_const(43), ___nl__4, ___get_global_const(63), ___nl__14));
#line 660
c_rt_lib0clear(&___nl__14);
#line 660
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(209), ___nl__13));
#line 660
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__13));
#line 660
c_rt_lib0clear(&___nl__13);
#line 661
c_rt_lib0move(&___nl__13, translator_priv0get_sim_label(___ref___1));
#line 662
c_rt_lib0delete(translator_priv0print_if_goto(___nl__13, ___nl__5, ___ref___1));
#line 663
c_rt_lib0delete(array0push(&___nl__3, ___nl__13));
#line 663
c_rt_lib0clear(&___nl__13);
#line 664
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 664
goto label_11;
#line 664
label_31:
#line 664
c_rt_lib0clear(&___nl__7);
#line 664
c_rt_lib0clear(&___nl__8);
#line 664
c_rt_lib0clear(&___nl__9);
#line 664
c_rt_lib0clear(&___nl__10);
#line 664
c_rt_lib0clear(&___nl__11);
#line 664
c_rt_lib0clear(&___nl__12);
#line 665
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 665
c_rt_lib0delete(translator_priv0load_const(___nl__7, ___nl__5, ___ref___1));
#line 665
c_rt_lib0clear(&___nl__7);
#line 666
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 666
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(197), ___nl__5, ___get_global_const(43), ___nl__8));
#line 666
c_rt_lib0clear(&___nl__8);
#line 666
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(204), ___nl__7));
#line 666
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 666
c_rt_lib0clear(&___nl__7);
#line 667
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(217), ___nl__5));
#line 667
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 667
c_rt_lib0clear(&___nl__7);
#line 668
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 669
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(839)));
#line 669
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 669
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 669
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 669
label_55:
#line 669
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 669
if(c_rt_lib0check_true_native(___nl__13)){ goto label_113;}
#line 669
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 670
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(201)));
#line 670
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(195)));
#line 670
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___1));
#line 670
c_rt_lib0clear(&___nl__14);
#line 671
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 671
c_rt_lib0delete(translator_priv0print_sim_label(___nl__14, ___ref___1));
#line 671
c_rt_lib0clear(&___nl__14);
#line 672
c_rt_lib0move(&___nl__14, translator_priv0save_registers(___ref___1));
#line 673
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(840)));
#line 673
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(192)));
#line 673
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(192)));
#line 673
if(c_rt_lib0check_true_native(___nl__16)){ goto label_76;}
#line 676
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(41)));
#line 676
if(c_rt_lib0check_true_native(___nl__16)){ goto label_89;}
#line 676
c_rt_lib0move(&___nl__16,___get_global_const(91));
#line 676
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 676
nl_die_arg(___nl__16);
#line 673
label_76:
#line 673
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(192)));
#line 674
c_rt_lib0move(&___nl__18, translator_priv0print_var_decl(___nl__17, ___ref___1));
#line 675
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(840)));
#line 675
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__20, ___get_global_const(93)));
#line 675
c_rt_lib0move(&___nl__19, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__18, ___get_global_const(43), ___nl__4, ___get_global_const(63), ___nl__20));
#line 675
c_rt_lib0clear(&___nl__20);
#line 675
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(210), ___nl__19));
#line 675
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__19));
#line 675
c_rt_lib0clear(&___nl__19);
#line 675
c_rt_lib0clear(&___nl__18);
#line 675
c_rt_lib0clear(&___nl__17);
#line 676
goto label_91;
#line 676
label_89:
#line 677
goto label_91;
#line 677
label_91:
#line 677
c_rt_lib0clear(&___nl__15);
#line 677
c_rt_lib0clear(&___nl__16);
#line 678
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(201)));
#line 678
c_rt_lib0delete(translator_priv0print_cmd(___nl__15, ___ref___1));
#line 678
c_rt_lib0clear(&___nl__15);
#line 679
c_rt_lib0delete(translator_priv0restore_registers(___nl__14, ___ref___1));
#line 680
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(201)));
#line 680
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(195)));
#line 680
c_rt_lib0move(&___nl__15, translator0last_debug_char(___nl__16));
#line 680
c_rt_lib0clear(&___nl__16);
#line 680
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__15, ___ref___1));
#line 680
c_rt_lib0clear(&___nl__15);
#line 681
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__6));
#line 681
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__15));
#line 681
c_rt_lib0clear(&___nl__15);
#line 682
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 682
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__15));
#line 682
c_rt_lib0clear(&___nl__15);
#line 682
c_rt_lib0clear(&___nl__14);
#line 683
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 683
goto label_55;
#line 683
label_113:
#line 683
c_rt_lib0clear(&___nl__8);
#line 683
c_rt_lib0clear(&___nl__9);
#line 683
c_rt_lib0clear(&___nl__10);
#line 683
c_rt_lib0clear(&___nl__11);
#line 683
c_rt_lib0clear(&___nl__12);
#line 683
c_rt_lib0clear(&___nl__13);
#line 684
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 685
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 685
c_rt_lib0clear(&___nl__2);
#line 685
c_rt_lib0clear(&___nl__3);
#line 685
c_rt_lib0clear(&___nl__4);
#line 685
c_rt_lib0clear(&___nl__5);
#line 685
c_rt_lib0clear(&___nl__6);
#line 685
c_rt_lib0clear(&___nl__7);
#line 685
c_rt_lib0clear(&___nl__0);
#line 685
return NULL;
}

ImmT translator_priv0move(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
#line 689
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 689
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__0, ___nl__3));
#line 689
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 689
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 689
c_rt_lib0clear(&___nl__0);
#line 689
c_rt_lib0clear(&___nl__1);
#line 689
c_rt_lib0clear(&___nl__3);
#line 689
return NULL;
#line 689
goto label_9;
#line 689
label_9:
#line 689
c_rt_lib0clear(&___nl__3);
#line 690
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(197), ___nl__0, ___get_global_const(43), ___nl__1));
#line 690
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(211), ___nl__3));
#line 690
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 690
c_rt_lib0clear(&___nl__3);
#line 690
c_rt_lib0clear(&___nl__0);
#line 690
c_rt_lib0clear(&___nl__1);
#line 690
return NULL;
}

ImmT translator_priv0print_bin_op_operator_command(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 695
c_rt_lib0move(&___nl__5,___get_global_const(298));
#line 695
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 695
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 695
c_rt_lib0move(&___nl__5,___get_global_const(865));
#line 695
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 695
label_5:
#line 695
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 695
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 696
c_rt_lib0move(&___nl__6,___get_global_const(298));
#line 696
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 696
c_rt_lib0clear(&___nl__6);
#line 697
goto label_64;
#line 697
label_12:
#line 697
c_rt_lib0move(&___nl__5,___get_global_const(296));
#line 697
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 697
if(c_rt_lib0check_true_native(___nl__5)){ goto label_18;}
#line 697
c_rt_lib0move(&___nl__5,___get_global_const(866));
#line 697
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 697
label_18:
#line 697
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 697
if(c_rt_lib0check_true_native(___nl__5)){ goto label_25;}
#line 698
c_rt_lib0move(&___nl__6,___get_global_const(296));
#line 698
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 698
c_rt_lib0clear(&___nl__6);
#line 699
goto label_64;
#line 699
label_25:
#line 699
c_rt_lib0move(&___nl__5,___get_global_const(304));
#line 699
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 699
if(c_rt_lib0check_true_native(___nl__5)){ goto label_31;}
#line 699
c_rt_lib0move(&___nl__5,___get_global_const(867));
#line 699
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 699
label_31:
#line 699
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 699
if(c_rt_lib0check_true_native(___nl__5)){ goto label_38;}
#line 700
c_rt_lib0move(&___nl__6,___get_global_const(304));
#line 700
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 700
c_rt_lib0clear(&___nl__6);
#line 701
goto label_64;
#line 701
label_38:
#line 701
c_rt_lib0move(&___nl__5,___get_global_const(77));
#line 701
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 701
if(c_rt_lib0check_true_native(___nl__5)){ goto label_44;}
#line 701
c_rt_lib0move(&___nl__5,___get_global_const(868));
#line 701
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 701
label_44:
#line 701
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 701
if(c_rt_lib0check_true_native(___nl__5)){ goto label_51;}
#line 702
c_rt_lib0move(&___nl__6,___get_global_const(77));
#line 702
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 702
c_rt_lib0clear(&___nl__6);
#line 703
goto label_64;
#line 703
label_51:
#line 703
c_rt_lib0move(&___nl__5,___get_global_const(97));
#line 703
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 703
if(c_rt_lib0check_true_native(___nl__5)){ goto label_57;}
#line 703
c_rt_lib0move(&___nl__5,___get_global_const(869));
#line 703
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 703
label_57:
#line 703
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 703
if(c_rt_lib0check_true_native(___nl__5)){ goto label_64;}
#line 704
c_rt_lib0move(&___nl__6,___get_global_const(97));
#line 704
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 704
c_rt_lib0clear(&___nl__6);
#line 705
goto label_64;
#line 705
label_64:
#line 705
c_rt_lib0clear(&___nl__5);
#line 706
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(4, ___get_global_const(197), ___nl__0, ___get_global_const(230), ___nl__1, ___get_global_const(231), ___nl__2, ___get_global_const(443), ___nl__3));
#line 706
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(208), ___nl__5));
#line 706
c_rt_lib0delete(translator_priv0print(___ref___4, ___nl__5));
#line 706
c_rt_lib0clear(&___nl__5);
#line 706
c_rt_lib0clear(&___nl__0);
#line 706
c_rt_lib0clear(&___nl__1);
#line 706
c_rt_lib0clear(&___nl__2);
#line 706
c_rt_lib0clear(&___nl__3);
#line 706
return NULL;
}

ImmT translator_priv0print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 710
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(195)));
#line 710
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 710
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(201), ___nl__1, ___get_global_const(195), ___nl__3, ___get_global_const(200), ___nl__4));
#line 710
c_rt_lib0clear(&___nl__3);
#line 710
c_rt_lib0clear(&___nl__4);
#line 711
c_rt_lib0move(&___nl__3,___get_global_const(1153));
#line 711
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 711
c_rt_lib0move(&___nl__4,___get_global_const(187));
#line 711
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 711
c_rt_lib0delete(array0push(&___nl__4, ___nl__2));
#line 711
c_rt_lib0move(&___nl__5,___get_global_const(187));
#line 711
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 711
c_rt_lib0move(&___nl__5,___get_global_const(1153));
#line 711
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 711
c_rt_lib0clear(&___nl__5);
#line 711
c_rt_lib0clear(&___nl__3);
#line 711
c_rt_lib0clear(&___nl__4);
#line 712
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 712
c_rt_lib0move(&___nl__4,___get_global_const(195));
#line 712
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 712
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 712
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(712), ___nl__5);
#line 712
c_rt_lib0move(&___nl__6,___get_global_const(195));
#line 712
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 712
c_rt_lib0clear(&___nl__6);
#line 712
c_rt_lib0clear(&___nl__3);
#line 712
c_rt_lib0clear(&___nl__4);
#line 712
c_rt_lib0clear(&___nl__5);
#line 712
c_rt_lib0clear(&___nl__2);
#line 712
c_rt_lib0clear(&___nl__1);
#line 712
return NULL;
}

ImmT translator_priv0print_if_goto(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
#line 716
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(197), ___nl__0, ___get_global_const(43), ___nl__1));
#line 716
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__3));
#line 716
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 716
c_rt_lib0clear(&___nl__3);
#line 716
c_rt_lib0clear(&___nl__0);
#line 716
c_rt_lib0clear(&___nl__1);
#line 716
return NULL;
}

ImmT translator_priv0print_get_from_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__4 = NULL;
#line 721
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__0, ___get_global_const(43), ___nl__1, ___get_global_const(232), ___nl__2));
#line 721
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(212), ___nl__4));
#line 721
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 721
c_rt_lib0clear(&___nl__4);
#line 721
c_rt_lib0clear(&___nl__0);
#line 721
c_rt_lib0clear(&___nl__1);
#line 721
c_rt_lib0clear(&___nl__2);
#line 721
return NULL;
}

ImmT translator_priv0print_set_at_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__4 = NULL;
#line 726
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(43), ___nl__0, ___get_global_const(232), ___nl__1, ___get_global_const(198), ___nl__2));
#line 726
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(213), ___nl__4));
#line 726
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 726
c_rt_lib0clear(&___nl__4);
#line 726
c_rt_lib0clear(&___nl__0);
#line 726
c_rt_lib0clear(&___nl__1);
#line 726
c_rt_lib0clear(&___nl__2);
#line 726
return NULL;
}

ImmT translator_priv0print_get_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__4 = NULL;
#line 731
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__0, ___get_global_const(43), ___nl__1, ___get_global_const(329), ___nl__2));
#line 731
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(214), ___nl__4));
#line 731
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 731
c_rt_lib0clear(&___nl__4);
#line 731
c_rt_lib0clear(&___nl__0);
#line 731
c_rt_lib0clear(&___nl__1);
#line 731
c_rt_lib0clear(&___nl__2);
#line 731
return NULL;
}

ImmT translator_priv0print_set_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__4 = NULL;
#line 735
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(43), ___nl__0, ___get_global_const(329), ___nl__1, ___get_global_const(198), ___nl__2));
#line 735
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(215), ___nl__4));
#line 735
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 735
c_rt_lib0clear(&___nl__4);
#line 735
c_rt_lib0clear(&___nl__0);
#line 735
c_rt_lib0clear(&___nl__1);
#line 735
c_rt_lib0clear(&___nl__2);
#line 735
return NULL;
}

ImmT translator_priv0get_struct_of_lvalue(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 739
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 740
label_1:
#line 740
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(192)));
#line 740
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(208)));
#line 740
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 740
if(c_rt_lib0check_true_native(___nl__2)){ goto label_81;}
#line 741
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(192)));
#line 741
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(208)));
#line 742
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 742
c_rt_lib0move(&___nl__5,___get_global_const(850));
#line 742
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 742
c_rt_lib0clear(&___nl__5);
#line 742
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 742
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 742
c_rt_lib0move(&___nl__5,___get_global_const(851));
#line 742
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 742
c_rt_lib0clear(&___nl__5);
#line 742
label_17:
#line 742
if(c_rt_lib0check_true_native(___nl__4)){ goto label_23;}
#line 742
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 742
c_rt_lib0move(&___nl__5,___get_global_const(849));
#line 742
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 742
c_rt_lib0clear(&___nl__5);
#line 742
label_23:
#line 742
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 742
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 742
if(c_rt_lib0check_true_native(___nl__4)){ goto label_30;}
#line 742
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 742
nl_die_arg(___nl__5);
#line 742
goto label_30;
#line 742
label_30:
#line 742
c_rt_lib0clear(&___nl__4);
#line 742
c_rt_lib0clear(&___nl__5);
#line 743
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 744
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 744
c_rt_lib0move(&___nl__6,___get_global_const(850));
#line 744
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 744
c_rt_lib0clear(&___nl__6);
#line 744
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 744
if(c_rt_lib0check_true_native(___nl__5)){ goto label_47;}
#line 745
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 745
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1154), ___nl__7));
#line 745
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 745
c_rt_lib0clear(&___nl__7);
#line 745
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 745
c_rt_lib0clear(&___nl__6);
#line 746
goto label_71;
#line 746
label_47:
#line 746
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 746
c_rt_lib0move(&___nl__6,___get_global_const(851));
#line 746
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 746
c_rt_lib0clear(&___nl__6);
#line 746
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 746
if(c_rt_lib0check_true_native(___nl__5)){ goto label_61;}
#line 747
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 747
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1141), ___nl__7));
#line 747
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 747
c_rt_lib0clear(&___nl__7);
#line 747
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 747
c_rt_lib0clear(&___nl__6);
#line 748
goto label_71;
#line 748
label_61:
#line 749
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 749
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(192)));
#line 749
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(855)));
#line 749
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(329), ___nl__7));
#line 749
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 749
c_rt_lib0clear(&___nl__7);
#line 749
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 749
c_rt_lib0clear(&___nl__6);
#line 750
goto label_71;
#line 750
label_71:
#line 750
c_rt_lib0clear(&___nl__5);
#line 751
c_rt_lib0delete(array0append(&___nl__4, ___nl__1));
#line 752
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 753
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 753
c_rt_lib0copy(___ref___0, ___nl__5);
#line 753
c_rt_lib0clear(&___nl__5);
#line 753
c_rt_lib0clear(&___nl__3);
#line 753
c_rt_lib0clear(&___nl__4);
#line 754
goto label_1;
#line 754
label_81:
#line 754
c_rt_lib0clear(&___nl__2);
#line 755
return ___nl__1;
#line 755
c_rt_lib0clear(&___nl__1);
#line 755
return NULL;
}

ImmT translator_priv0get_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
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
#line 760
c_rt_lib0move(&___nl__3, translator_priv0get_struct_of_lvalue(&___nl__0));
#line 761
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 761
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(848)));
#line 762
c_rt_lib0move(&___nl__6, translator_priv0get_var_register(___nl__4, ___ref___2));
#line 762
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 762
c_rt_lib0clear(&___nl__6);
#line 763
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 764
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 764
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 764
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 764
label_10:
#line 764
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__8, ___nl__7));
#line 764
if(c_rt_lib0check_true_native(___nl__10)){ goto label_185;}
#line 765
c_rt_lib0move(&___nl__11, translator_priv0new_register(___ref___2));
#line 765
c_rt_lib0delete(array0push(&___nl__5, ___nl__11));
#line 765
c_rt_lib0clear(&___nl__11);
#line 766
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__3, ___nl__8));
#line 766
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(1154)));
#line 766
if(c_rt_lib0check_true_native(___nl__12)){ goto label_26;}
#line 771
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(1141)));
#line 771
if(c_rt_lib0check_true_native(___nl__12)){ goto label_75;}
#line 776
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(329)));
#line 776
if(c_rt_lib0check_true_native(___nl__12)){ goto label_124;}
#line 776
c_rt_lib0move(&___nl__12,___get_global_const(91));
#line 776
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 776
nl_die_arg(___nl__12);
#line 766
label_26:
#line 766
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(1154)));
#line 767
c_rt_lib0move(&___nl__14, translator_priv0calc_val(___nl__13, ___ref___2));
#line 768
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 768
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(2, ___get_global_const(192), ___nl__16, ___get_global_const(1154), ___nl__14));
#line 768
c_rt_lib0clear(&___nl__16);
#line 768
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(1154), ___nl__15));
#line 768
c_rt_lib0delete(array0push(&___nl__6, ___nl__15));
#line 768
c_rt_lib0clear(&___nl__15);
#line 769
c_rt_lib0copy(&___nl__15, ___nl__1);
#line 769
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 769
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__15));
#line 769
if(c_rt_lib0check_true_native(___nl__16)){ goto label_44;}
#line 769
c_rt_lib0move(&___nl__15, array0len(___nl__3));
#line 769
c_rt_lib0move(&___nl__17,___get_global_const(1));
#line 769
c_rt_lib0move(&___nl__15, c_rt_lib0sub_mod(___nl__15, ___nl__17));
#line 769
c_rt_lib0clear(&___nl__17);
#line 769
c_rt_lib0move(&___nl__15, c_rt_lib0num_eq(___nl__8, ___nl__15));
#line 769
label_44:
#line 769
c_rt_lib0clear(&___nl__16);
#line 769
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 769
if(c_rt_lib0check_true_native(___nl__15)){ goto label_55;}
#line 769
c_rt_lib0clear(&___nl__11);
#line 769
c_rt_lib0clear(&___nl__12);
#line 769
c_rt_lib0clear(&___nl__13);
#line 769
c_rt_lib0clear(&___nl__14);
#line 769
c_rt_lib0clear(&___nl__15);
#line 769
goto label_185;
#line 769
goto label_55;
#line 769
label_55:
#line 769
c_rt_lib0clear(&___nl__15);
#line 770
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 770
c_rt_lib0move(&___nl__16, c_rt_lib0add(___nl__8, ___nl__16));
#line 770
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__5, ___nl__16));
#line 770
c_rt_lib0clear(&___nl__16);
#line 770
c_rt_lib0move(&___nl__16,___get_global_const(1160));
#line 770
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 770
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__18));
#line 770
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__14));
#line 770
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(2, ___nl__18, ___nl__19));
#line 770
c_rt_lib0clear(&___nl__18);
#line 770
c_rt_lib0clear(&___nl__19);
#line 770
c_rt_lib0delete(translator_priv0print_call_base(___nl__15, ___nl__16, ___nl__17, ___ref___2));
#line 770
c_rt_lib0clear(&___nl__17);
#line 770
c_rt_lib0clear(&___nl__16);
#line 770
c_rt_lib0clear(&___nl__15);
#line 770
c_rt_lib0clear(&___nl__14);
#line 770
c_rt_lib0clear(&___nl__13);
#line 771
goto label_180;
#line 771
label_75:
#line 771
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(1141)));
#line 772
c_rt_lib0move(&___nl__14, translator_priv0calc_val(___nl__13, ___ref___2));
#line 773
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 773
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(2, ___get_global_const(192), ___nl__16, ___get_global_const(329), ___nl__14));
#line 773
c_rt_lib0clear(&___nl__16);
#line 773
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(1141), ___nl__15));
#line 773
c_rt_lib0delete(array0push(&___nl__6, ___nl__15));
#line 773
c_rt_lib0clear(&___nl__15);
#line 774
c_rt_lib0copy(&___nl__15, ___nl__1);
#line 774
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 774
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__15));
#line 774
if(c_rt_lib0check_true_native(___nl__16)){ goto label_93;}
#line 774
c_rt_lib0move(&___nl__15, array0len(___nl__3));
#line 774
c_rt_lib0move(&___nl__17,___get_global_const(1));
#line 774
c_rt_lib0move(&___nl__15, c_rt_lib0sub_mod(___nl__15, ___nl__17));
#line 774
c_rt_lib0clear(&___nl__17);
#line 774
c_rt_lib0move(&___nl__15, c_rt_lib0num_eq(___nl__8, ___nl__15));
#line 774
label_93:
#line 774
c_rt_lib0clear(&___nl__16);
#line 774
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 774
if(c_rt_lib0check_true_native(___nl__15)){ goto label_104;}
#line 774
c_rt_lib0clear(&___nl__11);
#line 774
c_rt_lib0clear(&___nl__12);
#line 774
c_rt_lib0clear(&___nl__13);
#line 774
c_rt_lib0clear(&___nl__14);
#line 774
c_rt_lib0clear(&___nl__15);
#line 774
goto label_185;
#line 774
goto label_104;
#line 774
label_104:
#line 774
c_rt_lib0clear(&___nl__15);
#line 775
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 775
c_rt_lib0move(&___nl__16, c_rt_lib0add(___nl__8, ___nl__16));
#line 775
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__5, ___nl__16));
#line 775
c_rt_lib0clear(&___nl__16);
#line 775
c_rt_lib0move(&___nl__16,___get_global_const(1161));
#line 775
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 775
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__18));
#line 775
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__14));
#line 775
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(2, ___nl__18, ___nl__19));
#line 775
c_rt_lib0clear(&___nl__18);
#line 775
c_rt_lib0clear(&___nl__19);
#line 775
c_rt_lib0delete(translator_priv0print_call_base(___nl__15, ___nl__16, ___nl__17, ___ref___2));
#line 775
c_rt_lib0clear(&___nl__17);
#line 775
c_rt_lib0clear(&___nl__16);
#line 775
c_rt_lib0clear(&___nl__15);
#line 775
c_rt_lib0clear(&___nl__14);
#line 775
c_rt_lib0clear(&___nl__13);
#line 776
goto label_180;
#line 776
label_124:
#line 776
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(329)));
#line 777
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 777
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(192), ___nl__15, ___get_global_const(329), ___nl__13));
#line 777
c_rt_lib0clear(&___nl__15);
#line 777
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(329), ___nl__14));
#line 777
c_rt_lib0delete(array0push(&___nl__6, ___nl__14));
#line 777
c_rt_lib0clear(&___nl__14);
#line 778
c_rt_lib0copy(&___nl__14, ___nl__1);
#line 778
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 778
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__14));
#line 778
if(c_rt_lib0check_true_native(___nl__15)){ goto label_141;}
#line 778
c_rt_lib0move(&___nl__14, array0len(___nl__3));
#line 778
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 778
c_rt_lib0move(&___nl__14, c_rt_lib0sub_mod(___nl__14, ___nl__16));
#line 778
c_rt_lib0clear(&___nl__16);
#line 778
c_rt_lib0move(&___nl__14, c_rt_lib0num_eq(___nl__8, ___nl__14));
#line 778
label_141:
#line 778
c_rt_lib0clear(&___nl__15);
#line 778
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 778
if(c_rt_lib0check_true_native(___nl__14)){ goto label_151;}
#line 778
c_rt_lib0clear(&___nl__11);
#line 778
c_rt_lib0clear(&___nl__12);
#line 778
c_rt_lib0clear(&___nl__13);
#line 778
c_rt_lib0clear(&___nl__14);
#line 778
goto label_185;
#line 778
goto label_151;
#line 778
label_151:
#line 778
c_rt_lib0clear(&___nl__14);
#line 779
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 779
c_rt_lib0move(&___nl__15, c_rt_lib0add(___nl__8, ___nl__15));
#line 779
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__5, ___nl__15));
#line 779
c_rt_lib0clear(&___nl__15);
#line 779
c_rt_lib0delete(translator_priv0load_const(___nl__13, ___nl__14, ___ref___2));
#line 779
c_rt_lib0clear(&___nl__14);
#line 780
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 780
c_rt_lib0move(&___nl__15, c_rt_lib0add(___nl__8, ___nl__15));
#line 780
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__5, ___nl__15));
#line 780
c_rt_lib0clear(&___nl__15);
#line 780
c_rt_lib0move(&___nl__15,___get_global_const(1161));
#line 781
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 781
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__17));
#line 782
c_rt_lib0move(&___nl__19,___get_global_const(1));
#line 782
c_rt_lib0move(&___nl__19, c_rt_lib0add(___nl__8, ___nl__19));
#line 782
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__5, ___nl__19));
#line 782
c_rt_lib0clear(&___nl__19);
#line 782
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__18));
#line 782
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__17, ___nl__18));
#line 782
c_rt_lib0clear(&___nl__17);
#line 782
c_rt_lib0clear(&___nl__18);
#line 782
c_rt_lib0delete(translator_priv0print_call_base(___nl__14, ___nl__15, ___nl__16, ___ref___2));
#line 782
c_rt_lib0clear(&___nl__16);
#line 782
c_rt_lib0clear(&___nl__15);
#line 782
c_rt_lib0clear(&___nl__14);
#line 782
c_rt_lib0clear(&___nl__13);
#line 784
goto label_180;
#line 784
label_180:
#line 784
c_rt_lib0clear(&___nl__11);
#line 784
c_rt_lib0clear(&___nl__12);
#line 785
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 785
goto label_10;
#line 785
label_185:
#line 785
c_rt_lib0clear(&___nl__7);
#line 785
c_rt_lib0clear(&___nl__8);
#line 785
c_rt_lib0clear(&___nl__9);
#line 785
c_rt_lib0clear(&___nl__10);
#line 786
c_rt_lib0move(&___nl__8, array0len(___nl__5));
#line 786
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 786
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 786
c_rt_lib0clear(&___nl__9);
#line 786
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 786
c_rt_lib0clear(&___nl__8);
#line 786
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(192), ___nl__7));
#line 786
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 786
c_rt_lib0clear(&___nl__7);
#line 787
c_rt_lib0clear(&___nl__0);
#line 787
c_rt_lib0clear(&___nl__1);
#line 787
c_rt_lib0clear(&___nl__3);
#line 787
c_rt_lib0clear(&___nl__4);
#line 787
c_rt_lib0clear(&___nl__5);
#line 787
return ___nl__6;
#line 787
c_rt_lib0clear(&___nl__3);
#line 787
c_rt_lib0clear(&___nl__4);
#line 787
c_rt_lib0clear(&___nl__5);
#line 787
c_rt_lib0clear(&___nl__6);
#line 787
c_rt_lib0clear(&___nl__0);
#line 787
c_rt_lib0clear(&___nl__1);
#line 787
return NULL;
}

ImmT translator_priv0set_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
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
#line 792
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 793
c_rt_lib0move(&___nl__4, array0len(___nl__0));
#line 794
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 794
c_rt_lib0move(&___nl__6, c_rt_lib0sub(___nl__4, ___nl__6));
#line 794
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__0, ___nl__6));
#line 794
c_rt_lib0clear(&___nl__6);
#line 794
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(192)));
#line 795
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 796
c_rt_lib0move(&___nl__7,___get_global_const(6));
#line 796
c_rt_lib0move(&___nl__7, c_rt_lib0sub(___nl__4, ___nl__7));
#line 796
label_10:
#line 796
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 796
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 796
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 796
if(c_rt_lib0check_true_native(___nl__8)){ goto label_192;}
#line 797
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__0, ___nl__7));
#line 797
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(192)));
#line 797
if(c_rt_lib0check_true_native(___nl__10)){ goto label_27;}
#line 799
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(1154)));
#line 799
if(c_rt_lib0check_true_native(___nl__10)){ goto label_34;}
#line 806
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(1141)));
#line 806
if(c_rt_lib0check_true_native(___nl__10)){ goto label_77;}
#line 813
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(329)));
#line 813
if(c_rt_lib0check_true_native(___nl__10)){ goto label_130;}
#line 813
c_rt_lib0move(&___nl__10,___get_global_const(91));
#line 813
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 813
nl_die_arg(___nl__10);
#line 797
label_27:
#line 797
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(192)));
#line 798
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(0));
#line 798
nl_die_arg(___nl__12);
#line 798
c_rt_lib0clear(&___nl__12);
#line 798
c_rt_lib0clear(&___nl__11);
#line 799
goto label_185;
#line 799
label_34:
#line 799
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(1154)));
#line 800
c_rt_lib0copy(&___nl__12, ___nl__1);
#line 800
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 800
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__12));
#line 800
if(c_rt_lib0check_true_native(___nl__13)){ goto label_43;}
#line 800
c_rt_lib0move(&___nl__12,___get_global_const(6));
#line 800
c_rt_lib0move(&___nl__12, c_rt_lib0sub(___nl__4, ___nl__12));
#line 800
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__7, ___nl__12));
#line 800
label_43:
#line 800
c_rt_lib0clear(&___nl__13);
#line 800
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 800
if(c_rt_lib0check_true_native(___nl__12)){ goto label_53;}
#line 801
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(192)));
#line 801
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(1154)));
#line 801
c_rt_lib0delete(translator_priv0print_set_at_index(___nl__13, ___nl__14, ___nl__5, ___ref___2));
#line 801
c_rt_lib0clear(&___nl__14);
#line 801
c_rt_lib0clear(&___nl__13);
#line 802
goto label_70;
#line 802
label_53:
#line 803
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 803
c_rt_lib0move(&___nl__14,___get_global_const(601));
#line 803
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(192)));
#line 803
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 803
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(1154)));
#line 803
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__17));
#line 803
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__5));
#line 803
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 803
c_rt_lib0clear(&___nl__16);
#line 803
c_rt_lib0clear(&___nl__17);
#line 803
c_rt_lib0clear(&___nl__18);
#line 803
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 803
c_rt_lib0clear(&___nl__15);
#line 803
c_rt_lib0clear(&___nl__14);
#line 803
c_rt_lib0clear(&___nl__13);
#line 804
goto label_70;
#line 804
label_70:
#line 804
c_rt_lib0clear(&___nl__12);
#line 805
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(192)));
#line 805
c_rt_lib0copy(&___nl__5, ___nl__12);
#line 805
c_rt_lib0clear(&___nl__12);
#line 805
c_rt_lib0clear(&___nl__11);
#line 806
goto label_185;
#line 806
label_77:
#line 806
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(1141)));
#line 807
c_rt_lib0copy(&___nl__12, ___nl__1);
#line 807
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 807
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__12));
#line 807
if(c_rt_lib0check_true_native(___nl__13)){ goto label_86;}
#line 807
c_rt_lib0move(&___nl__12,___get_global_const(6));
#line 807
c_rt_lib0move(&___nl__12, c_rt_lib0sub(___nl__4, ___nl__12));
#line 807
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__7, ___nl__12));
#line 807
label_86:
#line 807
c_rt_lib0clear(&___nl__13);
#line 807
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 807
if(c_rt_lib0check_true_native(___nl__12)){ goto label_106;}
#line 808
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 808
c_rt_lib0move(&___nl__14,___get_global_const(603));
#line 808
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(192)));
#line 808
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 808
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(329)));
#line 808
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__17));
#line 808
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__5));
#line 808
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 808
c_rt_lib0clear(&___nl__16);
#line 808
c_rt_lib0clear(&___nl__17);
#line 808
c_rt_lib0clear(&___nl__18);
#line 808
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 808
c_rt_lib0clear(&___nl__15);
#line 808
c_rt_lib0clear(&___nl__14);
#line 808
c_rt_lib0clear(&___nl__13);
#line 809
goto label_123;
#line 809
label_106:
#line 810
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 810
c_rt_lib0move(&___nl__14,___get_global_const(1162));
#line 810
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(192)));
#line 810
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 810
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(329)));
#line 810
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__17));
#line 810
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__5));
#line 810
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 810
c_rt_lib0clear(&___nl__16);
#line 810
c_rt_lib0clear(&___nl__17);
#line 810
c_rt_lib0clear(&___nl__18);
#line 810
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 810
c_rt_lib0clear(&___nl__15);
#line 810
c_rt_lib0clear(&___nl__14);
#line 810
c_rt_lib0clear(&___nl__13);
#line 811
goto label_123;
#line 811
label_123:
#line 811
c_rt_lib0clear(&___nl__12);
#line 812
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(192)));
#line 812
c_rt_lib0copy(&___nl__5, ___nl__12);
#line 812
c_rt_lib0clear(&___nl__12);
#line 812
c_rt_lib0clear(&___nl__11);
#line 813
goto label_185;
#line 813
label_130:
#line 813
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(329)));
#line 814
c_rt_lib0copy(&___nl__12, ___nl__1);
#line 814
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 814
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__12));
#line 814
if(c_rt_lib0check_true_native(___nl__13)){ goto label_139;}
#line 814
c_rt_lib0move(&___nl__12,___get_global_const(6));
#line 814
c_rt_lib0move(&___nl__12, c_rt_lib0sub(___nl__4, ___nl__12));
#line 814
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__7, ___nl__12));
#line 814
label_139:
#line 814
c_rt_lib0clear(&___nl__13);
#line 814
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 814
if(c_rt_lib0check_true_native(___nl__12)){ goto label_149;}
#line 815
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(192)));
#line 815
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(329)));
#line 815
c_rt_lib0delete(translator_priv0print_set_value(___nl__13, ___nl__14, ___nl__5, ___ref___2));
#line 815
c_rt_lib0clear(&___nl__14);
#line 815
c_rt_lib0clear(&___nl__13);
#line 816
goto label_178;
#line 816
label_149:
#line 817
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 817
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__6, ___nl__13));
#line 817
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 817
if(c_rt_lib0check_true_native(___nl__13)){ goto label_158;}
#line 817
c_rt_lib0move(&___nl__14, translator_priv0new_register(___ref___2));
#line 817
c_rt_lib0copy(&___nl__6, ___nl__14);
#line 817
c_rt_lib0clear(&___nl__14);
#line 817
goto label_158;
#line 817
label_158:
#line 817
c_rt_lib0clear(&___nl__13);
#line 818
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(329)));
#line 818
c_rt_lib0delete(translator_priv0load_const(___nl__13, ___nl__6, ___ref___2));
#line 818
c_rt_lib0clear(&___nl__13);
#line 819
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 819
c_rt_lib0move(&___nl__14,___get_global_const(1162));
#line 819
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(192)));
#line 819
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 819
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__6));
#line 819
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__5));
#line 819
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 819
c_rt_lib0clear(&___nl__16);
#line 819
c_rt_lib0clear(&___nl__17);
#line 819
c_rt_lib0clear(&___nl__18);
#line 819
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 819
c_rt_lib0clear(&___nl__15);
#line 819
c_rt_lib0clear(&___nl__14);
#line 819
c_rt_lib0clear(&___nl__13);
#line 820
goto label_178;
#line 820
label_178:
#line 820
c_rt_lib0clear(&___nl__12);
#line 821
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(192)));
#line 821
c_rt_lib0copy(&___nl__5, ___nl__12);
#line 821
c_rt_lib0clear(&___nl__12);
#line 821
c_rt_lib0clear(&___nl__11);
#line 822
goto label_185;
#line 822
label_185:
#line 822
c_rt_lib0clear(&___nl__9);
#line 822
c_rt_lib0clear(&___nl__10);
#line 796
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 796
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__9));
#line 796
c_rt_lib0clear(&___nl__9);
#line 823
goto label_10;
#line 823
label_192:
#line 823
c_rt_lib0clear(&___nl__7);
#line 823
c_rt_lib0clear(&___nl__8);
#line 824
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 824
c_rt_lib0move(&___nl__7, c_rt_lib0ne(___nl__6, ___nl__7));
#line 824
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 824
if(c_rt_lib0check_true_native(___nl__7)){ goto label_201;}
#line 824
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 824
goto label_201;
#line 824
label_201:
#line 824
c_rt_lib0clear(&___nl__7);
#line 824
c_rt_lib0clear(&___nl__3);
#line 824
c_rt_lib0clear(&___nl__4);
#line 824
c_rt_lib0clear(&___nl__5);
#line 824
c_rt_lib0clear(&___nl__6);
#line 824
c_rt_lib0clear(&___nl__0);
#line 824
c_rt_lib0clear(&___nl__1);
#line 824
return NULL;
}

ImmT translator_priv0make_string(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 828
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 829
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 830
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(327)));
#line 830
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 830
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 830
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 830
label_6:
#line 830
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 830
if(c_rt_lib0check_true_native(___nl__9)){ goto label_26;}
#line 830
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 831
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 831
c_rt_lib0move(&___nl__10, c_rt_lib0gt(___nl__3, ___nl__10));
#line 831
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 831
if(c_rt_lib0check_true_native(___nl__10)){ goto label_18;}
#line 831
c_rt_lib0move(&___nl__11, string0lf());
#line 831
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__11));
#line 831
c_rt_lib0clear(&___nl__11);
#line 831
goto label_18;
#line 831
label_18:
#line 831
c_rt_lib0clear(&___nl__10);
#line 832
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 833
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 833
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__10));
#line 833
c_rt_lib0clear(&___nl__10);
#line 834
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 834
goto label_6;
#line 834
label_26:
#line 834
c_rt_lib0clear(&___nl__4);
#line 834
c_rt_lib0clear(&___nl__5);
#line 834
c_rt_lib0clear(&___nl__6);
#line 834
c_rt_lib0clear(&___nl__7);
#line 834
c_rt_lib0clear(&___nl__8);
#line 834
c_rt_lib0clear(&___nl__9);
#line 835
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(907)));
#line 835
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(906)));
#line 835
if(c_rt_lib0check_true_native(___nl__5)){ goto label_41;}
#line 837
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(905)));
#line 837
if(c_rt_lib0check_true_native(___nl__5)){ goto label_46;}
#line 837
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 837
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 837
nl_die_arg(___nl__5);
#line 835
label_41:
#line 836
c_rt_lib0move(&___nl__6, string0lf());
#line 836
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 836
c_rt_lib0clear(&___nl__6);
#line 837
goto label_48;
#line 837
label_46:
#line 838
goto label_48;
#line 838
label_48:
#line 838
c_rt_lib0clear(&___nl__4);
#line 838
c_rt_lib0clear(&___nl__5);
#line 839
c_rt_lib0clear(&___nl__0);
#line 839
c_rt_lib0clear(&___nl__3);
#line 839
return ___nl__2;
#line 839
c_rt_lib0clear(&___nl__2);
#line 839
c_rt_lib0clear(&___nl__3);
#line 839
c_rt_lib0clear(&___nl__0);
#line 839
return NULL;
}

ImmT translator_priv0print_ternary_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 843
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 843
c_rt_lib0move(&___nl__4,___get_global_const(876));
#line 843
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 843
c_rt_lib0clear(&___nl__4);
#line 843
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 843
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 843
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 843
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 843
nl_die_arg(___nl__4);
#line 843
goto label_10;
#line 843
label_10:
#line 843
c_rt_lib0clear(&___nl__3);
#line 843
c_rt_lib0clear(&___nl__4);
#line 844
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___2));
#line 845
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 846
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(861)));
#line 846
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 846
c_rt_lib0clear(&___nl__6);
#line 847
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 848
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(863)));
#line 848
c_rt_lib0delete(translator_priv0print_val(___nl__6, ___nl__1, ___ref___2));
#line 848
c_rt_lib0clear(&___nl__6);
#line 849
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__3));
#line 849
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__6));
#line 849
c_rt_lib0clear(&___nl__6);
#line 850
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 851
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(862)));
#line 851
c_rt_lib0delete(translator_priv0print_val(___nl__6, ___nl__1, ___ref___2));
#line 851
c_rt_lib0clear(&___nl__6);
#line 852
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___2));
#line 852
c_rt_lib0clear(&___nl__3);
#line 852
c_rt_lib0clear(&___nl__4);
#line 852
c_rt_lib0clear(&___nl__5);
#line 852
c_rt_lib0clear(&___nl__0);
#line 852
c_rt_lib0clear(&___nl__1);
#line 852
return NULL;
}

ImmT translator_priv0print_die(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 856
c_rt_lib0move(&___nl__3, translator_priv0new_register(___ref___2));
#line 857
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(204), ___nl__0));
#line 857
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__1, ___get_global_const(192), ___nl__5));
#line 857
c_rt_lib0clear(&___nl__5);
#line 857
c_rt_lib0delete(translator_priv0print_val(___nl__4, ___nl__3, ___ref___2));
#line 857
c_rt_lib0clear(&___nl__4);
#line 858
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(217), ___nl__3));
#line 858
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 858
c_rt_lib0clear(&___nl__4);
#line 858
c_rt_lib0clear(&___nl__3);
#line 858
c_rt_lib0clear(&___nl__0);
#line 858
c_rt_lib0clear(&___nl__1);
#line 858
return NULL;
}

ImmT translator_priv0print_return(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 862
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 863
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(288)));
#line 864
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 864
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(830)));
#line 864
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 864
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 864
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 865
c_rt_lib0move(&___nl__5, translator_priv0calc_val(___nl__0, ___ref___1));
#line 865
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__5));
#line 865
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 865
c_rt_lib0clear(&___nl__5);
#line 866
goto label_12;
#line 866
label_12:
#line 866
c_rt_lib0clear(&___nl__4);
#line 867
c_rt_lib0delete(translator_priv0print_safe_return(___nl__3, ___ref___1));
#line 868
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 868
c_rt_lib0clear(&___nl__2);
#line 868
c_rt_lib0clear(&___nl__3);
#line 868
c_rt_lib0clear(&___nl__0);
#line 868
return NULL;
}

ImmT translator_priv0print_safe_return(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 872
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 873
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1150)));
#line 873
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1146)));
#line 874
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 874
c_rt_lib0move(&___nl__4, c_rt_lib0unary_minus(___nl__4));
#line 875
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1153)));
#line 875
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(188)));
#line 876
c_rt_lib0copy(&___nl__6, ___nl__0);
#line 876
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(198)));
#line 876
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 876
if(c_rt_lib0check_true_native(___nl__6)){ goto label_39;}
#line 877
c_rt_lib0copy(&___nl__7, ___nl__0);
#line 877
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(198)));
#line 877
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 877
c_rt_lib0clear(&___nl__7);
#line 878
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 878
c_rt_lib0move(&___nl__7, c_rt_lib0lt(___nl__4, ___nl__7));
#line 878
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 878
if(c_rt_lib0check_true_native(___nl__8)){ goto label_21;}
#line 878
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__5, ___nl__4));
#line 878
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 878
label_21:
#line 878
c_rt_lib0clear(&___nl__8);
#line 878
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 878
if(c_rt_lib0check_true_native(___nl__7)){ goto label_36;}
#line 879
c_rt_lib0move(&___nl__8, translator_priv0new_register(___ref___1));
#line 879
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 879
c_rt_lib0clear(&___nl__8);
#line 880
c_rt_lib0copy(&___nl__8, ___nl__0);
#line 880
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(198)));
#line 880
c_rt_lib0delete(translator_priv0move(___nl__4, ___nl__8, ___ref___1));
#line 880
c_rt_lib0clear(&___nl__8);
#line 881
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(198), ___nl__4));
#line 881
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 881
c_rt_lib0clear(&___nl__8);
#line 882
goto label_36;
#line 882
label_36:
#line 882
c_rt_lib0clear(&___nl__7);
#line 883
goto label_39;
#line 883
label_39:
#line 883
c_rt_lib0clear(&___nl__6);
#line 884
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 884
label_42:
#line 884
c_rt_lib0move(&___nl__7, c_rt_lib0lt(___nl__6, ___nl__3));
#line 884
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 884
if(c_rt_lib0check_true_native(___nl__7)){ goto label_80;}
#line 885
c_rt_lib0move(&___nl__8, array0len(___nl__5));
#line 885
c_rt_lib0move(&___nl__8, c_rt_lib0lt(___nl__6, ___nl__8));
#line 885
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 885
if(c_rt_lib0check_true_native(___nl__9)){ goto label_52;}
#line 885
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 885
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(5)));
#line 885
label_52:
#line 885
c_rt_lib0clear(&___nl__9);
#line 885
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 885
if(c_rt_lib0check_true_native(___nl__8)){ goto label_59;}
#line 885
c_rt_lib0clear(&___nl__8);
#line 885
goto label_75;
#line 885
goto label_59;
#line 885
label_59:
#line 885
c_rt_lib0clear(&___nl__8);
#line 886
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__6, ___nl__4));
#line 886
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 886
if(c_rt_lib0check_true_native(___nl__8)){ goto label_67;}
#line 886
c_rt_lib0clear(&___nl__8);
#line 886
goto label_75;
#line 886
goto label_67;
#line 886
label_67:
#line 886
c_rt_lib0clear(&___nl__8);
#line 887
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(273), ___get_global_const(938)));
#line 887
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 887
c_rt_lib0move(&___nl__8, ptd0ensure(___nl__9, ___nl__6));
#line 887
c_rt_lib0clear(&___nl__9);
#line 887
c_rt_lib0delete(translator_priv0undef_reg(___nl__8, ___ref___1));
#line 887
c_rt_lib0clear(&___nl__8);
#line 887
label_75:
#line 884
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 884
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__8));
#line 884
c_rt_lib0clear(&___nl__8);
#line 888
goto label_42;
#line 888
label_80:
#line 888
c_rt_lib0clear(&___nl__6);
#line 888
c_rt_lib0clear(&___nl__7);
#line 889
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(90), ___nl__0));
#line 889
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__6));
#line 889
c_rt_lib0clear(&___nl__6);
#line 890
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 890
c_rt_lib0clear(&___nl__2);
#line 890
c_rt_lib0clear(&___nl__3);
#line 890
c_rt_lib0clear(&___nl__4);
#line 890
c_rt_lib0clear(&___nl__5);
#line 890
c_rt_lib0clear(&___nl__0);
#line 890
return NULL;
}

ImmT translator_priv0convert_str_to_number(ImmT ___nl__0) {
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
#line 894
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 895
c_rt_lib0move(&___nl__2,___get_global_const(80));
#line 895
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 895
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 895
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 895
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 895
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 895
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__4, ___nl__5));
#line 895
c_rt_lib0clear(&___nl__5);
#line 895
c_rt_lib0clear(&___nl__4);
#line 895
c_rt_lib0move(&___nl__4,___get_global_const(989));
#line 895
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 895
c_rt_lib0clear(&___nl__4);
#line 895
label_13:
#line 895
c_rt_lib0clear(&___nl__3);
#line 895
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 895
if(c_rt_lib0check_true_native(___nl__2)){ goto label_124;}
#line 896
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 897
c_rt_lib0move(&___nl__4,___get_global_const(6));
#line 897
label_19:
#line 897
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__4, ___nl__1));
#line 897
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 897
if(c_rt_lib0check_true_native(___nl__5)){ goto label_115;}
#line 898
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 898
c_rt_lib0move(&___nl__6, string0substr(___nl__0, ___nl__4, ___nl__7));
#line 898
c_rt_lib0clear(&___nl__7);
#line 899
c_rt_lib0move(&___nl__7, string0ord(___nl__6));
#line 900
c_rt_lib0move(&___nl__8,___get_global_const(1125));
#line 900
c_rt_lib0move(&___nl__8, c_rt_lib0mul(___nl__3, ___nl__8));
#line 900
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 900
c_rt_lib0clear(&___nl__8);
#line 901
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 901
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 901
c_rt_lib0clear(&___nl__10);
#line 901
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 901
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 901
if(c_rt_lib0check_true_native(___nl__9)){ goto label_41;}
#line 901
c_rt_lib0move(&___nl__10,___get_global_const(243));
#line 901
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 901
c_rt_lib0clear(&___nl__10);
#line 901
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 901
label_41:
#line 901
c_rt_lib0clear(&___nl__9);
#line 901
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 901
if(c_rt_lib0check_true_native(___nl__8)){ goto label_52;}
#line 902
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 902
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 902
c_rt_lib0clear(&___nl__10);
#line 902
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 902
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 902
c_rt_lib0clear(&___nl__9);
#line 903
goto label_107;
#line 903
label_52:
#line 903
c_rt_lib0move(&___nl__10,___get_global_const(1163));
#line 903
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 903
c_rt_lib0clear(&___nl__10);
#line 903
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 903
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 903
if(c_rt_lib0check_true_native(___nl__9)){ goto label_63;}
#line 903
c_rt_lib0move(&___nl__10,___get_global_const(1164));
#line 903
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 903
c_rt_lib0clear(&___nl__10);
#line 903
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 903
label_63:
#line 903
c_rt_lib0clear(&___nl__9);
#line 903
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 903
if(c_rt_lib0check_true_native(___nl__8)){ goto label_77;}
#line 904
c_rt_lib0move(&___nl__10,___get_global_const(1163));
#line 904
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 904
c_rt_lib0clear(&___nl__10);
#line 904
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 904
c_rt_lib0move(&___nl__10,___get_global_const(237));
#line 904
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 904
c_rt_lib0clear(&___nl__10);
#line 904
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 904
c_rt_lib0clear(&___nl__9);
#line 905
goto label_107;
#line 905
label_77:
#line 905
c_rt_lib0move(&___nl__10,___get_global_const(1120));
#line 905
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 905
c_rt_lib0clear(&___nl__10);
#line 905
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 905
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 905
if(c_rt_lib0check_true_native(___nl__9)){ goto label_88;}
#line 905
c_rt_lib0move(&___nl__10,___get_global_const(1124));
#line 905
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 905
c_rt_lib0clear(&___nl__10);
#line 905
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 905
label_88:
#line 905
c_rt_lib0clear(&___nl__9);
#line 905
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 905
if(c_rt_lib0check_true_native(___nl__8)){ goto label_102;}
#line 906
c_rt_lib0move(&___nl__10,___get_global_const(1120));
#line 906
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 906
c_rt_lib0clear(&___nl__10);
#line 906
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 906
c_rt_lib0move(&___nl__10,___get_global_const(237));
#line 906
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 906
c_rt_lib0clear(&___nl__10);
#line 906
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 906
c_rt_lib0clear(&___nl__9);
#line 907
goto label_107;
#line 907
label_102:
#line 908
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 908
nl_die_arg(___nl__9);
#line 908
c_rt_lib0clear(&___nl__9);
#line 909
goto label_107;
#line 909
label_107:
#line 909
c_rt_lib0clear(&___nl__8);
#line 909
c_rt_lib0clear(&___nl__6);
#line 909
c_rt_lib0clear(&___nl__7);
#line 897
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 897
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 897
c_rt_lib0clear(&___nl__6);
#line 910
goto label_19;
#line 910
label_115:
#line 910
c_rt_lib0clear(&___nl__4);
#line 910
c_rt_lib0clear(&___nl__5);
#line 911
c_rt_lib0clear(&___nl__0);
#line 911
c_rt_lib0clear(&___nl__1);
#line 911
c_rt_lib0clear(&___nl__2);
#line 911
return ___nl__3;
#line 911
c_rt_lib0clear(&___nl__3);
#line 912
goto label_184;
#line 912
label_124:
#line 912
c_rt_lib0move(&___nl__2,___get_global_const(6));
#line 912
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 912
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 912
if(c_rt_lib0check_true_native(___nl__4)){ goto label_137;}
#line 912
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 912
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 912
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__5, ___nl__6));
#line 912
c_rt_lib0clear(&___nl__6);
#line 912
c_rt_lib0clear(&___nl__5);
#line 912
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 912
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__5));
#line 912
c_rt_lib0clear(&___nl__5);
#line 912
label_137:
#line 912
c_rt_lib0clear(&___nl__4);
#line 912
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 912
if(c_rt_lib0check_true_native(___nl__3)){ goto label_142;}
#line 912
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__0));
#line 912
label_142:
#line 912
c_rt_lib0clear(&___nl__3);
#line 912
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 912
if(c_rt_lib0check_true_native(___nl__2)){ goto label_179;}
#line 913
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 914
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 914
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 914
label_149:
#line 914
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__1));
#line 914
if(c_rt_lib0check_true_native(___nl__6)){ goto label_169;}
#line 915
c_rt_lib0move(&___nl__7,___get_global_const(1119));
#line 915
c_rt_lib0move(&___nl__3, c_rt_lib0mul_mod(___nl__3, ___nl__7));
#line 915
c_rt_lib0clear(&___nl__7);
#line 916
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 916
c_rt_lib0move(&___nl__8, string0substr(___nl__0, ___nl__4, ___nl__9));
#line 916
c_rt_lib0clear(&___nl__9);
#line 916
c_rt_lib0move(&___nl__7, string0ord(___nl__8));
#line 916
c_rt_lib0clear(&___nl__8);
#line 916
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 916
c_rt_lib0move(&___nl__8, string0ord(___nl__9));
#line 916
c_rt_lib0clear(&___nl__9);
#line 916
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 916
c_rt_lib0clear(&___nl__8);
#line 916
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__7));
#line 916
c_rt_lib0clear(&___nl__7);
#line 917
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 917
goto label_149;
#line 917
label_169:
#line 917
c_rt_lib0clear(&___nl__4);
#line 917
c_rt_lib0clear(&___nl__5);
#line 917
c_rt_lib0clear(&___nl__6);
#line 918
c_rt_lib0clear(&___nl__0);
#line 918
c_rt_lib0clear(&___nl__1);
#line 918
c_rt_lib0clear(&___nl__2);
#line 918
return ___nl__3;
#line 918
c_rt_lib0clear(&___nl__3);
#line 919
goto label_184;
#line 919
label_179:
#line 920
c_rt_lib0clear(&___nl__1);
#line 920
c_rt_lib0clear(&___nl__2);
#line 920
return ___nl__0;
#line 921
goto label_184;
#line 921
label_184:
#line 921
c_rt_lib0clear(&___nl__2);
#line 921
c_rt_lib0clear(&___nl__1);
#line 921
c_rt_lib0clear(&___nl__0);
#line 921
return NULL;
}

ImmT translator_priv0dest_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 925
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 925
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(848)));
#line 925
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 925
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 926
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 926
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(848)));
#line 926
c_rt_lib0move(&___nl__4, translator_priv0get_var_register(___nl__5, ___ref___2));
#line 926
c_rt_lib0clear(&___nl__5);
#line 926
c_rt_lib0clear(&___nl__0);
#line 926
c_rt_lib0clear(&___nl__1);
#line 926
c_rt_lib0clear(&___nl__3);
#line 926
return ___nl__4;
#line 926
c_rt_lib0clear(&___nl__4);
#line 927
goto label_14;
#line 927
label_14:
#line 927
c_rt_lib0clear(&___nl__3);
#line 928
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 928
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 928
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 928
if(c_rt_lib0check_true_native(___nl__3)){ goto label_24;}
#line 928
c_rt_lib0move(&___nl__4, translator_priv0new_register(___ref___2));
#line 928
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 928
c_rt_lib0clear(&___nl__4);
#line 928
goto label_24;
#line 928
label_24:
#line 928
c_rt_lib0clear(&___nl__3);
#line 929
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__1, ___ref___2));
#line 930
c_rt_lib0clear(&___nl__0);
#line 930
return ___nl__1;
#line 930
c_rt_lib0clear(&___nl__0);
#line 930
c_rt_lib0clear(&___nl__1);
#line 930
return NULL;
}

ImmT translator_priv0def_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__4 = NULL;
#line 935
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 935
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 935
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 935
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 935
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 935
goto label_6;
#line 935
label_6:
#line 935
c_rt_lib0clear(&___nl__4);
#line 936
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__1, ___ref___3));
#line 937
c_rt_lib0clear(&___nl__0);
#line 937
c_rt_lib0clear(&___nl__2);
#line 937
return ___nl__1;
#line 937
c_rt_lib0clear(&___nl__0);
#line 937
c_rt_lib0clear(&___nl__1);
#line 937
c_rt_lib0clear(&___nl__2);
#line 937
return NULL;
}

ImmT translator_priv0calc_val(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 941
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 941
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(848)));
#line 941
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 941
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 942
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 942
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(848)));
#line 942
c_rt_lib0move(&___nl__3, translator_priv0get_var_register(___nl__4, ___ref___1));
#line 942
c_rt_lib0clear(&___nl__4);
#line 942
c_rt_lib0clear(&___nl__0);
#line 942
c_rt_lib0clear(&___nl__2);
#line 942
return ___nl__3;
#line 942
c_rt_lib0clear(&___nl__3);
#line 943
goto label_13;
#line 943
label_13:
#line 943
c_rt_lib0clear(&___nl__2);
#line 944
c_rt_lib0move(&___nl__2, translator_priv0new_register(___ref___1));
#line 945
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__2, ___ref___1));
#line 946
c_rt_lib0clear(&___nl__0);
#line 946
return ___nl__2;
#line 946
c_rt_lib0clear(&___nl__2);
#line 946
c_rt_lib0clear(&___nl__0);
#line 946
return NULL;
}

ImmT translator_priv0get_var_register(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 950
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1150)));
#line 950
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(702)));
#line 950
c_rt_lib0move(&___nl__2, hash0get_value(___nl__3, ___nl__0));
#line 950
c_rt_lib0clear(&___nl__3);
#line 950
c_rt_lib0clear(&___nl__0);
#line 950
return ___nl__2;
#line 950
c_rt_lib0clear(&___nl__2);
#line 950
c_rt_lib0clear(&___nl__0);
#line 950
return NULL;
}

ImmT translator_priv0new_declaration(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 954
c_rt_lib0move(&___nl__2, translator_priv0new_register(___ref___1));
#line 955
c_rt_lib0move(&___nl__3,___get_global_const(1150));
#line 955
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 955
c_rt_lib0move(&___nl__4,___get_global_const(702));
#line 955
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 955
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__0, ___nl__2));
#line 955
c_rt_lib0move(&___nl__5,___get_global_const(702));
#line 955
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 955
c_rt_lib0move(&___nl__5,___get_global_const(1150));
#line 955
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__3));
#line 955
c_rt_lib0clear(&___nl__5);
#line 955
c_rt_lib0clear(&___nl__3);
#line 955
c_rt_lib0clear(&___nl__4);
#line 956
c_rt_lib0move(&___nl__3,___get_global_const(195));
#line 956
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 956
c_rt_lib0move(&___nl__4,___get_global_const(712));
#line 956
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 956
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__0, ___nl__2));
#line 956
c_rt_lib0move(&___nl__5,___get_global_const(712));
#line 956
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 956
c_rt_lib0move(&___nl__5,___get_global_const(195));
#line 956
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__3));
#line 956
c_rt_lib0clear(&___nl__5);
#line 956
c_rt_lib0clear(&___nl__3);
#line 956
c_rt_lib0clear(&___nl__4);
#line 957
c_rt_lib0clear(&___nl__0);
#line 957
return ___nl__2;
#line 957
c_rt_lib0clear(&___nl__2);
#line 957
c_rt_lib0clear(&___nl__0);
#line 957
return NULL;
}

ImmT translator_priv0new_register(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 961
c_rt_lib0move(&___nl__1,___get_global_const(1150));
#line 961
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_hash(*___ref___0, ___nl__1));
#line 961
c_rt_lib0move(&___nl__2,___get_global_const(1146));
#line 961
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(___nl__1, ___nl__2));
#line 961
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 961
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 961
c_rt_lib0move(&___nl__4,___get_global_const(1146));
#line 961
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__4, ___nl__2));
#line 961
c_rt_lib0move(&___nl__4,___get_global_const(1150));
#line 961
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__1));
#line 961
c_rt_lib0clear(&___nl__4);
#line 961
c_rt_lib0clear(&___nl__1);
#line 961
c_rt_lib0clear(&___nl__2);
#line 961
c_rt_lib0clear(&___nl__3);
#line 962
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1153)));
#line 962
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(189)));
#line 962
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1150)));
#line 962
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1146)));
#line 962
c_rt_lib0move(&___nl__1, c_rt_lib0lt(___nl__1, ___nl__2));
#line 962
c_rt_lib0clear(&___nl__2);
#line 962
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 962
if(c_rt_lib0check_true_native(___nl__1)){ goto label_35;}
#line 962
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1150)));
#line 962
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1146)));
#line 962
c_rt_lib0move(&___nl__3,___get_global_const(1153));
#line 962
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 962
c_rt_lib0copy(&___nl__4, ___nl__2);
#line 962
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(189), ___nl__4);
#line 962
c_rt_lib0move(&___nl__5,___get_global_const(1153));
#line 962
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 962
c_rt_lib0clear(&___nl__5);
#line 962
c_rt_lib0clear(&___nl__2);
#line 962
c_rt_lib0clear(&___nl__3);
#line 962
c_rt_lib0clear(&___nl__4);
#line 962
goto label_35;
#line 962
label_35:
#line 962
c_rt_lib0clear(&___nl__1);
#line 963
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1150)));
#line 963
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1146)));
#line 963
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 963
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 963
c_rt_lib0clear(&___nl__2);
#line 963
return ___nl__1;
#line 963
c_rt_lib0clear(&___nl__1);
#line 963
return NULL;
}

ImmT translator_priv0save_registers(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
#line 967
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1150)));
#line 967
return ___nl__1;
#line 967
c_rt_lib0clear(&___nl__1);
#line 967
return NULL;
}

ImmT translator_priv0undef_reg(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
#line 971
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__0));
#line 971
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__2));
#line 971
c_rt_lib0clear(&___nl__2);
#line 971
c_rt_lib0clear(&___nl__0);
#line 971
return NULL;
}

ImmT translator_priv0restore_registers(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 975
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(1146)));
#line 975
label_1:
#line 975
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1150)));
#line 975
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1146)));
#line 975
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 975
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 975
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 976
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(273), ___get_global_const(938)));
#line 976
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 976
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__2));
#line 976
c_rt_lib0clear(&___nl__5);
#line 976
c_rt_lib0delete(translator_priv0undef_reg(___nl__4, ___ref___1));
#line 976
c_rt_lib0clear(&___nl__4);
#line 975
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 975
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 975
c_rt_lib0clear(&___nl__4);
#line 977
goto label_1;
#line 977
label_17:
#line 977
c_rt_lib0clear(&___nl__2);
#line 977
c_rt_lib0clear(&___nl__3);
#line 978
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 978
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1150), ___nl__2);
#line 978
c_rt_lib0clear(&___nl__2);
#line 978
c_rt_lib0clear(&___nl__0);
#line 978
return NULL;
}

ImmT translator_priv0print_sim_label(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
#line 982
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__0));
#line 982
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__2));
#line 982
c_rt_lib0clear(&___nl__2);
#line 982
c_rt_lib0clear(&___nl__0);
#line 982
return NULL;
}

ImmT translator_priv0get_sim_label(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 986
c_rt_lib0move(&___nl__1,___get_global_const(1152));
#line 986
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_hash(*___ref___0, ___nl__1));
#line 986
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 986
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__2));
#line 986
c_rt_lib0move(&___nl__3,___get_global_const(1152));
#line 986
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__1));
#line 986
c_rt_lib0clear(&___nl__3);
#line 986
c_rt_lib0clear(&___nl__1);
#line 986
c_rt_lib0clear(&___nl__2);
#line 987
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1152)));
#line 987
return ___nl__1;
#line 987
c_rt_lib0clear(&___nl__1);
#line 987
return NULL;
}


static ImmT ___const__[8];
static int ___const_init__ = 1;
void translator0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[7];


for(int i=0;i<7;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 7);
}
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
