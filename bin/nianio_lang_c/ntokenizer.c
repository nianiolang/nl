
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
#line 1 "ntokenizer.nl"

static ImmT *__const__f = NULL;
void ntokenizer_priv0__const__init();
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
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(0);}
ImmT ntokenizer_priv0get_keywords0cal() {
ntokenizer_priv0__const__init();
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
#line 18
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__16,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__17,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__18,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__19,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__20,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__21,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__22,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__23,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__24,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__25,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(24, ___get_global_const(860), ___nl__2, ___get_global_const(742), ___nl__3, ___get_global_const(743), ___nl__4, ___get_global_const(741), ___nl__5, ___get_global_const(744), ___nl__6, ___get_global_const(117), ___nl__7, ___get_global_const(745), ___nl__8, ___get_global_const(740), ___nl__9, ___get_global_const(756), ___nl__10, ___get_global_const(757), ___nl__11, ___get_global_const(772), ___nl__12, ___get_global_const(863), ___nl__13, ___get_global_const(5), ___nl__14, ___get_global_const(750), ___nl__15, ___get_global_const(821), ___nl__16, ___get_global_const(855), ___nl__17, ___get_global_const(877), ___nl__18, ___get_global_const(878), ___nl__19, ___get_global_const(749), ___nl__20, ___get_global_const(748), ___nl__21, ___get_global_const(210), ___nl__22, ___get_global_const(753), ___nl__23, ___get_global_const(78), ___nl__24, ___get_global_const(229), ___nl__25));
#line 18
c_rt_lib0clear(&___nl__2);
#line 18
c_rt_lib0clear(&___nl__3);
#line 18
c_rt_lib0clear(&___nl__4);
#line 18
c_rt_lib0clear(&___nl__5);
#line 18
c_rt_lib0clear(&___nl__6);
#line 18
c_rt_lib0clear(&___nl__7);
#line 18
c_rt_lib0clear(&___nl__8);
#line 18
c_rt_lib0clear(&___nl__9);
#line 18
c_rt_lib0clear(&___nl__10);
#line 18
c_rt_lib0clear(&___nl__11);
#line 18
c_rt_lib0clear(&___nl__12);
#line 18
c_rt_lib0clear(&___nl__13);
#line 18
c_rt_lib0clear(&___nl__14);
#line 18
c_rt_lib0clear(&___nl__15);
#line 18
c_rt_lib0clear(&___nl__16);
#line 18
c_rt_lib0clear(&___nl__17);
#line 18
c_rt_lib0clear(&___nl__18);
#line 18
c_rt_lib0clear(&___nl__19);
#line 18
c_rt_lib0clear(&___nl__20);
#line 18
c_rt_lib0clear(&___nl__21);
#line 18
c_rt_lib0clear(&___nl__22);
#line 18
c_rt_lib0clear(&___nl__23);
#line 18
c_rt_lib0clear(&___nl__24);
#line 18
c_rt_lib0clear(&___nl__25);
#line 18
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 18
c_rt_lib0clear(&___nl__1);
#line 18
return ___nl__0;
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
return NULL;
}

ImmT ntokenizer_priv0get_char_oper(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(1);}
ImmT ntokenizer_priv0get_char_oper0cal() {
ntokenizer_priv0__const__init();
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
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 48
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 48
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__1));
#line 48
label_3:
#line 48
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 48
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 48
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 49
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__2));
#line 49
label_6:
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 49
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 49
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__2, ___nl__7));
#line 50
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 50
c_rt_lib0move(&___nl__13,___get_global_const(2));
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
if(c_rt_lib0check_true_native(___nl__10)){ goto label_8;}
#line 50
c_rt_lib0move(&___nl__12, string0length(___nl__7));
#line 50
c_rt_lib0move(&___nl__13,___get_global_const(2));
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
goto label_8;
#line 50
label_8:
#line 50
c_rt_lib0clear(&___nl__10);
#line 51
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 51
goto label_6;
#line 51
label_4:
#line 51
c_rt_lib0clear(&___nl__7);
#line 51
c_rt_lib0clear(&___nl__8);
#line 51
c_rt_lib0clear(&___nl__9);
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 52
goto label_3;
#line 52
label_1:
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
c_rt_lib0move(&___nl__2,___get_global_const(137));
#line 53
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_arr(___nl__0, ___nl__2));
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(2));
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
c_rt_lib0move(&___nl__2,___get_global_const(137));
#line 54
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_arr(___nl__0, ___nl__2));
#line 54
c_rt_lib0move(&___nl__4,___get_global_const(1));
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
c_rt_lib0move(&___nl__3,___get_global_const(137));
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
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(2);}
ImmT ntokenizer_priv0get_lett_oper0cal() {
ntokenizer_priv0__const__init();
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
#line 58
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 59
c_rt_lib0move(&___nl__2, nast0get_unary_ops());
#line 59
c_rt_lib0move(&___nl__3, nast0get_bin_ops());
#line 59
c_rt_lib0move(&___nl__4, nast0get_ternary_ops());
#line 59
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(3, ___nl__2, ___nl__3, ___nl__4));
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0clear(&___nl__4);
#line 59
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 59
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 59
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__1));
#line 59
label_3:
#line 59
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 59
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 60
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__2));
#line 60
label_6:
#line 60
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 60
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 60
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 60
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__2, ___nl__7));
#line 61
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 61
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 61
c_rt_lib0move(&___nl__11, string0substr(___nl__7, ___nl__12, ___nl__13));
#line 61
c_rt_lib0clear(&___nl__13);
#line 61
c_rt_lib0clear(&___nl__12);
#line 61
c_rt_lib0move(&___nl__10, string0is_letter(___nl__11));
#line 61
c_rt_lib0clear(&___nl__11);
#line 61
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 61
if(c_rt_lib0check_true_native(___nl__10)){ goto label_8;}
#line 61
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 61
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__7, ___nl__11));
#line 61
c_rt_lib0clear(&___nl__11);
#line 61
goto label_8;
#line 61
label_8:
#line 61
c_rt_lib0clear(&___nl__10);
#line 62
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 62
goto label_6;
#line 62
label_4:
#line 62
c_rt_lib0clear(&___nl__7);
#line 62
c_rt_lib0clear(&___nl__8);
#line 62
c_rt_lib0clear(&___nl__9);
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 63
goto label_3;
#line 63
label_1:
#line 63
c_rt_lib0clear(&___nl__1);
#line 63
c_rt_lib0clear(&___nl__2);
#line 63
c_rt_lib0clear(&___nl__3);
#line 63
c_rt_lib0clear(&___nl__4);
#line 63
c_rt_lib0clear(&___nl__5);
#line 63
c_rt_lib0clear(&___nl__6);
#line 64
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
return ___nl__1;
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
return NULL;
}

ImmT ntokenizer0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0state_t");
return ntokenizer0state_t();}
ImmT ntokenizer0state_t(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(3);}
ImmT ntokenizer0state_t0cal() {
ntokenizer_priv0__const__init();
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
#line 68
c_rt_lib0move(&___nl__3, ptd0sim());
#line 68
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0move(&___nl__3, ptd0sim());
#line 68
c_rt_lib0move(&___nl__4, ptd0sim());
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(ntokenizer0token_t0ptr, ___get_global_const(857), ___get_global_const(884)));
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 68
c_rt_lib0move(&___nl__6, ptd0sim());
#line 68
c_rt_lib0move(&___nl__7, ptd0sim());
#line 68
c_rt_lib0move(&___nl__8, ptd0sim());
#line 68
c_rt_lib0move(&___nl__11, ptd0sim());
#line 68
c_rt_lib0move(&___nl__12, ptd0sim());
#line 68
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(98), ___nl__11, ___get_global_const(838), ___nl__12));
#line 68
c_rt_lib0clear(&___nl__11);
#line 68
c_rt_lib0clear(&___nl__12);
#line 68
c_rt_lib0move(&___nl__9, ptd0rec(___nl__10));
#line 68
c_rt_lib0clear(&___nl__10);
#line 68
c_rt_lib0move(&___nl__12, ptd0sim());
#line 68
c_rt_lib0move(&___nl__13, ptd0sim());
#line 68
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(98), ___nl__12, ___get_global_const(838), ___nl__13));
#line 68
c_rt_lib0clear(&___nl__12);
#line 68
c_rt_lib0clear(&___nl__13);
#line 68
c_rt_lib0move(&___nl__10, ptd0rec(___nl__11));
#line 68
c_rt_lib0clear(&___nl__11);
#line 68
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(9, ___get_global_const(885), ___nl__2, ___get_global_const(156), ___nl__3, ___get_global_const(157), ___nl__4, ___get_global_const(72), ___nl__5, ___get_global_const(886), ___nl__6, ___get_global_const(887), ___nl__7, ___get_global_const(888), ___nl__8, ___get_global_const(889), ___nl__9, ___get_global_const(890), ___nl__10));
#line 68
c_rt_lib0clear(&___nl__2);
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0clear(&___nl__4);
#line 68
c_rt_lib0clear(&___nl__5);
#line 68
c_rt_lib0clear(&___nl__6);
#line 68
c_rt_lib0clear(&___nl__7);
#line 68
c_rt_lib0clear(&___nl__8);
#line 68
c_rt_lib0clear(&___nl__9);
#line 68
c_rt_lib0clear(&___nl__10);
#line 68
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 68
c_rt_lib0clear(&___nl__1);
#line 68
return ___nl__0;
#line 68
c_rt_lib0clear(&___nl__0);
#line 68
return NULL;
}

ImmT ntokenizer0token_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0token_t");
return ntokenizer0token_t();}
ImmT ntokenizer0token_t(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(4);}
ImmT ntokenizer0token_t0cal() {
ntokenizer_priv0__const__init();
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
#line 81
c_rt_lib0move(&___nl__2, ptd0none());
#line 81
c_rt_lib0move(&___nl__3, ptd0none());
#line 81
c_rt_lib0move(&___nl__4, ptd0none());
#line 81
c_rt_lib0move(&___nl__5, ptd0none());
#line 81
c_rt_lib0move(&___nl__6, ptd0none());
#line 81
c_rt_lib0move(&___nl__7, ptd0none());
#line 81
c_rt_lib0move(&___nl__8, ptd0none());
#line 81
c_rt_lib0move(&___nl__9, ptd0none());
#line 81
c_rt_lib0move(&___nl__10, ptd0none());
#line 81
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(9, ___get_global_const(824), ___nl__2, ___get_global_const(891), ___nl__3, ___get_global_const(874), ___nl__4, ___get_global_const(872), ___nl__5, ___get_global_const(876), ___nl__6, ___get_global_const(861), ___nl__7, ___get_global_const(873), ___nl__8, ___get_global_const(694), ___nl__9, ___get_global_const(95), ___nl__10));
#line 81
c_rt_lib0clear(&___nl__2);
#line 81
c_rt_lib0clear(&___nl__3);
#line 81
c_rt_lib0clear(&___nl__4);
#line 81
c_rt_lib0clear(&___nl__5);
#line 81
c_rt_lib0clear(&___nl__6);
#line 81
c_rt_lib0clear(&___nl__7);
#line 81
c_rt_lib0clear(&___nl__8);
#line 81
c_rt_lib0clear(&___nl__9);
#line 81
c_rt_lib0clear(&___nl__10);
#line 81
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 81
c_rt_lib0clear(&___nl__1);
#line 81
return ___nl__0;
#line 81
c_rt_lib0clear(&___nl__0);
#line 81
return NULL;
}

ImmT ntokenizer0init0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0init");
return ntokenizer0init(_tab[0]);}
ImmT ntokenizer0init(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ntokenizer_priv0__const__init();
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
#line 95
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__0));
#line 95
c_rt_lib0move(&___nl__3, string0length(___nl__0));
#line 95
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(824)));
#line 95
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 95
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 95
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 95
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 95
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 95
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(98), ___nl__10, ___get_global_const(838), ___nl__11));
#line 95
c_rt_lib0clear(&___nl__10);
#line 95
c_rt_lib0clear(&___nl__11);
#line 95
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 95
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 95
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(98), ___nl__11, ___get_global_const(838), ___nl__12));
#line 95
c_rt_lib0clear(&___nl__11);
#line 95
c_rt_lib0clear(&___nl__12);
#line 95
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(9, ___get_global_const(885), ___nl__2, ___get_global_const(157), ___nl__3, ___get_global_const(156), ___nl__4, ___get_global_const(72), ___nl__5, ___get_global_const(886), ___nl__6, ___get_global_const(887), ___nl__7, ___get_global_const(888), ___nl__8, ___get_global_const(889), ___nl__9, ___get_global_const(890), ___nl__10));
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
#line 95
c_rt_lib0clear(&___nl__8);
#line 95
c_rt_lib0clear(&___nl__9);
#line 95
c_rt_lib0clear(&___nl__10);
#line 106
c_rt_lib0delete(ntokenizer_priv0get_next_token(&___nl__1));
#line 107
c_rt_lib0clear(&___nl__0);
#line 107
return ___nl__1;
#line 107
c_rt_lib0clear(&___nl__1);
#line 107
c_rt_lib0clear(&___nl__0);
#line 107
return NULL;
}

ImmT ntokenizer_priv0get_char(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 110
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(885)));
#line 110
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 110
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 110
c_rt_lib0move(&___nl__1, c_std_lib0fast_substr(___nl__2, ___nl__3, ___nl__4));
#line 110
c_rt_lib0clear(&___nl__4);
#line 110
c_rt_lib0clear(&___nl__3);
#line 110
c_rt_lib0clear(&___nl__2);
#line 110
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 110
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 110
c_rt_lib0clear(&___nl__2);
#line 110
return ___nl__1;
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
return NULL;
}

ImmT ntokenizer_priv0get_next_char(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 113
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(157)));
#line 113
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 113
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 113
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 113
c_rt_lib0clear(&___nl__3);
#line 113
c_rt_lib0move(&___nl__1, c_rt_lib0le(___nl__1, ___nl__2));
#line 113
c_rt_lib0clear(&___nl__2);
#line 113
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 113
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 113
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 113
c_rt_lib0clear(&___nl__1);
#line 113
return ___nl__2;
#line 113
c_rt_lib0clear(&___nl__2);
#line 113
goto label_2;
#line 113
label_2:
#line 113
c_rt_lib0clear(&___nl__1);
#line 114
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(885)));
#line 114
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 114
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 114
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 114
c_rt_lib0move(&___nl__1, c_std_lib0fast_substr(___nl__2, ___nl__3, ___nl__4));
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 114
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
return ___nl__1;
#line 114
c_rt_lib0clear(&___nl__1);
#line 114
return NULL;
}

ImmT ntokenizer_priv0eat_ws(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 117
label_2:
#line 118
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 118
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(157)));
#line 118
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 118
c_rt_lib0clear(&___nl__2);
#line 118
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 118
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 118
c_rt_lib0clear(&___nl__1);
#line 118
return NULL;
#line 118
goto label_4;
#line 118
label_4:
#line 118
c_rt_lib0clear(&___nl__1);
#line 119
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_char(___ref___0));
#line 119
c_rt_lib0move(&___nl__1, string0ord(___nl__2));
#line 119
c_rt_lib0clear(&___nl__2);
#line 120
c_rt_lib0move(&___nl__2,___get_global_const(158));
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 120
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 120
c_rt_lib0move(&___nl__2,___get_global_const(153));
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 120
label_8:
#line 120
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 120
c_rt_lib0move(&___nl__2,___get_global_const(151));
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 120
label_7:
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 120
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 121
c_rt_lib0move(&___nl__3,___get_global_const(156));
#line 121
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 121
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 121
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 121
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 121
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 121
c_rt_lib0clear(&___nl__5);
#line 121
c_rt_lib0clear(&___nl__3);
#line 121
c_rt_lib0clear(&___nl__4);
#line 122
goto label_5;
#line 122
label_6:
#line 122
c_rt_lib0move(&___nl__2,___get_global_const(152));
#line 122
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 122
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 122
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 123
c_rt_lib0move(&___nl__3,___get_global_const(156));
#line 123
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 123
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 123
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 123
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 123
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 123
c_rt_lib0clear(&___nl__5);
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__4);
#line 124
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 124
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 124
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(888), ___nl__4);
#line 124
c_rt_lib0clear(&___nl__3);
#line 124
c_rt_lib0clear(&___nl__4);
#line 125
c_rt_lib0move(&___nl__3,___get_global_const(887));
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 125
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 125
c_rt_lib0move(&___nl__5,___get_global_const(887));
#line 125
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 125
c_rt_lib0clear(&___nl__5);
#line 125
c_rt_lib0clear(&___nl__3);
#line 125
c_rt_lib0clear(&___nl__4);
#line 126
goto label_5;
#line 126
label_9:
#line 126
c_rt_lib0move(&___nl__2,___get_global_const(892));
#line 126
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 126
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 126
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 127
label_12:
#line 127
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 127
c_rt_lib0move(&___nl__3, string0ord(___nl__4));
#line 127
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0move(&___nl__4,___get_global_const(152));
#line 127
c_rt_lib0move(&___nl__3, c_rt_lib0num_ne(___nl__3, ___nl__4));
#line 127
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 127
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 128
c_rt_lib0move(&___nl__4,___get_global_const(156));
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 128
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 128
c_rt_lib0move(&___nl__6,___get_global_const(156));
#line 128
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 128
c_rt_lib0clear(&___nl__6);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0clear(&___nl__5);
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 129
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(157)));
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 129
c_rt_lib0clear(&___nl__5);
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 129
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
return NULL;
#line 129
goto label_14;
#line 129
label_14:
#line 129
c_rt_lib0clear(&___nl__4);
#line 130
goto label_12;
#line 130
label_11:
#line 130
c_rt_lib0clear(&___nl__3);
#line 131
goto label_5;
#line 131
label_10:
#line 132
c_rt_lib0clear(&___nl__1);
#line 132
c_rt_lib0clear(&___nl__2);
#line 132
return NULL;
#line 133
goto label_5;
#line 133
label_5:
#line 133
c_rt_lib0clear(&___nl__2);
#line 133
c_rt_lib0clear(&___nl__1);
#line 117
goto label_2;
#line 117
return NULL;
}

ImmT ntokenizer_priv0is_token(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 138
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(72)));
#line 138
c_rt_lib0move(&___nl__3,___get_global_const(891));
#line 138
c_rt_lib0move(&___nl__1, ov0is(___nl__2, ___nl__3));
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 138
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 138
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
return ___nl__2;
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
goto label_2;
#line 138
label_2:
#line 138
c_rt_lib0clear(&___nl__1);
#line 139
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(72)));
#line 139
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 139
c_rt_lib0move(&___nl__1, ov0is(___nl__2, ___nl__3));
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 139
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 139
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
return ___nl__2;
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
goto label_4;
#line 139
label_4:
#line 139
c_rt_lib0clear(&___nl__1);
#line 140
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(72)));
#line 140
c_rt_lib0move(&___nl__3,___get_global_const(876));
#line 140
c_rt_lib0move(&___nl__1, ov0is(___nl__2, ___nl__3));
#line 140
c_rt_lib0clear(&___nl__3);
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 140
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 140
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
return ___nl__2;
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
goto label_6;
#line 140
label_6:
#line 140
c_rt_lib0clear(&___nl__1);
#line 141
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 141
return ___nl__1;
#line 141
c_rt_lib0clear(&___nl__1);
#line 141
return NULL;
}

ImmT ntokenizer0eat_token0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0eat_token");
return ntokenizer0eat_token(&_tab[0], _tab[1]);}
ImmT ntokenizer0eat_token(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ntokenizer_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 145
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(886)));
#line 145
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 145
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 145
c_rt_lib0move(&___nl__2, ntokenizer_priv0is_token(___ref___0));
#line 145
label_3:
#line 145
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 145
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 146
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___0));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 147
c_rt_lib0clear(&___nl__1);
#line 147
c_rt_lib0clear(&___nl__2);
#line 147
return ___nl__3;
#line 147
c_rt_lib0clear(&___nl__3);
#line 148
goto label_2;
#line 148
label_2:
#line 148
c_rt_lib0clear(&___nl__2);
#line 149
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 149
c_rt_lib0clear(&___nl__1);
#line 149
return ___nl__2;
#line 149
c_rt_lib0clear(&___nl__2);
#line 149
c_rt_lib0clear(&___nl__1);
#line 149
return NULL;
}

ImmT ntokenizer0get_line0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_line");
return ntokenizer0get_line(&_tab[0]);}
ImmT ntokenizer0get_line(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 153
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(887)));
#line 153
return ___nl__1;
#line 153
c_rt_lib0clear(&___nl__1);
#line 153
return NULL;
}

ImmT ntokenizer0get_place0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_place");
return ntokenizer0get_place(&_tab[0]);}
ImmT ntokenizer0get_place(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 157
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(889)));
#line 157
return ___nl__1;
#line 157
c_rt_lib0clear(&___nl__1);
#line 157
return NULL;
}

ImmT ntokenizer0get_place_ws0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_place_ws");
return ntokenizer0get_place_ws(&_tab[0]);}
ImmT ntokenizer0get_place_ws(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 161
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(890)));
#line 161
return ___nl__1;
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
return NULL;
}

ImmT ntokenizer0get_token0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_token");
return ntokenizer0get_token(&_tab[0]);}
ImmT ntokenizer0get_token(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 165
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(886)));
#line 165
return ___nl__1;
#line 165
c_rt_lib0clear(&___nl__1);
#line 165
return NULL;
}

ImmT ntokenizer0is_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0is_type");
return ntokenizer0is_type(&_tab[0], _tab[1]);}
ImmT ntokenizer0is_type(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ntokenizer_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 169
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(72)));
#line 169
c_rt_lib0move(&___nl__2, enum0eq(___nl__3, ___nl__1));
#line 169
c_rt_lib0clear(&___nl__3);
#line 169
c_rt_lib0clear(&___nl__1);
#line 169
return ___nl__2;
#line 169
c_rt_lib0clear(&___nl__2);
#line 169
c_rt_lib0clear(&___nl__1);
#line 169
return NULL;
}

ImmT ntokenizer0next_is0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0next_is");
return ntokenizer0next_is(&_tab[0], _tab[1]);}
ImmT ntokenizer0next_is(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ntokenizer_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 173
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(886)));
#line 173
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 173
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 173
c_rt_lib0move(&___nl__2, ntokenizer_priv0is_token(___ref___0));
#line 173
label_1:
#line 173
c_rt_lib0clear(&___nl__3);
#line 173
c_rt_lib0clear(&___nl__1);
#line 173
return ___nl__2;
#line 173
c_rt_lib0clear(&___nl__2);
#line 173
c_rt_lib0clear(&___nl__1);
#line 173
return NULL;
}

ImmT ntokenizer0eat_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0eat_type");
return ntokenizer0eat_type(&_tab[0], _tab[1]);}
ImmT ntokenizer0eat_type(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ntokenizer_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 177
c_rt_lib0move(&___nl__2, ntokenizer0is_type(___ref___0, ___nl__1));
#line 177
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 177
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 177
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 177
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 177
nl_die_arg(___nl__3);
#line 177
goto label_2;
#line 177
label_2:
#line 177
c_rt_lib0clear(&___nl__2);
#line 177
c_rt_lib0clear(&___nl__3);
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(886)));
#line 179
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___0));
#line 180
c_rt_lib0clear(&___nl__1);
#line 180
return ___nl__2;
#line 180
c_rt_lib0clear(&___nl__2);
#line 180
c_rt_lib0clear(&___nl__1);
#line 180
return NULL;
}

ImmT ntokenizer0is_text0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0is_text");
return ntokenizer0is_text(&_tab[0]);}
ImmT ntokenizer0is_text(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 183
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 183
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 183
c_rt_lib0clear(&___nl__2);
#line 183
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 183
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 183
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 183
c_rt_lib0clear(&___nl__1);
#line 183
return ___nl__2;
#line 183
c_rt_lib0clear(&___nl__2);
#line 183
goto label_2;
#line 183
label_2:
#line 183
c_rt_lib0clear(&___nl__1);
#line 184
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(876)));
#line 184
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 184
c_rt_lib0clear(&___nl__2);
#line 184
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 184
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 184
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 184
c_rt_lib0clear(&___nl__1);
#line 184
return ___nl__2;
#line 184
c_rt_lib0clear(&___nl__2);
#line 184
goto label_4;
#line 184
label_4:
#line 184
c_rt_lib0clear(&___nl__1);
#line 185
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(874)));
#line 185
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 185
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 185
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 186
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(886)));
#line 186
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 186
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 186
c_rt_lib0move(&___nl__3, string0substr(___nl__4, ___nl__5, ___nl__6));
#line 186
c_rt_lib0clear(&___nl__6);
#line 186
c_rt_lib0clear(&___nl__5);
#line 186
c_rt_lib0clear(&___nl__4);
#line 186
c_rt_lib0move(&___nl__2, string0is_letter(___nl__3));
#line 186
c_rt_lib0clear(&___nl__3);
#line 186
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 186
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 186
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 186
c_rt_lib0clear(&___nl__1);
#line 186
c_rt_lib0clear(&___nl__2);
#line 186
return ___nl__3;
#line 186
c_rt_lib0clear(&___nl__3);
#line 186
goto label_8;
#line 186
label_8:
#line 186
c_rt_lib0clear(&___nl__2);
#line 188
goto label_6;
#line 188
label_6:
#line 188
c_rt_lib0clear(&___nl__1);
#line 189
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 189
return ___nl__1;
#line 189
c_rt_lib0clear(&___nl__1);
#line 189
return NULL;
}

ImmT ntokenizer0eat_text0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0eat_text");
return ntokenizer0eat_text(&_tab[0]);}
ImmT ntokenizer0eat_text(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 192
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 192
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 192
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 192
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 192
c_rt_lib0move(&___nl__2, ntokenizer0eat_type(___ref___0, ___nl__3));
#line 192
c_rt_lib0clear(&___nl__3);
#line 192
c_rt_lib0clear(&___nl__1);
#line 192
return ___nl__2;
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
goto label_2;
#line 192
label_2:
#line 192
c_rt_lib0clear(&___nl__1);
#line 193
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(876)));
#line 193
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 193
c_rt_lib0clear(&___nl__2);
#line 193
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 193
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 193
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(876)));
#line 193
c_rt_lib0move(&___nl__2, ntokenizer0eat_type(___ref___0, ___nl__3));
#line 193
c_rt_lib0clear(&___nl__3);
#line 193
c_rt_lib0clear(&___nl__1);
#line 193
return ___nl__2;
#line 193
c_rt_lib0clear(&___nl__2);
#line 193
goto label_4;
#line 193
label_4:
#line 193
c_rt_lib0clear(&___nl__1);
#line 194
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(874)));
#line 194
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 194
c_rt_lib0clear(&___nl__2);
#line 194
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 194
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 195
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(886)));
#line 195
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 195
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 195
c_rt_lib0move(&___nl__3, string0substr(___nl__4, ___nl__5, ___nl__6));
#line 195
c_rt_lib0clear(&___nl__6);
#line 195
c_rt_lib0clear(&___nl__5);
#line 195
c_rt_lib0clear(&___nl__4);
#line 195
c_rt_lib0move(&___nl__2, string0is_letter(___nl__3));
#line 195
c_rt_lib0clear(&___nl__3);
#line 195
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 195
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 195
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(874)));
#line 195
c_rt_lib0move(&___nl__3, ntokenizer0eat_type(___ref___0, ___nl__4));
#line 195
c_rt_lib0clear(&___nl__4);
#line 195
c_rt_lib0clear(&___nl__1);
#line 195
c_rt_lib0clear(&___nl__2);
#line 195
return ___nl__3;
#line 195
c_rt_lib0clear(&___nl__3);
#line 195
goto label_8;
#line 195
label_8:
#line 195
c_rt_lib0clear(&___nl__2);
#line 197
goto label_6;
#line 197
label_6:
#line 197
c_rt_lib0clear(&___nl__1);
#line 198
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 198
nl_die_arg(___nl__1);
#line 198
c_rt_lib0clear(&___nl__1);
#line 198
return NULL;
}

ImmT ntokenizer0info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0info");
return ntokenizer0info(&_tab[0]);}
ImmT ntokenizer0info(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 202
c_rt_lib0move(&___nl__1,___get_global_const(893));
#line 202
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(886)));
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0move(&___nl__2,___get_global_const(894));
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(887)));
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0move(&___nl__2,___get_global_const(895));
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 202
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 202
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 202
c_rt_lib0clear(&___nl__3);
#line 202
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(888)));
#line 202
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__3));
#line 202
c_rt_lib0clear(&___nl__3);
#line 202
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(886)));
#line 202
c_rt_lib0move(&___nl__3, string0length(___nl__4));
#line 202
c_rt_lib0clear(&___nl__4);
#line 202
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__3));
#line 202
c_rt_lib0clear(&___nl__3);
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0move(&___nl__2,___get_global_const(896));
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(72)));
#line 202
c_rt_lib0move(&___nl__2, ov0get_element(___nl__3));
#line 202
c_rt_lib0clear(&___nl__3);
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0move(&___nl__2,___get_global_const(897));
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
return ___nl__1;
#line 202
c_rt_lib0clear(&___nl__1);
#line 202
return NULL;
}

ImmT ntokenizer_priv0is_hex_number(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 210
c_rt_lib0move(&___nl__1, string0is_digit(___nl__0));
#line 210
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 210
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 210
c_rt_lib0move(&___nl__3,___get_global_const(898));
#line 210
c_rt_lib0move(&___nl__1, c_rt_lib0ge(___nl__1, ___nl__3));
#line 210
c_rt_lib0clear(&___nl__3);
#line 210
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 210
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 210
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 210
c_rt_lib0move(&___nl__3,___get_global_const(899));
#line 210
c_rt_lib0move(&___nl__1, c_rt_lib0le(___nl__1, ___nl__3));
#line 210
c_rt_lib0clear(&___nl__3);
#line 210
label_3:
#line 210
c_rt_lib0clear(&___nl__2);
#line 210
label_2:
#line 210
if(c_rt_lib0check_true_native(___nl__1)){ goto label_1;}
#line 210
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 210
c_rt_lib0move(&___nl__3,___get_global_const(900));
#line 210
c_rt_lib0move(&___nl__1, c_rt_lib0ge(___nl__1, ___nl__3));
#line 210
c_rt_lib0clear(&___nl__3);
#line 210
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 210
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 210
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 210
c_rt_lib0move(&___nl__3,___get_global_const(901));
#line 210
c_rt_lib0move(&___nl__1, c_rt_lib0le(___nl__1, ___nl__3));
#line 210
c_rt_lib0clear(&___nl__3);
#line 210
label_4:
#line 210
c_rt_lib0clear(&___nl__2);
#line 210
label_1:
#line 210
c_rt_lib0clear(&___nl__0);
#line 210
return ___nl__1;
#line 210
c_rt_lib0clear(&___nl__1);
#line 210
c_rt_lib0clear(&___nl__0);
#line 210
return NULL;
}

ImmT ntokenizer_priv0try_get_operator(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ntokenizer_priv0__const__init();
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
#line 216
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_char_oper());
#line 216
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 216
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 216
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 216
label_3:
#line 216
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 216
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 216
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 217
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(157)));
#line 217
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 217
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(156)));
#line 217
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 217
c_rt_lib0clear(&___nl__10);
#line 217
c_rt_lib0move(&___nl__10, string0length(___nl__3));
#line 217
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 217
c_rt_lib0clear(&___nl__10);
#line 217
c_rt_lib0move(&___nl__8, c_rt_lib0lt(___nl__8, ___nl__9));
#line 217
c_rt_lib0clear(&___nl__9);
#line 217
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 217
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 217
c_rt_lib0clear(&___nl__8);
#line 217
goto label_2;
#line 217
goto label_5;
#line 217
label_5:
#line 217
c_rt_lib0clear(&___nl__8);
#line 218
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(885)));
#line 218
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(156)));
#line 218
c_rt_lib0move(&___nl__11, string0length(___nl__3));
#line 218
c_rt_lib0move(&___nl__8, c_std_lib0fast_substr(___nl__9, ___nl__10, ___nl__11));
#line 218
c_rt_lib0clear(&___nl__11);
#line 218
c_rt_lib0clear(&___nl__10);
#line 218
c_rt_lib0clear(&___nl__9);
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__3));
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 218
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 219
c_rt_lib0move(&___nl__11, ntokenizer_priv0get_char(&___nl__0));
#line 219
c_rt_lib0move(&___nl__9, string0is_letter(___nl__11));
#line 219
c_rt_lib0clear(&___nl__11);
#line 219
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__9));
#line 219
if(c_rt_lib0check_true_native(___nl__10)){ goto label_10;}
#line 219
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(885)));
#line 219
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(156)));
#line 219
c_rt_lib0move(&___nl__14, string0length(___nl__3));
#line 219
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 219
c_rt_lib0clear(&___nl__14);
#line 219
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 219
c_rt_lib0move(&___nl__11, c_std_lib0fast_substr(___nl__12, ___nl__13, ___nl__14));
#line 219
c_rt_lib0clear(&___nl__14);
#line 219
c_rt_lib0clear(&___nl__13);
#line 219
c_rt_lib0clear(&___nl__12);
#line 219
c_rt_lib0move(&___nl__9, string0is_letter(___nl__11));
#line 219
c_rt_lib0clear(&___nl__11);
#line 219
label_10:
#line 219
c_rt_lib0clear(&___nl__10);
#line 219
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 219
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 219
c_rt_lib0clear(&___nl__8);
#line 219
c_rt_lib0clear(&___nl__9);
#line 219
goto label_2;
#line 219
goto label_9;
#line 219
label_9:
#line 219
c_rt_lib0clear(&___nl__9);
#line 221
c_rt_lib0copy(___ref___1, ___nl__3);
#line 222
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 222
c_rt_lib0clear(&___nl__0);
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
#line 222
c_rt_lib0clear(&___nl__7);
#line 222
c_rt_lib0clear(&___nl__8);
#line 222
return ___nl__9;
#line 222
c_rt_lib0clear(&___nl__9);
#line 223
goto label_7;
#line 223
label_7:
#line 223
c_rt_lib0clear(&___nl__8);
#line 223
label_2:
#line 224
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 224
goto label_3;
#line 224
label_1:
#line 224
c_rt_lib0clear(&___nl__2);
#line 224
c_rt_lib0clear(&___nl__3);
#line 224
c_rt_lib0clear(&___nl__4);
#line 224
c_rt_lib0clear(&___nl__5);
#line 224
c_rt_lib0clear(&___nl__6);
#line 224
c_rt_lib0clear(&___nl__7);
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 225
c_rt_lib0clear(&___nl__0);
#line 225
return ___nl__2;
#line 225
c_rt_lib0clear(&___nl__2);
#line 225
c_rt_lib0clear(&___nl__0);
#line 225
return NULL;
}

ImmT ntokenizer_priv0get_next_token(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 228
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(887)));
#line 228
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 228
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(888)));
#line 228
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 228
c_rt_lib0clear(&___nl__4);
#line 228
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 228
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 228
c_rt_lib0clear(&___nl__4);
#line 228
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(98), ___nl__2, ___get_global_const(838), ___nl__3));
#line 228
c_rt_lib0clear(&___nl__2);
#line 228
c_rt_lib0clear(&___nl__3);
#line 228
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 228
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(890), ___nl__2);
#line 228
c_rt_lib0clear(&___nl__1);
#line 228
c_rt_lib0clear(&___nl__2);
#line 229
c_rt_lib0delete(ntokenizer_priv0eat_ws(___ref___0));
#line 230
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(887)));
#line 230
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 230
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(888)));
#line 230
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 230
c_rt_lib0clear(&___nl__4);
#line 230
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 230
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 230
c_rt_lib0clear(&___nl__4);
#line 230
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(98), ___nl__2, ___get_global_const(838), ___nl__3));
#line 230
c_rt_lib0clear(&___nl__2);
#line 230
c_rt_lib0clear(&___nl__3);
#line 230
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 230
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(889), ___nl__2);
#line 230
c_rt_lib0clear(&___nl__1);
#line 230
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(72)));
#line 232
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(95)));
#line 232
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 232
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
return NULL;
#line 232
goto label_2;
#line 232
label_2:
#line 232
c_rt_lib0clear(&___nl__1);
#line 233
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 233
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(157)));
#line 233
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 233
c_rt_lib0clear(&___nl__2);
#line 233
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 233
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 234
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(824)));
#line 234
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 234
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(72), ___nl__3);
#line 234
c_rt_lib0clear(&___nl__2);
#line 234
c_rt_lib0clear(&___nl__3);
#line 235
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 235
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 235
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(886), ___nl__3);
#line 235
c_rt_lib0clear(&___nl__2);
#line 235
c_rt_lib0clear(&___nl__3);
#line 236
c_rt_lib0clear(&___nl__1);
#line 236
return NULL;
#line 237
goto label_4;
#line 237
label_4:
#line 237
c_rt_lib0clear(&___nl__1);
#line 238
c_rt_lib0move(&___nl__1, ntokenizer_priv0get_char(___ref___0));
#line 239
c_rt_lib0move(&___nl__2,___get_global_const(421));
#line 239
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 239
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 239
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 240
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 240
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 240
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(886), ___nl__4);
#line 240
c_rt_lib0clear(&___nl__3);
#line 240
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(694)));
#line 241
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 241
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(72), ___nl__4);
#line 241
c_rt_lib0clear(&___nl__3);
#line 241
c_rt_lib0clear(&___nl__4);
#line 242
label_8:
#line 243
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 243
c_rt_lib0move(&___nl__4,___get_global_const(156));
#line 243
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 243
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__3));
#line 243
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 243
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 243
c_rt_lib0clear(&___nl__5);
#line 243
c_rt_lib0clear(&___nl__3);
#line 243
c_rt_lib0clear(&___nl__4);
#line 244
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_char(___ref___0));
#line 244
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 244
c_rt_lib0clear(&___nl__3);
#line 245
c_rt_lib0move(&___nl__3,___get_global_const(421));
#line 245
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 245
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 245
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 246
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 246
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 246
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 246
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 246
c_rt_lib0move(&___nl__6,___get_global_const(156));
#line 246
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 246
c_rt_lib0clear(&___nl__6);
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0clear(&___nl__5);
#line 247
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 247
c_rt_lib0move(&___nl__5,___get_global_const(421));
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 247
c_rt_lib0clear(&___nl__5);
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 247
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 247
c_rt_lib0clear(&___nl__1);
#line 247
c_rt_lib0clear(&___nl__2);
#line 247
c_rt_lib0clear(&___nl__3);
#line 247
c_rt_lib0clear(&___nl__4);
#line 247
return NULL;
#line 247
goto label_12;
#line 247
label_12:
#line 247
c_rt_lib0clear(&___nl__4);
#line 248
goto label_13;
#line 248
label_10:
#line 248
c_rt_lib0move(&___nl__3, string0ord(___nl__1));
#line 248
c_rt_lib0move(&___nl__4,___get_global_const(152));
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 248
c_rt_lib0clear(&___nl__4);
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 248
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(873)));
#line 249
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 249
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(72), ___nl__5);
#line 249
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0clear(&___nl__5);
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
c_rt_lib0clear(&___nl__2);
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
return NULL;
#line 251
goto label_13;
#line 251
label_13:
#line 251
c_rt_lib0clear(&___nl__3);
#line 252
c_rt_lib0move(&___nl__3,___get_global_const(886));
#line 252
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 252
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 252
c_rt_lib0move(&___nl__4,___get_global_const(886));
#line 252
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 252
c_rt_lib0clear(&___nl__4);
#line 252
c_rt_lib0clear(&___nl__3);
#line 242
goto label_8;
#line 254
goto label_5;
#line 254
label_6:
#line 254
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_next_char(___ref___0));
#line 254
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 254
c_rt_lib0move(&___nl__3,___get_global_const(170));
#line 254
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 254
c_rt_lib0clear(&___nl__3);
#line 254
if(c_rt_lib0check_true_native(___nl__2)){ goto label_15;}
#line 254
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_next_char(___ref___0));
#line 254
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 254
c_rt_lib0move(&___nl__3,___get_global_const(579));
#line 254
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 254
c_rt_lib0clear(&___nl__3);
#line 254
label_15:
#line 254
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 254
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 255
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(891)));
#line 255
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 255
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(72), ___nl__4);
#line 255
c_rt_lib0clear(&___nl__3);
#line 255
c_rt_lib0clear(&___nl__4);
#line 256
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_next_char(___ref___0));
#line 256
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 256
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 256
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(886), ___nl__4);
#line 256
c_rt_lib0clear(&___nl__3);
#line 256
c_rt_lib0clear(&___nl__4);
#line 257
c_rt_lib0move(&___nl__3,___get_global_const(137));
#line 257
c_rt_lib0move(&___nl__4,___get_global_const(156));
#line 257
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 257
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__3));
#line 257
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 257
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 257
c_rt_lib0clear(&___nl__5);
#line 257
c_rt_lib0clear(&___nl__3);
#line 257
c_rt_lib0clear(&___nl__4);
#line 258
goto label_5;
#line 258
label_14:
#line 258
c_rt_lib0move(&___nl__3,___get_global_const(902));
#line 258
c_rt_lib0move(&___nl__2, string0index2(___nl__3, ___nl__1));
#line 258
c_rt_lib0clear(&___nl__3);
#line 258
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 258
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__2, ___nl__3));
#line 258
c_rt_lib0clear(&___nl__3);
#line 258
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 258
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(891)));
#line 259
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 259
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(72), ___nl__4);
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
c_rt_lib0clear(&___nl__4);
#line 260
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 260
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(886), ___nl__3);
#line 260
c_rt_lib0clear(&___nl__3);
#line 261
c_rt_lib0move(&___nl__3,___get_global_const(156));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 261
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 261
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 261
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 261
c_rt_lib0clear(&___nl__5);
#line 261
c_rt_lib0clear(&___nl__3);
#line 261
c_rt_lib0clear(&___nl__4);
#line 262
goto label_5;
#line 262
label_16:
#line 262
c_rt_lib0move(&___nl__2, string0is_letter(___nl__1));
#line 262
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 262
if(c_rt_lib0check_true_native(___nl__2)){ goto label_17;}
#line 263
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 263
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(886), ___nl__3);
#line 263
c_rt_lib0clear(&___nl__3);
#line 264
c_rt_lib0move(&___nl__3,___get_global_const(156));
#line 264
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 264
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 264
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 264
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 264
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 264
c_rt_lib0clear(&___nl__5);
#line 264
c_rt_lib0clear(&___nl__3);
#line 264
c_rt_lib0clear(&___nl__4);
#line 265
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_char(___ref___0));
#line 265
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 265
c_rt_lib0clear(&___nl__3);
#line 266
label_19:
#line 266
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0ne(___nl__1, ___nl__3));
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 266
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 266
c_rt_lib0move(&___nl__3, string0is_letter(___nl__1));
#line 266
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 266
c_rt_lib0move(&___nl__3, string0is_digit(___nl__1));
#line 266
label_22:
#line 266
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 266
c_rt_lib0move(&___nl__3,___get_global_const(163));
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 266
label_21:
#line 266
c_rt_lib0clear(&___nl__4);
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 266
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 267
c_rt_lib0move(&___nl__4,___get_global_const(886));
#line 267
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 267
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 267
c_rt_lib0move(&___nl__5,___get_global_const(886));
#line 267
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 267
c_rt_lib0clear(&___nl__5);
#line 267
c_rt_lib0clear(&___nl__4);
#line 268
c_rt_lib0move(&___nl__4,___get_global_const(156));
#line 268
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 268
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 268
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 268
c_rt_lib0move(&___nl__6,___get_global_const(156));
#line 268
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 268
c_rt_lib0clear(&___nl__6);
#line 268
c_rt_lib0clear(&___nl__4);
#line 268
c_rt_lib0clear(&___nl__5);
#line 269
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 269
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 269
c_rt_lib0clear(&___nl__4);
#line 270
goto label_19;
#line 270
label_18:
#line 270
c_rt_lib0clear(&___nl__3);
#line 271
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_lett_oper());
#line 271
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(886)));
#line 271
c_rt_lib0move(&___nl__3, hash0has_key(___nl__4, ___nl__5));
#line 271
c_rt_lib0clear(&___nl__5);
#line 271
c_rt_lib0clear(&___nl__4);
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 271
if(c_rt_lib0check_true_native(___nl__3)){ goto label_24;}
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(874)));
#line 272
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 272
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(72), ___nl__5);
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0clear(&___nl__5);
#line 273
goto label_23;
#line 273
label_24:
#line 274
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_keywords());
#line 274
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(886)));
#line 274
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__6));
#line 274
c_rt_lib0clear(&___nl__6);
#line 274
c_rt_lib0clear(&___nl__5);
#line 274
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 274
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(861)));
#line 274
goto label_25;
#line 274
label_26:
#line 274
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(876)));
#line 274
label_25:
#line 274
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 274
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(72), ___nl__5);
#line 274
c_rt_lib0clear(&___nl__4);
#line 274
c_rt_lib0clear(&___nl__5);
#line 275
goto label_23;
#line 275
label_23:
#line 275
c_rt_lib0clear(&___nl__3);
#line 276
goto label_5;
#line 276
label_17:
#line 276
c_rt_lib0move(&___nl__2, ntokenizer_priv0try_get_operator(*___ref___0, &___nl__1));
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 276
if(c_rt_lib0check_true_native(___nl__2)){ goto label_27;}
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(874)));
#line 277
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 277
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(72), ___nl__4);
#line 277
c_rt_lib0clear(&___nl__3);
#line 277
c_rt_lib0clear(&___nl__4);
#line 278
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 278
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(886), ___nl__3);
#line 278
c_rt_lib0clear(&___nl__3);
#line 279
c_rt_lib0move(&___nl__3, string0length(___nl__1));
#line 279
c_rt_lib0move(&___nl__4,___get_global_const(156));
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__3));
#line 279
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 279
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 279
c_rt_lib0clear(&___nl__5);
#line 279
c_rt_lib0clear(&___nl__3);
#line 279
c_rt_lib0clear(&___nl__4);
#line 280
goto label_5;
#line 280
label_27:
#line 280
c_rt_lib0move(&___nl__2, string0is_digit(___nl__1));
#line 280
if(c_rt_lib0check_true_native(___nl__2)){ goto label_29;}
#line 280
c_rt_lib0move(&___nl__2,___get_global_const(245));
#line 280
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 280
if(c_rt_lib0check_true_native(___nl__2)){ goto label_31;}
#line 280
c_rt_lib0move(&___nl__2,___get_global_const(247));
#line 280
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 280
label_31:
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 280
if(c_rt_lib0check_true_native(___nl__3)){ goto label_30;}
#line 280
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_next_char(___ref___0));
#line 280
c_rt_lib0move(&___nl__2, string0is_digit(___nl__4));
#line 280
c_rt_lib0clear(&___nl__4);
#line 280
label_30:
#line 280
c_rt_lib0clear(&___nl__3);
#line 280
label_29:
#line 280
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 280
if(c_rt_lib0check_true_native(___nl__2)){ goto label_28;}
#line 281
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 281
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(886), ___nl__3);
#line 281
c_rt_lib0clear(&___nl__3);
#line 282
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(872)));
#line 282
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 282
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(72), ___nl__4);
#line 282
c_rt_lib0clear(&___nl__3);
#line 282
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0move(&___nl__3,___get_global_const(156));
#line 283
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 283
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 283
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 283
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 283
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
c_rt_lib0clear(&___nl__4);
#line 284
c_rt_lib0move(&___nl__3,___get_global_const(245));
#line 284
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 284
if(c_rt_lib0check_true_native(___nl__3)){ goto label_34;}
#line 284
c_rt_lib0move(&___nl__3,___get_global_const(247));
#line 284
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 284
label_34:
#line 284
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 284
if(c_rt_lib0check_true_native(___nl__3)){ goto label_33;}
#line 285
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 285
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 285
c_rt_lib0clear(&___nl__4);
#line 286
c_rt_lib0move(&___nl__4,___get_global_const(886));
#line 286
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 286
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 286
c_rt_lib0move(&___nl__5,___get_global_const(886));
#line 286
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 286
c_rt_lib0clear(&___nl__5);
#line 286
c_rt_lib0clear(&___nl__4);
#line 287
c_rt_lib0move(&___nl__4,___get_global_const(156));
#line 287
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 287
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 287
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 287
c_rt_lib0move(&___nl__6,___get_global_const(156));
#line 287
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 287
c_rt_lib0clear(&___nl__6);
#line 287
c_rt_lib0clear(&___nl__4);
#line 287
c_rt_lib0clear(&___nl__5);
#line 288
goto label_33;
#line 288
label_33:
#line 288
c_rt_lib0clear(&___nl__3);
#line 289
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 289
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 289
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__3));
#line 289
if(c_rt_lib0check_true_native(___nl__5)){ goto label_38;}
#line 289
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_char(___ref___0));
#line 289
c_rt_lib0move(&___nl__6,___get_global_const(903));
#line 289
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__6));
#line 289
c_rt_lib0clear(&___nl__6);
#line 289
label_38:
#line 289
c_rt_lib0clear(&___nl__5);
#line 289
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 289
if(c_rt_lib0check_true_native(___nl__4)){ goto label_37;}
#line 289
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_next_char(___ref___0));
#line 289
c_rt_lib0move(&___nl__3, ntokenizer_priv0is_hex_number(___nl__5));
#line 289
c_rt_lib0clear(&___nl__5);
#line 289
label_37:
#line 289
c_rt_lib0clear(&___nl__4);
#line 289
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 289
if(c_rt_lib0check_true_native(___nl__3)){ goto label_36;}
#line 290
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 290
c_rt_lib0move(&___nl__5,___get_global_const(886));
#line 290
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 290
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 290
c_rt_lib0move(&___nl__6,___get_global_const(886));
#line 290
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 290
c_rt_lib0clear(&___nl__6);
#line 290
c_rt_lib0clear(&___nl__4);
#line 290
c_rt_lib0clear(&___nl__5);
#line 291
c_rt_lib0move(&___nl__4,___get_global_const(156));
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 291
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 291
c_rt_lib0move(&___nl__6,___get_global_const(156));
#line 291
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 291
c_rt_lib0clear(&___nl__6);
#line 291
c_rt_lib0clear(&___nl__4);
#line 291
c_rt_lib0clear(&___nl__5);
#line 292
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 292
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 292
c_rt_lib0clear(&___nl__4);
#line 293
label_40:
#line 293
c_rt_lib0move(&___nl__4, ntokenizer_priv0is_hex_number(___nl__1));
#line 293
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 293
if(c_rt_lib0check_true_native(___nl__4)){ goto label_39;}
#line 294
c_rt_lib0move(&___nl__5,___get_global_const(886));
#line 294
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 294
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 294
c_rt_lib0move(&___nl__6,___get_global_const(886));
#line 294
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 294
c_rt_lib0clear(&___nl__6);
#line 294
c_rt_lib0clear(&___nl__5);
#line 295
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 295
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 295
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 295
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 295
c_rt_lib0move(&___nl__7,___get_global_const(156));
#line 295
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 295
c_rt_lib0clear(&___nl__7);
#line 295
c_rt_lib0clear(&___nl__5);
#line 295
c_rt_lib0clear(&___nl__6);
#line 296
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_char(___ref___0));
#line 296
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 296
c_rt_lib0clear(&___nl__5);
#line 297
goto label_40;
#line 297
label_39:
#line 297
c_rt_lib0clear(&___nl__4);
#line 298
goto label_35;
#line 298
label_36:
#line 299
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 300
label_42:
#line 301
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_char(___ref___0));
#line 301
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 301
c_rt_lib0clear(&___nl__5);
#line 302
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 302
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 302
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 302
if(c_rt_lib0check_true_native(___nl__5)){ goto label_44;}
#line 302
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 302
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 302
c_rt_lib0clear(&___nl__6);
#line 302
goto label_44;
#line 302
label_44:
#line 302
c_rt_lib0clear(&___nl__5);
#line 303
c_rt_lib0move(&___nl__5,___get_global_const(81));
#line 303
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__1, ___nl__5));
#line 303
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__5));
#line 303
if(c_rt_lib0check_true_native(___nl__7)){ goto label_48;}
#line 303
c_rt_lib0move(&___nl__8, ntokenizer_priv0get_next_char(___ref___0));
#line 303
c_rt_lib0move(&___nl__5, string0is_digit(___nl__8));
#line 303
c_rt_lib0clear(&___nl__8);
#line 303
label_48:
#line 303
c_rt_lib0clear(&___nl__7);
#line 303
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 303
if(c_rt_lib0check_true_native(___nl__6)){ goto label_47;}
#line 303
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 303
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 303
label_47:
#line 303
c_rt_lib0clear(&___nl__6);
#line 303
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 303
if(c_rt_lib0check_true_native(___nl__5)){ goto label_46;}
#line 303
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 303
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 303
c_rt_lib0clear(&___nl__6);
#line 303
goto label_46;
#line 303
label_46:
#line 303
c_rt_lib0clear(&___nl__5);
#line 304
c_rt_lib0move(&___nl__5, string0is_digit(___nl__1));
#line 304
if(c_rt_lib0check_true_native(___nl__5)){ goto label_51;}
#line 304
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 304
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 304
label_51:
#line 304
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 304
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 304
if(c_rt_lib0check_true_native(___nl__5)){ goto label_50;}
#line 304
c_rt_lib0clear(&___nl__5);
#line 304
goto label_41;
#line 304
goto label_50;
#line 304
label_50:
#line 304
c_rt_lib0clear(&___nl__5);
#line 305
c_rt_lib0move(&___nl__5,___get_global_const(886));
#line 305
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 305
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 305
c_rt_lib0move(&___nl__6,___get_global_const(886));
#line 305
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 305
c_rt_lib0clear(&___nl__6);
#line 305
c_rt_lib0clear(&___nl__5);
#line 306
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 306
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 306
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 306
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 306
c_rt_lib0move(&___nl__7,___get_global_const(156));
#line 306
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 306
c_rt_lib0clear(&___nl__7);
#line 306
c_rt_lib0clear(&___nl__5);
#line 306
c_rt_lib0clear(&___nl__6);
#line 300
goto label_42;
#line 300
label_41:
#line 300
c_rt_lib0clear(&___nl__4);
#line 308
goto label_35;
#line 308
label_35:
#line 308
c_rt_lib0clear(&___nl__3);
#line 309
goto label_5;
#line 309
label_28:
#line 310
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(95)));
#line 310
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 310
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(72), ___nl__4);
#line 310
c_rt_lib0clear(&___nl__3);
#line 310
c_rt_lib0clear(&___nl__4);
#line 311
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 311
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(886), ___nl__3);
#line 311
c_rt_lib0clear(&___nl__3);
#line 312
goto label_5;
#line 312
label_5:
#line 312
c_rt_lib0clear(&___nl__2);
#line 312
c_rt_lib0clear(&___nl__1);
#line 312
return NULL;
}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void ntokenizer_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}}
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
