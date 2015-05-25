
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "string_compiler.h"
#include "nlasm.h"
#include "translator.h"
#include "nparser.h"
#include "module_checker.h"
#include "type_checker.h"
#include "array.h"
#include "hash.h"
#include "generator_js.h"
#include "post_processing.h"
#include "ptd.h"
#line 1 "string_compiler.nl"

static ImmT *__const__f = NULL;
void string_compiler_priv0__const__init();
ImmT string_compiler_priv0__const__sim(int __nr);
ImmT string_compiler_priv0__const__sing(int __nr);



ImmT string_compiler0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_compiler0compile");
return string_compiler0compile(_tab[0], _tab[1]);}
ImmT string_compiler0compile(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 19
c_rt_lib0move(&___nl__2, nparser0sparse(___nl__0, ___nl__1));
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 21
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__2, ___get_global_const(44)));
#line 21
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 31
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__2, ___get_global_const(95)));
#line 31
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 31
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 31
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__2));
#line 31
nl_die_arg(___nl__4);
#line 21
label_2:
#line 21
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__2, ___get_global_const(44)));
#line 22
c_rt_lib0move(&___nl__6, module_checker0check_module(___nl__5));
#line 23
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(17)));
#line 23
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 23
c_rt_lib0clear(&___nl__7);
#line 24
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 24
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 24
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__8));
#line 24
c_rt_lib0clear(&___nl__8);
#line 24
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 24
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 25
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 26
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(76)));
#line 26
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__9, ___nl__5));
#line 26
c_rt_lib0clear(&___nl__9);
#line 27
c_rt_lib0move(&___nl__9, type_checker0check_modules(___nl__8, ___nl__8));
#line 28
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(17)));
#line 28
c_rt_lib0copy(&___nl__3, ___nl__10);
#line 28
c_rt_lib0clear(&___nl__10);
#line 28
c_rt_lib0clear(&___nl__8);
#line 28
c_rt_lib0clear(&___nl__9);
#line 29
goto label_5;
#line 29
label_5:
#line 29
c_rt_lib0clear(&___nl__7);
#line 30
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 30
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 30
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__8));
#line 30
c_rt_lib0clear(&___nl__8);
#line 30
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 30
if(c_rt_lib0check_true_native(___nl__7)){ goto label_7;}
#line 30
c_rt_lib0move(&___nl__8, translator0translate(___nl__5));
#line 30
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__8));
#line 30
c_rt_lib0clear(&___nl__0);
#line 30
c_rt_lib0clear(&___nl__1);
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0clear(&___nl__5);
#line 30
c_rt_lib0clear(&___nl__6);
#line 30
c_rt_lib0clear(&___nl__7);
#line 30
return ___nl__8;
#line 30
c_rt_lib0clear(&___nl__8);
#line 30
goto label_7;
#line 30
label_7:
#line 30
c_rt_lib0clear(&___nl__7);
#line 30
c_rt_lib0clear(&___nl__6);
#line 30
c_rt_lib0clear(&___nl__5);
#line 31
goto label_1;
#line 31
label_3:
#line 31
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__2, ___get_global_const(95)));
#line 32
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 32
c_rt_lib0clear(&___nl__5);
#line 33
goto label_1;
#line 33
label_1:
#line 33
c_rt_lib0clear(&___nl__4);
#line 34
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 34
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__3, ___nl__6));
#line 34
c_rt_lib0clear(&___nl__6);
#line 34
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(98)));
#line 34
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 34
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 34
c_rt_lib0clear(&___nl__7);
#line 34
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(97)));
#line 34
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(98), ___nl__5, ___get_global_const(1002), ___nl__6));
#line 34
c_rt_lib0clear(&___nl__5);
#line 34
c_rt_lib0clear(&___nl__6);
#line 34
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__4));
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0clear(&___nl__3);
#line 34
return ___nl__4;
#line 34
c_rt_lib0clear(&___nl__4);
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0clear(&___nl__3);
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
return NULL;
}

ImmT string_compiler0compile_to_nlasm0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0compile_to_nlasm");
return string_compiler0compile_to_nlasm(_tab[0]);}
ImmT string_compiler0compile_to_nlasm(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_compiler_priv0__const__init();
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
#line 38
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 39
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 40
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 40
label_3:
#line 40
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 40
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 40
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 40
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 41
c_rt_lib0move(&___nl__6, nparser0sparse(___nl__4, ___nl__3));
#line 41
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 41
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 47
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(95)));
#line 47
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 47
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 47
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 47
nl_die_arg(___nl__7);
#line 41
label_5:
#line 41
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 42
c_rt_lib0move(&___nl__9, module_checker0check_module(___nl__8));
#line 43
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(17)));
#line 43
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 43
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 43
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 43
label_9:
#line 43
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 43
if(c_rt_lib0check_true_native(___nl__15)){ goto label_7;}
#line 43
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 44
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(97)));
#line 44
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(98)));
#line 44
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(3, ___get_global_const(97), ___nl__17, ___get_global_const(98), ___nl__18, ___get_global_const(99), ___nl__3));
#line 44
c_rt_lib0clear(&___nl__17);
#line 44
c_rt_lib0clear(&___nl__18);
#line 44
c_rt_lib0delete(array0push(&___nl__1, ___nl__16));
#line 44
c_rt_lib0clear(&___nl__16);
#line 45
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 45
goto label_9;
#line 45
label_7:
#line 45
c_rt_lib0clear(&___nl__10);
#line 45
c_rt_lib0clear(&___nl__11);
#line 45
c_rt_lib0clear(&___nl__12);
#line 45
c_rt_lib0clear(&___nl__13);
#line 45
c_rt_lib0clear(&___nl__14);
#line 45
c_rt_lib0clear(&___nl__15);
#line 46
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__8));
#line 46
c_rt_lib0clear(&___nl__9);
#line 46
c_rt_lib0clear(&___nl__8);
#line 47
goto label_4;
#line 47
label_6:
#line 47
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(95)));
#line 48
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 48
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 48
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 48
label_12:
#line 48
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 48
if(c_rt_lib0check_true_native(___nl__13)){ goto label_10;}
#line 48
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 49
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(97)));
#line 49
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(98)));
#line 49
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(3, ___get_global_const(97), ___nl__15, ___get_global_const(98), ___nl__16, ___get_global_const(99), ___nl__3));
#line 49
c_rt_lib0clear(&___nl__15);
#line 49
c_rt_lib0clear(&___nl__16);
#line 49
c_rt_lib0delete(array0push(&___nl__1, ___nl__14));
#line 49
c_rt_lib0clear(&___nl__14);
#line 50
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 50
goto label_12;
#line 50
label_10:
#line 50
c_rt_lib0clear(&___nl__9);
#line 50
c_rt_lib0clear(&___nl__10);
#line 50
c_rt_lib0clear(&___nl__11);
#line 50
c_rt_lib0clear(&___nl__12);
#line 50
c_rt_lib0clear(&___nl__13);
#line 50
c_rt_lib0clear(&___nl__8);
#line 51
goto label_4;
#line 51
label_4:
#line 51
c_rt_lib0clear(&___nl__6);
#line 51
c_rt_lib0clear(&___nl__7);
#line 52
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 52
goto label_3;
#line 52
label_1:
#line 52
c_rt_lib0clear(&___nl__3);
#line 52
c_rt_lib0clear(&___nl__4);
#line 52
c_rt_lib0clear(&___nl__5);
#line 53
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 53
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__1));
#line 53
c_rt_lib0clear(&___nl__0);
#line 53
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
return ___nl__4;
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
goto label_14;
#line 53
label_14:
#line 53
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0move(&___nl__3, type_checker0check_modules(___nl__2, ___nl__2));
#line 56
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 56
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 56
c_rt_lib0clear(&___nl__5);
#line 56
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 56
c_rt_lib0move(&___nl__4, c_rt_lib0gt(___nl__4, ___nl__5));
#line 56
c_rt_lib0clear(&___nl__5);
#line 56
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 56
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 56
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 56
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__5));
#line 56
c_rt_lib0clear(&___nl__0);
#line 56
c_rt_lib0clear(&___nl__1);
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0clear(&___nl__3);
#line 56
c_rt_lib0clear(&___nl__4);
#line 56
return ___nl__5;
#line 56
c_rt_lib0clear(&___nl__5);
#line 56
goto label_16;
#line 56
label_16:
#line 56
c_rt_lib0clear(&___nl__4);
#line 58
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 59
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__2));
#line 59
label_19:
#line 59
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 59
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 59
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 59
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__2, ___nl__5));
#line 60
c_rt_lib0move(&___nl__8, translator0translate(___nl__6));
#line 60
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__5, ___nl__8));
#line 60
c_rt_lib0clear(&___nl__8);
#line 61
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 61
goto label_19;
#line 61
label_17:
#line 61
c_rt_lib0clear(&___nl__5);
#line 61
c_rt_lib0clear(&___nl__6);
#line 61
c_rt_lib0clear(&___nl__7);
#line 62
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 62
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 62
c_rt_lib0move(&___nl__5, post_processing0init(___nl__6, ___nl__7));
#line 62
c_rt_lib0clear(&___nl__7);
#line 62
c_rt_lib0clear(&___nl__6);
#line 63
c_rt_lib0delete(post_processing0find(&___nl__5, &___nl__4));
#line 64
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 64
c_rt_lib0clear(&___nl__0);
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
return ___nl__6;
#line 64
c_rt_lib0clear(&___nl__6);
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
c_rt_lib0clear(&___nl__0);
#line 64
return NULL;
}

ImmT string_compiler0compile_to_js0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0compile_to_js");
return string_compiler0compile_to_js(_tab[0]);}
ImmT string_compiler0compile_to_js(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 69
c_rt_lib0move(&___nl__3, string_compiler0compile_to_nlasm(___nl__0));
#line 69
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(44)));
#line 69
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 69
c_rt_lib0clear(&___nl__0);
#line 69
c_rt_lib0clear(&___nl__1);
#line 69
c_rt_lib0clear(&___nl__2);
#line 69
return ___nl__3;
#line 69
label_1:
#line 69
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(44)));
#line 69
c_rt_lib0clear(&___nl__2);
#line 69
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 71
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__1));
#line 71
label_4:
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 71
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 71
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__1, ___nl__3));
#line 72
c_rt_lib0move(&___nl__6, generator_js0generate(___nl__4));
#line 72
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__6));
#line 72
c_rt_lib0clear(&___nl__6);
#line 73
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 73
goto label_4;
#line 73
label_2:
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0clear(&___nl__4);
#line 73
c_rt_lib0clear(&___nl__5);
#line 74
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__2));
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
return ___nl__3;
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void string_compiler_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT string_compiler_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT string_compiler_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
