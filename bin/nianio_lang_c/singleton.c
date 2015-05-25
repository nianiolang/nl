
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "singleton.h"
#line 1 "singleton.nl"

static ImmT *__const__f = NULL;
void singleton_priv0__const__init();
ImmT singleton_priv0__const__sim(int __nr);
ImmT singleton_priv0__const__sing(int __nr);



ImmT singleton0sigleton_do_not_use_without_approval0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "singleton0sigleton_do_not_use_without_approval");
return singleton0sigleton_do_not_use_without_approval(_tab[0]);}
ImmT singleton0sigleton_do_not_use_without_approval(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
singleton_priv0__const__init();
#line 9
return ___nl__0;
#line 9
c_rt_lib0clear(&___nl__0);
#line 9
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void singleton_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT singleton_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT singleton_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
