
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
#include "unnecessary_commands.h"
#line 1 "unnecessary_commands.nl"

static ImmT *__const__f = NULL;
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
return unnecessary_commands_priv0__const__sing(0);}
ImmT unnecessary_commands0state_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 13
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(unnecessary_commands0block_state_t0ptr, ___get_global_const(1270), ___get_global_const(1271)));
#line 13
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 13
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 13
c_rt_lib0clear(&___nl__1);
#line 13
return ___nl__0;
#line 13
c_rt_lib0clear(&___nl__0);
#line 13
return NULL;
}

ImmT unnecessary_commands0block_state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "unnecessary_commands0block_state_t");
return unnecessary_commands0block_state_t();}
ImmT unnecessary_commands0block_state_t(){
return unnecessary_commands_priv0__const__sing(1);}
ImmT unnecessary_commands0block_state_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 17
c_rt_lib0move(&___nl__2, ptd0sim());
#line 17
c_rt_lib0move(&___nl__1, ptd0hash(___nl__2));
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return ___nl__0;
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT unnecessary_commands0graph_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "unnecessary_commands0graph_t");
return unnecessary_commands0graph_t();}
ImmT unnecessary_commands0graph_t(){
return unnecessary_commands_priv0__const__sing(2);}
ImmT unnecessary_commands0graph_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 21
c_rt_lib0move(&___nl__2, ptd0sim());
#line 21
c_rt_lib0move(&___nl__1, ptd0arr(___nl__2));
#line 21
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
return ___nl__0;
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return NULL;
}

ImmT unnecessary_commands0delete_unnecessary_commands0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "unnecessary_commands0delete_unnecessary_commands");
return unnecessary_commands0delete_unnecessary_commands(&_tab[0]);}
ImmT unnecessary_commands0delete_unnecessary_commands(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(187)));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(188)));
#line 25
c_rt_lib0move(&___nl__1, flow_graph0make_blocks(___nl__2, ___nl__3));
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(189)));
#line 26
c_rt_lib0delete(unnecessary_commands_priv0delete_unnecessary_commands_in_blocks(&___nl__1, ___nl__2));
#line 26
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0move(&___nl__2, flow_graph0combine_blocks(___nl__1));
#line 27
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 27
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(187), ___nl__3);
#line 27
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(187)));
#line 28
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(188)));
#line 28
c_rt_lib0move(&___nl__2, flow_graph0make_blocks(___nl__3, ___nl__4));
#line 28
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 28
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(189)));
#line 29
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(188)));
#line 29
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 29
c_rt_lib0clear(&___nl__4);
#line 29
c_rt_lib0delete(unnecessary_commands_priv0delete_unnecessary_clears_in_blocks(&___nl__1, ___nl__2, ___nl__3));
#line 29
c_rt_lib0clear(&___nl__3);
#line 29
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0move(&___nl__2, flow_graph0combine_blocks(___nl__1));
#line 30
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 30
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(187), ___nl__3);
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
c_rt_lib0clear(&___nl__1);
#line 30
return NULL;
}

ImmT unnecessary_commands_priv0build_empty_state(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 34
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 35
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 35
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 35
label_3:
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__0));
#line 35
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 35
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 35
c_rt_lib0delete(array0push(&___nl__1, ___nl__5));
#line 35
c_rt_lib0clear(&___nl__5);
#line 35
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 35
goto label_3;
#line 35
label_11:
#line 35
c_rt_lib0clear(&___nl__2);
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return ___nl__1;
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return NULL;
}

ImmT unnecessary_commands_priv0has_side_effects(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 40
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 41
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(206)));
#line 41
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 41
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(90)));
#line 41
label_6:
#line 41
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 41
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(217)));
#line 41
label_10:
#line 41
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 41
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(218)));
#line 41
label_14:
#line 41
if(c_rt_lib0check_true_native(___nl__2)){ goto label_18;}
#line 41
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(219)));
#line 41
label_18:
#line 41
if(c_rt_lib0check_true_native(___nl__2)){ goto label_22;}
#line 41
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(220)));
#line 41
label_22:
#line 41
c_rt_lib0clear(&___nl__0);
#line 41
c_rt_lib0clear(&___nl__1);
#line 41
return ___nl__2;
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0clear(&___nl__0);
#line 41
return NULL;
}

ImmT unnecessary_commands_priv0build_blocks_states(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 45
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 46
c_rt_lib0move(&___nl__3, unnecessary_commands_priv0build_empty_state(___nl__1));
#line 47
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 48
c_rt_lib0move(&___nl__5, array0len(___nl__0));
#line 48
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 48
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 48
label_6:
#line 48
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__6, ___nl__5));
#line 48
if(c_rt_lib0check_true_native(___nl__8)){ goto label_12;}
#line 49
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 50
goto label_6;
#line 50
label_12:
#line 50
c_rt_lib0clear(&___nl__5);
#line 50
c_rt_lib0clear(&___nl__6);
#line 50
c_rt_lib0clear(&___nl__7);
#line 50
c_rt_lib0clear(&___nl__8);
#line 51
c_rt_lib0move(&___nl__5, array0len(___nl__0));
#line 51
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 51
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 51
c_rt_lib0clear(&___nl__6);
#line 51
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 51
if(c_rt_lib0check_true_native(___nl__5)){ goto label_26;}
#line 51
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 51
nl_die_arg(___nl__6);
#line 51
goto label_26;
#line 51
label_26:
#line 51
c_rt_lib0clear(&___nl__5);
#line 51
c_rt_lib0clear(&___nl__6);
#line 52
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 52
c_rt_lib0delete(unnecessary_commands_priv0build_block_state(&___nl__2, ___nl__0, ___nl__5, ___nl__3, &___nl__4));
#line 52
c_rt_lib0clear(&___nl__5);
#line 53
c_rt_lib0clear(&___nl__0);
#line 53
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
return ___nl__2;
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0clear(&___nl__0);
#line 53
c_rt_lib0clear(&___nl__1);
#line 53
return NULL;
}

ImmT unnecessary_commands_priv0delete_unnecessary_commands_in_blocks(ImmT * ___ref___0,ImmT ___nl__1) {
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
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
ImmT ___nl__20 = NULL;
#line 57
c_rt_lib0move(&___nl__2, unnecessary_commands_priv0build_blocks_states(*___ref___0, ___nl__1));
#line 58
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 59
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 59
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 59
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(*___ref___0));
#line 59
label_5:
#line 59
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 59
if(c_rt_lib0check_true_native(___nl__8)){ goto label_16;}
#line 59
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(*___ref___0, ___nl__5));
#line 60
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(202)));
#line 60
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 60
c_rt_lib0clear(&___nl__10);
#line 60
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 60
c_rt_lib0clear(&___nl__9);
#line 61
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 61
goto label_5;
#line 61
label_16:
#line 61
c_rt_lib0clear(&___nl__4);
#line 61
c_rt_lib0clear(&___nl__5);
#line 61
c_rt_lib0clear(&___nl__6);
#line 61
c_rt_lib0clear(&___nl__7);
#line 61
c_rt_lib0clear(&___nl__8);
#line 62
c_rt_lib0move(&___nl__4, unnecessary_commands_priv0build_commands_graph(___nl__2, *___ref___0, ___nl__3));
#line 63
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 64
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 64
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 64
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(*___ref___0));
#line 64
label_27:
#line 64
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 64
if(c_rt_lib0check_true_native(___nl__10)){ goto label_61;}
#line 64
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 65
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(202)));
#line 65
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 65
c_rt_lib0clear(&___nl__12);
#line 65
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 65
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 65
label_36:
#line 65
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__12, ___nl__11));
#line 65
if(c_rt_lib0check_true_native(___nl__14)){ goto label_54;}
#line 66
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(202)));
#line 66
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__16, ___nl__12));
#line 66
c_rt_lib0move(&___nl__15, unnecessary_commands_priv0has_side_effects(___nl__16));
#line 66
c_rt_lib0clear(&___nl__16);
#line 66
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 66
if(c_rt_lib0check_true_native(___nl__15)){ goto label_50;}
#line 67
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(203)));
#line 67
c_rt_lib0move(&___nl__16, c_rt_lib0add_mod(___nl__16, ___nl__12));
#line 67
c_rt_lib0delete(unnecessary_commands_priv0visit_node(___nl__4, ___nl__16, &___nl__5));
#line 67
c_rt_lib0clear(&___nl__16);
#line 68
goto label_50;
#line 68
label_50:
#line 68
c_rt_lib0clear(&___nl__15);
#line 69
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 69
goto label_36;
#line 69
label_54:
#line 69
c_rt_lib0clear(&___nl__11);
#line 69
c_rt_lib0clear(&___nl__12);
#line 69
c_rt_lib0clear(&___nl__13);
#line 69
c_rt_lib0clear(&___nl__14);
#line 70
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 70
goto label_27;
#line 70
label_61:
#line 70
c_rt_lib0clear(&___nl__6);
#line 70
c_rt_lib0clear(&___nl__7);
#line 70
c_rt_lib0clear(&___nl__8);
#line 70
c_rt_lib0clear(&___nl__9);
#line 70
c_rt_lib0clear(&___nl__10);
#line 71
c_rt_lib0move(&___nl__6, array0len(*___ref___0));
#line 71
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 71
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 71
label_70:
#line 71
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__7, ___nl__6));
#line 71
if(c_rt_lib0check_true_native(___nl__9)){ goto label_135;}
#line 72
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(0));
#line 73
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 73
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(202)));
#line 73
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 73
c_rt_lib0clear(&___nl__12);
#line 73
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 73
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 73
label_80:
#line 73
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__12, ___nl__11));
#line 73
if(c_rt_lib0check_true_native(___nl__14)){ goto label_121;}
#line 74
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 74
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(202)));
#line 74
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__12));
#line 75
c_rt_lib0move(&___nl__16, c_rt_lib0get_false());
#line 76
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 76
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(203)));
#line 76
c_rt_lib0move(&___nl__17, c_rt_lib0add_mod(___nl__17, ___nl__12));
#line 77
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(201)));
#line 77
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__18, ___get_global_const(221)));
#line 77
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 77
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 77
if(c_rt_lib0check_true_native(___nl__18)){ goto label_106;}
#line 78
c_rt_lib0move(&___nl__19, hash0has_key(___nl__5, ___nl__17));
#line 78
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 78
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 78
if(c_rt_lib0check_true_native(___nl__19)){ goto label_103;}
#line 79
c_rt_lib0move(&___nl__20, c_rt_lib0get_true());
#line 79
c_rt_lib0copy(&___nl__16, ___nl__20);
#line 79
c_rt_lib0clear(&___nl__20);
#line 80
goto label_103;
#line 80
label_103:
#line 80
c_rt_lib0clear(&___nl__19);
#line 81
goto label_106;
#line 81
label_106:
#line 81
c_rt_lib0clear(&___nl__18);
#line 82
c_rt_lib0copy(&___nl__18, ___nl__16);
#line 82
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 82
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 82
if(c_rt_lib0check_true_native(___nl__18)){ goto label_114;}
#line 83
c_rt_lib0delete(array0push(&___nl__10, ___nl__15));
#line 84
goto label_114;
#line 84
label_114:
#line 84
c_rt_lib0clear(&___nl__18);
#line 84
c_rt_lib0clear(&___nl__15);
#line 84
c_rt_lib0clear(&___nl__16);
#line 84
c_rt_lib0clear(&___nl__17);
#line 85
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 85
goto label_80;
#line 85
label_121:
#line 85
c_rt_lib0clear(&___nl__11);
#line 85
c_rt_lib0clear(&___nl__12);
#line 85
c_rt_lib0clear(&___nl__13);
#line 85
c_rt_lib0clear(&___nl__14);
#line 86
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_arr(*___ref___0, ___nl__7));
#line 86
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 86
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(202), ___nl__12);
#line 86
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___0, ___nl__7, ___nl__11));
#line 86
c_rt_lib0clear(&___nl__11);
#line 86
c_rt_lib0clear(&___nl__12);
#line 86
c_rt_lib0clear(&___nl__10);
#line 87
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 87
goto label_70;
#line 87
label_135:
#line 87
c_rt_lib0clear(&___nl__6);
#line 87
c_rt_lib0clear(&___nl__7);
#line 87
c_rt_lib0clear(&___nl__8);
#line 87
c_rt_lib0clear(&___nl__9);
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
c_rt_lib0clear(&___nl__3);
#line 87
c_rt_lib0clear(&___nl__4);
#line 87
c_rt_lib0clear(&___nl__5);
#line 87
c_rt_lib0clear(&___nl__1);
#line 87
return NULL;
}

ImmT unnecessary_commands_priv0delete_unnecessary_clears_in_blocks(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
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
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
ImmT ___nl__20 = NULL;
ImmT ___nl__21 = NULL;
ImmT ___nl__22 = NULL;
#line 91
c_rt_lib0move(&___nl__3, unnecessary_commands_priv0build_blocks_states(*___ref___0, ___nl__1));
#line 92
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 93
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 93
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 93
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(*___ref___0));
#line 93
label_5:
#line 93
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 93
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 93
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___0, ___nl__6));
#line 94
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(202)));
#line 94
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 94
c_rt_lib0clear(&___nl__11);
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 94
c_rt_lib0clear(&___nl__10);
#line 95
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 95
goto label_5;
#line 95
label_16:
#line 95
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0clear(&___nl__6);
#line 95
c_rt_lib0clear(&___nl__7);
#line 95
c_rt_lib0clear(&___nl__8);
#line 95
c_rt_lib0clear(&___nl__9);
#line 96
c_rt_lib0move(&___nl__5, unnecessary_commands_priv0build_commands_graph(___nl__3, *___ref___0, ___nl__4));
#line 97
c_rt_lib0move(&___nl__6, array0len(*___ref___0));
#line 97
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 97
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 97
label_26:
#line 97
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__7, ___nl__6));
#line 97
if(c_rt_lib0check_true_native(___nl__9)){ goto label_102;}
#line 98
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(0));
#line 99
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 99
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(202)));
#line 99
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 99
c_rt_lib0clear(&___nl__12);
#line 99
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 99
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 99
label_36:
#line 99
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__12, ___nl__11));
#line 99
if(c_rt_lib0check_true_native(___nl__14)){ goto label_88;}
#line 100
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 100
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(202)));
#line 100
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__12));
#line 101
c_rt_lib0move(&___nl__16, c_rt_lib0get_false());
#line 102
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 102
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(203)));
#line 102
c_rt_lib0move(&___nl__17, c_rt_lib0add_mod(___nl__17, ___nl__12));
#line 103
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(201)));
#line 103
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__18, ___get_global_const(221)));
#line 103
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 103
if(c_rt_lib0check_true_native(___nl__18)){ goto label_73;}
#line 104
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(201)));
#line 104
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__19, ___get_global_const(221)));
#line 105
c_rt_lib0move(&___nl__22, c_rt_lib0array_get(___nl__5, ___nl__17));
#line 105
c_rt_lib0move(&___nl__20, array0len(___nl__22));
#line 105
c_rt_lib0clear(&___nl__22);
#line 105
c_rt_lib0move(&___nl__22,___get_global_const(0));
#line 105
c_rt_lib0move(&___nl__20, c_rt_lib0num_eq(___nl__20, ___nl__22));
#line 105
c_rt_lib0clear(&___nl__22);
#line 105
c_rt_lib0move(&___nl__21, c_rt_lib0not(___nl__20));
#line 105
if(c_rt_lib0check_true_native(___nl__21)){ goto label_61;}
#line 105
c_rt_lib0move(&___nl__20, c_rt_lib0ge(___nl__19, ___nl__2));
#line 105
label_61:
#line 105
c_rt_lib0clear(&___nl__21);
#line 105
c_rt_lib0move(&___nl__20, c_rt_lib0not(___nl__20));
#line 105
if(c_rt_lib0check_true_native(___nl__20)){ goto label_69;}
#line 106
c_rt_lib0move(&___nl__21, c_rt_lib0get_true());
#line 106
c_rt_lib0copy(&___nl__16, ___nl__21);
#line 106
c_rt_lib0clear(&___nl__21);
#line 107
goto label_69;
#line 107
label_69:
#line 107
c_rt_lib0clear(&___nl__20);
#line 107
c_rt_lib0clear(&___nl__19);
#line 108
goto label_73;
#line 108
label_73:
#line 108
c_rt_lib0clear(&___nl__18);
#line 109
c_rt_lib0copy(&___nl__18, ___nl__16);
#line 109
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 109
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 109
if(c_rt_lib0check_true_native(___nl__18)){ goto label_81;}
#line 110
c_rt_lib0delete(array0push(&___nl__10, ___nl__15));
#line 111
goto label_81;
#line 111
label_81:
#line 111
c_rt_lib0clear(&___nl__18);
#line 111
c_rt_lib0clear(&___nl__15);
#line 111
c_rt_lib0clear(&___nl__16);
#line 111
c_rt_lib0clear(&___nl__17);
#line 112
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 112
goto label_36;
#line 112
label_88:
#line 112
c_rt_lib0clear(&___nl__11);
#line 112
c_rt_lib0clear(&___nl__12);
#line 112
c_rt_lib0clear(&___nl__13);
#line 112
c_rt_lib0clear(&___nl__14);
#line 113
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_arr(*___ref___0, ___nl__7));
#line 113
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 113
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(202), ___nl__12);
#line 113
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___0, ___nl__7, ___nl__11));
#line 113
c_rt_lib0clear(&___nl__11);
#line 113
c_rt_lib0clear(&___nl__12);
#line 113
c_rt_lib0clear(&___nl__10);
#line 114
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 114
goto label_26;
#line 114
label_102:
#line 114
c_rt_lib0clear(&___nl__6);
#line 114
c_rt_lib0clear(&___nl__7);
#line 114
c_rt_lib0clear(&___nl__8);
#line 114
c_rt_lib0clear(&___nl__9);
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0clear(&___nl__5);
#line 114
c_rt_lib0clear(&___nl__1);
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
return NULL;
}

ImmT unnecessary_commands_priv0build_commands_graph(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
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
#line 119
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 120
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 120
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 120
label_3:
#line 120
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__2));
#line 120
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 120
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 120
c_rt_lib0delete(array0push(&___nl__3, ___nl__7));
#line 120
c_rt_lib0clear(&___nl__7);
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 120
goto label_3;
#line 120
label_11:
#line 120
c_rt_lib0clear(&___nl__4);
#line 120
c_rt_lib0clear(&___nl__5);
#line 120
c_rt_lib0clear(&___nl__6);
#line 121
c_rt_lib0move(&___nl__4, array0len(___nl__1));
#line 121
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 121
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 121
label_18:
#line 121
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__5, ___nl__4));
#line 121
if(c_rt_lib0check_true_native(___nl__7)){ goto label_131;}
#line 122
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 123
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__0, ___nl__5));
#line 124
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(279)));
#line 124
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 124
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 124
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 124
label_27:
#line 124
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 124
if(c_rt_lib0check_true_native(___nl__15)){ goto label_120;}
#line 124
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 125
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(63)));
#line 125
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__16, ___get_global_const(277)));
#line 125
if(c_rt_lib0check_true_native(___nl__17)){ goto label_41;}
#line 128
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__16, ___get_global_const(282)));
#line 128
if(c_rt_lib0check_true_native(___nl__17)){ goto label_60;}
#line 132
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__16, ___get_global_const(221)));
#line 132
if(c_rt_lib0check_true_native(___nl__17)){ goto label_84;}
#line 132
c_rt_lib0move(&___nl__17,___get_global_const(91));
#line 132
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(2, ___nl__17, ___nl__16));
#line 132
nl_die_arg(___nl__17);
#line 125
label_41:
#line 126
c_rt_lib0move(&___nl__18, c_rt_lib0hash_mk(0));
#line 126
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(283)));
#line 126
c_rt_lib0copy(&___nl__19, ___nl__18);
#line 126
c_rt_lib0array_set(&___nl__9, ___nl__20, ___nl__19);
#line 126
c_rt_lib0clear(&___nl__18);
#line 126
c_rt_lib0clear(&___nl__19);
#line 126
c_rt_lib0clear(&___nl__20);
#line 127
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(283)));
#line 127
c_rt_lib0move(&___nl__18, c_rt_lib0get_ref_arr(___nl__9, ___nl__19));
#line 127
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(284)));
#line 127
c_rt_lib0move(&___nl__21,___get_global_const(2));
#line 127
c_rt_lib0delete(hash0set_value(&___nl__18, ___nl__20, ___nl__21));
#line 127
c_rt_lib0clear(&___nl__21);
#line 127
c_rt_lib0clear(&___nl__20);
#line 127
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__9, ___nl__19, ___nl__18));
#line 127
c_rt_lib0clear(&___nl__18);
#line 127
c_rt_lib0clear(&___nl__19);
#line 128
goto label_115;
#line 128
label_60:
#line 129
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(283)));
#line 129
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__9, ___nl__19));
#line 129
c_rt_lib0clear(&___nl__19);
#line 129
c_rt_lib0move(&___nl__21, c_rt_lib0init_iter(___nl__18));
#line 129
label_65:
#line 129
c_rt_lib0move(&___nl__19, c_rt_lib0is_end_hash(___nl__21));
#line 129
if(c_rt_lib0check_true_native(___nl__19)){ goto label_78;}
#line 129
c_rt_lib0move(&___nl__19, c_rt_lib0get_key_iter(___nl__21));
#line 129
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value(___nl__18, ___nl__19));
#line 130
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(284)));
#line 130
c_rt_lib0move(&___nl__22, c_rt_lib0get_ref_arr(___nl__3, ___nl__23));
#line 130
c_rt_lib0delete(array0push(&___nl__22, ___nl__19));
#line 130
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__3, ___nl__23, ___nl__22));
#line 130
c_rt_lib0clear(&___nl__22);
#line 130
c_rt_lib0clear(&___nl__23);
#line 131
c_rt_lib0move(&___nl__21, c_rt_lib0next_iter(___nl__21));
#line 131
goto label_65;
#line 131
label_78:
#line 131
c_rt_lib0clear(&___nl__18);
#line 131
c_rt_lib0clear(&___nl__19);
#line 131
c_rt_lib0clear(&___nl__20);
#line 131
c_rt_lib0clear(&___nl__21);
#line 132
goto label_115;
#line 132
label_84:
#line 133
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(283)));
#line 133
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__9, ___nl__19));
#line 133
c_rt_lib0clear(&___nl__19);
#line 133
c_rt_lib0move(&___nl__21, c_rt_lib0init_iter(___nl__18));
#line 133
label_89:
#line 133
c_rt_lib0move(&___nl__19, c_rt_lib0is_end_hash(___nl__21));
#line 133
if(c_rt_lib0check_true_native(___nl__19)){ goto label_102;}
#line 133
c_rt_lib0move(&___nl__19, c_rt_lib0get_key_iter(___nl__21));
#line 133
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value(___nl__18, ___nl__19));
#line 134
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(284)));
#line 134
c_rt_lib0move(&___nl__22, c_rt_lib0get_ref_arr(___nl__3, ___nl__23));
#line 134
c_rt_lib0delete(array0push(&___nl__22, ___nl__19));
#line 134
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__3, ___nl__23, ___nl__22));
#line 134
c_rt_lib0clear(&___nl__22);
#line 134
c_rt_lib0clear(&___nl__23);
#line 135
c_rt_lib0move(&___nl__21, c_rt_lib0next_iter(___nl__21));
#line 135
goto label_89;
#line 135
label_102:
#line 135
c_rt_lib0clear(&___nl__18);
#line 135
c_rt_lib0clear(&___nl__19);
#line 135
c_rt_lib0clear(&___nl__20);
#line 135
c_rt_lib0clear(&___nl__21);
#line 136
c_rt_lib0move(&___nl__18, c_rt_lib0hash_mk(0));
#line 136
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(283)));
#line 136
c_rt_lib0copy(&___nl__19, ___nl__18);
#line 136
c_rt_lib0array_set(&___nl__9, ___nl__20, ___nl__19);
#line 136
c_rt_lib0clear(&___nl__18);
#line 136
c_rt_lib0clear(&___nl__19);
#line 136
c_rt_lib0clear(&___nl__20);
#line 137
goto label_115;
#line 137
label_115:
#line 137
c_rt_lib0clear(&___nl__16);
#line 137
c_rt_lib0clear(&___nl__17);
#line 138
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 138
goto label_27;
#line 138
label_120:
#line 138
c_rt_lib0clear(&___nl__10);
#line 138
c_rt_lib0clear(&___nl__11);
#line 138
c_rt_lib0clear(&___nl__12);
#line 138
c_rt_lib0clear(&___nl__13);
#line 138
c_rt_lib0clear(&___nl__14);
#line 138
c_rt_lib0clear(&___nl__15);
#line 138
c_rt_lib0clear(&___nl__8);
#line 138
c_rt_lib0clear(&___nl__9);
#line 139
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 139
goto label_18;
#line 139
label_131:
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0clear(&___nl__5);
#line 139
c_rt_lib0clear(&___nl__6);
#line 139
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0clear(&___nl__0);
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
return ___nl__3;
#line 140
c_rt_lib0clear(&___nl__3);
#line 140
c_rt_lib0clear(&___nl__0);
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
return NULL;
}

ImmT unnecessary_commands_priv0visit_node(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 144
c_rt_lib0move(&___nl__3, hash0has_key(*___ref___2, ___nl__1));
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 144
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 144
c_rt_lib0clear(&___nl__0);
#line 144
c_rt_lib0clear(&___nl__1);
#line 144
c_rt_lib0clear(&___nl__3);
#line 144
return NULL;
#line 144
goto label_8;
#line 144
label_8:
#line 144
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 145
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__1, ___nl__3));
#line 145
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__1));
#line 146
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 146
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 146
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 146
label_17:
#line 146
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 146
if(c_rt_lib0check_true_native(___nl__8)){ goto label_24;}
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 147
c_rt_lib0delete(unnecessary_commands_priv0visit_node(___nl__0, ___nl__4, ___ref___2));
#line 148
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 148
goto label_17;
#line 148
label_24:
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
c_rt_lib0clear(&___nl__4);
#line 148
c_rt_lib0clear(&___nl__5);
#line 148
c_rt_lib0clear(&___nl__6);
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
c_rt_lib0clear(&___nl__8);
#line 148
c_rt_lib0clear(&___nl__0);
#line 148
c_rt_lib0clear(&___nl__1);
#line 148
return NULL;
}

ImmT unnecessary_commands_priv0build_block_state(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
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
#line 153
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 154
c_rt_lib0move(&___nl__6, hash0has_key(*___ref___4, ___nl__2));
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 154
if(c_rt_lib0check_true_native(___nl__6)){ goto label_12;}
#line 155
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 155
c_rt_lib0delete(hash0set_value(___ref___4, ___nl__2, ___nl__7));
#line 155
c_rt_lib0clear(&___nl__7);
#line 156
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 156
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 156
c_rt_lib0clear(&___nl__7);
#line 157
goto label_12;
#line 157
label_12:
#line 157
c_rt_lib0clear(&___nl__6);
#line 158
c_rt_lib0move(&___nl__6, array0len(___nl__3));
#line 159
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 159
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 159
label_17:
#line 159
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__7, ___nl__6));
#line 159
if(c_rt_lib0check_true_native(___nl__9)){ goto label_58;}
#line 160
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 160
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__10));
#line 160
label_22:
#line 160
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 160
if(c_rt_lib0check_true_native(___nl__11)){ goto label_51;}
#line 160
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 160
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__10, ___nl__11));
#line 161
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(*___ref___0, ___nl__2));
#line 161
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__7));
#line 161
c_rt_lib0move(&___nl__14, hash0has_key(___nl__15, ___nl__11));
#line 161
c_rt_lib0clear(&___nl__15);
#line 161
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 161
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 161
if(c_rt_lib0check_true_native(___nl__14)){ goto label_47;}
#line 162
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_arr(*___ref___0, ___nl__2));
#line 162
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_arr(___nl__15, ___nl__7));
#line 162
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 162
c_rt_lib0delete(hash0set_value(&___nl__16, ___nl__11, ___nl__17));
#line 162
c_rt_lib0clear(&___nl__17);
#line 162
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__15, ___nl__7, ___nl__16));
#line 162
c_rt_lib0delete(c_rt_lib0set_ref_arr(___ref___0, ___nl__2, ___nl__15));
#line 162
c_rt_lib0clear(&___nl__15);
#line 162
c_rt_lib0clear(&___nl__16);
#line 163
c_rt_lib0move(&___nl__15, c_rt_lib0get_true());
#line 163
c_rt_lib0copy(&___nl__5, ___nl__15);
#line 163
c_rt_lib0clear(&___nl__15);
#line 164
goto label_47;
#line 164
label_47:
#line 164
c_rt_lib0clear(&___nl__14);
#line 165
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 165
goto label_22;
#line 165
label_51:
#line 165
c_rt_lib0clear(&___nl__10);
#line 165
c_rt_lib0clear(&___nl__11);
#line 165
c_rt_lib0clear(&___nl__12);
#line 165
c_rt_lib0clear(&___nl__13);
#line 166
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 166
goto label_17;
#line 166
label_58:
#line 166
c_rt_lib0clear(&___nl__7);
#line 166
c_rt_lib0clear(&___nl__8);
#line 166
c_rt_lib0clear(&___nl__9);
#line 167
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 167
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 167
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 167
if(c_rt_lib0check_true_native(___nl__7)){ goto label_74;}
#line 167
c_rt_lib0clear(&___nl__1);
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
c_rt_lib0clear(&___nl__3);
#line 167
c_rt_lib0clear(&___nl__5);
#line 167
c_rt_lib0clear(&___nl__6);
#line 167
c_rt_lib0clear(&___nl__7);
#line 167
return NULL;
#line 167
goto label_74;
#line 167
label_74:
#line 167
c_rt_lib0clear(&___nl__7);
#line 168
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___0, ___nl__2));
#line 169
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__1, ___nl__2));
#line 169
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(280)));
#line 169
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__8));
#line 169
label_80:
#line 169
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 169
if(c_rt_lib0check_true_native(___nl__9)){ goto label_118;}
#line 169
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 169
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__8, ___nl__9));
#line 170
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__10, ___get_global_const(277)));
#line 170
if(c_rt_lib0check_true_native(___nl__12)){ goto label_92;}
#line 173
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__10, ___get_global_const(221)));
#line 173
if(c_rt_lib0check_true_native(___nl__12)){ goto label_107;}
#line 173
c_rt_lib0move(&___nl__12,___get_global_const(91));
#line 173
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__10));
#line 173
nl_die_arg(___nl__12);
#line 170
label_92:
#line 170
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__10, ___get_global_const(277)));
#line 171
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(0));
#line 171
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 171
c_rt_lib0array_set(&___nl__7, ___nl__9, ___nl__15);
#line 171
c_rt_lib0clear(&___nl__14);
#line 171
c_rt_lib0clear(&___nl__15);
#line 172
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_arr(___nl__7, ___nl__9));
#line 172
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 172
c_rt_lib0delete(hash0set_value(&___nl__14, ___nl__13, ___nl__15));
#line 172
c_rt_lib0clear(&___nl__15);
#line 172
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__7, ___nl__9, ___nl__14));
#line 172
c_rt_lib0clear(&___nl__14);
#line 172
c_rt_lib0clear(&___nl__13);
#line 173
goto label_114;
#line 173
label_107:
#line 174
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 174
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 174
c_rt_lib0array_set(&___nl__7, ___nl__9, ___nl__14);
#line 174
c_rt_lib0clear(&___nl__13);
#line 174
c_rt_lib0clear(&___nl__14);
#line 175
goto label_114;
#line 175
label_114:
#line 175
c_rt_lib0clear(&___nl__12);
#line 176
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 176
goto label_80;
#line 176
label_118:
#line 176
c_rt_lib0clear(&___nl__8);
#line 176
c_rt_lib0clear(&___nl__9);
#line 176
c_rt_lib0clear(&___nl__10);
#line 176
c_rt_lib0clear(&___nl__11);
#line 177
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__1, ___nl__2));
#line 177
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(234)));
#line 177
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 177
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 177
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 177
label_128:
#line 177
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 177
if(c_rt_lib0check_true_native(___nl__13)){ goto label_135;}
#line 177
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 178
c_rt_lib0delete(unnecessary_commands_priv0build_block_state(___ref___0, ___nl__1, ___nl__9, ___nl__7, ___ref___4));
#line 179
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 179
goto label_128;
#line 179
label_135:
#line 179
c_rt_lib0clear(&___nl__8);
#line 179
c_rt_lib0clear(&___nl__9);
#line 179
c_rt_lib0clear(&___nl__10);
#line 179
c_rt_lib0clear(&___nl__11);
#line 179
c_rt_lib0clear(&___nl__12);
#line 179
c_rt_lib0clear(&___nl__13);
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0clear(&___nl__6);
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
c_rt_lib0clear(&___nl__1);
#line 179
c_rt_lib0clear(&___nl__2);
#line 179
c_rt_lib0clear(&___nl__3);
#line 179
return NULL;
}


static ImmT ___const__[4];
static int ___const_init__ = 1;
void unnecessary_commands0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[3];


for(int i=0;i<3;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 3);
}
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
