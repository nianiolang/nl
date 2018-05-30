
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "array.h"
#include "c_std_lib.h"
#include "array.h"
#line 1 "array.nl"

static ImmT *__const__f = NULL;
ImmT array_priv0__const__sim(int __nr);
ImmT array_priv0__const__sing(int __nr);

ImmT array_priv0sort(ImmT * ___ref___0,ImmT ___nl__1);
ImmT array_priv0exec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT array_priv0part_sort(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);


ImmT array0subarray0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "array0subarray");
return array0subarray(_tab[0], _tab[1], _tab[2]);}
ImmT array0subarray(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 9
c_rt_lib0move(&___nl__3, c_std_lib0array_sub(___nl__0, ___nl__1, ___nl__2));
#line 9
c_rt_lib0clear(&___nl__0);
#line 9
c_rt_lib0clear(&___nl__1);
#line 9
c_rt_lib0clear(&___nl__2);
#line 9
return ___nl__3;
#line 9
c_rt_lib0clear(&___nl__3);
#line 9
c_rt_lib0clear(&___nl__0);
#line 9
c_rt_lib0clear(&___nl__1);
#line 9
c_rt_lib0clear(&___nl__2);
#line 9
return NULL;
}

ImmT array0reverse0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0reverse");
return array0reverse(&_tab[0]);}
ImmT array0reverse(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 13
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 14
c_rt_lib0move(&___nl__2, array0len(*___ref___0));
#line 14
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 14
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 14
label_4:
#line 14
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 14
if(c_rt_lib0check_true_native(___nl__5)){ goto label_18;}
#line 15
c_rt_lib0move(&___nl__7, array0len(*___ref___0));
#line 15
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__3));
#line 15
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 15
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 15
c_rt_lib0clear(&___nl__8);
#line 15
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 15
c_rt_lib0clear(&___nl__7);
#line 15
c_rt_lib0delete(c_rt_lib0array_push(&___nl__1, ___nl__6));
#line 15
c_rt_lib0clear(&___nl__6);
#line 16
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 16
goto label_4;
#line 16
label_18:
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0clear(&___nl__5);
#line 17
c_rt_lib0copy(___ref___0, ___nl__1);
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return NULL;
}

ImmT array0join0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0join");
return array0join(_tab[0], _tab[1]);}
ImmT array0join(ImmT ___nl__0,ImmT ___nl__1) {
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
#line 21
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 22
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 23
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 23
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 23
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 23
label_5:
#line 23
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 23
if(c_rt_lib0check_true_native(___nl__8)){ goto label_23;}
#line 23
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 24
c_rt_lib0copy(&___nl__9, ___nl__3);
#line 24
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 24
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 24
if(c_rt_lib0check_true_native(___nl__9)){ goto label_15;}
#line 24
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 24
goto label_15;
#line 24
label_15:
#line 24
c_rt_lib0clear(&___nl__9);
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 26
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 26
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 26
c_rt_lib0clear(&___nl__9);
#line 27
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 27
goto label_5;
#line 27
label_23:
#line 27
c_rt_lib0clear(&___nl__4);
#line 27
c_rt_lib0clear(&___nl__5);
#line 27
c_rt_lib0clear(&___nl__6);
#line 27
c_rt_lib0clear(&___nl__7);
#line 27
c_rt_lib0clear(&___nl__8);
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
return ___nl__2;
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
return NULL;
}

ImmT array0remove0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0remove");
return array0remove(&_tab[0], _tab[1]);}
ImmT array0remove(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 32
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 32
c_rt_lib0move(&___nl__2, array0subarray(*___ref___0, ___nl__3, ___nl__1));
#line 32
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0add(___nl__1, ___nl__3));
#line 33
label_5:
#line 33
c_rt_lib0move(&___nl__4, array0len(*___ref___0));
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__4));
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 33
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 34
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___0, ___nl__3));
#line 34
c_rt_lib0delete(array0push(&___nl__2, ___nl__5));
#line 34
c_rt_lib0clear(&___nl__5);
#line 33
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 33
c_rt_lib0clear(&___nl__5);
#line 35
goto label_5;
#line 35
label_17:
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0copy(___ref___0, ___nl__2);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
return NULL;
}

ImmT array0insert0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "array0insert");
return array0insert(&_tab[0], _tab[1], _tab[2]);}
ImmT array0insert(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 40
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 40
c_rt_lib0move(&___nl__3, array0subarray(*___ref___0, ___nl__4, ___nl__1));
#line 40
c_rt_lib0clear(&___nl__4);
#line 41
c_rt_lib0delete(array0push(&___nl__3, ___nl__2));
#line 42
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 42
label_5:
#line 42
c_rt_lib0move(&___nl__5, array0len(*___ref___0));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__4, ___nl__5));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 42
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___0, ___nl__4));
#line 43
c_rt_lib0delete(array0push(&___nl__3, ___nl__6));
#line 43
c_rt_lib0clear(&___nl__6);
#line 42
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 42
c_rt_lib0clear(&___nl__6);
#line 44
goto label_5;
#line 44
label_17:
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0clear(&___nl__5);
#line 45
c_rt_lib0copy(___ref___0, ___nl__3);
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
return NULL;
}

ImmT array0push0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0push");
return array0push(&_tab[0], _tab[1]);}
ImmT array0push(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
#line 49
c_rt_lib0delete(c_std_lib0array_push(___ref___0, ___nl__1));
#line 49
c_rt_lib0clear(&___nl__1);
#line 49
return NULL;
}

ImmT array0add0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0add");
return array0add(_tab[0], _tab[1]);}
ImmT array0add(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 53
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 54
c_rt_lib0delete(array0push(&___nl__2, ___nl__1));
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
return ___nl__2;
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
return NULL;
}

ImmT array0unshift0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0unshift");
return array0unshift(&_tab[0], _tab[1]);}
ImmT array0unshift(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__1));
#line 60
c_rt_lib0delete(array0append(&___nl__2, *___ref___0));
#line 61
c_rt_lib0copy(___ref___0, ___nl__2);
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__1);
#line 61
return NULL;
}

ImmT array0shift0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0shift");
return array0shift(&_tab[0]);}
ImmT array0shift(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 65
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 66
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 66
label_2:
#line 66
c_rt_lib0move(&___nl__3, array0len(*___ref___0));
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 66
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 67
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(*___ref___0, ___nl__2));
#line 67
c_rt_lib0delete(c_rt_lib0array_push(&___nl__1, ___nl__4));
#line 67
c_rt_lib0clear(&___nl__4);
#line 66
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 66
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 66
c_rt_lib0clear(&___nl__4);
#line 68
goto label_2;
#line 68
label_14:
#line 68
c_rt_lib0clear(&___nl__2);
#line 68
c_rt_lib0clear(&___nl__3);
#line 69
return ___nl__1;
#line 69
c_rt_lib0clear(&___nl__1);
#line 69
return NULL;
}

ImmT array0pop0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0pop");
return array0pop(&_tab[0]);}
ImmT array0pop(ImmT * ___ref___0) {
#line 73
c_rt_lib0delete(c_std_lib0array_pop(___ref___0));
#line 73
return NULL;
}

ImmT array0append0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0append");
return array0append(&_tab[0], _tab[1]);}
ImmT array0append(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 77
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 77
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 77
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__1));
#line 77
label_3:
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 77
if(c_rt_lib0check_true_native(___nl__6)){ goto label_10;}
#line 77
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 78
c_rt_lib0delete(array0push(___ref___0, ___nl__2));
#line 79
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 79
goto label_3;
#line 79
label_10:
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
c_rt_lib0clear(&___nl__1);
#line 79
return NULL;
}

ImmT array0join_arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0join_arr");
return array0join_arr(_tab[0], _tab[1]);}
ImmT array0join_arr(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 83
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 84
c_rt_lib0delete(array0append(&___nl__2, ___nl__1));
#line 85
c_rt_lib0clear(&___nl__0);
#line 85
c_rt_lib0clear(&___nl__1);
#line 85
return ___nl__2;
#line 85
c_rt_lib0clear(&___nl__2);
#line 85
c_rt_lib0clear(&___nl__0);
#line 85
c_rt_lib0clear(&___nl__1);
#line 85
return NULL;
}

ImmT array0len0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0len");
return array0len(_tab[0]);}
ImmT array0len(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 89
c_rt_lib0move(&___nl__1, c_std_lib0array_len(___nl__0));
#line 89
c_rt_lib0clear(&___nl__0);
#line 89
return ___nl__1;
#line 89
c_rt_lib0clear(&___nl__1);
#line 89
c_rt_lib0clear(&___nl__0);
#line 89
return NULL;
}

ImmT array0is_empty0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0is_empty");
return array0is_empty(_tab[0]);}
ImmT array0is_empty(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 93
c_rt_lib0move(&___nl__1, array0len(___nl__0));
#line 93
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 93
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 93
c_rt_lib0clear(&___nl__2);
#line 93
c_rt_lib0clear(&___nl__0);
#line 93
return ___nl__1;
#line 93
c_rt_lib0clear(&___nl__1);
#line 93
c_rt_lib0clear(&___nl__0);
#line 93
return NULL;
}

ImmT array0cmp0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0cmp");
return array0cmp(_tab[0], _tab[1]);}
ImmT array0cmp(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 97
c_rt_lib0move(&___nl__2, c_std_lib0string_compare(___nl__0, ___nl__1));
#line 97
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 97
c_rt_lib0move(&___nl__2, c_rt_lib0lt(___nl__2, ___nl__3));
#line 97
c_rt_lib0clear(&___nl__3);
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
c_rt_lib0clear(&___nl__1);
#line 97
return ___nl__2;
#line 97
c_rt_lib0clear(&___nl__2);
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
c_rt_lib0clear(&___nl__1);
#line 97
return NULL;
}

ImmT array0sort0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0sort");
return array0sort(&_tab[0]);}
ImmT array0sort(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
#line 101
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(array0cmp0ptr, ___get_global_const(3), ___get_global_const(4)));
#line 101
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 101
c_rt_lib0delete(array_priv0sort(___ref___0, ___nl__1));
#line 101
c_rt_lib0clear(&___nl__1);
#line 101
return NULL;
}

ImmT array0sort_comparator0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0sort_comparator");
return array0sort_comparator(&_tab[0], _tab[1]);}
ImmT array0sort_comparator(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
#line 105
c_rt_lib0delete(array_priv0sort(___ref___0, ___nl__1));
#line 105
c_rt_lib0clear(&___nl__1);
#line 105
return NULL;
}

ImmT array0equal0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0equal");
return array0equal(_tab[0], _tab[1]);}
ImmT array0equal(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 109
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 109
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 109
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 109
c_rt_lib0clear(&___nl__3);
#line 109
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 109
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 109
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 109
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 109
c_rt_lib0clear(&___nl__0);
#line 109
c_rt_lib0clear(&___nl__1);
#line 109
c_rt_lib0clear(&___nl__2);
#line 109
return ___nl__3;
#line 109
c_rt_lib0clear(&___nl__3);
#line 109
goto label_14;
#line 109
label_14:
#line 109
c_rt_lib0clear(&___nl__2);
#line 110
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 110
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 110
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 110
label_19:
#line 110
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 110
if(c_rt_lib0check_true_native(___nl__5)){ goto label_44;}
#line 111
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 111
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 111
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 111
c_rt_lib0clear(&___nl__7);
#line 111
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 111
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 111
if(c_rt_lib0check_true_native(___nl__6)){ goto label_40;}
#line 111
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 111
c_rt_lib0clear(&___nl__0);
#line 111
c_rt_lib0clear(&___nl__1);
#line 111
c_rt_lib0clear(&___nl__2);
#line 111
c_rt_lib0clear(&___nl__3);
#line 111
c_rt_lib0clear(&___nl__4);
#line 111
c_rt_lib0clear(&___nl__5);
#line 111
c_rt_lib0clear(&___nl__6);
#line 111
return ___nl__7;
#line 111
c_rt_lib0clear(&___nl__7);
#line 111
goto label_40;
#line 111
label_40:
#line 111
c_rt_lib0clear(&___nl__6);
#line 112
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 112
goto label_19;
#line 112
label_44:
#line 112
c_rt_lib0clear(&___nl__2);
#line 112
c_rt_lib0clear(&___nl__3);
#line 112
c_rt_lib0clear(&___nl__4);
#line 112
c_rt_lib0clear(&___nl__5);
#line 113
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 113
c_rt_lib0clear(&___nl__0);
#line 113
c_rt_lib0clear(&___nl__1);
#line 113
return ___nl__2;
#line 113
c_rt_lib0clear(&___nl__2);
#line 113
c_rt_lib0clear(&___nl__0);
#line 113
c_rt_lib0clear(&___nl__1);
#line 113
return NULL;
}

ImmT array_priv0sort(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 117
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 117
c_rt_lib0move(&___nl__3, array0len(*___ref___0));
#line 117
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 117
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 117
c_rt_lib0clear(&___nl__4);
#line 117
c_rt_lib0delete(array_priv0part_sort(___ref___0, ___nl__2, ___nl__3, ___nl__1));
#line 117
c_rt_lib0clear(&___nl__3);
#line 117
c_rt_lib0clear(&___nl__2);
#line 117
c_rt_lib0clear(&___nl__1);
#line 117
return NULL;
}

ImmT array_priv0exec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 121
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__1, ___nl__2));
#line 122
c_rt_lib0move(&___nl__4, c_std_lib0exec(___nl__0, &___nl__3));
#line 122
c_rt_lib0clear(&___nl__0);
#line 122
c_rt_lib0clear(&___nl__1);
#line 122
c_rt_lib0clear(&___nl__2);
#line 122
c_rt_lib0clear(&___nl__3);
#line 122
return ___nl__4;
#line 122
c_rt_lib0clear(&___nl__4);
#line 122
c_rt_lib0clear(&___nl__3);
#line 122
c_rt_lib0clear(&___nl__0);
#line 122
c_rt_lib0clear(&___nl__1);
#line 122
c_rt_lib0clear(&___nl__2);
#line 122
return NULL;
}

ImmT array_priv0part_sort(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
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
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0sub(___nl__2, ___nl__1));
#line 126
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0le(___nl__4, ___nl__5));
#line 126
c_rt_lib0clear(&___nl__5);
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 126
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 126
c_rt_lib0clear(&___nl__1);
#line 126
c_rt_lib0clear(&___nl__2);
#line 126
c_rt_lib0clear(&___nl__3);
#line 126
c_rt_lib0clear(&___nl__4);
#line 126
return NULL;
#line 126
goto label_12;
#line 126
label_12:
#line 126
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0move(&___nl__4, c_rt_lib0sub(___nl__2, ___nl__1));
#line 127
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 127
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 127
c_rt_lib0clear(&___nl__5);
#line 127
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 127
if(c_rt_lib0check_true_native(___nl__4)){ goto label_53;}
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___0, ___nl__1));
#line 128
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(*___ref___0, ___nl__2));
#line 128
c_rt_lib0move(&___nl__5, array_priv0exec(___nl__3, ___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0clear(&___nl__6);
#line 128
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 128
if(c_rt_lib0check_true_native(___nl__5)){ goto label_34;}
#line 128
c_rt_lib0clear(&___nl__1);
#line 128
c_rt_lib0clear(&___nl__2);
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0clear(&___nl__5);
#line 128
return NULL;
#line 128
goto label_34;
#line 128
label_34:
#line 128
c_rt_lib0clear(&___nl__5);
#line 129
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(*___ref___0, ___nl__1));
#line 130
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(*___ref___0, ___nl__2));
#line 130
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 130
c_rt_lib0array_set(___ref___0, ___nl__1, ___nl__7);
#line 130
c_rt_lib0clear(&___nl__6);
#line 130
c_rt_lib0clear(&___nl__7);
#line 131
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 131
c_rt_lib0array_set(___ref___0, ___nl__2, ___nl__6);
#line 131
c_rt_lib0clear(&___nl__6);
#line 132
c_rt_lib0clear(&___nl__1);
#line 132
c_rt_lib0clear(&___nl__2);
#line 132
c_rt_lib0clear(&___nl__3);
#line 132
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0clear(&___nl__5);
#line 132
return NULL;
#line 132
c_rt_lib0clear(&___nl__5);
#line 133
goto label_53;
#line 133
label_53:
#line 133
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0sub(___nl__2, ___nl__1));
#line 134
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 134
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0sub(___nl__2, ___nl__1));
#line 134
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 134
c_rt_lib0clear(&___nl__6);
#line 134
c_rt_lib0move(&___nl__6,___get_global_const(6));
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0mod_mod(___nl__5, ___nl__6));
#line 134
c_rt_lib0clear(&___nl__6);
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__5));
#line 134
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0move(&___nl__5,___get_global_const(6));
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0div_mod(___nl__4, ___nl__5));
#line 134
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0add(___nl__1, ___nl__4));
#line 135
c_rt_lib0delete(array_priv0part_sort(___ref___0, ___nl__1, ___nl__4, ___nl__3));
#line 136
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 136
c_rt_lib0move(&___nl__5, c_rt_lib0add(___nl__4, ___nl__5));
#line 136
c_rt_lib0delete(array_priv0part_sort(___ref___0, ___nl__5, ___nl__2, ___nl__3));
#line 136
c_rt_lib0clear(&___nl__5);
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 138
c_rt_lib0copy(&___nl__6, ___nl__1);
#line 139
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 139
c_rt_lib0move(&___nl__7, c_rt_lib0add(___nl__4, ___nl__7));
#line 140
label_81:
#line 140
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__6, ___nl__4));
#line 140
if(c_rt_lib0check_true_native(___nl__8)){ goto label_85;}
#line 140
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__2));
#line 140
label_85:
#line 140
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 140
if(c_rt_lib0check_true_native(___nl__8)){ goto label_135;}
#line 141
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__6, ___nl__4));
#line 141
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 141
if(c_rt_lib0check_true_native(___nl__9)){ goto label_98;}
#line 142
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 142
c_rt_lib0delete(array0push(&___nl__5, ___nl__10));
#line 142
c_rt_lib0clear(&___nl__10);
#line 143
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 143
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__10));
#line 143
c_rt_lib0clear(&___nl__10);
#line 144
goto label_132;
#line 144
label_98:
#line 144
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__7, ___nl__2));
#line 144
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 144
if(c_rt_lib0check_true_native(___nl__9)){ goto label_109;}
#line 145
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(*___ref___0, ___nl__6));
#line 145
c_rt_lib0delete(array0push(&___nl__5, ___nl__10));
#line 145
c_rt_lib0clear(&___nl__10);
#line 146
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 146
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__10));
#line 146
c_rt_lib0clear(&___nl__10);
#line 147
goto label_132;
#line 147
label_109:
#line 147
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(*___ref___0, ___nl__6));
#line 147
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 147
c_rt_lib0move(&___nl__9, array_priv0exec(___nl__3, ___nl__10, ___nl__11));
#line 147
c_rt_lib0clear(&___nl__11);
#line 147
c_rt_lib0clear(&___nl__10);
#line 147
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 147
if(c_rt_lib0check_true_native(___nl__9)){ goto label_124;}
#line 148
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(*___ref___0, ___nl__6));
#line 148
c_rt_lib0delete(array0push(&___nl__5, ___nl__10));
#line 148
c_rt_lib0clear(&___nl__10);
#line 149
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 149
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__10));
#line 149
c_rt_lib0clear(&___nl__10);
#line 150
goto label_132;
#line 150
label_124:
#line 151
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(*___ref___0, ___nl__7));
#line 151
c_rt_lib0delete(array0push(&___nl__5, ___nl__10));
#line 151
c_rt_lib0clear(&___nl__10);
#line 152
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 152
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__10));
#line 152
c_rt_lib0clear(&___nl__10);
#line 153
goto label_132;
#line 153
label_132:
#line 153
c_rt_lib0clear(&___nl__9);
#line 154
goto label_81;
#line 154
label_135:
#line 154
c_rt_lib0clear(&___nl__8);
#line 155
c_rt_lib0move(&___nl__8, c_rt_lib0sub(___nl__2, ___nl__1));
#line 155
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 155
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 155
c_rt_lib0clear(&___nl__9);
#line 155
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 155
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 155
label_143:
#line 155
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__9, ___nl__8));
#line 155
if(c_rt_lib0check_true_native(___nl__11)){ goto label_155;}
#line 155
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__5, ___nl__9));
#line 155
c_rt_lib0move(&___nl__14, c_rt_lib0add(___nl__1, ___nl__9));
#line 155
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 155
c_rt_lib0array_set(___ref___0, ___nl__14, ___nl__13);
#line 155
c_rt_lib0clear(&___nl__12);
#line 155
c_rt_lib0clear(&___nl__13);
#line 155
c_rt_lib0clear(&___nl__14);
#line 155
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 155
goto label_143;
#line 155
label_155:
#line 155
c_rt_lib0clear(&___nl__8);
#line 155
c_rt_lib0clear(&___nl__9);
#line 155
c_rt_lib0clear(&___nl__10);
#line 155
c_rt_lib0clear(&___nl__11);
#line 155
c_rt_lib0clear(&___nl__4);
#line 155
c_rt_lib0clear(&___nl__5);
#line 155
c_rt_lib0clear(&___nl__6);
#line 155
c_rt_lib0clear(&___nl__7);
#line 155
c_rt_lib0clear(&___nl__1);
#line 155
c_rt_lib0clear(&___nl__2);
#line 155
c_rt_lib0clear(&___nl__3);
#line 155
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void array0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}
ImmT array_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT array_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
