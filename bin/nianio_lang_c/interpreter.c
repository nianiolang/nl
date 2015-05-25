
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "interpreter.h"
#include "array.h"
#include "hash.h"
#include "nlasm.h"
#include "ov.h"
#include "ptd.h"
#include "boolean_t.h"
#include "nast.h"
#include "func.h"
#include "nl.h"
#include "string.h"
#include "string_utils.h"
#include "dfile.h"
#include "c_rt_lib.h"
#line 1 "interpreter.nl"

static ImmT *__const__f = NULL;
void interpreter_priv0__const__init();
ImmT interpreter_priv0__const__sim(int __nr);
ImmT interpreter_priv0__const__sing(int __nr);

ImmT interpreter_priv0build_state(ImmT ___nl__0,ImmT ___nl__1);
ImmT interpreter_priv0build_registers(ImmT ___nl__0);
ImmT interpreter_priv0build_labels(ImmT ___nl__0);
ImmT interpreter_priv0build_functions(ImmT ___nl__0);
ImmT interpreter_priv0get_stack_element_debug(ImmT ___nl__0,ImmT ___nl__1);
ImmT interpreter_priv0get_variables(ImmT ___nl__0);
ImmT interpreter_priv0get_instruction_nr(ImmT ___nl__0);
ImmT interpreter_priv0is_hidden(ImmT ___nl__0);
ImmT interpreter_priv0handle_new_declarations(ImmT * ___ref___0);
ImmT interpreter_priv0step(ImmT * ___ref___0);
ImmT interpreter_priv0check_command(ImmT ___nl__0,ImmT ___nl__1);
ImmT interpreter_priv0handle_normal_call(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT interpreter_priv0handle_extern_call(ImmT ___nl__0,ImmT * ___ref___1);
ImmT interpreter_priv0get_compiler_functions();
ImmT interpreter_priv0handle_array_call(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT interpreter_priv0handle_hash_call(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT interpreter_priv0handle_string_call(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT interpreter_priv0handle_ov_call(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT interpreter_priv0handle_c_rt_lib_call(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT interpreter_priv0handle_compiler_call(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT interpreter_priv0handle_return(ImmT ___nl__0,ImmT * ___ref___1);
ImmT interpreter_priv0goto(ImmT * ___ref___0,ImmT ___nl__1);
ImmT interpreter_priv0execute_bin_op(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT interpreter_priv0execute_una_op(ImmT ___nl__0,ImmT ___nl__1);
ImmT interpreter_priv0get_command(ImmT ___nl__0);
ImmT interpreter_priv0get_func_key(ImmT ___nl__0,ImmT ___nl__1);


ImmT interpreter0stack_element_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "interpreter0stack_element_t");
return interpreter0stack_element_t();}
ImmT interpreter0stack_element_t(){
interpreter_priv0__const__init();
return interpreter_priv0__const__sing(0);}
ImmT interpreter0stack_element_t0cal() {
interpreter_priv0__const__init();
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
#line 20
c_rt_lib0move(&___nl__2, ptd0sim());
#line 20
c_rt_lib0move(&___nl__3, ptd0sim());
#line 20
c_rt_lib0move(&___nl__4, ptd0sim());
#line 20
c_rt_lib0move(&___nl__6, ptd0ptd_im());
#line 20
c_rt_lib0move(&___nl__5, ptd0arr(___nl__6));
#line 20
c_rt_lib0clear(&___nl__6);
#line 20
c_rt_lib0move(&___nl__6, ptd0sim());
#line 20
c_rt_lib0move(&___nl__8, ptd0sim());
#line 20
c_rt_lib0move(&___nl__7, ptd0hash(___nl__8));
#line 20
c_rt_lib0clear(&___nl__8);
#line 20
c_rt_lib0move(&___nl__9, ptd0sim());
#line 20
c_rt_lib0move(&___nl__8, ptd0hash(___nl__9));
#line 20
c_rt_lib0clear(&___nl__9);
#line 20
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(7, ___get_global_const(617), ___nl__2, ___get_global_const(430), ___nl__3, ___get_global_const(202), ___nl__4, ___get_global_const(618), ___nl__5, ___get_global_const(291), ___nl__6, ___get_global_const(619), ___nl__7, ___get_global_const(620), ___nl__8));
#line 20
c_rt_lib0clear(&___nl__2);
#line 20
c_rt_lib0clear(&___nl__3);
#line 20
c_rt_lib0clear(&___nl__4);
#line 20
c_rt_lib0clear(&___nl__5);
#line 20
c_rt_lib0clear(&___nl__6);
#line 20
c_rt_lib0clear(&___nl__7);
#line 20
c_rt_lib0clear(&___nl__8);
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

ImmT interpreter0module_labels_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "interpreter0module_labels_t");
return interpreter0module_labels_t();}
ImmT interpreter0module_labels_t(){
interpreter_priv0__const__init();
return interpreter_priv0__const__sing(1);}
ImmT interpreter0module_labels_t0cal() {
interpreter_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 32
c_rt_lib0move(&___nl__2, ptd0sim());
#line 32
c_rt_lib0move(&___nl__1, ptd0hash(___nl__2));
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
return ___nl__0;
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return NULL;
}

ImmT interpreter0known_exec_func_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "interpreter0known_exec_func_t");
return interpreter0known_exec_func_t();}
ImmT interpreter0known_exec_func_t(){
interpreter_priv0__const__init();
return interpreter_priv0__const__sing(2);}
ImmT interpreter0known_exec_func_t0cal() {
interpreter_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 36
c_rt_lib0move(&___nl__2, ptd0ptd_im());
#line 36
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(621), ___get_global_const(622)));
#line 36
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 36
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 36
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0move(&___nl__6, ptd0none());
#line 36
c_rt_lib0move(&___nl__7, ptd0none());
#line 36
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(623), ___nl__6, ___get_global_const(70), ___nl__7));
#line 36
c_rt_lib0clear(&___nl__6);
#line 36
c_rt_lib0clear(&___nl__7);
#line 36
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 36
c_rt_lib0clear(&___nl__5);
#line 36
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(71), ___nl__2, ___get_global_const(73), ___nl__3, ___get_global_const(72), ___nl__4));
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0clear(&___nl__4);
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

ImmT interpreter0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "interpreter0state_t");
return interpreter0state_t();}
ImmT interpreter0state_t(){
interpreter_priv0__const__init();
return interpreter_priv0__const__sing(3);}
ImmT interpreter0state_t0cal() {
interpreter_priv0__const__init();
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
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
#line 46
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(interpreter0rstate_t0ptr, ___get_global_const(624), ___get_global_const(625)));
#line 46
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 46
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_const(190), ___get_global_const(626)));
#line 46
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 46
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(interpreter0module_labels_t0ptr, ___get_global_const(624), ___get_global_const(627)));
#line 46
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 46
c_rt_lib0move(&___nl__4, ptd0hash(___nl__5));
#line 46
c_rt_lib0clear(&___nl__5);
#line 46
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_const(190), ___get_global_const(626)));
#line 46
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 46
c_rt_lib0move(&___nl__5, ptd0hash(___nl__6));
#line 46
c_rt_lib0clear(&___nl__6);
#line 46
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(interpreter0stack_element_t0ptr, ___get_global_const(624), ___get_global_const(628)));
#line 46
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 46
c_rt_lib0move(&___nl__6, ptd0arr(___nl__7));
#line 46
c_rt_lib0clear(&___nl__7);
#line 46
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(interpreter0stack_element_t0ptr, ___get_global_const(624), ___get_global_const(628)));
#line 46
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 46
c_rt_lib0move(&___nl__8, ptd0sim());
#line 46
c_rt_lib0move(&___nl__9, ptd0sim());
#line 46
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(180), ___get_global_const(72)));
#line 46
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 46
c_rt_lib0move(&___nl__12, c_rt_lib0func_new(interpreter0known_exec_func_t0ptr, ___get_global_const(624), ___get_global_const(629)));
#line 46
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__12));
#line 46
c_rt_lib0move(&___nl__11, ptd0hash(___nl__12));
#line 46
c_rt_lib0clear(&___nl__12);
#line 46
c_rt_lib0move(&___nl__13, ptd0sim());
#line 46
c_rt_lib0move(&___nl__12, ptd0hash(___nl__13));
#line 46
c_rt_lib0clear(&___nl__13);
#line 46
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(11, ___get_global_const(630), ___nl__2, ___get_global_const(71), ___nl__3, ___get_global_const(631), ___nl__4, ___get_global_const(75), ___nl__5, ___get_global_const(632), ___nl__6, ___get_global_const(633), ___nl__7, ___get_global_const(634), ___nl__8, ___get_global_const(635), ___nl__9, ___get_global_const(636), ___nl__10, ___get_global_const(637), ___nl__11, ___get_global_const(638), ___nl__12));
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0clear(&___nl__3);
#line 46
c_rt_lib0clear(&___nl__4);
#line 46
c_rt_lib0clear(&___nl__5);
#line 46
c_rt_lib0clear(&___nl__6);
#line 46
c_rt_lib0clear(&___nl__7);
#line 46
c_rt_lib0clear(&___nl__8);
#line 46
c_rt_lib0clear(&___nl__9);
#line 46
c_rt_lib0clear(&___nl__10);
#line 46
c_rt_lib0clear(&___nl__11);
#line 46
c_rt_lib0clear(&___nl__12);
#line 46
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 46
c_rt_lib0clear(&___nl__1);
#line 46
return ___nl__0;
#line 46
c_rt_lib0clear(&___nl__0);
#line 46
return NULL;
}

ImmT interpreter0rstate_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "interpreter0rstate_t");
return interpreter0rstate_t();}
ImmT interpreter0rstate_t(){
interpreter_priv0__const__init();
return interpreter_priv0__const__sing(4);}
ImmT interpreter0rstate_t0cal() {
interpreter_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 62
c_rt_lib0move(&___nl__2, ptd0none());
#line 62
c_rt_lib0move(&___nl__3, ptd0sim());
#line 62
c_rt_lib0move(&___nl__4, ptd0sim());
#line 62
c_rt_lib0move(&___nl__5, ptd0ptd_im());
#line 62
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(639), ___nl__2, ___get_global_const(95), ___nl__3, ___get_global_const(623), ___nl__4, ___get_global_const(640), ___nl__5));
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
c_rt_lib0clear(&___nl__5);
#line 62
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 62
c_rt_lib0clear(&___nl__1);
#line 62
return ___nl__0;
#line 62
c_rt_lib0clear(&___nl__0);
#line 62
return NULL;
}

ImmT interpreter0stack_element_debug_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "interpreter0stack_element_debug_t");
return interpreter0stack_element_debug_t();}
ImmT interpreter0stack_element_debug_t(){
interpreter_priv0__const__init();
return interpreter_priv0__const__sing(5);}
ImmT interpreter0stack_element_debug_t0cal() {
interpreter_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 71
c_rt_lib0move(&___nl__5, ptd0sim());
#line 71
c_rt_lib0move(&___nl__6, ptd0ptd_im());
#line 71
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(76), ___nl__5, ___get_global_const(641), ___nl__6));
#line 71
c_rt_lib0clear(&___nl__5);
#line 71
c_rt_lib0clear(&___nl__6);
#line 71
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 71
c_rt_lib0clear(&___nl__4);
#line 71
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(12), ___get_global_const(642)));
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 71
c_rt_lib0move(&___nl__4, ptd0sim());
#line 71
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(643), ___nl__2, ___get_global_const(644), ___nl__3, ___get_global_const(645), ___nl__4));
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0clear(&___nl__4);
#line 71
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 71
c_rt_lib0clear(&___nl__1);
#line 71
return ___nl__0;
#line 71
c_rt_lib0clear(&___nl__0);
#line 71
return NULL;
}

ImmT interpreter_priv0build_state(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
interpreter_priv0__const__init();
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
#line 84
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 84
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(640), ___nl__3));
#line 84
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 84
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(330)));
#line 84
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 84
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 84
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 84
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 84
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(6, ___get_global_const(212), ___nl__5, ___get_global_const(328), ___nl__6, ___get_global_const(378), ___nl__7, ___get_global_const(331), ___nl__8, ___get_global_const(380), ___nl__9, ___get_global_const(76), ___nl__10));
#line 84
c_rt_lib0clear(&___nl__5);
#line 84
c_rt_lib0clear(&___nl__6);
#line 84
c_rt_lib0clear(&___nl__7);
#line 84
c_rt_lib0clear(&___nl__8);
#line 84
c_rt_lib0clear(&___nl__9);
#line 84
c_rt_lib0clear(&___nl__10);
#line 84
c_rt_lib0move(&___nl__5, interpreter_priv0build_labels(___nl__0));
#line 84
c_rt_lib0move(&___nl__6, interpreter_priv0build_functions(___nl__0));
#line 84
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 84
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 84
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 84
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 84
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(0));
#line 84
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 84
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(0));
#line 84
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(0));
#line 84
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(7, ___get_global_const(617), ___nl__9, ___get_global_const(430), ___nl__10, ___get_global_const(202), ___nl__11, ___get_global_const(618), ___nl__12, ___get_global_const(291), ___nl__13, ___get_global_const(619), ___nl__14, ___get_global_const(620), ___nl__15));
#line 84
c_rt_lib0clear(&___nl__9);
#line 84
c_rt_lib0clear(&___nl__10);
#line 84
c_rt_lib0clear(&___nl__11);
#line 84
c_rt_lib0clear(&___nl__12);
#line 84
c_rt_lib0clear(&___nl__13);
#line 84
c_rt_lib0clear(&___nl__14);
#line 84
c_rt_lib0clear(&___nl__15);
#line 84
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 84
c_rt_lib0move(&___nl__9, c_rt_lib0unary_minus(___nl__9));
#line 84
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 84
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 84
c_rt_lib0move(&___nl__12, interpreter_priv0get_compiler_functions());
#line 84
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(11, ___get_global_const(630), ___nl__3, ___get_global_const(71), ___nl__4, ___get_global_const(631), ___nl__5, ___get_global_const(75), ___nl__6, ___get_global_const(632), ___nl__7, ___get_global_const(633), ___nl__8, ___get_global_const(634), ___nl__9, ___get_global_const(635), ___nl__10, ___get_global_const(636), ___nl__11, ___get_global_const(637), ___nl__1, ___get_global_const(638), ___nl__12));
#line 84
c_rt_lib0clear(&___nl__3);
#line 84
c_rt_lib0clear(&___nl__4);
#line 84
c_rt_lib0clear(&___nl__5);
#line 84
c_rt_lib0clear(&___nl__6);
#line 84
c_rt_lib0clear(&___nl__7);
#line 84
c_rt_lib0clear(&___nl__8);
#line 84
c_rt_lib0clear(&___nl__9);
#line 84
c_rt_lib0clear(&___nl__10);
#line 84
c_rt_lib0clear(&___nl__11);
#line 84
c_rt_lib0clear(&___nl__12);
#line 84
c_rt_lib0clear(&___nl__0);
#line 84
c_rt_lib0clear(&___nl__1);
#line 84
return ___nl__2;
#line 84
c_rt_lib0clear(&___nl__2);
#line 84
c_rt_lib0clear(&___nl__0);
#line 84
c_rt_lib0clear(&___nl__1);
#line 84
return NULL;
}

ImmT interpreter0init0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "interpreter0init");
return interpreter0init(_tab[0], _tab[1]);}
ImmT interpreter0init(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
interpreter_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 108
c_rt_lib0move(&___nl__2, interpreter_priv0build_state(___nl__0, ___nl__1));
#line 108
c_rt_lib0clear(&___nl__0);
#line 108
c_rt_lib0clear(&___nl__1);
#line 108
return ___nl__2;
#line 108
c_rt_lib0clear(&___nl__2);
#line 108
c_rt_lib0clear(&___nl__0);
#line 108
c_rt_lib0clear(&___nl__1);
#line 108
return NULL;
}

ImmT interpreter0start0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "interpreter0start");
return interpreter0start(&_tab[0], _tab[1], _tab[2]);}
ImmT interpreter0start(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
interpreter_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 113
c_rt_lib0move(&___nl__3,___get_global_const(579));
#line 113
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__3));
#line 113
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 114
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(75)));
#line 114
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__3));
#line 114
c_rt_lib0clear(&___nl__5);
#line 114
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 114
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 114
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 115
c_rt_lib0move(&___nl__5,___get_global_const(646));
#line 115
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 115
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__5));
#line 115
c_rt_lib0clear(&___nl__1);
#line 115
c_rt_lib0clear(&___nl__2);
#line 115
c_rt_lib0clear(&___nl__3);
#line 115
c_rt_lib0clear(&___nl__4);
#line 115
return ___nl__5;
#line 115
c_rt_lib0clear(&___nl__5);
#line 116
goto label_2;
#line 116
label_2:
#line 116
c_rt_lib0clear(&___nl__4);
#line 117
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(639)));
#line 117
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 117
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(630), ___nl__5);
#line 117
c_rt_lib0clear(&___nl__4);
#line 117
c_rt_lib0clear(&___nl__5);
#line 118
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(75)));
#line 118
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__3));
#line 118
c_rt_lib0clear(&___nl__5);
#line 119
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 119
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(71), ___nl__5);
#line 119
c_rt_lib0clear(&___nl__5);
#line 120
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 120
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 120
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(632), ___nl__6);
#line 120
c_rt_lib0clear(&___nl__5);
#line 120
c_rt_lib0clear(&___nl__6);
#line 121
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 121
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(378)));
#line 121
c_rt_lib0move(&___nl__7, interpreter_priv0build_registers(___nl__8));
#line 121
c_rt_lib0clear(&___nl__8);
#line 121
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 121
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 121
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 121
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(7, ___get_global_const(617), ___nl__3, ___get_global_const(430), ___nl__2, ___get_global_const(202), ___nl__6, ___get_global_const(618), ___nl__7, ___get_global_const(291), ___nl__8, ___get_global_const(619), ___nl__9, ___get_global_const(620), ___nl__10));
#line 121
c_rt_lib0clear(&___nl__6);
#line 121
c_rt_lib0clear(&___nl__7);
#line 121
c_rt_lib0clear(&___nl__8);
#line 121
c_rt_lib0clear(&___nl__9);
#line 121
c_rt_lib0clear(&___nl__10);
#line 121
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 121
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(633), ___nl__6);
#line 121
c_rt_lib0clear(&___nl__5);
#line 121
c_rt_lib0clear(&___nl__6);
#line 130
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 130
c_rt_lib0move(&___nl__5, c_rt_lib0unary_minus(___nl__5));
#line 130
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 130
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(634), ___nl__6);
#line 130
c_rt_lib0clear(&___nl__5);
#line 130
c_rt_lib0clear(&___nl__6);
#line 131
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 131
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 131
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(635), ___nl__6);
#line 131
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0clear(&___nl__6);
#line 132
c_rt_lib0delete(interpreter_priv0handle_new_declarations(___ref___0));
#line 133
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 133
c_rt_lib0clear(&___nl__1);
#line 133
c_rt_lib0clear(&___nl__2);
#line 133
c_rt_lib0clear(&___nl__3);
#line 133
c_rt_lib0clear(&___nl__4);
#line 133
return ___nl__5;
#line 133
c_rt_lib0clear(&___nl__5);
#line 133
c_rt_lib0clear(&___nl__3);
#line 133
c_rt_lib0clear(&___nl__4);
#line 133
c_rt_lib0clear(&___nl__1);
#line 133
c_rt_lib0clear(&___nl__2);
#line 133
return NULL;
}

ImmT interpreter0exec_all_code0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "interpreter0exec_all_code");
return interpreter0exec_all_code(_tab[0]);}
ImmT interpreter0exec_all_code(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 136
c_rt_lib0delete(interpreter_priv0step(&___nl__0));
#line 137
label_2:
#line 138
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(630)));
#line 138
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(95)));
#line 138
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 140
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(639)));
#line 140
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 142
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(623)));
#line 142
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 145
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(640)));
#line 145
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 145
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 145
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 145
nl_die_arg(___nl__2);
#line 138
label_4:
#line 138
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(95)));
#line 139
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__3));
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
return ___nl__4;
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0clear(&___nl__3);
#line 140
goto label_3;
#line 140
label_5:
#line 141
c_rt_lib0delete(interpreter_priv0step(&___nl__0));
#line 142
goto label_3;
#line 142
label_6:
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(623)));
#line 142
c_rt_lib0clear(&___nl__3);
#line 145
goto label_3;
#line 145
label_7:
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(640)));
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__3));
#line 146
c_rt_lib0clear(&___nl__0);
#line 146
c_rt_lib0clear(&___nl__1);
#line 146
c_rt_lib0clear(&___nl__2);
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
return ___nl__4;
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0clear(&___nl__3);
#line 147
goto label_3;
#line 147
label_3:
#line 147
c_rt_lib0clear(&___nl__1);
#line 147
c_rt_lib0clear(&___nl__2);
#line 137
goto label_2;
#line 149
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 149
c_rt_lib0clear(&___nl__0);
#line 149
return ___nl__1;
#line 149
c_rt_lib0clear(&___nl__1);
#line 149
c_rt_lib0clear(&___nl__0);
#line 149
return NULL;
}

ImmT interpreter0evaluate_const0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 5, "interpreter0evaluate_const");
return interpreter0evaluate_const(_tab[0], _tab[1], _tab[2], _tab[3], _tab[4]);}
ImmT interpreter0evaluate_const(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
interpreter_priv0__const__init();
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 155
c_rt_lib0move(&___nl__5, interpreter_priv0get_func_key(___nl__1, ___nl__2));
#line 156
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(75)));
#line 156
c_rt_lib0move(&___nl__6, hash0has_key(___nl__7, ___nl__5));
#line 156
c_rt_lib0clear(&___nl__7);
#line 156
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 156
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 156
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 156
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 156
nl_die_arg(___nl__7);
#line 156
goto label_2;
#line 156
label_2:
#line 156
c_rt_lib0clear(&___nl__6);
#line 156
c_rt_lib0clear(&___nl__7);
#line 157
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(639)));
#line 157
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 157
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(630), ___nl__7);
#line 157
c_rt_lib0clear(&___nl__6);
#line 157
c_rt_lib0clear(&___nl__7);
#line 158
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(75)));
#line 158
c_rt_lib0move(&___nl__6, hash0get_value(___nl__7, ___nl__5));
#line 158
c_rt_lib0clear(&___nl__7);
#line 158
c_rt_lib0copy(&___nl__1, ___nl__6);
#line 158
c_rt_lib0clear(&___nl__6);
#line 159
c_rt_lib0copy(&___nl__6, ___nl__1);
#line 159
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(71), ___nl__6);
#line 159
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 160
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 160
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(632), ___nl__7);
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0clear(&___nl__7);
#line 161
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 161
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 161
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 161
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(7, ___get_global_const(617), ___nl__5, ___get_global_const(430), ___nl__2, ___get_global_const(202), ___nl__4, ___get_global_const(618), ___nl__3, ___get_global_const(291), ___nl__7, ___get_global_const(619), ___nl__8, ___get_global_const(620), ___nl__9));
#line 161
c_rt_lib0clear(&___nl__7);
#line 161
c_rt_lib0clear(&___nl__8);
#line 161
c_rt_lib0clear(&___nl__9);
#line 161
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 161
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(633), ___nl__7);
#line 161
c_rt_lib0clear(&___nl__6);
#line 161
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 170
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 170
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(634), ___nl__7);
#line 170
c_rt_lib0clear(&___nl__6);
#line 170
c_rt_lib0clear(&___nl__7);
#line 171
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 171
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 171
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(635), ___nl__7);
#line 171
c_rt_lib0clear(&___nl__6);
#line 171
c_rt_lib0clear(&___nl__7);
#line 172
c_rt_lib0delete(interpreter_priv0handle_new_declarations(&___nl__0));
#line 173
c_rt_lib0delete(interpreter_priv0step(&___nl__0));
#line 174
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 175
label_4:
#line 175
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(632)));
#line 175
c_rt_lib0move(&___nl__7, array0len(___nl__9));
#line 175
c_rt_lib0clear(&___nl__9);
#line 175
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 175
c_rt_lib0move(&___nl__7, c_rt_lib0num_ne(___nl__7, ___nl__9));
#line 175
c_rt_lib0clear(&___nl__9);
#line 175
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 175
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 175
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(630)));
#line 175
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(639)));
#line 175
label_5:
#line 175
c_rt_lib0clear(&___nl__8);
#line 175
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 175
if(c_rt_lib0check_true_native(___nl__7)){ goto label_3;}
#line 176
c_rt_lib0move(&___nl__8,___get_global_const(647));
#line 176
c_rt_lib0move(&___nl__8, c_rt_lib0gt(___nl__6, ___nl__8));
#line 176
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 176
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 177
c_rt_lib0move(&___nl__9,___get_global_const(648));
#line 177
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__9));
#line 177
c_rt_lib0clear(&___nl__0);
#line 177
c_rt_lib0clear(&___nl__1);
#line 177
c_rt_lib0clear(&___nl__2);
#line 177
c_rt_lib0clear(&___nl__3);
#line 177
c_rt_lib0clear(&___nl__4);
#line 177
c_rt_lib0clear(&___nl__5);
#line 177
c_rt_lib0clear(&___nl__6);
#line 177
c_rt_lib0clear(&___nl__7);
#line 177
c_rt_lib0clear(&___nl__8);
#line 177
return ___nl__9;
#line 177
c_rt_lib0clear(&___nl__9);
#line 178
goto label_7;
#line 178
label_7:
#line 178
c_rt_lib0clear(&___nl__8);
#line 179
c_rt_lib0delete(interpreter_priv0step(&___nl__0));
#line 180
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 180
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__8));
#line 180
c_rt_lib0clear(&___nl__8);
#line 181
goto label_4;
#line 181
label_3:
#line 181
c_rt_lib0clear(&___nl__7);
#line 182
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(630)));
#line 182
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(95)));
#line 182
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 182
if(c_rt_lib0check_true_native(___nl__7)){ goto label_9;}
#line 183
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(630)));
#line 183
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(95)));
#line 183
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__8));
#line 183
c_rt_lib0clear(&___nl__0);
#line 183
c_rt_lib0clear(&___nl__1);
#line 183
c_rt_lib0clear(&___nl__2);
#line 183
c_rt_lib0clear(&___nl__3);
#line 183
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0clear(&___nl__5);
#line 183
c_rt_lib0clear(&___nl__6);
#line 183
c_rt_lib0clear(&___nl__7);
#line 183
return ___nl__8;
#line 183
c_rt_lib0clear(&___nl__8);
#line 184
goto label_8;
#line 184
label_9:
#line 185
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 185
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(618)));
#line 185
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__8));
#line 185
c_rt_lib0clear(&___nl__0);
#line 185
c_rt_lib0clear(&___nl__1);
#line 185
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0clear(&___nl__3);
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0clear(&___nl__6);
#line 185
c_rt_lib0clear(&___nl__7);
#line 185
return ___nl__8;
#line 185
c_rt_lib0clear(&___nl__8);
#line 186
goto label_8;
#line 186
label_8:
#line 186
c_rt_lib0clear(&___nl__7);
#line 186
c_rt_lib0clear(&___nl__5);
#line 186
c_rt_lib0clear(&___nl__6);
#line 186
c_rt_lib0clear(&___nl__0);
#line 186
c_rt_lib0clear(&___nl__1);
#line 186
c_rt_lib0clear(&___nl__2);
#line 186
c_rt_lib0clear(&___nl__3);
#line 186
c_rt_lib0clear(&___nl__4);
#line 186
return NULL;
}

ImmT interpreter0get_none_variant0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "interpreter0get_none_variant");
return interpreter0get_none_variant();}
ImmT interpreter0get_none_variant(){
interpreter_priv0__const__init();
return interpreter_priv0__const__sing(6);}
ImmT interpreter0get_none_variant0cal() {
interpreter_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 190
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(649)));
#line 190
return ___nl__0;
#line 190
c_rt_lib0clear(&___nl__0);
#line 190
return NULL;
}

ImmT interpreter_priv0build_registers(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 194
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 195
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 195
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 195
label_3:
#line 195
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__0));
#line 195
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 195
c_rt_lib0move(&___nl__5, interpreter0get_none_variant());
#line 195
c_rt_lib0delete(array0push(&___nl__1, ___nl__5));
#line 195
c_rt_lib0clear(&___nl__5);
#line 195
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 195
goto label_3;
#line 195
label_1:
#line 195
c_rt_lib0clear(&___nl__2);
#line 195
c_rt_lib0clear(&___nl__3);
#line 195
c_rt_lib0clear(&___nl__4);
#line 196
c_rt_lib0clear(&___nl__0);
#line 196
return ___nl__1;
#line 196
c_rt_lib0clear(&___nl__1);
#line 196
c_rt_lib0clear(&___nl__0);
#line 196
return NULL;
}

ImmT interpreter_priv0build_labels(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
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
ImmT ___nl__20 = NULL;
ImmT ___nl__21 = NULL;
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
#line 200
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 201
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 201
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 201
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 201
label_3:
#line 201
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 201
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 201
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 202
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(430)));
#line 203
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 204
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(75)));
#line 204
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 204
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 204
c_rt_lib0move(&___nl__13, c_rt_lib0array_len(___nl__9));
#line 204
label_6:
#line 204
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__11, ___nl__13));
#line 204
if(c_rt_lib0check_true_native(___nl__14)){ goto label_4;}
#line 204
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__9, ___nl__11));
#line 205
c_rt_lib0move(&___nl__15, interpreter_priv0get_func_key(___nl__10, ___nl__7));
#line 206
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(0));
#line 207
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(380)));
#line 207
c_rt_lib0move(&___nl__17, array0len(___nl__18));
#line 207
c_rt_lib0clear(&___nl__18);
#line 207
c_rt_lib0move(&___nl__18,___get_global_const(1));
#line 207
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 207
label_9:
#line 207
c_rt_lib0move(&___nl__20, c_rt_lib0ge(___nl__18, ___nl__17));
#line 207
if(c_rt_lib0check_true_native(___nl__20)){ goto label_7;}
#line 208
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(380)));
#line 208
c_rt_lib0move(&___nl__21, c_rt_lib0array_get(___nl__21, ___nl__18));
#line 208
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(209)));
#line 209
c_rt_lib0copy(&___nl__22, ___nl__21);
#line 209
c_rt_lib0move(&___nl__22, c_rt_lib0priv_is(___nl__22, ___get_global_const(230)));
#line 209
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 209
if(c_rt_lib0check_true_native(___nl__22)){ goto label_11;}
#line 210
c_rt_lib0copy(&___nl__23, ___nl__21);
#line 210
c_rt_lib0move(&___nl__23, c_rt_lib0priv_as(___nl__23, ___get_global_const(230)));
#line 211
c_rt_lib0delete(hash0set_value(&___nl__16, ___nl__23, ___nl__18));
#line 211
c_rt_lib0clear(&___nl__23);
#line 212
goto label_11;
#line 212
label_11:
#line 212
c_rt_lib0clear(&___nl__22);
#line 212
c_rt_lib0clear(&___nl__21);
#line 213
c_rt_lib0move(&___nl__18, c_rt_lib0add_mod(___nl__18, ___nl__19));
#line 213
goto label_9;
#line 213
label_7:
#line 213
c_rt_lib0clear(&___nl__17);
#line 213
c_rt_lib0clear(&___nl__18);
#line 213
c_rt_lib0clear(&___nl__19);
#line 213
c_rt_lib0clear(&___nl__20);
#line 214
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__15, ___nl__16));
#line 214
c_rt_lib0clear(&___nl__15);
#line 214
c_rt_lib0clear(&___nl__16);
#line 215
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__12));
#line 215
goto label_6;
#line 215
label_4:
#line 215
c_rt_lib0clear(&___nl__9);
#line 215
c_rt_lib0clear(&___nl__10);
#line 215
c_rt_lib0clear(&___nl__11);
#line 215
c_rt_lib0clear(&___nl__12);
#line 215
c_rt_lib0clear(&___nl__13);
#line 215
c_rt_lib0clear(&___nl__14);
#line 216
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(430)));
#line 216
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__9, ___nl__8));
#line 216
c_rt_lib0clear(&___nl__9);
#line 216
c_rt_lib0clear(&___nl__7);
#line 216
c_rt_lib0clear(&___nl__8);
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 217
goto label_3;
#line 217
label_1:
#line 217
c_rt_lib0clear(&___nl__2);
#line 217
c_rt_lib0clear(&___nl__3);
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0clear(&___nl__5);
#line 217
c_rt_lib0clear(&___nl__6);
#line 218
c_rt_lib0clear(&___nl__0);
#line 218
return ___nl__1;
#line 218
c_rt_lib0clear(&___nl__1);
#line 218
c_rt_lib0clear(&___nl__0);
#line 218
return NULL;
}

ImmT interpreter_priv0build_functions(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
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
#line 222
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 223
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 223
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 223
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 223
label_3:
#line 223
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 223
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 223
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 224
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(430)));
#line 225
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(75)));
#line 225
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 225
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 225
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 225
label_6:
#line 225
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 225
if(c_rt_lib0check_true_native(___nl__13)){ goto label_4;}
#line 225
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 226
c_rt_lib0move(&___nl__14, interpreter_priv0get_func_key(___nl__9, ___nl__7));
#line 227
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__14, ___nl__9));
#line 227
c_rt_lib0clear(&___nl__14);
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 228
goto label_6;
#line 228
label_4:
#line 228
c_rt_lib0clear(&___nl__8);
#line 228
c_rt_lib0clear(&___nl__9);
#line 228
c_rt_lib0clear(&___nl__10);
#line 228
c_rt_lib0clear(&___nl__11);
#line 228
c_rt_lib0clear(&___nl__12);
#line 228
c_rt_lib0clear(&___nl__13);
#line 228
c_rt_lib0clear(&___nl__7);
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 229
goto label_3;
#line 229
label_1:
#line 229
c_rt_lib0clear(&___nl__2);
#line 229
c_rt_lib0clear(&___nl__3);
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0clear(&___nl__6);
#line 230
c_rt_lib0clear(&___nl__0);
#line 230
return ___nl__1;
#line 230
c_rt_lib0clear(&___nl__1);
#line 230
c_rt_lib0clear(&___nl__0);
#line 230
return NULL;
}

ImmT interpreter_priv0get_stack_element_debug(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
interpreter_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(75)));
#line 234
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(617)));
#line 234
c_rt_lib0move(&___nl__2, hash0get_value(___nl__3, ___nl__4));
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0clear(&___nl__3);
#line 235
c_rt_lib0move(&___nl__4, interpreter_priv0get_variables(___nl__0));
#line 235
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(380)));
#line 235
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(202)));
#line 235
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 235
c_rt_lib0clear(&___nl__6);
#line 235
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(213)));
#line 235
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(395)));
#line 235
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(76)));
#line 235
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(643), ___nl__4, ___get_global_const(644), ___nl__5, ___get_global_const(645), ___nl__6));
#line 235
c_rt_lib0clear(&___nl__4);
#line 235
c_rt_lib0clear(&___nl__5);
#line 235
c_rt_lib0clear(&___nl__6);
#line 235
c_rt_lib0clear(&___nl__0);
#line 235
c_rt_lib0clear(&___nl__1);
#line 235
c_rt_lib0clear(&___nl__2);
#line 235
return ___nl__3;
#line 235
c_rt_lib0clear(&___nl__3);
#line 235
c_rt_lib0clear(&___nl__2);
#line 235
c_rt_lib0clear(&___nl__0);
#line 235
c_rt_lib0clear(&___nl__1);
#line 235
return NULL;
}

ImmT interpreter0get_whole_stack_debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "interpreter0get_whole_stack_debug");
return interpreter0get_whole_stack_debug(_tab[0]);}
ImmT interpreter0get_whole_stack_debug(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
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
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(630)));
#line 244
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(640)));
#line 244
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 244
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 244
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 244
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 244
c_rt_lib0move(&___nl__3, interpreter_priv0get_stack_element_debug(___nl__4, ___nl__0));
#line 244
c_rt_lib0clear(&___nl__4);
#line 244
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 244
c_rt_lib0clear(&___nl__3);
#line 244
goto label_2;
#line 244
label_2:
#line 244
c_rt_lib0clear(&___nl__2);
#line 245
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(632)));
#line 245
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 245
c_rt_lib0clear(&___nl__3);
#line 246
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 246
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 246
label_5:
#line 246
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 246
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 247
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(632)));
#line 247
c_rt_lib0move(&___nl__8, c_rt_lib0sub(___nl__2, ___nl__3));
#line 247
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 247
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 247
c_rt_lib0clear(&___nl__9);
#line 247
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 247
c_rt_lib0clear(&___nl__8);
#line 247
c_rt_lib0move(&___nl__6, interpreter_priv0get_stack_element_debug(___nl__7, ___nl__0));
#line 247
c_rt_lib0clear(&___nl__7);
#line 247
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 247
c_rt_lib0clear(&___nl__6);
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 248
goto label_5;
#line 248
label_3:
#line 248
c_rt_lib0clear(&___nl__3);
#line 248
c_rt_lib0clear(&___nl__4);
#line 248
c_rt_lib0clear(&___nl__5);
#line 249
c_rt_lib0clear(&___nl__0);
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
return ___nl__1;
#line 249
c_rt_lib0clear(&___nl__1);
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
c_rt_lib0clear(&___nl__0);
#line 249
return NULL;
}

ImmT interpreter0has_next_instruction0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "interpreter0has_next_instruction");
return interpreter0has_next_instruction(_tab[0]);}
ImmT interpreter0has_next_instruction(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 253
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 253
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(202)));
#line 253
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(71)));
#line 253
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(380)));
#line 253
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 253
c_rt_lib0clear(&___nl__3);
#line 253
c_rt_lib0move(&___nl__1, c_rt_lib0lt(___nl__1, ___nl__2));
#line 253
c_rt_lib0clear(&___nl__2);
#line 253
c_rt_lib0clear(&___nl__0);
#line 253
return ___nl__1;
#line 253
c_rt_lib0clear(&___nl__1);
#line 253
c_rt_lib0clear(&___nl__0);
#line 253
return NULL;
}

ImmT interpreter_priv0get_variables(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 258
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(619)));
#line 259
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__2));
#line 259
label_3:
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 259
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 259
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__2, ___nl__3));
#line 260
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(618)));
#line 260
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__4));
#line 261
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(76), ___nl__3, ___get_global_const(641), ___nl__6));
#line 261
c_rt_lib0delete(array0push(&___nl__1, ___nl__7));
#line 261
c_rt_lib0clear(&___nl__7);
#line 261
c_rt_lib0clear(&___nl__6);
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 262
goto label_3;
#line 262
label_1:
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
c_rt_lib0clear(&___nl__3);
#line 262
c_rt_lib0clear(&___nl__4);
#line 262
c_rt_lib0clear(&___nl__5);
#line 263
c_rt_lib0clear(&___nl__0);
#line 263
return ___nl__1;
#line 263
c_rt_lib0clear(&___nl__1);
#line 263
c_rt_lib0clear(&___nl__0);
#line 263
return NULL;
}

ImmT interpreter_priv0get_instruction_nr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 267
c_rt_lib0move(&___nl__1, interpreter_priv0get_command(___nl__0));
#line 267
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(213)));
#line 267
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(634)));
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
return ___nl__1;
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
return NULL;
}

ImmT interpreter_priv0is_hidden(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 271
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 271
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(230)));
#line 271
if(c_rt_lib0check_true_native(___nl__1)){ goto label_1;}
#line 271
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 271
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(195)));
#line 271
label_1:
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

ImmT interpreter0execute_full_instruction0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "interpreter0execute_full_instruction");
return interpreter0execute_full_instruction(&_tab[0]);}
ImmT interpreter0execute_full_instruction(ImmT * ___ref___0) {
interpreter_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 275
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(630)));
#line 275
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(639)));
#line 275
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 275
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 275
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 275
c_rt_lib0clear(&___nl__1);
#line 275
return NULL;
#line 275
goto label_2;
#line 275
label_2:
#line 275
c_rt_lib0clear(&___nl__1);
#line 276
c_rt_lib0move(&___nl__1, interpreter_priv0get_instruction_nr(*___ref___0));
#line 276
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 276
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(634), ___nl__2);
#line 276
c_rt_lib0clear(&___nl__1);
#line 276
c_rt_lib0clear(&___nl__2);
#line 277
label_4:
#line 278
c_rt_lib0move(&___nl__1, interpreter_priv0get_command(*___ref___0));
#line 279
c_rt_lib0move(&___nl__2, interpreter_priv0is_hidden(___nl__1));
#line 279
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 279
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 279
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(634)));
#line 280
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(213)));
#line 280
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(634)));
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 280
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 280
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 280
c_rt_lib0clear(&___nl__1);
#line 280
c_rt_lib0clear(&___nl__2);
#line 280
c_rt_lib0clear(&___nl__3);
#line 280
goto label_3;
#line 280
goto label_8;
#line 280
label_8:
#line 280
c_rt_lib0clear(&___nl__3);
#line 281
goto label_6;
#line 281
label_6:
#line 281
c_rt_lib0clear(&___nl__2);
#line 282
c_rt_lib0delete(interpreter_priv0step(___ref___0));
#line 283
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(630)));
#line 283
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(95)));
#line 283
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 283
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
c_rt_lib0clear(&___nl__2);
#line 283
goto label_3;
#line 283
goto label_10;
#line 283
label_10:
#line 283
c_rt_lib0clear(&___nl__2);
#line 284
c_rt_lib0move(&___nl__2, interpreter0has_next_instruction(*___ref___0));
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 284
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 284
c_rt_lib0clear(&___nl__1);
#line 284
c_rt_lib0clear(&___nl__2);
#line 284
goto label_3;
#line 284
goto label_12;
#line 284
label_12:
#line 284
c_rt_lib0clear(&___nl__2);
#line 284
c_rt_lib0clear(&___nl__1);
#line 277
goto label_4;
#line 277
label_3:
#line 277
return NULL;
}

ImmT interpreter_priv0handle_new_declarations(ImmT * ___ref___0) {
interpreter_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 289
c_rt_lib0move(&___nl__1, interpreter0has_next_instruction(*___ref___0));
#line 289
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 289
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 289
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 289
c_rt_lib0clear(&___nl__1);
#line 289
return NULL;
#line 289
goto label_2;
#line 289
label_2:
#line 289
c_rt_lib0clear(&___nl__1);
#line 290
c_rt_lib0move(&___nl__1, interpreter_priv0get_command(*___ref___0));
#line 291
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(213)));
#line 291
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(650)));
#line 291
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__2));
#line 291
label_5:
#line 291
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 291
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 291
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__2, ___nl__3));
#line 292
c_rt_lib0move(&___nl__6,___get_global_const(633));
#line 292
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 292
c_rt_lib0move(&___nl__7,___get_global_const(619));
#line 292
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(___nl__6, ___nl__7));
#line 292
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__3, ___nl__4));
#line 292
c_rt_lib0move(&___nl__8,___get_global_const(619));
#line 292
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__6, ___nl__8, ___nl__7));
#line 292
c_rt_lib0move(&___nl__8,___get_global_const(633));
#line 292
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__6));
#line 292
c_rt_lib0clear(&___nl__8);
#line 292
c_rt_lib0clear(&___nl__6);
#line 292
c_rt_lib0clear(&___nl__7);
#line 293
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 293
goto label_5;
#line 293
label_3:
#line 293
c_rt_lib0clear(&___nl__2);
#line 293
c_rt_lib0clear(&___nl__3);
#line 293
c_rt_lib0clear(&___nl__4);
#line 293
c_rt_lib0clear(&___nl__5);
#line 293
c_rt_lib0clear(&___nl__1);
#line 293
return NULL;
}

ImmT interpreter_priv0step(ImmT * ___ref___0) {
interpreter_priv0__const__init();
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
#line 297
c_rt_lib0move(&___nl__1, interpreter0has_next_instruction(*___ref___0));
#line 297
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 297
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 297
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 297
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 297
nl_die_arg(___nl__2);
#line 297
goto label_2;
#line 297
label_2:
#line 297
c_rt_lib0clear(&___nl__1);
#line 297
c_rt_lib0clear(&___nl__2);
#line 298
c_rt_lib0move(&___nl__1, interpreter_priv0get_command(*___ref___0));
#line 299
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(209)));
#line 300
c_rt_lib0move(&___nl__3,___get_global_const(633));
#line 300
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 300
c_rt_lib0move(&___nl__4,___get_global_const(202));
#line 300
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 300
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 300
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 300
c_rt_lib0move(&___nl__6,___get_global_const(202));
#line 300
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__6, ___nl__4));
#line 300
c_rt_lib0move(&___nl__6,___get_global_const(633));
#line 300
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__3));
#line 300
c_rt_lib0clear(&___nl__6);
#line 300
c_rt_lib0clear(&___nl__3);
#line 300
c_rt_lib0clear(&___nl__4);
#line 300
c_rt_lib0clear(&___nl__5);
#line 301
c_rt_lib0move(&___nl__3, interpreter_priv0check_command(*___ref___0, ___nl__2));
#line 301
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 301
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 301
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 302
c_rt_lib0move(&___nl__4,___get_global_const(651));
#line 302
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__4));
#line 302
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 302
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(630), ___nl__5);
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
c_rt_lib0clear(&___nl__5);
#line 303
c_rt_lib0clear(&___nl__1);
#line 303
c_rt_lib0clear(&___nl__2);
#line 303
c_rt_lib0clear(&___nl__3);
#line 303
return NULL;
#line 304
goto label_4;
#line 304
label_4:
#line 304
c_rt_lib0clear(&___nl__3);
#line 305
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(215)));
#line 305
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 310
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(216)));
#line 310
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 317
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(217)));
#line 317
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 334
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(71)));
#line 334
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 336
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(218)));
#line 336
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 340
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(219)));
#line 340
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 345
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(220)));
#line 345
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 347
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(221)));
#line 347
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(210)));
#line 349
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 351
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(229)));
#line 351
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 353
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(222)));
#line 353
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 355
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(223)));
#line 355
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 357
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(224)));
#line 357
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 361
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(225)));
#line 361
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 367
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(226)));
#line 367
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 370
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(227)));
#line 370
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 375
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(228)));
#line 375
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 383
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(230)));
#line 383
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 384
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(231)));
#line 384
if(c_rt_lib0check_true_native(___nl__3)){ goto label_24;}
#line 386
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(232)));
#line 386
if(c_rt_lib0check_true_native(___nl__3)){ goto label_25;}
#line 388
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(195)));
#line 388
if(c_rt_lib0check_true_native(___nl__3)){ goto label_26;}
#line 388
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 388
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 388
nl_die_arg(___nl__3);
#line 305
label_6:
#line 305
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(215)));
#line 306
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 307
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 307
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 307
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 307
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 307
label_29:
#line 307
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 307
if(c_rt_lib0check_true_native(___nl__11)){ goto label_27;}
#line 307
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 307
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 307
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(618)));
#line 307
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__12, ___nl__7));
#line 307
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 307
c_rt_lib0clear(&___nl__12);
#line 307
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 307
goto label_29;
#line 307
label_27:
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
#line 308
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 308
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 308
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 308
c_rt_lib0clear(&___nl__7);
#line 308
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 308
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 308
if(c_rt_lib0check_true_native(___nl__6)){ goto label_31;}
#line 308
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 308
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 308
c_rt_lib0move(&___nl__8,___get_global_const(618));
#line 308
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 308
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 308
c_rt_lib0copy(&___nl__9, ___nl__5);
#line 308
c_rt_lib0array_set(&___nl__8, ___nl__10, ___nl__9);
#line 308
c_rt_lib0move(&___nl__11,___get_global_const(618));
#line 308
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__11, ___nl__8));
#line 308
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 308
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 308
c_rt_lib0clear(&___nl__11);
#line 308
c_rt_lib0clear(&___nl__7);
#line 308
c_rt_lib0clear(&___nl__8);
#line 308
c_rt_lib0clear(&___nl__9);
#line 308
c_rt_lib0clear(&___nl__10);
#line 308
goto label_31;
#line 308
label_31:
#line 308
c_rt_lib0clear(&___nl__6);
#line 308
c_rt_lib0clear(&___nl__5);
#line 308
c_rt_lib0clear(&___nl__4);
#line 310
goto label_5;
#line 310
label_7:
#line 310
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(216)));
#line 311
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 312
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 312
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 312
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 312
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 312
label_34:
#line 312
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 312
if(c_rt_lib0check_true_native(___nl__11)){ goto label_32;}
#line 312
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 313
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 313
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(618)));
#line 313
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(234)));
#line 313
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__12, ___nl__13));
#line 313
c_rt_lib0clear(&___nl__13);
#line 314
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(279)));
#line 314
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__13, ___nl__12));
#line 314
c_rt_lib0clear(&___nl__13);
#line 314
c_rt_lib0clear(&___nl__12);
#line 315
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 315
goto label_34;
#line 315
label_32:
#line 315
c_rt_lib0clear(&___nl__6);
#line 315
c_rt_lib0clear(&___nl__7);
#line 315
c_rt_lib0clear(&___nl__8);
#line 315
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0clear(&___nl__10);
#line 315
c_rt_lib0clear(&___nl__11);
#line 316
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 316
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 316
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 316
c_rt_lib0clear(&___nl__7);
#line 316
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 316
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 316
if(c_rt_lib0check_true_native(___nl__6)){ goto label_36;}
#line 316
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 316
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 316
c_rt_lib0move(&___nl__8,___get_global_const(618));
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 316
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 316
c_rt_lib0copy(&___nl__9, ___nl__5);
#line 316
c_rt_lib0array_set(&___nl__8, ___nl__10, ___nl__9);
#line 316
c_rt_lib0move(&___nl__11,___get_global_const(618));
#line 316
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__11, ___nl__8));
#line 316
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 316
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 316
c_rt_lib0clear(&___nl__11);
#line 316
c_rt_lib0clear(&___nl__7);
#line 316
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
c_rt_lib0clear(&___nl__10);
#line 316
goto label_36;
#line 316
label_36:
#line 316
c_rt_lib0clear(&___nl__6);
#line 316
c_rt_lib0clear(&___nl__5);
#line 316
c_rt_lib0clear(&___nl__4);
#line 317
goto label_5;
#line 317
label_8:
#line 317
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(217)));
#line 319
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(257)));
#line 319
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 319
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 319
c_rt_lib0clear(&___nl__7);
#line 319
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 319
if(c_rt_lib0check_true_native(___nl__6)){ goto label_38;}
#line 320
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 320
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(430)));
#line 320
c_rt_lib0move(&___nl__8,___get_global_const(652));
#line 320
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 320
c_rt_lib0clear(&___nl__8);
#line 320
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(385)));
#line 320
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 320
c_rt_lib0clear(&___nl__8);
#line 320
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 320
c_rt_lib0clear(&___nl__7);
#line 321
goto label_37;
#line 321
label_38:
#line 322
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(257)));
#line 322
c_rt_lib0move(&___nl__8,___get_global_const(579));
#line 322
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 322
c_rt_lib0clear(&___nl__8);
#line 322
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(385)));
#line 322
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 322
c_rt_lib0clear(&___nl__8);
#line 322
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 322
c_rt_lib0clear(&___nl__7);
#line 323
goto label_37;
#line 323
label_37:
#line 323
c_rt_lib0clear(&___nl__6);
#line 324
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(638)));
#line 324
c_rt_lib0move(&___nl__6, hash0has_key(___nl__7, ___nl__5));
#line 324
c_rt_lib0clear(&___nl__7);
#line 324
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 324
if(c_rt_lib0check_true_native(___nl__6)){ goto label_40;}
#line 325
c_rt_lib0delete(interpreter_priv0handle_compiler_call(___nl__4, ___nl__5, ___ref___0));
#line 326
goto label_39;
#line 326
label_40:
#line 326
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(637)));
#line 326
c_rt_lib0move(&___nl__6, hash0has_key(___nl__7, ___nl__5));
#line 326
c_rt_lib0clear(&___nl__7);
#line 326
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 326
if(c_rt_lib0check_true_native(___nl__6)){ goto label_41;}
#line 327
c_rt_lib0delete(interpreter_priv0handle_extern_call(___nl__4, ___ref___0));
#line 328
goto label_39;
#line 328
label_41:
#line 328
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(75)));
#line 328
c_rt_lib0move(&___nl__6, hash0has_key(___nl__7, ___nl__5));
#line 328
c_rt_lib0clear(&___nl__7);
#line 328
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 328
if(c_rt_lib0check_true_native(___nl__6)){ goto label_42;}
#line 329
c_rt_lib0delete(interpreter_priv0handle_normal_call(___nl__4, ___nl__5, ___ref___0));
#line 330
goto label_39;
#line 330
label_42:
#line 331
c_rt_lib0move(&___nl__7,___get_global_const(653));
#line 331
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__5));
#line 331
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__7));
#line 331
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 331
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(630), ___nl__8);
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0clear(&___nl__8);
#line 332
goto label_39;
#line 332
label_39:
#line 332
c_rt_lib0clear(&___nl__6);
#line 332
c_rt_lib0clear(&___nl__5);
#line 332
c_rt_lib0clear(&___nl__4);
#line 334
goto label_5;
#line 334
label_9:
#line 334
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(71)));
#line 335
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 335
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 335
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 335
c_rt_lib0clear(&___nl__6);
#line 335
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 335
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 335
if(c_rt_lib0check_true_native(___nl__5)){ goto label_44;}
#line 335
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(99)));
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 335
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(99), ___nl__7, ___get_global_const(76), ___nl__8));
#line 335
c_rt_lib0clear(&___nl__7);
#line 335
c_rt_lib0clear(&___nl__8);
#line 335
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 335
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 335
c_rt_lib0move(&___nl__8,___get_global_const(618));
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 335
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 335
c_rt_lib0copy(&___nl__9, ___nl__6);
#line 335
c_rt_lib0array_set(&___nl__8, ___nl__10, ___nl__9);
#line 335
c_rt_lib0move(&___nl__11,___get_global_const(618));
#line 335
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__11, ___nl__8));
#line 335
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 335
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 335
c_rt_lib0clear(&___nl__11);
#line 335
c_rt_lib0clear(&___nl__6);
#line 335
c_rt_lib0clear(&___nl__7);
#line 335
c_rt_lib0clear(&___nl__8);
#line 335
c_rt_lib0clear(&___nl__9);
#line 335
c_rt_lib0clear(&___nl__10);
#line 335
goto label_44;
#line 335
label_44:
#line 335
c_rt_lib0clear(&___nl__5);
#line 335
c_rt_lib0clear(&___nl__4);
#line 336
goto label_5;
#line 336
label_10:
#line 336
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(218)));
#line 337
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 337
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 337
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 337
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 337
c_rt_lib0clear(&___nl__6);
#line 338
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(401)));
#line 338
c_rt_lib0move(&___nl__6, interpreter_priv0execute_una_op(___nl__5, ___nl__7));
#line 338
c_rt_lib0clear(&___nl__7);
#line 339
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 339
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 339
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 339
c_rt_lib0clear(&___nl__8);
#line 339
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 339
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 339
if(c_rt_lib0check_true_native(___nl__7)){ goto label_46;}
#line 339
c_rt_lib0move(&___nl__8,___get_global_const(633));
#line 339
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 339
c_rt_lib0move(&___nl__9,___get_global_const(618));
#line 339
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 339
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 339
c_rt_lib0copy(&___nl__10, ___nl__6);
#line 339
c_rt_lib0array_set(&___nl__9, ___nl__11, ___nl__10);
#line 339
c_rt_lib0move(&___nl__12,___get_global_const(618));
#line 339
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__12, ___nl__9));
#line 339
c_rt_lib0move(&___nl__12,___get_global_const(633));
#line 339
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__12, ___nl__8));
#line 339
c_rt_lib0clear(&___nl__12);
#line 339
c_rt_lib0clear(&___nl__8);
#line 339
c_rt_lib0clear(&___nl__9);
#line 339
c_rt_lib0clear(&___nl__10);
#line 339
c_rt_lib0clear(&___nl__11);
#line 339
goto label_46;
#line 339
label_46:
#line 339
c_rt_lib0clear(&___nl__7);
#line 339
c_rt_lib0clear(&___nl__5);
#line 339
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0clear(&___nl__4);
#line 340
goto label_5;
#line 340
label_11:
#line 340
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(219)));
#line 341
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 341
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 341
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(235)));
#line 341
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 341
c_rt_lib0clear(&___nl__6);
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(618)));
#line 342
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(236)));
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 342
c_rt_lib0clear(&___nl__7);
#line 343
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(401)));
#line 343
c_rt_lib0move(&___nl__7, interpreter_priv0execute_bin_op(___nl__5, ___nl__6, ___nl__8));
#line 343
c_rt_lib0clear(&___nl__8);
#line 344
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 344
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 344
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 344
c_rt_lib0clear(&___nl__9);
#line 344
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 344
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 344
if(c_rt_lib0check_true_native(___nl__8)){ goto label_48;}
#line 344
c_rt_lib0move(&___nl__9,___get_global_const(633));
#line 344
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 344
c_rt_lib0move(&___nl__10,___get_global_const(618));
#line 344
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 344
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 344
c_rt_lib0copy(&___nl__11, ___nl__7);
#line 344
c_rt_lib0array_set(&___nl__10, ___nl__12, ___nl__11);
#line 344
c_rt_lib0move(&___nl__13,___get_global_const(618));
#line 344
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__13, ___nl__10));
#line 344
c_rt_lib0move(&___nl__13,___get_global_const(633));
#line 344
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__13, ___nl__9));
#line 344
c_rt_lib0clear(&___nl__13);
#line 344
c_rt_lib0clear(&___nl__9);
#line 344
c_rt_lib0clear(&___nl__10);
#line 344
c_rt_lib0clear(&___nl__11);
#line 344
c_rt_lib0clear(&___nl__12);
#line 344
goto label_48;
#line 344
label_48:
#line 344
c_rt_lib0clear(&___nl__8);
#line 344
c_rt_lib0clear(&___nl__5);
#line 344
c_rt_lib0clear(&___nl__6);
#line 344
c_rt_lib0clear(&___nl__7);
#line 344
c_rt_lib0clear(&___nl__4);
#line 345
goto label_5;
#line 345
label_12:
#line 345
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(220)));
#line 346
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 346
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 346
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 346
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 346
if(c_rt_lib0check_true_native(___nl__5)){ goto label_50;}
#line 346
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 346
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(618)));
#line 346
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 346
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 346
c_rt_lib0clear(&___nl__8);
#line 346
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 346
c_rt_lib0move(&___nl__6, ov0is(___nl__7, ___nl__8));
#line 346
c_rt_lib0clear(&___nl__8);
#line 346
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 346
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 346
c_rt_lib0move(&___nl__8,___get_global_const(618));
#line 346
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 346
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 346
c_rt_lib0copy(&___nl__9, ___nl__6);
#line 346
c_rt_lib0array_set(&___nl__8, ___nl__10, ___nl__9);
#line 346
c_rt_lib0move(&___nl__11,___get_global_const(618));
#line 346
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__11, ___nl__8));
#line 346
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 346
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 346
c_rt_lib0clear(&___nl__11);
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0clear(&___nl__8);
#line 346
c_rt_lib0clear(&___nl__9);
#line 346
c_rt_lib0clear(&___nl__10);
#line 346
goto label_50;
#line 346
label_50:
#line 346
c_rt_lib0clear(&___nl__5);
#line 346
c_rt_lib0clear(&___nl__4);
#line 347
goto label_5;
#line 347
label_13:
#line 347
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(221)));
#line 348
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 348
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 348
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 348
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 348
if(c_rt_lib0check_true_native(___nl__5)){ goto label_52;}
#line 348
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 348
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(618)));
#line 348
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 348
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 348
c_rt_lib0clear(&___nl__8);
#line 348
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 348
c_rt_lib0move(&___nl__6, ov0as(___nl__7, ___nl__8));
#line 348
c_rt_lib0clear(&___nl__8);
#line 348
c_rt_lib0clear(&___nl__7);
#line 348
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 348
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 348
c_rt_lib0move(&___nl__8,___get_global_const(618));
#line 348
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 348
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 348
c_rt_lib0copy(&___nl__9, ___nl__6);
#line 348
c_rt_lib0array_set(&___nl__8, ___nl__10, ___nl__9);
#line 348
c_rt_lib0move(&___nl__11,___get_global_const(618));
#line 348
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__11, ___nl__8));
#line 348
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 348
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 348
c_rt_lib0clear(&___nl__11);
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0clear(&___nl__7);
#line 348
c_rt_lib0clear(&___nl__8);
#line 348
c_rt_lib0clear(&___nl__9);
#line 348
c_rt_lib0clear(&___nl__10);
#line 348
goto label_52;
#line 348
label_52:
#line 348
c_rt_lib0clear(&___nl__5);
#line 348
c_rt_lib0clear(&___nl__4);
#line 349
goto label_5;
#line 349
label_14:
#line 349
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(210)));
#line 350
c_rt_lib0delete(interpreter_priv0handle_return(___nl__4, ___ref___0));
#line 350
c_rt_lib0clear(&___nl__4);
#line 351
goto label_5;
#line 351
label_15:
#line 351
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(229)));
#line 352
c_rt_lib0move(&___nl__5,___get_global_const(229));
#line 352
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 352
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(618)));
#line 352
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__4));
#line 352
c_rt_lib0move(&___nl__6, dfile0ssave(___nl__7));
#line 352
c_rt_lib0clear(&___nl__7);
#line 352
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 352
c_rt_lib0clear(&___nl__6);
#line 352
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__5));
#line 352
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 352
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(630), ___nl__6);
#line 352
c_rt_lib0clear(&___nl__5);
#line 352
c_rt_lib0clear(&___nl__6);
#line 352
c_rt_lib0clear(&___nl__4);
#line 353
goto label_5;
#line 353
label_16:
#line 353
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(222)));
#line 354
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 354
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 354
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 354
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 354
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 354
if(c_rt_lib0check_true_native(___nl__5)){ goto label_54;}
#line 354
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 354
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(618)));
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 354
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 354
c_rt_lib0clear(&___nl__7);
#line 354
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 354
c_rt_lib0move(&___nl__8,___get_global_const(618));
#line 354
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 354
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 354
c_rt_lib0copy(&___nl__9, ___nl__6);
#line 354
c_rt_lib0array_set(&___nl__8, ___nl__10, ___nl__9);
#line 354
c_rt_lib0move(&___nl__11,___get_global_const(618));
#line 354
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__11, ___nl__8));
#line 354
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 354
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 354
c_rt_lib0clear(&___nl__11);
#line 354
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0clear(&___nl__7);
#line 354
c_rt_lib0clear(&___nl__8);
#line 354
c_rt_lib0clear(&___nl__9);
#line 354
c_rt_lib0clear(&___nl__10);
#line 354
goto label_54;
#line 354
label_54:
#line 354
c_rt_lib0clear(&___nl__5);
#line 354
c_rt_lib0clear(&___nl__4);
#line 355
goto label_5;
#line 355
label_17:
#line 355
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(223)));
#line 356
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 356
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 356
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 356
c_rt_lib0clear(&___nl__6);
#line 356
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 356
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 356
if(c_rt_lib0check_true_native(___nl__5)){ goto label_56;}
#line 356
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 356
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 356
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 356
c_rt_lib0move(&___nl__8,___get_global_const(618));
#line 356
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 356
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 356
c_rt_lib0copy(&___nl__9, ___nl__6);
#line 356
c_rt_lib0array_set(&___nl__8, ___nl__10, ___nl__9);
#line 356
c_rt_lib0move(&___nl__11,___get_global_const(618));
#line 356
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__11, ___nl__8));
#line 356
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 356
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 356
c_rt_lib0clear(&___nl__11);
#line 356
c_rt_lib0clear(&___nl__6);
#line 356
c_rt_lib0clear(&___nl__7);
#line 356
c_rt_lib0clear(&___nl__8);
#line 356
c_rt_lib0clear(&___nl__9);
#line 356
c_rt_lib0clear(&___nl__10);
#line 356
goto label_56;
#line 356
label_56:
#line 356
c_rt_lib0clear(&___nl__5);
#line 356
c_rt_lib0clear(&___nl__4);
#line 357
goto label_5;
#line 357
label_18:
#line 357
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(224)));
#line 358
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 358
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 358
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 358
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 358
c_rt_lib0clear(&___nl__6);
#line 359
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 359
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(618)));
#line 359
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 359
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 359
c_rt_lib0clear(&___nl__7);
#line 360
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 360
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 360
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 360
c_rt_lib0clear(&___nl__8);
#line 360
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 360
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 360
if(c_rt_lib0check_true_native(___nl__7)){ goto label_58;}
#line 360
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 360
c_rt_lib0move(&___nl__9,___get_global_const(633));
#line 360
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 360
c_rt_lib0move(&___nl__10,___get_global_const(618));
#line 360
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 360
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 360
c_rt_lib0copy(&___nl__11, ___nl__8);
#line 360
c_rt_lib0array_set(&___nl__10, ___nl__12, ___nl__11);
#line 360
c_rt_lib0move(&___nl__13,___get_global_const(618));
#line 360
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__13, ___nl__10));
#line 360
c_rt_lib0move(&___nl__13,___get_global_const(633));
#line 360
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__13, ___nl__9));
#line 360
c_rt_lib0clear(&___nl__13);
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
goto label_58;
#line 360
label_58:
#line 360
c_rt_lib0clear(&___nl__7);
#line 360
c_rt_lib0clear(&___nl__5);
#line 360
c_rt_lib0clear(&___nl__6);
#line 360
c_rt_lib0clear(&___nl__4);
#line 361
goto label_5;
#line 361
label_19:
#line 361
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(225)));
#line 362
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 362
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 362
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 362
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 362
c_rt_lib0clear(&___nl__6);
#line 363
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 363
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(618)));
#line 363
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 363
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 363
c_rt_lib0clear(&___nl__7);
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(618)));
#line 364
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 364
c_rt_lib0clear(&___nl__8);
#line 365
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 365
c_rt_lib0array_set(&___nl__5, ___nl__6, ___nl__8);
#line 365
c_rt_lib0clear(&___nl__8);
#line 366
c_rt_lib0move(&___nl__8,___get_global_const(633));
#line 366
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 366
c_rt_lib0move(&___nl__9,___get_global_const(618));
#line 366
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 366
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 366
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 366
c_rt_lib0array_set(&___nl__9, ___nl__11, ___nl__10);
#line 366
c_rt_lib0move(&___nl__12,___get_global_const(618));
#line 366
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__12, ___nl__9));
#line 366
c_rt_lib0move(&___nl__12,___get_global_const(633));
#line 366
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__12, ___nl__8));
#line 366
c_rt_lib0clear(&___nl__12);
#line 366
c_rt_lib0clear(&___nl__8);
#line 366
c_rt_lib0clear(&___nl__9);
#line 366
c_rt_lib0clear(&___nl__10);
#line 366
c_rt_lib0clear(&___nl__11);
#line 366
c_rt_lib0clear(&___nl__5);
#line 366
c_rt_lib0clear(&___nl__6);
#line 366
c_rt_lib0clear(&___nl__7);
#line 366
c_rt_lib0clear(&___nl__4);
#line 367
goto label_5;
#line 367
label_20:
#line 367
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(226)));
#line 368
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 368
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(618)));
#line 368
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 368
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 368
c_rt_lib0clear(&___nl__7);
#line 368
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(279)));
#line 368
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__7));
#line 368
c_rt_lib0clear(&___nl__7);
#line 368
c_rt_lib0clear(&___nl__6);
#line 369
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 369
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 369
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 369
c_rt_lib0clear(&___nl__7);
#line 369
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 369
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 369
if(c_rt_lib0check_true_native(___nl__6)){ goto label_60;}
#line 369
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 369
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 369
c_rt_lib0move(&___nl__8,___get_global_const(618));
#line 369
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 369
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 369
c_rt_lib0copy(&___nl__9, ___nl__5);
#line 369
c_rt_lib0array_set(&___nl__8, ___nl__10, ___nl__9);
#line 369
c_rt_lib0move(&___nl__11,___get_global_const(618));
#line 369
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__11, ___nl__8));
#line 369
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 369
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 369
c_rt_lib0clear(&___nl__11);
#line 369
c_rt_lib0clear(&___nl__7);
#line 369
c_rt_lib0clear(&___nl__8);
#line 369
c_rt_lib0clear(&___nl__9);
#line 369
c_rt_lib0clear(&___nl__10);
#line 369
goto label_60;
#line 369
label_60:
#line 369
c_rt_lib0clear(&___nl__6);
#line 369
c_rt_lib0clear(&___nl__5);
#line 369
c_rt_lib0clear(&___nl__4);
#line 370
goto label_5;
#line 370
label_21:
#line 370
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(227)));
#line 371
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 371
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 371
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 371
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 371
c_rt_lib0clear(&___nl__6);
#line 372
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 372
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(618)));
#line 372
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 372
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 372
c_rt_lib0clear(&___nl__7);
#line 373
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(279)));
#line 373
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__6));
#line 373
c_rt_lib0clear(&___nl__7);
#line 374
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 374
c_rt_lib0move(&___nl__8,___get_global_const(618));
#line 374
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 374
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 374
c_rt_lib0copy(&___nl__9, ___nl__5);
#line 374
c_rt_lib0array_set(&___nl__8, ___nl__10, ___nl__9);
#line 374
c_rt_lib0move(&___nl__11,___get_global_const(618));
#line 374
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__11, ___nl__8));
#line 374
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 374
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 374
c_rt_lib0clear(&___nl__11);
#line 374
c_rt_lib0clear(&___nl__7);
#line 374
c_rt_lib0clear(&___nl__8);
#line 374
c_rt_lib0clear(&___nl__9);
#line 374
c_rt_lib0clear(&___nl__10);
#line 374
c_rt_lib0clear(&___nl__5);
#line 374
c_rt_lib0clear(&___nl__6);
#line 374
c_rt_lib0clear(&___nl__4);
#line 375
goto label_5;
#line 375
label_22:
#line 375
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(228)));
#line 377
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 377
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(238)));
#line 377
if(c_rt_lib0check_true_native(___nl__7)){ goto label_62;}
#line 379
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(211)));
#line 379
if(c_rt_lib0check_true_native(___nl__7)){ goto label_63;}
#line 379
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 379
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 379
nl_die_arg(___nl__7);
#line 377
label_62:
#line 377
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(238)));
#line 378
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 378
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 378
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(618)));
#line 378
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__11, ___nl__8));
#line 378
c_rt_lib0move(&___nl__9, ov0mk_val(___nl__10, ___nl__11));
#line 378
c_rt_lib0clear(&___nl__11);
#line 378
c_rt_lib0clear(&___nl__10);
#line 378
c_rt_lib0copy(&___nl__5, ___nl__9);
#line 378
c_rt_lib0clear(&___nl__9);
#line 378
c_rt_lib0clear(&___nl__8);
#line 379
goto label_61;
#line 379
label_63:
#line 380
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 380
c_rt_lib0move(&___nl__8, ov0mk(___nl__9));
#line 380
c_rt_lib0clear(&___nl__9);
#line 380
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 380
c_rt_lib0clear(&___nl__8);
#line 381
goto label_61;
#line 381
label_61:
#line 381
c_rt_lib0clear(&___nl__6);
#line 381
c_rt_lib0clear(&___nl__7);
#line 382
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 382
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 382
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 382
c_rt_lib0clear(&___nl__7);
#line 382
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 382
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 382
if(c_rt_lib0check_true_native(___nl__6)){ goto label_65;}
#line 382
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 382
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 382
c_rt_lib0move(&___nl__8,___get_global_const(618));
#line 382
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 382
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 382
c_rt_lib0copy(&___nl__9, ___nl__5);
#line 382
c_rt_lib0array_set(&___nl__8, ___nl__10, ___nl__9);
#line 382
c_rt_lib0move(&___nl__11,___get_global_const(618));
#line 382
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__11, ___nl__8));
#line 382
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 382
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 382
c_rt_lib0clear(&___nl__11);
#line 382
c_rt_lib0clear(&___nl__7);
#line 382
c_rt_lib0clear(&___nl__8);
#line 382
c_rt_lib0clear(&___nl__9);
#line 382
c_rt_lib0clear(&___nl__10);
#line 382
goto label_65;
#line 382
label_65:
#line 382
c_rt_lib0clear(&___nl__6);
#line 382
c_rt_lib0clear(&___nl__5);
#line 382
c_rt_lib0clear(&___nl__4);
#line 383
goto label_5;
#line 383
label_23:
#line 383
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(230)));
#line 383
c_rt_lib0clear(&___nl__4);
#line 384
goto label_5;
#line 384
label_24:
#line 384
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(231)));
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 385
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 385
c_rt_lib0clear(&___nl__6);
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 385
if(c_rt_lib0check_true_native(___nl__5)){ goto label_67;}
#line 385
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 385
c_rt_lib0delete(interpreter_priv0goto(___ref___0, ___nl__6));
#line 385
c_rt_lib0clear(&___nl__6);
#line 385
goto label_67;
#line 385
label_67:
#line 385
c_rt_lib0clear(&___nl__5);
#line 385
c_rt_lib0clear(&___nl__4);
#line 386
goto label_5;
#line 386
label_25:
#line 386
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(232)));
#line 387
c_rt_lib0delete(interpreter_priv0goto(___ref___0, ___nl__4));
#line 387
c_rt_lib0clear(&___nl__4);
#line 388
goto label_5;
#line 388
label_26:
#line 388
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(195)));
#line 389
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0ne(___nl__4, ___nl__5));
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 389
if(c_rt_lib0check_true_native(___nl__5)){ goto label_69;}
#line 390
c_rt_lib0move(&___nl__6, interpreter0get_none_variant());
#line 390
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 390
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 390
c_rt_lib0move(&___nl__8,___get_global_const(618));
#line 390
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 390
c_rt_lib0copy(&___nl__9, ___nl__6);
#line 390
c_rt_lib0array_set(&___nl__8, ___nl__4, ___nl__9);
#line 390
c_rt_lib0move(&___nl__10,___get_global_const(618));
#line 390
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__10, ___nl__8));
#line 390
c_rt_lib0move(&___nl__10,___get_global_const(633));
#line 390
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__10, ___nl__7));
#line 390
c_rt_lib0clear(&___nl__10);
#line 390
c_rt_lib0clear(&___nl__6);
#line 390
c_rt_lib0clear(&___nl__7);
#line 390
c_rt_lib0clear(&___nl__8);
#line 390
c_rt_lib0clear(&___nl__9);
#line 391
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 391
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(619)));
#line 391
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__6));
#line 391
label_72:
#line 391
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 391
if(c_rt_lib0check_true_native(___nl__7)){ goto label_70;}
#line 391
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 391
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__6, ___nl__7));
#line 392
c_rt_lib0move(&___nl__10, c_rt_lib0num_eq(___nl__4, ___nl__8));
#line 392
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 392
if(c_rt_lib0check_true_native(___nl__10)){ goto label_74;}
#line 393
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 393
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___0, ___nl__11));
#line 393
c_rt_lib0move(&___nl__12,___get_global_const(619));
#line 393
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(___nl__11, ___nl__12));
#line 393
c_rt_lib0delete(hash0delete(&___nl__12, ___nl__7));
#line 393
c_rt_lib0move(&___nl__13,___get_global_const(619));
#line 393
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__11, ___nl__13, ___nl__12));
#line 393
c_rt_lib0move(&___nl__13,___get_global_const(633));
#line 393
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__13, ___nl__11));
#line 393
c_rt_lib0clear(&___nl__13);
#line 393
c_rt_lib0clear(&___nl__11);
#line 393
c_rt_lib0clear(&___nl__12);
#line 394
c_rt_lib0clear(&___nl__10);
#line 394
goto label_70;
#line 395
goto label_74;
#line 395
label_74:
#line 395
c_rt_lib0clear(&___nl__10);
#line 396
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 396
goto label_72;
#line 396
label_70:
#line 396
c_rt_lib0clear(&___nl__6);
#line 396
c_rt_lib0clear(&___nl__7);
#line 396
c_rt_lib0clear(&___nl__8);
#line 396
c_rt_lib0clear(&___nl__9);
#line 397
goto label_69;
#line 397
label_69:
#line 397
c_rt_lib0clear(&___nl__5);
#line 397
c_rt_lib0clear(&___nl__4);
#line 398
goto label_5;
#line 398
label_5:
#line 398
c_rt_lib0clear(&___nl__3);
#line 399
c_rt_lib0delete(interpreter_priv0handle_new_declarations(___ref___0));
#line 399
c_rt_lib0clear(&___nl__1);
#line 399
c_rt_lib0clear(&___nl__2);
#line 399
return NULL;
}

ImmT interpreter_priv0check_command(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
interpreter_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 403
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(636)));
#line 403
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 403
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 403
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 403
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 403
c_rt_lib0clear(&___nl__0);
#line 403
c_rt_lib0clear(&___nl__1);
#line 403
c_rt_lib0clear(&___nl__2);
#line 403
return ___nl__3;
#line 403
c_rt_lib0clear(&___nl__3);
#line 403
goto label_2;
#line 403
label_2:
#line 403
c_rt_lib0clear(&___nl__2);
#line 404
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(215)));
#line 404
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 405
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(216)));
#line 405
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 406
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(217)));
#line 406
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 407
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(71)));
#line 407
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 408
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(218)));
#line 408
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 416
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(219)));
#line 416
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 421
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(220)));
#line 421
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 424
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(221)));
#line 424
if(c_rt_lib0check_true_native(___nl__2)){ goto label_11;}
#line 429
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(210)));
#line 429
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 430
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(229)));
#line 430
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 431
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(222)));
#line 431
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 432
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(223)));
#line 432
if(c_rt_lib0check_true_native(___nl__2)){ goto label_15;}
#line 433
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(224)));
#line 433
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 440
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(225)));
#line 440
if(c_rt_lib0check_true_native(___nl__2)){ goto label_17;}
#line 446
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(226)));
#line 446
if(c_rt_lib0check_true_native(___nl__2)){ goto label_18;}
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(227)));
#line 451
if(c_rt_lib0check_true_native(___nl__2)){ goto label_19;}
#line 455
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(228)));
#line 455
if(c_rt_lib0check_true_native(___nl__2)){ goto label_20;}
#line 457
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(230)));
#line 457
if(c_rt_lib0check_true_native(___nl__2)){ goto label_21;}
#line 458
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(231)));
#line 458
if(c_rt_lib0check_true_native(___nl__2)){ goto label_22;}
#line 462
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(232)));
#line 462
if(c_rt_lib0check_true_native(___nl__2)){ goto label_23;}
#line 463
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(195)));
#line 463
if(c_rt_lib0check_true_native(___nl__2)){ goto label_24;}
#line 463
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 463
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 463
nl_die_arg(___nl__2);
#line 404
label_4:
#line 404
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(215)));
#line 404
c_rt_lib0clear(&___nl__3);
#line 405
goto label_3;
#line 405
label_5:
#line 405
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(216)));
#line 405
c_rt_lib0clear(&___nl__3);
#line 406
goto label_3;
#line 406
label_6:
#line 406
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(217)));
#line 406
c_rt_lib0clear(&___nl__3);
#line 407
goto label_3;
#line 407
label_7:
#line 407
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(71)));
#line 407
c_rt_lib0clear(&___nl__3);
#line 408
goto label_3;
#line 408
label_8:
#line 408
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(218)));
#line 409
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 409
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(618)));
#line 409
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(39)));
#line 409
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 409
c_rt_lib0clear(&___nl__5);
#line 410
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(401)));
#line 410
c_rt_lib0move(&___nl__6,___get_global_const(243));
#line 410
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 410
c_rt_lib0clear(&___nl__6);
#line 410
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 410
if(c_rt_lib0check_true_native(___nl__5)){ goto label_26;}
#line 411
c_rt_lib0move(&___nl__6, nl0is_variant(___nl__4));
#line 411
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 411
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 411
if(c_rt_lib0check_true_native(___nl__6)){ goto label_28;}
#line 411
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 411
c_rt_lib0clear(&___nl__0);
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
c_rt_lib0clear(&___nl__6);
#line 411
return ___nl__7;
#line 411
c_rt_lib0clear(&___nl__7);
#line 411
goto label_28;
#line 411
label_28:
#line 411
c_rt_lib0clear(&___nl__6);
#line 412
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 412
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(6)));
#line 412
if(c_rt_lib0check_true_native(___nl__6)){ goto label_31;}
#line 412
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 412
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(7)));
#line 412
label_31:
#line 412
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 412
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 412
if(c_rt_lib0check_true_native(___nl__6)){ goto label_30;}
#line 412
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 412
c_rt_lib0clear(&___nl__0);
#line 412
c_rt_lib0clear(&___nl__1);
#line 412
c_rt_lib0clear(&___nl__2);
#line 412
c_rt_lib0clear(&___nl__3);
#line 412
c_rt_lib0clear(&___nl__4);
#line 412
c_rt_lib0clear(&___nl__5);
#line 412
c_rt_lib0clear(&___nl__6);
#line 412
return ___nl__7;
#line 412
c_rt_lib0clear(&___nl__7);
#line 412
goto label_30;
#line 412
label_30:
#line 412
c_rt_lib0clear(&___nl__6);
#line 413
goto label_25;
#line 413
label_26:
#line 414
c_rt_lib0move(&___nl__6, nl0is_sim(___nl__4));
#line 414
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 414
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 414
if(c_rt_lib0check_true_native(___nl__6)){ goto label_33;}
#line 414
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 414
c_rt_lib0clear(&___nl__0);
#line 414
c_rt_lib0clear(&___nl__1);
#line 414
c_rt_lib0clear(&___nl__2);
#line 414
c_rt_lib0clear(&___nl__3);
#line 414
c_rt_lib0clear(&___nl__4);
#line 414
c_rt_lib0clear(&___nl__5);
#line 414
c_rt_lib0clear(&___nl__6);
#line 414
return ___nl__7;
#line 414
c_rt_lib0clear(&___nl__7);
#line 414
goto label_33;
#line 414
label_33:
#line 414
c_rt_lib0clear(&___nl__6);
#line 415
goto label_25;
#line 415
label_25:
#line 415
c_rt_lib0clear(&___nl__5);
#line 415
c_rt_lib0clear(&___nl__4);
#line 415
c_rt_lib0clear(&___nl__3);
#line 416
goto label_3;
#line 416
label_9:
#line 416
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(219)));
#line 417
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 417
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(618)));
#line 417
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(235)));
#line 417
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 417
c_rt_lib0clear(&___nl__5);
#line 418
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 418
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 418
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(236)));
#line 418
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 418
c_rt_lib0clear(&___nl__6);
#line 419
c_rt_lib0move(&___nl__6, nl0is_sim(___nl__4));
#line 419
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 419
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 419
if(c_rt_lib0check_true_native(___nl__6)){ goto label_35;}
#line 419
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 419
c_rt_lib0clear(&___nl__0);
#line 419
c_rt_lib0clear(&___nl__1);
#line 419
c_rt_lib0clear(&___nl__2);
#line 419
c_rt_lib0clear(&___nl__3);
#line 419
c_rt_lib0clear(&___nl__4);
#line 419
c_rt_lib0clear(&___nl__5);
#line 419
c_rt_lib0clear(&___nl__6);
#line 419
return ___nl__7;
#line 419
c_rt_lib0clear(&___nl__7);
#line 419
goto label_35;
#line 419
label_35:
#line 419
c_rt_lib0clear(&___nl__6);
#line 420
c_rt_lib0move(&___nl__6, nl0is_sim(___nl__5));
#line 420
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 420
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 420
if(c_rt_lib0check_true_native(___nl__6)){ goto label_37;}
#line 420
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 420
c_rt_lib0clear(&___nl__0);
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
return ___nl__7;
#line 420
c_rt_lib0clear(&___nl__7);
#line 420
goto label_37;
#line 420
label_37:
#line 420
c_rt_lib0clear(&___nl__6);
#line 420
c_rt_lib0clear(&___nl__4);
#line 420
c_rt_lib0clear(&___nl__5);
#line 420
c_rt_lib0clear(&___nl__3);
#line 421
goto label_3;
#line 421
label_10:
#line 421
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(220)));
#line 422
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 422
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 422
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(39)));
#line 422
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 422
c_rt_lib0clear(&___nl__6);
#line 422
c_rt_lib0move(&___nl__4, nl0is_variant(___nl__5));
#line 422
c_rt_lib0clear(&___nl__5);
#line 422
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 422
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 422
if(c_rt_lib0check_true_native(___nl__4)){ goto label_39;}
#line 422
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 422
c_rt_lib0clear(&___nl__0);
#line 422
c_rt_lib0clear(&___nl__1);
#line 422
c_rt_lib0clear(&___nl__2);
#line 422
c_rt_lib0clear(&___nl__3);
#line 422
c_rt_lib0clear(&___nl__4);
#line 422
return ___nl__5;
#line 422
c_rt_lib0clear(&___nl__5);
#line 422
goto label_39;
#line 422
label_39:
#line 422
c_rt_lib0clear(&___nl__4);
#line 423
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(72)));
#line 423
c_rt_lib0move(&___nl__4, nl0is_sim(___nl__5));
#line 423
c_rt_lib0clear(&___nl__5);
#line 423
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 423
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 423
if(c_rt_lib0check_true_native(___nl__4)){ goto label_41;}
#line 423
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 423
c_rt_lib0clear(&___nl__0);
#line 423
c_rt_lib0clear(&___nl__1);
#line 423
c_rt_lib0clear(&___nl__2);
#line 423
c_rt_lib0clear(&___nl__3);
#line 423
c_rt_lib0clear(&___nl__4);
#line 423
return ___nl__5;
#line 423
c_rt_lib0clear(&___nl__5);
#line 423
goto label_41;
#line 423
label_41:
#line 423
c_rt_lib0clear(&___nl__4);
#line 423
c_rt_lib0clear(&___nl__3);
#line 424
goto label_3;
#line 424
label_11:
#line 424
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(221)));
#line 425
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 425
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(618)));
#line 425
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(39)));
#line 425
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 425
c_rt_lib0clear(&___nl__5);
#line 426
c_rt_lib0move(&___nl__5, nl0is_variant(___nl__4));
#line 426
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 426
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 426
if(c_rt_lib0check_true_native(___nl__5)){ goto label_43;}
#line 426
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 426
c_rt_lib0clear(&___nl__0);
#line 426
c_rt_lib0clear(&___nl__1);
#line 426
c_rt_lib0clear(&___nl__2);
#line 426
c_rt_lib0clear(&___nl__3);
#line 426
c_rt_lib0clear(&___nl__4);
#line 426
c_rt_lib0clear(&___nl__5);
#line 426
return ___nl__6;
#line 426
c_rt_lib0clear(&___nl__6);
#line 426
goto label_43;
#line 426
label_43:
#line 426
c_rt_lib0clear(&___nl__5);
#line 427
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(72)));
#line 427
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 427
c_rt_lib0clear(&___nl__6);
#line 427
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 427
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 427
if(c_rt_lib0check_true_native(___nl__5)){ goto label_45;}
#line 427
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 427
c_rt_lib0clear(&___nl__0);
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
return ___nl__6;
#line 427
c_rt_lib0clear(&___nl__6);
#line 427
goto label_45;
#line 427
label_45:
#line 427
c_rt_lib0clear(&___nl__5);
#line 428
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(72)));
#line 428
c_rt_lib0move(&___nl__5, ov0is(___nl__4, ___nl__6));
#line 428
c_rt_lib0clear(&___nl__6);
#line 428
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 428
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 428
if(c_rt_lib0check_true_native(___nl__5)){ goto label_47;}
#line 428
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 428
c_rt_lib0clear(&___nl__0);
#line 428
c_rt_lib0clear(&___nl__1);
#line 428
c_rt_lib0clear(&___nl__2);
#line 428
c_rt_lib0clear(&___nl__3);
#line 428
c_rt_lib0clear(&___nl__4);
#line 428
c_rt_lib0clear(&___nl__5);
#line 428
return ___nl__6;
#line 428
c_rt_lib0clear(&___nl__6);
#line 428
goto label_47;
#line 428
label_47:
#line 428
c_rt_lib0clear(&___nl__5);
#line 428
c_rt_lib0clear(&___nl__4);
#line 428
c_rt_lib0clear(&___nl__3);
#line 429
goto label_3;
#line 429
label_12:
#line 429
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(210)));
#line 429
c_rt_lib0clear(&___nl__3);
#line 430
goto label_3;
#line 430
label_13:
#line 430
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(229)));
#line 430
c_rt_lib0clear(&___nl__3);
#line 431
goto label_3;
#line 431
label_14:
#line 431
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(222)));
#line 431
c_rt_lib0clear(&___nl__3);
#line 432
goto label_3;
#line 432
label_15:
#line 432
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(223)));
#line 432
c_rt_lib0clear(&___nl__3);
#line 433
goto label_3;
#line 433
label_16:
#line 433
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(224)));
#line 434
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 434
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(618)));
#line 434
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(39)));
#line 434
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 434
c_rt_lib0clear(&___nl__5);
#line 435
c_rt_lib0move(&___nl__5, nl0is_array(___nl__4));
#line 435
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 435
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 435
if(c_rt_lib0check_true_native(___nl__5)){ goto label_49;}
#line 435
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 435
c_rt_lib0clear(&___nl__0);
#line 435
c_rt_lib0clear(&___nl__1);
#line 435
c_rt_lib0clear(&___nl__2);
#line 435
c_rt_lib0clear(&___nl__3);
#line 435
c_rt_lib0clear(&___nl__4);
#line 435
c_rt_lib0clear(&___nl__5);
#line 435
return ___nl__6;
#line 435
c_rt_lib0clear(&___nl__6);
#line 435
goto label_49;
#line 435
label_49:
#line 435
c_rt_lib0clear(&___nl__5);
#line 436
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 436
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 436
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(237)));
#line 436
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 436
c_rt_lib0clear(&___nl__6);
#line 437
c_rt_lib0move(&___nl__6, nl0is_sim(___nl__5));
#line 437
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 437
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 437
if(c_rt_lib0check_true_native(___nl__6)){ goto label_51;}
#line 437
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 437
c_rt_lib0clear(&___nl__0);
#line 437
c_rt_lib0clear(&___nl__1);
#line 437
c_rt_lib0clear(&___nl__2);
#line 437
c_rt_lib0clear(&___nl__3);
#line 437
c_rt_lib0clear(&___nl__4);
#line 437
c_rt_lib0clear(&___nl__5);
#line 437
c_rt_lib0clear(&___nl__6);
#line 437
return ___nl__7;
#line 437
c_rt_lib0clear(&___nl__7);
#line 437
goto label_51;
#line 437
label_51:
#line 437
c_rt_lib0clear(&___nl__6);
#line 438
c_rt_lib0move(&___nl__6, array0len(___nl__4));
#line 438
c_rt_lib0move(&___nl__6, c_rt_lib0lt(___nl__5, ___nl__6));
#line 438
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 438
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 438
if(c_rt_lib0check_true_native(___nl__6)){ goto label_53;}
#line 438
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 438
c_rt_lib0clear(&___nl__0);
#line 438
c_rt_lib0clear(&___nl__1);
#line 438
c_rt_lib0clear(&___nl__2);
#line 438
c_rt_lib0clear(&___nl__3);
#line 438
c_rt_lib0clear(&___nl__4);
#line 438
c_rt_lib0clear(&___nl__5);
#line 438
c_rt_lib0clear(&___nl__6);
#line 438
return ___nl__7;
#line 438
c_rt_lib0clear(&___nl__7);
#line 438
goto label_53;
#line 438
label_53:
#line 438
c_rt_lib0clear(&___nl__6);
#line 439
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 439
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__5, ___nl__6));
#line 439
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 439
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 439
if(c_rt_lib0check_true_native(___nl__6)){ goto label_55;}
#line 439
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 439
c_rt_lib0clear(&___nl__0);
#line 439
c_rt_lib0clear(&___nl__1);
#line 439
c_rt_lib0clear(&___nl__2);
#line 439
c_rt_lib0clear(&___nl__3);
#line 439
c_rt_lib0clear(&___nl__4);
#line 439
c_rt_lib0clear(&___nl__5);
#line 439
c_rt_lib0clear(&___nl__6);
#line 439
return ___nl__7;
#line 439
c_rt_lib0clear(&___nl__7);
#line 439
goto label_55;
#line 439
label_55:
#line 439
c_rt_lib0clear(&___nl__6);
#line 439
c_rt_lib0clear(&___nl__4);
#line 439
c_rt_lib0clear(&___nl__5);
#line 439
c_rt_lib0clear(&___nl__3);
#line 440
goto label_3;
#line 440
label_17:
#line 440
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(225)));
#line 441
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 441
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(618)));
#line 441
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(39)));
#line 441
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 441
c_rt_lib0clear(&___nl__5);
#line 442
c_rt_lib0move(&___nl__5, nl0is_array(___nl__4));
#line 442
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 442
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 442
if(c_rt_lib0check_true_native(___nl__5)){ goto label_57;}
#line 442
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 442
c_rt_lib0clear(&___nl__0);
#line 442
c_rt_lib0clear(&___nl__1);
#line 442
c_rt_lib0clear(&___nl__2);
#line 442
c_rt_lib0clear(&___nl__3);
#line 442
c_rt_lib0clear(&___nl__4);
#line 442
c_rt_lib0clear(&___nl__5);
#line 442
return ___nl__6;
#line 442
c_rt_lib0clear(&___nl__6);
#line 442
goto label_57;
#line 442
label_57:
#line 442
c_rt_lib0clear(&___nl__5);
#line 443
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 443
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 443
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(237)));
#line 443
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 443
c_rt_lib0clear(&___nl__6);
#line 444
c_rt_lib0move(&___nl__6, nl0is_sim(___nl__5));
#line 444
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 444
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 444
if(c_rt_lib0check_true_native(___nl__6)){ goto label_59;}
#line 444
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 444
c_rt_lib0clear(&___nl__0);
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
c_rt_lib0clear(&___nl__6);
#line 444
return ___nl__7;
#line 444
c_rt_lib0clear(&___nl__7);
#line 444
goto label_59;
#line 444
label_59:
#line 444
c_rt_lib0clear(&___nl__6);
#line 445
c_rt_lib0move(&___nl__6, array0len(___nl__4));
#line 445
c_rt_lib0move(&___nl__6, c_rt_lib0lt(___nl__5, ___nl__6));
#line 445
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 445
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 445
if(c_rt_lib0check_true_native(___nl__6)){ goto label_61;}
#line 445
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 445
c_rt_lib0clear(&___nl__0);
#line 445
c_rt_lib0clear(&___nl__1);
#line 445
c_rt_lib0clear(&___nl__2);
#line 445
c_rt_lib0clear(&___nl__3);
#line 445
c_rt_lib0clear(&___nl__4);
#line 445
c_rt_lib0clear(&___nl__5);
#line 445
c_rt_lib0clear(&___nl__6);
#line 445
return ___nl__7;
#line 445
c_rt_lib0clear(&___nl__7);
#line 445
goto label_61;
#line 445
label_61:
#line 445
c_rt_lib0clear(&___nl__6);
#line 445
c_rt_lib0clear(&___nl__4);
#line 445
c_rt_lib0clear(&___nl__5);
#line 445
c_rt_lib0clear(&___nl__3);
#line 446
goto label_3;
#line 446
label_18:
#line 446
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(226)));
#line 447
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 447
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(618)));
#line 447
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(39)));
#line 447
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 447
c_rt_lib0clear(&___nl__5);
#line 448
c_rt_lib0move(&___nl__5, nl0is_hash(___nl__4));
#line 448
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 448
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 448
if(c_rt_lib0check_true_native(___nl__5)){ goto label_63;}
#line 448
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 448
c_rt_lib0clear(&___nl__0);
#line 448
c_rt_lib0clear(&___nl__1);
#line 448
c_rt_lib0clear(&___nl__2);
#line 448
c_rt_lib0clear(&___nl__3);
#line 448
c_rt_lib0clear(&___nl__4);
#line 448
c_rt_lib0clear(&___nl__5);
#line 448
return ___nl__6;
#line 448
c_rt_lib0clear(&___nl__6);
#line 448
goto label_63;
#line 448
label_63:
#line 448
c_rt_lib0clear(&___nl__5);
#line 449
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(279)));
#line 449
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 449
c_rt_lib0clear(&___nl__6);
#line 449
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 449
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 449
if(c_rt_lib0check_true_native(___nl__5)){ goto label_65;}
#line 449
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 449
c_rt_lib0clear(&___nl__0);
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
return ___nl__6;
#line 449
c_rt_lib0clear(&___nl__6);
#line 449
goto label_65;
#line 449
label_65:
#line 449
c_rt_lib0clear(&___nl__5);
#line 450
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(279)));
#line 450
c_rt_lib0move(&___nl__5, hash0has_key(___nl__4, ___nl__6));
#line 450
c_rt_lib0clear(&___nl__6);
#line 450
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 450
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 450
if(c_rt_lib0check_true_native(___nl__5)){ goto label_67;}
#line 450
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 450
c_rt_lib0clear(&___nl__0);
#line 450
c_rt_lib0clear(&___nl__1);
#line 450
c_rt_lib0clear(&___nl__2);
#line 450
c_rt_lib0clear(&___nl__3);
#line 450
c_rt_lib0clear(&___nl__4);
#line 450
c_rt_lib0clear(&___nl__5);
#line 450
return ___nl__6;
#line 450
c_rt_lib0clear(&___nl__6);
#line 450
goto label_67;
#line 450
label_67:
#line 450
c_rt_lib0clear(&___nl__5);
#line 450
c_rt_lib0clear(&___nl__4);
#line 450
c_rt_lib0clear(&___nl__3);
#line 451
goto label_3;
#line 451
label_19:
#line 451
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(227)));
#line 452
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 452
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(618)));
#line 452
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(39)));
#line 452
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 452
c_rt_lib0clear(&___nl__5);
#line 453
c_rt_lib0move(&___nl__5, nl0is_hash(___nl__4));
#line 453
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 453
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 453
if(c_rt_lib0check_true_native(___nl__5)){ goto label_69;}
#line 453
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 453
c_rt_lib0clear(&___nl__0);
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
return ___nl__6;
#line 453
c_rt_lib0clear(&___nl__6);
#line 453
goto label_69;
#line 453
label_69:
#line 453
c_rt_lib0clear(&___nl__5);
#line 454
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(279)));
#line 454
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 454
c_rt_lib0clear(&___nl__6);
#line 454
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 454
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 454
if(c_rt_lib0check_true_native(___nl__5)){ goto label_71;}
#line 454
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 454
c_rt_lib0clear(&___nl__0);
#line 454
c_rt_lib0clear(&___nl__1);
#line 454
c_rt_lib0clear(&___nl__2);
#line 454
c_rt_lib0clear(&___nl__3);
#line 454
c_rt_lib0clear(&___nl__4);
#line 454
c_rt_lib0clear(&___nl__5);
#line 454
return ___nl__6;
#line 454
c_rt_lib0clear(&___nl__6);
#line 454
goto label_71;
#line 454
label_71:
#line 454
c_rt_lib0clear(&___nl__5);
#line 454
c_rt_lib0clear(&___nl__4);
#line 454
c_rt_lib0clear(&___nl__3);
#line 455
goto label_3;
#line 455
label_20:
#line 455
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(228)));
#line 456
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(76)));
#line 456
c_rt_lib0move(&___nl__4, nl0is_sim(___nl__5));
#line 456
c_rt_lib0clear(&___nl__5);
#line 456
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 456
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 456
if(c_rt_lib0check_true_native(___nl__4)){ goto label_73;}
#line 456
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 456
c_rt_lib0clear(&___nl__0);
#line 456
c_rt_lib0clear(&___nl__1);
#line 456
c_rt_lib0clear(&___nl__2);
#line 456
c_rt_lib0clear(&___nl__3);
#line 456
c_rt_lib0clear(&___nl__4);
#line 456
return ___nl__5;
#line 456
c_rt_lib0clear(&___nl__5);
#line 456
goto label_73;
#line 456
label_73:
#line 456
c_rt_lib0clear(&___nl__4);
#line 456
c_rt_lib0clear(&___nl__3);
#line 457
goto label_3;
#line 457
label_21:
#line 457
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(230)));
#line 457
c_rt_lib0clear(&___nl__3);
#line 458
goto label_3;
#line 458
label_22:
#line 458
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(231)));
#line 459
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 459
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(618)));
#line 459
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(39)));
#line 459
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 459
c_rt_lib0clear(&___nl__5);
#line 460
c_rt_lib0move(&___nl__5, nl0is_variant(___nl__4));
#line 460
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 460
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 460
if(c_rt_lib0check_true_native(___nl__5)){ goto label_75;}
#line 460
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 460
c_rt_lib0clear(&___nl__0);
#line 460
c_rt_lib0clear(&___nl__1);
#line 460
c_rt_lib0clear(&___nl__2);
#line 460
c_rt_lib0clear(&___nl__3);
#line 460
c_rt_lib0clear(&___nl__4);
#line 460
c_rt_lib0clear(&___nl__5);
#line 460
return ___nl__6;
#line 460
c_rt_lib0clear(&___nl__6);
#line 460
goto label_75;
#line 460
label_75:
#line 460
c_rt_lib0clear(&___nl__5);
#line 461
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 461
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(6)));
#line 461
if(c_rt_lib0check_true_native(___nl__5)){ goto label_78;}
#line 461
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 461
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(7)));
#line 461
label_78:
#line 461
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 461
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 461
if(c_rt_lib0check_true_native(___nl__5)){ goto label_77;}
#line 461
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 461
c_rt_lib0clear(&___nl__0);
#line 461
c_rt_lib0clear(&___nl__1);
#line 461
c_rt_lib0clear(&___nl__2);
#line 461
c_rt_lib0clear(&___nl__3);
#line 461
c_rt_lib0clear(&___nl__4);
#line 461
c_rt_lib0clear(&___nl__5);
#line 461
return ___nl__6;
#line 461
c_rt_lib0clear(&___nl__6);
#line 461
goto label_77;
#line 461
label_77:
#line 461
c_rt_lib0clear(&___nl__5);
#line 461
c_rt_lib0clear(&___nl__4);
#line 461
c_rt_lib0clear(&___nl__3);
#line 462
goto label_3;
#line 462
label_23:
#line 462
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(232)));
#line 462
c_rt_lib0clear(&___nl__3);
#line 463
goto label_3;
#line 463
label_24:
#line 463
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(195)));
#line 463
c_rt_lib0clear(&___nl__3);
#line 464
goto label_3;
#line 464
label_3:
#line 464
c_rt_lib0clear(&___nl__2);
#line 465
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 465
c_rt_lib0clear(&___nl__0);
#line 465
c_rt_lib0clear(&___nl__1);
#line 465
return ___nl__2;
#line 465
c_rt_lib0clear(&___nl__2);
#line 465
c_rt_lib0clear(&___nl__0);
#line 465
c_rt_lib0clear(&___nl__1);
#line 465
return NULL;
}

ImmT interpreter0finish_callback0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "interpreter0finish_callback");
return interpreter0finish_callback(_tab[0], _tab[1], &_tab[2]);}
ImmT interpreter0finish_callback(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
interpreter_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 469
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(630)));
#line 469
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(623)));
#line 469
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 469
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 469
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 469
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 469
nl_die_arg(___nl__4);
#line 469
goto label_2;
#line 469
label_2:
#line 469
c_rt_lib0clear(&___nl__3);
#line 469
c_rt_lib0clear(&___nl__4);
#line 470
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(630)));
#line 470
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(623)));
#line 470
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__0));
#line 470
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 470
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 470
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 470
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 470
nl_die_arg(___nl__4);
#line 470
goto label_4;
#line 470
label_4:
#line 470
c_rt_lib0clear(&___nl__3);
#line 470
c_rt_lib0clear(&___nl__4);
#line 471
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__1, ___get_global_const(44)));
#line 471
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 477
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__1, ___get_global_const(43)));
#line 477
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 477
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 477
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__1));
#line 477
nl_die_arg(___nl__3);
#line 471
label_6:
#line 471
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__1, ___get_global_const(44)));
#line 472
c_rt_lib0move(&___nl__5,___get_global_const(633));
#line 472
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___2, ___nl__5));
#line 472
c_rt_lib0move(&___nl__6,___get_global_const(202));
#line 472
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(___nl__5, ___nl__6));
#line 472
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 472
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 472
c_rt_lib0move(&___nl__8,___get_global_const(202));
#line 472
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__8, ___nl__6));
#line 472
c_rt_lib0move(&___nl__8,___get_global_const(633));
#line 472
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__8, ___nl__5));
#line 472
c_rt_lib0clear(&___nl__8);
#line 472
c_rt_lib0clear(&___nl__5);
#line 472
c_rt_lib0clear(&___nl__6);
#line 472
c_rt_lib0clear(&___nl__7);
#line 473
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(635)));
#line 473
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 473
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 473
c_rt_lib0clear(&___nl__6);
#line 473
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 473
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 473
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 473
c_rt_lib0move(&___nl__6,___get_global_const(633));
#line 473
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___2, ___nl__6));
#line 473
c_rt_lib0move(&___nl__7,___get_global_const(618));
#line 473
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(___nl__6, ___nl__7));
#line 473
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(635)));
#line 473
c_rt_lib0copy(&___nl__8, ___nl__4);
#line 473
c_rt_lib0array_set(&___nl__7, ___nl__9, ___nl__8);
#line 473
c_rt_lib0move(&___nl__10,___get_global_const(618));
#line 473
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__6, ___nl__10, ___nl__7));
#line 473
c_rt_lib0move(&___nl__10,___get_global_const(633));
#line 473
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__10, ___nl__6));
#line 473
c_rt_lib0clear(&___nl__10);
#line 473
c_rt_lib0clear(&___nl__6);
#line 473
c_rt_lib0clear(&___nl__7);
#line 473
c_rt_lib0clear(&___nl__8);
#line 473
c_rt_lib0clear(&___nl__9);
#line 473
goto label_9;
#line 473
label_9:
#line 473
c_rt_lib0clear(&___nl__5);
#line 474
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 474
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 474
c_rt_lib0hash_set_value_dec(___ref___2, ___get_global_const(635), ___nl__6);
#line 474
c_rt_lib0clear(&___nl__5);
#line 474
c_rt_lib0clear(&___nl__6);
#line 475
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(639)));
#line 475
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 475
c_rt_lib0hash_set_value_dec(___ref___2, ___get_global_const(630), ___nl__6);
#line 475
c_rt_lib0clear(&___nl__5);
#line 475
c_rt_lib0clear(&___nl__6);
#line 476
c_rt_lib0delete(interpreter_priv0handle_new_declarations(___ref___2));
#line 476
c_rt_lib0clear(&___nl__4);
#line 477
goto label_5;
#line 477
label_7:
#line 477
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__1, ___get_global_const(43)));
#line 478
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__4));
#line 478
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 478
c_rt_lib0hash_set_value_dec(___ref___2, ___get_global_const(630), ___nl__6);
#line 478
c_rt_lib0clear(&___nl__5);
#line 478
c_rt_lib0clear(&___nl__6);
#line 478
c_rt_lib0clear(&___nl__4);
#line 479
goto label_5;
#line 479
label_5:
#line 479
c_rt_lib0clear(&___nl__3);
#line 479
c_rt_lib0clear(&___nl__0);
#line 479
c_rt_lib0clear(&___nl__1);
#line 479
return NULL;
}

ImmT interpreter0finish_read0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "interpreter0finish_read");
return interpreter0finish_read(_tab[0], &_tab[1]);}
ImmT interpreter0finish_read(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 483
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(44)));
#line 483
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 489
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(43)));
#line 489
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 489
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 489
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 489
nl_die_arg(___nl__2);
#line 483
label_2:
#line 483
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(44)));
#line 484
c_rt_lib0move(&___nl__4,___get_global_const(633));
#line 484
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___1, ___nl__4));
#line 484
c_rt_lib0move(&___nl__5,___get_global_const(202));
#line 484
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 484
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 484
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 484
c_rt_lib0move(&___nl__7,___get_global_const(202));
#line 484
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__7, ___nl__5));
#line 484
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 484
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__4));
#line 484
c_rt_lib0clear(&___nl__7);
#line 484
c_rt_lib0clear(&___nl__4);
#line 484
c_rt_lib0clear(&___nl__5);
#line 484
c_rt_lib0clear(&___nl__6);
#line 485
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(635)));
#line 485
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 485
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 485
c_rt_lib0clear(&___nl__5);
#line 485
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 485
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 485
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 485
c_rt_lib0move(&___nl__5,___get_global_const(633));
#line 485
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 485
c_rt_lib0move(&___nl__6,___get_global_const(618));
#line 485
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(___nl__5, ___nl__6));
#line 485
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(635)));
#line 485
c_rt_lib0copy(&___nl__7, ___nl__3);
#line 485
c_rt_lib0array_set(&___nl__6, ___nl__8, ___nl__7);
#line 485
c_rt_lib0move(&___nl__9,___get_global_const(618));
#line 485
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__9, ___nl__6));
#line 485
c_rt_lib0move(&___nl__9,___get_global_const(633));
#line 485
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__5));
#line 485
c_rt_lib0clear(&___nl__9);
#line 485
c_rt_lib0clear(&___nl__5);
#line 485
c_rt_lib0clear(&___nl__6);
#line 485
c_rt_lib0clear(&___nl__7);
#line 485
c_rt_lib0clear(&___nl__8);
#line 485
goto label_5;
#line 485
label_5:
#line 485
c_rt_lib0clear(&___nl__4);
#line 486
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 486
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 486
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(635), ___nl__5);
#line 486
c_rt_lib0clear(&___nl__4);
#line 486
c_rt_lib0clear(&___nl__5);
#line 487
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(639)));
#line 487
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 487
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(630), ___nl__5);
#line 487
c_rt_lib0clear(&___nl__4);
#line 487
c_rt_lib0clear(&___nl__5);
#line 488
c_rt_lib0delete(interpreter_priv0handle_new_declarations(___ref___1));
#line 488
c_rt_lib0clear(&___nl__3);
#line 489
goto label_1;
#line 489
label_3:
#line 489
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(43)));
#line 490
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__3));
#line 490
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 490
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(630), ___nl__5);
#line 490
c_rt_lib0clear(&___nl__4);
#line 490
c_rt_lib0clear(&___nl__5);
#line 490
c_rt_lib0clear(&___nl__3);
#line 491
goto label_1;
#line 491
label_1:
#line 491
c_rt_lib0clear(&___nl__2);
#line 491
c_rt_lib0clear(&___nl__0);
#line 491
return NULL;
}

ImmT interpreter_priv0handle_normal_call(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
interpreter_priv0__const__init();
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
#line 494
c_rt_lib0move(&___nl__3,___get_global_const(633));
#line 494
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___2, ___nl__3));
#line 494
c_rt_lib0move(&___nl__4,___get_global_const(202));
#line 494
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 494
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 494
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__5));
#line 494
c_rt_lib0move(&___nl__6,___get_global_const(202));
#line 494
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__6, ___nl__4));
#line 494
c_rt_lib0move(&___nl__6,___get_global_const(633));
#line 494
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__6, ___nl__3));
#line 494
c_rt_lib0clear(&___nl__6);
#line 494
c_rt_lib0clear(&___nl__3);
#line 494
c_rt_lib0clear(&___nl__4);
#line 494
c_rt_lib0clear(&___nl__5);
#line 496
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 496
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 496
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 496
c_rt_lib0clear(&___nl__5);
#line 496
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 496
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 497
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(633)));
#line 497
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(430)));
#line 497
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 497
c_rt_lib0clear(&___nl__5);
#line 498
goto label_1;
#line 498
label_2:
#line 499
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 499
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 499
c_rt_lib0clear(&___nl__5);
#line 500
goto label_1;
#line 500
label_1:
#line 500
c_rt_lib0clear(&___nl__4);
#line 501
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(75)));
#line 501
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__1));
#line 501
c_rt_lib0clear(&___nl__5);
#line 502
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(378)));
#line 502
c_rt_lib0move(&___nl__5, interpreter_priv0build_registers(___nl__6));
#line 502
c_rt_lib0clear(&___nl__6);
#line 503
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 504
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 505
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 506
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 506
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 506
c_rt_lib0clear(&___nl__10);
#line 506
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 506
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 506
label_5:
#line 506
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__10, ___nl__9));
#line 506
if(c_rt_lib0check_true_native(___nl__12)){ goto label_3;}
#line 507
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 507
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__13, ___nl__10));
#line 509
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__13, ___get_global_const(234)));
#line 509
if(c_rt_lib0check_true_native(___nl__15)){ goto label_7;}
#line 511
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__13, ___get_global_const(5)));
#line 511
if(c_rt_lib0check_true_native(___nl__15)){ goto label_8;}
#line 511
c_rt_lib0move(&___nl__15,___get_global_const(74));
#line 511
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__13));
#line 511
nl_die_arg(___nl__15);
#line 509
label_7:
#line 509
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__13, ___get_global_const(234)));
#line 510
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(633)));
#line 510
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(618)));
#line 510
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__17, ___nl__16));
#line 510
c_rt_lib0copy(&___nl__14, ___nl__17);
#line 510
c_rt_lib0clear(&___nl__17);
#line 510
c_rt_lib0clear(&___nl__16);
#line 511
goto label_6;
#line 511
label_8:
#line 511
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__13, ___get_global_const(5)));
#line 512
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(633)));
#line 512
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(618)));
#line 512
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__17, ___nl__16));
#line 512
c_rt_lib0copy(&___nl__14, ___nl__17);
#line 512
c_rt_lib0clear(&___nl__17);
#line 513
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__8, ___nl__16));
#line 513
c_rt_lib0clear(&___nl__16);
#line 514
goto label_6;
#line 514
label_6:
#line 514
c_rt_lib0clear(&___nl__15);
#line 515
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 515
c_rt_lib0array_set(&___nl__5, ___nl__8, ___nl__15);
#line 515
c_rt_lib0clear(&___nl__15);
#line 516
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 516
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__15));
#line 516
c_rt_lib0clear(&___nl__15);
#line 516
c_rt_lib0clear(&___nl__13);
#line 516
c_rt_lib0clear(&___nl__14);
#line 517
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 517
goto label_5;
#line 517
label_3:
#line 517
c_rt_lib0clear(&___nl__9);
#line 517
c_rt_lib0clear(&___nl__10);
#line 517
c_rt_lib0clear(&___nl__11);
#line 517
c_rt_lib0clear(&___nl__12);
#line 518
c_rt_lib0move(&___nl__9,___get_global_const(632));
#line 518
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___2, ___nl__9));
#line 518
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(633)));
#line 518
c_rt_lib0delete(array0push(&___nl__9, ___nl__10));
#line 518
c_rt_lib0clear(&___nl__10);
#line 518
c_rt_lib0move(&___nl__10,___get_global_const(632));
#line 518
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__10, ___nl__9));
#line 518
c_rt_lib0clear(&___nl__10);
#line 518
c_rt_lib0clear(&___nl__9);
#line 519
c_rt_lib0copy(&___nl__9, ___nl__4);
#line 519
c_rt_lib0hash_set_value_dec(___ref___2, ___get_global_const(71), ___nl__9);
#line 519
c_rt_lib0clear(&___nl__9);
#line 520
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 520
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 520
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(7, ___get_global_const(617), ___nl__1, ___get_global_const(430), ___nl__3, ___get_global_const(202), ___nl__10, ___get_global_const(618), ___nl__5, ___get_global_const(291), ___nl__11, ___get_global_const(619), ___nl__6, ___get_global_const(620), ___nl__7));
#line 520
c_rt_lib0clear(&___nl__10);
#line 520
c_rt_lib0clear(&___nl__11);
#line 520
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 520
c_rt_lib0hash_set_value_dec(___ref___2, ___get_global_const(633), ___nl__10);
#line 520
c_rt_lib0clear(&___nl__9);
#line 520
c_rt_lib0clear(&___nl__10);
#line 529
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 529
c_rt_lib0move(&___nl__9, c_rt_lib0unary_minus(___nl__9));
#line 529
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 529
c_rt_lib0hash_set_value_dec(___ref___2, ___get_global_const(634), ___nl__10);
#line 529
c_rt_lib0clear(&___nl__9);
#line 529
c_rt_lib0clear(&___nl__10);
#line 529
c_rt_lib0clear(&___nl__3);
#line 529
c_rt_lib0clear(&___nl__4);
#line 529
c_rt_lib0clear(&___nl__5);
#line 529
c_rt_lib0clear(&___nl__6);
#line 529
c_rt_lib0clear(&___nl__7);
#line 529
c_rt_lib0clear(&___nl__8);
#line 529
c_rt_lib0clear(&___nl__0);
#line 529
c_rt_lib0clear(&___nl__1);
#line 529
return NULL;
}

ImmT interpreter_priv0handle_extern_call(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
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
#line 533
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 534
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 534
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 534
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 534
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 534
label_3:
#line 534
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 534
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 534
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 536
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__4, ___get_global_const(234)));
#line 536
if(c_rt_lib0check_true_native(___nl__10)){ goto label_5;}
#line 538
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__4, ___get_global_const(5)));
#line 538
if(c_rt_lib0check_true_native(___nl__10)){ goto label_6;}
#line 538
c_rt_lib0move(&___nl__10,___get_global_const(74));
#line 538
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__4));
#line 538
nl_die_arg(___nl__10);
#line 536
label_5:
#line 536
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__4, ___get_global_const(234)));
#line 537
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(633)));
#line 537
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(618)));
#line 537
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__12, ___nl__11));
#line 537
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 537
c_rt_lib0clear(&___nl__12);
#line 537
c_rt_lib0clear(&___nl__11);
#line 538
goto label_4;
#line 538
label_6:
#line 538
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__4, ___get_global_const(5)));
#line 539
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(633)));
#line 539
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(618)));
#line 539
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__12, ___nl__11));
#line 539
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 539
c_rt_lib0clear(&___nl__12);
#line 539
c_rt_lib0clear(&___nl__11);
#line 540
goto label_4;
#line 540
label_4:
#line 540
c_rt_lib0clear(&___nl__10);
#line 541
c_rt_lib0delete(array0push(&___nl__2, ___nl__9));
#line 541
c_rt_lib0clear(&___nl__9);
#line 542
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 542
goto label_3;
#line 542
label_1:
#line 542
c_rt_lib0clear(&___nl__3);
#line 542
c_rt_lib0clear(&___nl__4);
#line 542
c_rt_lib0clear(&___nl__5);
#line 542
c_rt_lib0clear(&___nl__6);
#line 542
c_rt_lib0clear(&___nl__7);
#line 542
c_rt_lib0clear(&___nl__8);
#line 544
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(637)));
#line 544
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 544
c_rt_lib0move(&___nl__6,___get_global_const(579));
#line 544
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 544
c_rt_lib0clear(&___nl__6);
#line 544
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(385)));
#line 544
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 544
c_rt_lib0clear(&___nl__6);
#line 544
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__5));
#line 544
c_rt_lib0clear(&___nl__5);
#line 544
c_rt_lib0clear(&___nl__4);
#line 546
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(73)));
#line 546
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 546
c_rt_lib0clear(&___nl__5);
#line 546
c_rt_lib0move(&___nl__5, array0len(___nl__2));
#line 546
c_rt_lib0move(&___nl__4, c_rt_lib0num_ne(___nl__4, ___nl__5));
#line 546
c_rt_lib0clear(&___nl__5);
#line 546
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 546
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 547
c_rt_lib0move(&___nl__5,___get_global_const(654));
#line 547
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__5));
#line 547
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 547
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(630), ___nl__6);
#line 547
c_rt_lib0clear(&___nl__5);
#line 547
c_rt_lib0clear(&___nl__6);
#line 548
goto label_8;
#line 548
label_8:
#line 548
c_rt_lib0clear(&___nl__4);
#line 549
c_rt_lib0move(&___nl__4, array0len(___nl__2));
#line 549
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 549
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 549
label_11:
#line 549
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__5, ___nl__4));
#line 549
if(c_rt_lib0check_true_native(___nl__7)){ goto label_9;}
#line 550
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(73)));
#line 550
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__5));
#line 550
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__5));
#line 550
c_rt_lib0delete(ptd0ensure_only_dynamic(___nl__8, ___nl__9));
#line 550
c_rt_lib0clear(&___nl__9);
#line 550
c_rt_lib0clear(&___nl__8);
#line 551
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 551
goto label_11;
#line 551
label_9:
#line 551
c_rt_lib0clear(&___nl__4);
#line 551
c_rt_lib0clear(&___nl__5);
#line 551
c_rt_lib0clear(&___nl__6);
#line 551
c_rt_lib0clear(&___nl__7);
#line 552
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(71)));
#line 552
c_rt_lib0move(&___nl__4, func0exec_ref(___nl__5, &___nl__2));
#line 552
c_rt_lib0clear(&___nl__5);
#line 553
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(72)));
#line 553
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(70)));
#line 553
if(c_rt_lib0check_true_native(___nl__6)){ goto label_13;}
#line 562
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(623)));
#line 562
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 562
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 562
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 562
nl_die_arg(___nl__6);
#line 553
label_13:
#line 554
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 554
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 554
c_rt_lib0clear(&___nl__8);
#line 554
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 554
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 554
label_17:
#line 554
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__8, ___nl__7));
#line 554
if(c_rt_lib0check_true_native(___nl__10)){ goto label_15;}
#line 555
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 555
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__11, ___nl__8));
#line 556
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(234)));
#line 556
if(c_rt_lib0check_true_native(___nl__12)){ goto label_19;}
#line 557
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(5)));
#line 557
if(c_rt_lib0check_true_native(___nl__12)){ goto label_20;}
#line 557
c_rt_lib0move(&___nl__12,___get_global_const(74));
#line 557
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 557
nl_die_arg(___nl__12);
#line 556
label_19:
#line 556
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(234)));
#line 556
c_rt_lib0clear(&___nl__13);
#line 557
goto label_18;
#line 557
label_20:
#line 557
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(5)));
#line 558
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 558
c_rt_lib0move(&___nl__15,___get_global_const(633));
#line 558
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(*___ref___1, ___nl__15));
#line 558
c_rt_lib0move(&___nl__16,___get_global_const(618));
#line 558
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__15, ___nl__16));
#line 558
c_rt_lib0copy(&___nl__17, ___nl__14);
#line 558
c_rt_lib0array_set(&___nl__16, ___nl__13, ___nl__17);
#line 558
c_rt_lib0move(&___nl__18,___get_global_const(618));
#line 558
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__15, ___nl__18, ___nl__16));
#line 558
c_rt_lib0move(&___nl__18,___get_global_const(633));
#line 558
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__18, ___nl__15));
#line 558
c_rt_lib0clear(&___nl__18);
#line 558
c_rt_lib0clear(&___nl__14);
#line 558
c_rt_lib0clear(&___nl__15);
#line 558
c_rt_lib0clear(&___nl__16);
#line 558
c_rt_lib0clear(&___nl__17);
#line 558
c_rt_lib0clear(&___nl__13);
#line 559
goto label_18;
#line 559
label_18:
#line 559
c_rt_lib0clear(&___nl__12);
#line 559
c_rt_lib0clear(&___nl__11);
#line 560
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 560
goto label_17;
#line 560
label_15:
#line 560
c_rt_lib0clear(&___nl__7);
#line 560
c_rt_lib0clear(&___nl__8);
#line 560
c_rt_lib0clear(&___nl__9);
#line 560
c_rt_lib0clear(&___nl__10);
#line 561
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 561
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 561
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 561
c_rt_lib0clear(&___nl__8);
#line 561
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 561
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 561
if(c_rt_lib0check_true_native(___nl__7)){ goto label_22;}
#line 561
c_rt_lib0move(&___nl__8,___get_global_const(633));
#line 561
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 561
c_rt_lib0move(&___nl__9,___get_global_const(618));
#line 561
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 561
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 561
c_rt_lib0copy(&___nl__10, ___nl__4);
#line 561
c_rt_lib0array_set(&___nl__9, ___nl__11, ___nl__10);
#line 561
c_rt_lib0move(&___nl__12,___get_global_const(618));
#line 561
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__12, ___nl__9));
#line 561
c_rt_lib0move(&___nl__12,___get_global_const(633));
#line 561
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__8));
#line 561
c_rt_lib0clear(&___nl__12);
#line 561
c_rt_lib0clear(&___nl__8);
#line 561
c_rt_lib0clear(&___nl__9);
#line 561
c_rt_lib0clear(&___nl__10);
#line 561
c_rt_lib0clear(&___nl__11);
#line 561
goto label_22;
#line 561
label_22:
#line 561
c_rt_lib0clear(&___nl__7);
#line 562
goto label_12;
#line 562
label_14:
#line 563
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 563
c_rt_lib0move(&___nl__8,___get_global_const(579));
#line 563
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 563
c_rt_lib0clear(&___nl__8);
#line 563
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(385)));
#line 563
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 563
c_rt_lib0clear(&___nl__8);
#line 563
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(623), ___nl__7));
#line 563
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 563
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(630), ___nl__8);
#line 563
c_rt_lib0clear(&___nl__7);
#line 563
c_rt_lib0clear(&___nl__8);
#line 564
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 564
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 564
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(635), ___nl__8);
#line 564
c_rt_lib0clear(&___nl__7);
#line 564
c_rt_lib0clear(&___nl__8);
#line 565
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 565
c_rt_lib0move(&___nl__7, c_rt_lib0unary_minus(___nl__7));
#line 565
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 565
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(634), ___nl__8);
#line 565
c_rt_lib0clear(&___nl__7);
#line 565
c_rt_lib0clear(&___nl__8);
#line 566
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 566
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 566
c_rt_lib0move(&___nl__8,___get_global_const(202));
#line 566
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__7, ___nl__8));
#line 566
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 566
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 566
c_rt_lib0move(&___nl__10,___get_global_const(202));
#line 566
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__7, ___nl__10, ___nl__8));
#line 566
c_rt_lib0move(&___nl__10,___get_global_const(633));
#line 566
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__10, ___nl__7));
#line 566
c_rt_lib0clear(&___nl__10);
#line 566
c_rt_lib0clear(&___nl__7);
#line 566
c_rt_lib0clear(&___nl__8);
#line 566
c_rt_lib0clear(&___nl__9);
#line 567
goto label_12;
#line 567
label_12:
#line 567
c_rt_lib0clear(&___nl__5);
#line 567
c_rt_lib0clear(&___nl__6);
#line 567
c_rt_lib0clear(&___nl__2);
#line 567
c_rt_lib0clear(&___nl__3);
#line 567
c_rt_lib0clear(&___nl__4);
#line 567
c_rt_lib0clear(&___nl__0);
#line 567
return NULL;
}

ImmT interpreter_priv0get_compiler_functions(){
interpreter_priv0__const__init();
return interpreter_priv0__const__sing(7);}
ImmT interpreter_priv0get_compiler_functions0cal() {
interpreter_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 570
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 571
c_rt_lib0move(&___nl__1,___get_global_const(655));
#line 571
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 571
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 571
c_rt_lib0clear(&___nl__2);
#line 571
c_rt_lib0clear(&___nl__1);
#line 572
c_rt_lib0move(&___nl__1,___get_global_const(656));
#line 572
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 572
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 572
c_rt_lib0clear(&___nl__2);
#line 572
c_rt_lib0clear(&___nl__1);
#line 573
c_rt_lib0move(&___nl__1,___get_global_const(657));
#line 573
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 573
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 573
c_rt_lib0clear(&___nl__2);
#line 573
c_rt_lib0clear(&___nl__1);
#line 574
c_rt_lib0move(&___nl__1,___get_global_const(658));
#line 574
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 574
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 574
c_rt_lib0clear(&___nl__2);
#line 574
c_rt_lib0clear(&___nl__1);
#line 575
c_rt_lib0move(&___nl__1,___get_global_const(659));
#line 575
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 575
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 575
c_rt_lib0clear(&___nl__2);
#line 575
c_rt_lib0clear(&___nl__1);
#line 576
c_rt_lib0move(&___nl__1,___get_global_const(660));
#line 576
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 576
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 576
c_rt_lib0clear(&___nl__2);
#line 576
c_rt_lib0clear(&___nl__1);
#line 577
c_rt_lib0move(&___nl__1,___get_global_const(661));
#line 577
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 577
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 577
c_rt_lib0clear(&___nl__2);
#line 577
c_rt_lib0clear(&___nl__1);
#line 579
c_rt_lib0move(&___nl__1,___get_global_const(662));
#line 579
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 579
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 579
c_rt_lib0clear(&___nl__2);
#line 579
c_rt_lib0clear(&___nl__1);
#line 580
c_rt_lib0move(&___nl__1,___get_global_const(663));
#line 580
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 580
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 580
c_rt_lib0clear(&___nl__2);
#line 580
c_rt_lib0clear(&___nl__1);
#line 581
c_rt_lib0move(&___nl__1,___get_global_const(664));
#line 581
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 581
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 581
c_rt_lib0clear(&___nl__2);
#line 581
c_rt_lib0clear(&___nl__1);
#line 582
c_rt_lib0move(&___nl__1,___get_global_const(665));
#line 582
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 582
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 582
c_rt_lib0clear(&___nl__2);
#line 582
c_rt_lib0clear(&___nl__1);
#line 583
c_rt_lib0move(&___nl__1,___get_global_const(666));
#line 583
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 583
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 583
c_rt_lib0clear(&___nl__2);
#line 583
c_rt_lib0clear(&___nl__1);
#line 584
c_rt_lib0move(&___nl__1,___get_global_const(667));
#line 584
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 584
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 584
c_rt_lib0clear(&___nl__2);
#line 584
c_rt_lib0clear(&___nl__1);
#line 586
c_rt_lib0move(&___nl__1,___get_global_const(668));
#line 586
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 586
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 586
c_rt_lib0clear(&___nl__2);
#line 586
c_rt_lib0clear(&___nl__1);
#line 587
c_rt_lib0move(&___nl__1,___get_global_const(669));
#line 587
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 587
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 587
c_rt_lib0clear(&___nl__2);
#line 587
c_rt_lib0clear(&___nl__1);
#line 588
c_rt_lib0move(&___nl__1,___get_global_const(670));
#line 588
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 588
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 588
c_rt_lib0clear(&___nl__2);
#line 588
c_rt_lib0clear(&___nl__1);
#line 589
c_rt_lib0move(&___nl__1,___get_global_const(671));
#line 589
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 589
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 589
c_rt_lib0clear(&___nl__2);
#line 589
c_rt_lib0clear(&___nl__1);
#line 590
c_rt_lib0move(&___nl__1,___get_global_const(672));
#line 590
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 590
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 590
c_rt_lib0clear(&___nl__2);
#line 590
c_rt_lib0clear(&___nl__1);
#line 591
c_rt_lib0move(&___nl__1,___get_global_const(673));
#line 591
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 591
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 591
c_rt_lib0clear(&___nl__2);
#line 591
c_rt_lib0clear(&___nl__1);
#line 592
c_rt_lib0move(&___nl__1,___get_global_const(674));
#line 592
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 592
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 592
c_rt_lib0clear(&___nl__2);
#line 592
c_rt_lib0clear(&___nl__1);
#line 593
c_rt_lib0move(&___nl__1,___get_global_const(675));
#line 593
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 593
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 593
c_rt_lib0clear(&___nl__2);
#line 593
c_rt_lib0clear(&___nl__1);
#line 595
c_rt_lib0move(&___nl__1,___get_global_const(676));
#line 595
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 595
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 595
c_rt_lib0clear(&___nl__2);
#line 595
c_rt_lib0clear(&___nl__1);
#line 596
c_rt_lib0move(&___nl__1,___get_global_const(677));
#line 596
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 596
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 596
c_rt_lib0clear(&___nl__2);
#line 596
c_rt_lib0clear(&___nl__1);
#line 597
c_rt_lib0move(&___nl__1,___get_global_const(678));
#line 597
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 597
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 597
c_rt_lib0clear(&___nl__2);
#line 597
c_rt_lib0clear(&___nl__1);
#line 598
c_rt_lib0move(&___nl__1,___get_global_const(679));
#line 598
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 598
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 598
c_rt_lib0clear(&___nl__2);
#line 598
c_rt_lib0clear(&___nl__1);
#line 599
c_rt_lib0move(&___nl__1,___get_global_const(680));
#line 599
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 599
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 599
c_rt_lib0clear(&___nl__2);
#line 599
c_rt_lib0clear(&___nl__1);
#line 600
c_rt_lib0move(&___nl__1,___get_global_const(681));
#line 600
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 600
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 600
c_rt_lib0clear(&___nl__2);
#line 600
c_rt_lib0clear(&___nl__1);
#line 601
c_rt_lib0move(&___nl__1,___get_global_const(682));
#line 601
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 601
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 601
c_rt_lib0clear(&___nl__2);
#line 601
c_rt_lib0clear(&___nl__1);
#line 603
c_rt_lib0move(&___nl__1,___get_global_const(683));
#line 603
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 603
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 603
c_rt_lib0clear(&___nl__2);
#line 603
c_rt_lib0clear(&___nl__1);
#line 604
c_rt_lib0move(&___nl__1,___get_global_const(684));
#line 604
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 604
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 604
c_rt_lib0clear(&___nl__2);
#line 604
c_rt_lib0clear(&___nl__1);
#line 605
c_rt_lib0move(&___nl__1,___get_global_const(685));
#line 605
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 605
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 605
c_rt_lib0clear(&___nl__2);
#line 605
c_rt_lib0clear(&___nl__1);
#line 606
c_rt_lib0move(&___nl__1,___get_global_const(686));
#line 606
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 606
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 606
c_rt_lib0clear(&___nl__2);
#line 606
c_rt_lib0clear(&___nl__1);
#line 607
c_rt_lib0move(&___nl__1,___get_global_const(687));
#line 607
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 607
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 607
c_rt_lib0clear(&___nl__2);
#line 607
c_rt_lib0clear(&___nl__1);
#line 608
c_rt_lib0move(&___nl__1,___get_global_const(688));
#line 608
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 608
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 608
c_rt_lib0clear(&___nl__2);
#line 608
c_rt_lib0clear(&___nl__1);
#line 609
c_rt_lib0move(&___nl__1,___get_global_const(689));
#line 609
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 609
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 609
c_rt_lib0clear(&___nl__2);
#line 609
c_rt_lib0clear(&___nl__1);
#line 610
c_rt_lib0move(&___nl__1,___get_global_const(690));
#line 610
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 610
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 610
c_rt_lib0clear(&___nl__2);
#line 610
c_rt_lib0clear(&___nl__1);
#line 611
c_rt_lib0move(&___nl__1,___get_global_const(691));
#line 611
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 611
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 611
c_rt_lib0clear(&___nl__2);
#line 611
c_rt_lib0clear(&___nl__1);
#line 612
c_rt_lib0move(&___nl__1,___get_global_const(692));
#line 612
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 612
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 612
c_rt_lib0clear(&___nl__2);
#line 612
c_rt_lib0clear(&___nl__1);
#line 614
return ___nl__0;
#line 614
c_rt_lib0clear(&___nl__0);
#line 614
return NULL;
}

ImmT interpreter_priv0handle_array_call(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 618
c_rt_lib0move(&___nl__3,___get_global_const(651));
#line 618
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__3));
#line 619
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 619
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__6));
#line 619
c_rt_lib0clear(&___nl__6);
#line 619
c_rt_lib0move(&___nl__4, nl0is_array(___nl__5));
#line 619
c_rt_lib0clear(&___nl__5);
#line 619
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 619
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 619
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 619
c_rt_lib0clear(&___nl__0);
#line 619
c_rt_lib0clear(&___nl__4);
#line 619
return ___nl__3;
#line 619
goto label_2;
#line 619
label_2:
#line 619
c_rt_lib0clear(&___nl__4);
#line 620
c_rt_lib0move(&___nl__4,___get_global_const(655));
#line 620
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 620
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 620
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 621
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 621
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_arr(*___ref___2, ___nl__6));
#line 621
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 621
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 621
c_rt_lib0clear(&___nl__8);
#line 621
c_rt_lib0delete(array0push(&___nl__5, ___nl__7));
#line 621
c_rt_lib0clear(&___nl__7);
#line 621
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___2, ___nl__6, ___nl__5));
#line 621
c_rt_lib0clear(&___nl__5);
#line 621
c_rt_lib0clear(&___nl__6);
#line 622
goto label_3;
#line 622
label_4:
#line 622
c_rt_lib0move(&___nl__4,___get_global_const(656));
#line 622
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 622
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 622
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 623
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 623
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 623
c_rt_lib0clear(&___nl__7);
#line 623
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 623
c_rt_lib0clear(&___nl__6);
#line 623
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 623
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 623
c_rt_lib0clear(&___nl__6);
#line 623
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 623
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 623
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 623
c_rt_lib0clear(&___nl__0);
#line 623
c_rt_lib0clear(&___nl__4);
#line 623
c_rt_lib0clear(&___nl__5);
#line 623
return ___nl__3;
#line 623
goto label_7;
#line 623
label_7:
#line 623
c_rt_lib0clear(&___nl__5);
#line 624
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 624
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_arr(*___ref___2, ___nl__6));
#line 624
c_rt_lib0delete(array0pop(&___nl__5));
#line 624
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___2, ___nl__6, ___nl__5));
#line 624
c_rt_lib0clear(&___nl__5);
#line 624
c_rt_lib0clear(&___nl__6);
#line 625
goto label_3;
#line 625
label_5:
#line 625
c_rt_lib0move(&___nl__4,___get_global_const(657));
#line 625
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 625
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 625
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 626
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 626
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 626
c_rt_lib0clear(&___nl__8);
#line 626
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__7));
#line 626
c_rt_lib0clear(&___nl__7);
#line 626
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 626
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 626
c_rt_lib0move(&___nl__8,___get_global_const(137));
#line 626
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 626
c_rt_lib0clear(&___nl__8);
#line 626
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__7));
#line 626
c_rt_lib0clear(&___nl__7);
#line 626
label_11:
#line 626
c_rt_lib0clear(&___nl__6);
#line 626
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 626
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 626
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 626
c_rt_lib0clear(&___nl__0);
#line 626
c_rt_lib0clear(&___nl__4);
#line 626
c_rt_lib0clear(&___nl__5);
#line 626
return ___nl__3;
#line 626
goto label_10;
#line 626
label_10:
#line 626
c_rt_lib0clear(&___nl__5);
#line 627
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 627
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 627
c_rt_lib0clear(&___nl__8);
#line 627
c_rt_lib0move(&___nl__5, string_utils0is_number(___nl__7));
#line 627
c_rt_lib0clear(&___nl__7);
#line 627
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 627
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 627
c_rt_lib0move(&___nl__8,___get_global_const(137));
#line 627
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 627
c_rt_lib0clear(&___nl__8);
#line 627
c_rt_lib0move(&___nl__5, string_utils0is_number(___nl__7));
#line 627
c_rt_lib0clear(&___nl__7);
#line 627
label_14:
#line 627
c_rt_lib0clear(&___nl__6);
#line 627
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 627
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 627
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 627
c_rt_lib0clear(&___nl__0);
#line 627
c_rt_lib0clear(&___nl__4);
#line 627
c_rt_lib0clear(&___nl__5);
#line 627
return ___nl__3;
#line 627
goto label_13;
#line 627
label_13:
#line 627
c_rt_lib0clear(&___nl__5);
#line 628
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 628
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 628
c_rt_lib0clear(&___nl__7);
#line 628
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 628
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__5, ___nl__7));
#line 628
c_rt_lib0clear(&___nl__7);
#line 628
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 628
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 628
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 628
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 628
c_rt_lib0clear(&___nl__7);
#line 628
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 628
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 628
c_rt_lib0clear(&___nl__9);
#line 628
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 628
c_rt_lib0clear(&___nl__8);
#line 628
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__5, ___nl__7));
#line 628
c_rt_lib0clear(&___nl__7);
#line 628
label_17:
#line 628
c_rt_lib0clear(&___nl__6);
#line 628
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 628
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 628
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 628
c_rt_lib0clear(&___nl__0);
#line 628
c_rt_lib0clear(&___nl__4);
#line 628
c_rt_lib0clear(&___nl__5);
#line 628
return ___nl__3;
#line 628
goto label_16;
#line 628
label_16:
#line 628
c_rt_lib0clear(&___nl__5);
#line 629
c_rt_lib0move(&___nl__6,___get_global_const(137));
#line 629
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__6));
#line 629
c_rt_lib0clear(&___nl__6);
#line 629
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 629
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__5, ___nl__6));
#line 629
c_rt_lib0clear(&___nl__6);
#line 629
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 629
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 629
if(c_rt_lib0check_true_native(___nl__5)){ goto label_19;}
#line 629
c_rt_lib0clear(&___nl__0);
#line 629
c_rt_lib0clear(&___nl__4);
#line 629
c_rt_lib0clear(&___nl__5);
#line 629
return ___nl__3;
#line 629
goto label_19;
#line 629
label_19:
#line 629
c_rt_lib0clear(&___nl__5);
#line 630
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 630
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0move(&___nl__8,___get_global_const(137));
#line 630
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 630
c_rt_lib0clear(&___nl__8);
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__7));
#line 630
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__5, ___nl__7));
#line 630
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 630
if(c_rt_lib0check_true_native(___nl__6)){ goto label_22;}
#line 630
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 630
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0move(&___nl__8,___get_global_const(137));
#line 630
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 630
c_rt_lib0clear(&___nl__8);
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__7));
#line 630
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0sub_mod(___nl__5, ___nl__7));
#line 630
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 630
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 630
c_rt_lib0clear(&___nl__9);
#line 630
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 630
c_rt_lib0clear(&___nl__8);
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__5, ___nl__7));
#line 630
c_rt_lib0clear(&___nl__7);
#line 630
label_22:
#line 630
c_rt_lib0clear(&___nl__6);
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 630
if(c_rt_lib0check_true_native(___nl__5)){ goto label_21;}
#line 630
c_rt_lib0clear(&___nl__0);
#line 630
c_rt_lib0clear(&___nl__4);
#line 630
c_rt_lib0clear(&___nl__5);
#line 630
return ___nl__3;
#line 630
goto label_21;
#line 630
label_21:
#line 630
c_rt_lib0clear(&___nl__5);
#line 631
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 631
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 631
c_rt_lib0clear(&___nl__7);
#line 631
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 631
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 631
c_rt_lib0clear(&___nl__8);
#line 631
c_rt_lib0move(&___nl__9,___get_global_const(137));
#line 631
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 631
c_rt_lib0clear(&___nl__9);
#line 631
c_rt_lib0move(&___nl__5, array0subarray(___nl__6, ___nl__7, ___nl__8));
#line 631
c_rt_lib0clear(&___nl__8);
#line 631
c_rt_lib0clear(&___nl__7);
#line 631
c_rt_lib0clear(&___nl__6);
#line 631
c_rt_lib0copy(___ref___1, ___nl__5);
#line 631
c_rt_lib0clear(&___nl__5);
#line 632
goto label_3;
#line 632
label_8:
#line 632
c_rt_lib0move(&___nl__4,___get_global_const(658));
#line 632
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 632
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 632
if(c_rt_lib0check_true_native(___nl__4)){ goto label_23;}
#line 633
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 633
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 633
c_rt_lib0clear(&___nl__7);
#line 633
c_rt_lib0move(&___nl__5, nl0is_array(___nl__6));
#line 633
c_rt_lib0clear(&___nl__6);
#line 633
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 633
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 633
if(c_rt_lib0check_true_native(___nl__5)){ goto label_25;}
#line 633
c_rt_lib0clear(&___nl__0);
#line 633
c_rt_lib0clear(&___nl__4);
#line 633
c_rt_lib0clear(&___nl__5);
#line 633
return ___nl__3;
#line 633
goto label_25;
#line 633
label_25:
#line 633
c_rt_lib0clear(&___nl__5);
#line 634
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 634
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_arr(*___ref___2, ___nl__6));
#line 634
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 634
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 634
c_rt_lib0clear(&___nl__8);
#line 634
c_rt_lib0delete(array0append(&___nl__5, ___nl__7));
#line 634
c_rt_lib0clear(&___nl__7);
#line 634
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___2, ___nl__6, ___nl__5));
#line 634
c_rt_lib0clear(&___nl__5);
#line 634
c_rt_lib0clear(&___nl__6);
#line 635
goto label_3;
#line 635
label_23:
#line 635
c_rt_lib0move(&___nl__4,___get_global_const(659));
#line 635
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 635
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 635
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 636
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 636
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 636
c_rt_lib0clear(&___nl__7);
#line 636
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 636
c_rt_lib0clear(&___nl__6);
#line 636
c_rt_lib0copy(___ref___1, ___nl__5);
#line 636
c_rt_lib0clear(&___nl__5);
#line 637
goto label_3;
#line 637
label_26:
#line 637
c_rt_lib0move(&___nl__4,___get_global_const(660));
#line 637
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 637
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 637
if(c_rt_lib0check_true_native(___nl__4)){ goto label_27;}
#line 638
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 638
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 638
c_rt_lib0clear(&___nl__7);
#line 638
c_rt_lib0move(&___nl__5, nl0is_array(___nl__6));
#line 638
c_rt_lib0clear(&___nl__6);
#line 638
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 638
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 638
if(c_rt_lib0check_true_native(___nl__5)){ goto label_29;}
#line 638
c_rt_lib0clear(&___nl__0);
#line 638
c_rt_lib0clear(&___nl__4);
#line 638
c_rt_lib0clear(&___nl__5);
#line 638
return ___nl__3;
#line 638
goto label_29;
#line 638
label_29:
#line 638
c_rt_lib0clear(&___nl__5);
#line 639
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 639
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 639
c_rt_lib0clear(&___nl__7);
#line 639
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 639
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 639
c_rt_lib0clear(&___nl__8);
#line 639
c_rt_lib0move(&___nl__5, array0cmp(___nl__6, ___nl__7));
#line 639
c_rt_lib0clear(&___nl__7);
#line 639
c_rt_lib0clear(&___nl__6);
#line 639
c_rt_lib0copy(___ref___1, ___nl__5);
#line 639
c_rt_lib0clear(&___nl__5);
#line 640
goto label_3;
#line 640
label_27:
#line 640
c_rt_lib0move(&___nl__4,___get_global_const(661));
#line 640
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 640
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 640
if(c_rt_lib0check_true_native(___nl__4)){ goto label_30;}
#line 641
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 641
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__6));
#line 641
c_rt_lib0clear(&___nl__6);
#line 641
c_rt_lib0copy(___ref___1, ___nl__5);
#line 641
c_rt_lib0clear(&___nl__5);
#line 642
c_rt_lib0delete(array0sort(___ref___1));
#line 643
goto label_3;
#line 643
label_30:
#line 644
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 644
nl_die_arg(___nl__5);
#line 644
c_rt_lib0clear(&___nl__5);
#line 645
goto label_3;
#line 645
label_3:
#line 645
c_rt_lib0clear(&___nl__4);
#line 646
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 646
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 646
c_rt_lib0clear(&___nl__0);
#line 646
c_rt_lib0clear(&___nl__3);
#line 646
return ___nl__4;
#line 646
c_rt_lib0clear(&___nl__4);
#line 646
c_rt_lib0clear(&___nl__3);
#line 646
c_rt_lib0clear(&___nl__0);
#line 646
return NULL;
}

ImmT interpreter_priv0handle_hash_call(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 650
c_rt_lib0move(&___nl__3,___get_global_const(651));
#line 650
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__3));
#line 651
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 651
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__6));
#line 651
c_rt_lib0clear(&___nl__6);
#line 651
c_rt_lib0move(&___nl__4, nl0is_hash(___nl__5));
#line 651
c_rt_lib0clear(&___nl__5);
#line 651
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 651
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 651
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 651
c_rt_lib0clear(&___nl__0);
#line 651
c_rt_lib0clear(&___nl__4);
#line 651
return ___nl__3;
#line 651
goto label_2;
#line 651
label_2:
#line 651
c_rt_lib0clear(&___nl__4);
#line 652
c_rt_lib0move(&___nl__4,___get_global_const(662));
#line 652
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 652
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 652
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 653
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 653
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 653
c_rt_lib0clear(&___nl__7);
#line 653
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 653
c_rt_lib0clear(&___nl__6);
#line 653
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 653
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 653
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 653
c_rt_lib0clear(&___nl__0);
#line 653
c_rt_lib0clear(&___nl__4);
#line 653
c_rt_lib0clear(&___nl__5);
#line 653
return ___nl__3;
#line 653
goto label_6;
#line 653
label_6:
#line 653
c_rt_lib0clear(&___nl__5);
#line 654
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 654
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 654
c_rt_lib0clear(&___nl__7);
#line 654
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 654
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 654
c_rt_lib0clear(&___nl__8);
#line 654
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__7));
#line 654
c_rt_lib0clear(&___nl__7);
#line 654
c_rt_lib0clear(&___nl__6);
#line 654
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 654
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 654
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 654
c_rt_lib0clear(&___nl__0);
#line 654
c_rt_lib0clear(&___nl__4);
#line 654
c_rt_lib0clear(&___nl__5);
#line 654
return ___nl__3;
#line 654
goto label_8;
#line 654
label_8:
#line 654
c_rt_lib0clear(&___nl__5);
#line 655
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 655
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 655
c_rt_lib0clear(&___nl__7);
#line 655
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 655
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 655
c_rt_lib0clear(&___nl__8);
#line 655
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__7));
#line 655
c_rt_lib0clear(&___nl__7);
#line 655
c_rt_lib0clear(&___nl__6);
#line 655
c_rt_lib0copy(___ref___1, ___nl__5);
#line 655
c_rt_lib0clear(&___nl__5);
#line 656
goto label_3;
#line 656
label_4:
#line 656
c_rt_lib0move(&___nl__4,___get_global_const(663));
#line 656
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 656
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 656
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 657
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 657
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 657
c_rt_lib0clear(&___nl__7);
#line 657
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 657
c_rt_lib0clear(&___nl__6);
#line 657
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 657
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 657
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 657
c_rt_lib0clear(&___nl__0);
#line 657
c_rt_lib0clear(&___nl__4);
#line 657
c_rt_lib0clear(&___nl__5);
#line 657
return ___nl__3;
#line 657
goto label_11;
#line 657
label_11:
#line 657
c_rt_lib0clear(&___nl__5);
#line 658
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 658
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 658
c_rt_lib0clear(&___nl__7);
#line 658
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 658
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 658
c_rt_lib0clear(&___nl__8);
#line 658
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__7));
#line 658
c_rt_lib0clear(&___nl__7);
#line 658
c_rt_lib0clear(&___nl__6);
#line 658
c_rt_lib0copy(___ref___1, ___nl__5);
#line 658
c_rt_lib0clear(&___nl__5);
#line 659
goto label_3;
#line 659
label_9:
#line 659
c_rt_lib0move(&___nl__4,___get_global_const(664));
#line 659
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 659
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 659
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 660
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 660
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 660
c_rt_lib0clear(&___nl__7);
#line 660
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 660
c_rt_lib0clear(&___nl__6);
#line 660
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 660
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 660
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 660
c_rt_lib0clear(&___nl__0);
#line 660
c_rt_lib0clear(&___nl__4);
#line 660
c_rt_lib0clear(&___nl__5);
#line 660
return ___nl__3;
#line 660
goto label_14;
#line 660
label_14:
#line 660
c_rt_lib0clear(&___nl__5);
#line 661
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 661
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_arr(*___ref___2, ___nl__6));
#line 661
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 661
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 661
c_rt_lib0clear(&___nl__8);
#line 661
c_rt_lib0move(&___nl__9,___get_global_const(137));
#line 661
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 661
c_rt_lib0clear(&___nl__9);
#line 661
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__8));
#line 661
c_rt_lib0clear(&___nl__8);
#line 661
c_rt_lib0clear(&___nl__7);
#line 661
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___2, ___nl__6, ___nl__5));
#line 661
c_rt_lib0clear(&___nl__5);
#line 661
c_rt_lib0clear(&___nl__6);
#line 662
goto label_3;
#line 662
label_12:
#line 662
c_rt_lib0move(&___nl__4,___get_global_const(665));
#line 662
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 662
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 662
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 663
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 663
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 663
c_rt_lib0clear(&___nl__7);
#line 663
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 663
c_rt_lib0clear(&___nl__6);
#line 663
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 663
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 663
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 663
c_rt_lib0clear(&___nl__0);
#line 663
c_rt_lib0clear(&___nl__4);
#line 663
c_rt_lib0clear(&___nl__5);
#line 663
return ___nl__3;
#line 663
goto label_17;
#line 663
label_17:
#line 663
c_rt_lib0clear(&___nl__5);
#line 664
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 664
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_arr(*___ref___2, ___nl__6));
#line 664
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 664
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 664
c_rt_lib0clear(&___nl__8);
#line 664
c_rt_lib0delete(hash0delete(&___nl__5, ___nl__7));
#line 664
c_rt_lib0clear(&___nl__7);
#line 664
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___2, ___nl__6, ___nl__5));
#line 664
c_rt_lib0clear(&___nl__5);
#line 664
c_rt_lib0clear(&___nl__6);
#line 665
goto label_3;
#line 665
label_15:
#line 665
c_rt_lib0move(&___nl__4,___get_global_const(666));
#line 665
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 665
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 665
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 666
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 666
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 666
c_rt_lib0clear(&___nl__7);
#line 666
c_rt_lib0move(&___nl__5, hash0size(___nl__6));
#line 666
c_rt_lib0clear(&___nl__6);
#line 666
c_rt_lib0copy(___ref___1, ___nl__5);
#line 666
c_rt_lib0clear(&___nl__5);
#line 667
goto label_3;
#line 667
label_18:
#line 667
c_rt_lib0move(&___nl__4,___get_global_const(667));
#line 667
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 667
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 667
if(c_rt_lib0check_true_native(___nl__4)){ goto label_19;}
#line 668
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 668
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 668
c_rt_lib0clear(&___nl__7);
#line 668
c_rt_lib0move(&___nl__5, hash0keys(___nl__6));
#line 668
c_rt_lib0clear(&___nl__6);
#line 668
c_rt_lib0copy(___ref___1, ___nl__5);
#line 668
c_rt_lib0clear(&___nl__5);
#line 669
goto label_3;
#line 669
label_19:
#line 670
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 670
nl_die_arg(___nl__5);
#line 670
c_rt_lib0clear(&___nl__5);
#line 671
goto label_3;
#line 671
label_3:
#line 671
c_rt_lib0clear(&___nl__4);
#line 672
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 672
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 672
c_rt_lib0clear(&___nl__0);
#line 672
c_rt_lib0clear(&___nl__3);
#line 672
return ___nl__4;
#line 672
c_rt_lib0clear(&___nl__4);
#line 672
c_rt_lib0clear(&___nl__3);
#line 672
c_rt_lib0clear(&___nl__0);
#line 672
return NULL;
}

ImmT interpreter_priv0handle_string_call(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 676
c_rt_lib0move(&___nl__3,___get_global_const(651));
#line 676
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__3));
#line 677
c_rt_lib0move(&___nl__4,___get_global_const(668));
#line 677
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 677
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 677
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 678
c_rt_lib0move(&___nl__5, string0lf());
#line 678
c_rt_lib0copy(___ref___1, ___nl__5);
#line 678
c_rt_lib0clear(&___nl__5);
#line 679
goto label_1;
#line 679
label_2:
#line 679
c_rt_lib0move(&___nl__4,___get_global_const(693));
#line 679
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 679
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 679
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 680
c_rt_lib0move(&___nl__5, string0tab());
#line 680
c_rt_lib0copy(___ref___1, ___nl__5);
#line 680
c_rt_lib0clear(&___nl__5);
#line 681
goto label_1;
#line 681
label_3:
#line 681
c_rt_lib0move(&___nl__4,___get_global_const(674));
#line 681
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 681
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 681
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 682
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 682
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 682
c_rt_lib0clear(&___nl__7);
#line 682
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 682
c_rt_lib0clear(&___nl__6);
#line 682
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 682
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 682
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 682
c_rt_lib0clear(&___nl__0);
#line 682
c_rt_lib0clear(&___nl__4);
#line 682
c_rt_lib0clear(&___nl__5);
#line 682
return ___nl__3;
#line 682
goto label_6;
#line 682
label_6:
#line 682
c_rt_lib0clear(&___nl__5);
#line 683
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 683
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 683
c_rt_lib0clear(&___nl__7);
#line 683
c_rt_lib0move(&___nl__5, string0length(___nl__6));
#line 683
c_rt_lib0clear(&___nl__6);
#line 683
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 683
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 683
c_rt_lib0clear(&___nl__6);
#line 683
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 683
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 683
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 683
c_rt_lib0clear(&___nl__0);
#line 683
c_rt_lib0clear(&___nl__4);
#line 683
c_rt_lib0clear(&___nl__5);
#line 683
return ___nl__3;
#line 683
goto label_8;
#line 683
label_8:
#line 683
c_rt_lib0clear(&___nl__5);
#line 684
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 684
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 684
c_rt_lib0clear(&___nl__7);
#line 684
c_rt_lib0move(&___nl__5, string0ord(___nl__6));
#line 684
c_rt_lib0clear(&___nl__6);
#line 684
c_rt_lib0copy(___ref___1, ___nl__5);
#line 684
c_rt_lib0clear(&___nl__5);
#line 685
goto label_1;
#line 685
label_4:
#line 685
c_rt_lib0move(&___nl__4,___get_global_const(675));
#line 685
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 685
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 685
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 686
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 686
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 686
c_rt_lib0clear(&___nl__7);
#line 686
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 686
c_rt_lib0clear(&___nl__6);
#line 686
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 686
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 686
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 686
c_rt_lib0clear(&___nl__0);
#line 686
c_rt_lib0clear(&___nl__4);
#line 686
c_rt_lib0clear(&___nl__5);
#line 686
return ___nl__3;
#line 686
goto label_11;
#line 686
label_11:
#line 686
c_rt_lib0clear(&___nl__5);
#line 687
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 687
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 687
c_rt_lib0clear(&___nl__7);
#line 687
c_rt_lib0move(&___nl__5, string_utils0is_number(___nl__6));
#line 687
c_rt_lib0clear(&___nl__6);
#line 687
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 687
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 687
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 687
c_rt_lib0clear(&___nl__0);
#line 687
c_rt_lib0clear(&___nl__4);
#line 687
c_rt_lib0clear(&___nl__5);
#line 687
return ___nl__3;
#line 687
goto label_13;
#line 687
label_13:
#line 687
c_rt_lib0clear(&___nl__5);
#line 688
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 688
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 688
c_rt_lib0clear(&___nl__7);
#line 688
c_rt_lib0move(&___nl__5, string0chr(___nl__6));
#line 688
c_rt_lib0clear(&___nl__6);
#line 688
c_rt_lib0copy(___ref___1, ___nl__5);
#line 688
c_rt_lib0clear(&___nl__5);
#line 689
goto label_1;
#line 689
label_9:
#line 690
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 690
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 690
c_rt_lib0clear(&___nl__7);
#line 690
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 690
c_rt_lib0clear(&___nl__6);
#line 690
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 690
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 690
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 690
c_rt_lib0clear(&___nl__0);
#line 690
c_rt_lib0clear(&___nl__4);
#line 690
c_rt_lib0clear(&___nl__5);
#line 690
return ___nl__3;
#line 690
goto label_15;
#line 690
label_15:
#line 690
c_rt_lib0clear(&___nl__5);
#line 691
c_rt_lib0move(&___nl__5,___get_global_const(670));
#line 691
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__0, ___nl__5));
#line 691
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 691
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 692
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 692
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 692
c_rt_lib0clear(&___nl__8);
#line 692
c_rt_lib0move(&___nl__6, string0length(___nl__7));
#line 692
c_rt_lib0clear(&___nl__7);
#line 692
c_rt_lib0copy(___ref___1, ___nl__6);
#line 692
c_rt_lib0clear(&___nl__6);
#line 693
goto label_16;
#line 693
label_17:
#line 693
c_rt_lib0move(&___nl__5,___get_global_const(671));
#line 693
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__0, ___nl__5));
#line 693
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 693
if(c_rt_lib0check_true_native(___nl__5)){ goto label_18;}
#line 694
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 694
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 694
c_rt_lib0clear(&___nl__9);
#line 694
c_rt_lib0move(&___nl__6, nl0is_sim(___nl__8));
#line 694
c_rt_lib0clear(&___nl__8);
#line 694
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 694
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 694
c_rt_lib0move(&___nl__9,___get_global_const(137));
#line 694
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 694
c_rt_lib0clear(&___nl__9);
#line 694
c_rt_lib0move(&___nl__6, nl0is_sim(___nl__8));
#line 694
c_rt_lib0clear(&___nl__8);
#line 694
label_21:
#line 694
c_rt_lib0clear(&___nl__7);
#line 694
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 694
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 694
if(c_rt_lib0check_true_native(___nl__6)){ goto label_20;}
#line 694
c_rt_lib0clear(&___nl__0);
#line 694
c_rt_lib0clear(&___nl__4);
#line 694
c_rt_lib0clear(&___nl__5);
#line 694
c_rt_lib0clear(&___nl__6);
#line 694
return ___nl__3;
#line 694
goto label_20;
#line 694
label_20:
#line 694
c_rt_lib0clear(&___nl__6);
#line 695
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 695
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 695
c_rt_lib0clear(&___nl__9);
#line 695
c_rt_lib0move(&___nl__6, string_utils0is_number(___nl__8));
#line 695
c_rt_lib0clear(&___nl__8);
#line 695
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 695
if(c_rt_lib0check_true_native(___nl__7)){ goto label_24;}
#line 695
c_rt_lib0move(&___nl__9,___get_global_const(137));
#line 695
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 695
c_rt_lib0clear(&___nl__9);
#line 695
c_rt_lib0move(&___nl__6, string_utils0is_number(___nl__8));
#line 695
c_rt_lib0clear(&___nl__8);
#line 695
label_24:
#line 695
c_rt_lib0clear(&___nl__7);
#line 695
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 695
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 695
if(c_rt_lib0check_true_native(___nl__6)){ goto label_23;}
#line 695
c_rt_lib0clear(&___nl__0);
#line 695
c_rt_lib0clear(&___nl__4);
#line 695
c_rt_lib0clear(&___nl__5);
#line 695
c_rt_lib0clear(&___nl__6);
#line 695
return ___nl__3;
#line 695
goto label_23;
#line 695
label_23:
#line 695
c_rt_lib0clear(&___nl__6);
#line 696
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 696
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 696
c_rt_lib0clear(&___nl__8);
#line 696
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 696
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__6, ___nl__8));
#line 696
c_rt_lib0clear(&___nl__8);
#line 696
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 696
if(c_rt_lib0check_true_native(___nl__7)){ goto label_27;}
#line 696
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 696
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 696
c_rt_lib0clear(&___nl__8);
#line 696
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 696
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(*___ref___2, ___nl__10));
#line 696
c_rt_lib0clear(&___nl__10);
#line 696
c_rt_lib0move(&___nl__8, string0length(___nl__9));
#line 696
c_rt_lib0clear(&___nl__9);
#line 696
c_rt_lib0move(&___nl__6, c_rt_lib0lt(___nl__6, ___nl__8));
#line 696
c_rt_lib0clear(&___nl__8);
#line 696
label_27:
#line 696
c_rt_lib0clear(&___nl__7);
#line 696
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 696
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 696
if(c_rt_lib0check_true_native(___nl__6)){ goto label_26;}
#line 696
c_rt_lib0clear(&___nl__0);
#line 696
c_rt_lib0clear(&___nl__4);
#line 696
c_rt_lib0clear(&___nl__5);
#line 696
c_rt_lib0clear(&___nl__6);
#line 696
return ___nl__3;
#line 696
goto label_26;
#line 696
label_26:
#line 696
c_rt_lib0clear(&___nl__6);
#line 697
c_rt_lib0move(&___nl__7,___get_global_const(137));
#line 697
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 697
c_rt_lib0clear(&___nl__7);
#line 697
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 697
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__6, ___nl__7));
#line 697
c_rt_lib0clear(&___nl__7);
#line 697
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 697
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 697
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 697
c_rt_lib0clear(&___nl__0);
#line 697
c_rt_lib0clear(&___nl__4);
#line 697
c_rt_lib0clear(&___nl__5);
#line 697
c_rt_lib0clear(&___nl__6);
#line 697
return ___nl__3;
#line 697
goto label_29;
#line 697
label_29:
#line 697
c_rt_lib0clear(&___nl__6);
#line 698
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 698
c_rt_lib0clear(&___nl__8);
#line 698
c_rt_lib0move(&___nl__9,___get_global_const(137));
#line 698
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 698
c_rt_lib0clear(&___nl__9);
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__8));
#line 698
c_rt_lib0clear(&___nl__8);
#line 698
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__6, ___nl__8));
#line 698
c_rt_lib0clear(&___nl__8);
#line 698
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 698
if(c_rt_lib0check_true_native(___nl__7)){ goto label_32;}
#line 698
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 698
c_rt_lib0clear(&___nl__8);
#line 698
c_rt_lib0move(&___nl__9,___get_global_const(137));
#line 698
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 698
c_rt_lib0clear(&___nl__9);
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__8));
#line 698
c_rt_lib0clear(&___nl__8);
#line 698
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__8));
#line 698
c_rt_lib0clear(&___nl__8);
#line 698
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 698
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(*___ref___2, ___nl__10));
#line 698
c_rt_lib0clear(&___nl__10);
#line 698
c_rt_lib0move(&___nl__8, string0length(___nl__9));
#line 698
c_rt_lib0clear(&___nl__9);
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0lt(___nl__6, ___nl__8));
#line 698
c_rt_lib0clear(&___nl__8);
#line 698
label_32:
#line 698
c_rt_lib0clear(&___nl__7);
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 698
if(c_rt_lib0check_true_native(___nl__6)){ goto label_31;}
#line 698
c_rt_lib0clear(&___nl__0);
#line 698
c_rt_lib0clear(&___nl__4);
#line 698
c_rt_lib0clear(&___nl__5);
#line 698
c_rt_lib0clear(&___nl__6);
#line 698
return ___nl__3;
#line 698
goto label_31;
#line 698
label_31:
#line 698
c_rt_lib0clear(&___nl__6);
#line 699
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 699
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 699
c_rt_lib0clear(&___nl__8);
#line 699
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 699
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 699
c_rt_lib0clear(&___nl__9);
#line 699
c_rt_lib0move(&___nl__10,___get_global_const(137));
#line 699
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(*___ref___2, ___nl__10));
#line 699
c_rt_lib0clear(&___nl__10);
#line 699
c_rt_lib0move(&___nl__6, string0substr(___nl__7, ___nl__8, ___nl__9));
#line 699
c_rt_lib0clear(&___nl__9);
#line 699
c_rt_lib0clear(&___nl__8);
#line 699
c_rt_lib0clear(&___nl__7);
#line 699
c_rt_lib0copy(___ref___1, ___nl__6);
#line 699
c_rt_lib0clear(&___nl__6);
#line 700
goto label_16;
#line 700
label_18:
#line 700
c_rt_lib0move(&___nl__5,___get_global_const(672));
#line 700
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__0, ___nl__5));
#line 700
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 700
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 701
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 701
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 701
c_rt_lib0clear(&___nl__8);
#line 701
c_rt_lib0move(&___nl__6, string0length(___nl__7));
#line 701
c_rt_lib0clear(&___nl__7);
#line 701
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 701
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__7));
#line 701
c_rt_lib0clear(&___nl__7);
#line 701
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 701
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 701
if(c_rt_lib0check_true_native(___nl__6)){ goto label_35;}
#line 701
c_rt_lib0clear(&___nl__0);
#line 701
c_rt_lib0clear(&___nl__4);
#line 701
c_rt_lib0clear(&___nl__5);
#line 701
c_rt_lib0clear(&___nl__6);
#line 701
return ___nl__3;
#line 701
goto label_35;
#line 701
label_35:
#line 701
c_rt_lib0clear(&___nl__6);
#line 702
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 702
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 702
c_rt_lib0clear(&___nl__8);
#line 702
c_rt_lib0move(&___nl__6, string0is_digit(___nl__7));
#line 702
c_rt_lib0clear(&___nl__7);
#line 702
c_rt_lib0copy(___ref___1, ___nl__6);
#line 702
c_rt_lib0clear(&___nl__6);
#line 703
goto label_16;
#line 703
label_33:
#line 703
c_rt_lib0move(&___nl__5,___get_global_const(673));
#line 703
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__0, ___nl__5));
#line 703
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 703
if(c_rt_lib0check_true_native(___nl__5)){ goto label_36;}
#line 704
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 704
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 704
c_rt_lib0clear(&___nl__8);
#line 704
c_rt_lib0move(&___nl__6, string0length(___nl__7));
#line 704
c_rt_lib0clear(&___nl__7);
#line 704
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 704
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__7));
#line 704
c_rt_lib0clear(&___nl__7);
#line 704
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 704
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 704
if(c_rt_lib0check_true_native(___nl__6)){ goto label_38;}
#line 704
c_rt_lib0clear(&___nl__0);
#line 704
c_rt_lib0clear(&___nl__4);
#line 704
c_rt_lib0clear(&___nl__5);
#line 704
c_rt_lib0clear(&___nl__6);
#line 704
return ___nl__3;
#line 704
goto label_38;
#line 704
label_38:
#line 704
c_rt_lib0clear(&___nl__6);
#line 705
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 705
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 705
c_rt_lib0clear(&___nl__8);
#line 705
c_rt_lib0move(&___nl__6, string0is_letter(___nl__7));
#line 705
c_rt_lib0clear(&___nl__7);
#line 705
c_rt_lib0copy(___ref___1, ___nl__6);
#line 705
c_rt_lib0clear(&___nl__6);
#line 706
goto label_16;
#line 706
label_36:
#line 707
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 707
nl_die_arg(___nl__6);
#line 707
c_rt_lib0clear(&___nl__6);
#line 708
goto label_16;
#line 708
label_16:
#line 708
c_rt_lib0clear(&___nl__5);
#line 709
goto label_1;
#line 709
label_1:
#line 709
c_rt_lib0clear(&___nl__4);
#line 710
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 710
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 710
c_rt_lib0clear(&___nl__0);
#line 710
c_rt_lib0clear(&___nl__3);
#line 710
return ___nl__4;
#line 710
c_rt_lib0clear(&___nl__4);
#line 710
c_rt_lib0clear(&___nl__3);
#line 710
c_rt_lib0clear(&___nl__0);
#line 710
return NULL;
}

ImmT interpreter_priv0handle_ov_call(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 714
c_rt_lib0move(&___nl__3,___get_global_const(651));
#line 714
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__3));
#line 715
c_rt_lib0move(&___nl__4,___get_global_const(676));
#line 715
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 715
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 715
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 716
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 716
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 716
c_rt_lib0clear(&___nl__7);
#line 716
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 716
c_rt_lib0clear(&___nl__6);
#line 716
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 716
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 716
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 716
c_rt_lib0clear(&___nl__0);
#line 716
c_rt_lib0clear(&___nl__4);
#line 716
c_rt_lib0clear(&___nl__5);
#line 716
return ___nl__3;
#line 716
goto label_4;
#line 716
label_4:
#line 716
c_rt_lib0clear(&___nl__5);
#line 717
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 717
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 717
c_rt_lib0clear(&___nl__7);
#line 717
c_rt_lib0move(&___nl__5, ov0mk(___nl__6));
#line 717
c_rt_lib0clear(&___nl__6);
#line 717
c_rt_lib0copy(___ref___1, ___nl__5);
#line 717
c_rt_lib0clear(&___nl__5);
#line 718
goto label_1;
#line 718
label_2:
#line 718
c_rt_lib0move(&___nl__4,___get_global_const(677));
#line 718
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 718
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 718
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 719
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 719
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 719
c_rt_lib0clear(&___nl__7);
#line 719
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 719
c_rt_lib0clear(&___nl__6);
#line 719
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 719
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 719
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 719
c_rt_lib0clear(&___nl__0);
#line 719
c_rt_lib0clear(&___nl__4);
#line 719
c_rt_lib0clear(&___nl__5);
#line 719
return ___nl__3;
#line 719
goto label_7;
#line 719
label_7:
#line 719
c_rt_lib0clear(&___nl__5);
#line 720
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 720
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 720
c_rt_lib0clear(&___nl__7);
#line 720
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 720
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 720
c_rt_lib0clear(&___nl__8);
#line 720
c_rt_lib0move(&___nl__5, ov0mk_val(___nl__6, ___nl__7));
#line 720
c_rt_lib0clear(&___nl__7);
#line 720
c_rt_lib0clear(&___nl__6);
#line 720
c_rt_lib0copy(___ref___1, ___nl__5);
#line 720
c_rt_lib0clear(&___nl__5);
#line 721
goto label_1;
#line 721
label_5:
#line 722
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 722
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 722
c_rt_lib0clear(&___nl__7);
#line 722
c_rt_lib0move(&___nl__5, nl0is_variant(___nl__6));
#line 722
c_rt_lib0clear(&___nl__6);
#line 722
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 722
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 722
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 722
c_rt_lib0clear(&___nl__0);
#line 722
c_rt_lib0clear(&___nl__4);
#line 722
c_rt_lib0clear(&___nl__5);
#line 722
return ___nl__3;
#line 722
goto label_9;
#line 722
label_9:
#line 722
c_rt_lib0clear(&___nl__5);
#line 723
c_rt_lib0move(&___nl__5,___get_global_const(678));
#line 723
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__0, ___nl__5));
#line 723
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 723
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 724
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 724
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 724
c_rt_lib0clear(&___nl__8);
#line 724
c_rt_lib0move(&___nl__6, ov0has_value(___nl__7));
#line 724
c_rt_lib0clear(&___nl__7);
#line 724
c_rt_lib0copy(___ref___1, ___nl__6);
#line 724
c_rt_lib0clear(&___nl__6);
#line 725
goto label_17;
#line 725
label_11:
#line 725
c_rt_lib0move(&___nl__5,___get_global_const(679));
#line 725
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__0, ___nl__5));
#line 725
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 725
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 726
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 726
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 726
c_rt_lib0clear(&___nl__8);
#line 726
c_rt_lib0move(&___nl__6, ov0get_element(___nl__7));
#line 726
c_rt_lib0clear(&___nl__7);
#line 726
c_rt_lib0copy(___ref___1, ___nl__6);
#line 726
c_rt_lib0clear(&___nl__6);
#line 727
goto label_17;
#line 727
label_12:
#line 727
c_rt_lib0move(&___nl__5,___get_global_const(680));
#line 727
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__0, ___nl__5));
#line 727
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 727
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 728
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 728
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 728
c_rt_lib0clear(&___nl__8);
#line 728
c_rt_lib0move(&___nl__6, ov0get_value(___nl__7));
#line 728
c_rt_lib0clear(&___nl__7);
#line 728
c_rt_lib0copy(___ref___1, ___nl__6);
#line 728
c_rt_lib0clear(&___nl__6);
#line 729
goto label_17;
#line 729
label_13:
#line 729
c_rt_lib0move(&___nl__5,___get_global_const(681));
#line 729
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__0, ___nl__5));
#line 729
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 729
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 730
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 730
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 730
c_rt_lib0clear(&___nl__8);
#line 730
c_rt_lib0move(&___nl__6, nl0is_sim(___nl__7));
#line 730
c_rt_lib0clear(&___nl__7);
#line 730
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 730
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 730
if(c_rt_lib0check_true_native(___nl__6)){ goto label_16;}
#line 730
c_rt_lib0clear(&___nl__0);
#line 730
c_rt_lib0clear(&___nl__4);
#line 730
c_rt_lib0clear(&___nl__5);
#line 730
c_rt_lib0clear(&___nl__6);
#line 730
return ___nl__3;
#line 730
goto label_16;
#line 730
label_16:
#line 730
c_rt_lib0clear(&___nl__6);
#line 731
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 731
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 731
c_rt_lib0clear(&___nl__8);
#line 731
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 731
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 731
c_rt_lib0clear(&___nl__9);
#line 731
c_rt_lib0move(&___nl__6, ov0is(___nl__7, ___nl__8));
#line 731
c_rt_lib0clear(&___nl__8);
#line 731
c_rt_lib0clear(&___nl__7);
#line 731
c_rt_lib0copy(___ref___1, ___nl__6);
#line 731
c_rt_lib0clear(&___nl__6);
#line 732
goto label_17;
#line 732
label_14:
#line 732
c_rt_lib0move(&___nl__5,___get_global_const(682));
#line 732
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__0, ___nl__5));
#line 732
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 732
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 733
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 733
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 733
c_rt_lib0clear(&___nl__8);
#line 733
c_rt_lib0move(&___nl__6, nl0is_sim(___nl__7));
#line 733
c_rt_lib0clear(&___nl__7);
#line 733
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 733
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 733
if(c_rt_lib0check_true_native(___nl__6)){ goto label_19;}
#line 733
c_rt_lib0clear(&___nl__0);
#line 733
c_rt_lib0clear(&___nl__4);
#line 733
c_rt_lib0clear(&___nl__5);
#line 733
c_rt_lib0clear(&___nl__6);
#line 733
return ___nl__3;
#line 733
goto label_19;
#line 733
label_19:
#line 733
c_rt_lib0clear(&___nl__6);
#line 734
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 734
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 734
c_rt_lib0clear(&___nl__8);
#line 734
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 734
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 734
c_rt_lib0clear(&___nl__9);
#line 734
c_rt_lib0move(&___nl__6, ov0is(___nl__7, ___nl__8));
#line 734
c_rt_lib0clear(&___nl__8);
#line 734
c_rt_lib0clear(&___nl__7);
#line 734
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 734
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 734
if(c_rt_lib0check_true_native(___nl__6)){ goto label_21;}
#line 734
c_rt_lib0clear(&___nl__0);
#line 734
c_rt_lib0clear(&___nl__4);
#line 734
c_rt_lib0clear(&___nl__5);
#line 734
c_rt_lib0clear(&___nl__6);
#line 734
return ___nl__3;
#line 734
goto label_21;
#line 734
label_21:
#line 734
c_rt_lib0clear(&___nl__6);
#line 735
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 735
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 735
c_rt_lib0clear(&___nl__8);
#line 735
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 735
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 735
c_rt_lib0clear(&___nl__9);
#line 735
c_rt_lib0move(&___nl__6, ov0as(___nl__7, ___nl__8));
#line 735
c_rt_lib0clear(&___nl__8);
#line 735
c_rt_lib0clear(&___nl__7);
#line 735
c_rt_lib0copy(___ref___1, ___nl__6);
#line 735
c_rt_lib0clear(&___nl__6);
#line 736
goto label_17;
#line 736
label_17:
#line 736
c_rt_lib0clear(&___nl__5);
#line 737
goto label_1;
#line 737
label_1:
#line 737
c_rt_lib0clear(&___nl__4);
#line 738
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 738
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 738
c_rt_lib0clear(&___nl__0);
#line 738
c_rt_lib0clear(&___nl__3);
#line 738
return ___nl__4;
#line 738
c_rt_lib0clear(&___nl__4);
#line 738
c_rt_lib0clear(&___nl__3);
#line 738
c_rt_lib0clear(&___nl__0);
#line 738
return NULL;
}

ImmT interpreter_priv0handle_c_rt_lib_call(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 742
c_rt_lib0move(&___nl__3,___get_global_const(651));
#line 742
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__3));
#line 743
c_rt_lib0move(&___nl__4,___get_global_const(683));
#line 743
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 743
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 743
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 744
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 744
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 744
c_rt_lib0clear(&___nl__7);
#line 744
c_rt_lib0move(&___nl__5, nl0is_array(___nl__6));
#line 744
c_rt_lib0clear(&___nl__6);
#line 744
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 744
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 744
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 744
c_rt_lib0clear(&___nl__0);
#line 744
c_rt_lib0clear(&___nl__4);
#line 744
c_rt_lib0clear(&___nl__5);
#line 744
return ___nl__3;
#line 744
goto label_4;
#line 744
label_4:
#line 744
c_rt_lib0clear(&___nl__5);
#line 745
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 745
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 745
c_rt_lib0clear(&___nl__7);
#line 745
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__6));
#line 745
c_rt_lib0clear(&___nl__6);
#line 745
c_rt_lib0copy(___ref___1, ___nl__5);
#line 745
c_rt_lib0clear(&___nl__5);
#line 746
goto label_49;
#line 746
label_2:
#line 746
c_rt_lib0move(&___nl__4,___get_global_const(684));
#line 746
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 746
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 746
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 747
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 747
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 747
c_rt_lib0clear(&___nl__7);
#line 747
c_rt_lib0move(&___nl__5, nl0is_array(___nl__6));
#line 747
c_rt_lib0clear(&___nl__6);
#line 747
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 747
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 747
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 747
c_rt_lib0clear(&___nl__0);
#line 747
c_rt_lib0clear(&___nl__4);
#line 747
c_rt_lib0clear(&___nl__5);
#line 747
return ___nl__3;
#line 747
goto label_7;
#line 747
label_7:
#line 747
c_rt_lib0clear(&___nl__5);
#line 748
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 748
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 748
c_rt_lib0clear(&___nl__7);
#line 748
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 748
c_rt_lib0clear(&___nl__6);
#line 748
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 748
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 748
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 748
c_rt_lib0clear(&___nl__0);
#line 748
c_rt_lib0clear(&___nl__4);
#line 748
c_rt_lib0clear(&___nl__5);
#line 748
return ___nl__3;
#line 748
goto label_9;
#line 748
label_9:
#line 748
c_rt_lib0clear(&___nl__5);
#line 749
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 749
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 749
c_rt_lib0clear(&___nl__7);
#line 749
c_rt_lib0move(&___nl__5, string_utils0is_number(___nl__6));
#line 749
c_rt_lib0clear(&___nl__6);
#line 749
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 749
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 749
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 749
c_rt_lib0clear(&___nl__0);
#line 749
c_rt_lib0clear(&___nl__4);
#line 749
c_rt_lib0clear(&___nl__5);
#line 749
return ___nl__3;
#line 749
goto label_11;
#line 749
label_11:
#line 749
c_rt_lib0clear(&___nl__5);
#line 750
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 750
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 750
c_rt_lib0clear(&___nl__7);
#line 750
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 750
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__5, ___nl__7));
#line 750
c_rt_lib0clear(&___nl__7);
#line 750
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 750
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 750
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 750
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 750
c_rt_lib0clear(&___nl__7);
#line 750
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 750
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 750
c_rt_lib0clear(&___nl__9);
#line 750
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 750
c_rt_lib0clear(&___nl__8);
#line 750
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__5, ___nl__7));
#line 750
c_rt_lib0clear(&___nl__7);
#line 750
label_14:
#line 750
c_rt_lib0clear(&___nl__6);
#line 750
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 750
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 750
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 750
c_rt_lib0clear(&___nl__0);
#line 750
c_rt_lib0clear(&___nl__4);
#line 750
c_rt_lib0clear(&___nl__5);
#line 750
return ___nl__3;
#line 750
goto label_13;
#line 750
label_13:
#line 750
c_rt_lib0clear(&___nl__5);
#line 751
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 751
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_arr(*___ref___2, ___nl__6));
#line 751
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 751
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 751
c_rt_lib0clear(&___nl__8);
#line 751
c_rt_lib0move(&___nl__9,___get_global_const(137));
#line 751
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 751
c_rt_lib0clear(&___nl__9);
#line 751
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__5, ___nl__7, ___nl__8));
#line 751
c_rt_lib0clear(&___nl__8);
#line 751
c_rt_lib0clear(&___nl__7);
#line 751
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___2, ___nl__6, ___nl__5));
#line 751
c_rt_lib0clear(&___nl__5);
#line 751
c_rt_lib0clear(&___nl__6);
#line 752
goto label_49;
#line 752
label_5:
#line 752
c_rt_lib0move(&___nl__4,___get_global_const(685));
#line 752
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 752
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 752
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 753
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 753
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 753
c_rt_lib0clear(&___nl__7);
#line 753
c_rt_lib0move(&___nl__5, nl0is_hash(___nl__6));
#line 753
c_rt_lib0clear(&___nl__6);
#line 753
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 753
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 753
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 753
c_rt_lib0clear(&___nl__0);
#line 753
c_rt_lib0clear(&___nl__4);
#line 753
c_rt_lib0clear(&___nl__5);
#line 753
return ___nl__3;
#line 753
goto label_17;
#line 753
label_17:
#line 753
c_rt_lib0clear(&___nl__5);
#line 754
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 754
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 754
c_rt_lib0clear(&___nl__7);
#line 754
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 754
c_rt_lib0clear(&___nl__6);
#line 754
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 754
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 754
if(c_rt_lib0check_true_native(___nl__5)){ goto label_19;}
#line 754
c_rt_lib0clear(&___nl__0);
#line 754
c_rt_lib0clear(&___nl__4);
#line 754
c_rt_lib0clear(&___nl__5);
#line 754
return ___nl__3;
#line 754
goto label_19;
#line 754
label_19:
#line 754
c_rt_lib0clear(&___nl__5);
#line 755
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 755
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_arr(*___ref___2, ___nl__6));
#line 755
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 755
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 755
c_rt_lib0clear(&___nl__8);
#line 755
c_rt_lib0move(&___nl__9,___get_global_const(137));
#line 755
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 755
c_rt_lib0clear(&___nl__9);
#line 755
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__7, ___nl__8));
#line 755
c_rt_lib0clear(&___nl__8);
#line 755
c_rt_lib0clear(&___nl__7);
#line 755
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___2, ___nl__6, ___nl__5));
#line 755
c_rt_lib0clear(&___nl__5);
#line 755
c_rt_lib0clear(&___nl__6);
#line 756
goto label_49;
#line 756
label_15:
#line 756
c_rt_lib0move(&___nl__4,___get_global_const(686));
#line 756
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 756
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 756
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 757
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 757
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 757
c_rt_lib0clear(&___nl__7);
#line 757
c_rt_lib0move(&___nl__5, nl0is_array(___nl__6));
#line 757
c_rt_lib0clear(&___nl__6);
#line 757
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 757
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 757
if(c_rt_lib0check_true_native(___nl__5)){ goto label_22;}
#line 757
c_rt_lib0clear(&___nl__0);
#line 757
c_rt_lib0clear(&___nl__4);
#line 757
c_rt_lib0clear(&___nl__5);
#line 757
return ___nl__3;
#line 757
goto label_22;
#line 757
label_22:
#line 757
c_rt_lib0clear(&___nl__5);
#line 758
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 758
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 758
c_rt_lib0clear(&___nl__7);
#line 758
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 758
c_rt_lib0clear(&___nl__6);
#line 758
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 758
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 758
if(c_rt_lib0check_true_native(___nl__5)){ goto label_24;}
#line 758
c_rt_lib0clear(&___nl__0);
#line 758
c_rt_lib0clear(&___nl__4);
#line 758
c_rt_lib0clear(&___nl__5);
#line 758
return ___nl__3;
#line 758
goto label_24;
#line 758
label_24:
#line 758
c_rt_lib0clear(&___nl__5);
#line 759
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 759
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 759
c_rt_lib0clear(&___nl__7);
#line 759
c_rt_lib0move(&___nl__5, string_utils0is_number(___nl__6));
#line 759
c_rt_lib0clear(&___nl__6);
#line 759
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 759
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 759
if(c_rt_lib0check_true_native(___nl__5)){ goto label_26;}
#line 759
c_rt_lib0clear(&___nl__0);
#line 759
c_rt_lib0clear(&___nl__4);
#line 759
c_rt_lib0clear(&___nl__5);
#line 759
return ___nl__3;
#line 759
goto label_26;
#line 759
label_26:
#line 759
c_rt_lib0clear(&___nl__5);
#line 760
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 760
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 760
c_rt_lib0clear(&___nl__7);
#line 760
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 760
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__5, ___nl__7));
#line 760
c_rt_lib0clear(&___nl__7);
#line 760
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 760
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 760
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 760
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 760
c_rt_lib0clear(&___nl__7);
#line 760
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 760
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(*___ref___2, ___nl__9));
#line 760
c_rt_lib0clear(&___nl__9);
#line 760
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 760
c_rt_lib0clear(&___nl__8);
#line 760
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__5, ___nl__7));
#line 760
c_rt_lib0clear(&___nl__7);
#line 760
label_29:
#line 760
c_rt_lib0clear(&___nl__6);
#line 760
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 760
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 760
if(c_rt_lib0check_true_native(___nl__5)){ goto label_28;}
#line 760
c_rt_lib0clear(&___nl__0);
#line 760
c_rt_lib0clear(&___nl__4);
#line 760
c_rt_lib0clear(&___nl__5);
#line 760
return ___nl__3;
#line 760
goto label_28;
#line 760
label_28:
#line 760
c_rt_lib0clear(&___nl__5);
#line 761
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 761
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 761
c_rt_lib0clear(&___nl__7);
#line 761
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 761
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 761
c_rt_lib0clear(&___nl__8);
#line 761
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_arr(___nl__6, ___nl__7));
#line 761
c_rt_lib0clear(&___nl__7);
#line 761
c_rt_lib0clear(&___nl__6);
#line 761
c_rt_lib0copy(___ref___1, ___nl__5);
#line 761
c_rt_lib0clear(&___nl__5);
#line 762
goto label_49;
#line 762
label_20:
#line 762
c_rt_lib0move(&___nl__4,___get_global_const(687));
#line 762
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 762
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 762
if(c_rt_lib0check_true_native(___nl__4)){ goto label_30;}
#line 763
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 763
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 763
c_rt_lib0clear(&___nl__7);
#line 763
c_rt_lib0move(&___nl__5, nl0is_hash(___nl__6));
#line 763
c_rt_lib0clear(&___nl__6);
#line 763
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 763
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 763
if(c_rt_lib0check_true_native(___nl__5)){ goto label_32;}
#line 763
c_rt_lib0clear(&___nl__0);
#line 763
c_rt_lib0clear(&___nl__4);
#line 763
c_rt_lib0clear(&___nl__5);
#line 763
return ___nl__3;
#line 763
goto label_32;
#line 763
label_32:
#line 763
c_rt_lib0clear(&___nl__5);
#line 764
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 764
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 764
c_rt_lib0clear(&___nl__7);
#line 764
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 764
c_rt_lib0clear(&___nl__6);
#line 764
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 764
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 764
if(c_rt_lib0check_true_native(___nl__5)){ goto label_34;}
#line 764
c_rt_lib0clear(&___nl__0);
#line 764
c_rt_lib0clear(&___nl__4);
#line 764
c_rt_lib0clear(&___nl__5);
#line 764
return ___nl__3;
#line 764
goto label_34;
#line 764
label_34:
#line 764
c_rt_lib0clear(&___nl__5);
#line 765
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 765
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 765
c_rt_lib0clear(&___nl__7);
#line 765
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 765
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 765
c_rt_lib0clear(&___nl__8);
#line 765
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__7));
#line 765
c_rt_lib0clear(&___nl__7);
#line 765
c_rt_lib0clear(&___nl__6);
#line 765
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 765
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 765
if(c_rt_lib0check_true_native(___nl__5)){ goto label_36;}
#line 765
c_rt_lib0clear(&___nl__0);
#line 765
c_rt_lib0clear(&___nl__4);
#line 765
c_rt_lib0clear(&___nl__5);
#line 765
return ___nl__3;
#line 765
goto label_36;
#line 765
label_36:
#line 765
c_rt_lib0clear(&___nl__5);
#line 766
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 766
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 766
c_rt_lib0clear(&___nl__7);
#line 766
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 766
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 766
c_rt_lib0clear(&___nl__8);
#line 766
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__6, ___nl__7));
#line 766
c_rt_lib0clear(&___nl__7);
#line 766
c_rt_lib0clear(&___nl__6);
#line 766
c_rt_lib0copy(___ref___1, ___nl__5);
#line 766
c_rt_lib0clear(&___nl__5);
#line 767
goto label_49;
#line 767
label_30:
#line 767
c_rt_lib0move(&___nl__4,___get_global_const(688));
#line 767
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 767
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 767
if(c_rt_lib0check_true_native(___nl__4)){ goto label_37;}
#line 768
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 768
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 768
c_rt_lib0clear(&___nl__7);
#line 768
c_rt_lib0move(&___nl__5, nl0is_hash(___nl__6));
#line 768
c_rt_lib0clear(&___nl__6);
#line 768
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 768
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 768
if(c_rt_lib0check_true_native(___nl__5)){ goto label_39;}
#line 768
c_rt_lib0clear(&___nl__0);
#line 768
c_rt_lib0clear(&___nl__4);
#line 768
c_rt_lib0clear(&___nl__5);
#line 768
return ___nl__3;
#line 768
goto label_39;
#line 768
label_39:
#line 768
c_rt_lib0clear(&___nl__5);
#line 769
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 769
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 769
c_rt_lib0clear(&___nl__7);
#line 769
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__6));
#line 769
c_rt_lib0clear(&___nl__6);
#line 769
c_rt_lib0copy(___ref___1, ___nl__5);
#line 769
c_rt_lib0clear(&___nl__5);
#line 770
goto label_49;
#line 770
label_37:
#line 770
c_rt_lib0move(&___nl__4,___get_global_const(689));
#line 770
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 770
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 770
if(c_rt_lib0check_true_native(___nl__4)){ goto label_40;}
#line 771
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 771
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 771
c_rt_lib0clear(&___nl__7);
#line 771
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__6));
#line 771
c_rt_lib0clear(&___nl__6);
#line 771
c_rt_lib0copy(___ref___1, ___nl__5);
#line 771
c_rt_lib0clear(&___nl__5);
#line 772
goto label_49;
#line 772
label_40:
#line 772
c_rt_lib0move(&___nl__4,___get_global_const(690));
#line 772
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 772
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 772
if(c_rt_lib0check_true_native(___nl__4)){ goto label_41;}
#line 773
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 773
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 773
c_rt_lib0clear(&___nl__7);
#line 773
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__6));
#line 773
c_rt_lib0clear(&___nl__6);
#line 773
c_rt_lib0copy(___ref___1, ___nl__5);
#line 773
c_rt_lib0clear(&___nl__5);
#line 774
goto label_49;
#line 774
label_41:
#line 774
c_rt_lib0move(&___nl__4,___get_global_const(691));
#line 774
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 774
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 774
if(c_rt_lib0check_true_native(___nl__4)){ goto label_42;}
#line 775
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 775
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 775
c_rt_lib0clear(&___nl__7);
#line 775
c_rt_lib0move(&___nl__5, nl0is_hash(___nl__6));
#line 775
c_rt_lib0clear(&___nl__6);
#line 775
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 775
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 775
if(c_rt_lib0check_true_native(___nl__5)){ goto label_44;}
#line 775
c_rt_lib0clear(&___nl__0);
#line 775
c_rt_lib0clear(&___nl__4);
#line 775
c_rt_lib0clear(&___nl__5);
#line 775
return ___nl__3;
#line 775
goto label_44;
#line 775
label_44:
#line 775
c_rt_lib0clear(&___nl__5);
#line 776
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 776
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 776
c_rt_lib0clear(&___nl__7);
#line 776
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__6));
#line 776
c_rt_lib0clear(&___nl__6);
#line 776
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 776
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 776
if(c_rt_lib0check_true_native(___nl__5)){ goto label_46;}
#line 776
c_rt_lib0clear(&___nl__0);
#line 776
c_rt_lib0clear(&___nl__4);
#line 776
c_rt_lib0clear(&___nl__5);
#line 776
return ___nl__3;
#line 776
goto label_46;
#line 776
label_46:
#line 776
c_rt_lib0clear(&___nl__5);
#line 777
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 777
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 777
c_rt_lib0clear(&___nl__7);
#line 777
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 777
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 777
c_rt_lib0clear(&___nl__8);
#line 777
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__7));
#line 777
c_rt_lib0clear(&___nl__7);
#line 777
c_rt_lib0clear(&___nl__6);
#line 777
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 777
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 777
if(c_rt_lib0check_true_native(___nl__5)){ goto label_48;}
#line 777
c_rt_lib0clear(&___nl__0);
#line 777
c_rt_lib0clear(&___nl__4);
#line 777
c_rt_lib0clear(&___nl__5);
#line 777
return ___nl__3;
#line 777
goto label_48;
#line 777
label_48:
#line 777
c_rt_lib0clear(&___nl__5);
#line 778
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 778
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 778
c_rt_lib0clear(&___nl__7);
#line 778
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 778
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___2, ___nl__8));
#line 778
c_rt_lib0clear(&___nl__8);
#line 778
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__6, ___nl__7));
#line 778
c_rt_lib0clear(&___nl__7);
#line 778
c_rt_lib0clear(&___nl__6);
#line 778
c_rt_lib0copy(___ref___1, ___nl__5);
#line 778
c_rt_lib0clear(&___nl__5);
#line 779
goto label_49;
#line 779
label_42:
#line 779
c_rt_lib0move(&___nl__4,___get_global_const(692));
#line 779
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 779
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 779
if(c_rt_lib0check_true_native(___nl__4)){ goto label_49;}
#line 780
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 780
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___2, ___nl__7));
#line 780
c_rt_lib0clear(&___nl__7);
#line 780
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__6));
#line 780
c_rt_lib0clear(&___nl__6);
#line 780
c_rt_lib0copy(___ref___1, ___nl__5);
#line 780
c_rt_lib0clear(&___nl__5);
#line 781
goto label_49;
#line 781
label_49:
#line 781
c_rt_lib0clear(&___nl__4);
#line 782
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 782
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 782
c_rt_lib0clear(&___nl__0);
#line 782
c_rt_lib0clear(&___nl__3);
#line 782
return ___nl__4;
#line 782
c_rt_lib0clear(&___nl__4);
#line 782
c_rt_lib0clear(&___nl__3);
#line 782
c_rt_lib0clear(&___nl__0);
#line 782
return NULL;
}

ImmT interpreter_priv0handle_compiler_call(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
interpreter_priv0__const__init();
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
#line 785
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 786
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 786
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 786
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 786
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 786
label_3:
#line 786
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 786
if(c_rt_lib0check_true_native(___nl__9)){ goto label_1;}
#line 786
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 788
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__5, ___get_global_const(234)));
#line 788
if(c_rt_lib0check_true_native(___nl__11)){ goto label_5;}
#line 790
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 790
if(c_rt_lib0check_true_native(___nl__11)){ goto label_6;}
#line 790
c_rt_lib0move(&___nl__11,___get_global_const(74));
#line 790
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__5));
#line 790
nl_die_arg(___nl__11);
#line 788
label_5:
#line 788
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__5, ___get_global_const(234)));
#line 789
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(633)));
#line 789
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(618)));
#line 789
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__13, ___nl__12));
#line 789
c_rt_lib0copy(&___nl__10, ___nl__13);
#line 789
c_rt_lib0clear(&___nl__13);
#line 789
c_rt_lib0clear(&___nl__12);
#line 790
goto label_4;
#line 790
label_6:
#line 790
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__5, ___get_global_const(5)));
#line 791
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(633)));
#line 791
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(618)));
#line 791
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__13, ___nl__12));
#line 791
c_rt_lib0copy(&___nl__10, ___nl__13);
#line 791
c_rt_lib0clear(&___nl__13);
#line 791
c_rt_lib0clear(&___nl__12);
#line 792
goto label_4;
#line 792
label_4:
#line 792
c_rt_lib0clear(&___nl__11);
#line 793
c_rt_lib0delete(array0push(&___nl__3, ___nl__10));
#line 793
c_rt_lib0clear(&___nl__10);
#line 794
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 794
goto label_3;
#line 794
label_1:
#line 794
c_rt_lib0clear(&___nl__4);
#line 794
c_rt_lib0clear(&___nl__5);
#line 794
c_rt_lib0clear(&___nl__6);
#line 794
c_rt_lib0clear(&___nl__7);
#line 794
c_rt_lib0clear(&___nl__8);
#line 794
c_rt_lib0clear(&___nl__9);
#line 795
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 797
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 797
c_rt_lib0move(&___nl__7,___get_global_const(3));
#line 797
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 797
c_rt_lib0clear(&___nl__7);
#line 797
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 797
if(c_rt_lib0check_true_native(___nl__6)){ goto label_8;}
#line 798
c_rt_lib0move(&___nl__7, interpreter_priv0handle_array_call(___nl__1, &___nl__4, &___nl__3));
#line 798
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 798
c_rt_lib0clear(&___nl__7);
#line 799
goto label_7;
#line 799
label_8:
#line 799
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 799
c_rt_lib0move(&___nl__7,___get_global_const(278));
#line 799
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 799
c_rt_lib0clear(&___nl__7);
#line 799
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 799
if(c_rt_lib0check_true_native(___nl__6)){ goto label_9;}
#line 800
c_rt_lib0move(&___nl__7, interpreter_priv0handle_hash_call(___nl__1, &___nl__4, &___nl__3));
#line 800
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 800
c_rt_lib0clear(&___nl__7);
#line 801
goto label_7;
#line 801
label_9:
#line 801
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 801
c_rt_lib0move(&___nl__7,___get_global_const(694));
#line 801
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 801
c_rt_lib0clear(&___nl__7);
#line 801
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 801
if(c_rt_lib0check_true_native(___nl__6)){ goto label_10;}
#line 802
c_rt_lib0move(&___nl__7, interpreter_priv0handle_string_call(___nl__1, &___nl__4, &___nl__3));
#line 802
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 802
c_rt_lib0clear(&___nl__7);
#line 803
goto label_7;
#line 803
label_10:
#line 803
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 803
c_rt_lib0move(&___nl__7,___get_global_const(695));
#line 803
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 803
c_rt_lib0clear(&___nl__7);
#line 803
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 803
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 804
c_rt_lib0move(&___nl__7, interpreter_priv0handle_ov_call(___nl__1, &___nl__4, &___nl__3));
#line 804
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 804
c_rt_lib0clear(&___nl__7);
#line 805
goto label_7;
#line 805
label_11:
#line 805
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 805
c_rt_lib0move(&___nl__7,___get_global_const(302));
#line 805
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 805
c_rt_lib0clear(&___nl__7);
#line 805
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 805
if(c_rt_lib0check_true_native(___nl__6)){ goto label_12;}
#line 806
c_rt_lib0move(&___nl__7, interpreter_priv0handle_c_rt_lib_call(___nl__1, &___nl__4, &___nl__3));
#line 806
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 806
c_rt_lib0clear(&___nl__7);
#line 807
goto label_7;
#line 807
label_12:
#line 808
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 808
nl_die_arg(___nl__7);
#line 808
c_rt_lib0clear(&___nl__7);
#line 809
goto label_7;
#line 809
label_7:
#line 809
c_rt_lib0clear(&___nl__6);
#line 810
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 810
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(43)));
#line 810
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 810
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 811
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 811
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(43)));
#line 811
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__1));
#line 811
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__7));
#line 811
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 811
c_rt_lib0hash_set_value_dec(___ref___2, ___get_global_const(630), ___nl__8);
#line 811
c_rt_lib0clear(&___nl__7);
#line 811
c_rt_lib0clear(&___nl__8);
#line 812
goto label_13;
#line 812
label_14:
#line 813
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 813
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 813
c_rt_lib0clear(&___nl__8);
#line 813
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 813
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 813
label_17:
#line 813
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__8, ___nl__7));
#line 813
if(c_rt_lib0check_true_native(___nl__10)){ goto label_15;}
#line 814
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 814
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__11, ___nl__8));
#line 815
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(234)));
#line 815
if(c_rt_lib0check_true_native(___nl__12)){ goto label_19;}
#line 816
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(5)));
#line 816
if(c_rt_lib0check_true_native(___nl__12)){ goto label_20;}
#line 816
c_rt_lib0move(&___nl__12,___get_global_const(74));
#line 816
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 816
nl_die_arg(___nl__12);
#line 815
label_19:
#line 815
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(234)));
#line 815
c_rt_lib0clear(&___nl__13);
#line 816
goto label_18;
#line 816
label_20:
#line 816
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(5)));
#line 817
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__3, ___nl__8));
#line 817
c_rt_lib0move(&___nl__15,___get_global_const(633));
#line 817
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(*___ref___2, ___nl__15));
#line 817
c_rt_lib0move(&___nl__16,___get_global_const(618));
#line 817
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__15, ___nl__16));
#line 817
c_rt_lib0copy(&___nl__17, ___nl__14);
#line 817
c_rt_lib0array_set(&___nl__16, ___nl__13, ___nl__17);
#line 817
c_rt_lib0move(&___nl__18,___get_global_const(618));
#line 817
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__15, ___nl__18, ___nl__16));
#line 817
c_rt_lib0move(&___nl__18,___get_global_const(633));
#line 817
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__18, ___nl__15));
#line 817
c_rt_lib0clear(&___nl__18);
#line 817
c_rt_lib0clear(&___nl__14);
#line 817
c_rt_lib0clear(&___nl__15);
#line 817
c_rt_lib0clear(&___nl__16);
#line 817
c_rt_lib0clear(&___nl__17);
#line 817
c_rt_lib0clear(&___nl__13);
#line 818
goto label_18;
#line 818
label_18:
#line 818
c_rt_lib0clear(&___nl__12);
#line 818
c_rt_lib0clear(&___nl__11);
#line 819
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 819
goto label_17;
#line 819
label_15:
#line 819
c_rt_lib0clear(&___nl__7);
#line 819
c_rt_lib0clear(&___nl__8);
#line 819
c_rt_lib0clear(&___nl__9);
#line 819
c_rt_lib0clear(&___nl__10);
#line 820
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 820
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 820
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 820
c_rt_lib0clear(&___nl__8);
#line 820
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 820
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 820
if(c_rt_lib0check_true_native(___nl__7)){ goto label_22;}
#line 820
c_rt_lib0move(&___nl__8,___get_global_const(633));
#line 820
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___2, ___nl__8));
#line 820
c_rt_lib0move(&___nl__9,___get_global_const(618));
#line 820
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 820
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 820
c_rt_lib0copy(&___nl__10, ___nl__4);
#line 820
c_rt_lib0array_set(&___nl__9, ___nl__11, ___nl__10);
#line 820
c_rt_lib0move(&___nl__12,___get_global_const(618));
#line 820
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__12, ___nl__9));
#line 820
c_rt_lib0move(&___nl__12,___get_global_const(633));
#line 820
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__12, ___nl__8));
#line 820
c_rt_lib0clear(&___nl__12);
#line 820
c_rt_lib0clear(&___nl__8);
#line 820
c_rt_lib0clear(&___nl__9);
#line 820
c_rt_lib0clear(&___nl__10);
#line 820
c_rt_lib0clear(&___nl__11);
#line 820
goto label_22;
#line 820
label_22:
#line 820
c_rt_lib0clear(&___nl__7);
#line 821
goto label_13;
#line 821
label_13:
#line 821
c_rt_lib0clear(&___nl__6);
#line 821
c_rt_lib0clear(&___nl__3);
#line 821
c_rt_lib0clear(&___nl__4);
#line 821
c_rt_lib0clear(&___nl__5);
#line 821
c_rt_lib0clear(&___nl__0);
#line 821
c_rt_lib0clear(&___nl__1);
#line 821
return NULL;
}

ImmT interpreter_priv0handle_return(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
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
#line 826
c_rt_lib0move(&___nl__2, interpreter0get_none_variant());
#line 827
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(234)));
#line 827
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 829
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(211)));
#line 829
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 829
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 829
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 829
nl_die_arg(___nl__3);
#line 827
label_2:
#line 827
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(234)));
#line 828
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(633)));
#line 828
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 828
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__4));
#line 828
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 828
c_rt_lib0clear(&___nl__5);
#line 828
c_rt_lib0clear(&___nl__4);
#line 829
goto label_1;
#line 829
label_3:
#line 830
goto label_1;
#line 830
label_1:
#line 830
c_rt_lib0clear(&___nl__3);
#line 831
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(632)));
#line 831
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 831
c_rt_lib0clear(&___nl__4);
#line 831
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 831
c_rt_lib0move(&___nl__3, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 831
c_rt_lib0clear(&___nl__4);
#line 831
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 831
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 832
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(71)));
#line 832
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(380)));
#line 832
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 832
c_rt_lib0clear(&___nl__5);
#line 832
c_rt_lib0move(&___nl__5,___get_global_const(633));
#line 832
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 832
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 832
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(202), ___nl__6);
#line 832
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 832
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__5));
#line 832
c_rt_lib0clear(&___nl__7);
#line 832
c_rt_lib0clear(&___nl__4);
#line 832
c_rt_lib0clear(&___nl__5);
#line 832
c_rt_lib0clear(&___nl__6);
#line 833
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(640), ___nl__2));
#line 833
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 833
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(630), ___nl__5);
#line 833
c_rt_lib0clear(&___nl__4);
#line 833
c_rt_lib0clear(&___nl__5);
#line 834
goto label_4;
#line 834
label_5:
#line 835
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(633)));
#line 835
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(620)));
#line 836
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(633)));
#line 836
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 837
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(633)));
#line 837
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(291)));
#line 838
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(632)));
#line 838
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(632)));
#line 838
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 838
c_rt_lib0clear(&___nl__9);
#line 838
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 838
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 838
c_rt_lib0clear(&___nl__9);
#line 838
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 838
c_rt_lib0clear(&___nl__8);
#line 839
c_rt_lib0move(&___nl__8,___get_global_const(632));
#line 839
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 839
c_rt_lib0delete(array0pop(&___nl__8));
#line 839
c_rt_lib0move(&___nl__9,___get_global_const(632));
#line 839
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 839
c_rt_lib0clear(&___nl__9);
#line 839
c_rt_lib0clear(&___nl__8);
#line 840
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 840
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(633), ___nl__8);
#line 840
c_rt_lib0clear(&___nl__8);
#line 841
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(75)));
#line 841
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(633)));
#line 841
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(617)));
#line 841
c_rt_lib0move(&___nl__8, hash0get_value(___nl__9, ___nl__10));
#line 841
c_rt_lib0clear(&___nl__10);
#line 841
c_rt_lib0clear(&___nl__9);
#line 841
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 841
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(71), ___nl__9);
#line 841
c_rt_lib0clear(&___nl__8);
#line 841
c_rt_lib0clear(&___nl__9);
#line 842
c_rt_lib0move(&___nl__10, c_rt_lib0init_iter(___nl__4));
#line 842
label_8:
#line 842
c_rt_lib0move(&___nl__8, c_rt_lib0is_end_hash(___nl__10));
#line 842
if(c_rt_lib0check_true_native(___nl__8)){ goto label_6;}
#line 842
c_rt_lib0move(&___nl__8, c_rt_lib0get_key_iter(___nl__10));
#line 842
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value(___nl__4, ___nl__8));
#line 843
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 844
c_rt_lib0move(&___nl__12,___get_global_const(633));
#line 844
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(*___ref___1, ___nl__12));
#line 844
c_rt_lib0move(&___nl__13,___get_global_const(618));
#line 844
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(___nl__12, ___nl__13));
#line 844
c_rt_lib0copy(&___nl__14, ___nl__11);
#line 844
c_rt_lib0array_set(&___nl__13, ___nl__9, ___nl__14);
#line 844
c_rt_lib0move(&___nl__15,___get_global_const(618));
#line 844
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__12, ___nl__15, ___nl__13));
#line 844
c_rt_lib0move(&___nl__15,___get_global_const(633));
#line 844
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__15, ___nl__12));
#line 844
c_rt_lib0clear(&___nl__15);
#line 844
c_rt_lib0clear(&___nl__12);
#line 844
c_rt_lib0clear(&___nl__13);
#line 844
c_rt_lib0clear(&___nl__14);
#line 844
c_rt_lib0clear(&___nl__11);
#line 845
c_rt_lib0move(&___nl__10, c_rt_lib0next_iter(___nl__10));
#line 845
goto label_8;
#line 845
label_6:
#line 845
c_rt_lib0clear(&___nl__8);
#line 845
c_rt_lib0clear(&___nl__9);
#line 845
c_rt_lib0clear(&___nl__10);
#line 846
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 846
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__6, ___nl__8));
#line 846
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 846
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 846
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 846
c_rt_lib0move(&___nl__9,___get_global_const(633));
#line 846
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___1, ___nl__9));
#line 846
c_rt_lib0move(&___nl__10,___get_global_const(618));
#line 846
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 846
c_rt_lib0copy(&___nl__11, ___nl__2);
#line 846
c_rt_lib0array_set(&___nl__10, ___nl__6, ___nl__11);
#line 846
c_rt_lib0move(&___nl__12,___get_global_const(618));
#line 846
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__12, ___nl__10));
#line 846
c_rt_lib0move(&___nl__12,___get_global_const(633));
#line 846
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__9));
#line 846
c_rt_lib0clear(&___nl__12);
#line 846
c_rt_lib0clear(&___nl__9);
#line 846
c_rt_lib0clear(&___nl__10);
#line 846
c_rt_lib0clear(&___nl__11);
#line 846
goto label_10;
#line 846
label_10:
#line 846
c_rt_lib0clear(&___nl__8);
#line 846
c_rt_lib0clear(&___nl__4);
#line 846
c_rt_lib0clear(&___nl__5);
#line 846
c_rt_lib0clear(&___nl__6);
#line 846
c_rt_lib0clear(&___nl__7);
#line 847
goto label_4;
#line 847
label_4:
#line 847
c_rt_lib0clear(&___nl__3);
#line 848
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 848
c_rt_lib0move(&___nl__3, c_rt_lib0unary_minus(___nl__3));
#line 848
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 848
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(634), ___nl__4);
#line 848
c_rt_lib0clear(&___nl__3);
#line 848
c_rt_lib0clear(&___nl__4);
#line 849
c_rt_lib0move(&___nl__3,___get_global_const(633));
#line 849
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 849
c_rt_lib0move(&___nl__4,___get_global_const(202));
#line 849
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 849
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 849
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 849
c_rt_lib0move(&___nl__6,___get_global_const(202));
#line 849
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__6, ___nl__4));
#line 849
c_rt_lib0move(&___nl__6,___get_global_const(633));
#line 849
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__3));
#line 849
c_rt_lib0clear(&___nl__6);
#line 849
c_rt_lib0clear(&___nl__3);
#line 849
c_rt_lib0clear(&___nl__4);
#line 849
c_rt_lib0clear(&___nl__5);
#line 849
c_rt_lib0clear(&___nl__2);
#line 849
c_rt_lib0clear(&___nl__0);
#line 849
return NULL;
}

ImmT interpreter_priv0goto(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
interpreter_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 853
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(631)));
#line 853
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 853
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(430)));
#line 853
c_rt_lib0move(&___nl__2, hash0get_value(___nl__3, ___nl__4));
#line 853
c_rt_lib0clear(&___nl__4);
#line 853
c_rt_lib0clear(&___nl__3);
#line 854
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(633)));
#line 854
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(617)));
#line 854
c_rt_lib0move(&___nl__3, hash0get_value(___nl__2, ___nl__4));
#line 854
c_rt_lib0clear(&___nl__4);
#line 855
c_rt_lib0move(&___nl__4, hash0has_key(___nl__3, ___nl__1));
#line 855
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 855
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 855
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 856
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 856
nl_die_arg(___nl__5);
#line 856
c_rt_lib0clear(&___nl__5);
#line 857
goto label_2;
#line 857
label_2:
#line 857
c_rt_lib0clear(&___nl__4);
#line 858
c_rt_lib0move(&___nl__4, hash0get_value(___nl__3, ___nl__1));
#line 858
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 858
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 858
c_rt_lib0clear(&___nl__5);
#line 858
c_rt_lib0move(&___nl__5,___get_global_const(633));
#line 858
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 858
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 858
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(202), ___nl__6);
#line 858
c_rt_lib0move(&___nl__7,___get_global_const(633));
#line 858
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 858
c_rt_lib0clear(&___nl__7);
#line 858
c_rt_lib0clear(&___nl__4);
#line 858
c_rt_lib0clear(&___nl__5);
#line 858
c_rt_lib0clear(&___nl__6);
#line 858
c_rt_lib0clear(&___nl__2);
#line 858
c_rt_lib0clear(&___nl__3);
#line 858
c_rt_lib0clear(&___nl__1);
#line 858
return NULL;
}

ImmT interpreter_priv0execute_bin_op(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
interpreter_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 862
c_rt_lib0move(&___nl__3,___get_global_const(247));
#line 862
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 862
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 862
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 862
c_rt_lib0move(&___nl__4, c_rt_lib0add(___nl__0, ___nl__1));
#line 862
c_rt_lib0clear(&___nl__0);
#line 862
c_rt_lib0clear(&___nl__1);
#line 862
c_rt_lib0clear(&___nl__2);
#line 862
c_rt_lib0clear(&___nl__3);
#line 862
return ___nl__4;
#line 862
c_rt_lib0clear(&___nl__4);
#line 862
goto label_2;
#line 862
label_2:
#line 862
c_rt_lib0clear(&___nl__3);
#line 863
c_rt_lib0move(&___nl__3,___get_global_const(245));
#line 863
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 863
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 863
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 863
c_rt_lib0move(&___nl__4, c_rt_lib0sub(___nl__0, ___nl__1));
#line 863
c_rt_lib0clear(&___nl__0);
#line 863
c_rt_lib0clear(&___nl__1);
#line 863
c_rt_lib0clear(&___nl__2);
#line 863
c_rt_lib0clear(&___nl__3);
#line 863
return ___nl__4;
#line 863
c_rt_lib0clear(&___nl__4);
#line 863
goto label_4;
#line 863
label_4:
#line 863
c_rt_lib0clear(&___nl__3);
#line 864
c_rt_lib0move(&___nl__3,___get_global_const(253));
#line 864
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 864
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 864
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 864
c_rt_lib0move(&___nl__4, c_rt_lib0mul(___nl__0, ___nl__1));
#line 864
c_rt_lib0clear(&___nl__0);
#line 864
c_rt_lib0clear(&___nl__1);
#line 864
c_rt_lib0clear(&___nl__2);
#line 864
c_rt_lib0clear(&___nl__3);
#line 864
return ___nl__4;
#line 864
c_rt_lib0clear(&___nl__4);
#line 864
goto label_6;
#line 864
label_6:
#line 864
c_rt_lib0clear(&___nl__3);
#line 865
c_rt_lib0move(&___nl__3,___get_global_const(79));
#line 865
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 865
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 865
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 865
c_rt_lib0move(&___nl__4, c_rt_lib0div(___nl__0, ___nl__1));
#line 865
c_rt_lib0clear(&___nl__0);
#line 865
c_rt_lib0clear(&___nl__1);
#line 865
c_rt_lib0clear(&___nl__2);
#line 865
c_rt_lib0clear(&___nl__3);
#line 865
return ___nl__4;
#line 865
c_rt_lib0clear(&___nl__4);
#line 865
goto label_8;
#line 865
label_8:
#line 865
c_rt_lib0clear(&___nl__3);
#line 866
c_rt_lib0move(&___nl__3,___get_global_const(256));
#line 866
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 866
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 866
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 866
c_rt_lib0move(&___nl__4, c_rt_lib0mod(___nl__0, ___nl__1));
#line 866
c_rt_lib0clear(&___nl__0);
#line 866
c_rt_lib0clear(&___nl__1);
#line 866
c_rt_lib0clear(&___nl__2);
#line 866
c_rt_lib0clear(&___nl__3);
#line 866
return ___nl__4;
#line 866
c_rt_lib0clear(&___nl__4);
#line 866
goto label_10;
#line 866
label_10:
#line 866
c_rt_lib0clear(&___nl__3);
#line 867
c_rt_lib0move(&___nl__3,___get_global_const(262));
#line 867
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 867
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 867
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 867
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__0, ___nl__1));
#line 867
c_rt_lib0clear(&___nl__0);
#line 867
c_rt_lib0clear(&___nl__1);
#line 867
c_rt_lib0clear(&___nl__2);
#line 867
c_rt_lib0clear(&___nl__3);
#line 867
return ___nl__4;
#line 867
c_rt_lib0clear(&___nl__4);
#line 867
goto label_12;
#line 867
label_12:
#line 867
c_rt_lib0clear(&___nl__3);
#line 868
c_rt_lib0move(&___nl__3,___get_global_const(264));
#line 868
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 868
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 868
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 868
c_rt_lib0move(&___nl__4, c_rt_lib0num_ne(___nl__0, ___nl__1));
#line 868
c_rt_lib0clear(&___nl__0);
#line 868
c_rt_lib0clear(&___nl__1);
#line 868
c_rt_lib0clear(&___nl__2);
#line 868
c_rt_lib0clear(&___nl__3);
#line 868
return ___nl__4;
#line 868
c_rt_lib0clear(&___nl__4);
#line 868
goto label_14;
#line 868
label_14:
#line 868
c_rt_lib0clear(&___nl__3);
#line 869
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 869
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 869
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 869
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 869
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__0, ___nl__1));
#line 869
c_rt_lib0clear(&___nl__0);
#line 869
c_rt_lib0clear(&___nl__1);
#line 869
c_rt_lib0clear(&___nl__2);
#line 869
c_rt_lib0clear(&___nl__3);
#line 869
return ___nl__4;
#line 869
c_rt_lib0clear(&___nl__4);
#line 869
goto label_16;
#line 869
label_16:
#line 869
c_rt_lib0clear(&___nl__3);
#line 870
c_rt_lib0move(&___nl__3,___get_global_const(258));
#line 870
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 870
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 870
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 870
c_rt_lib0move(&___nl__4, c_rt_lib0le(___nl__0, ___nl__1));
#line 870
c_rt_lib0clear(&___nl__0);
#line 870
c_rt_lib0clear(&___nl__1);
#line 870
c_rt_lib0clear(&___nl__2);
#line 870
c_rt_lib0clear(&___nl__3);
#line 870
return ___nl__4;
#line 870
c_rt_lib0clear(&___nl__4);
#line 870
goto label_18;
#line 870
label_18:
#line 870
c_rt_lib0clear(&___nl__3);
#line 871
c_rt_lib0move(&___nl__3,___get_global_const(266));
#line 871
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 871
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 871
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 871
c_rt_lib0move(&___nl__4, c_rt_lib0gt(___nl__0, ___nl__1));
#line 871
c_rt_lib0clear(&___nl__0);
#line 871
c_rt_lib0clear(&___nl__1);
#line 871
c_rt_lib0clear(&___nl__2);
#line 871
c_rt_lib0clear(&___nl__3);
#line 871
return ___nl__4;
#line 871
c_rt_lib0clear(&___nl__4);
#line 871
goto label_20;
#line 871
label_20:
#line 871
c_rt_lib0clear(&___nl__3);
#line 872
c_rt_lib0move(&___nl__3,___get_global_const(268));
#line 872
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 872
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 872
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 872
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__0, ___nl__1));
#line 872
c_rt_lib0clear(&___nl__0);
#line 872
c_rt_lib0clear(&___nl__1);
#line 872
c_rt_lib0clear(&___nl__2);
#line 872
c_rt_lib0clear(&___nl__3);
#line 872
return ___nl__4;
#line 872
c_rt_lib0clear(&___nl__4);
#line 872
goto label_22;
#line 872
label_22:
#line 872
c_rt_lib0clear(&___nl__3);
#line 873
c_rt_lib0move(&___nl__3,___get_global_const(81));
#line 873
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 873
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 873
if(c_rt_lib0check_true_native(___nl__3)){ goto label_24;}
#line 873
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 873
c_rt_lib0clear(&___nl__0);
#line 873
c_rt_lib0clear(&___nl__1);
#line 873
c_rt_lib0clear(&___nl__2);
#line 873
c_rt_lib0clear(&___nl__3);
#line 873
return ___nl__4;
#line 873
c_rt_lib0clear(&___nl__4);
#line 873
goto label_24;
#line 873
label_24:
#line 873
c_rt_lib0clear(&___nl__3);
#line 874
c_rt_lib0move(&___nl__3,___get_global_const(696));
#line 874
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 874
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 874
if(c_rt_lib0check_true_native(___nl__3)){ goto label_26;}
#line 874
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 874
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 874
if(c_rt_lib0check_true_native(___nl__5)){ goto label_27;}
#line 874
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 874
label_27:
#line 874
c_rt_lib0clear(&___nl__5);
#line 874
c_rt_lib0clear(&___nl__0);
#line 874
c_rt_lib0clear(&___nl__1);
#line 874
c_rt_lib0clear(&___nl__2);
#line 874
c_rt_lib0clear(&___nl__3);
#line 874
return ___nl__4;
#line 874
c_rt_lib0clear(&___nl__4);
#line 874
goto label_26;
#line 874
label_26:
#line 874
c_rt_lib0clear(&___nl__3);
#line 875
c_rt_lib0move(&___nl__3,___get_global_const(697));
#line 875
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 875
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 875
if(c_rt_lib0check_true_native(___nl__3)){ goto label_29;}
#line 875
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 875
if(c_rt_lib0check_true_native(___nl__0)){ goto label_30;}
#line 875
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 875
label_30:
#line 875
c_rt_lib0clear(&___nl__0);
#line 875
c_rt_lib0clear(&___nl__1);
#line 875
c_rt_lib0clear(&___nl__2);
#line 875
c_rt_lib0clear(&___nl__3);
#line 875
return ___nl__4;
#line 875
c_rt_lib0clear(&___nl__4);
#line 875
goto label_29;
#line 875
label_29:
#line 875
c_rt_lib0clear(&___nl__3);
#line 876
c_rt_lib0move(&___nl__3,___get_global_const(249));
#line 876
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 876
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 876
if(c_rt_lib0check_true_native(___nl__3)){ goto label_32;}
#line 876
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__1));
#line 876
c_rt_lib0clear(&___nl__0);
#line 876
c_rt_lib0clear(&___nl__1);
#line 876
c_rt_lib0clear(&___nl__2);
#line 876
c_rt_lib0clear(&___nl__3);
#line 876
return ___nl__4;
#line 876
c_rt_lib0clear(&___nl__4);
#line 876
goto label_32;
#line 876
label_32:
#line 876
c_rt_lib0clear(&___nl__3);
#line 877
c_rt_lib0move(&___nl__3,___get_global_const(250));
#line 877
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 877
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 877
if(c_rt_lib0check_true_native(___nl__3)){ goto label_34;}
#line 877
c_rt_lib0move(&___nl__4, c_rt_lib0ne(___nl__0, ___nl__1));
#line 877
c_rt_lib0clear(&___nl__0);
#line 877
c_rt_lib0clear(&___nl__1);
#line 877
c_rt_lib0clear(&___nl__2);
#line 877
c_rt_lib0clear(&___nl__3);
#line 877
return ___nl__4;
#line 877
c_rt_lib0clear(&___nl__4);
#line 877
goto label_34;
#line 877
label_34:
#line 877
c_rt_lib0clear(&___nl__3);
#line 878
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 878
nl_die_arg(___nl__3);
#line 878
c_rt_lib0clear(&___nl__3);
#line 878
c_rt_lib0clear(&___nl__0);
#line 878
c_rt_lib0clear(&___nl__1);
#line 878
c_rt_lib0clear(&___nl__2);
#line 878
return NULL;
}

ImmT interpreter_priv0execute_una_op(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
interpreter_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 882
c_rt_lib0move(&___nl__2,___get_global_const(243));
#line 882
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 882
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 882
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 882
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 882
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 882
c_rt_lib0clear(&___nl__0);
#line 882
c_rt_lib0clear(&___nl__1);
#line 882
c_rt_lib0clear(&___nl__2);
#line 882
return ___nl__3;
#line 882
c_rt_lib0clear(&___nl__3);
#line 882
goto label_2;
#line 882
label_2:
#line 882
c_rt_lib0clear(&___nl__2);
#line 883
c_rt_lib0move(&___nl__2,___get_global_const(245));
#line 883
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 883
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 883
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 883
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 883
c_rt_lib0move(&___nl__3, c_rt_lib0unary_minus(___nl__3));
#line 883
c_rt_lib0clear(&___nl__0);
#line 883
c_rt_lib0clear(&___nl__1);
#line 883
c_rt_lib0clear(&___nl__2);
#line 883
return ___nl__3;
#line 883
c_rt_lib0clear(&___nl__3);
#line 883
goto label_4;
#line 883
label_4:
#line 883
c_rt_lib0clear(&___nl__2);
#line 884
c_rt_lib0move(&___nl__2,___get_global_const(247));
#line 884
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 884
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 884
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 884
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 884
c_rt_lib0move(&___nl__3, c_rt_lib0unary_plus(___nl__3));
#line 884
c_rt_lib0clear(&___nl__0);
#line 884
c_rt_lib0clear(&___nl__1);
#line 884
c_rt_lib0clear(&___nl__2);
#line 884
return ___nl__3;
#line 884
c_rt_lib0clear(&___nl__3);
#line 884
goto label_6;
#line 884
label_6:
#line 884
c_rt_lib0clear(&___nl__2);
#line 885
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 885
nl_die_arg(___nl__2);
#line 885
c_rt_lib0clear(&___nl__2);
#line 885
c_rt_lib0clear(&___nl__0);
#line 885
c_rt_lib0clear(&___nl__1);
#line 885
return NULL;
}

ImmT interpreter_priv0get_command(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
interpreter_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 889
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(71)));
#line 889
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(380)));
#line 889
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(633)));
#line 889
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(202)));
#line 889
c_rt_lib0move(&___nl__1, c_rt_lib0array_get(___nl__1, ___nl__2));
#line 889
c_rt_lib0clear(&___nl__2);
#line 889
c_rt_lib0clear(&___nl__0);
#line 889
return ___nl__1;
#line 889
c_rt_lib0clear(&___nl__1);
#line 889
c_rt_lib0clear(&___nl__0);
#line 889
return NULL;
}

ImmT interpreter_priv0get_func_key(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
interpreter_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 893
c_rt_lib0move(&___nl__2,___get_global_const(579));
#line 893
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 894
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(328)));
#line 894
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(330)));
#line 894
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 894
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 895
c_rt_lib0move(&___nl__4,___get_global_const(698));
#line 895
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 895
c_rt_lib0clear(&___nl__4);
#line 896
goto label_2;
#line 896
label_2:
#line 896
c_rt_lib0clear(&___nl__3);
#line 897
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 897
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 897
c_rt_lib0clear(&___nl__3);
#line 898
c_rt_lib0clear(&___nl__0);
#line 898
c_rt_lib0clear(&___nl__1);
#line 898
return ___nl__2;
#line 898
c_rt_lib0clear(&___nl__2);
#line 898
c_rt_lib0clear(&___nl__0);
#line 898
c_rt_lib0clear(&___nl__1);
#line 898
return NULL;
}


static ImmT ___const__[9];
static int ___const_init__ = 1;
void interpreter_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[8];


for(int i=0;i<8;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 8);
}}
ImmT interpreter_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT interpreter_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = interpreter0stack_element_t0cal();
	break;
case 1:
	___const__[1] = interpreter0module_labels_t0cal();
	break;
case 2:
	___const__[2] = interpreter0known_exec_func_t0cal();
	break;
case 3:
	___const__[3] = interpreter0state_t0cal();
	break;
case 4:
	___const__[4] = interpreter0rstate_t0cal();
	break;
case 5:
	___const__[5] = interpreter0stack_element_debug_t0cal();
	break;
case 6:
	___const__[6] = interpreter0get_none_variant0cal();
	break;
case 7:
	___const__[7] = interpreter_priv0get_compiler_functions0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
