
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "compiler_lib.h"
#include "ptd.h"
#include "compiler_lib.h"
#line 1 "compiler_lib.nl"

static ImmT *__const__f = NULL;
ImmT compiler_lib_priv0__const__sim(int __nr);
ImmT compiler_lib_priv0__const__sing(int __nr);



ImmT compiler_lib0error_type_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler_lib0error_type_t");
return compiler_lib0error_type_t();}
ImmT compiler_lib0error_type_t(){
return compiler_lib_priv0__const__sing(0);}
ImmT compiler_lib0error_type_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 6
c_rt_lib0move(&___nl__2, ptd0none());
#line 7
c_rt_lib0move(&___nl__3, ptd0none());
#line 7
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(112), ___nl__2, ___get_global_const(177), ___nl__3));
#line 7
c_rt_lib0clear(&___nl__2);
#line 7
c_rt_lib0clear(&___nl__3);
#line 7
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 7
c_rt_lib0clear(&___nl__1);
#line 7
return ___nl__0;
#line 7
c_rt_lib0clear(&___nl__0);
#line 7
return NULL;
}

ImmT compiler_lib0error_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler_lib0error_t");
return compiler_lib0error_t();}
ImmT compiler_lib0error_t(){
return compiler_lib_priv0__const__sing(1);}
ImmT compiler_lib0error_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 13
c_rt_lib0move(&___nl__2, ptd0sim());
#line 14
c_rt_lib0move(&___nl__3, ptd0sim());
#line 15
c_rt_lib0move(&___nl__4, ptd0sim());
#line 16
c_rt_lib0move(&___nl__5, ptd0sim());
#line 17
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(compiler_lib0error_type_t0ptr, ___get_global_const(20), ___get_global_const(178)));
#line 17
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 17
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(134), ___nl__2, ___get_global_const(179), ___nl__3, ___get_global_const(137), ___nl__4, ___get_global_const(132), ___nl__5, ___get_global_const(63), ___nl__6));
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
c_rt_lib0clear(&___nl__6);
#line 17
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return ___nl__0;
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT compiler_lib0errors_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler_lib0errors_t");
return compiler_lib0errors_t();}
ImmT compiler_lib0errors_t(){
return compiler_lib_priv0__const__sing(2);}
ImmT compiler_lib0errors_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 22
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(20), ___get_global_const(21)));
#line 22
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 22
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
return ___nl__0;
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
return NULL;
}


static ImmT ___const__[4];
static int ___const_init__ = 1;
void compiler_lib0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[3];


for(int i=0;i<3;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 3);
}
ImmT compiler_lib_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT compiler_lib_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = compiler_lib0error_type_t0cal();
	break;
case 1:
	___const__[1] = compiler_lib0error_t0cal();
	break;
case 2:
	___const__[2] = compiler_lib0errors_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
