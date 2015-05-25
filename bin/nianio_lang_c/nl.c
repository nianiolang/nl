
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "nl.h"
#include "c_std_lib.h"
#include "boolean_t.h"
#line 1 "nl.nl"

static ImmT *__const__f = NULL;
void nl_priv0__const__init();
ImmT nl_priv0__const__sim(int __nr);
ImmT nl_priv0__const__sing(int __nr);



ImmT nl0is_array0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_array");
return nl0is_array(_tab[0]);}
ImmT nl0is_array(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
nl_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 9
c_rt_lib0move(&___nl__1, c_std_lib0is_array(___nl__0));
#line 9
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 9
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 9
goto label_1;
#line 9
label_2:
#line 9
c_rt_lib0move(&___nl__1, c_rt_lib0get_true());
#line 9
label_1:
#line 9
c_rt_lib0clear(&___nl__0);
#line 9
return ___nl__1;
#line 9
c_rt_lib0clear(&___nl__1);
#line 9
c_rt_lib0clear(&___nl__0);
#line 9
return NULL;
}

ImmT nl0is_hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_hash");
return nl0is_hash(_tab[0]);}
ImmT nl0is_hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
nl_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 13
c_rt_lib0move(&___nl__1, c_std_lib0is_hash(___nl__0));
#line 13
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 13
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 13
goto label_1;
#line 13
label_2:
#line 13
c_rt_lib0move(&___nl__1, c_rt_lib0get_true());
#line 13
label_1:
#line 13
c_rt_lib0clear(&___nl__0);
#line 13
return ___nl__1;
#line 13
c_rt_lib0clear(&___nl__1);
#line 13
c_rt_lib0clear(&___nl__0);
#line 13
return NULL;
}

ImmT nl0is_sim0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_sim");
return nl0is_sim(_tab[0]);}
ImmT nl0is_sim(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
nl_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 17
c_rt_lib0move(&___nl__1, c_std_lib0is_sim(___nl__0));
#line 17
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 17
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 17
goto label_1;
#line 17
label_2:
#line 17
c_rt_lib0move(&___nl__1, c_rt_lib0get_true());
#line 17
label_1:
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return ___nl__1;
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT nl0is_variant0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_variant");
return nl0is_variant(_tab[0]);}
ImmT nl0is_variant(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
nl_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 21
c_rt_lib0move(&___nl__1, c_std_lib0is_variant(___nl__0));
#line 21
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 21
goto label_1;
#line 21
label_2:
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0get_true());
#line 21
label_1:
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

ImmT nl0print0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0print");
return nl0print(_tab[0]);}
ImmT nl0print(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
nl_priv0__const__init();
#line 25
c_rt_lib0delete(c_std_lib0print(___nl__0));
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void nl_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT nl_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nl_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
