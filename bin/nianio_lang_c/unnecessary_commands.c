
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "unnecessary_commands.h"
#include "array.h"
#include "ptd.h"
#include "hash.h"
#include "nlasm.h"
#include "flow_graph.h"
#line 1 "unnecessary_commands.nl"

static ImmT *__const__f = NULL;
void unnecessary_commands_priv0__const__init();
ImmT unnecessary_commands_priv0__const__sim(int __nr);
ImmT unnecessary_commands_priv0__const__sing(int __nr);

ImmT unnecessary_commands_priv0build_empty_state(ImmT ___nl__0);
ImmT unnecessary_commands_priv0has_side_effects(ImmT ___nl__0);
ImmT unnecessary_commands_priv0build_blocks_states(ImmT ___nl__0,ImmT ___nl__1);
ImmT unnecessary_commands_priv0delete_unnecessary_commands_in_blocks(ImmT * ___ref___0,ImmT ___nl__1);
ImmT unnecessary_commands_priv0delete_unnecessary_clears_in_blocks(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT unnecessary_commands_priv0build_commands_graph(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT unnecessary_commands_priv0visit_node(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT unnecessary_commands_priv0build_block_state(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4);


ImmT unnecessary_commands0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "unnecessary_commands0state_t");
return unnecessary_commands0state_t();}
ImmT unnecessary_commands0state_t(){
unnecessary_commands_priv0__const__init();
return unnecessary_commands_priv0__const__sing(0);}
ImmT unnecessary_commands0state_t0cal() {
unnecessary_commands_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 12
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(unnecessary_commands0block_state_t0ptr, ___get_global_const(1148), ___get_global_const(1149)));
#line 12
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 12
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 12
c_rt_lib0clear(&___nl__1);
#line 12
return ___nl__0;
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return NULL;
}

ImmT unnecessary_commands0block_state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "unnecessary_commands0block_state_t");
return unnecessary_commands0block_state_t();}
ImmT unnecessary_commands0block_state_t(){
unnecessary_commands_priv0__const__init();
return unnecessary_commands_priv0__const__sing(1);}
ImmT unnecessary_commands0block_state_t0cal() {
unnecessary_commands_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 15
c_rt_lib0move(&___nl__2, ptd0sim());
#line 15
c_rt_lib0move(&___nl__1, ptd0hash(___nl__2));
#line 15
c_rt_lib0clear(&___nl__2);
#line 15
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 15
c_rt_lib0clear(&___nl__1);
#line 15
return ___nl__0;
#line 15
c_rt_lib0clear(&___nl__0);
#line 15
return NULL;
}

ImmT unnecessary_commands0graph_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "unnecessary_commands0graph_t");
return unnecessary_commands0graph_t();}
ImmT unnecessary_commands0graph_t(){
unnecessary_commands_priv0__const__init();
return unnecessary_commands_priv0__const__sing(2);}
ImmT unnecessary_commands0graph_t0cal() {
unnecessary_commands_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 18
c_rt_lib0move(&___nl__2, ptd0sim());
#line 18
c_rt_lib0move(&___nl__1, ptd0arr(___nl__2));
#line 18
c_rt_lib0clear(&___nl__2);
#line 18
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 18
c_rt_lib0clear(&___nl__1);
#line 18
return ___nl__0;
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
return NULL;
}

ImmT unnecessary_commands0delete_unnecessary_commands0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "unnecessary_commands0delete_unnecessary_commands");
return unnecessary_commands0delete_unnecessary_commands(&_tab[0]);}
ImmT unnecessary_commands0delete_unnecessary_commands(ImmT * ___ref___0) {
unnecessary_commands_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(380)));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(331)));
#line 21
c_rt_lib0move(&___nl__1, flow_graph0make_blocks(___nl__2, ___nl__3));
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0clear(&___nl__2);
#line 22
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(378)));
#line 22
c_rt_lib0delete(unnecessary_commands_priv0delete_unnecessary_commands_in_blocks(&___nl__1, ___nl__2));
#line 22
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0move(&___nl__2, flow_graph0combine_blocks(___nl__1));
#line 23
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 23
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(380), ___nl__3);
#line 23
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(380)));
#line 25
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(331)));
#line 25
c_rt_lib0move(&___nl__2, flow_graph0make_blocks(___nl__3, ___nl__4));
#line 25
c_rt_lib0clear(&___nl__4);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 25
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(378)));
#line 26
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(331)));
#line 26
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 26
c_rt_lib0clear(&___nl__4);
#line 26
c_rt_lib0delete(unnecessary_commands_priv0delete_unnecessary_clears_in_blocks(&___nl__1, ___nl__2, ___nl__3));
#line 26
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0move(&___nl__2, flow_graph0combine_blocks(___nl__1));
#line 27
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 27
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(380), ___nl__3);
#line 27
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0clear(&___nl__1);
#line 27
return NULL;
}

ImmT unnecessary_commands_priv0build_empty_state(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
unnecessary_commands_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 31
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 32
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 32
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 32
label_3:
#line 32
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__0));
#line 32
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 32
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 32
c_rt_lib0delete(array0push(&___nl__1, ___nl__5));
#line 32
c_rt_lib0clear(&___nl__5);
#line 32
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 32
goto label_3;
#line 32
label_1:
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
return ___nl__1;
#line 33
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
return NULL;
}

ImmT unnecessary_commands_priv0has_side_effects(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
unnecessary_commands_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 36
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 37
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(217)));
#line 37
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 37
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(210)));
#line 37
label_5:
#line 37
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 37
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(229)));
#line 37
label_4:
#line 37
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 37
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(230)));
#line 37
label_3:
#line 37
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 37
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(231)));
#line 37
label_2:
#line 37
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 37
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(232)));
#line 37
label_1:
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
return ___nl__2;
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
return NULL;
}

ImmT unnecessary_commands_priv0build_blocks_states(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
unnecessary_commands_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 40
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 41
c_rt_lib0move(&___nl__3, unnecessary_commands_priv0build_empty_state(___nl__1));
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 43
c_rt_lib0move(&___nl__5, array0len(___nl__0));
#line 43
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 43
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 43
label_3:
#line 43
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__6, ___nl__5));
#line 43
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 44
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 45
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 45
goto label_3;
#line 45
label_1:
#line 45
c_rt_lib0clear(&___nl__5);
#line 45
c_rt_lib0clear(&___nl__6);
#line 45
c_rt_lib0clear(&___nl__7);
#line 45
c_rt_lib0clear(&___nl__8);
#line 46
c_rt_lib0move(&___nl__5, array0len(___nl__0));
#line 46
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 46
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 46
c_rt_lib0clear(&___nl__6);
#line 46
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 46
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 46
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 46
nl_die_arg(___nl__6);
#line 46
goto label_5;
#line 46
label_5:
#line 46
c_rt_lib0clear(&___nl__5);
#line 46
c_rt_lib0clear(&___nl__6);
#line 47
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 47
c_rt_lib0delete(unnecessary_commands_priv0build_block_state(&___nl__2, ___nl__0, ___nl__5, ___nl__3, &___nl__4));
#line 47
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
c_rt_lib0clear(&___nl__1);
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
return ___nl__2;
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
c_rt_lib0clear(&___nl__1);
#line 48
return NULL;
}

ImmT unnecessary_commands_priv0delete_unnecessary_commands_in_blocks(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
unnecessary_commands_priv0__const__init();
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
#line 51
c_rt_lib0move(&___nl__2, unnecessary_commands_priv0build_blocks_states(*___ref___0, ___nl__1));
#line 52
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 53
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 53
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 53
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(*___ref___0));
#line 53
label_3:
#line 53
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 53
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(*___ref___0, ___nl__5));
#line 54
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(196)));
#line 54
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 54
c_rt_lib0clear(&___nl__10);
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 54
c_rt_lib0clear(&___nl__9);
#line 55
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 55
goto label_3;
#line 55
label_1:
#line 55
c_rt_lib0clear(&___nl__4);
#line 55
c_rt_lib0clear(&___nl__5);
#line 55
c_rt_lib0clear(&___nl__6);
#line 55
c_rt_lib0clear(&___nl__7);
#line 55
c_rt_lib0clear(&___nl__8);
#line 56
c_rt_lib0move(&___nl__4, unnecessary_commands_priv0build_commands_graph(___nl__2, *___ref___0, ___nl__3));
#line 57
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 58
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 58
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 58
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(*___ref___0));
#line 58
label_6:
#line 58
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 58
if(c_rt_lib0check_true_native(___nl__10)){ goto label_4;}
#line 58
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 59
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(196)));
#line 59
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 59
c_rt_lib0clear(&___nl__12);
#line 59
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 59
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 59
label_9:
#line 59
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__12, ___nl__11));
#line 59
if(c_rt_lib0check_true_native(___nl__14)){ goto label_7;}
#line 60
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(196)));
#line 60
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__16, ___nl__12));
#line 60
c_rt_lib0move(&___nl__15, unnecessary_commands_priv0has_side_effects(___nl__16));
#line 60
c_rt_lib0clear(&___nl__16);
#line 60
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 60
if(c_rt_lib0check_true_native(___nl__15)){ goto label_11;}
#line 61
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(197)));
#line 61
c_rt_lib0move(&___nl__16, c_rt_lib0add_mod(___nl__16, ___nl__12));
#line 61
c_rt_lib0delete(unnecessary_commands_priv0visit_node(___nl__4, ___nl__16, &___nl__5));
#line 61
c_rt_lib0clear(&___nl__16);
#line 62
goto label_11;
#line 62
label_11:
#line 62
c_rt_lib0clear(&___nl__15);
#line 63
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 63
goto label_9;
#line 63
label_7:
#line 63
c_rt_lib0clear(&___nl__11);
#line 63
c_rt_lib0clear(&___nl__12);
#line 63
c_rt_lib0clear(&___nl__13);
#line 63
c_rt_lib0clear(&___nl__14);
#line 64
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 64
goto label_6;
#line 64
label_4:
#line 64
c_rt_lib0clear(&___nl__6);
#line 64
c_rt_lib0clear(&___nl__7);
#line 64
c_rt_lib0clear(&___nl__8);
#line 64
c_rt_lib0clear(&___nl__9);
#line 64
c_rt_lib0clear(&___nl__10);
#line 65
c_rt_lib0move(&___nl__6, array0len(*___ref___0));
#line 65
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 65
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 65
label_14:
#line 65
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__7, ___nl__6));
#line 65
if(c_rt_lib0check_true_native(___nl__9)){ goto label_12;}
#line 66
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(0));
#line 67
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 67
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(196)));
#line 67
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 67
c_rt_lib0clear(&___nl__12);
#line 67
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 67
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 67
label_17:
#line 67
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__12, ___nl__11));
#line 67
if(c_rt_lib0check_true_native(___nl__14)){ goto label_15;}
#line 68
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 68
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(196)));
#line 68
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__12));
#line 69
c_rt_lib0move(&___nl__16, c_rt_lib0get_false());
#line 70
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 70
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(197)));
#line 70
c_rt_lib0move(&___nl__17, c_rt_lib0add_mod(___nl__17, ___nl__12));
#line 71
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(209)));
#line 71
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__18, ___get_global_const(195)));
#line 71
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 71
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 71
if(c_rt_lib0check_true_native(___nl__18)){ goto label_19;}
#line 72
c_rt_lib0move(&___nl__19, hash0has_key(___nl__5, ___nl__17));
#line 72
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 72
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 72
if(c_rt_lib0check_true_native(___nl__19)){ goto label_21;}
#line 73
c_rt_lib0move(&___nl__20, c_rt_lib0get_true());
#line 73
c_rt_lib0copy(&___nl__16, ___nl__20);
#line 73
c_rt_lib0clear(&___nl__20);
#line 74
goto label_21;
#line 74
label_21:
#line 74
c_rt_lib0clear(&___nl__19);
#line 75
goto label_19;
#line 75
label_19:
#line 75
c_rt_lib0clear(&___nl__18);
#line 76
c_rt_lib0copy(&___nl__18, ___nl__16);
#line 76
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 76
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 76
if(c_rt_lib0check_true_native(___nl__18)){ goto label_23;}
#line 77
c_rt_lib0delete(array0push(&___nl__10, ___nl__15));
#line 78
goto label_23;
#line 78
label_23:
#line 78
c_rt_lib0clear(&___nl__18);
#line 78
c_rt_lib0clear(&___nl__15);
#line 78
c_rt_lib0clear(&___nl__16);
#line 78
c_rt_lib0clear(&___nl__17);
#line 79
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 79
goto label_17;
#line 79
label_15:
#line 79
c_rt_lib0clear(&___nl__11);
#line 79
c_rt_lib0clear(&___nl__12);
#line 79
c_rt_lib0clear(&___nl__13);
#line 79
c_rt_lib0clear(&___nl__14);
#line 80
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_arr(*___ref___0, ___nl__7));
#line 80
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 80
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(196), ___nl__12);
#line 80
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___0, ___nl__7, ___nl__11));
#line 80
c_rt_lib0clear(&___nl__11);
#line 80
c_rt_lib0clear(&___nl__12);
#line 80
c_rt_lib0clear(&___nl__10);
#line 81
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 81
goto label_14;
#line 81
label_12:
#line 81
c_rt_lib0clear(&___nl__6);
#line 81
c_rt_lib0clear(&___nl__7);
#line 81
c_rt_lib0clear(&___nl__8);
#line 81
c_rt_lib0clear(&___nl__9);
#line 81
c_rt_lib0clear(&___nl__2);
#line 81
c_rt_lib0clear(&___nl__3);
#line 81
c_rt_lib0clear(&___nl__4);
#line 81
c_rt_lib0clear(&___nl__5);
#line 81
c_rt_lib0clear(&___nl__1);
#line 81
return NULL;
}

ImmT unnecessary_commands_priv0delete_unnecessary_clears_in_blocks(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
unnecessary_commands_priv0__const__init();
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
#line 84
c_rt_lib0move(&___nl__3, unnecessary_commands_priv0build_blocks_states(*___ref___0, ___nl__1));
#line 85
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 86
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 86
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 86
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(*___ref___0));
#line 86
label_3:
#line 86
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 86
if(c_rt_lib0check_true_native(___nl__9)){ goto label_1;}
#line 86
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___0, ___nl__6));
#line 87
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(196)));
#line 87
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 87
c_rt_lib0clear(&___nl__11);
#line 87
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 87
c_rt_lib0clear(&___nl__10);
#line 88
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 88
goto label_3;
#line 88
label_1:
#line 88
c_rt_lib0clear(&___nl__5);
#line 88
c_rt_lib0clear(&___nl__6);
#line 88
c_rt_lib0clear(&___nl__7);
#line 88
c_rt_lib0clear(&___nl__8);
#line 88
c_rt_lib0clear(&___nl__9);
#line 89
c_rt_lib0move(&___nl__5, unnecessary_commands_priv0build_commands_graph(___nl__3, *___ref___0, ___nl__4));
#line 90
c_rt_lib0move(&___nl__6, array0len(*___ref___0));
#line 90
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 90
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 90
label_6:
#line 90
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__7, ___nl__6));
#line 90
if(c_rt_lib0check_true_native(___nl__9)){ goto label_4;}
#line 91
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(0));
#line 92
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 92
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(196)));
#line 92
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 92
c_rt_lib0clear(&___nl__12);
#line 92
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 92
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 92
label_9:
#line 92
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__12, ___nl__11));
#line 92
if(c_rt_lib0check_true_native(___nl__14)){ goto label_7;}
#line 93
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 93
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(196)));
#line 93
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__12));
#line 94
c_rt_lib0move(&___nl__16, c_rt_lib0get_false());
#line 95
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 95
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(197)));
#line 95
c_rt_lib0move(&___nl__17, c_rt_lib0add_mod(___nl__17, ___nl__12));
#line 96
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(209)));
#line 96
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__18, ___get_global_const(195)));
#line 96
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 96
if(c_rt_lib0check_true_native(___nl__18)){ goto label_11;}
#line 97
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(209)));
#line 97
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__19, ___get_global_const(195)));
#line 98
c_rt_lib0move(&___nl__22, c_rt_lib0array_get(___nl__5, ___nl__17));
#line 98
c_rt_lib0move(&___nl__20, array0len(___nl__22));
#line 98
c_rt_lib0clear(&___nl__22);
#line 98
c_rt_lib0move(&___nl__22,___get_global_const(1));
#line 98
c_rt_lib0move(&___nl__20, c_rt_lib0num_eq(___nl__20, ___nl__22));
#line 98
c_rt_lib0clear(&___nl__22);
#line 98
c_rt_lib0move(&___nl__21, c_rt_lib0not(___nl__20));
#line 98
if(c_rt_lib0check_true_native(___nl__21)){ goto label_14;}
#line 98
c_rt_lib0move(&___nl__20, c_rt_lib0ge(___nl__19, ___nl__2));
#line 98
label_14:
#line 98
c_rt_lib0clear(&___nl__21);
#line 98
c_rt_lib0move(&___nl__20, c_rt_lib0not(___nl__20));
#line 98
if(c_rt_lib0check_true_native(___nl__20)){ goto label_13;}
#line 99
c_rt_lib0move(&___nl__21, c_rt_lib0get_true());
#line 99
c_rt_lib0copy(&___nl__16, ___nl__21);
#line 99
c_rt_lib0clear(&___nl__21);
#line 100
goto label_13;
#line 100
label_13:
#line 100
c_rt_lib0clear(&___nl__20);
#line 100
c_rt_lib0clear(&___nl__19);
#line 101
goto label_11;
#line 101
label_11:
#line 101
c_rt_lib0clear(&___nl__18);
#line 102
c_rt_lib0copy(&___nl__18, ___nl__16);
#line 102
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 102
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 102
if(c_rt_lib0check_true_native(___nl__18)){ goto label_16;}
#line 103
c_rt_lib0delete(array0push(&___nl__10, ___nl__15));
#line 104
goto label_16;
#line 104
label_16:
#line 104
c_rt_lib0clear(&___nl__18);
#line 104
c_rt_lib0clear(&___nl__15);
#line 104
c_rt_lib0clear(&___nl__16);
#line 104
c_rt_lib0clear(&___nl__17);
#line 105
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 105
goto label_9;
#line 105
label_7:
#line 105
c_rt_lib0clear(&___nl__11);
#line 105
c_rt_lib0clear(&___nl__12);
#line 105
c_rt_lib0clear(&___nl__13);
#line 105
c_rt_lib0clear(&___nl__14);
#line 106
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_arr(*___ref___0, ___nl__7));
#line 106
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 106
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(196), ___nl__12);
#line 106
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___0, ___nl__7, ___nl__11));
#line 106
c_rt_lib0clear(&___nl__11);
#line 106
c_rt_lib0clear(&___nl__12);
#line 106
c_rt_lib0clear(&___nl__10);
#line 107
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 107
goto label_6;
#line 107
label_4:
#line 107
c_rt_lib0clear(&___nl__6);
#line 107
c_rt_lib0clear(&___nl__7);
#line 107
c_rt_lib0clear(&___nl__8);
#line 107
c_rt_lib0clear(&___nl__9);
#line 107
c_rt_lib0clear(&___nl__3);
#line 107
c_rt_lib0clear(&___nl__4);
#line 107
c_rt_lib0clear(&___nl__5);
#line 107
c_rt_lib0clear(&___nl__1);
#line 107
c_rt_lib0clear(&___nl__2);
#line 107
return NULL;
}

ImmT unnecessary_commands_priv0build_commands_graph(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
unnecessary_commands_priv0__const__init();
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
#line 111
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 112
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 112
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 112
label_3:
#line 112
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__2));
#line 112
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 112
c_rt_lib0delete(array0push(&___nl__3, ___nl__7));
#line 112
c_rt_lib0clear(&___nl__7);
#line 112
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 112
goto label_3;
#line 112
label_1:
#line 112
c_rt_lib0clear(&___nl__4);
#line 112
c_rt_lib0clear(&___nl__5);
#line 112
c_rt_lib0clear(&___nl__6);
#line 113
c_rt_lib0move(&___nl__4, array0len(___nl__1));
#line 113
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 113
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 113
label_6:
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__5, ___nl__4));
#line 113
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 114
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 115
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__0, ___nl__5));
#line 116
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(199)));
#line 116
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 116
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 116
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 116
label_9:
#line 116
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 116
if(c_rt_lib0check_true_native(___nl__15)){ goto label_7;}
#line 116
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 117
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(72)));
#line 117
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__16, ___get_global_const(194)));
#line 117
if(c_rt_lib0check_true_native(___nl__17)){ goto label_11;}
#line 120
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__16, ___get_global_const(203)));
#line 120
if(c_rt_lib0check_true_native(___nl__17)){ goto label_12;}
#line 124
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__16, ___get_global_const(195)));
#line 124
if(c_rt_lib0check_true_native(___nl__17)){ goto label_13;}
#line 124
c_rt_lib0move(&___nl__17,___get_global_const(74));
#line 124
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(2, ___nl__17, ___nl__16));
#line 124
nl_die_arg(___nl__17);
#line 117
label_11:
#line 118
c_rt_lib0move(&___nl__18, c_rt_lib0hash_mk(0));
#line 118
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(204)));
#line 118
c_rt_lib0copy(&___nl__19, ___nl__18);
#line 118
c_rt_lib0array_set(&___nl__9, ___nl__20, ___nl__19);
#line 118
c_rt_lib0clear(&___nl__18);
#line 118
c_rt_lib0clear(&___nl__19);
#line 118
c_rt_lib0clear(&___nl__20);
#line 119
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(204)));
#line 119
c_rt_lib0move(&___nl__18, c_rt_lib0get_ref_arr(___nl__9, ___nl__19));
#line 119
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(205)));
#line 119
c_rt_lib0move(&___nl__21,___get_global_const(0));
#line 119
c_rt_lib0delete(hash0set_value(&___nl__18, ___nl__20, ___nl__21));
#line 119
c_rt_lib0clear(&___nl__21);
#line 119
c_rt_lib0clear(&___nl__20);
#line 119
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__9, ___nl__19, ___nl__18));
#line 119
c_rt_lib0clear(&___nl__18);
#line 119
c_rt_lib0clear(&___nl__19);
#line 120
goto label_10;
#line 120
label_12:
#line 121
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(204)));
#line 121
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__9, ___nl__19));
#line 121
c_rt_lib0clear(&___nl__19);
#line 121
c_rt_lib0move(&___nl__21, c_rt_lib0init_iter(___nl__18));
#line 121
label_16:
#line 121
c_rt_lib0move(&___nl__19, c_rt_lib0is_end_hash(___nl__21));
#line 121
if(c_rt_lib0check_true_native(___nl__19)){ goto label_14;}
#line 121
c_rt_lib0move(&___nl__19, c_rt_lib0get_key_iter(___nl__21));
#line 121
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value(___nl__18, ___nl__19));
#line 122
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(205)));
#line 122
c_rt_lib0move(&___nl__22, c_rt_lib0get_ref_arr(___nl__3, ___nl__23));
#line 122
c_rt_lib0delete(array0push(&___nl__22, ___nl__19));
#line 122
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__3, ___nl__23, ___nl__22));
#line 122
c_rt_lib0clear(&___nl__22);
#line 122
c_rt_lib0clear(&___nl__23);
#line 123
c_rt_lib0move(&___nl__21, c_rt_lib0next_iter(___nl__21));
#line 123
goto label_16;
#line 123
label_14:
#line 123
c_rt_lib0clear(&___nl__18);
#line 123
c_rt_lib0clear(&___nl__19);
#line 123
c_rt_lib0clear(&___nl__20);
#line 123
c_rt_lib0clear(&___nl__21);
#line 124
goto label_10;
#line 124
label_13:
#line 125
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(204)));
#line 125
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__9, ___nl__19));
#line 125
c_rt_lib0clear(&___nl__19);
#line 125
c_rt_lib0move(&___nl__21, c_rt_lib0init_iter(___nl__18));
#line 125
label_19:
#line 125
c_rt_lib0move(&___nl__19, c_rt_lib0is_end_hash(___nl__21));
#line 125
if(c_rt_lib0check_true_native(___nl__19)){ goto label_17;}
#line 125
c_rt_lib0move(&___nl__19, c_rt_lib0get_key_iter(___nl__21));
#line 125
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value(___nl__18, ___nl__19));
#line 126
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(205)));
#line 126
c_rt_lib0move(&___nl__22, c_rt_lib0get_ref_arr(___nl__3, ___nl__23));
#line 126
c_rt_lib0delete(array0push(&___nl__22, ___nl__19));
#line 126
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__3, ___nl__23, ___nl__22));
#line 126
c_rt_lib0clear(&___nl__22);
#line 126
c_rt_lib0clear(&___nl__23);
#line 127
c_rt_lib0move(&___nl__21, c_rt_lib0next_iter(___nl__21));
#line 127
goto label_19;
#line 127
label_17:
#line 127
c_rt_lib0clear(&___nl__18);
#line 127
c_rt_lib0clear(&___nl__19);
#line 127
c_rt_lib0clear(&___nl__20);
#line 127
c_rt_lib0clear(&___nl__21);
#line 128
c_rt_lib0move(&___nl__18, c_rt_lib0hash_mk(0));
#line 128
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(204)));
#line 128
c_rt_lib0copy(&___nl__19, ___nl__18);
#line 128
c_rt_lib0array_set(&___nl__9, ___nl__20, ___nl__19);
#line 128
c_rt_lib0clear(&___nl__18);
#line 128
c_rt_lib0clear(&___nl__19);
#line 128
c_rt_lib0clear(&___nl__20);
#line 129
goto label_10;
#line 129
label_10:
#line 129
c_rt_lib0clear(&___nl__16);
#line 129
c_rt_lib0clear(&___nl__17);
#line 130
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 130
goto label_9;
#line 130
label_7:
#line 130
c_rt_lib0clear(&___nl__10);
#line 130
c_rt_lib0clear(&___nl__11);
#line 130
c_rt_lib0clear(&___nl__12);
#line 130
c_rt_lib0clear(&___nl__13);
#line 130
c_rt_lib0clear(&___nl__14);
#line 130
c_rt_lib0clear(&___nl__15);
#line 130
c_rt_lib0clear(&___nl__8);
#line 130
c_rt_lib0clear(&___nl__9);
#line 131
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 131
goto label_6;
#line 131
label_4:
#line 131
c_rt_lib0clear(&___nl__4);
#line 131
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0clear(&___nl__6);
#line 131
c_rt_lib0clear(&___nl__7);
#line 132
c_rt_lib0clear(&___nl__0);
#line 132
c_rt_lib0clear(&___nl__1);
#line 132
c_rt_lib0clear(&___nl__2);
#line 132
return ___nl__3;
#line 132
c_rt_lib0clear(&___nl__3);
#line 132
c_rt_lib0clear(&___nl__0);
#line 132
c_rt_lib0clear(&___nl__1);
#line 132
c_rt_lib0clear(&___nl__2);
#line 132
return NULL;
}

ImmT unnecessary_commands_priv0visit_node(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
unnecessary_commands_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 135
c_rt_lib0move(&___nl__3, hash0has_key(*___ref___2, ___nl__1));
#line 135
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 135
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 135
c_rt_lib0clear(&___nl__0);
#line 135
c_rt_lib0clear(&___nl__1);
#line 135
c_rt_lib0clear(&___nl__3);
#line 135
return NULL;
#line 135
goto label_2;
#line 135
label_2:
#line 135
c_rt_lib0clear(&___nl__3);
#line 136
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 136
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__1, ___nl__3));
#line 136
c_rt_lib0clear(&___nl__3);
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__1));
#line 137
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 137
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 137
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 137
label_5:
#line 137
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 137
if(c_rt_lib0check_true_native(___nl__8)){ goto label_3;}
#line 137
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 138
c_rt_lib0delete(unnecessary_commands_priv0visit_node(___nl__0, ___nl__4, ___ref___2));
#line 139
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 139
goto label_5;
#line 139
label_3:
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0clear(&___nl__5);
#line 139
c_rt_lib0clear(&___nl__6);
#line 139
c_rt_lib0clear(&___nl__7);
#line 139
c_rt_lib0clear(&___nl__8);
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
return NULL;
}

ImmT unnecessary_commands_priv0build_block_state(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
unnecessary_commands_priv0__const__init();
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
#line 143
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 144
c_rt_lib0move(&___nl__6, hash0has_key(*___ref___4, ___nl__2));
#line 144
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 144
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 144
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 145
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 145
c_rt_lib0delete(hash0set_value(___ref___4, ___nl__2, ___nl__7));
#line 145
c_rt_lib0clear(&___nl__7);
#line 146
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 146
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 146
c_rt_lib0clear(&___nl__7);
#line 147
goto label_2;
#line 147
label_2:
#line 147
c_rt_lib0clear(&___nl__6);
#line 148
c_rt_lib0move(&___nl__6, array0len(___nl__3));
#line 149
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 149
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 149
label_5:
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__7, ___nl__6));
#line 149
if(c_rt_lib0check_true_native(___nl__9)){ goto label_3;}
#line 150
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 150
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__10));
#line 150
label_8:
#line 150
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 150
if(c_rt_lib0check_true_native(___nl__11)){ goto label_6;}
#line 150
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 150
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__10, ___nl__11));
#line 151
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(*___ref___0, ___nl__2));
#line 151
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__7));
#line 151
c_rt_lib0move(&___nl__14, hash0has_key(___nl__15, ___nl__11));
#line 151
c_rt_lib0clear(&___nl__15);
#line 151
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 151
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 151
if(c_rt_lib0check_true_native(___nl__14)){ goto label_10;}
#line 152
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_arr(*___ref___0, ___nl__2));
#line 152
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_arr(___nl__15, ___nl__7));
#line 152
c_rt_lib0move(&___nl__17,___get_global_const(0));
#line 152
c_rt_lib0delete(hash0set_value(&___nl__16, ___nl__11, ___nl__17));
#line 152
c_rt_lib0clear(&___nl__17);
#line 152
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__15, ___nl__7, ___nl__16));
#line 152
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___0, ___nl__2, ___nl__15));
#line 152
c_rt_lib0clear(&___nl__15);
#line 152
c_rt_lib0clear(&___nl__16);
#line 153
c_rt_lib0move(&___nl__15, c_rt_lib0get_true());
#line 153
c_rt_lib0copy(&___nl__5, ___nl__15);
#line 153
c_rt_lib0clear(&___nl__15);
#line 154
goto label_10;
#line 154
label_10:
#line 154
c_rt_lib0clear(&___nl__14);
#line 155
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 155
goto label_8;
#line 155
label_6:
#line 155
c_rt_lib0clear(&___nl__10);
#line 155
c_rt_lib0clear(&___nl__11);
#line 155
c_rt_lib0clear(&___nl__12);
#line 155
c_rt_lib0clear(&___nl__13);
#line 156
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 156
goto label_5;
#line 156
label_3:
#line 156
c_rt_lib0clear(&___nl__7);
#line 156
c_rt_lib0clear(&___nl__8);
#line 156
c_rt_lib0clear(&___nl__9);
#line 157
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 157
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 157
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 157
if(c_rt_lib0check_true_native(___nl__7)){ goto label_12;}
#line 157
c_rt_lib0clear(&___nl__1);
#line 157
c_rt_lib0clear(&___nl__2);
#line 157
c_rt_lib0clear(&___nl__3);
#line 157
c_rt_lib0clear(&___nl__5);
#line 157
c_rt_lib0clear(&___nl__6);
#line 157
c_rt_lib0clear(&___nl__7);
#line 157
return NULL;
#line 157
goto label_12;
#line 157
label_12:
#line 157
c_rt_lib0clear(&___nl__7);
#line 158
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___0, ___nl__2));
#line 159
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__1, ___nl__2));
#line 159
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(200)));
#line 159
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__8));
#line 159
label_15:
#line 159
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 159
if(c_rt_lib0check_true_native(___nl__9)){ goto label_13;}
#line 159
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 159
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__8, ___nl__9));
#line 160
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__10, ___get_global_const(194)));
#line 160
if(c_rt_lib0check_true_native(___nl__12)){ goto label_17;}
#line 163
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__10, ___get_global_const(195)));
#line 163
if(c_rt_lib0check_true_native(___nl__12)){ goto label_18;}
#line 163
c_rt_lib0move(&___nl__12,___get_global_const(74));
#line 163
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__10));
#line 163
nl_die_arg(___nl__12);
#line 160
label_17:
#line 160
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__10, ___get_global_const(194)));
#line 161
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(0));
#line 161
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 161
c_rt_lib0array_set(&___nl__7, ___nl__9, ___nl__15);
#line 161
c_rt_lib0clear(&___nl__14);
#line 161
c_rt_lib0clear(&___nl__15);
#line 162
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_arr(___nl__7, ___nl__9));
#line 162
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 162
c_rt_lib0delete(hash0set_value(&___nl__14, ___nl__13, ___nl__15));
#line 162
c_rt_lib0clear(&___nl__15);
#line 162
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__7, ___nl__9, ___nl__14));
#line 162
c_rt_lib0clear(&___nl__14);
#line 162
c_rt_lib0clear(&___nl__13);
#line 163
goto label_16;
#line 163
label_18:
#line 164
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 164
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 164
c_rt_lib0array_set(&___nl__7, ___nl__9, ___nl__14);
#line 164
c_rt_lib0clear(&___nl__13);
#line 164
c_rt_lib0clear(&___nl__14);
#line 165
goto label_16;
#line 165
label_16:
#line 165
c_rt_lib0clear(&___nl__12);
#line 166
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 166
goto label_15;
#line 166
label_13:
#line 166
c_rt_lib0clear(&___nl__8);
#line 166
c_rt_lib0clear(&___nl__9);
#line 166
c_rt_lib0clear(&___nl__10);
#line 166
c_rt_lib0clear(&___nl__11);
#line 167
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__1, ___nl__2));
#line 167
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(202)));
#line 167
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 167
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 167
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 167
label_21:
#line 167
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 167
if(c_rt_lib0check_true_native(___nl__13)){ goto label_19;}
#line 167
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 168
c_rt_lib0delete(unnecessary_commands_priv0build_block_state(___ref___0, ___nl__1, ___nl__9, ___nl__7, ___ref___4));
#line 169
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 169
goto label_21;
#line 169
label_19:
#line 169
c_rt_lib0clear(&___nl__8);
#line 169
c_rt_lib0clear(&___nl__9);
#line 169
c_rt_lib0clear(&___nl__10);
#line 169
c_rt_lib0clear(&___nl__11);
#line 169
c_rt_lib0clear(&___nl__12);
#line 169
c_rt_lib0clear(&___nl__13);
#line 169
c_rt_lib0clear(&___nl__5);
#line 169
c_rt_lib0clear(&___nl__6);
#line 169
c_rt_lib0clear(&___nl__7);
#line 169
c_rt_lib0clear(&___nl__1);
#line 169
c_rt_lib0clear(&___nl__2);
#line 169
c_rt_lib0clear(&___nl__3);
#line 169
return NULL;
}


static ImmT ___const__[4];
static int ___const_init__ = 1;
void unnecessary_commands_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[3];


for(int i=0;i<3;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 3);
}}
ImmT unnecessary_commands_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT unnecessary_commands_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = unnecessary_commands0state_t0cal();
	break;
case 1:
	___const__[1] = unnecessary_commands0block_state_t0cal();
	break;
case 2:
	___const__[2] = unnecessary_commands0graph_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
