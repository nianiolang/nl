
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
#include "pretty_printer.h"
#include "nast.h"
#include "compiler_lib.h"
#include "compiler_lib.h"
#line 1 "string_compiler.nl"

static ImmT *__const__f = NULL;
ImmT string_compiler_priv0__const__sim(int __nr);
ImmT string_compiler_priv0__const__sing(int __nr);



ImmT string_compiler0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_compiler0compile");
return string_compiler0compile(_tab[0], _tab[1]);}
ImmT string_compiler0compile(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
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
#line 24
c_rt_lib0move(&___nl__2, nparser0sparse(___nl__0, ___nl__1));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(48)));
#line 25
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 38
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(112)));
#line 38
if(c_rt_lib0check_true_native(___nl__3)){ goto label_75;}
#line 38
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 38
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 38
nl_die_arg(___nl__3);
#line 25
label_8:
#line 25
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(48)));
#line 26
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 27
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 28
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 28
c_rt_lib0move(&___nl__7, module_checker0check_module(___nl__4, ___nl__8, &___nl__6));
#line 28
c_rt_lib0clear(&___nl__8);
#line 29
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(18)));
#line 29
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 29
c_rt_lib0clear(&___nl__8);
#line 30
c_rt_lib0move(&___nl__8, array0len(___nl__5));
#line 30
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 30
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 30
c_rt_lib0clear(&___nl__9);
#line 30
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 30
if(c_rt_lib0check_true_native(___nl__8)){ goto label_35;}
#line 31
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 32
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 32
c_rt_lib0delete(hash0set_value(&___nl__9, ___nl__10, ___nl__4));
#line 32
c_rt_lib0clear(&___nl__10);
#line 33
c_rt_lib0move(&___nl__10, type_checker0check_modules(___nl__9, ___nl__9));
#line 34
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(18)));
#line 34
c_rt_lib0copy(&___nl__5, ___nl__11);
#line 34
c_rt_lib0clear(&___nl__11);
#line 34
c_rt_lib0clear(&___nl__9);
#line 34
c_rt_lib0clear(&___nl__10);
#line 35
goto label_35;
#line 35
label_35:
#line 35
c_rt_lib0clear(&___nl__8);
#line 36
c_rt_lib0move(&___nl__8, array0len(___nl__5));
#line 36
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 36
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 36
c_rt_lib0clear(&___nl__9);
#line 36
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 36
if(c_rt_lib0check_true_native(___nl__8)){ goto label_57;}
#line 36
c_rt_lib0move(&___nl__9, translator0translate(___nl__4));
#line 36
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__9));
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
c_rt_lib0clear(&___nl__1);
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
c_rt_lib0clear(&___nl__8);
#line 36
return ___nl__9;
#line 36
c_rt_lib0clear(&___nl__9);
#line 36
goto label_57;
#line 36
label_57:
#line 36
c_rt_lib0clear(&___nl__8);
#line 37
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__5));
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__3);
#line 37
c_rt_lib0clear(&___nl__4);
#line 37
c_rt_lib0clear(&___nl__5);
#line 37
c_rt_lib0clear(&___nl__6);
#line 37
c_rt_lib0clear(&___nl__7);
#line 37
return ___nl__8;
#line 37
c_rt_lib0clear(&___nl__8);
#line 37
c_rt_lib0clear(&___nl__5);
#line 37
c_rt_lib0clear(&___nl__6);
#line 37
c_rt_lib0clear(&___nl__7);
#line 37
c_rt_lib0clear(&___nl__4);
#line 38
goto label_87;
#line 38
label_75:
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(112)));
#line 39
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__4));
#line 39
c_rt_lib0clear(&___nl__0);
#line 39
c_rt_lib0clear(&___nl__1);
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0clear(&___nl__4);
#line 39
return ___nl__5;
#line 39
c_rt_lib0clear(&___nl__5);
#line 39
c_rt_lib0clear(&___nl__4);
#line 40
goto label_87;
#line 40
label_87:
#line 40
c_rt_lib0clear(&___nl__3);
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
c_rt_lib0clear(&___nl__1);
#line 40
return NULL;
}

ImmT string_compiler0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0modules_t");
return string_compiler0modules_t();}
ImmT string_compiler0modules_t(){
return string_compiler_priv0__const__sing(0);}
ImmT string_compiler0modules_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 44
c_rt_lib0move(&___nl__3, ptd0sim());
#line 44
c_rt_lib0move(&___nl__4, ptd0sim());
#line 44
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(1107), ___nl__3, ___get_global_const(186), ___nl__4));
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
return ___nl__0;
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return NULL;
}

ImmT string_compiler0type_check_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0type_check_t");
return string_compiler0type_check_t();}
ImmT string_compiler0type_check_t(){
return string_compiler_priv0__const__sing(1);}
ImmT string_compiler0type_check_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 48
c_rt_lib0move(&___nl__4, ptd0sim());
#line 48
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0move(&___nl__5, ptd0sim());
#line 48
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(1082), ___nl__3, ___get_global_const(1108), ___nl__4));
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 48
c_rt_lib0clear(&___nl__1);
#line 48
return ___nl__0;
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
return NULL;
}

ImmT string_compiler0printed_struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0printed_struct_t");
return string_compiler0printed_struct_t();}
ImmT string_compiler0printed_struct_t(){
return string_compiler_priv0__const__sing(2);}
ImmT string_compiler0printed_struct_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 53
c_rt_lib0move(&___nl__3, ptd0sim());
#line 53
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 53
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0move(&___nl__6, ptd0sim());
#line 54
c_rt_lib0move(&___nl__7, ptd0sim());
#line 54
c_rt_lib0move(&___nl__8, ptd0sim());
#line 54
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__6, ___get_global_const(1001), ___nl__7, ___get_global_const(1002), ___nl__8));
#line 54
c_rt_lib0clear(&___nl__6);
#line 54
c_rt_lib0clear(&___nl__7);
#line 54
c_rt_lib0clear(&___nl__8);
#line 54
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 54
c_rt_lib0clear(&___nl__5);
#line 54
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(384), ___nl__2, ___get_global_const(92), ___nl__3));
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
return ___nl__0;
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
return NULL;
}

ImmT string_compiler0error_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0error_t");
return string_compiler0error_t();}
ImmT string_compiler0error_t(){
return string_compiler_priv0__const__sing(3);}
ImmT string_compiler0error_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(20), ___get_global_const(21)));
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 59
c_rt_lib0move(&___nl__3, ptd0sim());
#line 59
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(112), ___nl__2, ___get_global_const(329), ___nl__3));
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 59
c_rt_lib0clear(&___nl__1);
#line 59
return ___nl__0;
#line 59
c_rt_lib0clear(&___nl__0);
#line 59
return NULL;
}

ImmT string_compiler0print_modules0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0print_modules");
return string_compiler0print_modules(_tab[0]);}
ImmT string_compiler0print_modules(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 63
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 64
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 64
label_2:
#line 64
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 64
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 64
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 65
c_rt_lib0move(&___nl__5, pretty_printer0print_module_to_struct(___nl__3));
#line 65
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__2, ___nl__5));
#line 65
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 66
goto label_2;
#line 66
label_12:
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__4);
#line 67
c_rt_lib0clear(&___nl__0);
#line 67
return ___nl__1;
#line 67
c_rt_lib0clear(&___nl__1);
#line 67
c_rt_lib0clear(&___nl__0);
#line 67
return NULL;
}

ImmT string_compiler0parse_module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0parse_module");
return string_compiler0parse_module(_tab[0]);}
ImmT string_compiler0parse_module(ImmT ___nl__0) {
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
#line 74
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 75
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 76
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 76
label_3:
#line 76
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 76
if(c_rt_lib0check_true_native(___nl__3)){ goto label_78;}
#line 76
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 76
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 77
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1107)));
#line 77
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(186)));
#line 77
c_rt_lib0move(&___nl__6, nparser0sparse(___nl__7, ___nl__8));
#line 77
c_rt_lib0clear(&___nl__8);
#line 77
c_rt_lib0clear(&___nl__7);
#line 77
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 77
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 84
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(112)));
#line 84
if(c_rt_lib0check_true_native(___nl__7)){ goto label_51;}
#line 84
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 84
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 84
nl_die_arg(___nl__7);
#line 77
label_20:
#line 77
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 78
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 79
c_rt_lib0move(&___nl__11, c_rt_lib0get_false());
#line 79
c_rt_lib0move(&___nl__10, module_checker0check_module(___nl__8, ___nl__11, &___nl__9));
#line 79
c_rt_lib0clear(&___nl__11);
#line 80
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(18)));
#line 80
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 80
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 80
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 80
label_30:
#line 80
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 80
if(c_rt_lib0check_true_native(___nl__16)){ goto label_39;}
#line 80
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 81
c_rt_lib0move(&___nl__17, c_rt_lib0hash_mk(2, ___get_global_const(112), ___nl__12, ___get_global_const(329), ___nl__3));
#line 81
c_rt_lib0delete(array0push(&___nl__1, ___nl__17));
#line 81
c_rt_lib0clear(&___nl__17);
#line 82
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 82
goto label_30;
#line 82
label_39:
#line 82
c_rt_lib0clear(&___nl__11);
#line 82
c_rt_lib0clear(&___nl__12);
#line 82
c_rt_lib0clear(&___nl__13);
#line 82
c_rt_lib0clear(&___nl__14);
#line 82
c_rt_lib0clear(&___nl__15);
#line 82
c_rt_lib0clear(&___nl__16);
#line 83
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__8));
#line 83
c_rt_lib0clear(&___nl__9);
#line 83
c_rt_lib0clear(&___nl__10);
#line 83
c_rt_lib0clear(&___nl__8);
#line 84
goto label_73;
#line 84
label_51:
#line 84
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(112)));
#line 85
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 85
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 85
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 85
label_56:
#line 85
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 85
if(c_rt_lib0check_true_native(___nl__13)){ goto label_65;}
#line 85
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 86
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(112), ___nl__9, ___get_global_const(329), ___nl__3));
#line 86
c_rt_lib0delete(array0push(&___nl__1, ___nl__14));
#line 86
c_rt_lib0clear(&___nl__14);
#line 87
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 87
goto label_56;
#line 87
label_65:
#line 87
c_rt_lib0clear(&___nl__9);
#line 87
c_rt_lib0clear(&___nl__10);
#line 87
c_rt_lib0clear(&___nl__11);
#line 87
c_rt_lib0clear(&___nl__12);
#line 87
c_rt_lib0clear(&___nl__13);
#line 87
c_rt_lib0clear(&___nl__8);
#line 88
goto label_73;
#line 88
label_73:
#line 88
c_rt_lib0clear(&___nl__6);
#line 88
c_rt_lib0clear(&___nl__7);
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 89
goto label_3;
#line 89
label_78:
#line 89
c_rt_lib0clear(&___nl__3);
#line 89
c_rt_lib0clear(&___nl__4);
#line 89
c_rt_lib0clear(&___nl__5);
#line 90
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 90
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 90
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__4));
#line 90
c_rt_lib0clear(&___nl__4);
#line 90
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 90
if(c_rt_lib0check_true_native(___nl__3)){ goto label_96;}
#line 90
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__1));
#line 90
c_rt_lib0clear(&___nl__0);
#line 90
c_rt_lib0clear(&___nl__1);
#line 90
c_rt_lib0clear(&___nl__2);
#line 90
c_rt_lib0clear(&___nl__3);
#line 90
return ___nl__4;
#line 90
c_rt_lib0clear(&___nl__4);
#line 90
goto label_96;
#line 90
label_96:
#line 90
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__2));
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
c_rt_lib0clear(&___nl__1);
#line 91
c_rt_lib0clear(&___nl__2);
#line 91
return ___nl__3;
#line 91
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0clear(&___nl__1);
#line 91
c_rt_lib0clear(&___nl__2);
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
return NULL;
}

ImmT string_compiler0check_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_compiler0check_type");
return string_compiler0check_type(_tab[0], _tab[1]);}
ImmT string_compiler0check_type(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
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
#line 98
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 99
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 99
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 99
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__0));
#line 99
label_4:
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 99
if(c_rt_lib0check_true_native(___nl__7)){ goto label_123;}
#line 99
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 100
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 101
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 102
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 103
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1108)));
#line 103
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 103
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 103
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 103
label_15:
#line 103
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 103
if(c_rt_lib0check_true_native(___nl__16)){ goto label_31;}
#line 103
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 104
c_rt_lib0move(&___nl__17, hash0get_value(___nl__1, ___nl__12));
#line 104
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(93)));
#line 104
c_rt_lib0move(&___nl__18, hash0get_value(___nl__1, ___nl__12));
#line 104
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__17, ___nl__18));
#line 104
c_rt_lib0clear(&___nl__18);
#line 104
c_rt_lib0clear(&___nl__17);
#line 105
c_rt_lib0move(&___nl__17, hash0get_value(___nl__1, ___nl__12));
#line 105
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(93)));
#line 105
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__17, ___nl__12));
#line 105
c_rt_lib0clear(&___nl__17);
#line 106
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 106
goto label_15;
#line 106
label_31:
#line 106
c_rt_lib0clear(&___nl__11);
#line 106
c_rt_lib0clear(&___nl__12);
#line 106
c_rt_lib0clear(&___nl__13);
#line 106
c_rt_lib0clear(&___nl__14);
#line 106
c_rt_lib0clear(&___nl__15);
#line 106
c_rt_lib0clear(&___nl__16);
#line 107
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1082)));
#line 107
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 107
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 107
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 107
label_42:
#line 107
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 107
if(c_rt_lib0check_true_native(___nl__16)){ goto label_58;}
#line 107
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 108
c_rt_lib0move(&___nl__17, hash0get_value(___nl__1, ___nl__12));
#line 108
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(93)));
#line 108
c_rt_lib0move(&___nl__18, hash0get_value(___nl__1, ___nl__12));
#line 108
c_rt_lib0delete(hash0set_value(&___nl__9, ___nl__17, ___nl__18));
#line 108
c_rt_lib0clear(&___nl__18);
#line 108
c_rt_lib0clear(&___nl__17);
#line 109
c_rt_lib0move(&___nl__17, hash0get_value(___nl__1, ___nl__12));
#line 109
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(93)));
#line 109
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__17, ___nl__12));
#line 109
c_rt_lib0clear(&___nl__17);
#line 110
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 110
goto label_42;
#line 110
label_58:
#line 110
c_rt_lib0clear(&___nl__11);
#line 110
c_rt_lib0clear(&___nl__12);
#line 110
c_rt_lib0clear(&___nl__13);
#line 110
c_rt_lib0clear(&___nl__14);
#line 110
c_rt_lib0clear(&___nl__15);
#line 110
c_rt_lib0clear(&___nl__16);
#line 111
c_rt_lib0move(&___nl__11, type_checker0check_modules(___nl__9, ___nl__8));
#line 112
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(18)));
#line 112
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 112
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 112
c_rt_lib0move(&___nl__16, c_rt_lib0array_len(___nl__12));
#line 112
label_70:
#line 112
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__14, ___nl__16));
#line 112
if(c_rt_lib0check_true_native(___nl__17)){ goto label_83;}
#line 112
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__12, ___nl__14));
#line 113
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(132)));
#line 113
c_rt_lib0move(&___nl__19, hash0get_value(___nl__10, ___nl__20));
#line 113
c_rt_lib0clear(&___nl__20);
#line 113
c_rt_lib0move(&___nl__18, c_rt_lib0hash_mk(2, ___get_global_const(112), ___nl__13, ___get_global_const(329), ___nl__19));
#line 113
c_rt_lib0clear(&___nl__19);
#line 113
c_rt_lib0delete(array0push(&___nl__2, ___nl__18));
#line 113
c_rt_lib0clear(&___nl__18);
#line 114
c_rt_lib0move(&___nl__14, c_rt_lib0add_mod(___nl__14, ___nl__15));
#line 114
goto label_70;
#line 114
label_83:
#line 114
c_rt_lib0clear(&___nl__12);
#line 114
c_rt_lib0clear(&___nl__13);
#line 114
c_rt_lib0clear(&___nl__14);
#line 114
c_rt_lib0clear(&___nl__15);
#line 114
c_rt_lib0clear(&___nl__16);
#line 114
c_rt_lib0clear(&___nl__17);
#line 115
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(18)));
#line 115
c_rt_lib0move(&___nl__12, array0len(___nl__13));
#line 115
c_rt_lib0clear(&___nl__13);
#line 115
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 115
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 115
c_rt_lib0clear(&___nl__13);
#line 115
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 115
if(c_rt_lib0check_true_native(___nl__12)){ goto label_115;}
#line 115
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__2));
#line 115
c_rt_lib0clear(&___nl__0);
#line 115
c_rt_lib0clear(&___nl__1);
#line 115
c_rt_lib0clear(&___nl__2);
#line 115
c_rt_lib0clear(&___nl__3);
#line 115
c_rt_lib0clear(&___nl__4);
#line 115
c_rt_lib0clear(&___nl__5);
#line 115
c_rt_lib0clear(&___nl__6);
#line 115
c_rt_lib0clear(&___nl__7);
#line 115
c_rt_lib0clear(&___nl__8);
#line 115
c_rt_lib0clear(&___nl__9);
#line 115
c_rt_lib0clear(&___nl__10);
#line 115
c_rt_lib0clear(&___nl__11);
#line 115
c_rt_lib0clear(&___nl__12);
#line 115
return ___nl__13;
#line 115
c_rt_lib0clear(&___nl__13);
#line 115
goto label_115;
#line 115
label_115:
#line 115
c_rt_lib0clear(&___nl__12);
#line 115
c_rt_lib0clear(&___nl__8);
#line 115
c_rt_lib0clear(&___nl__9);
#line 115
c_rt_lib0clear(&___nl__10);
#line 115
c_rt_lib0clear(&___nl__11);
#line 116
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 116
goto label_4;
#line 116
label_123:
#line 116
c_rt_lib0clear(&___nl__3);
#line 116
c_rt_lib0clear(&___nl__4);
#line 116
c_rt_lib0clear(&___nl__5);
#line 116
c_rt_lib0clear(&___nl__6);
#line 116
c_rt_lib0clear(&___nl__7);
#line 117
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 117
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 117
c_rt_lib0clear(&___nl__0);
#line 117
c_rt_lib0clear(&___nl__1);
#line 117
c_rt_lib0clear(&___nl__2);
#line 117
return ___nl__3;
#line 117
c_rt_lib0clear(&___nl__3);
#line 117
c_rt_lib0clear(&___nl__2);
#line 117
c_rt_lib0clear(&___nl__0);
#line 117
c_rt_lib0clear(&___nl__1);
#line 117
return NULL;
}

ImmT string_compiler0compile_to_nlasm0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0compile_to_nlasm");
return string_compiler0compile_to_nlasm(_tab[0]);}
ImmT string_compiler0compile_to_nlasm(ImmT ___nl__0) {
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
#line 124
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 126
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 126
label_3:
#line 126
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 126
if(c_rt_lib0check_true_native(___nl__3)){ goto label_40;}
#line 126
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 127
c_rt_lib0move(&___nl__6, nparser0sparse(___nl__4, ___nl__3));
#line 127
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 127
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 132
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(112)));
#line 132
if(c_rt_lib0check_true_native(___nl__7)){ goto label_30;}
#line 132
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 132
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 132
nl_die_arg(___nl__7);
#line 127
label_16:
#line 127
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 128
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 129
c_rt_lib0move(&___nl__11, c_rt_lib0get_false());
#line 129
c_rt_lib0move(&___nl__10, module_checker0check_module(___nl__8, ___nl__11, &___nl__9));
#line 129
c_rt_lib0clear(&___nl__11);
#line 130
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(18)));
#line 130
c_rt_lib0delete(array0append(&___nl__1, ___nl__11));
#line 130
c_rt_lib0clear(&___nl__11);
#line 131
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__8));
#line 131
c_rt_lib0clear(&___nl__9);
#line 131
c_rt_lib0clear(&___nl__10);
#line 131
c_rt_lib0clear(&___nl__8);
#line 132
goto label_35;
#line 132
label_30:
#line 132
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(112)));
#line 133
c_rt_lib0delete(array0append(&___nl__1, ___nl__8));
#line 133
c_rt_lib0clear(&___nl__8);
#line 134
goto label_35;
#line 134
label_35:
#line 134
c_rt_lib0clear(&___nl__6);
#line 134
c_rt_lib0clear(&___nl__7);
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 135
goto label_3;
#line 135
label_40:
#line 135
c_rt_lib0clear(&___nl__3);
#line 135
c_rt_lib0clear(&___nl__4);
#line 135
c_rt_lib0clear(&___nl__5);
#line 136
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 136
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 136
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__4));
#line 136
c_rt_lib0clear(&___nl__4);
#line 136
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 136
if(c_rt_lib0check_true_native(___nl__3)){ goto label_58;}
#line 136
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__1));
#line 136
c_rt_lib0clear(&___nl__0);
#line 136
c_rt_lib0clear(&___nl__1);
#line 136
c_rt_lib0clear(&___nl__2);
#line 136
c_rt_lib0clear(&___nl__3);
#line 136
return ___nl__4;
#line 136
c_rt_lib0clear(&___nl__4);
#line 136
goto label_58;
#line 136
label_58:
#line 136
c_rt_lib0clear(&___nl__3);
#line 137
c_rt_lib0move(&___nl__3, type_checker0check_modules(___nl__2, ___nl__2));
#line 138
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(18)));
#line 138
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 138
c_rt_lib0clear(&___nl__5);
#line 138
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 138
c_rt_lib0move(&___nl__4, c_rt_lib0gt(___nl__4, ___nl__5));
#line 138
c_rt_lib0clear(&___nl__5);
#line 138
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 138
if(c_rt_lib0check_true_native(___nl__4)){ goto label_79;}
#line 138
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(18)));
#line 138
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__5));
#line 138
c_rt_lib0clear(&___nl__0);
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
c_rt_lib0clear(&___nl__4);
#line 138
return ___nl__5;
#line 138
c_rt_lib0clear(&___nl__5);
#line 138
goto label_79;
#line 138
label_79:
#line 138
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 140
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__2));
#line 140
label_83:
#line 140
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 140
if(c_rt_lib0check_true_native(___nl__5)){ goto label_93;}
#line 140
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 140
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__2, ___nl__5));
#line 141
c_rt_lib0move(&___nl__8, translator0translate(___nl__6));
#line 141
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__5, ___nl__8));
#line 141
c_rt_lib0clear(&___nl__8);
#line 142
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 142
goto label_83;
#line 142
label_93:
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0clear(&___nl__7);
#line 143
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 143
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(50)));
#line 143
c_rt_lib0move(&___nl__5, post_processing0init(___nl__6, ___nl__7));
#line 143
c_rt_lib0clear(&___nl__7);
#line 143
c_rt_lib0clear(&___nl__6);
#line 144
c_rt_lib0delete(post_processing0find(&___nl__5, &___nl__4));
#line 145
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__4));
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
c_rt_lib0clear(&___nl__2);
#line 145
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0clear(&___nl__4);
#line 145
c_rt_lib0clear(&___nl__5);
#line 145
return ___nl__6;
#line 145
c_rt_lib0clear(&___nl__6);
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
c_rt_lib0clear(&___nl__2);
#line 145
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0clear(&___nl__4);
#line 145
c_rt_lib0clear(&___nl__5);
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
return NULL;
}

ImmT string_compiler0compile_to_js0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_compiler0compile_to_js");
return string_compiler0compile_to_js(_tab[0], _tab[1]);}
ImmT string_compiler0compile_to_js(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 152
c_rt_lib0move(&___nl__4, string_compiler0compile_to_nlasm(___nl__0));
#line 152
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 152
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 152
c_rt_lib0clear(&___nl__0);
#line 152
c_rt_lib0clear(&___nl__1);
#line 152
c_rt_lib0clear(&___nl__2);
#line 152
c_rt_lib0clear(&___nl__3);
#line 152
return ___nl__4;
#line 152
label_8:
#line 152
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 152
c_rt_lib0clear(&___nl__3);
#line 152
c_rt_lib0clear(&___nl__4);
#line 153
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__2));
#line 154
label_14:
#line 154
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 154
if(c_rt_lib0check_true_native(___nl__4)){ goto label_24;}
#line 154
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 154
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__2, ___nl__4));
#line 155
c_rt_lib0move(&___nl__7, generator_js0generate(___nl__5, ___nl__1));
#line 155
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__4, ___nl__7));
#line 155
c_rt_lib0clear(&___nl__7);
#line 156
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 156
goto label_14;
#line 156
label_24:
#line 156
c_rt_lib0clear(&___nl__4);
#line 156
c_rt_lib0clear(&___nl__5);
#line 156
c_rt_lib0clear(&___nl__6);
#line 157
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 157
c_rt_lib0clear(&___nl__0);
#line 157
c_rt_lib0clear(&___nl__1);
#line 157
c_rt_lib0clear(&___nl__2);
#line 157
c_rt_lib0clear(&___nl__3);
#line 157
return ___nl__4;
#line 157
c_rt_lib0clear(&___nl__4);
#line 157
c_rt_lib0clear(&___nl__2);
#line 157
c_rt_lib0clear(&___nl__3);
#line 157
c_rt_lib0clear(&___nl__0);
#line 157
c_rt_lib0clear(&___nl__1);
#line 157
return NULL;
}


static ImmT ___const__[5];
static int ___const_init__ = 1;
void string_compiler0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[4];


for(int i=0;i<4;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 4);
}
ImmT string_compiler_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT string_compiler_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = string_compiler0modules_t0cal();
	break;
case 1:
	___const__[1] = string_compiler0type_check_t0cal();
	break;
case 2:
	___const__[2] = string_compiler0printed_struct_t0cal();
	break;
case 3:
	___const__[3] = string_compiler0error_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
