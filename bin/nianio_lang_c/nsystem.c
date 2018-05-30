
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "nsystem.h"
#include "c_fe_lib.h"
#line 1 "nsystem.nl"

static ImmT *__const__f = NULL;
ImmT nsystem_priv0__const__sim(int __nr);
ImmT nsystem_priv0__const__sing(int __nr);



ImmT nsystem0time_microsec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nsystem0time_microsec");
return nsystem0time_microsec();}
ImmT nsystem0time_microsec() {
ImmT ___nl__0 = NULL;
#line 9
c_rt_lib0move(&___nl__0, c_fe_lib0get_time());
#line 9
return ___nl__0;
#line 9
c_rt_lib0clear(&___nl__0);
#line 9
return NULL;
}

ImmT nsystem0get_pid0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nsystem0get_pid");
return nsystem0get_pid();}
ImmT nsystem0get_pid() {
ImmT ___nl__0 = NULL;
#line 13
c_rt_lib0move(&___nl__0, c_fe_lib0get_pid());
#line 13
return ___nl__0;
#line 13
c_rt_lib0clear(&___nl__0);
#line 13
return NULL;
}

ImmT nsystem0time0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nsystem0time");
return nsystem0time();}
ImmT nsystem0time() {
ImmT ___nl__0 = NULL;
#line 17
c_rt_lib0move(&___nl__0, c_fe_lib0time());
#line 17
return ___nl__0;
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT nsystem0localtime0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nsystem0localtime");
return nsystem0localtime(_tab[0]);}
ImmT nsystem0localtime(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 21
c_rt_lib0move(&___nl__1, c_fe_lib0localtime(___nl__0));
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return ___nl__1;
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void nsystem0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}
ImmT nsystem_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nsystem_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
