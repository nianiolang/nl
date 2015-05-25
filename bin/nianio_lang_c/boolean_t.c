
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "boolean_t.h"
#include "ptd.h"
#line 1 "boolean_t.nl"

static ImmT *__const__f = NULL;
void boolean_t_priv0__const__init();
ImmT boolean_t_priv0__const__sim(int __nr);
ImmT boolean_t_priv0__const__sing(int __nr);



ImmT boolean_t0type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "boolean_t0type");
return boolean_t0type();}
ImmT boolean_t0type(){
boolean_t_priv0__const__init();
return boolean_t_priv0__const__sing(0);}
ImmT boolean_t0type0cal() {
boolean_t_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 9
c_rt_lib0move(&___nl__2, ptd0none());
#line 9
c_rt_lib0move(&___nl__3, ptd0none());
#line 9
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(6), ___nl__2, ___get_global_const(7), ___nl__3));
#line 9
c_rt_lib0clear(&___nl__2);
#line 9
c_rt_lib0clear(&___nl__3);
#line 9
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 9
c_rt_lib0clear(&___nl__1);
#line 9
return ___nl__0;
#line 9
c_rt_lib0clear(&___nl__0);
#line 9
return NULL;
}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void boolean_t_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}}
ImmT boolean_t_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT boolean_t_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = boolean_t0type0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
