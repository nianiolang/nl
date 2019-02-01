
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "post_processing_t.h"
#include "ptd.h"
#include "nlasm.h"
#include "boolean_t.h"
#include "interpreter.h"
#include "nlasm.h"
#include "post_processing_t.h"
#include "interpreter.h"
#include "boolean_t.h"
#line 1 "post_processing_t.nl"

static ImmT *__const__f = NULL;
ImmT post_processing_t_priv0__const__sim(int __nr);
ImmT post_processing_t_priv0__const__sing(int __nr);



ImmT post_processing_t0fun_tree_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0fun_tree_t");
return post_processing_t0fun_tree_t();}
ImmT post_processing_t0fun_tree_t(){
return post_processing_t_priv0__const__sing(0);}
ImmT post_processing_t0fun_tree_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 12
c_rt_lib0move(&___nl__4, ptd0sim());
#line 12
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 12
c_rt_lib0clear(&___nl__4);
#line 12
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 12
c_rt_lib0clear(&___nl__3);
#line 12
c_rt_lib0move(&___nl__1, ptd0hash(___nl__2));
#line 12
c_rt_lib0clear(&___nl__2);
#line 12
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 12
c_rt_lib0clear(&___nl__1);
#line 12
return ___nl__0;
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return NULL;
}

ImmT post_processing_t0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0state_t");
return post_processing_t0state_t();}
ImmT post_processing_t0state_t(){
return post_processing_t_priv0__const__sing(1);}
ImmT post_processing_t0state_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nlasm0result_t0ptr, ___get_global_const(273), ___get_global_const(995)));
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 17
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 17
c_rt_lib0clear(&___nl__3);
#line 18
c_rt_lib0move(&___nl__4, ptd0sim());
#line 18
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 18
c_rt_lib0clear(&___nl__4);
#line 19
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(post_processing_t0math_funs_t0ptr, ___get_global_const(996), ___get_global_const(997)));
#line 19
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 20
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(post_processing_t0fun_tree_t0ptr, ___get_global_const(996), ___get_global_const(998)));
#line 20
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 21
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(post_processing_t0math_funs_t0ptr, ___get_global_const(996), ___get_global_const(997)));
#line 21
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 22
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(post_processing_t0optimization_t0ptr, ___get_global_const(996), ___get_global_const(999)));
#line 22
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 23
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(interpreter0state_t0ptr, ___get_global_const(680), ___get_global_const(945)));
#line 23
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 23
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(7, ___get_global_const(180), ___nl__2, ___get_global_const(993), ___nl__3, ___get_global_const(992), ___nl__4, ___get_global_const(991), ___nl__5, ___get_global_const(994), ___nl__6, ___get_global_const(67), ___nl__7, ___get_global_const(181), ___nl__8));
#line 23
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0clear(&___nl__3);
#line 23
c_rt_lib0clear(&___nl__4);
#line 23
c_rt_lib0clear(&___nl__5);
#line 23
c_rt_lib0clear(&___nl__6);
#line 23
c_rt_lib0clear(&___nl__7);
#line 23
c_rt_lib0clear(&___nl__8);
#line 23
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 23
c_rt_lib0clear(&___nl__1);
#line 23
return ___nl__0;
#line 23
c_rt_lib0clear(&___nl__0);
#line 23
return NULL;
}

ImmT post_processing_t0math_funs_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0math_funs_t");
return post_processing_t0math_funs_t();}
ImmT post_processing_t0math_funs_t(){
return post_processing_t_priv0__const__sing(2);}
ImmT post_processing_t0math_funs_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 28
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 28
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 28
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
return ___nl__0;
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
return NULL;
}

ImmT post_processing_t0reg_const0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0reg_const");
return post_processing_t0reg_const();}
ImmT post_processing_t0reg_const(){
return post_processing_t_priv0__const__sing(3);}
ImmT post_processing_t0reg_const0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 32
c_rt_lib0move(&___nl__2, ptd0none());
#line 32
c_rt_lib0move(&___nl__3, ptd0sim());
#line 32
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(46), ___nl__2, ___get_global_const(45), ___nl__3));
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
return ___nl__0;
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return NULL;
}

ImmT post_processing_t0reg_val_const0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0reg_val_const");
return post_processing_t0reg_val_const();}
ImmT post_processing_t0reg_val_const(){
return post_processing_t_priv0__const__sing(4);}
ImmT post_processing_t0reg_val_const0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 36
c_rt_lib0move(&___nl__2, ptd0none());
#line 36
c_rt_lib0move(&___nl__5, ptd0sim());
#line 36
c_rt_lib0move(&___nl__6, ptd0ptd_im());
#line 36
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(194), ___nl__5, ___get_global_const(192), ___nl__6));
#line 36
c_rt_lib0clear(&___nl__5);
#line 36
c_rt_lib0clear(&___nl__6);
#line 36
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 36
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(46), ___nl__2, ___get_global_const(45), ___nl__3));
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
return ___nl__0;
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return NULL;
}

ImmT post_processing_t0optimization_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0optimization_t");
return post_processing_t0optimization_t();}
ImmT post_processing_t0optimization_t(){
return post_processing_t_priv0__const__sing(5);}
ImmT post_processing_t0optimization_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 40
c_rt_lib0move(&___nl__2, ptd0none());
#line 40
c_rt_lib0move(&___nl__3, ptd0none());
#line 40
c_rt_lib0move(&___nl__4, ptd0none());
#line 40
c_rt_lib0move(&___nl__5, ptd0none());
#line 40
c_rt_lib0move(&___nl__6, ptd0none());
#line 40
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(50), ___nl__2, ___get_global_const(51), ___nl__3, ___get_global_const(52), ___nl__4, ___get_global_const(53), ___nl__5, ___get_global_const(54), ___nl__6));
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__3);
#line 40
c_rt_lib0clear(&___nl__4);
#line 40
c_rt_lib0clear(&___nl__5);
#line 40
c_rt_lib0clear(&___nl__6);
#line 40
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 40
c_rt_lib0clear(&___nl__1);
#line 40
return ___nl__0;
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
return NULL;
}

ImmT post_processing_t0const_reg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0const_reg_t");
return post_processing_t0const_reg_t();}
ImmT post_processing_t0const_reg_t(){
return post_processing_t_priv0__const__sing(6);}
ImmT post_processing_t0const_reg_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(post_processing_t0reg_const0ptr, ___get_global_const(996), ___get_global_const(1000)));
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 44
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0move(&___nl__4, ptd0sim());
#line 44
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(191), ___nl__3, ___get_global_const(190), ___nl__4));
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
return ___nl__0;
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return NULL;
}

ImmT post_processing_t0const_reg_val_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0const_reg_val_t");
return post_processing_t0const_reg_val_t();}
ImmT post_processing_t0const_reg_val_t(){
return post_processing_t_priv0__const__sing(7);}
ImmT post_processing_t0const_reg_val_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(post_processing_t0reg_val_const0ptr, ___get_global_const(996), ___get_global_const(1001)));
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 48
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0move(&___nl__4, ptd0sim());
#line 48
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(191), ___nl__3, ___get_global_const(190), ___nl__4));
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 48
c_rt_lib0clear(&___nl__1);
#line 48
return ___nl__0;
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
return NULL;
}


static ImmT ___const__[9];
static int ___const_init__ = 1;
void post_processing_t0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[8];


for(int i=0;i<8;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 8);
}
ImmT post_processing_t_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT post_processing_t_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = post_processing_t0fun_tree_t0cal();
	break;
case 1:
	___const__[1] = post_processing_t0state_t0cal();
	break;
case 2:
	___const__[2] = post_processing_t0math_funs_t0cal();
	break;
case 3:
	___const__[3] = post_processing_t0reg_const0cal();
	break;
case 4:
	___const__[4] = post_processing_t0reg_val_const0cal();
	break;
case 5:
	___const__[5] = post_processing_t0optimization_t0cal();
	break;
case 6:
	___const__[6] = post_processing_t0const_reg_t0cal();
	break;
case 7:
	___const__[7] = post_processing_t0const_reg_val_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
