
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
#line 1 "tc_types.nl"

static ImmT *__const__f = NULL;
void tc_types_priv0__const__init();
ImmT tc_types_priv0__const__sim(int __nr);
ImmT tc_types_priv0__const__sing(int __nr);

ImmT tc_types_priv0op_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4);
ImmT tc_types_priv0get_binary_ops();


ImmT tc_types_priv0op_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
tc_types_priv0__const__init();
ImmT ___nl__5 = NULL;
#line 16
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(1003), ___nl__2, ___get_global_const(1004), ___nl__3, ___get_global_const(291), ___nl__4));
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
tc_types_priv0__const__init();
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
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(0);}
ImmT tc_types_priv0get_binary_ops0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 24
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 25
c_rt_lib0move(&___nl__1,___get_global_const(253));
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
c_rt_lib0move(&___nl__1,___get_global_const(79));
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
c_rt_lib0move(&___nl__1,___get_global_const(256));
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
c_rt_lib0move(&___nl__1,___get_global_const(247));
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
c_rt_lib0move(&___nl__1,___get_global_const(245));
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
c_rt_lib0move(&___nl__1,___get_global_const(81));
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
c_rt_lib0move(&___nl__1,___get_global_const(1005));
#line 31
c_rt_lib0move(&___nl__2, tct0sim());
#line 31
c_rt_lib0move(&___nl__3, tct0sim());
#line 31
c_rt_lib0move(&___nl__4, tct0sim());
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
c_rt_lib0move(&___nl__1,___get_global_const(1006));
#line 32
c_rt_lib0move(&___nl__2, tct0sim());
#line 32
c_rt_lib0move(&___nl__3, tct0sim());
#line 32
c_rt_lib0move(&___nl__4, tct0sim());
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
c_rt_lib0move(&___nl__1,___get_global_const(268));
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
c_rt_lib0move(&___nl__1,___get_global_const(261));
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
c_rt_lib0move(&___nl__1,___get_global_const(267));
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
c_rt_lib0move(&___nl__1,___get_global_const(259));
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
c_rt_lib0move(&___nl__1,___get_global_const(269));
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
c_rt_lib0move(&___nl__1,___get_global_const(258));
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
c_rt_lib0move(&___nl__1,___get_global_const(260));
#line 39
c_rt_lib0move(&___nl__2, tct0sim());
#line 39
c_rt_lib0move(&___nl__3, tct0sim());
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
c_rt_lib0move(&___nl__1,___get_global_const(266));
#line 40
c_rt_lib0move(&___nl__2, tct0sim());
#line 40
c_rt_lib0move(&___nl__3, tct0sim());
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
c_rt_lib0move(&___nl__1,___get_global_const(262));
#line 41
c_rt_lib0move(&___nl__2, tct0sim());
#line 41
c_rt_lib0move(&___nl__3, tct0sim());
#line 41
c_rt_lib0move(&___nl__4, tct0bool());
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
c_rt_lib0move(&___nl__1,___get_global_const(264));
#line 42
c_rt_lib0move(&___nl__2, tct0sim());
#line 42
c_rt_lib0move(&___nl__3, tct0sim());
#line 42
c_rt_lib0move(&___nl__4, tct0bool());
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
c_rt_lib0move(&___nl__1,___get_global_const(1007));
#line 43
c_rt_lib0move(&___nl__2, tct0sim());
#line 43
c_rt_lib0move(&___nl__3, tct0sim());
#line 43
c_rt_lib0move(&___nl__4, tct0bool());
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
c_rt_lib0move(&___nl__1,___get_global_const(249));
#line 44
c_rt_lib0move(&___nl__2, tct0sim());
#line 44
c_rt_lib0move(&___nl__3, tct0sim());
#line 44
c_rt_lib0move(&___nl__4, tct0bool());
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
c_rt_lib0move(&___nl__1,___get_global_const(250));
#line 45
c_rt_lib0move(&___nl__2, tct0sim());
#line 45
c_rt_lib0move(&___nl__3, tct0sim());
#line 45
c_rt_lib0move(&___nl__4, tct0bool());
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
c_rt_lib0move(&___nl__1,___get_global_const(4));
#line 46
c_rt_lib0move(&___nl__2, tct0sim());
#line 46
c_rt_lib0move(&___nl__3, tct0sim());
#line 46
c_rt_lib0move(&___nl__4, tct0bool());
#line 46
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 46
c_rt_lib0clear(&___nl__4);
#line 46
c_rt_lib0clear(&___nl__3);
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0clear(&___nl__1);
#line 47
c_rt_lib0move(&___nl__1,___get_global_const(1008));
#line 47
c_rt_lib0move(&___nl__2, tct0sim());
#line 47
c_rt_lib0move(&___nl__3, tct0sim());
#line 47
c_rt_lib0move(&___nl__4, tct0sim());
#line 47
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 47
c_rt_lib0clear(&___nl__4);
#line 47
c_rt_lib0clear(&___nl__3);
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__1);
#line 48
c_rt_lib0move(&___nl__1,___get_global_const(1009));
#line 48
c_rt_lib0move(&___nl__2, tct0sim());
#line 48
c_rt_lib0move(&___nl__3, tct0sim());
#line 48
c_rt_lib0move(&___nl__4, tct0sim());
#line 48
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0clear(&___nl__1);
#line 49
c_rt_lib0move(&___nl__1,___get_global_const(1010));
#line 49
c_rt_lib0move(&___nl__2, tct0sim());
#line 49
c_rt_lib0move(&___nl__3, tct0sim());
#line 49
c_rt_lib0move(&___nl__4, tct0sim());
#line 49
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 49
c_rt_lib0clear(&___nl__4);
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0move(&___nl__1,___get_global_const(696));
#line 50
c_rt_lib0move(&___nl__2, tct0bool());
#line 50
c_rt_lib0move(&___nl__3, tct0bool());
#line 50
c_rt_lib0move(&___nl__4, tct0bool());
#line 50
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 50
c_rt_lib0clear(&___nl__4);
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0clear(&___nl__1);
#line 51
c_rt_lib0move(&___nl__1,___get_global_const(697));
#line 51
c_rt_lib0move(&___nl__2, tct0bool());
#line 51
c_rt_lib0move(&___nl__3, tct0bool());
#line 51
c_rt_lib0move(&___nl__4, tct0bool());
#line 51
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 51
c_rt_lib0clear(&___nl__4);
#line 51
c_rt_lib0clear(&___nl__3);
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__1);
#line 52
c_rt_lib0move(&___nl__1,___get_global_const(788));
#line 52
c_rt_lib0move(&___nl__2, tct0sim());
#line 52
c_rt_lib0move(&___nl__3, tct0sim());
#line 52
c_rt_lib0move(&___nl__4, tct0sim());
#line 52
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 52
c_rt_lib0clear(&___nl__4);
#line 52
c_rt_lib0clear(&___nl__3);
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0move(&___nl__1,___get_global_const(791));
#line 53
c_rt_lib0move(&___nl__2, tct0sim());
#line 53
c_rt_lib0move(&___nl__3, tct0sim());
#line 53
c_rt_lib0move(&___nl__4, tct0sim());
#line 53
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0move(&___nl__1,___get_global_const(790));
#line 54
c_rt_lib0move(&___nl__2, tct0sim());
#line 54
c_rt_lib0move(&___nl__3, tct0sim());
#line 54
c_rt_lib0move(&___nl__4, tct0sim());
#line 54
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__1);
#line 55
c_rt_lib0move(&___nl__1,___get_global_const(792));
#line 55
c_rt_lib0move(&___nl__2, tct0sim());
#line 55
c_rt_lib0move(&___nl__3, tct0sim());
#line 55
c_rt_lib0move(&___nl__4, tct0sim());
#line 55
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 55
c_rt_lib0clear(&___nl__4);
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__1);
#line 56
c_rt_lib0move(&___nl__1,___get_global_const(789));
#line 56
c_rt_lib0move(&___nl__2, tct0sim());
#line 56
c_rt_lib0move(&___nl__3, tct0sim());
#line 56
c_rt_lib0move(&___nl__4, tct0sim());
#line 56
c_rt_lib0delete(tc_types_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 56
c_rt_lib0clear(&___nl__4);
#line 56
c_rt_lib0clear(&___nl__3);
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0clear(&___nl__1);
#line 57
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
return ___nl__1;
#line 57
c_rt_lib0clear(&___nl__1);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
return NULL;
}

ImmT tc_types0errors_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0errors_t");
return tc_types0errors_t();}
ImmT tc_types0errors_t(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(1);}
ImmT tc_types0errors_t0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 61
c_rt_lib0move(&___nl__2, ptd0sim());
#line 61
c_rt_lib0move(&___nl__3, ptd0sim());
#line 61
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0check_errors_t0ptr, ___get_global_const(14), ___get_global_const(1011)));
#line 61
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 61
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tc_types0check_errors_t0ptr, ___get_global_const(14), ___get_global_const(1011)));
#line 61
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 61
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(710), ___nl__2, ___get_global_const(99), ___nl__3, ___get_global_const(96), ___nl__4, ___get_global_const(17), ___nl__5));
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__3);
#line 61
c_rt_lib0clear(&___nl__4);
#line 61
c_rt_lib0clear(&___nl__5);
#line 61
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 61
c_rt_lib0clear(&___nl__1);
#line 61
return ___nl__0;
#line 61
c_rt_lib0clear(&___nl__0);
#line 61
return NULL;
}

ImmT tc_types0bin_op_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0bin_op_type");
return tc_types0bin_op_type();}
ImmT tc_types0bin_op_type(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(2);}
ImmT tc_types0bin_op_type0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 70
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 70
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 70
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 70
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 70
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(1003), ___nl__2, ___get_global_const(1004), ___nl__3, ___get_global_const(291), ___nl__4));
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

ImmT tc_types0defs_funs_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0defs_funs_t");
return tc_types0defs_funs_t();}
ImmT tc_types0defs_funs_t(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(3);}
ImmT tc_types0defs_funs_t0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 74
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(tc_types0def_fun_t0ptr, ___get_global_const(14), ___get_global_const(1013)));
#line 74
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 74
c_rt_lib0move(&___nl__1, ptd0hash(___nl__2));
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
return ___nl__0;
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return NULL;
}

ImmT tc_types0return_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0return_t");
return tc_types0return_t();}
ImmT tc_types0return_t(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(4);}
ImmT tc_types0return_t0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 77
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(tc_types0check_errors_t0ptr, ___get_global_const(14), ___get_global_const(1011)));
#line 77
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 77
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tc_types0check_errors_t0ptr, ___get_global_const(14), ___get_global_const(1011)));
#line 77
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 77
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(14), ___get_global_const(15)));
#line 77
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 77
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(17), ___nl__2, ___get_global_const(96), ___nl__3, ___get_global_const(60), ___nl__4));
#line 77
c_rt_lib0clear(&___nl__2);
#line 77
c_rt_lib0clear(&___nl__3);
#line 77
c_rt_lib0clear(&___nl__4);
#line 77
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 77
c_rt_lib0clear(&___nl__1);
#line 77
return ___nl__0;
#line 77
c_rt_lib0clear(&___nl__0);
#line 77
return NULL;
}

ImmT tc_types0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0modules_t");
return tc_types0modules_t();}
ImmT tc_types0modules_t(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(5);}
ImmT tc_types0modules_t0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 84
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(180), ___get_global_const(72)));
#line 84
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 84
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 84
c_rt_lib0clear(&___nl__3);
#line 84
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tc_types0env0ptr, ___get_global_const(14), ___get_global_const(989)));
#line 84
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 84
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0defs_funs_t0ptr, ___get_global_const(14), ___get_global_const(1014)));
#line 84
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 84
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(336), ___nl__2, ___get_global_const(989), ___nl__3, ___get_global_const(992), ___nl__4));
#line 84
c_rt_lib0clear(&___nl__2);
#line 84
c_rt_lib0clear(&___nl__3);
#line 84
c_rt_lib0clear(&___nl__4);
#line 84
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 84
c_rt_lib0clear(&___nl__1);
#line 84
return ___nl__0;
#line 84
c_rt_lib0clear(&___nl__0);
#line 84
return NULL;
}

ImmT tc_types0deref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0deref_type");
return tc_types0deref_type();}
ImmT tc_types0deref_type(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(6);}
ImmT tc_types0deref_type0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 91
c_rt_lib0move(&___nl__2, ptd0sim());
#line 91
c_rt_lib0move(&___nl__3, ptd0sim());
#line 91
c_rt_lib0move(&___nl__4, ptd0sim());
#line 91
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(98), ___nl__2, ___get_global_const(99), ___nl__3, ___get_global_const(990), ___nl__4));
#line 91
c_rt_lib0clear(&___nl__2);
#line 91
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0clear(&___nl__4);
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

ImmT tc_types0deref_types0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0deref_types");
return tc_types0deref_types();}
ImmT tc_types0deref_types(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(7);}
ImmT tc_types0deref_types0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 98
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tc_types0deref_type0ptr, ___get_global_const(14), ___get_global_const(18)));
#line 98
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 98
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 98
c_rt_lib0clear(&___nl__3);
#line 98
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0deref_type0ptr, ___get_global_const(14), ___get_global_const(18)));
#line 98
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 98
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 98
c_rt_lib0clear(&___nl__4);
#line 98
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(128), ___nl__2, ___get_global_const(130), ___nl__3));
#line 98
c_rt_lib0clear(&___nl__2);
#line 98
c_rt_lib0clear(&___nl__3);
#line 98
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 98
c_rt_lib0clear(&___nl__1);
#line 98
return ___nl__0;
#line 98
c_rt_lib0clear(&___nl__0);
#line 98
return NULL;
}

ImmT tc_types0env0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0env");
return tc_types0env();}
ImmT tc_types0env(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(8);}
ImmT tc_types0env0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 104
c_rt_lib0move(&___nl__2, ptd0sim());
#line 104
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tc_types0vars_t0ptr, ___get_global_const(14), ___get_global_const(1015)));
#line 104
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 104
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(180), ___get_global_const(72)));
#line 104
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(618), ___nl__5, ___get_global_const(805), ___nl__6));
#line 104
c_rt_lib0clear(&___nl__5);
#line 104
c_rt_lib0clear(&___nl__6);
#line 104
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 104
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(14), ___get_global_const(15)));
#line 104
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 104
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(709), ___nl__2, ___get_global_const(1016), ___nl__3, ___get_global_const(712), ___nl__4, ___get_global_const(60), ___nl__5));
#line 104
c_rt_lib0clear(&___nl__2);
#line 104
c_rt_lib0clear(&___nl__3);
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0clear(&___nl__5);
#line 104
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 104
c_rt_lib0clear(&___nl__1);
#line 104
return ___nl__0;
#line 104
c_rt_lib0clear(&___nl__0);
#line 104
return NULL;
}

ImmT tc_types0var_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0var_t");
return tc_types0var_t();}
ImmT tc_types0var_t(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(9);}
ImmT tc_types0var_t0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 113
c_rt_lib0move(&___nl__4, ptd0none());
#line 113
c_rt_lib0move(&___nl__5, ptd0none());
#line 113
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(41), ___nl__4, ___get_global_const(42), ___nl__5));
#line 113
c_rt_lib0clear(&___nl__4);
#line 113
c_rt_lib0clear(&___nl__5);
#line 113
c_rt_lib0move(&___nl__2, ptd0var(___nl__3));
#line 113
c_rt_lib0clear(&___nl__3);
#line 113
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 113
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 113
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__2, ___get_global_const(72), ___nl__3));
#line 113
c_rt_lib0clear(&___nl__2);
#line 113
c_rt_lib0clear(&___nl__3);
#line 113
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 113
c_rt_lib0clear(&___nl__1);
#line 113
return ___nl__0;
#line 113
c_rt_lib0clear(&___nl__0);
#line 113
return NULL;
}

ImmT tc_types0fun_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0fun_arg_t");
return tc_types0fun_arg_t();}
ImmT tc_types0fun_arg_t(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(10);}
ImmT tc_types0fun_arg_t0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 117
c_rt_lib0move(&___nl__2, ptd0sim());
#line 117
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 117
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 117
c_rt_lib0move(&___nl__6, ptd0none());
#line 117
c_rt_lib0move(&___nl__7, ptd0none());
#line 117
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(37), ___nl__6, ___get_global_const(5), ___nl__7));
#line 117
c_rt_lib0clear(&___nl__6);
#line 117
c_rt_lib0clear(&___nl__7);
#line 117
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 117
c_rt_lib0clear(&___nl__5);
#line 117
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(76), ___nl__2, ___get_global_const(72), ___nl__3, ___get_global_const(257), ___nl__4));
#line 117
c_rt_lib0clear(&___nl__2);
#line 117
c_rt_lib0clear(&___nl__3);
#line 117
c_rt_lib0clear(&___nl__4);
#line 117
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 117
c_rt_lib0clear(&___nl__1);
#line 117
return ___nl__0;
#line 117
c_rt_lib0clear(&___nl__0);
#line 117
return NULL;
}

ImmT tc_types0def_fun_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0def_fun_t");
return tc_types0def_fun_t();}
ImmT tc_types0def_fun_t(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(11);}
ImmT tc_types0def_fun_t0cal() {
tc_types_priv0__const__init();
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
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(191)));
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 125
c_rt_lib0move(&___nl__5, ptd0none());
#line 125
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 125
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 125
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(42), ___nl__5, ___get_global_const(41), ___nl__6));
#line 125
c_rt_lib0clear(&___nl__5);
#line 125
c_rt_lib0clear(&___nl__6);
#line 125
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 125
c_rt_lib0clear(&___nl__4);
#line 125
c_rt_lib0move(&___nl__6, ptd0none());
#line 125
c_rt_lib0move(&___nl__8, ptd0sim());
#line 125
c_rt_lib0move(&___nl__7, ptd0arr(___nl__8));
#line 125
c_rt_lib0clear(&___nl__8);
#line 125
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(42), ___nl__6, ___get_global_const(41), ___nl__7));
#line 125
c_rt_lib0clear(&___nl__6);
#line 125
c_rt_lib0clear(&___nl__7);
#line 125
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 125
c_rt_lib0clear(&___nl__5);
#line 125
c_rt_lib0move(&___nl__5, ptd0sim());
#line 125
c_rt_lib0move(&___nl__6, ptd0sim());
#line 125
c_rt_lib0move(&___nl__9, ptd0none());
#line 125
c_rt_lib0move(&___nl__10, ptd0none());
#line 125
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(330), ___nl__9, ___get_global_const(329), ___nl__10));
#line 125
c_rt_lib0clear(&___nl__9);
#line 125
c_rt_lib0clear(&___nl__10);
#line 125
c_rt_lib0move(&___nl__7, ptd0var(___nl__8));
#line 125
c_rt_lib0clear(&___nl__8);
#line 125
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(tc_types0fun_arg_t0ptr, ___get_global_const(14), ___get_global_const(1018)));
#line 125
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 125
c_rt_lib0move(&___nl__8, ptd0arr(___nl__9));
#line 125
c_rt_lib0clear(&___nl__9);
#line 125
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 125
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 125
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(8, ___get_global_const(209), ___nl__2, ___get_global_const(996), ___nl__3, ___get_global_const(991), ___nl__4, ___get_global_const(76), ___nl__5, ___get_global_const(99), ___nl__6, ___get_global_const(328), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(712), ___nl__9));
#line 125
c_rt_lib0clear(&___nl__2);
#line 125
c_rt_lib0clear(&___nl__3);
#line 125
c_rt_lib0clear(&___nl__4);
#line 125
c_rt_lib0clear(&___nl__5);
#line 125
c_rt_lib0clear(&___nl__6);
#line 125
c_rt_lib0clear(&___nl__7);
#line 125
c_rt_lib0clear(&___nl__8);
#line 125
c_rt_lib0clear(&___nl__9);
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

ImmT tc_types0vars_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0vars_t");
return tc_types0vars_t();}
ImmT tc_types0vars_t(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(12);}
ImmT tc_types0vars_t0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 138
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(tc_types0var_t0ptr, ___get_global_const(14), ___get_global_const(705)));
#line 138
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 138
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
return ___nl__0;
#line 138
c_rt_lib0clear(&___nl__0);
#line 138
return NULL;
}

ImmT tc_types0check_error_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0check_error_t");
return tc_types0check_error_t();}
ImmT tc_types0check_error_t(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(13);}
ImmT tc_types0check_error_t0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 142
c_rt_lib0move(&___nl__2, ptd0sim());
#line 142
c_rt_lib0move(&___nl__3, ptd0sim());
#line 142
c_rt_lib0move(&___nl__4, ptd0sim());
#line 142
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(97), ___nl__2, ___get_global_const(98), ___nl__3, ___get_global_const(99), ___nl__4));
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
return ___nl__0;
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
return NULL;
}

ImmT tc_types0check_errors_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0check_errors_t");
return tc_types0check_errors_t();}
ImmT tc_types0check_errors_t(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(14);}
ImmT tc_types0check_errors_t0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 146
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(tc_types0check_error_t0ptr, ___get_global_const(14), ___get_global_const(19)));
#line 146
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 146
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 146
c_rt_lib0clear(&___nl__1);
#line 146
return ___nl__0;
#line 146
c_rt_lib0clear(&___nl__0);
#line 146
return NULL;
}

ImmT tc_types0type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0type");
return tc_types0type();}
ImmT tc_types0type(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(15);}
ImmT tc_types0type0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 149
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(tc_types0value_src0ptr, ___get_global_const(14), ___get_global_const(1019)));
#line 149
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 149
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 149
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 149
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(39), ___nl__2, ___get_global_const(72), ___nl__3));
#line 149
c_rt_lib0clear(&___nl__2);
#line 149
c_rt_lib0clear(&___nl__3);
#line 149
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 149
c_rt_lib0clear(&___nl__1);
#line 149
return ___nl__0;
#line 149
c_rt_lib0clear(&___nl__0);
#line 149
return NULL;
}

ImmT tc_types0value_src0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0value_src");
return tc_types0value_src();}
ImmT tc_types0value_src(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(16);}
ImmT tc_types0value_src0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 153
c_rt_lib0move(&___nl__2, ptd0none());
#line 153
c_rt_lib0move(&___nl__3, ptd0none());
#line 153
c_rt_lib0move(&___nl__4, ptd0none());
#line 153
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(979), ___nl__2, ___get_global_const(980), ___nl__3, ___get_global_const(985), ___nl__4));
#line 153
c_rt_lib0clear(&___nl__2);
#line 153
c_rt_lib0clear(&___nl__3);
#line 153
c_rt_lib0clear(&___nl__4);
#line 153
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 153
c_rt_lib0clear(&___nl__1);
#line 153
return ___nl__0;
#line 153
c_rt_lib0clear(&___nl__0);
#line 153
return NULL;
}

ImmT tc_types0lval_path0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0lval_path");
return tc_types0lval_path();}
ImmT tc_types0lval_path(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(17);}
ImmT tc_types0lval_path0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 156
c_rt_lib0move(&___nl__3, ptd0sim());
#line 156
c_rt_lib0move(&___nl__4, ptd0none());
#line 156
c_rt_lib0move(&___nl__5, ptd0sim());
#line 156
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(772), ___nl__3, ___get_global_const(277), ___nl__4, ___get_global_const(974), ___nl__5));
#line 156
c_rt_lib0clear(&___nl__3);
#line 156
c_rt_lib0clear(&___nl__4);
#line 156
c_rt_lib0clear(&___nl__5);
#line 156
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 156
c_rt_lib0clear(&___nl__2);
#line 156
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 156
c_rt_lib0clear(&___nl__1);
#line 156
return ___nl__0;
#line 156
c_rt_lib0clear(&___nl__0);
#line 156
return NULL;
}

ImmT tc_types0walk_arg0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0walk_arg");
return tc_types0walk_arg();}
ImmT tc_types0walk_arg(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(18);}
ImmT tc_types0walk_arg0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 159
c_rt_lib0move(&___nl__4, ptd0sim());
#line 159
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 159
c_rt_lib0clear(&___nl__4);
#line 159
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 159
c_rt_lib0clear(&___nl__3);
#line 159
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tc_types0errors_t0ptr, ___get_global_const(14), ___get_global_const(706)));
#line 159
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 159
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0modules_t0ptr, ___get_global_const(14), ___get_global_const(1020)));
#line 159
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 159
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(1021), ___nl__2, ___get_global_const(17), ___nl__3, ___get_global_const(131), ___nl__4));
#line 159
c_rt_lib0clear(&___nl__2);
#line 159
c_rt_lib0clear(&___nl__3);
#line 159
c_rt_lib0clear(&___nl__4);
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

ImmT tc_types0ref_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0ref_t");
return tc_types0ref_t();}
ImmT tc_types0ref_t(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(19);}
ImmT tc_types0ref_t0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 167
c_rt_lib0move(&___nl__2, ptd0sim());
#line 167
c_rt_lib0move(&___nl__5, ptd0sim());
#line 167
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 167
c_rt_lib0clear(&___nl__5);
#line 167
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 167
c_rt_lib0clear(&___nl__4);
#line 167
c_rt_lib0move(&___nl__6, ptd0sim());
#line 167
c_rt_lib0move(&___nl__5, ptd0arr(___nl__6));
#line 167
c_rt_lib0clear(&___nl__6);
#line 167
c_rt_lib0move(&___nl__4, ptd0hash(___nl__5));
#line 167
c_rt_lib0clear(&___nl__5);
#line 167
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(180), ___get_global_const(72)));
#line 167
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 167
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(180), ___get_global_const(72)));
#line 167
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 167
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(982), ___nl__2, ___get_global_const(197), ___nl__3, ___get_global_const(198), ___nl__4, ___get_global_const(983), ___nl__5, ___get_global_const(984), ___nl__6));
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
c_rt_lib0clear(&___nl__3);
#line 167
c_rt_lib0clear(&___nl__4);
#line 167
c_rt_lib0clear(&___nl__5);
#line 167
c_rt_lib0clear(&___nl__6);
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

ImmT tc_types0stack_info_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0stack_info_type");
return tc_types0stack_info_type();}
ImmT tc_types0stack_info_type(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(20);}
ImmT tc_types0stack_info_type0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 176
c_rt_lib0move(&___nl__2, ptd0none());
#line 176
c_rt_lib0move(&___nl__3, ptd0none());
#line 176
c_rt_lib0move(&___nl__4, ptd0sim());
#line 176
c_rt_lib0move(&___nl__5, ptd0sim());
#line 176
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(948), ___nl__2, ___get_global_const(943), ___nl__3, ___get_global_const(944), ___nl__4, ___get_global_const(950), ___nl__5));
#line 176
c_rt_lib0clear(&___nl__2);
#line 176
c_rt_lib0clear(&___nl__3);
#line 176
c_rt_lib0clear(&___nl__4);
#line 176
c_rt_lib0clear(&___nl__5);
#line 176
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 176
c_rt_lib0clear(&___nl__1);
#line 176
return ___nl__0;
#line 176
c_rt_lib0clear(&___nl__0);
#line 176
return NULL;
}

ImmT tc_types0check_info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0check_info");
return tc_types0check_info();}
ImmT tc_types0check_info(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(21);}
ImmT tc_types0check_info0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 184
c_rt_lib0move(&___nl__2, ptd0none());
#line 184
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 184
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 184
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(tc_types0stack_info_type0ptr, ___get_global_const(14), ___get_global_const(1022)));
#line 184
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 184
c_rt_lib0move(&___nl__7, ptd0arr(___nl__8));
#line 184
c_rt_lib0clear(&___nl__8);
#line 184
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(197), ___nl__5, ___get_global_const(198), ___nl__6, ___get_global_const(632), ___nl__7));
#line 184
c_rt_lib0clear(&___nl__5);
#line 184
c_rt_lib0clear(&___nl__6);
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 184
c_rt_lib0clear(&___nl__4);
#line 184
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(44), ___nl__2, ___get_global_const(43), ___nl__3));
#line 184
c_rt_lib0clear(&___nl__2);
#line 184
c_rt_lib0clear(&___nl__3);
#line 184
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 184
c_rt_lib0clear(&___nl__1);
#line 184
return ___nl__0;
#line 184
c_rt_lib0clear(&___nl__0);
#line 184
return NULL;
}

ImmT tc_types0special_functions0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0special_functions");
return tc_types0special_functions();}
ImmT tc_types0special_functions(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(22);}
ImmT tc_types0special_functions0cal() {
tc_types_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(1012), ___get_global_const(622)));
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 194
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tc_types0fun_arg_t0ptr, ___get_global_const(14), ___get_global_const(1018)));
#line 194
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 194
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 194
c_rt_lib0clear(&___nl__5);
#line 194
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 194
c_rt_lib0clear(&___nl__3);
#line 194
c_rt_lib0clear(&___nl__4);
#line 194
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 194
c_rt_lib0clear(&___nl__2);
#line 194
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 194
c_rt_lib0clear(&___nl__1);
#line 194
return ___nl__0;
#line 194
c_rt_lib0clear(&___nl__0);
#line 194
return NULL;
}


static ImmT ___const__[24];
static int ___const_init__ = 1;
void tc_types_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[23];


for(int i=0;i<23;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 23);
}}
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
	___const__[13] = tc_types0check_error_t0cal();
	break;
case 14:
	___const__[14] = tc_types0check_errors_t0cal();
	break;
case 15:
	___const__[15] = tc_types0type0cal();
	break;
case 16:
	___const__[16] = tc_types0value_src0cal();
	break;
case 17:
	___const__[17] = tc_types0lval_path0cal();
	break;
case 18:
	___const__[18] = tc_types0walk_arg0cal();
	break;
case 19:
	___const__[19] = tc_types0ref_t0cal();
	break;
case 20:
	___const__[20] = tc_types0stack_info_type0cal();
	break;
case 21:
	___const__[21] = tc_types0check_info0cal();
	break;
case 22:
	___const__[22] = tc_types0special_functions0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
