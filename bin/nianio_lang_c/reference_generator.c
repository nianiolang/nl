
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "reference_generator.h"
#include "ptd.h"
#include "nast.h"
#include "reference_generator.h"
#line 1 "reference_generator.nl"

static ImmT *__const__f = NULL;
ImmT reference_generator_priv0__const__sim(int __nr);
ImmT reference_generator_priv0__const__sing(int __nr);

ImmT reference_generator_priv0process_module(ImmT * ___ref___0,ImmT ___nl__1);
ImmT reference_generator_priv0process_fun_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0add_ref(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);
ImmT reference_generator_priv0process_cmd(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_try(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_return(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_block(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_die(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_if(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_for(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_fora(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_forh(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_var_decl(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_type(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_rep(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_while(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_if_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_match(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_value(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT reference_generator_priv0process_bin_op(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);


ImmT reference_generator0fun_ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0fun_ref");
return reference_generator0fun_ref();}
ImmT reference_generator0fun_ref(){
return reference_generator_priv0__const__sing(0);}
ImmT reference_generator0fun_ref0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 11
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(reference_generator0module0ptr, ___get_global_const(155), ___get_global_const(132)));
#line 11
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 12
c_rt_lib0move(&___nl__3, ptd0sim());
#line 12
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(132), ___nl__2, ___get_global_const(93), ___nl__3));
#line 12
c_rt_lib0clear(&___nl__2);
#line 12
c_rt_lib0clear(&___nl__3);
#line 12
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 12
c_rt_lib0clear(&___nl__1);
#line 12
return ___nl__0;
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return NULL;
}

ImmT reference_generator0module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0module");
return reference_generator0module();}
ImmT reference_generator0module(){
return reference_generator_priv0__const__sing(1);}
ImmT reference_generator0module0cal() {
ImmT ___nl__0 = NULL;
#line 17
c_rt_lib0move(&___nl__0, ptd0sim());
#line 17
return ___nl__0;
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT reference_generator0refs0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0refs");
return reference_generator0refs();}
ImmT reference_generator0refs(){
return reference_generator_priv0__const__sing(2);}
ImmT reference_generator0refs0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(reference_generator0module0ptr, ___get_global_const(155), ___get_global_const(132)));
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 25
c_rt_lib0move(&___nl__6, ptd0sim());
#line 26
c_rt_lib0move(&___nl__7, ptd0sim());
#line 27
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(reference_generator0ref_type0ptr, ___get_global_const(155), ___get_global_const(1096)));
#line 27
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 27
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(4, ___get_global_const(132), ___nl__5, ___get_global_const(134), ___nl__6, ___get_global_const(919), ___nl__7, ___get_global_const(63), ___nl__8));
#line 27
c_rt_lib0clear(&___nl__5);
#line 27
c_rt_lib0clear(&___nl__6);
#line 27
c_rt_lib0clear(&___nl__7);
#line 27
c_rt_lib0clear(&___nl__8);
#line 27
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 27
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(reference_generator0deref_type0ptr, ___get_global_const(155), ___get_global_const(19)));
#line 30
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 31
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(reference_generator0deref_type0ptr, ___get_global_const(155), ___get_global_const(19)));
#line 31
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 31
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__6, ___get_global_const(152), ___nl__7));
#line 31
c_rt_lib0clear(&___nl__6);
#line 31
c_rt_lib0clear(&___nl__7);
#line 31
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 31
c_rt_lib0clear(&___nl__5);
#line 31
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(5), ___nl__3, ___get_global_const(66), ___nl__4));
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
c_rt_lib0clear(&___nl__4);
#line 31
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 31
c_rt_lib0clear(&___nl__1);
#line 31
return ___nl__0;
#line 31
c_rt_lib0clear(&___nl__0);
#line 31
return NULL;
}

ImmT reference_generator0deref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0deref_type");
return reference_generator0deref_type();}
ImmT reference_generator0deref_type(){
return reference_generator_priv0__const__sing(3);}
ImmT reference_generator0deref_type0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 38
c_rt_lib0move(&___nl__2, ptd0sim());
#line 38
c_rt_lib0move(&___nl__3, ptd0sim());
#line 38
c_rt_lib0move(&___nl__4, ptd0sim());
#line 38
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(134), ___nl__2, ___get_global_const(132), ___nl__3, ___get_global_const(1089), ___nl__4));
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__3);
#line 38
c_rt_lib0clear(&___nl__4);
#line 38
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
return ___nl__0;
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
return NULL;
}

ImmT reference_generator0ref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "reference_generator0ref_type");
return reference_generator0ref_type();}
ImmT reference_generator0ref_type(){
return reference_generator_priv0__const__sing(4);}
ImmT reference_generator0ref_type0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 43
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(reference_generator0module0ptr, ___get_global_const(155), ___get_global_const(132)));
#line 43
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(reference_generator0fun_ref0ptr, ___get_global_const(155), ___get_global_const(1097)));
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 45
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(reference_generator0fun_ref0ptr, ___get_global_const(155), ___get_global_const(1097)));
#line 45
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 45
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(150), ___nl__2, ___get_global_const(1098), ___nl__3, ___get_global_const(1099), ___nl__4));
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0clear(&___nl__4);
#line 45
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
return ___nl__0;
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
return NULL;
}

ImmT reference_generator0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "reference_generator0generate");
return reference_generator0generate(_tab[0]);}
ImmT reference_generator0generate(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 50
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 51
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 51
label_2:
#line 51
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 51
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 51
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 52
c_rt_lib0delete(reference_generator_priv0process_module(&___nl__1, ___nl__3));
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 53
goto label_2;
#line 53
label_10:
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
return ___nl__1;
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
return NULL;
}

ImmT reference_generator_priv0process_module(ImmT * ___ref___0,ImmT ___nl__1) {
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
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(150)));
#line 59
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 59
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 59
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 59
label_4:
#line 59
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 59
if(c_rt_lib0check_true_native(___nl__7)){ goto label_23;}
#line 59
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 61
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 62
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(134)));
#line 63
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 64
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 64
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(150), ___nl__12));
#line 64
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(4, ___get_global_const(132), ___nl__9, ___get_global_const(134), ___nl__10, ___get_global_const(919), ___nl__11, ___get_global_const(63), ___nl__12));
#line 64
c_rt_lib0clear(&___nl__9);
#line 64
c_rt_lib0clear(&___nl__10);
#line 64
c_rt_lib0clear(&___nl__11);
#line 64
c_rt_lib0clear(&___nl__12);
#line 64
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 64
c_rt_lib0delete(c_rt_lib0array_push(___ref___0, ___nl__8));
#line 64
c_rt_lib0clear(&___nl__8);
#line 66
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 66
goto label_4;
#line 66
label_23:
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__4);
#line 66
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0clear(&___nl__6);
#line 66
c_rt_lib0clear(&___nl__7);
#line 68
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(786)));
#line 68
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 68
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 68
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 68
label_34:
#line 68
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 68
if(c_rt_lib0check_true_native(___nl__7)){ goto label_43;}
#line 68
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 69
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 69
c_rt_lib0delete(reference_generator_priv0process_fun_def(___ref___0, ___nl__8, ___nl__3));
#line 69
c_rt_lib0clear(&___nl__8);
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 70
goto label_34;
#line 70
label_43:
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0clear(&___nl__4);
#line 70
c_rt_lib0clear(&___nl__5);
#line 70
c_rt_lib0clear(&___nl__6);
#line 70
c_rt_lib0clear(&___nl__7);
#line 70
c_rt_lib0clear(&___nl__1);
#line 70
return NULL;
}

ImmT reference_generator_priv0process_fun_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 76
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(134)));
#line 77
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 79
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(182)));
#line 79
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(183)));
#line 79
if(c_rt_lib0check_true_native(___nl__7)){ goto label_7;}
#line 79
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 79
goto label_9;
#line 79
label_7:
#line 79
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 79
label_9:
#line 80
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(93)));
#line 80
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(132), ___nl__7, ___get_global_const(93), ___nl__8));
#line 80
c_rt_lib0clear(&___nl__7);
#line 80
c_rt_lib0clear(&___nl__8);
#line 80
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1098), ___nl__6));
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(4, ___get_global_const(132), ___nl__1, ___get_global_const(134), ___nl__4, ___get_global_const(919), ___nl__5, ___get_global_const(63), ___nl__6));
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0clear(&___nl__6);
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 80
c_rt_lib0delete(c_rt_lib0array_push(___ref___0, ___nl__3));
#line 80
c_rt_lib0clear(&___nl__3);
#line 84
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(201)));
#line 84
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__3));
#line 84
c_rt_lib0clear(&___nl__3);
#line 85
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(787)));
#line 85
c_rt_lib0delete(reference_generator_priv0process_type(___ref___0, ___nl__1, ___nl__3));
#line 85
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(89)));
#line 86
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 86
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 86
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 86
label_32:
#line 86
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 86
if(c_rt_lib0check_true_native(___nl__8)){ goto label_41;}
#line 86
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 87
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 87
c_rt_lib0delete(reference_generator_priv0process_type(___ref___0, ___nl__1, ___nl__9));
#line 87
c_rt_lib0clear(&___nl__9);
#line 88
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 88
goto label_32;
#line 88
label_41:
#line 88
c_rt_lib0clear(&___nl__3);
#line 88
c_rt_lib0clear(&___nl__4);
#line 88
c_rt_lib0clear(&___nl__5);
#line 88
c_rt_lib0clear(&___nl__6);
#line 88
c_rt_lib0clear(&___nl__7);
#line 88
c_rt_lib0clear(&___nl__8);
#line 88
c_rt_lib0clear(&___nl__1);
#line 88
c_rt_lib0clear(&___nl__2);
#line 88
return NULL;
}

ImmT reference_generator_priv0add_ref(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(134)));
#line 95
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(919)));
#line 95
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(4, ___get_global_const(132), ___nl__1, ___get_global_const(134), ___nl__5, ___get_global_const(919), ___nl__6, ___get_global_const(63), ___nl__3));
#line 95
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0clear(&___nl__6);
#line 95
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 95
c_rt_lib0delete(c_rt_lib0array_push(___ref___0, ___nl__4));
#line 95
c_rt_lib0clear(&___nl__4);
#line 95
c_rt_lib0clear(&___nl__1);
#line 95
c_rt_lib0clear(&___nl__2);
#line 95
c_rt_lib0clear(&___nl__3);
#line 95
return NULL;
}

ImmT reference_generator_priv0process_cmd(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 101
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(201)));
#line 101
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(816)));
#line 101
if(c_rt_lib0check_true_native(___nl__4)){ goto label_44;}
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(817)));
#line 103
if(c_rt_lib0check_true_native(___nl__4)){ goto label_49;}
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(818)));
#line 105
if(c_rt_lib0check_true_native(___nl__4)){ goto label_54;}
#line 107
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(819)));
#line 107
if(c_rt_lib0check_true_native(___nl__4)){ goto label_59;}
#line 109
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(140)));
#line 109
if(c_rt_lib0check_true_native(___nl__4)){ goto label_64;}
#line 111
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(820)));
#line 111
if(c_rt_lib0check_true_native(___nl__4)){ goto label_69;}
#line 113
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(821)));
#line 113
if(c_rt_lib0check_true_native(___nl__4)){ goto label_74;}
#line 115
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(822)));
#line 115
if(c_rt_lib0check_true_native(___nl__4)){ goto label_79;}
#line 117
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(823)));
#line 117
if(c_rt_lib0check_true_native(___nl__4)){ goto label_84;}
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(824)));
#line 119
if(c_rt_lib0check_true_native(___nl__4)){ goto label_89;}
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(825)));
#line 120
if(c_rt_lib0check_true_native(___nl__4)){ goto label_91;}
#line 121
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(826)));
#line 121
if(c_rt_lib0check_true_native(___nl__4)){ goto label_93;}
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(192)));
#line 123
if(c_rt_lib0check_true_native(___nl__4)){ goto label_98;}
#line 125
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(829)));
#line 125
if(c_rt_lib0check_true_native(___nl__4)){ goto label_103;}
#line 127
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(95)));
#line 127
if(c_rt_lib0check_true_native(___nl__4)){ goto label_108;}
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(828)));
#line 129
if(c_rt_lib0check_true_native(___nl__4)){ goto label_113;}
#line 131
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(90)));
#line 131
if(c_rt_lib0check_true_native(___nl__4)){ goto label_118;}
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(827)));
#line 133
if(c_rt_lib0check_true_native(___nl__4)){ goto label_123;}
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(217)));
#line 135
if(c_rt_lib0check_true_native(___nl__4)){ goto label_128;}
#line 137
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(830)));
#line 137
if(c_rt_lib0check_true_native(___nl__4)){ goto label_133;}
#line 137
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 137
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 137
nl_die_arg(___nl__4);
#line 101
label_44:
#line 101
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(816)));
#line 102
c_rt_lib0delete(reference_generator_priv0process_if(___ref___0, ___nl__1, ___nl__5));
#line 102
c_rt_lib0clear(&___nl__5);
#line 103
goto label_135;
#line 103
label_49:
#line 103
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(817)));
#line 104
c_rt_lib0delete(reference_generator_priv0process_for(___ref___0, ___nl__1, ___nl__5));
#line 104
c_rt_lib0clear(&___nl__5);
#line 105
goto label_135;
#line 105
label_54:
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(818)));
#line 106
c_rt_lib0delete(reference_generator_priv0process_fora(___ref___0, ___nl__1, ___nl__5));
#line 106
c_rt_lib0clear(&___nl__5);
#line 107
goto label_135;
#line 107
label_59:
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(819)));
#line 108
c_rt_lib0delete(reference_generator_priv0process_forh(___ref___0, ___nl__1, ___nl__5));
#line 108
c_rt_lib0clear(&___nl__5);
#line 109
goto label_135;
#line 109
label_64:
#line 109
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(140)));
#line 110
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__5));
#line 110
c_rt_lib0clear(&___nl__5);
#line 111
goto label_135;
#line 111
label_69:
#line 111
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(820)));
#line 112
c_rt_lib0delete(reference_generator_priv0process_rep(___ref___0, ___nl__1, ___nl__5));
#line 112
c_rt_lib0clear(&___nl__5);
#line 113
goto label_135;
#line 113
label_74:
#line 113
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(821)));
#line 114
c_rt_lib0delete(reference_generator_priv0process_while(___ref___0, ___nl__1, ___nl__5));
#line 114
c_rt_lib0clear(&___nl__5);
#line 115
goto label_135;
#line 115
label_79:
#line 115
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(822)));
#line 116
c_rt_lib0delete(reference_generator_priv0process_if_mod(___ref___0, ___nl__1, ___nl__5));
#line 116
c_rt_lib0clear(&___nl__5);
#line 117
goto label_135;
#line 117
label_84:
#line 117
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(823)));
#line 118
c_rt_lib0delete(reference_generator_priv0process_if_mod(___ref___0, ___nl__1, ___nl__5));
#line 118
c_rt_lib0clear(&___nl__5);
#line 119
goto label_135;
#line 119
label_89:
#line 120
goto label_135;
#line 120
label_91:
#line 121
goto label_135;
#line 121
label_93:
#line 121
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(826)));
#line 122
c_rt_lib0delete(reference_generator_priv0process_match(___ref___0, ___nl__1, ___nl__5));
#line 122
c_rt_lib0clear(&___nl__5);
#line 123
goto label_135;
#line 123
label_98:
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(192)));
#line 124
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__5));
#line 124
c_rt_lib0clear(&___nl__5);
#line 125
goto label_135;
#line 125
label_103:
#line 125
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(829)));
#line 126
c_rt_lib0delete(reference_generator_priv0process_try(___ref___0, ___nl__1, ___nl__5));
#line 126
c_rt_lib0clear(&___nl__5);
#line 127
goto label_135;
#line 127
label_108:
#line 127
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(95)));
#line 128
c_rt_lib0delete(reference_generator_priv0process_try(___ref___0, ___nl__1, ___nl__5));
#line 128
c_rt_lib0clear(&___nl__5);
#line 129
goto label_135;
#line 129
label_113:
#line 129
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(828)));
#line 130
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___0, ___nl__1, ___nl__5));
#line 130
c_rt_lib0clear(&___nl__5);
#line 131
goto label_135;
#line 131
label_118:
#line 131
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(90)));
#line 132
c_rt_lib0delete(reference_generator_priv0process_return(___ref___0, ___nl__1, ___nl__5));
#line 132
c_rt_lib0clear(&___nl__5);
#line 133
goto label_135;
#line 133
label_123:
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(827)));
#line 134
c_rt_lib0delete(reference_generator_priv0process_block(___ref___0, ___nl__1, ___nl__5));
#line 134
c_rt_lib0clear(&___nl__5);
#line 135
goto label_135;
#line 135
label_128:
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(217)));
#line 136
c_rt_lib0delete(reference_generator_priv0process_die(___ref___0, ___nl__1, ___nl__5));
#line 136
c_rt_lib0clear(&___nl__5);
#line 137
goto label_135;
#line 137
label_133:
#line 138
goto label_135;
#line 138
label_135:
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
c_rt_lib0clear(&___nl__4);
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
return NULL;
}

ImmT reference_generator_priv0process_try(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(846)));
#line 142
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(845)));
#line 144
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 146
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(847)));
#line 146
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 146
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 146
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 146
nl_die_arg(___nl__3);
#line 142
label_9:
#line 142
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(846)));
#line 143
c_rt_lib0delete(reference_generator_priv0process_bin_op(___ref___0, ___nl__1, ___nl__4));
#line 143
c_rt_lib0clear(&___nl__4);
#line 144
goto label_24;
#line 144
label_14:
#line 144
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(845)));
#line 145
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___0, ___nl__1, ___nl__4));
#line 145
c_rt_lib0clear(&___nl__4);
#line 146
goto label_24;
#line 146
label_19:
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(847)));
#line 147
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__4));
#line 147
c_rt_lib0clear(&___nl__4);
#line 148
goto label_24;
#line 148
label_24:
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
c_rt_lib0clear(&___nl__1);
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
return NULL;
}

ImmT reference_generator_priv0process_return(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
#line 152
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__2));
#line 152
c_rt_lib0clear(&___nl__1);
#line 152
c_rt_lib0clear(&___nl__2);
#line 152
return NULL;
}

ImmT reference_generator_priv0process_block(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 156
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 156
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 156
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 156
label_3:
#line 156
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 156
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 156
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 157
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__3));
#line 158
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 158
goto label_3;
#line 158
label_10:
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0clear(&___nl__5);
#line 158
c_rt_lib0clear(&___nl__6);
#line 158
c_rt_lib0clear(&___nl__7);
#line 158
c_rt_lib0clear(&___nl__1);
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
return NULL;
}

ImmT reference_generator_priv0process_die(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 162
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 162
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 162
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 162
label_3:
#line 162
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 162
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 163
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 164
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 164
goto label_3;
#line 164
label_10:
#line 164
c_rt_lib0clear(&___nl__3);
#line 164
c_rt_lib0clear(&___nl__4);
#line 164
c_rt_lib0clear(&___nl__5);
#line 164
c_rt_lib0clear(&___nl__6);
#line 164
c_rt_lib0clear(&___nl__7);
#line 164
c_rt_lib0clear(&___nl__1);
#line 164
c_rt_lib0clear(&___nl__2);
#line 164
return NULL;
}

ImmT reference_generator_priv0process_if(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 168
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(831)));
#line 168
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 168
c_rt_lib0clear(&___nl__3);
#line 169
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(816)));
#line 169
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__3));
#line 169
c_rt_lib0clear(&___nl__3);
#line 170
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(832)));
#line 170
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 170
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 170
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 170
label_10:
#line 170
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 170
if(c_rt_lib0check_true_native(___nl__8)){ goto label_22;}
#line 170
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 171
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(831)));
#line 171
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__9));
#line 171
c_rt_lib0clear(&___nl__9);
#line 172
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 172
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__9));
#line 172
c_rt_lib0clear(&___nl__9);
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 173
goto label_10;
#line 173
label_22:
#line 173
c_rt_lib0clear(&___nl__3);
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0clear(&___nl__6);
#line 173
c_rt_lib0clear(&___nl__7);
#line 173
c_rt_lib0clear(&___nl__8);
#line 174
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(833)));
#line 174
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__3));
#line 174
c_rt_lib0clear(&___nl__3);
#line 174
c_rt_lib0clear(&___nl__1);
#line 174
c_rt_lib0clear(&___nl__2);
#line 174
return NULL;
}

ImmT reference_generator_priv0process_for(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 178
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(834)));
#line 178
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(828)));
#line 178
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 180
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(192)));
#line 180
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 180
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 180
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 180
nl_die_arg(___nl__4);
#line 178
label_8:
#line 178
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(828)));
#line 179
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___0, ___nl__1, ___nl__5));
#line 179
c_rt_lib0clear(&___nl__5);
#line 180
goto label_18;
#line 180
label_13:
#line 180
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(192)));
#line 181
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__5));
#line 181
c_rt_lib0clear(&___nl__5);
#line 182
goto label_18;
#line 182
label_18:
#line 182
c_rt_lib0clear(&___nl__3);
#line 182
c_rt_lib0clear(&___nl__4);
#line 184
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(835)));
#line 184
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 184
c_rt_lib0clear(&___nl__3);
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(831)));
#line 185
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 185
c_rt_lib0clear(&___nl__3);
#line 186
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(201)));
#line 186
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__3));
#line 186
c_rt_lib0clear(&___nl__3);
#line 186
c_rt_lib0clear(&___nl__1);
#line 186
c_rt_lib0clear(&___nl__2);
#line 186
return NULL;
}

ImmT reference_generator_priv0process_fora(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 190
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(835)));
#line 190
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___0, ___nl__1, ___nl__3));
#line 190
c_rt_lib0clear(&___nl__3);
#line 191
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(201)));
#line 191
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__3));
#line 191
c_rt_lib0clear(&___nl__3);
#line 192
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(3)));
#line 192
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 192
c_rt_lib0clear(&___nl__3);
#line 192
c_rt_lib0clear(&___nl__1);
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
return NULL;
}

ImmT reference_generator_priv0process_forh(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 196
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(329)));
#line 196
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___0, ___nl__1, ___nl__3));
#line 196
c_rt_lib0clear(&___nl__3);
#line 197
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 197
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___0, ___nl__1, ___nl__3));
#line 197
c_rt_lib0clear(&___nl__3);
#line 198
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(328)));
#line 198
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 198
c_rt_lib0clear(&___nl__3);
#line 199
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(201)));
#line 199
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__3));
#line 199
c_rt_lib0clear(&___nl__3);
#line 199
c_rt_lib0clear(&___nl__1);
#line 199
c_rt_lib0clear(&___nl__2);
#line 199
return NULL;
}

ImmT reference_generator_priv0process_var_decl(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 203
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(192)));
#line 203
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(192)));
#line 203
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 205
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(41)));
#line 205
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 205
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 205
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 205
nl_die_arg(___nl__4);
#line 203
label_8:
#line 203
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(192)));
#line 204
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__5));
#line 204
c_rt_lib0clear(&___nl__5);
#line 205
goto label_15;
#line 205
label_13:
#line 206
goto label_15;
#line 206
label_15:
#line 206
c_rt_lib0clear(&___nl__3);
#line 206
c_rt_lib0clear(&___nl__4);
#line 207
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 207
c_rt_lib0delete(reference_generator_priv0process_type(___ref___0, ___nl__1, ___nl__3));
#line 207
c_rt_lib0clear(&___nl__3);
#line 207
c_rt_lib0clear(&___nl__1);
#line 207
c_rt_lib0clear(&___nl__2);
#line 207
return NULL;
}

ImmT reference_generator_priv0process_type(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 211
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(63)));
#line 211
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(41)));
#line 213
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 213
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 213
nl_die_arg(___nl__3);
#line 211
label_7:
#line 211
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(63)));
#line 212
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__4));
#line 212
c_rt_lib0clear(&___nl__4);
#line 213
goto label_14;
#line 213
label_12:
#line 214
goto label_14;
#line 214
label_14:
#line 214
c_rt_lib0clear(&___nl__3);
#line 214
c_rt_lib0clear(&___nl__1);
#line 214
c_rt_lib0clear(&___nl__2);
#line 214
return NULL;
}

ImmT reference_generator_priv0process_rep(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 219
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(835)));
#line 219
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___0, ___nl__1, ___nl__3));
#line 219
c_rt_lib0clear(&___nl__3);
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(201)));
#line 220
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__3));
#line 220
c_rt_lib0clear(&___nl__3);
#line 221
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(836)));
#line 221
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 221
c_rt_lib0clear(&___nl__3);
#line 221
c_rt_lib0clear(&___nl__1);
#line 221
c_rt_lib0clear(&___nl__2);
#line 221
return NULL;
}

ImmT reference_generator_priv0process_while(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 225
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(201)));
#line 225
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__3));
#line 225
c_rt_lib0clear(&___nl__3);
#line 226
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(831)));
#line 226
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 226
c_rt_lib0clear(&___nl__3);
#line 226
c_rt_lib0clear(&___nl__1);
#line 226
c_rt_lib0clear(&___nl__2);
#line 226
return NULL;
}

ImmT reference_generator_priv0process_if_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 230
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(201)));
#line 230
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__3));
#line 230
c_rt_lib0clear(&___nl__3);
#line 231
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(831)));
#line 231
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 231
c_rt_lib0clear(&___nl__3);
#line 231
c_rt_lib0clear(&___nl__1);
#line 231
c_rt_lib0clear(&___nl__2);
#line 231
return NULL;
}

ImmT reference_generator_priv0process_match(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
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
#line 235
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 235
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 235
c_rt_lib0clear(&___nl__3);
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(839)));
#line 236
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 236
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 236
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 236
label_7:
#line 236
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 236
if(c_rt_lib0check_true_native(___nl__8)){ goto label_35;}
#line 236
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 237
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(840)));
#line 237
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(192)));
#line 237
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(192)));
#line 237
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 239
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(41)));
#line 239
if(c_rt_lib0check_true_native(___nl__10)){ goto label_25;}
#line 239
c_rt_lib0move(&___nl__10,___get_global_const(91));
#line 239
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 239
nl_die_arg(___nl__10);
#line 237
label_20:
#line 237
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(192)));
#line 238
c_rt_lib0delete(reference_generator_priv0process_var_decl(___ref___0, ___nl__1, ___nl__11));
#line 238
c_rt_lib0clear(&___nl__11);
#line 239
goto label_27;
#line 239
label_25:
#line 240
goto label_27;
#line 240
label_27:
#line 240
c_rt_lib0clear(&___nl__9);
#line 240
c_rt_lib0clear(&___nl__10);
#line 241
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 241
c_rt_lib0delete(reference_generator_priv0process_cmd(___ref___0, ___nl__1, ___nl__9));
#line 241
c_rt_lib0clear(&___nl__9);
#line 242
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 242
goto label_7;
#line 242
label_35:
#line 242
c_rt_lib0clear(&___nl__3);
#line 242
c_rt_lib0clear(&___nl__4);
#line 242
c_rt_lib0clear(&___nl__5);
#line 242
c_rt_lib0clear(&___nl__6);
#line 242
c_rt_lib0clear(&___nl__7);
#line 242
c_rt_lib0clear(&___nl__8);
#line 242
c_rt_lib0clear(&___nl__1);
#line 242
c_rt_lib0clear(&___nl__2);
#line 242
return NULL;
}

ImmT reference_generator_priv0process_value(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
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
#line 246
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(192)));
#line 246
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(853)));
#line 246
if(c_rt_lib0check_true_native(___nl__4)){ goto label_38;}
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(855)));
#line 247
if(c_rt_lib0check_true_native(___nl__4)){ goto label_42;}
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(830)));
#line 248
if(c_rt_lib0check_true_native(___nl__4)){ goto label_46;}
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(854)));
#line 249
if(c_rt_lib0check_true_native(___nl__4)){ goto label_48;}
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(840)));
#line 251
if(c_rt_lib0check_true_native(___nl__4)){ goto label_53;}
#line 253
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(196)));
#line 253
if(c_rt_lib0check_true_native(___nl__4)){ goto label_60;}
#line 254
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(770)));
#line 254
if(c_rt_lib0check_true_native(___nl__4)){ goto label_64;}
#line 255
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(204)));
#line 255
if(c_rt_lib0check_true_native(___nl__4)){ goto label_68;}
#line 259
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(205)));
#line 259
if(c_rt_lib0check_true_native(___nl__4)){ goto label_88;}
#line 263
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(848)));
#line 263
if(c_rt_lib0check_true_native(___nl__4)){ goto label_110;}
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(208)));
#line 264
if(c_rt_lib0check_true_native(___nl__4)){ goto label_114;}
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(857)));
#line 266
if(c_rt_lib0check_true_native(___nl__4)){ goto label_119;}
#line 268
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(858)));
#line 268
if(c_rt_lib0check_true_native(___nl__4)){ goto label_126;}
#line 273
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(811)));
#line 273
if(c_rt_lib0check_true_native(___nl__4)){ goto label_141;}
#line 281
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(859)));
#line 281
if(c_rt_lib0check_true_native(___nl__4)){ goto label_176;}
#line 283
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(860)));
#line 283
if(c_rt_lib0check_true_native(___nl__4)){ goto label_181;}
#line 285
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(856)));
#line 285
if(c_rt_lib0check_true_native(___nl__4)){ goto label_186;}
#line 285
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 285
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 285
nl_die_arg(___nl__4);
#line 246
label_38:
#line 246
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(853)));
#line 246
c_rt_lib0clear(&___nl__5);
#line 247
goto label_193;
#line 247
label_42:
#line 247
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(855)));
#line 247
c_rt_lib0clear(&___nl__5);
#line 248
goto label_193;
#line 248
label_46:
#line 249
goto label_193;
#line 249
label_48:
#line 249
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(854)));
#line 250
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__5));
#line 250
c_rt_lib0clear(&___nl__5);
#line 251
goto label_193;
#line 251
label_53:
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(840)));
#line 252
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(848)));
#line 252
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__6));
#line 252
c_rt_lib0clear(&___nl__6);
#line 252
c_rt_lib0clear(&___nl__5);
#line 253
goto label_193;
#line 253
label_60:
#line 253
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(196)));
#line 253
c_rt_lib0clear(&___nl__5);
#line 254
goto label_193;
#line 254
label_64:
#line 254
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(770)));
#line 254
c_rt_lib0clear(&___nl__5);
#line 255
goto label_193;
#line 255
label_68:
#line 255
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(204)));
#line 256
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 256
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 256
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 256
label_73:
#line 256
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 256
if(c_rt_lib0check_true_native(___nl__10)){ goto label_80;}
#line 256
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 257
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__6));
#line 258
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 258
goto label_73;
#line 258
label_80:
#line 258
c_rt_lib0clear(&___nl__6);
#line 258
c_rt_lib0clear(&___nl__7);
#line 258
c_rt_lib0clear(&___nl__8);
#line 258
c_rt_lib0clear(&___nl__9);
#line 258
c_rt_lib0clear(&___nl__10);
#line 258
c_rt_lib0clear(&___nl__5);
#line 259
goto label_193;
#line 259
label_88:
#line 259
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(205)));
#line 260
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 260
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 260
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 260
label_93:
#line 260
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 260
if(c_rt_lib0check_true_native(___nl__10)){ goto label_102;}
#line 260
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 261
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(198)));
#line 261
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__11));
#line 261
c_rt_lib0clear(&___nl__11);
#line 262
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 262
goto label_93;
#line 262
label_102:
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
c_rt_lib0clear(&___nl__5);
#line 263
goto label_193;
#line 263
label_110:
#line 263
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(848)));
#line 263
c_rt_lib0clear(&___nl__5);
#line 264
goto label_193;
#line 264
label_114:
#line 264
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(208)));
#line 265
c_rt_lib0delete(reference_generator_priv0process_bin_op(___ref___0, ___nl__1, ___nl__5));
#line 265
c_rt_lib0clear(&___nl__5);
#line 266
goto label_193;
#line 266
label_119:
#line 266
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(857)));
#line 267
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(198)));
#line 267
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__6));
#line 267
c_rt_lib0clear(&___nl__6);
#line 267
c_rt_lib0clear(&___nl__5);
#line 268
goto label_193;
#line 268
label_126:
#line 268
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(858)));
#line 269
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(195)));
#line 269
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(440)));
#line 270
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 271
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 271
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(132), ___nl__8, ___get_global_const(93), ___nl__9));
#line 271
c_rt_lib0clear(&___nl__8);
#line 271
c_rt_lib0clear(&___nl__9);
#line 271
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1099), ___nl__7));
#line 271
c_rt_lib0delete(reference_generator_priv0add_ref(___ref___0, ___nl__1, ___nl__6, ___nl__7));
#line 271
c_rt_lib0clear(&___nl__7);
#line 271
c_rt_lib0clear(&___nl__6);
#line 271
c_rt_lib0clear(&___nl__5);
#line 273
goto label_193;
#line 273
label_141:
#line 273
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(811)));
#line 274
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(195)));
#line 274
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(440)));
#line 275
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 276
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(132), ___nl__8, ___get_global_const(93), ___nl__9));
#line 276
c_rt_lib0clear(&___nl__8);
#line 276
c_rt_lib0clear(&___nl__9);
#line 276
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1099), ___nl__7));
#line 276
c_rt_lib0delete(reference_generator_priv0add_ref(___ref___0, ___nl__1, ___nl__6, ___nl__7));
#line 276
c_rt_lib0clear(&___nl__7);
#line 276
c_rt_lib0clear(&___nl__6);
#line 278
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(89)));
#line 278
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 278
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 278
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 278
label_158:
#line 278
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 278
if(c_rt_lib0check_true_native(___nl__11)){ goto label_167;}
#line 278
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 279
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 279
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__12));
#line 279
c_rt_lib0clear(&___nl__12);
#line 280
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 280
goto label_158;
#line 280
label_167:
#line 280
c_rt_lib0clear(&___nl__6);
#line 280
c_rt_lib0clear(&___nl__7);
#line 280
c_rt_lib0clear(&___nl__8);
#line 280
c_rt_lib0clear(&___nl__9);
#line 280
c_rt_lib0clear(&___nl__10);
#line 280
c_rt_lib0clear(&___nl__11);
#line 280
c_rt_lib0clear(&___nl__5);
#line 281
goto label_193;
#line 281
label_176:
#line 281
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(859)));
#line 282
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__5));
#line 282
c_rt_lib0clear(&___nl__5);
#line 283
goto label_193;
#line 283
label_181:
#line 283
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(860)));
#line 284
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__5));
#line 284
c_rt_lib0clear(&___nl__5);
#line 285
goto label_193;
#line 285
label_186:
#line 285
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(856)));
#line 286
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(230)));
#line 286
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__6));
#line 286
c_rt_lib0clear(&___nl__6);
#line 286
c_rt_lib0clear(&___nl__5);
#line 287
goto label_193;
#line 287
label_193:
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0clear(&___nl__4);
#line 287
c_rt_lib0clear(&___nl__1);
#line 287
c_rt_lib0clear(&___nl__2);
#line 287
return NULL;
}

ImmT reference_generator_priv0process_bin_op(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 291
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(230)));
#line 291
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 291
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(231)));
#line 292
c_rt_lib0delete(reference_generator_priv0process_value(___ref___0, ___nl__1, ___nl__3));
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0clear(&___nl__1);
#line 292
c_rt_lib0clear(&___nl__2);
#line 292
return NULL;
}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void reference_generator0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}
ImmT reference_generator_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT reference_generator_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = reference_generator0fun_ref0cal();
	break;
case 1:
	___const__[1] = reference_generator0module0cal();
	break;
case 2:
	___const__[2] = reference_generator0refs0cal();
	break;
case 3:
	___const__[3] = reference_generator0deref_type0cal();
	break;
case 4:
	___const__[4] = reference_generator0ref_type0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
