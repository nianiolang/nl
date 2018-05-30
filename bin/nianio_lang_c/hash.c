
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "hash.h"
#include "c_std_lib.h"
#line 1 "hash.nl"

static ImmT *__const__f = NULL;
ImmT hash_priv0__const__sim(int __nr);
ImmT hash_priv0__const__sing(int __nr);



ImmT hash0get_value0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0get_value");
return hash0get_value(_tab[0], _tab[1]);}
ImmT hash0get_value(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 9
c_rt_lib0move(&___nl__2, c_std_lib0hash_get_value(___nl__0, ___nl__1));
#line 9
c_rt_lib0clear(&___nl__0);
#line 9
c_rt_lib0clear(&___nl__1);
#line 9
return ___nl__2;
#line 9
c_rt_lib0clear(&___nl__2);
#line 9
c_rt_lib0clear(&___nl__0);
#line 9
c_rt_lib0clear(&___nl__1);
#line 9
return NULL;
}

ImmT hash0has_key0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0has_key");
return hash0has_key(_tab[0], _tab[1]);}
ImmT hash0has_key(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 13
c_rt_lib0move(&___nl__2, c_std_lib0hash_has_key(___nl__0, ___nl__1));
#line 13
c_rt_lib0clear(&___nl__0);
#line 13
c_rt_lib0clear(&___nl__1);
#line 13
return ___nl__2;
#line 13
c_rt_lib0clear(&___nl__2);
#line 13
c_rt_lib0clear(&___nl__0);
#line 13
c_rt_lib0clear(&___nl__1);
#line 13
return NULL;
}

ImmT hash0set_value0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "hash0set_value");
return hash0set_value(&_tab[0], _tab[1], _tab[2]);}
ImmT hash0set_value(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
#line 17
c_rt_lib0delete(c_std_lib0hash_set_value(___ref___0, ___nl__1, ___nl__2));
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
return NULL;
}

ImmT hash0delete0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0delete");
return hash0delete(&_tab[0], _tab[1]);}
ImmT hash0delete(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
#line 21
c_rt_lib0delete(c_std_lib0hash_delete(___ref___0, ___nl__1));
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
return NULL;
}

ImmT hash0size0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "hash0size");
return hash0size(_tab[0]);}
ImmT hash0size(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 25
c_rt_lib0move(&___nl__1, c_std_lib0hash_size(___nl__0));
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
return ___nl__1;
#line 25
c_rt_lib0clear(&___nl__1);
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
return NULL;
}

ImmT hash0keys0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "hash0keys");
return hash0keys(_tab[0]);}
ImmT hash0keys(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 29
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 30
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 30
label_2:
#line 30
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 30
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 30
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 30
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 31
c_rt_lib0delete(c_std_lib0array_push(&___nl__1, ___nl__2));
#line 32
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 32
goto label_2;
#line 32
label_10:
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

ImmT hash0values0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "hash0values");
return hash0values(_tab[0]);}
ImmT hash0values(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 37
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 38
label_2:
#line 38
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 38
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 38
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 38
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 39
c_rt_lib0delete(c_std_lib0array_push(&___nl__1, ___nl__3));
#line 40
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 40
goto label_2;
#line 40
label_10:
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__3);
#line 40
c_rt_lib0clear(&___nl__4);
#line 41
c_rt_lib0clear(&___nl__0);
#line 41
return ___nl__1;
#line 41
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0clear(&___nl__0);
#line 41
return NULL;
}

ImmT hash0merge0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0merge");
return hash0merge(_tab[0], _tab[1]);}
ImmT hash0merge(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 45
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 46
c_rt_lib0delete(hash0add_all(&___nl__2, ___nl__1));
#line 47
c_rt_lib0clear(&___nl__0);
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
return ___nl__2;
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__0);
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
return NULL;
}

ImmT hash0add_all0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0add_all");
return hash0add_all(&_tab[0], _tab[1]);}
ImmT hash0add_all(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 51
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__1));
#line 51
label_1:
#line 51
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 51
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 51
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__1, ___nl__2));
#line 51
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__2, ___nl__3));
#line 51
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 51
goto label_1;
#line 51
label_9:
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__3);
#line 51
c_rt_lib0clear(&___nl__4);
#line 51
c_rt_lib0clear(&___nl__1);
#line 51
return NULL;
}

ImmT hash0set2keys0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "hash0set2keys");
return hash0set2keys(&_tab[0], _tab[1], _tab[2], _tab[3]);}
ImmT hash0set2keys(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 55
c_rt_lib0move(&___nl__4, hash0has_key(*___ref___0, ___nl__1));
#line 55
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 55
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 55
goto label_6;
#line 55
label_4:
#line 55
c_rt_lib0move(&___nl__4, hash0get_value(*___ref___0, ___nl__1));
#line 55
label_6:
#line 56
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 56
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__1, ___nl__5));
#line 56
c_rt_lib0clear(&___nl__5);
#line 57
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__2, ___nl__3));
#line 58
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__1, ___nl__4));
#line 58
c_rt_lib0clear(&___nl__4);
#line 58
c_rt_lib0clear(&___nl__1);
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
return NULL;
}

ImmT hash0has2keys0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "hash0has2keys");
return hash0has2keys(_tab[0], _tab[1], _tab[2]);}
ImmT hash0has2keys(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 62
c_rt_lib0move(&___nl__3, hash0has_key(___nl__0, ___nl__1));
#line 62
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 62
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 62
c_rt_lib0move(&___nl__5, hash0get_value(___nl__0, ___nl__1));
#line 62
c_rt_lib0move(&___nl__3, hash0has_key(___nl__5, ___nl__2));
#line 62
c_rt_lib0clear(&___nl__5);
#line 62
label_6:
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
c_rt_lib0clear(&___nl__0);
#line 62
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
return ___nl__3;
#line 62
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0clear(&___nl__0);
#line 62
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
return NULL;
}

ImmT hash0get2keys0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "hash0get2keys");
return hash0get2keys(_tab[0], _tab[1], _tab[2]);}
ImmT hash0get2keys(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 66
c_rt_lib0move(&___nl__4, hash0get_value(___nl__0, ___nl__1));
#line 66
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__2));
#line 66
c_rt_lib0clear(&___nl__4);
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
c_rt_lib0clear(&___nl__1);
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
return ___nl__3;
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

ImmT hash0set3keys0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 5, "hash0set3keys");
return hash0set3keys(&_tab[0], _tab[1], _tab[2], _tab[3], _tab[4]);}
ImmT hash0set3keys(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 70
c_rt_lib0move(&___nl__5, hash0has_key(*___ref___0, ___nl__1));
#line 70
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 70
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 70
goto label_6;
#line 70
label_4:
#line 70
c_rt_lib0move(&___nl__5, hash0get_value(*___ref___0, ___nl__1));
#line 70
label_6:
#line 71
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 71
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__1, ___nl__6));
#line 71
c_rt_lib0clear(&___nl__6);
#line 72
c_rt_lib0delete(hash0set2keys(&___nl__5, ___nl__2, ___nl__3, ___nl__4));
#line 73
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__1, ___nl__5));
#line 73
c_rt_lib0clear(&___nl__5);
#line 73
c_rt_lib0clear(&___nl__1);
#line 73
c_rt_lib0clear(&___nl__2);
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0clear(&___nl__4);
#line 73
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void hash0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}
ImmT hash_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT hash_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
