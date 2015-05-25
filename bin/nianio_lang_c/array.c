
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "array.h"
#include "c_std_lib.h"
#line 1 "array.nl"

static ImmT *__const__f = NULL;
void array_priv0__const__init();
ImmT array_priv0__const__sim(int __nr);
ImmT array_priv0__const__sing(int __nr);



ImmT array0subarray0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "array0subarray");
return array0subarray(_tab[0], _tab[1], _tab[2]);}
ImmT array0subarray(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
array_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 8
c_rt_lib0move(&___nl__3, c_std_lib0array_sub(___nl__0, ___nl__1, ___nl__2));
#line 8
c_rt_lib0clear(&___nl__0);
#line 8
c_rt_lib0clear(&___nl__1);
#line 8
c_rt_lib0clear(&___nl__2);
#line 8
return ___nl__3;
#line 8
c_rt_lib0clear(&___nl__3);
#line 8
c_rt_lib0clear(&___nl__0);
#line 8
c_rt_lib0clear(&___nl__1);
#line 8
c_rt_lib0clear(&___nl__2);
#line 8
return NULL;
}

ImmT array0join0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0join");
return array0join(_tab[0], _tab[1]);}
ImmT array0join(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
array_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 12
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 13
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 14
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 14
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 14
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 14
label_3:
#line 14
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 14
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 14
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 15
c_rt_lib0copy(&___nl__9, ___nl__3);
#line 15
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 15
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 15
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 15
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 15
goto label_5;
#line 15
label_5:
#line 15
c_rt_lib0clear(&___nl__9);
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 17
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 17
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 17
c_rt_lib0clear(&___nl__9);
#line 18
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 18
goto label_3;
#line 18
label_1:
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
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
c_rt_lib0clear(&___nl__1);
#line 19
c_rt_lib0clear(&___nl__3);
#line 19
return ___nl__2;
#line 19
c_rt_lib0clear(&___nl__2);
#line 19
c_rt_lib0clear(&___nl__3);
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
c_rt_lib0clear(&___nl__1);
#line 19
return NULL;
}

ImmT array0push0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0push");
return array0push(&_tab[0], _tab[1]);}
ImmT array0push(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
array_priv0__const__init();
#line 23
c_rt_lib0delete(c_std_lib0array_push(___ref___0, ___nl__1));
#line 23
c_rt_lib0clear(&___nl__1);
#line 23
return NULL;
}

ImmT array0pop0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0pop");
return array0pop(&_tab[0]);}
ImmT array0pop(ImmT * ___ref___0) {
array_priv0__const__init();
#line 26
c_rt_lib0delete(c_std_lib0array_pop(___ref___0));
#line 26
return NULL;
}

ImmT array0append0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0append");
return array0append(&_tab[0], _tab[1]);}
ImmT array0append(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
array_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 30
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 30
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 30
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__1));
#line 30
label_3:
#line 30
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 30
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 30
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 31
c_rt_lib0delete(array0push(___ref___0, ___nl__2));
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
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
#line 32
c_rt_lib0clear(&___nl__5);
#line 32
c_rt_lib0clear(&___nl__6);
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
return NULL;
}

ImmT array0len0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0len");
return array0len(_tab[0]);}
ImmT array0len(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
array_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 36
c_rt_lib0move(&___nl__1, c_std_lib0array_len(___nl__0));
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

ImmT array0cmp0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0cmp");
return array0cmp(_tab[0], _tab[1]);}
ImmT array0cmp(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
array_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 40
c_rt_lib0move(&___nl__2, c_std_lib0string_compare(___nl__0, ___nl__1));
#line 40
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 40
c_rt_lib0move(&___nl__2, c_rt_lib0lt(___nl__2, ___nl__3));
#line 40
c_rt_lib0clear(&___nl__3);
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
c_rt_lib0clear(&___nl__1);
#line 40
return ___nl__2;
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
c_rt_lib0clear(&___nl__1);
#line 40
return NULL;
}

ImmT array0sort0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0sort");
return array0sort(&_tab[0]);}
ImmT array0sort(ImmT * ___ref___0) {
array_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 44
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(array0cmp0ptr, ___get_global_const(3), ___get_global_const(4)));
#line 44
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 44
c_rt_lib0move(&___nl__1, c_std_lib0array_sort(*___ref___0, ___nl__2));
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0copy(___ref___0, ___nl__1);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void array_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
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
