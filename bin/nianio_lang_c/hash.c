
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "hash.h"
#include "c_std_lib.h"
#line 1 "hash.nl"

static ImmT *__const__f = NULL;
void hash_priv0__const__init();
ImmT hash_priv0__const__sim(int __nr);
ImmT hash_priv0__const__sing(int __nr);



ImmT hash0get_value0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0get_value");
return hash0get_value(_tab[0], _tab[1]);}
ImmT hash0get_value(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
hash_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 8
c_rt_lib0move(&___nl__2, c_std_lib0hash_get_value(___nl__0, ___nl__1));
#line 8
c_rt_lib0clear(&___nl__0);
#line 8
c_rt_lib0clear(&___nl__1);
#line 8
return ___nl__2;
#line 8
c_rt_lib0clear(&___nl__2);
#line 8
c_rt_lib0clear(&___nl__0);
#line 8
c_rt_lib0clear(&___nl__1);
#line 8
return NULL;
}

ImmT hash0has_key0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0has_key");
return hash0has_key(_tab[0], _tab[1]);}
ImmT hash0has_key(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
hash_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 12
c_rt_lib0move(&___nl__2, c_std_lib0hash_has_key(___nl__0, ___nl__1));
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
c_rt_lib0clear(&___nl__1);
#line 12
return ___nl__2;
#line 12
c_rt_lib0clear(&___nl__2);
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
c_rt_lib0clear(&___nl__1);
#line 12
return NULL;
}

ImmT hash0set_value0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "hash0set_value");
return hash0set_value(&_tab[0], _tab[1], _tab[2]);}
ImmT hash0set_value(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
hash_priv0__const__init();
#line 16
c_rt_lib0delete(c_std_lib0hash_set_value(___ref___0, ___nl__1, ___nl__2));
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
return NULL;
}

ImmT hash0delete0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "hash0delete");
return hash0delete(&_tab[0], _tab[1]);}
ImmT hash0delete(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
hash_priv0__const__init();
#line 20
c_rt_lib0delete(c_std_lib0hash_delete(___ref___0, ___nl__1));
#line 20
c_rt_lib0clear(&___nl__1);
#line 20
return NULL;
}

ImmT hash0size0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "hash0size");
return hash0size(_tab[0]);}
ImmT hash0size(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
hash_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 24
c_rt_lib0move(&___nl__1, c_std_lib0hash_size(___nl__0));
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
return ___nl__1;
#line 24
c_rt_lib0clear(&___nl__1);
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
return NULL;
}

ImmT hash0keys0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "hash0keys");
return hash0keys(_tab[0]);}
ImmT hash0keys(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
hash_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 28
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 29
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 29
label_3:
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 29
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 30
c_rt_lib0delete(c_std_lib0array_push(&___nl__1, ___nl__2));
#line 31
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 31
goto label_3;
#line 31
label_1:
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
c_rt_lib0clear(&___nl__4);
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return ___nl__1;
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void hash_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
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
