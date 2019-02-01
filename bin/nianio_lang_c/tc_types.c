
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "tc_types.h"
#include "hash.h"
#include "ptd.h"
#include "tct.h"
#include "boolean_t.h"
#include "nast.h"
#include "singleton.h"
#include "compiler_lib.h"
#include "compiler_lib.h"
#include "tct.h"
#include "tc_types.h"
#include "boolean_t.h"
#include "nast.h"
#line 1 "tc_types.nl"

static ImmT *__const__f = NULL;
ImmT tc_types_priv0__const__sim(int __nr);
ImmT tc_types_priv0__const__sing(int __nr);

ImmT tc_types_priv0op_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4);
ImmT tc_types_priv0get_binary_ops();


ImmT tc_types_priv0op_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
ImmT ___nl__5 = NULL;
#line 16
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(1132), ___nl__2, ___get_global_const(1133), ___nl__3, ___get_global_const(341), ___nl__4));
#line 16
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__1, ___nl__5));
#line 16
c_rt_lib0clear(&___nl__5);
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
return NULL;
}

ImmT tc_types0get_bin_op_def0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tc_types0get_bin_op_def");
return tc_types0get_bin_op_def(_tab[0]);}
ImmT tc_types0get_bin_op_def(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 20
c_rt_lib0move(&___nl__2, tc_types_priv0get_binary_ops());
#line 20
c_rt_lib0move(&___nl__1, hash0get_value(___nl__2, ___nl__0));
#line 20
c_rt_lib0clear(&___nl__2);
#line 20
c_rt_lib0clear(&___nl__0);
#line 20
return ___nl__1;
#line 20
c_rt_lib0clear(&___nl__1);
#line 20
c_rt_lib0clear(&___nl__0);
#line 20
return NULL;
}

ImmT tc_types_priv0get_binary_ops(){
return tc_types_priv0__const__sing(0);}
ImmT tc_types_priv0get_binary_ops0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 24
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 25
c_rt_lib0move(&___nl__1,___get_global_const(304));
#line 25
c_rt_lib0move(&___nl__2, tct0sim());
#line 25
c_rt_lib0move(&___nl__3, tct0sim());
#line 25
c_rt_lib0move(&___nl__4, tct0sim());
#line 25
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 25
c_rt_lib0clear(&___nl__4);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__1);
#line 26
c_rt_lib0move(&___nl__1,___get_global_const(77));
#line 26
c_rt_lib0move(&___nl__2, tct0sim());
#line 26
c_rt_lib0move(&___nl__3, tct0sim());
#line 26
c_rt_lib0move(&___nl__4, tct0sim());
#line 26
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 26
c_rt_lib0clear(&___nl__4);
#line 26
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0clear(&___nl__1);
#line 27
c_rt_lib0move(&___nl__1,___get_global_const(307));
#line 27
c_rt_lib0move(&___nl__2, tct0sim());
#line 27
c_rt_lib0move(&___nl__3, tct0sim());
#line 27
c_rt_lib0move(&___nl__4, tct0sim());
#line 27
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 27
c_rt_lib0clear(&___nl__4);
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0clear(&___nl__1);
#line 28
c_rt_lib0move(&___nl__1,___get_global_const(298));
#line 28
c_rt_lib0move(&___nl__2, tct0sim());
#line 28
c_rt_lib0move(&___nl__3, tct0sim());
#line 28
c_rt_lib0move(&___nl__4, tct0sim());
#line 28
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 28
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__1);
#line 29
c_rt_lib0move(&___nl__1,___get_global_const(296));
#line 29
c_rt_lib0move(&___nl__2, tct0sim());
#line 29
c_rt_lib0move(&___nl__3, tct0sim());
#line 29
c_rt_lib0move(&___nl__4, tct0sim());
#line 29
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 29
c_rt_lib0clear(&___nl__4);
#line 29
c_rt_lib0clear(&___nl__3);
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0clear(&___nl__1);
#line 30
c_rt_lib0move(&___nl__1,___get_global_const(97));
#line 30
c_rt_lib0move(&___nl__2, tct0sim());
#line 30
c_rt_lib0move(&___nl__3, tct0sim());
#line 30
c_rt_lib0move(&___nl__4, tct0sim());
#line 30
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 30
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__1);
#line 31
c_rt_lib0move(&___nl__1,___get_global_const(318));
#line 31
c_rt_lib0move(&___nl__2, tct0sim());
#line 31
c_rt_lib0move(&___nl__3, tct0sim());
#line 31
c_rt_lib0move(&___nl__4, tct0bool());
#line 31
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 31
c_rt_lib0clear(&___nl__4);
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0clear(&___nl__1);
#line 32
c_rt_lib0move(&___nl__1,___get_global_const(308));
#line 32
c_rt_lib0move(&___nl__2, tct0sim());
#line 32
c_rt_lib0move(&___nl__3, tct0sim());
#line 32
c_rt_lib0move(&___nl__4, tct0bool());
#line 32
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 32
c_rt_lib0clear(&___nl__4);
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0move(&___nl__1,___get_global_const(310));
#line 33
c_rt_lib0move(&___nl__2, tct0sim());
#line 33
c_rt_lib0move(&___nl__3, tct0sim());
#line 33
c_rt_lib0move(&___nl__4, tct0bool());
#line 33
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0clear(&___nl__1);
#line 34
c_rt_lib0move(&___nl__1,___get_global_const(316));
#line 34
c_rt_lib0move(&___nl__2, tct0sim());
#line 34
c_rt_lib0move(&___nl__3, tct0sim());
#line 34
c_rt_lib0move(&___nl__4, tct0bool());
#line 34
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 34
c_rt_lib0clear(&___nl__4);
#line 34
c_rt_lib0clear(&___nl__3);
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0clear(&___nl__1);
#line 35
c_rt_lib0move(&___nl__1,___get_global_const(312));
#line 35
c_rt_lib0move(&___nl__2, tct0sim());
#line 35
c_rt_lib0move(&___nl__3, tct0sim());
#line 35
c_rt_lib0move(&___nl__4, tct0bool());
#line 35
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 35
c_rt_lib0clear(&___nl__4);
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0clear(&___nl__2);
#line 35
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0move(&___nl__1,___get_global_const(314));
#line 36
c_rt_lib0move(&___nl__2, tct0sim());
#line 36
c_rt_lib0move(&___nl__3, tct0sim());
#line 36
c_rt_lib0move(&___nl__4, tct0bool());
#line 36
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 36
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0move(&___nl__1,___get_global_const(300));
#line 37
c_rt_lib0move(&___nl__2, tct0sim());
#line 37
c_rt_lib0move(&___nl__3, tct0sim());
#line 37
c_rt_lib0move(&___nl__4, tct0bool());
#line 37
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 37
c_rt_lib0clear(&___nl__4);
#line 37
c_rt_lib0clear(&___nl__3);
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0move(&___nl__1,___get_global_const(301));
#line 38
c_rt_lib0move(&___nl__2, tct0sim());
#line 38
c_rt_lib0move(&___nl__3, tct0sim());
#line 38
c_rt_lib0move(&___nl__4, tct0bool());
#line 38
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 38
c_rt_lib0clear(&___nl__4);
#line 38
c_rt_lib0clear(&___nl__3);
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__1);
#line 39
c_rt_lib0move(&___nl__1,___get_global_const(774));
#line 39
c_rt_lib0move(&___nl__2, tct0bool());
#line 39
c_rt_lib0move(&___nl__3, tct0bool());
#line 39
c_rt_lib0move(&___nl__4, tct0bool());
#line 39
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 39
c_rt_lib0clear(&___nl__4);
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__1);
#line 40
c_rt_lib0move(&___nl__1,___get_global_const(775));
#line 40
c_rt_lib0move(&___nl__2, tct0bool());
#line 40
c_rt_lib0move(&___nl__3, tct0bool());
#line 40
c_rt_lib0move(&___nl__4, tct0bool());
#line 40
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 40
c_rt_lib0clear(&___nl__4);
#line 40
c_rt_lib0clear(&___nl__3);
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0move(&___nl__1,___get_global_const(866));
#line 41
c_rt_lib0move(&___nl__2, tct0sim());
#line 41
c_rt_lib0move(&___nl__3, tct0sim());
#line 41
c_rt_lib0move(&___nl__4, tct0sim());
#line 41
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 41
c_rt_lib0clear(&___nl__4);
#line 41
c_rt_lib0clear(&___nl__3);
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0clear(&___nl__1);
#line 42
c_rt_lib0move(&___nl__1,___get_global_const(869));
#line 42
c_rt_lib0move(&___nl__2, tct0sim());
#line 42
c_rt_lib0move(&___nl__3, tct0sim());
#line 42
c_rt_lib0move(&___nl__4, tct0sim());
#line 42
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0move(&___nl__1,___get_global_const(868));
#line 43
c_rt_lib0move(&___nl__2, tct0sim());
#line 43
c_rt_lib0move(&___nl__3, tct0sim());
#line 43
c_rt_lib0move(&___nl__4, tct0sim());
#line 43
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0move(&___nl__1,___get_global_const(870));
#line 44
c_rt_lib0move(&___nl__2, tct0sim());
#line 44
c_rt_lib0move(&___nl__3, tct0sim());
#line 44
c_rt_lib0move(&___nl__4, tct0sim());
#line 44
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0move(&___nl__1,___get_global_const(867));
#line 45
c_rt_lib0move(&___nl__2, tct0sim());
#line 45
c_rt_lib0move(&___nl__3, tct0sim());
#line 45
c_rt_lib0move(&___nl__4, tct0sim());
#line 45
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 45
c_rt_lib0clear(&___nl__4);
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 46
c_rt_lib0clear(&___nl__0);
#line 46
return ___nl__1;
#line 46
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0clear(&___nl__0);
#line 46
return NULL;
}

ImmT tc_types0errors_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0errors_t");
return tc_types0errors_t();}
ImmT tc_types0errors_t(){
return tc_types_priv0__const__sing(1);}
ImmT tc_types0errors_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 51
c_rt_lib0move(&___nl__2, ptd0sim());
#line 52
c_rt_lib0move(&___nl__3, ptd0sim());
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(20), ___get_global_const(782)));
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 54
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(20), ___get_global_const(782)));
#line 54
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 54
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(786), ___nl__2, ___get_global_const(132), ___nl__3, ___get_global_const(113), ___nl__4, ___get_global_const(18), ___nl__5));
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0clear(&___nl__5);
#line 54
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
return ___nl__0;
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
return NULL;
}

ImmT tc_types0bin_op_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0bin_op_type");
return tc_types0bin_op_type();}
ImmT tc_types0bin_op_type(){
return tc_types_priv0__const__sing(2);}
ImmT tc_types0bin_op_type0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 59
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 59
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 59
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 59
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 59
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(1132), ___nl__2, ___get_global_const(1133), ___nl__3, ___get_global_const(341), ___nl__4));
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0clear(&___nl__4);
#line 59
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 59
c_rt_lib0clear(&___nl__1);
#line 59
return ___nl__0;
#line 59
c_rt_lib0clear(&___nl__0);
#line 59
return NULL;
}

ImmT tc_types0defs_funs_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0defs_funs_t");
return tc_types0defs_funs_t();}
ImmT tc_types0defs_funs_t(){
return tc_types_priv0__const__sing(3);}
ImmT tc_types0defs_funs_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 63
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(tc_types0def_fun_t0ptr, ___get_global_const(15), ___get_global_const(1135)));
#line 63
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 63
c_rt_lib0move(&___nl__1, ptd0hash(___nl__2));
#line 63
c_rt_lib0clear(&___nl__2);
#line 63
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 63
c_rt_lib0clear(&___nl__1);
#line 63
return ___nl__0;
#line 63
c_rt_lib0clear(&___nl__0);
#line 63
return NULL;
}

ImmT tc_types0return_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0return_t");
return tc_types0return_t();}
ImmT tc_types0return_t(){
return tc_types_priv0__const__sing(4);}
ImmT tc_types0return_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 68
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(20), ___get_global_const(782)));
#line 68
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 69
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(20), ___get_global_const(782)));
#line 69
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(15), ___get_global_const(16)));
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 70
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(18), ___nl__2, ___get_global_const(113), ___nl__3, ___get_global_const(66), ___nl__4));
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0clear(&___nl__4);
#line 70
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 70
c_rt_lib0clear(&___nl__1);
#line 70
return ___nl__0;
#line 70
c_rt_lib0clear(&___nl__0);
#line 70
return NULL;
}

ImmT tc_types0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0modules_t");
return tc_types0modules_t();}
ImmT tc_types0modules_t(){
return tc_types_priv0__const__sing(5);}
ImmT tc_types0modules_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 75
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 75
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 75
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tc_types0env0ptr, ___get_global_const(15), ___get_global_const(1089)));
#line 75
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 75
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0defs_funs_t0ptr, ___get_global_const(15), ___get_global_const(1136)));
#line 75
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 75
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(384), ___nl__2, ___get_global_const(1089), ___nl__3, ___get_global_const(1092), ___nl__4));
#line 75
c_rt_lib0clear(&___nl__2);
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0clear(&___nl__4);
#line 75
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 75
c_rt_lib0clear(&___nl__1);
#line 75
return ___nl__0;
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
return NULL;
}

ImmT tc_types0deref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0deref_type");
return tc_types0deref_type();}
ImmT tc_types0deref_type(){
return tc_types_priv0__const__sing(6);}
ImmT tc_types0deref_type0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 79
c_rt_lib0move(&___nl__2, ptd0sim());
#line 79
c_rt_lib0move(&___nl__3, ptd0sim());
#line 79
c_rt_lib0move(&___nl__4, ptd0sim());
#line 79
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(134), ___nl__2, ___get_global_const(132), ___nl__3, ___get_global_const(1090), ___nl__4));
#line 79
c_rt_lib0clear(&___nl__2);
#line 79
c_rt_lib0clear(&___nl__3);
#line 79
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 79
c_rt_lib0clear(&___nl__1);
#line 79
return ___nl__0;
#line 79
c_rt_lib0clear(&___nl__0);
#line 79
return NULL;
}

ImmT tc_types0deref_types0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0deref_types");
return tc_types0deref_types();}
ImmT tc_types0deref_types(){
return tc_types_priv0__const__sing(7);}
ImmT tc_types0deref_types0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 83
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tc_types0deref_type0ptr, ___get_global_const(15), ___get_global_const(19)));
#line 83
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 83
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 83
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0deref_type0ptr, ___get_global_const(15), ___get_global_const(19)));
#line 83
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 83
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 83
c_rt_lib0clear(&___nl__4);
#line 83
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(152), ___nl__2, ___get_global_const(154), ___nl__3));
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
return ___nl__0;
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
return NULL;
}

ImmT tc_types0env0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0env");
return tc_types0env();}
ImmT tc_types0env(){
return tc_types_priv0__const__sing(8);}
ImmT tc_types0env0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 88
c_rt_lib0move(&___nl__2, ptd0sim());
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tc_types0vars_t0ptr, ___get_global_const(15), ___get_global_const(1137)));
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 89
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 89
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 89
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(674), ___nl__5, ___get_global_const(884), ___nl__6));
#line 89
c_rt_lib0clear(&___nl__5);
#line 89
c_rt_lib0clear(&___nl__6);
#line 89
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 89
c_rt_lib0clear(&___nl__4);
#line 90
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 90
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 91
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(15), ___get_global_const(16)));
#line 91
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 91
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(785), ___nl__2, ___get_global_const(1138), ___nl__3, ___get_global_const(788), ___nl__4, ___get_global_const(66), ___nl__5));
#line 91
c_rt_lib0clear(&___nl__2);
#line 91
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0clear(&___nl__5);
#line 91
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 91
c_rt_lib0clear(&___nl__1);
#line 91
return ___nl__0;
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
return NULL;
}

ImmT tc_types0var_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0var_t");
return tc_types0var_t();}
ImmT tc_types0var_t(){
return tc_types_priv0__const__sing(9);}
ImmT tc_types0var_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 96
c_rt_lib0move(&___nl__4, ptd0none());
#line 96
c_rt_lib0move(&___nl__5, ptd0none());
#line 96
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__4, ___get_global_const(46), ___nl__5));
#line 96
c_rt_lib0clear(&___nl__4);
#line 96
c_rt_lib0clear(&___nl__5);
#line 96
c_rt_lib0move(&___nl__2, ptd0var(___nl__3));
#line 96
c_rt_lib0clear(&___nl__3);
#line 96
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 96
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 96
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(1139), ___nl__2, ___get_global_const(63), ___nl__3));
#line 96
c_rt_lib0clear(&___nl__2);
#line 96
c_rt_lib0clear(&___nl__3);
#line 96
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 96
c_rt_lib0clear(&___nl__1);
#line 96
return ___nl__0;
#line 96
c_rt_lib0clear(&___nl__0);
#line 96
return NULL;
}

ImmT tc_types0fun_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0fun_arg_t");
return tc_types0fun_arg_t();}
ImmT tc_types0fun_arg_t(){
return tc_types_priv0__const__sing(10);}
ImmT tc_types0fun_arg_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 101
c_rt_lib0move(&___nl__2, ptd0sim());
#line 102
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 102
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 103
c_rt_lib0move(&___nl__6, ptd0none());
#line 103
c_rt_lib0move(&___nl__7, ptd0none());
#line 103
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(41), ___nl__6, ___get_global_const(5), ___nl__7));
#line 103
c_rt_lib0clear(&___nl__6);
#line 103
c_rt_lib0clear(&___nl__7);
#line 103
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 103
c_rt_lib0clear(&___nl__5);
#line 103
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__2, ___get_global_const(63), ___nl__3, ___get_global_const(222), ___nl__4));
#line 103
c_rt_lib0clear(&___nl__2);
#line 103
c_rt_lib0clear(&___nl__3);
#line 103
c_rt_lib0clear(&___nl__4);
#line 103
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 103
c_rt_lib0clear(&___nl__1);
#line 103
return ___nl__0;
#line 103
c_rt_lib0clear(&___nl__0);
#line 103
return NULL;
}

ImmT tc_types0def_fun_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0def_fun_t");
return tc_types0def_fun_t();}
ImmT tc_types0def_fun_t(){
return tc_types_priv0__const__sing(11);}
ImmT tc_types0def_fun_t0cal() {
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
#line 109
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(13), ___get_global_const(274)));
#line 109
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 110
c_rt_lib0move(&___nl__5, ptd0none());
#line 110
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 110
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 110
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(46), ___nl__5, ___get_global_const(45), ___nl__6));
#line 110
c_rt_lib0clear(&___nl__5);
#line 110
c_rt_lib0clear(&___nl__6);
#line 110
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 110
c_rt_lib0clear(&___nl__4);
#line 111
c_rt_lib0move(&___nl__6, ptd0none());
#line 111
c_rt_lib0move(&___nl__8, ptd0sim());
#line 111
c_rt_lib0move(&___nl__7, ptd0arr(___nl__8));
#line 111
c_rt_lib0clear(&___nl__8);
#line 111
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(46), ___nl__6, ___get_global_const(45), ___nl__7));
#line 111
c_rt_lib0clear(&___nl__6);
#line 111
c_rt_lib0clear(&___nl__7);
#line 111
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 111
c_rt_lib0clear(&___nl__5);
#line 112
c_rt_lib0move(&___nl__5, ptd0sim());
#line 113
c_rt_lib0move(&___nl__6, ptd0sim());
#line 114
c_rt_lib0move(&___nl__9, ptd0none());
#line 114
c_rt_lib0move(&___nl__10, ptd0none());
#line 114
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(379), ___nl__9, ___get_global_const(183), ___nl__10));
#line 114
c_rt_lib0clear(&___nl__9);
#line 114
c_rt_lib0clear(&___nl__10);
#line 114
c_rt_lib0move(&___nl__7, ptd0var(___nl__8));
#line 114
c_rt_lib0clear(&___nl__8);
#line 115
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(tc_types0fun_arg_t0ptr, ___get_global_const(15), ___get_global_const(1140)));
#line 115
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 115
c_rt_lib0move(&___nl__8, ptd0arr(___nl__9));
#line 115
c_rt_lib0clear(&___nl__9);
#line 116
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 116
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 116
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(8, ___get_global_const(201), ___nl__2, ___get_global_const(1096), ___nl__3, ___get_global_const(1091), ___nl__4, ___get_global_const(93), ___nl__5, ___get_global_const(132), ___nl__6, ___get_global_const(182), ___nl__7, ___get_global_const(89), ___nl__8, ___get_global_const(788), ___nl__9));
#line 116
c_rt_lib0clear(&___nl__2);
#line 116
c_rt_lib0clear(&___nl__3);
#line 116
c_rt_lib0clear(&___nl__4);
#line 116
c_rt_lib0clear(&___nl__5);
#line 116
c_rt_lib0clear(&___nl__6);
#line 116
c_rt_lib0clear(&___nl__7);
#line 116
c_rt_lib0clear(&___nl__8);
#line 116
c_rt_lib0clear(&___nl__9);
#line 116
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 116
c_rt_lib0clear(&___nl__1);
#line 116
return ___nl__0;
#line 116
c_rt_lib0clear(&___nl__0);
#line 116
return NULL;
}

ImmT tc_types0vars_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0vars_t");
return tc_types0vars_t();}
ImmT tc_types0vars_t(){
return tc_types_priv0__const__sing(12);}
ImmT tc_types0vars_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 121
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(tc_types0var_t0ptr, ___get_global_const(15), ___get_global_const(781)));
#line 121
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 121
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 121
c_rt_lib0clear(&___nl__1);
#line 121
return ___nl__0;
#line 121
c_rt_lib0clear(&___nl__0);
#line 121
return NULL;
}

ImmT tc_types0type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0type");
return tc_types0type();}
ImmT tc_types0type(){
return tc_types_priv0__const__sing(13);}
ImmT tc_types0type0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(tc_types0value_src0ptr, ___get_global_const(15), ___get_global_const(1141)));
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 125
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(43), ___nl__2, ___get_global_const(63), ___nl__3));
#line 125
c_rt_lib0clear(&___nl__2);
#line 125
c_rt_lib0clear(&___nl__3);
#line 125
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 125
c_rt_lib0clear(&___nl__1);
#line 125
return ___nl__0;
#line 125
c_rt_lib0clear(&___nl__0);
#line 125
return NULL;
}

ImmT tc_types0value_src0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0value_src");
return tc_types0value_src();}
ImmT tc_types0value_src(){
return tc_types_priv0__const__sing(14);}
ImmT tc_types0value_src0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 129
c_rt_lib0move(&___nl__2, ptd0none());
#line 129
c_rt_lib0move(&___nl__3, ptd0none());
#line 129
c_rt_lib0move(&___nl__4, ptd0none());
#line 129
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(1079), ___nl__2, ___get_global_const(1080), ___nl__3, ___get_global_const(1085), ___nl__4));
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
return ___nl__0;
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
return NULL;
}

ImmT tc_types0lval_path0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0lval_path");
return tc_types0lval_path();}
ImmT tc_types0lval_path(){
return tc_types_priv0__const__sing(15);}
ImmT tc_types0lval_path0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 133
c_rt_lib0move(&___nl__3, ptd0sim());
#line 133
c_rt_lib0move(&___nl__4, ptd0none());
#line 133
c_rt_lib0move(&___nl__5, ptd0sim());
#line 133
c_rt_lib0move(&___nl__6, ptd0none());
#line 133
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(849), ___nl__3, ___get_global_const(327), ___nl__4, ___get_global_const(1074), ___nl__5, ___get_global_const(1142), ___nl__6));
#line 133
c_rt_lib0clear(&___nl__3);
#line 133
c_rt_lib0clear(&___nl__4);
#line 133
c_rt_lib0clear(&___nl__5);
#line 133
c_rt_lib0clear(&___nl__6);
#line 133
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 133
c_rt_lib0clear(&___nl__2);
#line 133
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 133
c_rt_lib0clear(&___nl__1);
#line 133
return ___nl__0;
#line 133
c_rt_lib0clear(&___nl__0);
#line 133
return NULL;
}

ImmT tc_types0walk_arg0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0walk_arg");
return tc_types0walk_arg();}
ImmT tc_types0walk_arg(){
return tc_types_priv0__const__sing(16);}
ImmT tc_types0walk_arg0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 138
c_rt_lib0move(&___nl__4, ptd0sim());
#line 138
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 138
c_rt_lib0clear(&___nl__4);
#line 138
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 138
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tc_types0errors_t0ptr, ___get_global_const(15), ___get_global_const(782)));
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 140
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0modules_t0ptr, ___get_global_const(15), ___get_global_const(1143)));
#line 140
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 140
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(1144), ___nl__2, ___get_global_const(18), ___nl__3, ___get_global_const(157), ___nl__4));
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
c_rt_lib0clear(&___nl__3);
#line 140
c_rt_lib0clear(&___nl__4);
#line 140
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
return ___nl__0;
#line 140
c_rt_lib0clear(&___nl__0);
#line 140
return NULL;
}

ImmT tc_types0ref_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0ref_t");
return tc_types0ref_t();}
ImmT tc_types0ref_t(){
return tc_types_priv0__const__sing(17);}
ImmT tc_types0ref_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 146
c_rt_lib0move(&___nl__2, ptd0sim());
#line 147
c_rt_lib0move(&___nl__5, ptd0sim());
#line 147
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 147
c_rt_lib0clear(&___nl__5);
#line 147
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 147
c_rt_lib0clear(&___nl__4);
#line 148
c_rt_lib0move(&___nl__6, ptd0sim());
#line 148
c_rt_lib0move(&___nl__5, ptd0arr(___nl__6));
#line 148
c_rt_lib0clear(&___nl__6);
#line 148
c_rt_lib0move(&___nl__4, ptd0hash(___nl__5));
#line 148
c_rt_lib0clear(&___nl__5);
#line 149
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 149
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 150
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 150
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 150
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(1082), ___nl__2, ___get_global_const(203), ___nl__3, ___get_global_const(278), ___nl__4, ___get_global_const(1083), ___nl__5, ___get_global_const(1084), ___nl__6));
#line 150
c_rt_lib0clear(&___nl__2);
#line 150
c_rt_lib0clear(&___nl__3);
#line 150
c_rt_lib0clear(&___nl__4);
#line 150
c_rt_lib0clear(&___nl__5);
#line 150
c_rt_lib0clear(&___nl__6);
#line 150
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 150
c_rt_lib0clear(&___nl__1);
#line 150
return ___nl__0;
#line 150
c_rt_lib0clear(&___nl__0);
#line 150
return NULL;
}

ImmT tc_types0stack_info_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0stack_info_type");
return tc_types0stack_info_type();}
ImmT tc_types0stack_info_type(){
return tc_types_priv0__const__sing(18);}
ImmT tc_types0stack_info_type0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 155
c_rt_lib0move(&___nl__2, ptd0none());
#line 155
c_rt_lib0move(&___nl__3, ptd0none());
#line 155
c_rt_lib0move(&___nl__4, ptd0sim());
#line 155
c_rt_lib0move(&___nl__5, ptd0sim());
#line 155
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(1026), ___nl__2, ___get_global_const(1021), ___nl__3, ___get_global_const(1022), ___nl__4, ___get_global_const(1028), ___nl__5));
#line 155
c_rt_lib0clear(&___nl__2);
#line 155
c_rt_lib0clear(&___nl__3);
#line 155
c_rt_lib0clear(&___nl__4);
#line 155
c_rt_lib0clear(&___nl__5);
#line 155
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 155
c_rt_lib0clear(&___nl__1);
#line 155
return ___nl__0;
#line 155
c_rt_lib0clear(&___nl__0);
#line 155
return NULL;
}

ImmT tc_types0check_info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0check_info");
return tc_types0check_info();}
ImmT tc_types0check_info(){
return tc_types_priv0__const__sing(19);}
ImmT tc_types0check_info0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 160
c_rt_lib0move(&___nl__2, ptd0none());
#line 162
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 162
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 163
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 163
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 164
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(tc_types0stack_info_type0ptr, ___get_global_const(15), ___get_global_const(1145)));
#line 164
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 164
c_rt_lib0move(&___nl__7, ptd0arr(___nl__8));
#line 164
c_rt_lib0clear(&___nl__8);
#line 164
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(203), ___nl__5, ___get_global_const(278), ___nl__6, ___get_global_const(690), ___nl__7));
#line 164
c_rt_lib0clear(&___nl__5);
#line 164
c_rt_lib0clear(&___nl__6);
#line 164
c_rt_lib0clear(&___nl__7);
#line 164
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 164
c_rt_lib0clear(&___nl__4);
#line 164
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__2, ___get_global_const(47), ___nl__3));
#line 164
c_rt_lib0clear(&___nl__2);
#line 164
c_rt_lib0clear(&___nl__3);
#line 164
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 164
c_rt_lib0clear(&___nl__1);
#line 164
return ___nl__0;
#line 164
c_rt_lib0clear(&___nl__0);
#line 164
return NULL;
}

ImmT tc_types0special_functions0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0special_functions");
return tc_types0special_functions();}
ImmT tc_types0special_functions(){
return tc_types_priv0__const__sing(20);}
ImmT tc_types0special_functions0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 170
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1134), ___get_global_const(678)));
#line 170
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 170
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tc_types0fun_arg_t0ptr, ___get_global_const(15), ___get_global_const(1140)));
#line 170
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 170
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 170
c_rt_lib0clear(&___nl__5);
#line 170
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 170
c_rt_lib0clear(&___nl__3);
#line 170
c_rt_lib0clear(&___nl__4);
#line 170
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 170
c_rt_lib0clear(&___nl__2);
#line 170
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
return ___nl__0;
#line 170
c_rt_lib0clear(&___nl__0);
#line 170
return NULL;
}

ImmT tc_types0get_default_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0get_default_type");
return tc_types0get_default_type();}
ImmT tc_types0get_default_type(){
return tc_types_priv0__const__sing(21);}
ImmT tc_types0get_default_type0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 174
c_rt_lib0move(&___nl__1, tct0tct_im());
#line 174
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 174
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__1, ___get_global_const(43), ___nl__2));
#line 174
c_rt_lib0clear(&___nl__1);
#line 174
c_rt_lib0clear(&___nl__2);
#line 174
return ___nl__0;
#line 174
c_rt_lib0clear(&___nl__0);
#line 174
return NULL;
}


static ImmT ___const__[23];
static int ___const_init__ = 1;
void tc_types0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[22];


for(int i=0;i<22;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 22);
}
ImmT tc_types_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT tc_types_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = tc_types_priv0get_binary_ops0cal();
	break;
case 1:
	___const__[1] = tc_types0errors_t0cal();
	break;
case 2:
	___const__[2] = tc_types0bin_op_type0cal();
	break;
case 3:
	___const__[3] = tc_types0defs_funs_t0cal();
	break;
case 4:
	___const__[4] = tc_types0return_t0cal();
	break;
case 5:
	___const__[5] = tc_types0modules_t0cal();
	break;
case 6:
	___const__[6] = tc_types0deref_type0cal();
	break;
case 7:
	___const__[7] = tc_types0deref_types0cal();
	break;
case 8:
	___const__[8] = tc_types0env0cal();
	break;
case 9:
	___const__[9] = tc_types0var_t0cal();
	break;
case 10:
	___const__[10] = tc_types0fun_arg_t0cal();
	break;
case 11:
	___const__[11] = tc_types0def_fun_t0cal();
	break;
case 12:
	___const__[12] = tc_types0vars_t0cal();
	break;
case 13:
	___const__[13] = tc_types0type0cal();
	break;
case 14:
	___const__[14] = tc_types0value_src0cal();
	break;
case 15:
	___const__[15] = tc_types0lval_path0cal();
	break;
case 16:
	___const__[16] = tc_types0walk_arg0cal();
	break;
case 17:
	___const__[17] = tc_types0ref_t0cal();
	break;
case 18:
	___const__[18] = tc_types0stack_info_type0cal();
	break;
case 19:
	___const__[19] = tc_types0check_info0cal();
	break;
case 20:
	___const__[20] = tc_types0special_functions0cal();
	break;
case 21:
	___const__[21] = tc_types0get_default_type0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
