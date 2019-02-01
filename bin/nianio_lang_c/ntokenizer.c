
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "ntokenizer.h"
#include "ov.h"
#include "nast.h"
#include "ptd.h"
#include "array.h"
#include "hash.h"
#include "string.h"
#include "enum.h"
#include "c_std_lib.h"
#include "boolean_t.h"
#include "singleton.h"
#include "ntokenizer.h"
#line 1 "ntokenizer.nl"

static ImmT *__const__f = NULL;
ImmT ntokenizer_priv0__const__sim(int __nr);
ImmT ntokenizer_priv0__const__sing(int __nr);

ImmT ntokenizer_priv0get_keywords();
ImmT ntokenizer_priv0get_char_oper();
ImmT ntokenizer_priv0get_lett_oper();
ImmT ntokenizer_priv0get_char(ImmT * ___ref___0);
ImmT ntokenizer_priv0get_next_char(ImmT * ___ref___0);
ImmT ntokenizer_priv0eat_ws(ImmT * ___ref___0);
ImmT ntokenizer_priv0is_token(ImmT * ___ref___0);
ImmT ntokenizer_priv0is_hex_number(ImmT ___nl__0);
ImmT ntokenizer_priv0try_get_operator(ImmT ___nl__0,ImmT * ___ref___1);
ImmT ntokenizer_priv0get_next_token(ImmT * ___ref___0);


ImmT ntokenizer_priv0get_keywords(){
return ntokenizer_priv0__const__sing(0);}
ImmT ntokenizer_priv0get_keywords0cal() {
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
ImmT ___nl__24 = NULL;
ImmT ___nl__25 = NULL;
#line 19
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 20
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 21
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 22
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 23
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 24
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 25
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 26
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 27
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 28
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 29
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 30
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 31
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 32
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 33
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 34
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 35
c_rt_lib0move(&___nl__18,___get_global_const(2));
#line 36
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 37
c_rt_lib0move(&___nl__20,___get_global_const(2));
#line 38
c_rt_lib0move(&___nl__21,___get_global_const(2));
#line 39
c_rt_lib0move(&___nl__22,___get_global_const(2));
#line 40
c_rt_lib0move(&___nl__23,___get_global_const(2));
#line 41
c_rt_lib0move(&___nl__24,___get_global_const(2));
#line 42
c_rt_lib0move(&___nl__25,___get_global_const(2));
#line 42
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(24, ___get_global_const(947), ___nl__2, ___get_global_const(819), ___nl__3, ___get_global_const(820), ___nl__4, ___get_global_const(818), ___nl__5, ___get_global_const(821), ___nl__6, ___get_global_const(140), ___nl__7, ___get_global_const(822), ___nl__8, ___get_global_const(817), ___nl__9, ___get_global_const(833), ___nl__10, ___get_global_const(834), ___nl__11, ___get_global_const(849), ___nl__12, ___get_global_const(950), ___nl__13, ___get_global_const(5), ___nl__14, ___get_global_const(827), ___nl__15, ___get_global_const(902), ___nl__16, ___get_global_const(943), ___nl__17, ___get_global_const(964), ___nl__18, ___get_global_const(965), ___nl__19, ___get_global_const(826), ___nl__20, ___get_global_const(825), ___nl__21, ___get_global_const(90), ___nl__22, ___get_global_const(830), ___nl__23, ___get_global_const(95), ___nl__24, ___get_global_const(217), ___nl__25));
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0clear(&___nl__5);
#line 42
c_rt_lib0clear(&___nl__6);
#line 42
c_rt_lib0clear(&___nl__7);
#line 42
c_rt_lib0clear(&___nl__8);
#line 42
c_rt_lib0clear(&___nl__9);
#line 42
c_rt_lib0clear(&___nl__10);
#line 42
c_rt_lib0clear(&___nl__11);
#line 42
c_rt_lib0clear(&___nl__12);
#line 42
c_rt_lib0clear(&___nl__13);
#line 42
c_rt_lib0clear(&___nl__14);
#line 42
c_rt_lib0clear(&___nl__15);
#line 42
c_rt_lib0clear(&___nl__16);
#line 42
c_rt_lib0clear(&___nl__17);
#line 42
c_rt_lib0clear(&___nl__18);
#line 42
c_rt_lib0clear(&___nl__19);
#line 42
c_rt_lib0clear(&___nl__20);
#line 42
c_rt_lib0clear(&___nl__21);
#line 42
c_rt_lib0clear(&___nl__22);
#line 42
c_rt_lib0clear(&___nl__23);
#line 42
c_rt_lib0clear(&___nl__24);
#line 42
c_rt_lib0clear(&___nl__25);
#line 42
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 42
c_rt_lib0clear(&___nl__1);
#line 42
return ___nl__0;
#line 42
c_rt_lib0clear(&___nl__0);
#line 42
return NULL;
}

ImmT ntokenizer_priv0get_char_oper(){
return ntokenizer_priv0__const__sing(1);}
ImmT ntokenizer_priv0get_char_oper0cal() {
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
#line 47
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__0, c_rt_lib0array_mk(3, ___nl__1, ___nl__2, ___nl__3));
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0move(&___nl__2, nast0get_unary_ops());
#line 48
c_rt_lib0move(&___nl__3, nast0get_bin_ops());
#line 48
c_rt_lib0move(&___nl__4, nast0get_ternary_ops());
#line 48
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(3, ___nl__2, ___nl__3, ___nl__4));
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 48
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 48
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__1));
#line 48
label_17:
#line 48
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 48
if(c_rt_lib0check_true_native(___nl__6)){ goto label_57;}
#line 48
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 49
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__2));
#line 49
label_22:
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 49
if(c_rt_lib0check_true_native(___nl__7)){ goto label_51;}
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 49
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__2, ___nl__7));
#line 50
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 50
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 50
c_rt_lib0move(&___nl__11, string0substr(___nl__7, ___nl__12, ___nl__13));
#line 50
c_rt_lib0clear(&___nl__13);
#line 50
c_rt_lib0clear(&___nl__12);
#line 50
c_rt_lib0move(&___nl__10, string0is_letter(___nl__11));
#line 50
c_rt_lib0clear(&___nl__11);
#line 50
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 50
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 50
if(c_rt_lib0check_true_native(___nl__10)){ goto label_47;}
#line 50
c_rt_lib0move(&___nl__12, string0length(___nl__7));
#line 50
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 50
c_rt_lib0move(&___nl__12, c_rt_lib0sub_mod(___nl__12, ___nl__13));
#line 50
c_rt_lib0clear(&___nl__13);
#line 50
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_arr(___nl__0, ___nl__12));
#line 50
c_rt_lib0delete(array0push(&___nl__11, ___nl__7));
#line 50
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__12, ___nl__11));
#line 50
c_rt_lib0clear(&___nl__11);
#line 50
c_rt_lib0clear(&___nl__12);
#line 50
goto label_47;
#line 50
label_47:
#line 50
c_rt_lib0clear(&___nl__10);
#line 51
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 51
goto label_22;
#line 51
label_51:
#line 51
c_rt_lib0clear(&___nl__7);
#line 51
c_rt_lib0clear(&___nl__8);
#line 51
c_rt_lib0clear(&___nl__9);
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 52
goto label_17;
#line 52
label_57:
#line 52
c_rt_lib0clear(&___nl__1);
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__3);
#line 52
c_rt_lib0clear(&___nl__4);
#line 52
c_rt_lib0clear(&___nl__5);
#line 52
c_rt_lib0clear(&___nl__6);
#line 53
c_rt_lib0move(&___nl__2,___get_global_const(6));
#line 53
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_arr(___nl__0, ___nl__2));
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__2, ___nl__1));
#line 53
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0move(&___nl__2,___get_global_const(6));
#line 54
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_arr(___nl__0, ___nl__2));
#line 54
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__2, ___nl__1));
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0move(&___nl__3,___get_global_const(6));
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__2));
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
return ___nl__1;
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
return NULL;
}

ImmT ntokenizer_priv0get_lett_oper(){
return ntokenizer_priv0__const__sing(2);}
ImmT ntokenizer_priv0get_lett_oper0cal() {
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
#line 59
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 60
c_rt_lib0move(&___nl__2, nast0get_unary_ops());
#line 60
c_rt_lib0move(&___nl__3, nast0get_bin_ops());
#line 60
c_rt_lib0move(&___nl__4, nast0get_ternary_ops());
#line 60
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(3, ___nl__2, ___nl__3, ___nl__4));
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
c_rt_lib0clear(&___nl__3);
#line 60
c_rt_lib0clear(&___nl__4);
#line 60
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 60
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 60
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__1));
#line 60
label_11:
#line 60
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 60
if(c_rt_lib0check_true_native(___nl__6)){ goto label_44;}
#line 60
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 61
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__2));
#line 61
label_16:
#line 61
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 61
if(c_rt_lib0check_true_native(___nl__7)){ goto label_38;}
#line 61
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 61
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__2, ___nl__7));
#line 62
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 62
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 62
c_rt_lib0move(&___nl__11, string0substr(___nl__7, ___nl__12, ___nl__13));
#line 62
c_rt_lib0clear(&___nl__13);
#line 62
c_rt_lib0clear(&___nl__12);
#line 62
c_rt_lib0move(&___nl__10, string0is_letter(___nl__11));
#line 62
c_rt_lib0clear(&___nl__11);
#line 62
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 62
if(c_rt_lib0check_true_native(___nl__10)){ goto label_34;}
#line 62
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 62
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__7, ___nl__11));
#line 62
c_rt_lib0clear(&___nl__11);
#line 62
goto label_34;
#line 62
label_34:
#line 62
c_rt_lib0clear(&___nl__10);
#line 63
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 63
goto label_16;
#line 63
label_38:
#line 63
c_rt_lib0clear(&___nl__7);
#line 63
c_rt_lib0clear(&___nl__8);
#line 63
c_rt_lib0clear(&___nl__9);
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 64
goto label_11;
#line 64
label_44:
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
c_rt_lib0clear(&___nl__3);
#line 64
c_rt_lib0clear(&___nl__4);
#line 64
c_rt_lib0clear(&___nl__5);
#line 64
c_rt_lib0clear(&___nl__6);
#line 65
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 65
c_rt_lib0clear(&___nl__0);
#line 65
return ___nl__1;
#line 65
c_rt_lib0clear(&___nl__1);
#line 65
c_rt_lib0clear(&___nl__0);
#line 65
return NULL;
}

ImmT ntokenizer0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0state_t");
return ntokenizer0state_t();}
ImmT ntokenizer0state_t(){
return ntokenizer_priv0__const__sing(3);}
ImmT ntokenizer0state_t0cal() {
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
#line 70
c_rt_lib0move(&___nl__3, ptd0sim());
#line 70
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 70
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0move(&___nl__3, ptd0sim());
#line 72
c_rt_lib0move(&___nl__4, ptd0sim());
#line 73
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(ntokenizer0token_t0ptr, ___get_global_const(944), ___get_global_const(971)));
#line 73
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 74
c_rt_lib0move(&___nl__6, ptd0sim());
#line 75
c_rt_lib0move(&___nl__7, ptd0sim());
#line 76
c_rt_lib0move(&___nl__8, ptd0sim());
#line 77
c_rt_lib0move(&___nl__11, ptd0sim());
#line 77
c_rt_lib0move(&___nl__12, ptd0sim());
#line 77
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(134), ___nl__11, ___get_global_const(920), ___nl__12));
#line 77
c_rt_lib0clear(&___nl__11);
#line 77
c_rt_lib0clear(&___nl__12);
#line 77
c_rt_lib0move(&___nl__9, ptd0rec(___nl__10));
#line 77
c_rt_lib0clear(&___nl__10);
#line 78
c_rt_lib0move(&___nl__12, ptd0sim());
#line 78
c_rt_lib0move(&___nl__13, ptd0sim());
#line 78
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(134), ___nl__12, ___get_global_const(920), ___nl__13));
#line 78
c_rt_lib0clear(&___nl__12);
#line 78
c_rt_lib0clear(&___nl__13);
#line 78
c_rt_lib0move(&___nl__10, ptd0rec(___nl__11));
#line 78
c_rt_lib0clear(&___nl__11);
#line 79
c_rt_lib0move(&___nl__11, ptd0sim());
#line 79
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(10, ___get_global_const(972), ___nl__2, ___get_global_const(241), ___nl__3, ___get_global_const(242), ___nl__4, ___get_global_const(63), ___nl__5, ___get_global_const(973), ___nl__6, ___get_global_const(974), ___nl__7, ___get_global_const(975), ___nl__8, ___get_global_const(976), ___nl__9, ___get_global_const(977), ___nl__10, ___get_global_const(978), ___nl__11));
#line 79
c_rt_lib0clear(&___nl__2);
#line 79
c_rt_lib0clear(&___nl__3);
#line 79
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0clear(&___nl__5);
#line 79
c_rt_lib0clear(&___nl__6);
#line 79
c_rt_lib0clear(&___nl__7);
#line 79
c_rt_lib0clear(&___nl__8);
#line 79
c_rt_lib0clear(&___nl__9);
#line 79
c_rt_lib0clear(&___nl__10);
#line 79
c_rt_lib0clear(&___nl__11);
#line 79
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 79
c_rt_lib0clear(&___nl__1);
#line 79
return ___nl__0;
#line 79
c_rt_lib0clear(&___nl__0);
#line 79
return NULL;
}

ImmT ntokenizer0token_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0token_t");
return ntokenizer0token_t();}
ImmT ntokenizer0token_t(){
return ntokenizer_priv0__const__sing(4);}
ImmT ntokenizer0token_t0cal() {
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
#line 85
c_rt_lib0move(&___nl__2, ptd0none());
#line 86
c_rt_lib0move(&___nl__3, ptd0none());
#line 87
c_rt_lib0move(&___nl__4, ptd0none());
#line 88
c_rt_lib0move(&___nl__5, ptd0none());
#line 89
c_rt_lib0move(&___nl__6, ptd0none());
#line 90
c_rt_lib0move(&___nl__7, ptd0none());
#line 91
c_rt_lib0move(&___nl__8, ptd0none());
#line 92
c_rt_lib0move(&___nl__9, ptd0none());
#line 93
c_rt_lib0move(&___nl__10, ptd0none());
#line 93
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(9, ___get_global_const(906), ___nl__2, ___get_global_const(979), ___nl__3, ___get_global_const(961), ___nl__4, ___get_global_const(959), ___nl__5, ___get_global_const(963), ___nl__6, ___get_global_const(948), ___nl__7, ___get_global_const(960), ___nl__8, ___get_global_const(771), ___nl__9, ___get_global_const(112), ___nl__10));
#line 93
c_rt_lib0clear(&___nl__2);
#line 93
c_rt_lib0clear(&___nl__3);
#line 93
c_rt_lib0clear(&___nl__4);
#line 93
c_rt_lib0clear(&___nl__5);
#line 93
c_rt_lib0clear(&___nl__6);
#line 93
c_rt_lib0clear(&___nl__7);
#line 93
c_rt_lib0clear(&___nl__8);
#line 93
c_rt_lib0clear(&___nl__9);
#line 93
c_rt_lib0clear(&___nl__10);
#line 93
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 93
c_rt_lib0clear(&___nl__1);
#line 93
return ___nl__0;
#line 93
c_rt_lib0clear(&___nl__0);
#line 93
return NULL;
}

ImmT ntokenizer0init0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0init");
return ntokenizer0init(_tab[0]);}
ImmT ntokenizer0init(ImmT ___nl__0) {
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
#line 99
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__0));
#line 100
c_rt_lib0move(&___nl__3, string0length(___nl__0));
#line 101
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 102
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(906)));
#line 103
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 104
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 105
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 106
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 106
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 106
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(134), ___nl__10, ___get_global_const(920), ___nl__11));
#line 106
c_rt_lib0clear(&___nl__10);
#line 106
c_rt_lib0clear(&___nl__11);
#line 107
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 107
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 107
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(134), ___nl__11, ___get_global_const(920), ___nl__12));
#line 107
c_rt_lib0clear(&___nl__11);
#line 107
c_rt_lib0clear(&___nl__12);
#line 108
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 108
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(10, ___get_global_const(972), ___nl__2, ___get_global_const(242), ___nl__3, ___get_global_const(241), ___nl__4, ___get_global_const(63), ___nl__5, ___get_global_const(973), ___nl__6, ___get_global_const(974), ___nl__7, ___get_global_const(975), ___nl__8, ___get_global_const(976), ___nl__9, ___get_global_const(977), ___nl__10, ___get_global_const(978), ___nl__11));
#line 108
c_rt_lib0clear(&___nl__2);
#line 108
c_rt_lib0clear(&___nl__3);
#line 108
c_rt_lib0clear(&___nl__4);
#line 108
c_rt_lib0clear(&___nl__5);
#line 108
c_rt_lib0clear(&___nl__6);
#line 108
c_rt_lib0clear(&___nl__7);
#line 108
c_rt_lib0clear(&___nl__8);
#line 108
c_rt_lib0clear(&___nl__9);
#line 108
c_rt_lib0clear(&___nl__10);
#line 108
c_rt_lib0clear(&___nl__11);
#line 110
c_rt_lib0delete(ntokenizer_priv0get_next_token(&___nl__1));
#line 111
c_rt_lib0clear(&___nl__0);
#line 111
return ___nl__1;
#line 111
c_rt_lib0clear(&___nl__1);
#line 111
c_rt_lib0clear(&___nl__0);
#line 111
return NULL;
}

ImmT ntokenizer0get_last_comment0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_last_comment");
return ntokenizer0get_last_comment(_tab[0]);}
ImmT ntokenizer0get_last_comment(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 115
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(978)));
#line 115
c_rt_lib0clear(&___nl__0);
#line 115
return ___nl__1;
#line 115
c_rt_lib0clear(&___nl__1);
#line 115
c_rt_lib0clear(&___nl__0);
#line 115
return NULL;
}

ImmT ntokenizer_priv0get_char(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 119
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(972)));
#line 119
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 119
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 119
c_rt_lib0move(&___nl__1, c_std_lib0fast_substr(___nl__2, ___nl__3, ___nl__4));
#line 119
c_rt_lib0clear(&___nl__4);
#line 119
c_rt_lib0clear(&___nl__3);
#line 119
c_rt_lib0clear(&___nl__2);
#line 119
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 119
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 119
c_rt_lib0clear(&___nl__2);
#line 119
return ___nl__1;
#line 119
c_rt_lib0clear(&___nl__1);
#line 119
return NULL;
}

ImmT ntokenizer_priv0get_next_char(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 123
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(242)));
#line 123
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 123
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 123
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0move(&___nl__1, c_rt_lib0le(___nl__1, ___nl__2));
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 123
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 123
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
return ___nl__2;
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
goto label_14;
#line 123
label_14:
#line 123
c_rt_lib0clear(&___nl__1);
#line 124
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(972)));
#line 124
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 124
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 124
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 124
c_rt_lib0clear(&___nl__4);
#line 124
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 124
c_rt_lib0move(&___nl__1, c_std_lib0fast_substr(___nl__2, ___nl__3, ___nl__4));
#line 124
c_rt_lib0clear(&___nl__4);
#line 124
c_rt_lib0clear(&___nl__3);
#line 124
c_rt_lib0clear(&___nl__2);
#line 124
return ___nl__1;
#line 124
c_rt_lib0clear(&___nl__1);
#line 124
return NULL;
}

ImmT ntokenizer_priv0eat_ws(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 128
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 128
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 128
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(978), ___nl__2);
#line 128
c_rt_lib0clear(&___nl__1);
#line 128
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0move(&___nl__1, c_rt_lib0get_true());
#line 130
label_6:
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 131
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(242)));
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__3));
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 131
if(c_rt_lib0check_true_native(___nl__2)){ goto label_17;}
#line 131
c_rt_lib0clear(&___nl__1);
#line 131
c_rt_lib0clear(&___nl__2);
#line 131
return NULL;
#line 131
goto label_17;
#line 131
label_17:
#line 131
c_rt_lib0clear(&___nl__2);
#line 132
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_char(___ref___0));
#line 133
c_rt_lib0move(&___nl__3, string0ord(___nl__2));
#line 134
c_rt_lib0move(&___nl__4,___get_global_const(243));
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 134
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 134
c_rt_lib0move(&___nl__4,___get_global_const(238));
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 134
label_26:
#line 134
if(c_rt_lib0check_true_native(___nl__4)){ goto label_30;}
#line 134
c_rt_lib0move(&___nl__4,___get_global_const(236));
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 134
label_30:
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 134
if(c_rt_lib0check_true_native(___nl__4)){ goto label_46;}
#line 135
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 135
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 135
c_rt_lib0move(&___nl__7,___get_global_const(241));
#line 135
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 135
c_rt_lib0clear(&___nl__7);
#line 135
c_rt_lib0clear(&___nl__5);
#line 135
c_rt_lib0clear(&___nl__6);
#line 136
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 136
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 136
c_rt_lib0clear(&___nl__5);
#line 137
goto label_176;
#line 137
label_46:
#line 137
c_rt_lib0move(&___nl__4,___get_global_const(237));
#line 137
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 137
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 137
if(c_rt_lib0check_true_native(___nl__4)){ goto label_78;}
#line 138
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 138
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 138
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 138
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 138
c_rt_lib0move(&___nl__7,___get_global_const(241));
#line 138
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 138
c_rt_lib0clear(&___nl__7);
#line 138
c_rt_lib0clear(&___nl__5);
#line 138
c_rt_lib0clear(&___nl__6);
#line 139
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 139
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 139
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(975), ___nl__6);
#line 139
c_rt_lib0clear(&___nl__5);
#line 139
c_rt_lib0clear(&___nl__6);
#line 140
c_rt_lib0move(&___nl__5,___get_global_const(974));
#line 140
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 140
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 140
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 140
c_rt_lib0move(&___nl__7,___get_global_const(974));
#line 140
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 140
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0clear(&___nl__5);
#line 140
c_rt_lib0clear(&___nl__6);
#line 141
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 141
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 141
c_rt_lib0clear(&___nl__5);
#line 142
goto label_176;
#line 142
label_78:
#line 142
c_rt_lib0move(&___nl__4,___get_global_const(980));
#line 142
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 142
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 142
if(c_rt_lib0check_true_native(___nl__4)){ goto label_169;}
#line 143
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 143
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 143
if(c_rt_lib0check_true_native(___nl__5)){ goto label_94;}
#line 144
c_rt_lib0move(&___nl__6,___get_global_const(978));
#line 144
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 144
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__2));
#line 144
c_rt_lib0move(&___nl__7,___get_global_const(978));
#line 144
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 144
c_rt_lib0clear(&___nl__7);
#line 144
c_rt_lib0clear(&___nl__6);
#line 145
goto label_94;
#line 145
label_94:
#line 145
c_rt_lib0clear(&___nl__5);
#line 146
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 146
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 146
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 146
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 146
c_rt_lib0move(&___nl__7,___get_global_const(241));
#line 146
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 146
c_rt_lib0clear(&___nl__7);
#line 146
c_rt_lib0clear(&___nl__5);
#line 146
c_rt_lib0clear(&___nl__6);
#line 147
label_105:
#line 148
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(242)));
#line 148
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 148
c_rt_lib0clear(&___nl__6);
#line 148
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 148
if(c_rt_lib0check_true_native(___nl__5)){ goto label_119;}
#line 148
c_rt_lib0clear(&___nl__1);
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
c_rt_lib0clear(&___nl__4);
#line 148
c_rt_lib0clear(&___nl__5);
#line 148
return NULL;
#line 148
goto label_119;
#line 148
label_119:
#line 148
c_rt_lib0clear(&___nl__5);
#line 149
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_char(___ref___0));
#line 150
c_rt_lib0move(&___nl__6,___get_global_const(241));
#line 150
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 150
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 150
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 150
c_rt_lib0move(&___nl__8,___get_global_const(241));
#line 150
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__6));
#line 150
c_rt_lib0clear(&___nl__8);
#line 150
c_rt_lib0clear(&___nl__6);
#line 150
c_rt_lib0clear(&___nl__7);
#line 151
c_rt_lib0copy(&___nl__6, ___nl__1);
#line 151
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 151
if(c_rt_lib0check_true_native(___nl__6)){ goto label_142;}
#line 152
c_rt_lib0move(&___nl__7,___get_global_const(978));
#line 152
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 152
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__5));
#line 152
c_rt_lib0move(&___nl__8,___get_global_const(978));
#line 152
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__7));
#line 152
c_rt_lib0clear(&___nl__8);
#line 152
c_rt_lib0clear(&___nl__7);
#line 153
goto label_142;
#line 153
label_142:
#line 153
c_rt_lib0clear(&___nl__6);
#line 154
c_rt_lib0move(&___nl__6, string0ord(___nl__5));
#line 154
c_rt_lib0move(&___nl__7,___get_global_const(237));
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__7));
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 154
if(c_rt_lib0check_true_native(___nl__6)){ goto label_154;}
#line 154
c_rt_lib0clear(&___nl__5);
#line 154
c_rt_lib0clear(&___nl__6);
#line 154
goto label_158;
#line 154
goto label_154;
#line 154
label_154:
#line 154
c_rt_lib0clear(&___nl__6);
#line 154
c_rt_lib0clear(&___nl__5);
#line 147
goto label_105;
#line 147
label_158:
#line 156
c_rt_lib0move(&___nl__5,___get_global_const(974));
#line 156
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 156
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 156
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 156
c_rt_lib0move(&___nl__7,___get_global_const(974));
#line 156
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 156
c_rt_lib0clear(&___nl__7);
#line 156
c_rt_lib0clear(&___nl__5);
#line 156
c_rt_lib0clear(&___nl__6);
#line 157
goto label_176;
#line 157
label_169:
#line 158
c_rt_lib0clear(&___nl__1);
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
return NULL;
#line 159
goto label_176;
#line 159
label_176:
#line 159
c_rt_lib0clear(&___nl__4);
#line 159
c_rt_lib0clear(&___nl__2);
#line 159
c_rt_lib0clear(&___nl__3);
#line 130
goto label_6;
#line 130
c_rt_lib0clear(&___nl__1);
#line 130
return NULL;
}

ImmT ntokenizer_priv0is_token(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 164
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(63)));
#line 164
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(979)));
#line 164
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 164
if(c_rt_lib0check_true_native(___nl__1)){ goto label_9;}
#line 164
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 164
c_rt_lib0clear(&___nl__1);
#line 164
return ___nl__2;
#line 164
c_rt_lib0clear(&___nl__2);
#line 164
goto label_9;
#line 164
label_9:
#line 164
c_rt_lib0clear(&___nl__1);
#line 165
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(63)));
#line 165
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(961)));
#line 165
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 165
if(c_rt_lib0check_true_native(___nl__1)){ goto label_20;}
#line 165
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 165
c_rt_lib0clear(&___nl__1);
#line 165
return ___nl__2;
#line 165
c_rt_lib0clear(&___nl__2);
#line 165
goto label_20;
#line 165
label_20:
#line 165
c_rt_lib0clear(&___nl__1);
#line 166
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(63)));
#line 166
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(963)));
#line 166
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 166
if(c_rt_lib0check_true_native(___nl__1)){ goto label_31;}
#line 166
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 166
c_rt_lib0clear(&___nl__1);
#line 166
return ___nl__2;
#line 166
c_rt_lib0clear(&___nl__2);
#line 166
goto label_31;
#line 166
label_31:
#line 166
c_rt_lib0clear(&___nl__1);
#line 167
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 167
return ___nl__1;
#line 167
c_rt_lib0clear(&___nl__1);
#line 167
return NULL;
}

ImmT ntokenizer0eat_token0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0eat_token");
return ntokenizer0eat_token(&_tab[0], _tab[1]);}
ImmT ntokenizer0eat_token(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(973)));
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 171
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 171
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 171
c_rt_lib0move(&___nl__2, ntokenizer_priv0is_token(___ref___0));
#line 171
label_5:
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 171
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 172
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___0));
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 173
c_rt_lib0clear(&___nl__1);
#line 173
c_rt_lib0clear(&___nl__2);
#line 173
return ___nl__3;
#line 173
c_rt_lib0clear(&___nl__3);
#line 174
goto label_16;
#line 174
label_16:
#line 174
c_rt_lib0clear(&___nl__2);
#line 175
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 175
c_rt_lib0clear(&___nl__1);
#line 175
return ___nl__2;
#line 175
c_rt_lib0clear(&___nl__2);
#line 175
c_rt_lib0clear(&___nl__1);
#line 175
return NULL;
}

ImmT ntokenizer0get_line0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_line");
return ntokenizer0get_line(_tab[0]);}
ImmT ntokenizer0get_line(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 179
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(974)));
#line 179
c_rt_lib0clear(&___nl__0);
#line 179
return ___nl__1;
#line 179
c_rt_lib0clear(&___nl__1);
#line 179
c_rt_lib0clear(&___nl__0);
#line 179
return NULL;
}

ImmT ntokenizer0get_column0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_column");
return ntokenizer0get_column(_tab[0]);}
ImmT ntokenizer0get_column(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 182
c_rt_lib0move(&___nl__1,___get_global_const(1));
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(241)));
#line 182
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__2));
#line 182
c_rt_lib0clear(&___nl__2);
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(975)));
#line 182
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 182
c_rt_lib0clear(&___nl__2);
#line 182
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(973)));
#line 182
c_rt_lib0move(&___nl__2, string0length(___nl__3));
#line 182
c_rt_lib0clear(&___nl__3);
#line 182
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 182
c_rt_lib0clear(&___nl__2);
#line 182
c_rt_lib0clear(&___nl__0);
#line 182
return ___nl__1;
#line 182
c_rt_lib0clear(&___nl__1);
#line 182
c_rt_lib0clear(&___nl__0);
#line 182
return NULL;
}

ImmT ntokenizer0get_place0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_place");
return ntokenizer0get_place(&_tab[0]);}
ImmT ntokenizer0get_place(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
#line 185
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(976)));
#line 185
return ___nl__1;
#line 185
c_rt_lib0clear(&___nl__1);
#line 185
return NULL;
}

ImmT ntokenizer0get_place_ws0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_place_ws");
return ntokenizer0get_place_ws(&_tab[0]);}
ImmT ntokenizer0get_place_ws(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
#line 189
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(977)));
#line 189
return ___nl__1;
#line 189
c_rt_lib0clear(&___nl__1);
#line 189
return NULL;
}

ImmT ntokenizer0get_token0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_token");
return ntokenizer0get_token(&_tab[0]);}
ImmT ntokenizer0get_token(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
#line 193
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(973)));
#line 193
return ___nl__1;
#line 193
c_rt_lib0clear(&___nl__1);
#line 193
return NULL;
}

ImmT ntokenizer0is_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0is_type");
return ntokenizer0is_type(&_tab[0], _tab[1]);}
ImmT ntokenizer0is_type(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 197
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(63)));
#line 197
c_rt_lib0move(&___nl__2, enum0eq(___nl__3, ___nl__1));
#line 197
c_rt_lib0clear(&___nl__3);
#line 197
c_rt_lib0clear(&___nl__1);
#line 197
return ___nl__2;
#line 197
c_rt_lib0clear(&___nl__2);
#line 197
c_rt_lib0clear(&___nl__1);
#line 197
return NULL;
}

ImmT ntokenizer0next_is0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0next_is");
return ntokenizer0next_is(&_tab[0], _tab[1]);}
ImmT ntokenizer0next_is(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 201
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(973)));
#line 201
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 201
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 201
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 201
c_rt_lib0move(&___nl__2, ntokenizer_priv0is_token(___ref___0));
#line 201
label_5:
#line 201
c_rt_lib0clear(&___nl__3);
#line 201
c_rt_lib0clear(&___nl__1);
#line 201
return ___nl__2;
#line 201
c_rt_lib0clear(&___nl__2);
#line 201
c_rt_lib0clear(&___nl__1);
#line 201
return NULL;
}

ImmT ntokenizer0eat_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0eat_type");
return ntokenizer0eat_type(&_tab[0], _tab[1]);}
ImmT ntokenizer0eat_type(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 205
c_rt_lib0move(&___nl__2, ntokenizer0is_type(___ref___0, ___nl__1));
#line 205
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 205
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 205
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 205
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 205
nl_die_arg(___nl__3);
#line 205
goto label_7;
#line 205
label_7:
#line 205
c_rt_lib0clear(&___nl__2);
#line 205
c_rt_lib0clear(&___nl__3);
#line 206
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(973)));
#line 207
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___0));
#line 208
c_rt_lib0clear(&___nl__1);
#line 208
return ___nl__2;
#line 208
c_rt_lib0clear(&___nl__2);
#line 208
c_rt_lib0clear(&___nl__1);
#line 208
return NULL;
}

ImmT ntokenizer0is_text0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0is_text");
return ntokenizer0is_text(&_tab[0]);}
ImmT ntokenizer0is_text(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 212
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 212
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 212
c_rt_lib0clear(&___nl__2);
#line 212
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 212
if(c_rt_lib0check_true_native(___nl__1)){ goto label_10;}
#line 212
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 212
c_rt_lib0clear(&___nl__1);
#line 212
return ___nl__2;
#line 212
c_rt_lib0clear(&___nl__2);
#line 212
goto label_10;
#line 212
label_10:
#line 212
c_rt_lib0clear(&___nl__1);
#line 213
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(963)));
#line 213
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 213
c_rt_lib0clear(&___nl__2);
#line 213
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 213
if(c_rt_lib0check_true_native(___nl__1)){ goto label_22;}
#line 213
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 213
c_rt_lib0clear(&___nl__1);
#line 213
return ___nl__2;
#line 213
c_rt_lib0clear(&___nl__2);
#line 213
goto label_22;
#line 213
label_22:
#line 213
c_rt_lib0clear(&___nl__1);
#line 214
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(961)));
#line 214
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 214
c_rt_lib0clear(&___nl__2);
#line 214
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 214
if(c_rt_lib0check_true_native(___nl__1)){ goto label_49;}
#line 215
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(973)));
#line 215
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 215
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 215
c_rt_lib0move(&___nl__3, string0substr(___nl__4, ___nl__5, ___nl__6));
#line 215
c_rt_lib0clear(&___nl__6);
#line 215
c_rt_lib0clear(&___nl__5);
#line 215
c_rt_lib0clear(&___nl__4);
#line 215
c_rt_lib0move(&___nl__2, string0is_letter(___nl__3));
#line 215
c_rt_lib0clear(&___nl__3);
#line 215
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 215
if(c_rt_lib0check_true_native(___nl__2)){ goto label_46;}
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 215
c_rt_lib0clear(&___nl__1);
#line 215
c_rt_lib0clear(&___nl__2);
#line 215
return ___nl__3;
#line 215
c_rt_lib0clear(&___nl__3);
#line 215
goto label_46;
#line 215
label_46:
#line 215
c_rt_lib0clear(&___nl__2);
#line 216
goto label_49;
#line 216
label_49:
#line 216
c_rt_lib0clear(&___nl__1);
#line 217
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 217
return ___nl__1;
#line 217
c_rt_lib0clear(&___nl__1);
#line 217
return NULL;
}

ImmT ntokenizer0eat_text0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0eat_text");
return ntokenizer0eat_text(&_tab[0]);}
ImmT ntokenizer0eat_text(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 221
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 221
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 221
c_rt_lib0clear(&___nl__2);
#line 221
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 221
if(c_rt_lib0check_true_native(___nl__1)){ goto label_12;}
#line 221
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 221
c_rt_lib0move(&___nl__2, ntokenizer0eat_type(___ref___0, ___nl__3));
#line 221
c_rt_lib0clear(&___nl__3);
#line 221
c_rt_lib0clear(&___nl__1);
#line 221
return ___nl__2;
#line 221
c_rt_lib0clear(&___nl__2);
#line 221
goto label_12;
#line 221
label_12:
#line 221
c_rt_lib0clear(&___nl__1);
#line 222
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(963)));
#line 222
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 222
c_rt_lib0clear(&___nl__2);
#line 222
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 222
if(c_rt_lib0check_true_native(___nl__1)){ goto label_26;}
#line 222
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(963)));
#line 222
c_rt_lib0move(&___nl__2, ntokenizer0eat_type(___ref___0, ___nl__3));
#line 222
c_rt_lib0clear(&___nl__3);
#line 222
c_rt_lib0clear(&___nl__1);
#line 222
return ___nl__2;
#line 222
c_rt_lib0clear(&___nl__2);
#line 222
goto label_26;
#line 222
label_26:
#line 222
c_rt_lib0clear(&___nl__1);
#line 223
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(961)));
#line 223
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 223
c_rt_lib0clear(&___nl__2);
#line 223
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 223
if(c_rt_lib0check_true_native(___nl__1)){ goto label_55;}
#line 225
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(973)));
#line 225
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 225
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 225
c_rt_lib0move(&___nl__3, string0substr(___nl__4, ___nl__5, ___nl__6));
#line 225
c_rt_lib0clear(&___nl__6);
#line 225
c_rt_lib0clear(&___nl__5);
#line 225
c_rt_lib0clear(&___nl__4);
#line 225
c_rt_lib0move(&___nl__2, string0is_letter(___nl__3));
#line 225
c_rt_lib0clear(&___nl__3);
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 225
if(c_rt_lib0check_true_native(___nl__2)){ goto label_52;}
#line 224
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(961)));
#line 224
c_rt_lib0move(&___nl__3, ntokenizer0eat_type(___ref___0, ___nl__4));
#line 224
c_rt_lib0clear(&___nl__4);
#line 224
c_rt_lib0clear(&___nl__1);
#line 224
c_rt_lib0clear(&___nl__2);
#line 224
return ___nl__3;
#line 224
c_rt_lib0clear(&___nl__3);
#line 224
goto label_52;
#line 224
label_52:
#line 224
c_rt_lib0clear(&___nl__2);
#line 226
goto label_55;
#line 226
label_55:
#line 226
c_rt_lib0clear(&___nl__1);
#line 227
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 227
nl_die_arg(___nl__1);
#line 227
c_rt_lib0clear(&___nl__1);
#line 227
return NULL;
}

ImmT ntokenizer0info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0info");
return ntokenizer0info(_tab[0]);}
ImmT ntokenizer0info(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 231
c_rt_lib0move(&___nl__1,___get_global_const(981));
#line 231
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(973)));
#line 231
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 231
c_rt_lib0clear(&___nl__2);
#line 231
c_rt_lib0move(&___nl__2,___get_global_const(982));
#line 231
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 231
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(974)));
#line 232
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 232
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0move(&___nl__2,___get_global_const(983));
#line 232
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 232
c_rt_lib0clear(&___nl__2);
#line 233
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 233
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(241)));
#line 233
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 233
c_rt_lib0clear(&___nl__3);
#line 233
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(975)));
#line 233
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__3));
#line 233
c_rt_lib0clear(&___nl__3);
#line 233
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(973)));
#line 233
c_rt_lib0move(&___nl__3, string0length(___nl__4));
#line 233
c_rt_lib0clear(&___nl__4);
#line 233
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__3));
#line 233
c_rt_lib0clear(&___nl__3);
#line 233
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 233
c_rt_lib0clear(&___nl__2);
#line 233
c_rt_lib0move(&___nl__2,___get_global_const(984));
#line 233
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 233
c_rt_lib0clear(&___nl__2);
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 234
c_rt_lib0move(&___nl__2, ov0get_element(___nl__3));
#line 234
c_rt_lib0clear(&___nl__3);
#line 234
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 234
c_rt_lib0clear(&___nl__2);
#line 234
c_rt_lib0move(&___nl__2,___get_global_const(361));
#line 234
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 234
c_rt_lib0clear(&___nl__2);
#line 234
c_rt_lib0clear(&___nl__0);
#line 234
return ___nl__1;
#line 234
c_rt_lib0clear(&___nl__1);
#line 234
c_rt_lib0clear(&___nl__0);
#line 234
return NULL;
}

ImmT ntokenizer_priv0is_hex_number(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 239
c_rt_lib0move(&___nl__1, string0is_digit(___nl__0));
#line 239
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 239
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 239
c_rt_lib0move(&___nl__3,___get_global_const(985));
#line 239
c_rt_lib0move(&___nl__1, c_rt_lib0ge(___nl__1, ___nl__3));
#line 239
c_rt_lib0clear(&___nl__3);
#line 239
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 239
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 239
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 239
c_rt_lib0move(&___nl__3,___get_global_const(986));
#line 239
c_rt_lib0move(&___nl__1, c_rt_lib0le(___nl__1, ___nl__3));
#line 239
c_rt_lib0clear(&___nl__3);
#line 239
label_12:
#line 239
c_rt_lib0clear(&___nl__2);
#line 239
label_14:
#line 239
if(c_rt_lib0check_true_native(___nl__1)){ goto label_28;}
#line 240
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 240
c_rt_lib0move(&___nl__3,___get_global_const(987));
#line 240
c_rt_lib0move(&___nl__1, c_rt_lib0ge(___nl__1, ___nl__3));
#line 240
c_rt_lib0clear(&___nl__3);
#line 240
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 240
if(c_rt_lib0check_true_native(___nl__2)){ goto label_26;}
#line 240
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 240
c_rt_lib0move(&___nl__3,___get_global_const(988));
#line 240
c_rt_lib0move(&___nl__1, c_rt_lib0le(___nl__1, ___nl__3));
#line 240
c_rt_lib0clear(&___nl__3);
#line 240
label_26:
#line 240
c_rt_lib0clear(&___nl__2);
#line 240
label_28:
#line 240
c_rt_lib0clear(&___nl__0);
#line 240
return ___nl__1;
#line 240
c_rt_lib0clear(&___nl__1);
#line 240
c_rt_lib0clear(&___nl__0);
#line 240
return NULL;
}

ImmT ntokenizer_priv0try_get_operator(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 244
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_char_oper());
#line 244
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 244
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 244
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 244
label_4:
#line 244
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 244
if(c_rt_lib0check_true_native(___nl__7)){ goto label_80;}
#line 244
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 245
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(242)));
#line 245
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 245
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(241)));
#line 245
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 245
c_rt_lib0clear(&___nl__10);
#line 245
c_rt_lib0move(&___nl__10, string0length(___nl__3));
#line 245
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 245
c_rt_lib0clear(&___nl__10);
#line 245
c_rt_lib0move(&___nl__8, c_rt_lib0lt(___nl__8, ___nl__9));
#line 245
c_rt_lib0clear(&___nl__9);
#line 245
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 245
if(c_rt_lib0check_true_native(___nl__8)){ goto label_23;}
#line 245
c_rt_lib0clear(&___nl__8);
#line 245
goto label_77;
#line 245
goto label_23;
#line 245
label_23:
#line 245
c_rt_lib0clear(&___nl__8);
#line 246
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(972)));
#line 246
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(241)));
#line 246
c_rt_lib0move(&___nl__11, string0length(___nl__3));
#line 246
c_rt_lib0move(&___nl__8, c_std_lib0fast_substr(___nl__9, ___nl__10, ___nl__11));
#line 246
c_rt_lib0clear(&___nl__11);
#line 246
c_rt_lib0clear(&___nl__10);
#line 246
c_rt_lib0clear(&___nl__9);
#line 246
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__3));
#line 246
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 246
if(c_rt_lib0check_true_native(___nl__8)){ goto label_75;}
#line 249
c_rt_lib0move(&___nl__11, ntokenizer_priv0get_char(&___nl__0));
#line 249
c_rt_lib0move(&___nl__9, string0is_letter(___nl__11));
#line 249
c_rt_lib0clear(&___nl__11);
#line 249
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__9));
#line 249
if(c_rt_lib0check_true_native(___nl__10)){ goto label_52;}
#line 250
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(972)));
#line 250
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(241)));
#line 250
c_rt_lib0move(&___nl__14, string0length(___nl__3));
#line 250
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 250
c_rt_lib0clear(&___nl__14);
#line 250
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 250
c_rt_lib0move(&___nl__11, c_std_lib0fast_substr(___nl__12, ___nl__13, ___nl__14));
#line 250
c_rt_lib0clear(&___nl__14);
#line 250
c_rt_lib0clear(&___nl__13);
#line 250
c_rt_lib0clear(&___nl__12);
#line 250
c_rt_lib0move(&___nl__9, string0is_letter(___nl__11));
#line 250
c_rt_lib0clear(&___nl__11);
#line 250
label_52:
#line 250
c_rt_lib0clear(&___nl__10);
#line 250
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 250
if(c_rt_lib0check_true_native(___nl__9)){ goto label_60;}
#line 247
c_rt_lib0clear(&___nl__8);
#line 247
c_rt_lib0clear(&___nl__9);
#line 247
goto label_77;
#line 247
goto label_60;
#line 247
label_60:
#line 247
c_rt_lib0clear(&___nl__9);
#line 251
c_rt_lib0copy(___ref___1, ___nl__3);
#line 252
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 252
c_rt_lib0clear(&___nl__0);
#line 252
c_rt_lib0clear(&___nl__2);
#line 252
c_rt_lib0clear(&___nl__3);
#line 252
c_rt_lib0clear(&___nl__4);
#line 252
c_rt_lib0clear(&___nl__5);
#line 252
c_rt_lib0clear(&___nl__6);
#line 252
c_rt_lib0clear(&___nl__7);
#line 252
c_rt_lib0clear(&___nl__8);
#line 252
return ___nl__9;
#line 252
c_rt_lib0clear(&___nl__9);
#line 253
goto label_75;
#line 253
label_75:
#line 253
c_rt_lib0clear(&___nl__8);
#line 253
label_77:
#line 254
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 254
goto label_4;
#line 254
label_80:
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
c_rt_lib0clear(&___nl__3);
#line 254
c_rt_lib0clear(&___nl__4);
#line 254
c_rt_lib0clear(&___nl__5);
#line 254
c_rt_lib0clear(&___nl__6);
#line 254
c_rt_lib0clear(&___nl__7);
#line 255
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
return ___nl__2;
#line 255
c_rt_lib0clear(&___nl__2);
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
return NULL;
}

ImmT ntokenizer_priv0get_next_token(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(974)));
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 259
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(975)));
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 259
c_rt_lib0clear(&___nl__4);
#line 259
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 259
c_rt_lib0clear(&___nl__4);
#line 259
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(134), ___nl__2, ___get_global_const(920), ___nl__3));
#line 259
c_rt_lib0clear(&___nl__2);
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 259
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(977), ___nl__2);
#line 259
c_rt_lib0clear(&___nl__1);
#line 259
c_rt_lib0clear(&___nl__2);
#line 260
c_rt_lib0delete(ntokenizer_priv0eat_ws(___ref___0));
#line 261
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(974)));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 261
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(975)));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 261
c_rt_lib0clear(&___nl__4);
#line 261
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 261
c_rt_lib0clear(&___nl__4);
#line 261
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(134), ___nl__2, ___get_global_const(920), ___nl__3));
#line 261
c_rt_lib0clear(&___nl__2);
#line 261
c_rt_lib0clear(&___nl__3);
#line 261
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 261
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(976), ___nl__2);
#line 261
c_rt_lib0clear(&___nl__1);
#line 261
c_rt_lib0clear(&___nl__2);
#line 262
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(63)));
#line 262
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(112)));
#line 262
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 262
if(c_rt_lib0check_true_native(___nl__1)){ goto label_38;}
#line 262
c_rt_lib0clear(&___nl__1);
#line 262
return NULL;
#line 262
goto label_38;
#line 262
label_38:
#line 262
c_rt_lib0clear(&___nl__1);
#line 263
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 263
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(242)));
#line 263
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 263
c_rt_lib0clear(&___nl__2);
#line 263
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 263
if(c_rt_lib0check_true_native(___nl__1)){ goto label_59;}
#line 264
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(906)));
#line 264
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 264
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(63), ___nl__3);
#line 264
c_rt_lib0clear(&___nl__2);
#line 264
c_rt_lib0clear(&___nl__3);
#line 265
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 265
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 265
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(973), ___nl__3);
#line 265
c_rt_lib0clear(&___nl__2);
#line 265
c_rt_lib0clear(&___nl__3);
#line 266
c_rt_lib0clear(&___nl__1);
#line 266
return NULL;
#line 267
goto label_59;
#line 267
label_59:
#line 267
c_rt_lib0clear(&___nl__1);
#line 268
c_rt_lib0move(&___nl__1, ntokenizer_priv0get_char(___ref___0));
#line 269
c_rt_lib0move(&___nl__2,___get_global_const(464));
#line 269
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 269
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 269
if(c_rt_lib0check_true_native(___nl__2)){ goto label_146;}
#line 270
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 270
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 270
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(973), ___nl__4);
#line 270
c_rt_lib0clear(&___nl__3);
#line 270
c_rt_lib0clear(&___nl__4);
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(771)));
#line 271
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 271
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(63), ___nl__4);
#line 271
c_rt_lib0clear(&___nl__3);
#line 271
c_rt_lib0clear(&___nl__4);
#line 272
label_76:
#line 273
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 273
c_rt_lib0move(&___nl__4,___get_global_const(241));
#line 273
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 273
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__3));
#line 273
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 273
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 273
c_rt_lib0clear(&___nl__5);
#line 273
c_rt_lib0clear(&___nl__3);
#line 273
c_rt_lib0clear(&___nl__4);
#line 274
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_char(___ref___0));
#line 274
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 274
c_rt_lib0clear(&___nl__3);
#line 275
c_rt_lib0move(&___nl__3,___get_global_const(464));
#line 275
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 275
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 275
if(c_rt_lib0check_true_native(___nl__3)){ goto label_118;}
#line 276
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 276
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 276
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 276
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 276
c_rt_lib0move(&___nl__6,___get_global_const(241));
#line 276
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 276
c_rt_lib0clear(&___nl__6);
#line 276
c_rt_lib0clear(&___nl__4);
#line 276
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 277
c_rt_lib0move(&___nl__5,___get_global_const(464));
#line 277
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 277
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 277
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 277
if(c_rt_lib0check_true_native(___nl__4)){ goto label_115;}
#line 277
c_rt_lib0clear(&___nl__1);
#line 277
c_rt_lib0clear(&___nl__2);
#line 277
c_rt_lib0clear(&___nl__3);
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
return NULL;
#line 277
goto label_115;
#line 277
label_115:
#line 277
c_rt_lib0clear(&___nl__4);
#line 278
goto label_135;
#line 278
label_118:
#line 278
c_rt_lib0move(&___nl__3, string0ord(___nl__1));
#line 278
c_rt_lib0move(&___nl__4,___get_global_const(237));
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 278
c_rt_lib0clear(&___nl__4);
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 278
if(c_rt_lib0check_true_native(___nl__3)){ goto label_135;}
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(960)));
#line 279
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 279
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(63), ___nl__5);
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0clear(&___nl__5);
#line 280
c_rt_lib0clear(&___nl__1);
#line 280
c_rt_lib0clear(&___nl__2);
#line 280
c_rt_lib0clear(&___nl__3);
#line 280
return NULL;
#line 281
goto label_135;
#line 281
label_135:
#line 281
c_rt_lib0clear(&___nl__3);
#line 282
c_rt_lib0move(&___nl__3,___get_global_const(973));
#line 282
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 282
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 282
c_rt_lib0move(&___nl__4,___get_global_const(973));
#line 282
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 282
c_rt_lib0clear(&___nl__4);
#line 282
c_rt_lib0clear(&___nl__3);
#line 272
goto label_76;
#line 284
goto label_543;
#line 284
label_146:
#line 284
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_next_char(___ref___0));
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 284
c_rt_lib0move(&___nl__3,___get_global_const(254));
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 284
c_rt_lib0clear(&___nl__3);
#line 284
if(c_rt_lib0check_true_native(___nl__2)){ goto label_158;}
#line 284
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_next_char(___ref___0));
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 284
c_rt_lib0move(&___nl__3,___get_global_const(185));
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 284
c_rt_lib0clear(&___nl__3);
#line 284
label_158:
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 284
if(c_rt_lib0check_true_native(___nl__2)){ goto label_182;}
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(979)));
#line 285
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 285
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(63), ___nl__4);
#line 285
c_rt_lib0clear(&___nl__3);
#line 285
c_rt_lib0clear(&___nl__4);
#line 286
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_next_char(___ref___0));
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 286
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 286
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(973), ___nl__4);
#line 286
c_rt_lib0clear(&___nl__3);
#line 286
c_rt_lib0clear(&___nl__4);
#line 287
c_rt_lib0move(&___nl__3,___get_global_const(6));
#line 287
c_rt_lib0move(&___nl__4,___get_global_const(241));
#line 287
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 287
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__3));
#line 287
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 287
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 287
c_rt_lib0clear(&___nl__5);
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0clear(&___nl__4);
#line 288
goto label_543;
#line 288
label_182:
#line 288
c_rt_lib0move(&___nl__2, string0is_letter(___nl__1));
#line 288
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 288
if(c_rt_lib0check_true_native(___nl__2)){ goto label_272;}
#line 289
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 289
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(973), ___nl__3);
#line 289
c_rt_lib0clear(&___nl__3);
#line 290
c_rt_lib0move(&___nl__3,___get_global_const(241));
#line 290
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 290
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 290
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 290
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 290
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 290
c_rt_lib0clear(&___nl__5);
#line 290
c_rt_lib0clear(&___nl__3);
#line 290
c_rt_lib0clear(&___nl__4);
#line 291
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_char(___ref___0));
#line 291
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 291
c_rt_lib0clear(&___nl__3);
#line 292
label_201:
#line 292
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0ne(___nl__1, ___nl__3));
#line 292
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 292
if(c_rt_lib0check_true_native(___nl__4)){ goto label_213;}
#line 292
c_rt_lib0move(&___nl__3, string0is_letter(___nl__1));
#line 292
if(c_rt_lib0check_true_native(___nl__3)){ goto label_209;}
#line 292
c_rt_lib0move(&___nl__3, string0is_digit(___nl__1));
#line 292
label_209:
#line 292
if(c_rt_lib0check_true_native(___nl__3)){ goto label_213;}
#line 292
c_rt_lib0move(&___nl__3,___get_global_const(83));
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 292
label_213:
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 292
if(c_rt_lib0check_true_native(___nl__3)){ goto label_237;}
#line 293
c_rt_lib0move(&___nl__4,___get_global_const(973));
#line 293
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 293
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 293
c_rt_lib0move(&___nl__5,___get_global_const(973));
#line 293
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 293
c_rt_lib0clear(&___nl__5);
#line 293
c_rt_lib0clear(&___nl__4);
#line 294
c_rt_lib0move(&___nl__4,___get_global_const(241));
#line 294
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 294
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 294
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 294
c_rt_lib0move(&___nl__6,___get_global_const(241));
#line 294
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 294
c_rt_lib0clear(&___nl__6);
#line 294
c_rt_lib0clear(&___nl__4);
#line 294
c_rt_lib0clear(&___nl__5);
#line 295
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 295
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 295
c_rt_lib0clear(&___nl__4);
#line 296
goto label_201;
#line 296
label_237:
#line 296
c_rt_lib0clear(&___nl__3);
#line 297
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_lett_oper());
#line 297
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(973)));
#line 297
c_rt_lib0move(&___nl__3, hash0has_key(___nl__4, ___nl__5));
#line 297
c_rt_lib0clear(&___nl__5);
#line 297
c_rt_lib0clear(&___nl__4);
#line 297
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 297
if(c_rt_lib0check_true_native(___nl__3)){ goto label_252;}
#line 298
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(961)));
#line 298
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 298
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(63), ___nl__5);
#line 298
c_rt_lib0clear(&___nl__4);
#line 298
c_rt_lib0clear(&___nl__5);
#line 299
goto label_269;
#line 299
label_252:
#line 300
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_keywords());
#line 300
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(973)));
#line 300
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__6));
#line 300
c_rt_lib0clear(&___nl__6);
#line 300
c_rt_lib0clear(&___nl__5);
#line 300
if(c_rt_lib0check_true_native(___nl__4)){ goto label_261;}
#line 300
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 300
goto label_263;
#line 300
label_261:
#line 300
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(963)));
#line 300
label_263:
#line 300
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 300
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(63), ___nl__5);
#line 300
c_rt_lib0clear(&___nl__4);
#line 300
c_rt_lib0clear(&___nl__5);
#line 301
goto label_269;
#line 301
label_269:
#line 301
c_rt_lib0clear(&___nl__3);
#line 302
goto label_543;
#line 302
label_272:
#line 302
c_rt_lib0move(&___nl__2, ntokenizer_priv0try_get_operator(*___ref___0, &___nl__1));
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 302
if(c_rt_lib0check_true_native(___nl__2)){ goto label_294;}
#line 303
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(961)));
#line 303
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 303
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(63), ___nl__4);
#line 303
c_rt_lib0clear(&___nl__3);
#line 303
c_rt_lib0clear(&___nl__4);
#line 304
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 304
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(973), ___nl__3);
#line 304
c_rt_lib0clear(&___nl__3);
#line 305
c_rt_lib0move(&___nl__3, string0length(___nl__1));
#line 305
c_rt_lib0move(&___nl__4,___get_global_const(241));
#line 305
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 305
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__3));
#line 305
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 305
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 305
c_rt_lib0clear(&___nl__5);
#line 305
c_rt_lib0clear(&___nl__3);
#line 305
c_rt_lib0clear(&___nl__4);
#line 306
goto label_543;
#line 306
label_294:
#line 306
c_rt_lib0move(&___nl__3,___get_global_const(989));
#line 306
c_rt_lib0move(&___nl__2, string0index2(___nl__3, ___nl__1));
#line 306
c_rt_lib0clear(&___nl__3);
#line 306
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 306
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__2, ___nl__3));
#line 306
c_rt_lib0clear(&___nl__3);
#line 306
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 306
if(c_rt_lib0check_true_native(___nl__2)){ goto label_321;}
#line 307
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(979)));
#line 307
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 307
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(63), ___nl__4);
#line 307
c_rt_lib0clear(&___nl__3);
#line 307
c_rt_lib0clear(&___nl__4);
#line 308
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 308
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(973), ___nl__3);
#line 308
c_rt_lib0clear(&___nl__3);
#line 309
c_rt_lib0move(&___nl__3,___get_global_const(241));
#line 309
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 309
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 309
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 309
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 309
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 309
c_rt_lib0clear(&___nl__5);
#line 309
c_rt_lib0clear(&___nl__3);
#line 309
c_rt_lib0clear(&___nl__4);
#line 310
goto label_543;
#line 310
label_321:
#line 310
c_rt_lib0move(&___nl__2, string0is_digit(___nl__1));
#line 310
if(c_rt_lib0check_true_native(___nl__2)){ goto label_337;}
#line 310
c_rt_lib0move(&___nl__2,___get_global_const(296));
#line 310
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 310
if(c_rt_lib0check_true_native(___nl__2)){ goto label_329;}
#line 310
c_rt_lib0move(&___nl__2,___get_global_const(298));
#line 310
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 310
label_329:
#line 310
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 310
if(c_rt_lib0check_true_native(___nl__3)){ goto label_335;}
#line 310
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_next_char(___ref___0));
#line 310
c_rt_lib0move(&___nl__2, string0is_digit(___nl__4));
#line 310
c_rt_lib0clear(&___nl__4);
#line 310
label_335:
#line 310
c_rt_lib0clear(&___nl__3);
#line 310
label_337:
#line 310
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 310
if(c_rt_lib0check_true_native(___nl__2)){ goto label_533;}
#line 311
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 311
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(973), ___nl__3);
#line 311
c_rt_lib0clear(&___nl__3);
#line 312
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(959)));
#line 312
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 312
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(63), ___nl__4);
#line 312
c_rt_lib0clear(&___nl__3);
#line 312
c_rt_lib0clear(&___nl__4);
#line 313
c_rt_lib0move(&___nl__3,___get_global_const(241));
#line 313
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 313
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 313
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 313
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 313
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 313
c_rt_lib0clear(&___nl__5);
#line 313
c_rt_lib0clear(&___nl__3);
#line 313
c_rt_lib0clear(&___nl__4);
#line 314
c_rt_lib0move(&___nl__3,___get_global_const(296));
#line 314
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 314
if(c_rt_lib0check_true_native(___nl__3)){ goto label_362;}
#line 314
c_rt_lib0move(&___nl__3,___get_global_const(298));
#line 314
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 314
label_362:
#line 314
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 314
if(c_rt_lib0check_true_native(___nl__3)){ goto label_385;}
#line 315
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 315
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 315
c_rt_lib0clear(&___nl__4);
#line 316
c_rt_lib0move(&___nl__4,___get_global_const(973));
#line 316
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 316
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 316
c_rt_lib0move(&___nl__5,___get_global_const(973));
#line 316
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 316
c_rt_lib0clear(&___nl__5);
#line 316
c_rt_lib0clear(&___nl__4);
#line 317
c_rt_lib0move(&___nl__4,___get_global_const(241));
#line 317
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 317
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 317
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 317
c_rt_lib0move(&___nl__6,___get_global_const(241));
#line 317
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 317
c_rt_lib0clear(&___nl__6);
#line 317
c_rt_lib0clear(&___nl__4);
#line 317
c_rt_lib0clear(&___nl__5);
#line 318
goto label_385;
#line 318
label_385:
#line 318
c_rt_lib0clear(&___nl__3);
#line 319
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 319
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 319
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__3));
#line 319
if(c_rt_lib0check_true_native(___nl__5)){ goto label_395;}
#line 319
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_char(___ref___0));
#line 319
c_rt_lib0move(&___nl__6,___get_global_const(990));
#line 319
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__6));
#line 319
c_rt_lib0clear(&___nl__6);
#line 319
label_395:
#line 319
c_rt_lib0clear(&___nl__5);
#line 319
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 319
if(c_rt_lib0check_true_native(___nl__4)){ goto label_402;}
#line 319
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_next_char(___ref___0));
#line 319
c_rt_lib0move(&___nl__3, ntokenizer_priv0is_hex_number(___nl__5));
#line 319
c_rt_lib0clear(&___nl__5);
#line 319
label_402:
#line 319
c_rt_lib0clear(&___nl__4);
#line 319
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 319
if(c_rt_lib0check_true_native(___nl__3)){ goto label_454;}
#line 320
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 320
c_rt_lib0move(&___nl__5,___get_global_const(973));
#line 320
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 320
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 320
c_rt_lib0move(&___nl__6,___get_global_const(973));
#line 320
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 320
c_rt_lib0clear(&___nl__6);
#line 320
c_rt_lib0clear(&___nl__4);
#line 320
c_rt_lib0clear(&___nl__5);
#line 321
c_rt_lib0move(&___nl__4,___get_global_const(241));
#line 321
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 321
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 321
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 321
c_rt_lib0move(&___nl__6,___get_global_const(241));
#line 321
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 321
c_rt_lib0clear(&___nl__6);
#line 321
c_rt_lib0clear(&___nl__4);
#line 321
c_rt_lib0clear(&___nl__5);
#line 322
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 322
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 322
c_rt_lib0clear(&___nl__4);
#line 323
label_427:
#line 323
c_rt_lib0move(&___nl__4, ntokenizer_priv0is_hex_number(___nl__1));
#line 323
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 323
if(c_rt_lib0check_true_native(___nl__4)){ goto label_451;}
#line 324
c_rt_lib0move(&___nl__5,___get_global_const(973));
#line 324
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 324
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 324
c_rt_lib0move(&___nl__6,___get_global_const(973));
#line 324
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 324
c_rt_lib0clear(&___nl__6);
#line 324
c_rt_lib0clear(&___nl__5);
#line 325
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 325
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 325
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 325
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 325
c_rt_lib0move(&___nl__7,___get_global_const(241));
#line 325
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 325
c_rt_lib0clear(&___nl__7);
#line 325
c_rt_lib0clear(&___nl__5);
#line 325
c_rt_lib0clear(&___nl__6);
#line 326
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_char(___ref___0));
#line 326
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 326
c_rt_lib0clear(&___nl__5);
#line 327
goto label_427;
#line 327
label_451:
#line 327
c_rt_lib0clear(&___nl__4);
#line 328
goto label_530;
#line 328
label_454:
#line 329
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 330
label_456:
#line 331
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_char(___ref___0));
#line 331
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 331
c_rt_lib0clear(&___nl__5);
#line 332
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 332
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 332
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 332
if(c_rt_lib0check_true_native(___nl__5)){ goto label_468;}
#line 332
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 332
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 332
c_rt_lib0clear(&___nl__6);
#line 332
goto label_468;
#line 332
label_468:
#line 332
c_rt_lib0clear(&___nl__5);
#line 333
c_rt_lib0move(&___nl__5,___get_global_const(97));
#line 333
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__1, ___nl__5));
#line 333
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__5));
#line 333
if(c_rt_lib0check_true_native(___nl__7)){ goto label_477;}
#line 333
c_rt_lib0move(&___nl__8, ntokenizer_priv0get_next_char(___ref___0));
#line 333
c_rt_lib0move(&___nl__5, string0is_digit(___nl__8));
#line 333
c_rt_lib0clear(&___nl__8);
#line 333
label_477:
#line 333
c_rt_lib0clear(&___nl__7);
#line 333
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 333
if(c_rt_lib0check_true_native(___nl__6)){ goto label_483;}
#line 333
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 333
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 333
label_483:
#line 333
c_rt_lib0clear(&___nl__6);
#line 333
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 333
if(c_rt_lib0check_true_native(___nl__5)){ goto label_491;}
#line 333
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 333
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 333
c_rt_lib0clear(&___nl__6);
#line 333
goto label_491;
#line 333
label_491:
#line 333
c_rt_lib0clear(&___nl__5);
#line 334
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 334
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__1, ___nl__5));
#line 334
if(c_rt_lib0check_true_native(___nl__5)){ goto label_502;}
#line 334
c_rt_lib0move(&___nl__5, string0is_digit(___nl__1));
#line 334
if(c_rt_lib0check_true_native(___nl__5)){ goto label_500;}
#line 334
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 334
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 334
label_500:
#line 334
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 334
label_502:
#line 334
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 334
if(c_rt_lib0check_true_native(___nl__5)){ goto label_508;}
#line 334
c_rt_lib0clear(&___nl__5);
#line 334
goto label_527;
#line 334
goto label_508;
#line 334
label_508:
#line 334
c_rt_lib0clear(&___nl__5);
#line 335
c_rt_lib0move(&___nl__5,___get_global_const(973));
#line 335
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 335
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 335
c_rt_lib0move(&___nl__6,___get_global_const(973));
#line 335
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 335
c_rt_lib0clear(&___nl__6);
#line 335
c_rt_lib0clear(&___nl__5);
#line 336
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 336
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 336
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 336
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 336
c_rt_lib0move(&___nl__7,___get_global_const(241));
#line 336
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 336
c_rt_lib0clear(&___nl__7);
#line 336
c_rt_lib0clear(&___nl__5);
#line 336
c_rt_lib0clear(&___nl__6);
#line 330
goto label_456;
#line 330
label_527:
#line 330
c_rt_lib0clear(&___nl__4);
#line 338
goto label_530;
#line 338
label_530:
#line 338
c_rt_lib0clear(&___nl__3);
#line 339
goto label_543;
#line 339
label_533:
#line 340
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(112)));
#line 340
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 340
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(63), ___nl__4);
#line 340
c_rt_lib0clear(&___nl__3);
#line 340
c_rt_lib0clear(&___nl__4);
#line 341
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 341
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(973), ___nl__3);
#line 341
c_rt_lib0clear(&___nl__3);
#line 342
goto label_543;
#line 342
label_543:
#line 342
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0clear(&___nl__1);
#line 342
return NULL;
}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void ntokenizer0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}
ImmT ntokenizer_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ntokenizer_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = ntokenizer_priv0get_keywords0cal();
	break;
case 1:
	___const__[1] = ntokenizer_priv0get_char_oper0cal();
	break;
case 2:
	___const__[2] = ntokenizer_priv0get_lett_oper0cal();
	break;
case 3:
	___const__[3] = ntokenizer0state_t0cal();
	break;
case 4:
	___const__[4] = ntokenizer0token_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
