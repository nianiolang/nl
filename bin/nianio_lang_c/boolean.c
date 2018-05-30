
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "boolean.h"
#line 1 "boolean.nl"

static ImmT *__const__f = NULL;
ImmT boolean_priv0__const__sim(int __nr);
ImmT boolean_priv0__const__sing(int __nr);



ImmT boolean0to_nl0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "boolean0to_nl");
return boolean0to_nl(_tab[0]);}
ImmT boolean0to_nl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 7
c_rt_lib0move(&___nl__1,___get_global_const(1));
#line 7
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 7
c_rt_lib0clear(&___nl__0);
#line 7
return ___nl__1;
#line 7
c_rt_lib0clear(&___nl__1);
#line 7
c_rt_lib0clear(&___nl__0);
#line 7
return NULL;
}

ImmT boolean0check_true0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "boolean0check_true");
return boolean0check_true(_tab[0]);}
ImmT boolean0check_true(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 11
if(c_rt_lib0check_true_native(___nl__0)){ goto label_3;}
#line 11
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 11
goto label_5;
#line 11
label_3:
#line 11
c_rt_lib0move(&___nl__1,___get_global_const(1));
#line 11
label_5:
#line 11
c_rt_lib0clear(&___nl__0);
#line 11
return ___nl__1;
#line 11
c_rt_lib0clear(&___nl__1);
#line 11
c_rt_lib0clear(&___nl__0);
#line 11
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void boolean0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}
ImmT boolean_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT boolean_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
