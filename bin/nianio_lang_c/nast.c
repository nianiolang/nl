
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "nast.h"
#include "hash.h"
#include "ptd.h"
#include "singleton.h"
#include "nast.h"
#line 1 "nast.nl"

static ImmT *__const__f = NULL;
ImmT nast_priv0__const__sim(int __nr);
ImmT nast_priv0__const__sing(int __nr);

ImmT nast_priv0op_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);


ImmT nast0intepreter_evaluate_max_steps0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0intepreter_evaluate_max_steps");
return nast0intepreter_evaluate_max_steps();}
ImmT nast0intepreter_evaluate_max_steps(){
return nast_priv0__const__sing(0);}
ImmT nast0intepreter_evaluate_max_steps0cal() {
ImmT ___nl__0 = NULL;
#line 11
c_rt_lib0move(&___nl__0,___get_global_const(872));
#line 11
return ___nl__0;
#line 11
c_rt_lib0clear(&___nl__0);
#line 11
return NULL;
}

ImmT nast0bool_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0bool_t");
return nast0bool_t();}
ImmT nast0bool_t(){
return nast_priv0__const__sing(1);}
ImmT nast0bool_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 15
c_rt_lib0move(&___nl__2, ptd0none());
#line 15
c_rt_lib0move(&___nl__3, ptd0none());
#line 15
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(8), ___nl__2, ___get_global_const(7), ___nl__3));
#line 15
c_rt_lib0clear(&___nl__2);
#line 15
c_rt_lib0clear(&___nl__3);
#line 15
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 15
c_rt_lib0clear(&___nl__1);
#line 15
return ___nl__0;
#line 15
c_rt_lib0clear(&___nl__0);
#line 15
return NULL;
}

ImmT nast0op_assoc_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_assoc_t");
return nast0op_assoc_t();}
ImmT nast0op_assoc_t(){
return nast_priv0__const__sing(2);}
ImmT nast0op_assoc_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 19
c_rt_lib0move(&___nl__2, ptd0none());
#line 19
c_rt_lib0move(&___nl__3, ptd0none());
#line 19
c_rt_lib0move(&___nl__4, ptd0none());
#line 19
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(230), ___nl__2, ___get_global_const(231), ___nl__3, ___get_global_const(41), ___nl__4));
#line 19
c_rt_lib0clear(&___nl__2);
#line 19
c_rt_lib0clear(&___nl__3);
#line 19
c_rt_lib0clear(&___nl__4);
#line 19
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 19
c_rt_lib0clear(&___nl__1);
#line 19
return ___nl__0;
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
return NULL;
}

ImmT nast0op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_t");
return nast0op_t();}
ImmT nast0op_t(){
return nast_priv0__const__sing(3);}
ImmT nast0op_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 23
c_rt_lib0move(&___nl__2, ptd0sim());
#line 23
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0op_assoc_t0ptr, ___get_global_const(13), ___get_global_const(873)));
#line 23
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 23
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(874), ___nl__2, ___get_global_const(875), ___nl__3));
#line 23
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0clear(&___nl__3);
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

ImmT nast0op_struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_struct_t");
return nast0op_struct_t();}
ImmT nast0op_struct_t(){
return nast_priv0__const__sing(4);}
ImmT nast0op_struct_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 27
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(nast0op_t0ptr, ___get_global_const(13), ___get_global_const(876)));
#line 27
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 27
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 27
c_rt_lib0clear(&___nl__1);
#line 27
return ___nl__0;
#line 27
c_rt_lib0clear(&___nl__0);
#line 27
return NULL;
}

ImmT nast_priv0op_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
ImmT ___nl__4 = NULL;
#line 31
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(874), ___nl__2, ___get_global_const(875), ___nl__3));
#line 31
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__1, ___nl__4));
#line 31
c_rt_lib0clear(&___nl__4);
#line 31
c_rt_lib0clear(&___nl__1);
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
return NULL;
}

ImmT nast0get_ternary_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_ternary_ops");
return nast0get_ternary_ops();}
ImmT nast0get_ternary_ops(){
return nast_priv0__const__sing(5);}
ImmT nast0get_ternary_ops0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 35
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 36
c_rt_lib0move(&___nl__1,___get_global_const(877));
#line 36
c_rt_lib0move(&___nl__2,___get_global_const(878));
#line 36
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 36
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
return ___nl__1;
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
return NULL;
}

ImmT nast0get_unary_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_unary_ops");
return nast0get_unary_ops();}
ImmT nast0get_unary_ops(){
return nast_priv0__const__sing(6);}
ImmT nast0get_unary_ops0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 41
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 42
c_rt_lib0move(&___nl__1,___get_global_const(267));
#line 42
c_rt_lib0move(&___nl__2,___get_global_const(879));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 42
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0move(&___nl__1,___get_global_const(880));
#line 43
c_rt_lib0move(&___nl__2,___get_global_const(881));
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 43
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0move(&___nl__1,___get_global_const(165));
#line 44
c_rt_lib0move(&___nl__2,___get_global_const(881));
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 44
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0move(&___nl__1,___get_global_const(294));
#line 45
c_rt_lib0move(&___nl__2,___get_global_const(882));
#line 45
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 45
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0move(&___nl__1,___get_global_const(298));
#line 46
c_rt_lib0move(&___nl__2,___get_global_const(882));
#line 46
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 46
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 46
c_rt_lib0clear(&___nl__3);
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0clear(&___nl__1);
#line 47
c_rt_lib0move(&___nl__1,___get_global_const(296));
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(882));
#line 47
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 47
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 47
c_rt_lib0clear(&___nl__3);
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__1);
#line 48
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
return ___nl__1;
#line 48
c_rt_lib0clear(&___nl__1);
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
return NULL;
}

ImmT nast0get_bin_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_bin_ops");
return nast0get_bin_ops();}
ImmT nast0get_bin_ops(){
return nast_priv0__const__sing(7);}
ImmT nast0get_bin_ops0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 52
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 53
c_rt_lib0move(&___nl__1,___get_global_const(850));
#line 53
c_rt_lib0move(&___nl__2,___get_global_const(883));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(230)));
#line 53
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0move(&___nl__1,___get_global_const(884));
#line 54
c_rt_lib0move(&___nl__2,___get_global_const(885));
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(230)));
#line 54
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__1);
#line 55
c_rt_lib0move(&___nl__1,___get_global_const(886));
#line 55
c_rt_lib0move(&___nl__2,___get_global_const(885));
#line 55
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(230)));
#line 55
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__1);
#line 56
c_rt_lib0move(&___nl__1,___get_global_const(304));
#line 56
c_rt_lib0move(&___nl__2,___get_global_const(887));
#line 56
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(230)));
#line 56
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 56
c_rt_lib0clear(&___nl__3);
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0clear(&___nl__1);
#line 57
c_rt_lib0move(&___nl__1,___get_global_const(77));
#line 57
c_rt_lib0move(&___nl__2,___get_global_const(887));
#line 57
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(230)));
#line 57
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 57
c_rt_lib0clear(&___nl__3);
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0clear(&___nl__1);
#line 58
c_rt_lib0move(&___nl__1,___get_global_const(307));
#line 58
c_rt_lib0move(&___nl__2,___get_global_const(887));
#line 58
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(230)));
#line 58
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__1);
#line 59
c_rt_lib0move(&___nl__1,___get_global_const(298));
#line 59
c_rt_lib0move(&___nl__2,___get_global_const(888));
#line 59
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(230)));
#line 59
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 59
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__1);
#line 60
c_rt_lib0move(&___nl__1,___get_global_const(296));
#line 60
c_rt_lib0move(&___nl__2,___get_global_const(888));
#line 60
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(230)));
#line 60
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 60
c_rt_lib0clear(&___nl__3);
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
c_rt_lib0clear(&___nl__1);
#line 61
c_rt_lib0move(&___nl__1,___get_global_const(97));
#line 61
c_rt_lib0move(&___nl__2,___get_global_const(888));
#line 61
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(230)));
#line 61
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 61
c_rt_lib0clear(&___nl__3);
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0move(&___nl__1,___get_global_const(318));
#line 62
c_rt_lib0move(&___nl__2,___get_global_const(889));
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 62
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 62
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__1);
#line 63
c_rt_lib0move(&___nl__1,___get_global_const(308));
#line 63
c_rt_lib0move(&___nl__2,___get_global_const(889));
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 63
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 63
c_rt_lib0clear(&___nl__3);
#line 63
c_rt_lib0clear(&___nl__2);
#line 63
c_rt_lib0clear(&___nl__1);
#line 64
c_rt_lib0move(&___nl__1,___get_global_const(310));
#line 64
c_rt_lib0move(&___nl__2,___get_global_const(889));
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 64
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 64
c_rt_lib0clear(&___nl__3);
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
c_rt_lib0clear(&___nl__1);
#line 65
c_rt_lib0move(&___nl__1,___get_global_const(316));
#line 65
c_rt_lib0move(&___nl__2,___get_global_const(889));
#line 65
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 65
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 65
c_rt_lib0clear(&___nl__3);
#line 65
c_rt_lib0clear(&___nl__2);
#line 65
c_rt_lib0clear(&___nl__1);
#line 66
c_rt_lib0move(&___nl__1,___get_global_const(312));
#line 66
c_rt_lib0move(&___nl__2,___get_global_const(890));
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 66
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__1);
#line 67
c_rt_lib0move(&___nl__1,___get_global_const(314));
#line 67
c_rt_lib0move(&___nl__2,___get_global_const(890));
#line 67
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 67
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 67
c_rt_lib0clear(&___nl__3);
#line 67
c_rt_lib0clear(&___nl__2);
#line 67
c_rt_lib0clear(&___nl__1);
#line 68
c_rt_lib0move(&___nl__1,___get_global_const(300));
#line 68
c_rt_lib0move(&___nl__2,___get_global_const(890));
#line 68
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 68
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0clear(&___nl__2);
#line 68
c_rt_lib0clear(&___nl__1);
#line 69
c_rt_lib0move(&___nl__1,___get_global_const(301));
#line 69
c_rt_lib0move(&___nl__2,___get_global_const(890));
#line 69
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 69
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 69
c_rt_lib0clear(&___nl__3);
#line 69
c_rt_lib0clear(&___nl__2);
#line 69
c_rt_lib0clear(&___nl__1);
#line 70
c_rt_lib0move(&___nl__1,___get_global_const(774));
#line 70
c_rt_lib0move(&___nl__2,___get_global_const(891));
#line 70
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(230)));
#line 70
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 70
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
c_rt_lib0clear(&___nl__1);
#line 71
c_rt_lib0move(&___nl__1,___get_global_const(775));
#line 71
c_rt_lib0move(&___nl__2,___get_global_const(892));
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(230)));
#line 71
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
c_rt_lib0clear(&___nl__1);
#line 72
c_rt_lib0move(&___nl__1,___get_global_const(865));
#line 72
c_rt_lib0move(&___nl__2,___get_global_const(893));
#line 72
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 72
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0clear(&___nl__1);
#line 73
c_rt_lib0move(&___nl__1,___get_global_const(866));
#line 73
c_rt_lib0move(&___nl__2,___get_global_const(893));
#line 73
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 73
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0clear(&___nl__2);
#line 73
c_rt_lib0clear(&___nl__1);
#line 74
c_rt_lib0move(&___nl__1,___get_global_const(869));
#line 74
c_rt_lib0move(&___nl__2,___get_global_const(893));
#line 74
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 74
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__1);
#line 75
c_rt_lib0move(&___nl__1,___get_global_const(868));
#line 75
c_rt_lib0move(&___nl__2,___get_global_const(893));
#line 75
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 75
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0clear(&___nl__2);
#line 75
c_rt_lib0clear(&___nl__1);
#line 76
c_rt_lib0move(&___nl__1,___get_global_const(870));
#line 76
c_rt_lib0move(&___nl__2,___get_global_const(893));
#line 76
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 76
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 76
c_rt_lib0clear(&___nl__3);
#line 76
c_rt_lib0clear(&___nl__2);
#line 76
c_rt_lib0clear(&___nl__1);
#line 77
c_rt_lib0move(&___nl__1,___get_global_const(867));
#line 77
c_rt_lib0move(&___nl__2,___get_global_const(893));
#line 77
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 77
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 77
c_rt_lib0clear(&___nl__3);
#line 77
c_rt_lib0clear(&___nl__2);
#line 77
c_rt_lib0clear(&___nl__1);
#line 78
c_rt_lib0move(&___nl__1,___get_global_const(894));
#line 78
c_rt_lib0move(&___nl__2,___get_global_const(893));
#line 78
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(231)));
#line 78
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 78
c_rt_lib0clear(&___nl__3);
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
c_rt_lib0clear(&___nl__1);
#line 79
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 79
c_rt_lib0clear(&___nl__0);
#line 79
return ___nl__1;
#line 79
c_rt_lib0clear(&___nl__1);
#line 79
c_rt_lib0clear(&___nl__0);
#line 79
return NULL;
}

ImmT nast0get_max_precedence0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_max_precedence");
return nast0get_max_precedence();}
ImmT nast0get_max_precedence(){
return nast_priv0__const__sing(8);}
ImmT nast0get_max_precedence0cal() {
ImmT ___nl__0 = NULL;
#line 83
c_rt_lib0move(&___nl__0,___get_global_const(883));
#line 83
return ___nl__0;
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
return NULL;
}

ImmT nast0variant_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variant_t");
return nast0variant_t();}
ImmT nast0variant_t(){
return nast_priv0__const__sing(9);}
ImmT nast0variant_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 87
c_rt_lib0move(&___nl__2, ptd0sim());
#line 87
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 87
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 87
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__2, ___get_global_const(849), ___nl__3));
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
c_rt_lib0clear(&___nl__3);
#line 87
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 87
c_rt_lib0clear(&___nl__1);
#line 87
return ___nl__0;
#line 87
c_rt_lib0clear(&___nl__0);
#line 87
return NULL;
}

ImmT nast0fun_def_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_def_t");
return nast0fun_def_t();}
ImmT nast0fun_def_t(){
return nast_priv0__const__sing(10);}
ImmT nast0fun_def_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 92
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_const(13), ___get_global_const(896)));
#line 92
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 93
c_rt_lib0move(&___nl__3, ptd0sim());
#line 94
c_rt_lib0move(&___nl__4, ptd0sim());
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 96
c_rt_lib0move(&___nl__8, ptd0none());
#line 96
c_rt_lib0move(&___nl__9, ptd0none());
#line 96
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(379), ___nl__8, ___get_global_const(183), ___nl__9));
#line 96
c_rt_lib0clear(&___nl__8);
#line 96
c_rt_lib0clear(&___nl__9);
#line 96
c_rt_lib0move(&___nl__6, ptd0var(___nl__7));
#line 96
c_rt_lib0clear(&___nl__7);
#line 97
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(nast0fun_def_arg_t0ptr, ___get_global_const(13), ___get_global_const(897)));
#line 97
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 97
c_rt_lib0move(&___nl__7, ptd0arr(___nl__8));
#line 97
c_rt_lib0clear(&___nl__8);
#line 97
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(6, ___get_global_const(788), ___nl__2, ___get_global_const(134), ___nl__3, ___get_global_const(93), ___nl__4, ___get_global_const(201), ___nl__5, ___get_global_const(182), ___nl__6, ___get_global_const(89), ___nl__7));
#line 97
c_rt_lib0clear(&___nl__2);
#line 97
c_rt_lib0clear(&___nl__3);
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0clear(&___nl__6);
#line 97
c_rt_lib0clear(&___nl__7);
#line 97
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 97
c_rt_lib0clear(&___nl__1);
#line 97
return ___nl__0;
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
return NULL;
}

ImmT nast0fun_def_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_def_arg_t");
return nast0fun_def_arg_t();}
ImmT nast0fun_def_arg_t(){
return nast_priv0__const__sing(11);}
ImmT nast0fun_def_arg_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 103
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_const(13), ___get_global_const(896)));
#line 103
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 104
c_rt_lib0move(&___nl__3, ptd0sim());
#line 105
c_rt_lib0move(&___nl__6, ptd0none());
#line 105
c_rt_lib0move(&___nl__7, ptd0none());
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(41), ___nl__6, ___get_global_const(5), ___nl__7));
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
c_rt_lib0clear(&___nl__7);
#line 105
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(63), ___nl__2, ___get_global_const(93), ___nl__3, ___get_global_const(222), ___nl__4));
#line 105
c_rt_lib0clear(&___nl__2);
#line 105
c_rt_lib0clear(&___nl__3);
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 105
c_rt_lib0clear(&___nl__1);
#line 105
return ___nl__0;
#line 105
c_rt_lib0clear(&___nl__0);
#line 105
return NULL;
}

ImmT nast0module_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0module_t");
return nast0module_t();}
ImmT nast0module_t(){
return nast_priv0__const__sing(12);}
ImmT nast0module_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 111
c_rt_lib0move(&___nl__2, ptd0sim());
#line 112
c_rt_lib0move(&___nl__3, ptd0sim());
#line 113
c_rt_lib0move(&___nl__7, ptd0sim());
#line 113
c_rt_lib0move(&___nl__8, ptd0sim());
#line 113
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__7, ___get_global_const(134), ___nl__8));
#line 113
c_rt_lib0clear(&___nl__7);
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0move(&___nl__5, ptd0rec(___nl__6));
#line 113
c_rt_lib0clear(&___nl__6);
#line 113
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 113
c_rt_lib0clear(&___nl__5);
#line 114
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nast0fun_def_t0ptr, ___get_global_const(13), ___get_global_const(898)));
#line 114
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 114
c_rt_lib0move(&___nl__5, ptd0arr(___nl__6));
#line 114
c_rt_lib0clear(&___nl__6);
#line 114
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(93), ___nl__2, ___get_global_const(899), ___nl__3, ___get_global_const(150), ___nl__4, ___get_global_const(787), ___nl__5));
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0clear(&___nl__5);
#line 114
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 114
c_rt_lib0clear(&___nl__1);
#line 114
return ___nl__0;
#line 114
c_rt_lib0clear(&___nl__0);
#line 114
return NULL;
}

ImmT nast0variable_type_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variable_type_t");
return nast0variable_type_t();}
ImmT nast0variable_type_t(){
return nast_priv0__const__sing(13);}
ImmT nast0variable_type_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 119
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 119
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 119
c_rt_lib0move(&___nl__3, ptd0none());
#line 119
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__2, ___get_global_const(41), ___nl__3));
#line 119
c_rt_lib0clear(&___nl__2);
#line 119
c_rt_lib0clear(&___nl__3);
#line 119
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 119
c_rt_lib0clear(&___nl__1);
#line 119
return ___nl__0;
#line 119
c_rt_lib0clear(&___nl__0);
#line 119
return NULL;
}

ImmT nast0variable_declaration_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variable_declaration_t");
return nast0variable_declaration_t();}
ImmT nast0variable_declaration_t(){
return nast_priv0__const__sing(14);}
ImmT nast0variable_declaration_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 124
c_rt_lib0move(&___nl__2, ptd0sim());
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_const(13), ___get_global_const(896)));
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 126
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 126
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 126
c_rt_lib0move(&___nl__7, ptd0none());
#line 126
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(192), ___nl__6, ___get_global_const(41), ___nl__7));
#line 126
c_rt_lib0clear(&___nl__6);
#line 126
c_rt_lib0clear(&___nl__7);
#line 126
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 126
c_rt_lib0clear(&___nl__5);
#line 126
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__2, ___get_global_const(63), ___nl__3, ___get_global_const(192), ___nl__4));
#line 126
c_rt_lib0clear(&___nl__2);
#line 126
c_rt_lib0clear(&___nl__3);
#line 126
c_rt_lib0clear(&___nl__4);
#line 126
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 126
c_rt_lib0clear(&___nl__1);
#line 126
return ___nl__0;
#line 126
c_rt_lib0clear(&___nl__0);
#line 126
return NULL;
}

ImmT nast0fun_val_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_val_arg_t");
return nast0fun_val_arg_t();}
ImmT nast0fun_val_arg_t(){
return nast_priv0__const__sing(15);}
ImmT nast0fun_val_arg_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 131
c_rt_lib0move(&___nl__5, ptd0none());
#line 131
c_rt_lib0move(&___nl__6, ptd0none());
#line 131
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(41), ___nl__5, ___get_global_const(5), ___nl__6));
#line 131
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0clear(&___nl__6);
#line 131
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 131
c_rt_lib0clear(&___nl__4);
#line 131
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(198), ___nl__2, ___get_global_const(222), ___nl__3));
#line 131
c_rt_lib0clear(&___nl__2);
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 131
c_rt_lib0clear(&___nl__1);
#line 131
return ___nl__0;
#line 131
c_rt_lib0clear(&___nl__0);
#line 131
return NULL;
}

ImmT nast0fun_val_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_val_t");
return nast0fun_val_t();}
ImmT nast0fun_val_t(){
return nast_priv0__const__sing(16);}
ImmT nast0fun_val_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 135
c_rt_lib0move(&___nl__2, ptd0sim());
#line 135
c_rt_lib0move(&___nl__3, ptd0sim());
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0fun_val_arg_t0ptr, ___get_global_const(13), ___get_global_const(900)));
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 135
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 135
c_rt_lib0clear(&___nl__5);
#line 135
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__2, ___get_global_const(132), ___nl__3, ___get_global_const(89), ___nl__4));
#line 135
c_rt_lib0clear(&___nl__2);
#line 135
c_rt_lib0clear(&___nl__3);
#line 135
c_rt_lib0clear(&___nl__4);
#line 135
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 135
c_rt_lib0clear(&___nl__1);
#line 135
return ___nl__0;
#line 135
c_rt_lib0clear(&___nl__0);
#line 135
return NULL;
}

ImmT nast0hash_elem_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0hash_elem_t");
return nast0hash_elem_t();}
ImmT nast0hash_elem_t(){
return nast_priv0__const__sing(17);}
ImmT nast0hash_elem_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 139
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 139
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 139
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(329), ___nl__2, ___get_global_const(198), ___nl__3));
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
return ___nl__0;
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
return NULL;
}

ImmT nast0hash_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0hash_decl_t");
return nast0hash_decl_t();}
ImmT nast0hash_decl_t(){
return nast_priv0__const__sing(18);}
ImmT nast0hash_decl_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 143
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(nast0hash_elem_t0ptr, ___get_global_const(13), ___get_global_const(901)));
#line 143
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 143
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 143
c_rt_lib0clear(&___nl__1);
#line 143
return ___nl__0;
#line 143
c_rt_lib0clear(&___nl__0);
#line 143
return NULL;
}

ImmT nast0bin_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0bin_op_t");
return nast0bin_op_t();}
ImmT nast0bin_op_t(){
return nast_priv0__const__sing(19);}
ImmT nast0bin_op_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 147
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 147
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 147
c_rt_lib0move(&___nl__4, ptd0sim());
#line 147
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(230), ___nl__2, ___get_global_const(231), ___nl__3, ___get_global_const(443), ___nl__4));
#line 147
c_rt_lib0clear(&___nl__2);
#line 147
c_rt_lib0clear(&___nl__3);
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 147
c_rt_lib0clear(&___nl__1);
#line 147
return ___nl__0;
#line 147
c_rt_lib0clear(&___nl__0);
#line 147
return NULL;
}

ImmT nast0var_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0var_op_t");
return nast0var_op_t();}
ImmT nast0var_op_t(){
return nast_priv0__const__sing(20);}
ImmT nast0var_op_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 152
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 152
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 153
c_rt_lib0move(&___nl__5, ptd0none());
#line 153
c_rt_lib0move(&___nl__6, ptd0none());
#line 153
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(209), ___nl__5, ___get_global_const(210), ___nl__6));
#line 153
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 153
c_rt_lib0clear(&___nl__4);
#line 154
c_rt_lib0move(&___nl__4, ptd0sim());
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(230), ___nl__2, ___get_global_const(443), ___nl__3, ___get_global_const(902), ___nl__4));
#line 154
c_rt_lib0clear(&___nl__2);
#line 154
c_rt_lib0clear(&___nl__3);
#line 154
c_rt_lib0clear(&___nl__4);
#line 154
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
return ___nl__0;
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
return NULL;
}

ImmT nast0fun_label_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_label_t");
return nast0fun_label_t();}
ImmT nast0fun_label_t(){
return nast_priv0__const__sing(21);}
ImmT nast0fun_label_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 159
c_rt_lib0move(&___nl__2, ptd0sim());
#line 159
c_rt_lib0move(&___nl__3, ptd0sim());
#line 159
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(132), ___nl__2, ___get_global_const(93), ___nl__3));
#line 159
c_rt_lib0clear(&___nl__2);
#line 159
c_rt_lib0clear(&___nl__3);
#line 159
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 159
c_rt_lib0clear(&___nl__1);
#line 159
return ___nl__0;
#line 159
c_rt_lib0clear(&___nl__0);
#line 159
return NULL;
}

ImmT nast0unary_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0unary_op_t");
return nast0unary_op_t();}
ImmT nast0unary_op_t(){
return nast_priv0__const__sing(22);}
ImmT nast0unary_op_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 163
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 163
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 163
c_rt_lib0move(&___nl__3, ptd0sim());
#line 163
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(198), ___nl__2, ___get_global_const(443), ___nl__3));
#line 163
c_rt_lib0clear(&___nl__2);
#line 163
c_rt_lib0clear(&___nl__3);
#line 163
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 163
c_rt_lib0clear(&___nl__1);
#line 163
return ___nl__0;
#line 163
c_rt_lib0clear(&___nl__0);
#line 163
return NULL;
}

ImmT nast0ternary_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0ternary_op_t");
return nast0ternary_op_t();}
ImmT nast0ternary_op_t(){
return nast_priv0__const__sing(23);}
ImmT nast0ternary_op_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 167
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 167
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 167
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 167
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 167
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 167
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 167
c_rt_lib0move(&___nl__5, ptd0sim());
#line 167
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(862), ___nl__2, ___get_global_const(863), ___nl__3, ___get_global_const(864), ___nl__4, ___get_global_const(443), ___nl__5));
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
c_rt_lib0clear(&___nl__3);
#line 167
c_rt_lib0clear(&___nl__4);
#line 167
c_rt_lib0clear(&___nl__5);
#line 167
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 167
c_rt_lib0clear(&___nl__1);
#line 167
return ___nl__0;
#line 167
c_rt_lib0clear(&___nl__0);
#line 167
return NULL;
}

ImmT nast0value_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0value_t");
return nast0value_t();}
ImmT nast0value_t(){
return nast_priv0__const__sing(24);}
ImmT nast0value_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 172
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(13), ___get_global_const(702)));
#line 172
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0value_only_t0ptr, ___get_global_const(13), ___get_global_const(903)));
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__2, ___get_global_const(192), ___nl__3));
#line 173
c_rt_lib0clear(&___nl__2);
#line 173
c_rt_lib0clear(&___nl__3);
#line 173
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 173
c_rt_lib0clear(&___nl__1);
#line 173
return ___nl__0;
#line 173
c_rt_lib0clear(&___nl__0);
#line 173
return NULL;
}

ImmT nast0value_only_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0value_only_t");
return nast0value_only_t();}
ImmT nast0value_only_t(){
return nast_priv0__const__sing(25);}
ImmT nast0value_only_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
#line 179
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0ternary_op_t0ptr, ___get_global_const(13), ___get_global_const(904)));
#line 179
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 180
c_rt_lib0move(&___nl__3, ptd0sim());
#line 181
c_rt_lib0move(&___nl__4, ptd0none());
#line 182
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 182
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nast0variant_t0ptr, ___get_global_const(13), ___get_global_const(905)));
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 184
c_rt_lib0move(&___nl__7, ptd0sim());
#line 186
c_rt_lib0move(&___nl__11, ptd0sim());
#line 186
c_rt_lib0move(&___nl__10, ptd0arr(___nl__11));
#line 186
c_rt_lib0clear(&___nl__11);
#line 187
c_rt_lib0move(&___nl__13, ptd0none());
#line 187
c_rt_lib0move(&___nl__14, ptd0none());
#line 187
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(906), ___nl__13, ___get_global_const(907), ___nl__14));
#line 187
c_rt_lib0clear(&___nl__13);
#line 187
c_rt_lib0clear(&___nl__14);
#line 187
c_rt_lib0move(&___nl__11, ptd0var(___nl__12));
#line 187
c_rt_lib0clear(&___nl__12);
#line 187
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__10, ___get_global_const(908), ___nl__11));
#line 187
c_rt_lib0clear(&___nl__10);
#line 187
c_rt_lib0clear(&___nl__11);
#line 187
c_rt_lib0move(&___nl__8, ptd0rec(___nl__9));
#line 187
c_rt_lib0clear(&___nl__9);
#line 189
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 189
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 189
c_rt_lib0move(&___nl__9, ptd0arr(___nl__10));
#line 189
c_rt_lib0clear(&___nl__10);
#line 190
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(nast0hash_decl_t0ptr, ___get_global_const(13), ___get_global_const(909)));
#line 190
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 191
c_rt_lib0move(&___nl__11, ptd0sim());
#line 192
c_rt_lib0move(&___nl__12, c_rt_lib0func_new(nast0bin_op_t0ptr, ___get_global_const(13), ___get_global_const(910)));
#line 192
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__12));
#line 193
c_rt_lib0move(&___nl__13, c_rt_lib0func_new(nast0var_op_t0ptr, ___get_global_const(13), ___get_global_const(911)));
#line 193
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__13));
#line 194
c_rt_lib0move(&___nl__14, c_rt_lib0func_new(nast0unary_op_t0ptr, ___get_global_const(13), ___get_global_const(912)));
#line 194
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__14));
#line 195
c_rt_lib0move(&___nl__15, c_rt_lib0func_new(nast0fun_label_t0ptr, ___get_global_const(13), ___get_global_const(913)));
#line 195
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__15));
#line 196
c_rt_lib0move(&___nl__16, c_rt_lib0func_new(nast0fun_val_t0ptr, ___get_global_const(13), ___get_global_const(914)));
#line 196
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 197
c_rt_lib0move(&___nl__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 197
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__17));
#line 198
c_rt_lib0move(&___nl__18, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 198
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__18));
#line 198
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(17, ___get_global_const(854), ___nl__2, ___get_global_const(856), ___nl__3, ___get_global_const(831), ___nl__4, ___get_global_const(855), ___nl__5, ___get_global_const(841), ___nl__6, ___get_global_const(196), ___nl__7, ___get_global_const(771), ___nl__8, ___get_global_const(204), ___nl__9, ___get_global_const(205), ___nl__10, ___get_global_const(849), ___nl__11, ___get_global_const(208), ___nl__12, ___get_global_const(857), ___nl__13, ___get_global_const(858), ___nl__14, ___get_global_const(859), ___nl__15, ___get_global_const(812), ___nl__16, ___get_global_const(860), ___nl__17, ___get_global_const(861), ___nl__18));
#line 198
c_rt_lib0clear(&___nl__2);
#line 198
c_rt_lib0clear(&___nl__3);
#line 198
c_rt_lib0clear(&___nl__4);
#line 198
c_rt_lib0clear(&___nl__5);
#line 198
c_rt_lib0clear(&___nl__6);
#line 198
c_rt_lib0clear(&___nl__7);
#line 198
c_rt_lib0clear(&___nl__8);
#line 198
c_rt_lib0clear(&___nl__9);
#line 198
c_rt_lib0clear(&___nl__10);
#line 198
c_rt_lib0clear(&___nl__11);
#line 198
c_rt_lib0clear(&___nl__12);
#line 198
c_rt_lib0clear(&___nl__13);
#line 198
c_rt_lib0clear(&___nl__14);
#line 198
c_rt_lib0clear(&___nl__15);
#line 198
c_rt_lib0clear(&___nl__16);
#line 198
c_rt_lib0clear(&___nl__17);
#line 198
c_rt_lib0clear(&___nl__18);
#line 198
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 198
c_rt_lib0clear(&___nl__1);
#line 198
return ___nl__0;
#line 198
c_rt_lib0clear(&___nl__0);
#line 198
return NULL;
}

ImmT nast0match_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0match_t");
return nast0match_t();}
ImmT nast0match_t(){
return nast_priv0__const__sing(26);}
ImmT nast0match_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 203
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 203
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 203
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0match_branch_t0ptr, ___get_global_const(13), ___get_global_const(915)));
#line 203
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 203
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 203
c_rt_lib0clear(&___nl__4);
#line 203
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(198), ___nl__2, ___get_global_const(840), ___nl__3));
#line 203
c_rt_lib0clear(&___nl__2);
#line 203
c_rt_lib0clear(&___nl__3);
#line 203
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 203
c_rt_lib0clear(&___nl__1);
#line 203
return ___nl__0;
#line 203
c_rt_lib0clear(&___nl__0);
#line 203
return NULL;
}

ImmT nast0variant_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variant_decl_t");
return nast0variant_decl_t();}
ImmT nast0variant_decl_t(){
return nast_priv0__const__sing(27);}
ImmT nast0variant_decl_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 208
c_rt_lib0move(&___nl__2, ptd0sim());
#line 209
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(13), ___get_global_const(916)));
#line 209
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 209
c_rt_lib0move(&___nl__6, ptd0none());
#line 209
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(192), ___nl__5, ___get_global_const(41), ___nl__6));
#line 209
c_rt_lib0clear(&___nl__5);
#line 209
c_rt_lib0clear(&___nl__6);
#line 209
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 209
c_rt_lib0clear(&___nl__4);
#line 209
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__2, ___get_global_const(192), ___nl__3));
#line 209
c_rt_lib0clear(&___nl__2);
#line 209
c_rt_lib0clear(&___nl__3);
#line 209
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 209
c_rt_lib0clear(&___nl__1);
#line 209
return ___nl__0;
#line 209
c_rt_lib0clear(&___nl__0);
#line 209
return NULL;
}

ImmT nast0match_branch_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0match_branch_t");
return nast0match_branch_t();}
ImmT nast0match_branch_t(){
return nast_priv0__const__sing(28);}
ImmT nast0match_branch_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 214
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variant_decl_t0ptr, ___get_global_const(13), ___get_global_const(917)));
#line 214
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 214
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 214
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 214
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(13), ___get_global_const(702)));
#line 214
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 214
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(841), ___nl__2, ___get_global_const(201), ___nl__3, ___get_global_const(195), ___nl__4));
#line 214
c_rt_lib0clear(&___nl__2);
#line 214
c_rt_lib0clear(&___nl__3);
#line 214
c_rt_lib0clear(&___nl__4);
#line 214
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 214
c_rt_lib0clear(&___nl__1);
#line 214
return ___nl__0;
#line 214
c_rt_lib0clear(&___nl__0);
#line 214
return NULL;
}

ImmT nast0fora_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fora_t");
return nast0fora_t();}
ImmT nast0fora_t(){
return nast_priv0__const__sing(29);}
ImmT nast0fora_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 219
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(13), ___get_global_const(916)));
#line 219
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 221
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 221
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 222
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0bool_t0ptr, ___get_global_const(13), ___get_global_const(918)));
#line 222
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 222
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(836), ___nl__2, ___get_global_const(201), ___nl__3, ___get_global_const(3), ___nl__4, ___get_global_const(919), ___nl__5));
#line 222
c_rt_lib0clear(&___nl__2);
#line 222
c_rt_lib0clear(&___nl__3);
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 222
c_rt_lib0clear(&___nl__1);
#line 222
return ___nl__0;
#line 222
c_rt_lib0clear(&___nl__0);
#line 222
return NULL;
}

ImmT nast0forh_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0forh_t");
return nast0forh_t();}
ImmT nast0forh_t(){
return nast_priv0__const__sing(30);}
ImmT nast0forh_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 228
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(13), ___get_global_const(916)));
#line 228
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(13), ___get_global_const(916)));
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 230
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 230
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 231
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 231
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 232
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nast0bool_t0ptr, ___get_global_const(13), ___get_global_const(918)));
#line 232
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 232
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(329), ___nl__2, ___get_global_const(198), ___nl__3, ___get_global_const(328), ___nl__4, ___get_global_const(201), ___nl__5, ___get_global_const(919), ___nl__6));
#line 232
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0clear(&___nl__3);
#line 232
c_rt_lib0clear(&___nl__4);
#line 232
c_rt_lib0clear(&___nl__5);
#line 232
c_rt_lib0clear(&___nl__6);
#line 232
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
return ___nl__0;
#line 232
c_rt_lib0clear(&___nl__0);
#line 232
return NULL;
}

ImmT nast0rep_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0rep_t");
return nast0rep_t();}
ImmT nast0rep_t(){
return nast_priv0__const__sing(31);}
ImmT nast0rep_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 238
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(13), ___get_global_const(916)));
#line 238
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 240
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 240
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 241
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0bool_t0ptr, ___get_global_const(13), ___get_global_const(918)));
#line 241
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 241
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(836), ___nl__2, ___get_global_const(201), ___nl__3, ___get_global_const(837), ___nl__4, ___get_global_const(919), ___nl__5));
#line 241
c_rt_lib0clear(&___nl__2);
#line 241
c_rt_lib0clear(&___nl__3);
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0clear(&___nl__5);
#line 241
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 241
c_rt_lib0clear(&___nl__1);
#line 241
return ___nl__0;
#line 241
c_rt_lib0clear(&___nl__0);
#line 241
return NULL;
}

ImmT nast0while_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0while_t");
return nast0while_t();}
ImmT nast0while_t(){
return nast_priv0__const__sing(32);}
ImmT nast0while_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 246
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 246
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 246
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 246
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 246
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0bool_t0ptr, ___get_global_const(13), ___get_global_const(918)));
#line 246
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 246
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(832), ___nl__2, ___get_global_const(201), ___nl__3, ___get_global_const(919), ___nl__4));
#line 246
c_rt_lib0clear(&___nl__2);
#line 246
c_rt_lib0clear(&___nl__3);
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 246
c_rt_lib0clear(&___nl__1);
#line 246
return ___nl__0;
#line 246
c_rt_lib0clear(&___nl__0);
#line 246
return NULL;
}

ImmT nast0try_ensure_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0try_ensure_t");
return nast0try_ensure_t();}
ImmT nast0try_ensure_t(){
return nast_priv0__const__sing(33);}
ImmT nast0try_ensure_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(13), ___get_global_const(916)));
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 250
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0bin_op_t0ptr, ___get_global_const(13), ___get_global_const(910)));
#line 250
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 250
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 250
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 250
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(846), ___nl__2, ___get_global_const(847), ___nl__3, ___get_global_const(848), ___nl__4));
#line 250
c_rt_lib0clear(&___nl__2);
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
c_rt_lib0clear(&___nl__4);
#line 250
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
return ___nl__0;
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
return NULL;
}

ImmT nast0if_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0if_t");
return nast0if_t();}
ImmT nast0if_t(){
return nast_priv0__const__sing(34);}
ImmT nast0if_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 255
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 255
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 256
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 256
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 257
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 257
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 257
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 257
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 257
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(13), ___get_global_const(702)));
#line 257
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 257
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(832), ___nl__7, ___get_global_const(201), ___nl__8, ___get_global_const(195), ___nl__9));
#line 257
c_rt_lib0clear(&___nl__7);
#line 257
c_rt_lib0clear(&___nl__8);
#line 257
c_rt_lib0clear(&___nl__9);
#line 257
c_rt_lib0move(&___nl__5, ptd0rec(___nl__6));
#line 257
c_rt_lib0clear(&___nl__6);
#line 257
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 257
c_rt_lib0clear(&___nl__5);
#line 258
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 258
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 258
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(832), ___nl__2, ___get_global_const(817), ___nl__3, ___get_global_const(833), ___nl__4, ___get_global_const(834), ___nl__5));
#line 258
c_rt_lib0clear(&___nl__2);
#line 258
c_rt_lib0clear(&___nl__3);
#line 258
c_rt_lib0clear(&___nl__4);
#line 258
c_rt_lib0clear(&___nl__5);
#line 258
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 258
c_rt_lib0clear(&___nl__1);
#line 258
return ___nl__0;
#line 258
c_rt_lib0clear(&___nl__0);
#line 258
return NULL;
}

ImmT nast0for_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0for_t");
return nast0for_t();}
ImmT nast0for_t(){
return nast_priv0__const__sing(35);}
ImmT nast0for_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(13), ___get_global_const(916)));
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 264
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 264
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 264
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(829), ___nl__4, ___get_global_const(192), ___nl__5));
#line 264
c_rt_lib0clear(&___nl__4);
#line 264
c_rt_lib0clear(&___nl__5);
#line 264
c_rt_lib0move(&___nl__2, ptd0var(___nl__3));
#line 264
c_rt_lib0clear(&___nl__3);
#line 265
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 265
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 267
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 267
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 267
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(835), ___nl__2, ___get_global_const(836), ___nl__3, ___get_global_const(832), ___nl__4, ___get_global_const(201), ___nl__5));
#line 267
c_rt_lib0clear(&___nl__2);
#line 267
c_rt_lib0clear(&___nl__3);
#line 267
c_rt_lib0clear(&___nl__4);
#line 267
c_rt_lib0clear(&___nl__5);
#line 267
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
return ___nl__0;
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
return NULL;
}

ImmT nast0place_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0place_t");
return nast0place_t();}
ImmT nast0place_t(){
return nast_priv0__const__sing(36);}
ImmT nast0place_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 272
c_rt_lib0move(&___nl__2, ptd0sim());
#line 272
c_rt_lib0move(&___nl__3, ptd0sim());
#line 272
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(134), ___nl__2, ___get_global_const(920), ___nl__3));
#line 272
c_rt_lib0clear(&___nl__2);
#line 272
c_rt_lib0clear(&___nl__3);
#line 272
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 272
c_rt_lib0clear(&___nl__1);
#line 272
return ___nl__0;
#line 272
c_rt_lib0clear(&___nl__0);
#line 272
return NULL;
}

ImmT nast0debug_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0debug_t");
return nast0debug_t();}
ImmT nast0debug_t(){
return nast_priv0__const__sing(37);}
ImmT nast0debug_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0place_t0ptr, ___get_global_const(13), ___get_global_const(921)));
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 276
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0place_t0ptr, ___get_global_const(13), ___get_global_const(921)));
#line 276
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 276
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__2, ___get_global_const(906), ___nl__3));
#line 276
c_rt_lib0clear(&___nl__2);
#line 276
c_rt_lib0clear(&___nl__3);
#line 276
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 276
c_rt_lib0clear(&___nl__1);
#line 276
return ___nl__0;
#line 276
c_rt_lib0clear(&___nl__0);
#line 276
return NULL;
}

ImmT nast0empty_debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0empty_debug");
return nast0empty_debug();}
ImmT nast0empty_debug(){
return nast_priv0__const__sing(38);}
ImmT nast0empty_debug0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 280
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 280
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0unary_minus(___nl__3));
#line 280
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(134), ___nl__2, ___get_global_const(920), ___nl__3));
#line 280
c_rt_lib0clear(&___nl__2);
#line 280
c_rt_lib0clear(&___nl__3);
#line 280
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 280
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 280
c_rt_lib0move(&___nl__4, c_rt_lib0unary_minus(___nl__4));
#line 280
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(134), ___nl__3, ___get_global_const(920), ___nl__4));
#line 280
c_rt_lib0clear(&___nl__3);
#line 280
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(2, ___get_global_const(440), ___nl__1, ___get_global_const(906), ___nl__2));
#line 280
c_rt_lib0clear(&___nl__1);
#line 280
c_rt_lib0clear(&___nl__2);
#line 280
return ___nl__0;
#line 280
c_rt_lib0clear(&___nl__0);
#line 280
return NULL;
}

ImmT nast0cast_to_value0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nast0cast_to_value");
return nast0cast_to_value(_tab[0]);}
ImmT nast0cast_to_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 284
c_rt_lib0move(&___nl__2, nast0empty_debug());
#line 284
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__2, ___get_global_const(192), ___nl__0));
#line 284
c_rt_lib0clear(&___nl__2);
#line 284
c_rt_lib0clear(&___nl__0);
#line 284
return ___nl__1;
#line 284
c_rt_lib0clear(&___nl__1);
#line 284
c_rt_lib0clear(&___nl__0);
#line 284
return NULL;
}

ImmT nast0cmd_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0cmd_t");
return nast0cmd_t();}
ImmT nast0cmd_t(){
return nast_priv0__const__sing(39);}
ImmT nast0cmd_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
ImmT ___nl__20 = NULL;
ImmT ___nl__21 = NULL;
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
#line 291
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(13), ___get_global_const(702)));
#line 291
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 293
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0if_t0ptr, ___get_global_const(13), ___get_global_const(922)));
#line 293
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 294
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nast0for_t0ptr, ___get_global_const(13), ___get_global_const(923)));
#line 294
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 295
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nast0fora_t0ptr, ___get_global_const(13), ___get_global_const(924)));
#line 295
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 296
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(nast0forh_t0ptr, ___get_global_const(13), ___get_global_const(925)));
#line 296
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 297
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 297
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 298
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(nast0rep_t0ptr, ___get_global_const(13), ___get_global_const(926)));
#line 298
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 299
c_rt_lib0move(&___nl__11, c_rt_lib0func_new(nast0while_t0ptr, ___get_global_const(13), ___get_global_const(927)));
#line 299
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__11));
#line 300
c_rt_lib0move(&___nl__12, c_rt_lib0func_new(nast0if_mod_t0ptr, ___get_global_const(13), ___get_global_const(928)));
#line 300
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__12));
#line 301
c_rt_lib0move(&___nl__13, c_rt_lib0func_new(nast0unless_mod_t0ptr, ___get_global_const(13), ___get_global_const(929)));
#line 301
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__13));
#line 302
c_rt_lib0move(&___nl__14, ptd0none());
#line 303
c_rt_lib0move(&___nl__15, ptd0none());
#line 304
c_rt_lib0move(&___nl__16, c_rt_lib0func_new(nast0match_t0ptr, ___get_global_const(13), ___get_global_const(930)));
#line 304
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 305
c_rt_lib0move(&___nl__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 305
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__17));
#line 306
c_rt_lib0move(&___nl__18, c_rt_lib0func_new(nast0try_ensure_t0ptr, ___get_global_const(13), ___get_global_const(931)));
#line 306
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__18));
#line 307
c_rt_lib0move(&___nl__19, c_rt_lib0func_new(nast0try_ensure_t0ptr, ___get_global_const(13), ___get_global_const(931)));
#line 307
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__19));
#line 308
c_rt_lib0move(&___nl__20, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(13), ___get_global_const(916)));
#line 308
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__20));
#line 309
c_rt_lib0move(&___nl__21, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 309
c_rt_lib0move(&___nl__21, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__21));
#line 310
c_rt_lib0move(&___nl__22, c_rt_lib0func_new(nast0block_t0ptr, ___get_global_const(13), ___get_global_const(285)));
#line 310
c_rt_lib0move(&___nl__22, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__22));
#line 311
c_rt_lib0move(&___nl__23, c_rt_lib0func_new(nast0die_t0ptr, ___get_global_const(13), ___get_global_const(932)));
#line 311
c_rt_lib0move(&___nl__23, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__23));
#line 312
c_rt_lib0move(&___nl__24, ptd0none());
#line 312
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(20, ___get_global_const(817), ___nl__5, ___get_global_const(818), ___nl__6, ___get_global_const(819), ___nl__7, ___get_global_const(820), ___nl__8, ___get_global_const(140), ___nl__9, ___get_global_const(821), ___nl__10, ___get_global_const(822), ___nl__11, ___get_global_const(823), ___nl__12, ___get_global_const(824), ___nl__13, ___get_global_const(825), ___nl__14, ___get_global_const(826), ___nl__15, ___get_global_const(827), ___nl__16, ___get_global_const(192), ___nl__17, ___get_global_const(830), ___nl__18, ___get_global_const(95), ___nl__19, ___get_global_const(829), ___nl__20, ___get_global_const(90), ___nl__21, ___get_global_const(828), ___nl__22, ___get_global_const(217), ___nl__23, ___get_global_const(831), ___nl__24));
#line 312
c_rt_lib0clear(&___nl__5);
#line 312
c_rt_lib0clear(&___nl__6);
#line 312
c_rt_lib0clear(&___nl__7);
#line 312
c_rt_lib0clear(&___nl__8);
#line 312
c_rt_lib0clear(&___nl__9);
#line 312
c_rt_lib0clear(&___nl__10);
#line 312
c_rt_lib0clear(&___nl__11);
#line 312
c_rt_lib0clear(&___nl__12);
#line 312
c_rt_lib0clear(&___nl__13);
#line 312
c_rt_lib0clear(&___nl__14);
#line 312
c_rt_lib0clear(&___nl__15);
#line 312
c_rt_lib0clear(&___nl__16);
#line 312
c_rt_lib0clear(&___nl__17);
#line 312
c_rt_lib0clear(&___nl__18);
#line 312
c_rt_lib0clear(&___nl__19);
#line 312
c_rt_lib0clear(&___nl__20);
#line 312
c_rt_lib0clear(&___nl__21);
#line 312
c_rt_lib0clear(&___nl__22);
#line 312
c_rt_lib0clear(&___nl__23);
#line 312
c_rt_lib0clear(&___nl__24);
#line 312
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 312
c_rt_lib0clear(&___nl__4);
#line 312
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__2, ___get_global_const(201), ___nl__3));
#line 312
c_rt_lib0clear(&___nl__2);
#line 312
c_rt_lib0clear(&___nl__3);
#line 312
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 312
c_rt_lib0clear(&___nl__1);
#line 312
return ___nl__0;
#line 312
c_rt_lib0clear(&___nl__0);
#line 312
return NULL;
}

ImmT nast0die_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0die_t");
return nast0die_t();}
ImmT nast0die_t(){
return nast_priv0__const__sing(40);}
ImmT nast0die_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 318
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 318
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 318
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 318
c_rt_lib0clear(&___nl__1);
#line 318
return ___nl__0;
#line 318
c_rt_lib0clear(&___nl__0);
#line 318
return NULL;
}

ImmT nast0block_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0block_t");
return nast0block_t();}
ImmT nast0block_t(){
return nast_priv0__const__sing(41);}
ImmT nast0block_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 322
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 322
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 322
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 322
c_rt_lib0clear(&___nl__1);
#line 322
return ___nl__0;
#line 322
c_rt_lib0clear(&___nl__0);
#line 322
return NULL;
}

ImmT nast0if_mod_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0if_mod_t");
return nast0if_mod_t();}
ImmT nast0if_mod_t(){
return nast_priv0__const__sing(42);}
ImmT nast0if_mod_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 326
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 326
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 326
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 326
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 326
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(832), ___nl__2, ___get_global_const(201), ___nl__3));
#line 326
c_rt_lib0clear(&___nl__2);
#line 326
c_rt_lib0clear(&___nl__3);
#line 326
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 326
c_rt_lib0clear(&___nl__1);
#line 326
return ___nl__0;
#line 326
c_rt_lib0clear(&___nl__0);
#line 326
return NULL;
}

ImmT nast0unless_mod_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0unless_mod_t");
return nast0unless_mod_t();}
ImmT nast0unless_mod_t(){
return nast_priv0__const__sing(43);}
ImmT nast0unless_mod_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 330
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(13), ___get_global_const(895)));
#line 330
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 330
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 330
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 330
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(832), ___nl__2, ___get_global_const(201), ___nl__3));
#line 330
c_rt_lib0clear(&___nl__2);
#line 330
c_rt_lib0clear(&___nl__3);
#line 330
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 330
c_rt_lib0clear(&___nl__1);
#line 330
return ___nl__0;
#line 330
c_rt_lib0clear(&___nl__0);
#line 330
return NULL;
}


static ImmT ___const__[45];
static int ___const_init__ = 1;
void nast0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[44];


for(int i=0;i<44;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 44);
}
ImmT nast_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nast_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = nast0intepreter_evaluate_max_steps0cal();
	break;
case 1:
	___const__[1] = nast0bool_t0cal();
	break;
case 2:
	___const__[2] = nast0op_assoc_t0cal();
	break;
case 3:
	___const__[3] = nast0op_t0cal();
	break;
case 4:
	___const__[4] = nast0op_struct_t0cal();
	break;
case 5:
	___const__[5] = nast0get_ternary_ops0cal();
	break;
case 6:
	___const__[6] = nast0get_unary_ops0cal();
	break;
case 7:
	___const__[7] = nast0get_bin_ops0cal();
	break;
case 8:
	___const__[8] = nast0get_max_precedence0cal();
	break;
case 9:
	___const__[9] = nast0variant_t0cal();
	break;
case 10:
	___const__[10] = nast0fun_def_t0cal();
	break;
case 11:
	___const__[11] = nast0fun_def_arg_t0cal();
	break;
case 12:
	___const__[12] = nast0module_t0cal();
	break;
case 13:
	___const__[13] = nast0variable_type_t0cal();
	break;
case 14:
	___const__[14] = nast0variable_declaration_t0cal();
	break;
case 15:
	___const__[15] = nast0fun_val_arg_t0cal();
	break;
case 16:
	___const__[16] = nast0fun_val_t0cal();
	break;
case 17:
	___const__[17] = nast0hash_elem_t0cal();
	break;
case 18:
	___const__[18] = nast0hash_decl_t0cal();
	break;
case 19:
	___const__[19] = nast0bin_op_t0cal();
	break;
case 20:
	___const__[20] = nast0var_op_t0cal();
	break;
case 21:
	___const__[21] = nast0fun_label_t0cal();
	break;
case 22:
	___const__[22] = nast0unary_op_t0cal();
	break;
case 23:
	___const__[23] = nast0ternary_op_t0cal();
	break;
case 24:
	___const__[24] = nast0value_t0cal();
	break;
case 25:
	___const__[25] = nast0value_only_t0cal();
	break;
case 26:
	___const__[26] = nast0match_t0cal();
	break;
case 27:
	___const__[27] = nast0variant_decl_t0cal();
	break;
case 28:
	___const__[28] = nast0match_branch_t0cal();
	break;
case 29:
	___const__[29] = nast0fora_t0cal();
	break;
case 30:
	___const__[30] = nast0forh_t0cal();
	break;
case 31:
	___const__[31] = nast0rep_t0cal();
	break;
case 32:
	___const__[32] = nast0while_t0cal();
	break;
case 33:
	___const__[33] = nast0try_ensure_t0cal();
	break;
case 34:
	___const__[34] = nast0if_t0cal();
	break;
case 35:
	___const__[35] = nast0for_t0cal();
	break;
case 36:
	___const__[36] = nast0place_t0cal();
	break;
case 37:
	___const__[37] = nast0debug_t0cal();
	break;
case 38:
	___const__[38] = nast0empty_debug0cal();
	break;
case 39:
	___const__[39] = nast0cmd_t0cal();
	break;
case 40:
	___const__[40] = nast0die_t0cal();
	break;
case 41:
	___const__[41] = nast0block_t0cal();
	break;
case 42:
	___const__[42] = nast0if_mod_t0cal();
	break;
case 43:
	___const__[43] = nast0unless_mod_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
