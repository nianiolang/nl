
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "string.h"
#include "c_std_lib.h"
#include "array.h"
#include "boolean_t.h"
#include "ptd.h"
#line 1 "string.nl"

static ImmT *__const__f = NULL;
ImmT string_priv0__const__sim(int __nr);
ImmT string_priv0__const__sing(int __nr);



ImmT string0lf0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0lf");
return string0lf();}
ImmT string0lf(){
return string_priv0__const__sing(0);}
ImmT string0lf0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 12
c_rt_lib0move(&___nl__1,___get_global_const(237));
#line 12
c_rt_lib0move(&___nl__0, string0chr(___nl__1));
#line 12
c_rt_lib0clear(&___nl__1);
#line 12
return ___nl__0;
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return NULL;
}

ImmT string0tab0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0tab");
return string0tab();}
ImmT string0tab(){
return string_priv0__const__sing(1);}
ImmT string0tab0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 16
c_rt_lib0move(&___nl__1,___get_global_const(243));
#line 16
c_rt_lib0move(&___nl__0, string0chr(___nl__1));
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
return ___nl__0;
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return NULL;
}

ImmT string0r0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0r");
return string0r();}
ImmT string0r(){
return string_priv0__const__sing(2);}
ImmT string0r0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 20
c_rt_lib0move(&___nl__1,___get_global_const(238));
#line 20
c_rt_lib0move(&___nl__0, string0chr(___nl__1));
#line 20
c_rt_lib0clear(&___nl__1);
#line 20
return ___nl__0;
#line 20
c_rt_lib0clear(&___nl__0);
#line 20
return NULL;
}

ImmT string0f0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0f");
return string0f();}
ImmT string0f(){
return string_priv0__const__sing(3);}
ImmT string0f0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 24
c_rt_lib0move(&___nl__1,___get_global_const(1100));
#line 24
c_rt_lib0move(&___nl__0, string0chr(___nl__1));
#line 24
c_rt_lib0clear(&___nl__1);
#line 24
return ___nl__0;
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
return NULL;
}

ImmT string0non_breaking_space0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0non_breaking_space");
return string0non_breaking_space();}
ImmT string0non_breaking_space(){
return string_priv0__const__sing(4);}
ImmT string0non_breaking_space0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 28
c_rt_lib0move(&___nl__2,___get_global_const(1101));
#line 28
c_rt_lib0move(&___nl__1, string0chr(___nl__2));
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0move(&___nl__3,___get_global_const(1102));
#line 28
c_rt_lib0move(&___nl__2, string0chr(___nl__3));
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0move(&___nl__0, c_rt_lib0array_mk(2, ___nl__1, ___nl__2));
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
return ___nl__0;
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
return NULL;
}

ImmT string0char_times0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0char_times");
return string0char_times(_tab[0], _tab[1]);}
ImmT string0char_times(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 32
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 33
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 33
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 33
label_3:
#line 33
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__1));
#line 33
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 33
goto label_3;
#line 33
label_9:
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0clear(&___nl__5);
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
return ___nl__2;
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
return NULL;
}

ImmT string0split0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0split");
return string0split(_tab[0], _tab[1]);}
ImmT string0split(ImmT ___nl__0,ImmT ___nl__1) {
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
#line 38
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 39
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 40
c_rt_lib0move(&___nl__4, string0length(___nl__0));
#line 41
c_rt_lib0move(&___nl__5, string0length(___nl__1));
#line 42
label_4:
#line 43
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0add(___nl__3, ___nl__6));
#line 44
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 44
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__4, ___nl__7));
#line 44
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 44
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 44
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 44
c_rt_lib0move(&___nl__8, string0index(___nl__1, ___nl__0, ___nl__3));
#line 44
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 44
c_rt_lib0clear(&___nl__8);
#line 44
goto label_16;
#line 44
label_16:
#line 44
c_rt_lib0clear(&___nl__7);
#line 45
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__6, ___nl__5));
#line 45
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 45
if(c_rt_lib0check_true_native(___nl__7)){ goto label_25;}
#line 45
c_rt_lib0clear(&___nl__6);
#line 45
c_rt_lib0clear(&___nl__7);
#line 45
goto label_54;
#line 45
goto label_25;
#line 45
label_25:
#line 45
c_rt_lib0clear(&___nl__7);
#line 46
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 46
c_rt_lib0move(&___nl__7, c_rt_lib0lt(___nl__6, ___nl__7));
#line 46
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 46
if(c_rt_lib0check_true_native(___nl__7)){ goto label_40;}
#line 47
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__5, ___nl__3));
#line 47
c_rt_lib0move(&___nl__8, string0substr(___nl__1, ___nl__3, ___nl__9));
#line 47
c_rt_lib0clear(&___nl__9);
#line 47
c_rt_lib0delete(array0push(&___nl__2, ___nl__8));
#line 47
c_rt_lib0clear(&___nl__8);
#line 48
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0clear(&___nl__7);
#line 48
goto label_54;
#line 49
goto label_50;
#line 49
label_40:
#line 50
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__6, ___nl__3));
#line 50
c_rt_lib0move(&___nl__8, string0substr(___nl__1, ___nl__3, ___nl__9));
#line 50
c_rt_lib0clear(&___nl__9);
#line 50
c_rt_lib0delete(array0push(&___nl__2, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 51
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__6, ___nl__4));
#line 51
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 51
c_rt_lib0clear(&___nl__8);
#line 52
goto label_50;
#line 52
label_50:
#line 52
c_rt_lib0clear(&___nl__7);
#line 52
c_rt_lib0clear(&___nl__6);
#line 42
goto label_4;
#line 42
label_54:
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0clear(&___nl__5);
#line 54
return ___nl__2;
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0clear(&___nl__5);
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
return NULL;
}

ImmT string0split_limit0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0split_limit");
return string0split_limit(_tab[0], _tab[1], _tab[2]);}
ImmT string0split_limit(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
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
#line 58
c_rt_lib0move(&___nl__3, string0split(___nl__0, ___nl__1));
#line 59
c_rt_lib0move(&___nl__4, array0len(___nl__3));
#line 59
c_rt_lib0move(&___nl__4, c_rt_lib0gt(___nl__4, ___nl__2));
#line 59
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 59
if(c_rt_lib0check_true_native(___nl__4)){ goto label_34;}
#line 60
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 60
c_rt_lib0move(&___nl__7, c_rt_lib0sub(___nl__2, ___nl__7));
#line 60
c_rt_lib0move(&___nl__8, array0len(___nl__3));
#line 60
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__2));
#line 60
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 60
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 60
c_rt_lib0clear(&___nl__9);
#line 60
c_rt_lib0move(&___nl__6, array0subarray(___nl__3, ___nl__7, ___nl__8));
#line 60
c_rt_lib0clear(&___nl__8);
#line 60
c_rt_lib0clear(&___nl__7);
#line 60
c_rt_lib0move(&___nl__5, array0join(___nl__0, ___nl__6));
#line 60
c_rt_lib0clear(&___nl__6);
#line 61
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 61
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 61
c_rt_lib0move(&___nl__8, c_rt_lib0sub(___nl__2, ___nl__8));
#line 61
c_rt_lib0move(&___nl__6, array0subarray(___nl__3, ___nl__7, ___nl__8));
#line 61
c_rt_lib0clear(&___nl__8);
#line 61
c_rt_lib0clear(&___nl__7);
#line 62
c_rt_lib0delete(array0push(&___nl__6, ___nl__5));
#line 63
c_rt_lib0clear(&___nl__0);
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
return ___nl__6;
#line 63
c_rt_lib0clear(&___nl__5);
#line 63
c_rt_lib0clear(&___nl__6);
#line 64
goto label_41;
#line 64
label_34:
#line 65
c_rt_lib0clear(&___nl__0);
#line 65
c_rt_lib0clear(&___nl__1);
#line 65
c_rt_lib0clear(&___nl__2);
#line 65
c_rt_lib0clear(&___nl__4);
#line 65
return ___nl__3;
#line 66
goto label_41;
#line 66
label_41:
#line 66
c_rt_lib0clear(&___nl__4);
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
c_rt_lib0clear(&___nl__1);
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
return NULL;
}

ImmT string0to_array0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0to_array");
return string0to_array(_tab[0]);}
ImmT string0to_array(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 70
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 70
c_rt_lib0move(&___nl__1, string0split(___nl__2, ___nl__0));
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
c_rt_lib0clear(&___nl__0);
#line 70
return ___nl__1;
#line 70
c_rt_lib0clear(&___nl__1);
#line 70
c_rt_lib0clear(&___nl__0);
#line 70
return NULL;
}

ImmT string0length0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0length");
return string0length(_tab[0]);}
ImmT string0length(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 74
c_rt_lib0move(&___nl__1, c_std_lib0string_length(___nl__0));
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return ___nl__1;
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return NULL;
}

ImmT string0get_char_code0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0get_char_code");
return string0get_char_code(_tab[0], _tab[1]);}
ImmT string0get_char_code(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 78
c_rt_lib0move(&___nl__2, c_std_lib0string_get_char_code(___nl__0, ___nl__1));
#line 78
c_rt_lib0clear(&___nl__0);
#line 78
c_rt_lib0clear(&___nl__1);
#line 78
return ___nl__2;
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
c_rt_lib0clear(&___nl__0);
#line 78
c_rt_lib0clear(&___nl__1);
#line 78
return NULL;
}

ImmT string0substr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0substr");
return string0substr(_tab[0], _tab[1], _tab[2]);}
ImmT string0substr(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 82
c_rt_lib0move(&___nl__3, c_std_lib0string_sub(___nl__0, ___nl__1, ___nl__2));
#line 82
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 82
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 82
c_rt_lib0clear(&___nl__4);
#line 82
c_rt_lib0clear(&___nl__0);
#line 82
c_rt_lib0clear(&___nl__1);
#line 82
c_rt_lib0clear(&___nl__2);
#line 82
return ___nl__3;
#line 82
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0clear(&___nl__0);
#line 82
c_rt_lib0clear(&___nl__1);
#line 82
c_rt_lib0clear(&___nl__2);
#line 82
return NULL;
}

ImmT string0substr20ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0substr2");
return string0substr2(_tab[0], _tab[1]);}
ImmT string0substr2(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 86
c_rt_lib0move(&___nl__3, string0length(___nl__0));
#line 86
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__1));
#line 86
c_rt_lib0move(&___nl__2, c_std_lib0string_sub(___nl__0, ___nl__1, ___nl__3));
#line 86
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 86
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 86
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
c_rt_lib0clear(&___nl__1);
#line 86
return ___nl__2;
#line 86
c_rt_lib0clear(&___nl__2);
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
c_rt_lib0clear(&___nl__1);
#line 86
return NULL;
}

ImmT string0lc0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0lc");
return string0lc(_tab[0]);}
ImmT string0lc(ImmT ___nl__0) {
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
#line 90
c_rt_lib0move(&___nl__1, string0to_array(___nl__0));
#line 91
c_rt_lib0move(&___nl__2, array0len(___nl__1));
#line 91
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 91
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 91
label_4:
#line 91
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 91
if(c_rt_lib0check_true_native(___nl__5)){ goto label_34;}
#line 92
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 92
c_rt_lib0move(&___nl__6, string0ord(___nl__7));
#line 92
c_rt_lib0clear(&___nl__7);
#line 93
c_rt_lib0move(&___nl__7,___get_global_const(984));
#line 93
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__6, ___nl__7));
#line 93
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 93
if(c_rt_lib0check_true_native(___nl__8)){ goto label_16;}
#line 93
c_rt_lib0move(&___nl__7,___get_global_const(1103));
#line 93
c_rt_lib0move(&___nl__7, c_rt_lib0le(___nl__6, ___nl__7));
#line 93
label_16:
#line 93
c_rt_lib0clear(&___nl__8);
#line 93
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 93
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
#line 94
c_rt_lib0move(&___nl__8,___get_global_const(236));
#line 94
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__8));
#line 94
c_rt_lib0clear(&___nl__8);
#line 95
c_rt_lib0move(&___nl__8, string0chr(___nl__6));
#line 95
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 95
c_rt_lib0array_set(&___nl__1, ___nl__3, ___nl__9);
#line 95
c_rt_lib0clear(&___nl__8);
#line 95
c_rt_lib0clear(&___nl__9);
#line 96
goto label_29;
#line 96
label_29:
#line 96
c_rt_lib0clear(&___nl__7);
#line 96
c_rt_lib0clear(&___nl__6);
#line 97
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 97
goto label_4;
#line 97
label_34:
#line 97
c_rt_lib0clear(&___nl__2);
#line 97
c_rt_lib0clear(&___nl__3);
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
c_rt_lib0clear(&___nl__5);
#line 98
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 98
c_rt_lib0move(&___nl__2, array0join(___nl__3, ___nl__1));
#line 98
c_rt_lib0clear(&___nl__3);
#line 98
c_rt_lib0clear(&___nl__0);
#line 98
c_rt_lib0clear(&___nl__1);
#line 98
return ___nl__2;
#line 98
c_rt_lib0clear(&___nl__2);
#line 98
c_rt_lib0clear(&___nl__1);
#line 98
c_rt_lib0clear(&___nl__0);
#line 98
return NULL;
}

ImmT string0uc0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0uc");
return string0uc(_tab[0]);}
ImmT string0uc(ImmT ___nl__0) {
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
#line 102
c_rt_lib0move(&___nl__1, string0to_array(___nl__0));
#line 103
c_rt_lib0move(&___nl__2, array0len(___nl__1));
#line 103
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 103
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 103
label_4:
#line 103
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 103
if(c_rt_lib0check_true_native(___nl__5)){ goto label_34;}
#line 104
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 104
c_rt_lib0move(&___nl__6, string0ord(___nl__7));
#line 104
c_rt_lib0clear(&___nl__7);
#line 105
c_rt_lib0move(&___nl__7,___get_global_const(986));
#line 105
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__6, ___nl__7));
#line 105
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 105
if(c_rt_lib0check_true_native(___nl__8)){ goto label_16;}
#line 105
c_rt_lib0move(&___nl__7,___get_global_const(1104));
#line 105
c_rt_lib0move(&___nl__7, c_rt_lib0le(___nl__6, ___nl__7));
#line 105
label_16:
#line 105
c_rt_lib0clear(&___nl__8);
#line 105
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 105
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
#line 106
c_rt_lib0move(&___nl__8,___get_global_const(236));
#line 106
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__8));
#line 106
c_rt_lib0clear(&___nl__8);
#line 107
c_rt_lib0move(&___nl__8, string0chr(___nl__6));
#line 107
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 107
c_rt_lib0array_set(&___nl__1, ___nl__3, ___nl__9);
#line 107
c_rt_lib0clear(&___nl__8);
#line 107
c_rt_lib0clear(&___nl__9);
#line 108
goto label_29;
#line 108
label_29:
#line 108
c_rt_lib0clear(&___nl__7);
#line 108
c_rt_lib0clear(&___nl__6);
#line 109
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 109
goto label_4;
#line 109
label_34:
#line 109
c_rt_lib0clear(&___nl__2);
#line 109
c_rt_lib0clear(&___nl__3);
#line 109
c_rt_lib0clear(&___nl__4);
#line 109
c_rt_lib0clear(&___nl__5);
#line 110
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 110
c_rt_lib0move(&___nl__2, array0join(___nl__3, ___nl__1));
#line 110
c_rt_lib0clear(&___nl__3);
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
return ___nl__2;
#line 110
c_rt_lib0clear(&___nl__2);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
return NULL;
}

ImmT string0index20ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0index2");
return string0index2(_tab[0], _tab[1]);}
ImmT string0index2(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 114
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 114
c_rt_lib0move(&___nl__2, c_std_lib0string_index(___nl__0, ___nl__1, ___nl__3));
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0clear(&___nl__0);
#line 114
c_rt_lib0clear(&___nl__1);
#line 114
return ___nl__2;
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
c_rt_lib0clear(&___nl__0);
#line 114
c_rt_lib0clear(&___nl__1);
#line 114
return NULL;
}

ImmT string0index0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0index");
return string0index(_tab[0], _tab[1], _tab[2]);}
ImmT string0index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 118
c_rt_lib0move(&___nl__3, c_std_lib0string_index(___nl__0, ___nl__1, ___nl__2));
#line 118
c_rt_lib0clear(&___nl__0);
#line 118
c_rt_lib0clear(&___nl__1);
#line 118
c_rt_lib0clear(&___nl__2);
#line 118
return ___nl__3;
#line 118
c_rt_lib0clear(&___nl__3);
#line 118
c_rt_lib0clear(&___nl__0);
#line 118
c_rt_lib0clear(&___nl__1);
#line 118
c_rt_lib0clear(&___nl__2);
#line 118
return NULL;
}

ImmT string0contain_lc0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0contain_lc");
return string0contain_lc(_tab[0], _tab[1]);}
ImmT string0contain_lc(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 122
c_rt_lib0move(&___nl__2, string0lc(___nl__0));
#line 122
c_rt_lib0copy(&___nl__0, ___nl__2);
#line 122
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0move(&___nl__2, string0index2(___nl__0, ___nl__1));
#line 123
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 123
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__2, ___nl__3));
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__0);
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
return ___nl__2;
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0clear(&___nl__0);
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
return NULL;
}

ImmT string0replace0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0replace");
return string0replace(_tab[0], _tab[1], _tab[2]);}
ImmT string0replace(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 127
c_rt_lib0move(&___nl__3, c_std_lib0string_replace(___nl__0, ___nl__1, ___nl__2));
#line 127
c_rt_lib0clear(&___nl__0);
#line 127
c_rt_lib0clear(&___nl__1);
#line 127
c_rt_lib0clear(&___nl__2);
#line 127
return ___nl__3;
#line 127
c_rt_lib0clear(&___nl__3);
#line 127
c_rt_lib0clear(&___nl__0);
#line 127
c_rt_lib0clear(&___nl__1);
#line 127
c_rt_lib0clear(&___nl__2);
#line 127
return NULL;
}

ImmT string0replace_arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0replace_arr");
return string0replace_arr(_tab[0], _tab[1], _tab[2]);}
ImmT string0replace_arr(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 131
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 132
c_rt_lib0move(&___nl__4, array0len(___nl__2));
#line 132
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 132
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 132
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 132
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 132
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 132
nl_die_arg(___nl__5);
#line 132
goto label_9;
#line 132
label_9:
#line 132
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0clear(&___nl__5);
#line 133
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 133
label_13:
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__4, ___nl__3));
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 133
if(c_rt_lib0check_true_native(___nl__5)){ goto label_28;}
#line 134
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 134
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 134
c_rt_lib0move(&___nl__6, string0replace(___nl__0, ___nl__7, ___nl__8));
#line 134
c_rt_lib0clear(&___nl__8);
#line 134
c_rt_lib0clear(&___nl__7);
#line 134
c_rt_lib0copy(&___nl__0, ___nl__6);
#line 134
c_rt_lib0clear(&___nl__6);
#line 133
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 133
c_rt_lib0clear(&___nl__6);
#line 135
goto label_13;
#line 135
label_28:
#line 135
c_rt_lib0clear(&___nl__4);
#line 135
c_rt_lib0clear(&___nl__5);
#line 136
c_rt_lib0clear(&___nl__1);
#line 136
c_rt_lib0clear(&___nl__2);
#line 136
c_rt_lib0clear(&___nl__3);
#line 136
return ___nl__0;
#line 136
c_rt_lib0clear(&___nl__3);
#line 136
c_rt_lib0clear(&___nl__0);
#line 136
c_rt_lib0clear(&___nl__1);
#line 136
c_rt_lib0clear(&___nl__2);
#line 136
return NULL;
}

ImmT string0ord0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0ord");
return string0ord(_tab[0]);}
ImmT string0ord(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 140
c_rt_lib0move(&___nl__1, c_std_lib0string_ord(___nl__0));
#line 140
c_rt_lib0clear(&___nl__0);
#line 140
return ___nl__1;
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
c_rt_lib0clear(&___nl__0);
#line 140
return NULL;
}

ImmT string0is_digit0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_digit");
return string0is_digit(_tab[0]);}
ImmT string0is_digit(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 144
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 145
c_rt_lib0move(&___nl__2,___get_global_const(1105));
#line 145
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 145
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 145
c_rt_lib0move(&___nl__2,___get_global_const(1106));
#line 145
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__1, ___nl__2));
#line 145
label_7:
#line 145
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
return ___nl__2;
#line 145
c_rt_lib0clear(&___nl__2);
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
return NULL;
}

ImmT string0is_letter0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_letter");
return string0is_letter(_tab[0]);}
ImmT string0is_letter(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 149
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 150
c_rt_lib0move(&___nl__2,___get_global_const(986));
#line 150
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 150
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 150
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 150
c_rt_lib0move(&___nl__2,___get_global_const(1104));
#line 150
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__1, ___nl__2));
#line 150
label_7:
#line 150
c_rt_lib0clear(&___nl__3);
#line 150
if(c_rt_lib0check_true_native(___nl__2)){ goto label_18;}
#line 150
c_rt_lib0move(&___nl__2,___get_global_const(984));
#line 150
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 150
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 150
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 150
c_rt_lib0move(&___nl__2,___get_global_const(1103));
#line 150
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__1, ___nl__2));
#line 150
label_16:
#line 150
c_rt_lib0clear(&___nl__3);
#line 150
label_18:
#line 150
c_rt_lib0clear(&___nl__0);
#line 150
c_rt_lib0clear(&___nl__1);
#line 150
return ___nl__2;
#line 150
c_rt_lib0clear(&___nl__2);
#line 150
c_rt_lib0clear(&___nl__1);
#line 150
c_rt_lib0clear(&___nl__0);
#line 150
return NULL;
}

ImmT string0encode_utf160ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0encode_utf16");
return string0encode_utf16(_tab[0]);}
ImmT string0encode_utf16(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 154
c_rt_lib0move(&___nl__1, c_std_lib0string_encode_utf16(___nl__0));
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
return ___nl__1;
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
return NULL;
}

ImmT string0decode_utf160ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0decode_utf16");
return string0decode_utf16(_tab[0], _tab[1]);}
ImmT string0decode_utf16(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 158
c_rt_lib0move(&___nl__2, c_std_lib0string_decode_utf16(___nl__0, ___nl__1));
#line 158
c_rt_lib0clear(&___nl__0);
#line 158
c_rt_lib0clear(&___nl__1);
#line 158
return ___nl__2;
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0clear(&___nl__0);
#line 158
c_rt_lib0clear(&___nl__1);
#line 158
return NULL;
}

ImmT string0is_empty0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_empty");
return string0is_empty(_tab[0]);}
ImmT string0is_empty(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 162
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 162
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 162
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 162
c_rt_lib0clear(&___nl__2);
#line 162
c_rt_lib0clear(&___nl__0);
#line 162
return ___nl__1;
#line 162
c_rt_lib0clear(&___nl__1);
#line 162
c_rt_lib0clear(&___nl__0);
#line 162
return NULL;
}

ImmT string0chr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0chr");
return string0chr(_tab[0]);}
ImmT string0chr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 166
c_rt_lib0move(&___nl__1, c_std_lib0string_chr(___nl__0));
#line 166
c_rt_lib0clear(&___nl__0);
#line 166
return ___nl__1;
#line 166
c_rt_lib0clear(&___nl__1);
#line 166
c_rt_lib0clear(&___nl__0);
#line 166
return NULL;
}

ImmT string0lt0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0lt");
return string0lt(_tab[0], _tab[1]);}
ImmT string0lt(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 170
c_rt_lib0move(&___nl__2, string0compare(___nl__0, ___nl__1));
#line 170
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 170
c_rt_lib0move(&___nl__2, c_rt_lib0lt(___nl__2, ___nl__3));
#line 170
c_rt_lib0clear(&___nl__3);
#line 170
c_rt_lib0clear(&___nl__0);
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
return ___nl__2;
#line 170
c_rt_lib0clear(&___nl__2);
#line 170
c_rt_lib0clear(&___nl__0);
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
return NULL;
}

ImmT string0gt0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0gt");
return string0gt(_tab[0], _tab[1]);}
ImmT string0gt(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 174
c_rt_lib0move(&___nl__2, string0compare(___nl__0, ___nl__1));
#line 174
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 174
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__2, ___nl__3));
#line 174
c_rt_lib0clear(&___nl__3);
#line 174
c_rt_lib0clear(&___nl__0);
#line 174
c_rt_lib0clear(&___nl__1);
#line 174
return ___nl__2;
#line 174
c_rt_lib0clear(&___nl__2);
#line 174
c_rt_lib0clear(&___nl__0);
#line 174
c_rt_lib0clear(&___nl__1);
#line 174
return NULL;
}

ImmT string0compare0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0compare");
return string0compare(_tab[0], _tab[1]);}
ImmT string0compare(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 178
c_rt_lib0move(&___nl__2, c_std_lib0string_compare(___nl__0, ___nl__1));
#line 178
c_rt_lib0clear(&___nl__0);
#line 178
c_rt_lib0clear(&___nl__1);
#line 178
return ___nl__2;
#line 178
c_rt_lib0clear(&___nl__2);
#line 178
c_rt_lib0clear(&___nl__0);
#line 178
c_rt_lib0clear(&___nl__1);
#line 178
return NULL;
}

ImmT string0le0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0le");
return string0le(_tab[0], _tab[1]);}
ImmT string0le(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 182
c_rt_lib0move(&___nl__2, string0compare(___nl__0, ___nl__1));
#line 182
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__2, ___nl__3));
#line 182
c_rt_lib0clear(&___nl__3);
#line 182
c_rt_lib0clear(&___nl__0);
#line 182
c_rt_lib0clear(&___nl__1);
#line 182
return ___nl__2;
#line 182
c_rt_lib0clear(&___nl__2);
#line 182
c_rt_lib0clear(&___nl__0);
#line 182
c_rt_lib0clear(&___nl__1);
#line 182
return NULL;
}

ImmT string0ge0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0ge");
return string0ge(_tab[0], _tab[1]);}
ImmT string0ge(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 186
c_rt_lib0move(&___nl__2, string0compare(___nl__0, ___nl__1));
#line 186
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 186
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__2, ___nl__3));
#line 186
c_rt_lib0clear(&___nl__3);
#line 186
c_rt_lib0clear(&___nl__0);
#line 186
c_rt_lib0clear(&___nl__1);
#line 186
return ___nl__2;
#line 186
c_rt_lib0clear(&___nl__2);
#line 186
c_rt_lib0clear(&___nl__0);
#line 186
c_rt_lib0clear(&___nl__1);
#line 186
return NULL;
}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void string0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}
ImmT string_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT string_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = string0lf0cal();
	break;
case 1:
	___const__[1] = string0tab0cal();
	break;
case 2:
	___const__[2] = string0r0cal();
	break;
case 3:
	___const__[3] = string0f0cal();
	break;
case 4:
	___const__[4] = string0non_breaking_space0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
