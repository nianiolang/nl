
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "enum.h"
#include "ov.h"
#include "boolean_t.h"
#line 1 "enum.nl"

static ImmT *__const__f = NULL;
void enum_priv0__const__init();
ImmT enum_priv0__const__sim(int __nr);
ImmT enum_priv0__const__sing(int __nr);



ImmT enum0eq0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "enum0eq");
return enum0eq(_tab[0], _tab[1]);}
ImmT enum0eq(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
enum_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 10
c_rt_lib0move(&___nl__2, ov0has_value(___nl__0));
#line 10
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 10
c_rt_lib0move(&___nl__2, ov0has_value(___nl__1));
#line 10
label_3:
#line 10
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 10
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 10
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 10
nl_die_arg(___nl__3);
#line 10
goto label_2;
#line 10
label_2:
#line 10
c_rt_lib0clear(&___nl__2);
#line 10
c_rt_lib0clear(&___nl__3);
#line 11
c_rt_lib0move(&___nl__2, ov0get_element(___nl__0));
#line 11
c_rt_lib0move(&___nl__3, ov0get_element(___nl__1));
#line 11
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 11
c_rt_lib0clear(&___nl__3);
#line 11
c_rt_lib0clear(&___nl__0);
#line 11
c_rt_lib0clear(&___nl__1);
#line 11
return ___nl__2;
#line 11
c_rt_lib0clear(&___nl__2);
#line 11
c_rt_lib0clear(&___nl__0);
#line 11
c_rt_lib0clear(&___nl__1);
#line 11
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void enum_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT enum_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT enum_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
