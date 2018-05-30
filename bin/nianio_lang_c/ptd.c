
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "ptd.h"
#include "hash.h"
#include "array.h"
#include "ov.h"
#include "c_std_lib.h"
#include "ptd.h"
#line 1 "ptd.nl"

static ImmT *__const__f = NULL;
ImmT ptd_priv0__const__sim(int __nr);
ImmT ptd_priv0__const__sing(int __nr);

ImmT ptd_priv0exec(ImmT ___nl__0,ImmT ___nl__1);
ImmT ptd_priv0try_dynamic_cast(ImmT ___nl__0,ImmT ___nl__1);
ImmT ptd_priv0reconstruct(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);


ImmT ptd0arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0arr");
return ptd0arr(_tab[0]);}
ImmT ptd0arr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 12
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(1020), ___nl__0));
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return ___nl__1;
#line 12
c_rt_lib0clear(&___nl__1);
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return NULL;
}

ImmT ptd0rec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0rec");
return ptd0rec(_tab[0]);}
ImmT ptd0rec(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 16
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(1021), ___nl__0));
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return ___nl__1;
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return NULL;
}

ImmT ptd0sim0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0sim");
return ptd0sim();}
ImmT ptd0sim(){
return ptd_priv0__const__sing(0);}
ImmT ptd0sim0cal() {
ImmT ___nl__0 = NULL;
#line 20
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(1022)));
#line 20
return ___nl__0;
#line 20
c_rt_lib0clear(&___nl__0);
#line 20
return NULL;
}

ImmT ptd0none0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0none");
return ptd0none();}
ImmT ptd0none(){
return ptd_priv0__const__sing(1);}
ImmT ptd0none0cal() {
ImmT ___nl__0 = NULL;
#line 24
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(1023)));
#line 24
return ___nl__0;
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
return NULL;
}

ImmT ptd0void0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0void");
return ptd0void();}
ImmT ptd0void(){
return ptd_priv0__const__sing(2);}
ImmT ptd0void0cal() {
ImmT ___nl__0 = NULL;
#line 28
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(1024)));
#line 28
return ___nl__0;
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
return NULL;
}

ImmT ptd0hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0hash");
return ptd0hash(_tab[0]);}
ImmT ptd0hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 32
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(1025), ___nl__0));
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return ___nl__1;
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return NULL;
}

ImmT ptd0ptd_im0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0ptd_im");
return ptd0ptd_im();}
ImmT ptd0ptd_im(){
return ptd_priv0__const__sing(3);}
ImmT ptd0ptd_im0cal() {
ImmT ___nl__0 = NULL;
#line 36
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(1026)));
#line 36
return ___nl__0;
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return NULL;
}

ImmT ptd0var0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0var");
return ptd0var(_tab[0]);}
ImmT ptd0var(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 40
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 41
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 41
label_2:
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 41
if(c_rt_lib0check_true_native(___nl__2)){ goto label_26;}
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 41
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 43
c_rt_lib0copy(&___nl__6, ___nl__3);
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(1023)));
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 43
if(c_rt_lib0check_true_native(___nl__6)){ goto label_15;}
#line 44
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(808)));
#line 44
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 44
c_rt_lib0clear(&___nl__7);
#line 45
goto label_20;
#line 45
label_15:
#line 46
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(809), ___nl__3));
#line 46
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 46
c_rt_lib0clear(&___nl__7);
#line 47
goto label_20;
#line 47
label_20:
#line 47
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__2, ___nl__5));
#line 48
c_rt_lib0clear(&___nl__5);
#line 49
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 49
goto label_2;
#line 49
label_26:
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__4);
#line 50
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(676), ___get_global_const(677)));
#line 50
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 50
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(1027), ___nl__1));
#line 50
c_rt_lib0move(&___nl__2, ptd0ensure_only_static_do_not_touch_without_permission(___nl__3, ___nl__4));
#line 50
c_rt_lib0clear(&___nl__4);
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0clear(&___nl__0);
#line 50
c_rt_lib0clear(&___nl__1);
#line 50
return ___nl__2;
#line 50
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0clear(&___nl__0);
#line 50
return NULL;
}

ImmT ptd0meta_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0meta_type");
return ptd0meta_type();}
ImmT ptd0meta_type(){
return ptd_priv0__const__sing(4);}
ImmT ptd0meta_type0cal() {
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
#line 55
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(676), ___get_global_const(677)));
#line 55
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 55
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 55
c_rt_lib0clear(&___nl__3);
#line 56
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(676), ___get_global_const(677)));
#line 56
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 57
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(676), ___get_global_const(677)));
#line 57
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 58
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(676), ___get_global_const(677)));
#line 58
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 58
c_rt_lib0move(&___nl__9, ptd0none());
#line 58
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(809), ___nl__8, ___get_global_const(808), ___nl__9));
#line 58
c_rt_lib0clear(&___nl__8);
#line 58
c_rt_lib0clear(&___nl__9);
#line 58
c_rt_lib0move(&___nl__6, ptd0var(___nl__7));
#line 58
c_rt_lib0clear(&___nl__7);
#line 58
c_rt_lib0move(&___nl__5, ptd0hash(___nl__6));
#line 58
c_rt_lib0clear(&___nl__6);
#line 60
c_rt_lib0move(&___nl__8, ptd0sim());
#line 61
c_rt_lib0move(&___nl__9, ptd0sim());
#line 61
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(132), ___nl__8, ___get_global_const(93), ___nl__9));
#line 61
c_rt_lib0clear(&___nl__8);
#line 61
c_rt_lib0clear(&___nl__9);
#line 61
c_rt_lib0move(&___nl__6, ptd0rec(___nl__7));
#line 61
c_rt_lib0clear(&___nl__7);
#line 63
c_rt_lib0move(&___nl__7, ptd0none());
#line 64
c_rt_lib0move(&___nl__8, ptd0none());
#line 64
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(7, ___get_global_const(1021), ___nl__2, ___get_global_const(1025), ___nl__3, ___get_global_const(1020), ___nl__4, ___get_global_const(1027), ___nl__5, ___get_global_const(5), ___nl__6, ___get_global_const(1022), ___nl__7, ___get_global_const(1026), ___nl__8));
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
c_rt_lib0clear(&___nl__3);
#line 64
c_rt_lib0clear(&___nl__4);
#line 64
c_rt_lib0clear(&___nl__5);
#line 64
c_rt_lib0clear(&___nl__6);
#line 64
c_rt_lib0clear(&___nl__7);
#line 64
c_rt_lib0clear(&___nl__8);
#line 64
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
return ___nl__0;
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
return NULL;
}

ImmT ptd0ensure0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure");
return ptd0ensure(_tab[0], _tab[1]);}
ImmT ptd0ensure(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 69
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 70
c_rt_lib0move(&___nl__4, ptd0ensure_dyn(___nl__0, ___nl__1, &___nl__2));
#line 70
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 70
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__4));
#line 70
nl_die_arg(___nl__4);
#line 70
label_6:
#line 70
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0clear(&___nl__4);
#line 71
c_rt_lib0clear(&___nl__0);
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
return ___nl__1;
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
c_rt_lib0clear(&___nl__0);
#line 71
c_rt_lib0clear(&___nl__1);
#line 71
return NULL;
}

ImmT ptd0try_ensure0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0try_ensure");
return ptd0try_ensure(_tab[0], _tab[1]);}
ImmT ptd0try_ensure(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 75
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 76
c_rt_lib0move(&___nl__4, ptd0ensure_dyn(___nl__0, ___nl__1, &___nl__2));
#line 76
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 76
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 76
c_rt_lib0clear(&___nl__0);
#line 76
c_rt_lib0clear(&___nl__1);
#line 76
c_rt_lib0clear(&___nl__2);
#line 76
c_rt_lib0clear(&___nl__3);
#line 76
return ___nl__4;
#line 76
label_9:
#line 76
c_rt_lib0clear(&___nl__3);
#line 76
c_rt_lib0clear(&___nl__4);
#line 77
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 77
c_rt_lib0clear(&___nl__0);
#line 77
c_rt_lib0clear(&___nl__1);
#line 77
c_rt_lib0clear(&___nl__2);
#line 77
return ___nl__3;
#line 77
c_rt_lib0clear(&___nl__3);
#line 77
c_rt_lib0clear(&___nl__2);
#line 77
c_rt_lib0clear(&___nl__0);
#line 77
c_rt_lib0clear(&___nl__1);
#line 77
return NULL;
}

ImmT ptd0ensure_only_dynamic0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_only_dynamic");
return ptd0ensure_only_dynamic(_tab[0], _tab[1]);}
ImmT ptd0ensure_only_dynamic(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 81
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 82
c_rt_lib0move(&___nl__4, ptd0ensure_dyn(___nl__0, ___nl__1, &___nl__2));
#line 82
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 82
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 82
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__4));
#line 82
nl_die_arg(___nl__4);
#line 82
label_6:
#line 82
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0clear(&___nl__4);
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
return ___nl__1;
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
return NULL;
}

ImmT ptd0ensure_only_static_do_not_touch_without_permission0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_only_static_do_not_touch_without_permission");
return ptd0ensure_only_static_do_not_touch_without_permission(_tab[0], _tab[1]);}
ImmT ptd0ensure_only_static_do_not_touch_without_permission(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
#line 88
c_rt_lib0clear(&___nl__0);
#line 88
return ___nl__1;
#line 88
c_rt_lib0clear(&___nl__0);
#line 88
c_rt_lib0clear(&___nl__1);
#line 88
return NULL;
}

ImmT ptd0ensure_dyn0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd0ensure_dyn");
return ptd0ensure_dyn(_tab[0], _tab[1], &_tab[2]);}
ImmT ptd0ensure_dyn(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 92
c_rt_lib0move(&___nl__3, c_std_lib0is_variant(___nl__0));
#line 92
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 92
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 92
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 92
c_rt_lib0move(&___nl__5,___get_global_const(1028));
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__5, ___get_global_const(1029), *___ref___2));
#line 92
c_rt_lib0clear(&___nl__5);
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__4));
#line 92
c_rt_lib0clear(&___nl__0);
#line 92
c_rt_lib0clear(&___nl__1);
#line 92
c_rt_lib0clear(&___nl__3);
#line 92
return ___nl__4;
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
goto label_14;
#line 92
label_14:
#line 92
c_rt_lib0clear(&___nl__3);
#line 93
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(1025)));
#line 93
if(c_rt_lib0check_true_native(___nl__3)){ goto label_33;}
#line 100
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(1020)));
#line 100
if(c_rt_lib0check_true_native(___nl__3)){ goto label_84;}
#line 107
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(1021)));
#line 107
if(c_rt_lib0check_true_native(___nl__3)){ goto label_142;}
#line 118
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(1022)));
#line 118
if(c_rt_lib0check_true_native(___nl__3)){ goto label_245;}
#line 120
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(1027)));
#line 120
if(c_rt_lib0check_true_native(___nl__3)){ goto label_264;}
#line 133
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(1026)));
#line 133
if(c_rt_lib0check_true_native(___nl__3)){ goto label_385;}
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(5)));
#line 134
if(c_rt_lib0check_true_native(___nl__3)){ goto label_387;}
#line 134
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 134
nl_die_arg(___nl__3);
#line 93
label_33:
#line 93
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(1025)));
#line 94
c_rt_lib0move(&___nl__5, c_std_lib0is_hash(___nl__1));
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 94
if(c_rt_lib0check_true_native(___nl__5)){ goto label_51;}
#line 94
c_rt_lib0move(&___nl__7,___get_global_const(1030));
#line 94
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__7, ___get_global_const(1029), *___ref___2));
#line 94
c_rt_lib0clear(&___nl__7);
#line 94
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__6));
#line 94
c_rt_lib0clear(&___nl__0);
#line 94
c_rt_lib0clear(&___nl__1);
#line 94
c_rt_lib0clear(&___nl__3);
#line 94
c_rt_lib0clear(&___nl__4);
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
return ___nl__6;
#line 94
c_rt_lib0clear(&___nl__6);
#line 94
goto label_51;
#line 94
label_51:
#line 94
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__1));
#line 95
label_54:
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 95
if(c_rt_lib0check_true_native(___nl__5)){ goto label_78;}
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 95
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__1, ___nl__5));
#line 96
c_rt_lib0delete(c_rt_lib0array_push(___ref___2, ___nl__5));
#line 97
c_rt_lib0move(&___nl__9, ptd0ensure_dyn(___nl__4, ___nl__6, ___ref___2));
#line 97
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__9, ___get_global_const(48)));
#line 97
if(c_rt_lib0check_true_native(___nl__8)){ goto label_72;}
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
c_rt_lib0clear(&___nl__1);
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
c_rt_lib0clear(&___nl__8);
#line 97
return ___nl__9;
#line 97
label_72:
#line 97
c_rt_lib0clear(&___nl__8);
#line 97
c_rt_lib0clear(&___nl__9);
#line 98
c_rt_lib0delete(array0pop(___ref___2));
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 99
goto label_54;
#line 99
label_78:
#line 99
c_rt_lib0clear(&___nl__5);
#line 99
c_rt_lib0clear(&___nl__6);
#line 99
c_rt_lib0clear(&___nl__7);
#line 99
c_rt_lib0clear(&___nl__4);
#line 100
goto label_404;
#line 100
label_84:
#line 100
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(1020)));
#line 101
c_rt_lib0move(&___nl__5, c_std_lib0is_array(___nl__1));
#line 101
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 101
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 101
if(c_rt_lib0check_true_native(___nl__5)){ goto label_102;}
#line 101
c_rt_lib0move(&___nl__7,___get_global_const(1031));
#line 101
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__7, ___get_global_const(1029), *___ref___2));
#line 101
c_rt_lib0clear(&___nl__7);
#line 101
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__6));
#line 101
c_rt_lib0clear(&___nl__0);
#line 101
c_rt_lib0clear(&___nl__1);
#line 101
c_rt_lib0clear(&___nl__3);
#line 101
c_rt_lib0clear(&___nl__4);
#line 101
c_rt_lib0clear(&___nl__5);
#line 101
return ___nl__6;
#line 101
c_rt_lib0clear(&___nl__6);
#line 101
goto label_102;
#line 101
label_102:
#line 101
c_rt_lib0clear(&___nl__5);
#line 102
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 102
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 102
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__1));
#line 102
label_107:
#line 102
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 102
if(c_rt_lib0check_true_native(___nl__9)){ goto label_134;}
#line 102
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__1, ___nl__6));
#line 103
c_rt_lib0move(&___nl__10,___get_global_const(1032));
#line 103
c_rt_lib0delete(c_rt_lib0array_push(___ref___2, ___nl__10));
#line 103
c_rt_lib0clear(&___nl__10);
#line 104
c_rt_lib0move(&___nl__11, ptd0ensure_dyn(___nl__4, ___nl__5, ___ref___2));
#line 104
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(48)));
#line 104
if(c_rt_lib0check_true_native(___nl__10)){ goto label_128;}
#line 104
c_rt_lib0clear(&___nl__0);
#line 104
c_rt_lib0clear(&___nl__1);
#line 104
c_rt_lib0clear(&___nl__3);
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0clear(&___nl__5);
#line 104
c_rt_lib0clear(&___nl__6);
#line 104
c_rt_lib0clear(&___nl__7);
#line 104
c_rt_lib0clear(&___nl__8);
#line 104
c_rt_lib0clear(&___nl__9);
#line 104
c_rt_lib0clear(&___nl__10);
#line 104
return ___nl__11;
#line 104
label_128:
#line 104
c_rt_lib0clear(&___nl__10);
#line 104
c_rt_lib0clear(&___nl__11);
#line 105
c_rt_lib0delete(array0pop(___ref___2));
#line 106
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 106
goto label_107;
#line 106
label_134:
#line 106
c_rt_lib0clear(&___nl__5);
#line 106
c_rt_lib0clear(&___nl__6);
#line 106
c_rt_lib0clear(&___nl__7);
#line 106
c_rt_lib0clear(&___nl__8);
#line 106
c_rt_lib0clear(&___nl__9);
#line 106
c_rt_lib0clear(&___nl__4);
#line 107
goto label_404;
#line 107
label_142:
#line 107
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(1021)));
#line 108
c_rt_lib0move(&___nl__5, c_std_lib0is_hash(___nl__1));
#line 108
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 108
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 108
if(c_rt_lib0check_true_native(___nl__5)){ goto label_160;}
#line 108
c_rt_lib0move(&___nl__7,___get_global_const(1033));
#line 108
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__7, ___get_global_const(1029), *___ref___2));
#line 108
c_rt_lib0clear(&___nl__7);
#line 108
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__6));
#line 108
c_rt_lib0clear(&___nl__0);
#line 108
c_rt_lib0clear(&___nl__1);
#line 108
c_rt_lib0clear(&___nl__3);
#line 108
c_rt_lib0clear(&___nl__4);
#line 108
c_rt_lib0clear(&___nl__5);
#line 108
return ___nl__6;
#line 108
c_rt_lib0clear(&___nl__6);
#line 108
goto label_160;
#line 108
label_160:
#line 108
c_rt_lib0clear(&___nl__5);
#line 109
c_rt_lib0move(&___nl__5, hash0size(___nl__4));
#line 109
c_rt_lib0move(&___nl__6, hash0size(___nl__1));
#line 109
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 109
c_rt_lib0clear(&___nl__6);
#line 109
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 109
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 109
if(c_rt_lib0check_true_native(___nl__5)){ goto label_181;}
#line 109
c_rt_lib0move(&___nl__7,___get_global_const(1034));
#line 109
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__7, ___get_global_const(1029), *___ref___2));
#line 109
c_rt_lib0clear(&___nl__7);
#line 109
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__6));
#line 109
c_rt_lib0clear(&___nl__0);
#line 109
c_rt_lib0clear(&___nl__1);
#line 109
c_rt_lib0clear(&___nl__3);
#line 109
c_rt_lib0clear(&___nl__4);
#line 109
c_rt_lib0clear(&___nl__5);
#line 109
return ___nl__6;
#line 109
c_rt_lib0clear(&___nl__6);
#line 109
goto label_181;
#line 109
label_181:
#line 109
c_rt_lib0clear(&___nl__5);
#line 110
c_rt_lib0move(&___nl__5,___get_global_const(1035));
#line 110
c_rt_lib0delete(c_rt_lib0array_push(___ref___2, ___nl__5));
#line 110
c_rt_lib0clear(&___nl__5);
#line 111
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 111
label_187:
#line 111
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 111
if(c_rt_lib0check_true_native(___nl__5)){ goto label_238;}
#line 111
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 111
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 112
c_rt_lib0delete(c_rt_lib0array_push(___ref___2, ___nl__5));
#line 113
c_rt_lib0move(&___nl__8, hash0has_key(___nl__1, ___nl__5));
#line 113
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 113
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 113
if(c_rt_lib0check_true_native(___nl__8)){ goto label_216;}
#line 113
c_rt_lib0move(&___nl__10,___get_global_const(1036));
#line 113
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__5));
#line 113
c_rt_lib0move(&___nl__11,___get_global_const(1037));
#line 113
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 113
c_rt_lib0clear(&___nl__11);
#line 113
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__10, ___get_global_const(1029), *___ref___2));
#line 113
c_rt_lib0clear(&___nl__10);
#line 113
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__9));
#line 113
c_rt_lib0clear(&___nl__0);
#line 113
c_rt_lib0clear(&___nl__1);
#line 113
c_rt_lib0clear(&___nl__3);
#line 113
c_rt_lib0clear(&___nl__4);
#line 113
c_rt_lib0clear(&___nl__5);
#line 113
c_rt_lib0clear(&___nl__6);
#line 113
c_rt_lib0clear(&___nl__7);
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
return ___nl__9;
#line 113
c_rt_lib0clear(&___nl__9);
#line 113
goto label_216;
#line 113
label_216:
#line 113
c_rt_lib0clear(&___nl__8);
#line 114
c_rt_lib0move(&___nl__10, hash0get_value(___nl__1, ___nl__5));
#line 114
c_rt_lib0move(&___nl__9, ptd0ensure_dyn(___nl__6, ___nl__10, ___ref___2));
#line 114
c_rt_lib0clear(&___nl__10);
#line 114
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__9, ___get_global_const(48)));
#line 114
if(c_rt_lib0check_true_native(___nl__8)){ goto label_232;}
#line 114
c_rt_lib0clear(&___nl__0);
#line 114
c_rt_lib0clear(&___nl__1);
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0clear(&___nl__5);
#line 114
c_rt_lib0clear(&___nl__6);
#line 114
c_rt_lib0clear(&___nl__7);
#line 114
c_rt_lib0clear(&___nl__8);
#line 114
return ___nl__9;
#line 114
label_232:
#line 114
c_rt_lib0clear(&___nl__8);
#line 114
c_rt_lib0clear(&___nl__9);
#line 115
c_rt_lib0delete(array0pop(___ref___2));
#line 116
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 116
goto label_187;
#line 116
label_238:
#line 116
c_rt_lib0clear(&___nl__5);
#line 116
c_rt_lib0clear(&___nl__6);
#line 116
c_rt_lib0clear(&___nl__7);
#line 117
c_rt_lib0delete(array0pop(___ref___2));
#line 117
c_rt_lib0clear(&___nl__4);
#line 118
goto label_404;
#line 118
label_245:
#line 119
c_rt_lib0move(&___nl__4, c_std_lib0is_sim(___nl__1));
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 119
if(c_rt_lib0check_true_native(___nl__4)){ goto label_261;}
#line 119
c_rt_lib0move(&___nl__6,___get_global_const(1038));
#line 119
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__6, ___get_global_const(1029), *___ref___2));
#line 119
c_rt_lib0clear(&___nl__6);
#line 119
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__5));
#line 119
c_rt_lib0clear(&___nl__0);
#line 119
c_rt_lib0clear(&___nl__1);
#line 119
c_rt_lib0clear(&___nl__3);
#line 119
c_rt_lib0clear(&___nl__4);
#line 119
return ___nl__5;
#line 119
c_rt_lib0clear(&___nl__5);
#line 119
goto label_261;
#line 119
label_261:
#line 119
c_rt_lib0clear(&___nl__4);
#line 120
goto label_404;
#line 120
label_264:
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(1027)));
#line 121
c_rt_lib0move(&___nl__5, c_std_lib0is_variant(___nl__1));
#line 121
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 121
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 121
if(c_rt_lib0check_true_native(___nl__5)){ goto label_282;}
#line 121
c_rt_lib0move(&___nl__7,___get_global_const(1039));
#line 121
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__7, ___get_global_const(1029), *___ref___2));
#line 121
c_rt_lib0clear(&___nl__7);
#line 121
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__6));
#line 121
c_rt_lib0clear(&___nl__0);
#line 121
c_rt_lib0clear(&___nl__1);
#line 121
c_rt_lib0clear(&___nl__3);
#line 121
c_rt_lib0clear(&___nl__4);
#line 121
c_rt_lib0clear(&___nl__5);
#line 121
return ___nl__6;
#line 121
c_rt_lib0clear(&___nl__6);
#line 121
goto label_282;
#line 121
label_282:
#line 121
c_rt_lib0clear(&___nl__5);
#line 122
c_rt_lib0move(&___nl__5, ov0get_element(___nl__1));
#line 123
c_rt_lib0move(&___nl__6, hash0has_key(___nl__4, ___nl__5));
#line 123
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 123
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 123
if(c_rt_lib0check_true_native(___nl__6)){ goto label_306;}
#line 123
c_rt_lib0move(&___nl__8,___get_global_const(1040));
#line 123
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 123
c_rt_lib0move(&___nl__9,___get_global_const(1041));
#line 123
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 123
c_rt_lib0clear(&___nl__9);
#line 123
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__8, ___get_global_const(1029), *___ref___2));
#line 123
c_rt_lib0clear(&___nl__8);
#line 123
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__7));
#line 123
c_rt_lib0clear(&___nl__0);
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0clear(&___nl__5);
#line 123
c_rt_lib0clear(&___nl__6);
#line 123
return ___nl__7;
#line 123
c_rt_lib0clear(&___nl__7);
#line 123
goto label_306;
#line 123
label_306:
#line 123
c_rt_lib0clear(&___nl__6);
#line 124
c_rt_lib0delete(c_rt_lib0array_push(___ref___2, ___nl__5));
#line 125
c_rt_lib0move(&___nl__6, hash0get_value(___nl__4, ___nl__5));
#line 126
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(809)));
#line 126
if(c_rt_lib0check_true_native(___nl__7)){ goto label_317;}
#line 129
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(808)));
#line 129
if(c_rt_lib0check_true_native(___nl__7)){ goto label_356;}
#line 129
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 129
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 129
nl_die_arg(___nl__7);
#line 126
label_317:
#line 126
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(809)));
#line 127
c_rt_lib0move(&___nl__9, ov0has_value(___nl__1));
#line 127
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 127
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 127
if(c_rt_lib0check_true_native(___nl__9)){ goto label_339;}
#line 127
c_rt_lib0move(&___nl__11,___get_global_const(1042));
#line 127
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__11, ___get_global_const(1029), *___ref___2));
#line 127
c_rt_lib0clear(&___nl__11);
#line 127
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__10));
#line 127
c_rt_lib0clear(&___nl__0);
#line 127
c_rt_lib0clear(&___nl__1);
#line 127
c_rt_lib0clear(&___nl__3);
#line 127
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0clear(&___nl__5);
#line 127
c_rt_lib0clear(&___nl__6);
#line 127
c_rt_lib0clear(&___nl__7);
#line 127
c_rt_lib0clear(&___nl__8);
#line 127
c_rt_lib0clear(&___nl__9);
#line 127
return ___nl__10;
#line 127
c_rt_lib0clear(&___nl__10);
#line 127
goto label_339;
#line 127
label_339:
#line 127
c_rt_lib0clear(&___nl__9);
#line 128
c_rt_lib0move(&___nl__10, ov0get_value(___nl__1));
#line 128
c_rt_lib0move(&___nl__9, ptd0ensure_dyn(___nl__8, ___nl__10, ___ref___2));
#line 128
c_rt_lib0clear(&___nl__10);
#line 128
c_rt_lib0clear(&___nl__0);
#line 128
c_rt_lib0clear(&___nl__1);
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0clear(&___nl__5);
#line 128
c_rt_lib0clear(&___nl__6);
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0clear(&___nl__8);
#line 128
return ___nl__9;
#line 128
c_rt_lib0clear(&___nl__9);
#line 128
c_rt_lib0clear(&___nl__8);
#line 129
goto label_378;
#line 129
label_356:
#line 130
c_rt_lib0move(&___nl__8, ov0has_value(___nl__1));
#line 130
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 130
if(c_rt_lib0check_true_native(___nl__8)){ goto label_375;}
#line 130
c_rt_lib0move(&___nl__10,___get_global_const(1043));
#line 130
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__10, ___get_global_const(1029), *___ref___2));
#line 130
c_rt_lib0clear(&___nl__10);
#line 130
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__9));
#line 130
c_rt_lib0clear(&___nl__0);
#line 130
c_rt_lib0clear(&___nl__1);
#line 130
c_rt_lib0clear(&___nl__3);
#line 130
c_rt_lib0clear(&___nl__4);
#line 130
c_rt_lib0clear(&___nl__5);
#line 130
c_rt_lib0clear(&___nl__6);
#line 130
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0clear(&___nl__8);
#line 130
return ___nl__9;
#line 130
c_rt_lib0clear(&___nl__9);
#line 130
goto label_375;
#line 130
label_375:
#line 130
c_rt_lib0clear(&___nl__8);
#line 131
goto label_378;
#line 131
label_378:
#line 131
c_rt_lib0clear(&___nl__7);
#line 132
c_rt_lib0delete(array0pop(___ref___2));
#line 132
c_rt_lib0clear(&___nl__5);
#line 132
c_rt_lib0clear(&___nl__6);
#line 132
c_rt_lib0clear(&___nl__4);
#line 133
goto label_404;
#line 133
label_385:
#line 134
goto label_404;
#line 134
label_387:
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(5)));
#line 135
c_rt_lib0delete(c_rt_lib0array_push(___ref___2, ___nl__4));
#line 136
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 136
c_rt_lib0move(&___nl__6, ptd_priv0exec(___nl__0, ___nl__7));
#line 136
c_rt_lib0clear(&___nl__7);
#line 136
c_rt_lib0move(&___nl__5, ptd0ensure_dyn(___nl__6, ___nl__1, ___ref___2));
#line 136
c_rt_lib0clear(&___nl__6);
#line 137
c_rt_lib0delete(array0pop(___ref___2));
#line 138
c_rt_lib0clear(&___nl__0);
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
c_rt_lib0clear(&___nl__4);
#line 138
return ___nl__5;
#line 138
c_rt_lib0clear(&___nl__5);
#line 138
c_rt_lib0clear(&___nl__4);
#line 139
goto label_404;
#line 139
label_404:
#line 139
c_rt_lib0clear(&___nl__3);
#line 140
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 140
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 140
c_rt_lib0clear(&___nl__0);
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
return ___nl__3;
#line 140
c_rt_lib0clear(&___nl__3);
#line 140
c_rt_lib0clear(&___nl__0);
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
return NULL;
}

ImmT ptd0is_ref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0is_ref_type");
return ptd0is_ref_type(_tab[0], _tab[1]);}
ImmT ptd0is_ref_type(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 144
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(5)));
#line 144
if(c_rt_lib0check_true_native(___nl__2)){ goto label_17;}
#line 154
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1026)));
#line 154
if(c_rt_lib0check_true_native(___nl__2)){ goto label_105;}
#line 155
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1022)));
#line 155
if(c_rt_lib0check_true_native(___nl__2)){ goto label_107;}
#line 156
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1020)));
#line 156
if(c_rt_lib0check_true_native(___nl__2)){ goto label_109;}
#line 157
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1027)));
#line 157
if(c_rt_lib0check_true_native(___nl__2)){ goto label_113;}
#line 158
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1021)));
#line 158
if(c_rt_lib0check_true_native(___nl__2)){ goto label_117;}
#line 159
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1025)));
#line 159
if(c_rt_lib0check_true_native(___nl__2)){ goto label_121;}
#line 159
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 159
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 159
nl_die_arg(___nl__2);
#line 144
label_17:
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(5)));
#line 145
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 145
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(5)));
#line 145
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 145
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 145
if(c_rt_lib0check_true_native(___nl__4)){ goto label_33;}
#line 145
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
c_rt_lib0clear(&___nl__2);
#line 145
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0clear(&___nl__4);
#line 145
return ___nl__5;
#line 145
c_rt_lib0clear(&___nl__5);
#line 145
goto label_33;
#line 145
label_33:
#line 145
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(5)));
#line 147
c_rt_lib0move(&___nl__5, c_std_lib0is_hash(___nl__4));
#line 147
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 147
if(c_rt_lib0check_true_native(___nl__5)){ goto label_81;}
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(132)));
#line 148
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(132)));
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 148
if(c_rt_lib0check_true_native(___nl__6)){ goto label_58;}
#line 148
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 148
c_rt_lib0clear(&___nl__0);
#line 148
c_rt_lib0clear(&___nl__1);
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
c_rt_lib0clear(&___nl__4);
#line 148
c_rt_lib0clear(&___nl__5);
#line 148
c_rt_lib0clear(&___nl__6);
#line 148
return ___nl__7;
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
goto label_58;
#line 148
label_58:
#line 148
c_rt_lib0clear(&___nl__6);
#line 149
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 149
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 149
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 149
c_rt_lib0clear(&___nl__7);
#line 149
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 149
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 149
if(c_rt_lib0check_true_native(___nl__6)){ goto label_78;}
#line 149
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 149
c_rt_lib0clear(&___nl__0);
#line 149
c_rt_lib0clear(&___nl__1);
#line 149
c_rt_lib0clear(&___nl__2);
#line 149
c_rt_lib0clear(&___nl__3);
#line 149
c_rt_lib0clear(&___nl__4);
#line 149
c_rt_lib0clear(&___nl__5);
#line 149
c_rt_lib0clear(&___nl__6);
#line 149
return ___nl__7;
#line 149
c_rt_lib0clear(&___nl__7);
#line 149
goto label_78;
#line 149
label_78:
#line 149
c_rt_lib0clear(&___nl__6);
#line 150
goto label_92;
#line 150
label_81:
#line 151
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__3));
#line 151
c_rt_lib0clear(&___nl__0);
#line 151
c_rt_lib0clear(&___nl__1);
#line 151
c_rt_lib0clear(&___nl__2);
#line 151
c_rt_lib0clear(&___nl__3);
#line 151
c_rt_lib0clear(&___nl__4);
#line 151
c_rt_lib0clear(&___nl__5);
#line 151
return ___nl__6;
#line 151
c_rt_lib0clear(&___nl__6);
#line 152
goto label_92;
#line 152
label_92:
#line 152
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 153
c_rt_lib0clear(&___nl__0);
#line 153
c_rt_lib0clear(&___nl__1);
#line 153
c_rt_lib0clear(&___nl__2);
#line 153
c_rt_lib0clear(&___nl__3);
#line 153
c_rt_lib0clear(&___nl__4);
#line 153
return ___nl__5;
#line 153
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0clear(&___nl__4);
#line 153
c_rt_lib0clear(&___nl__3);
#line 154
goto label_125;
#line 154
label_105:
#line 155
goto label_125;
#line 155
label_107:
#line 156
goto label_125;
#line 156
label_109:
#line 156
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(1020)));
#line 156
c_rt_lib0clear(&___nl__3);
#line 157
goto label_125;
#line 157
label_113:
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(1027)));
#line 157
c_rt_lib0clear(&___nl__3);
#line 158
goto label_125;
#line 158
label_117:
#line 158
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(1021)));
#line 158
c_rt_lib0clear(&___nl__3);
#line 159
goto label_125;
#line 159
label_121:
#line 159
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(1025)));
#line 159
c_rt_lib0clear(&___nl__3);
#line 160
goto label_125;
#line 160
label_125:
#line 160
c_rt_lib0clear(&___nl__2);
#line 161
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 161
c_rt_lib0clear(&___nl__0);
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
return ___nl__2;
#line 161
c_rt_lib0clear(&___nl__2);
#line 161
c_rt_lib0clear(&___nl__0);
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
return NULL;
}

ImmT ptd_priv0exec(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 165
c_rt_lib0move(&___nl__2, c_std_lib0exec(___nl__0, &___nl__1));
#line 165
c_rt_lib0clear(&___nl__0);
#line 165
c_rt_lib0clear(&___nl__1);
#line 165
return ___nl__2;
#line 165
c_rt_lib0clear(&___nl__2);
#line 165
c_rt_lib0clear(&___nl__0);
#line 165
c_rt_lib0clear(&___nl__1);
#line 165
return NULL;
}

ImmT ptd0cast_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0cast_t");
return ptd0cast_t();}
ImmT ptd0cast_t(){
return ptd_priv0__const__sing(5);}
ImmT ptd0cast_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 170
c_rt_lib0move(&___nl__2, ptd0ptd_im());
#line 171
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(ptd0cast_error_t0ptr, ___get_global_const(676), ___get_global_const(1044)));
#line 171
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 171
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__2, ___get_global_const(47), ___nl__3));
#line 171
c_rt_lib0clear(&___nl__2);
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 171
c_rt_lib0clear(&___nl__1);
#line 171
return ___nl__0;
#line 171
c_rt_lib0clear(&___nl__0);
#line 171
return NULL;
}

ImmT ptd0try_cast0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0try_cast");
return ptd0try_cast(_tab[0], _tab[1]);}
ImmT ptd0try_cast(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 176
c_rt_lib0move(&___nl__2, ptd0try_dynamic_cast(___nl__0, ___nl__1));
#line 176
c_rt_lib0clear(&___nl__0);
#line 176
c_rt_lib0clear(&___nl__1);
#line 176
return ___nl__2;
#line 176
c_rt_lib0clear(&___nl__2);
#line 176
c_rt_lib0clear(&___nl__0);
#line 176
c_rt_lib0clear(&___nl__1);
#line 176
return NULL;
}

ImmT ptd0try_dynamic_cast0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0try_dynamic_cast");
return ptd0try_dynamic_cast(_tab[0], _tab[1]);}
ImmT ptd0try_dynamic_cast(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 179
c_rt_lib0move(&___nl__2, ptd_priv0try_dynamic_cast(___nl__0, ___nl__1));
#line 180
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 180
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 180
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 181
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__1));
#line 181
c_rt_lib0clear(&___nl__0);
#line 181
c_rt_lib0clear(&___nl__1);
#line 181
c_rt_lib0clear(&___nl__2);
#line 181
c_rt_lib0clear(&___nl__3);
#line 181
return ___nl__4;
#line 181
c_rt_lib0clear(&___nl__4);
#line 182
goto label_15;
#line 182
label_15:
#line 182
c_rt_lib0clear(&___nl__3);
#line 183
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__2));
#line 183
c_rt_lib0clear(&___nl__0);
#line 183
c_rt_lib0clear(&___nl__1);
#line 183
c_rt_lib0clear(&___nl__2);
#line 183
return ___nl__3;
#line 183
c_rt_lib0clear(&___nl__3);
#line 183
c_rt_lib0clear(&___nl__2);
#line 183
c_rt_lib0clear(&___nl__0);
#line 183
c_rt_lib0clear(&___nl__1);
#line 183
return NULL;
}

ImmT ptd0imm_kind_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0imm_kind_t");
return ptd0imm_kind_t();}
ImmT ptd0imm_kind_t(){
return ptd_priv0__const__sing(6);}
ImmT ptd0imm_kind_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 188
c_rt_lib0move(&___nl__2, ptd0none());
#line 189
c_rt_lib0move(&___nl__3, ptd0none());
#line 190
c_rt_lib0move(&___nl__4, ptd0none());
#line 191
c_rt_lib0move(&___nl__5, ptd0none());
#line 191
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(337), ___nl__2, ___get_global_const(328), ___nl__3, ___get_global_const(840), ___nl__4, ___get_global_const(3), ___nl__5));
#line 191
c_rt_lib0clear(&___nl__2);
#line 191
c_rt_lib0clear(&___nl__3);
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 191
c_rt_lib0clear(&___nl__1);
#line 191
return ___nl__0;
#line 191
c_rt_lib0clear(&___nl__0);
#line 191
return NULL;
}

ImmT ptd0cast_error_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0cast_error_t");
return ptd0cast_error_t();}
ImmT ptd0cast_error_t(){
return ptd_priv0__const__sing(7);}
ImmT ptd0cast_error_t0cal() {
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
#line 198
c_rt_lib0move(&___nl__5, ptd0sim());
#line 199
c_rt_lib0move(&___nl__6, ptd0sim());
#line 200
c_rt_lib0move(&___nl__7, ptd0sim());
#line 201
c_rt_lib0move(&___nl__8, ptd0sim());
#line 202
c_rt_lib0move(&___nl__9, ptd0ptd_im());
#line 202
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(855), ___nl__5, ___get_global_const(1045), ___nl__6, ___get_global_const(1046), ___nl__7, ___get_global_const(1047), ___nl__8, ___get_global_const(1048), ___nl__9));
#line 202
c_rt_lib0clear(&___nl__5);
#line 202
c_rt_lib0clear(&___nl__6);
#line 202
c_rt_lib0clear(&___nl__7);
#line 202
c_rt_lib0clear(&___nl__8);
#line 202
c_rt_lib0clear(&___nl__9);
#line 202
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 202
c_rt_lib0clear(&___nl__4);
#line 205
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(676), ___get_global_const(1049)));
#line 205
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 206
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(676), ___get_global_const(1049)));
#line 206
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 207
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(676), ___get_global_const(1049)));
#line 207
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 208
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(676), ___get_global_const(1049)));
#line 208
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 209
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(676), ___get_global_const(1049)));
#line 209
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 210
c_rt_lib0move(&___nl__11, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(676), ___get_global_const(1049)));
#line 210
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__11));
#line 211
c_rt_lib0move(&___nl__12, ptd0sim());
#line 212
c_rt_lib0move(&___nl__13, ptd0sim());
#line 213
c_rt_lib0move(&___nl__14, ptd0sim());
#line 214
c_rt_lib0move(&___nl__15, ptd0sim());
#line 215
c_rt_lib0move(&___nl__16, ptd0sim());
#line 215
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(11, ___get_global_const(1050), ___nl__6, ___get_global_const(1051), ___nl__7, ___get_global_const(1052), ___nl__8, ___get_global_const(1053), ___nl__9, ___get_global_const(1054), ___nl__10, ___get_global_const(1055), ___nl__11, ___get_global_const(1056), ___nl__12, ___get_global_const(1057), ___nl__13, ___get_global_const(1058), ___nl__14, ___get_global_const(1059), ___nl__15, ___get_global_const(1060), ___nl__16));
#line 215
c_rt_lib0clear(&___nl__6);
#line 215
c_rt_lib0clear(&___nl__7);
#line 215
c_rt_lib0clear(&___nl__8);
#line 215
c_rt_lib0clear(&___nl__9);
#line 215
c_rt_lib0clear(&___nl__10);
#line 215
c_rt_lib0clear(&___nl__11);
#line 215
c_rt_lib0clear(&___nl__12);
#line 215
c_rt_lib0clear(&___nl__13);
#line 215
c_rt_lib0clear(&___nl__14);
#line 215
c_rt_lib0clear(&___nl__15);
#line 215
c_rt_lib0clear(&___nl__16);
#line 215
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 215
c_rt_lib0clear(&___nl__5);
#line 215
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(1029), ___nl__3, ___get_global_const(112), ___nl__4));
#line 215
c_rt_lib0clear(&___nl__3);
#line 215
c_rt_lib0clear(&___nl__4);
#line 215
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 215
c_rt_lib0clear(&___nl__2);
#line 215
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 215
c_rt_lib0clear(&___nl__1);
#line 215
return ___nl__0;
#line 215
c_rt_lib0clear(&___nl__0);
#line 215
return NULL;
}

ImmT ptd0get_imm_kind0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0get_imm_kind");
return ptd0get_imm_kind(_tab[0]);}
ImmT ptd0get_imm_kind(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 220
c_rt_lib0move(&___nl__1, c_std_lib0is_sim(___nl__0));
#line 220
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 220
if(c_rt_lib0check_true_native(___nl__1)){ goto label_9;}
#line 220
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(337)));
#line 220
c_rt_lib0clear(&___nl__0);
#line 220
c_rt_lib0clear(&___nl__1);
#line 220
return ___nl__2;
#line 220
c_rt_lib0clear(&___nl__2);
#line 220
goto label_9;
#line 220
label_9:
#line 220
c_rt_lib0clear(&___nl__1);
#line 221
c_rt_lib0move(&___nl__1, c_std_lib0is_variant(___nl__0));
#line 221
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 221
if(c_rt_lib0check_true_native(___nl__1)){ goto label_20;}
#line 221
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(840)));
#line 221
c_rt_lib0clear(&___nl__0);
#line 221
c_rt_lib0clear(&___nl__1);
#line 221
return ___nl__2;
#line 221
c_rt_lib0clear(&___nl__2);
#line 221
goto label_20;
#line 221
label_20:
#line 221
c_rt_lib0clear(&___nl__1);
#line 222
c_rt_lib0move(&___nl__1, c_std_lib0is_hash(___nl__0));
#line 222
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 222
if(c_rt_lib0check_true_native(___nl__1)){ goto label_31;}
#line 222
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 222
c_rt_lib0clear(&___nl__0);
#line 222
c_rt_lib0clear(&___nl__1);
#line 222
return ___nl__2;
#line 222
c_rt_lib0clear(&___nl__2);
#line 222
goto label_31;
#line 222
label_31:
#line 222
c_rt_lib0clear(&___nl__1);
#line 223
c_rt_lib0move(&___nl__1, c_std_lib0is_array(___nl__0));
#line 223
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 223
if(c_rt_lib0check_true_native(___nl__1)){ goto label_42;}
#line 223
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(3)));
#line 223
c_rt_lib0clear(&___nl__0);
#line 223
c_rt_lib0clear(&___nl__1);
#line 223
return ___nl__2;
#line 223
c_rt_lib0clear(&___nl__2);
#line 223
goto label_42;
#line 223
label_42:
#line 223
c_rt_lib0clear(&___nl__1);
#line 224
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 224
nl_die_arg(___nl__1);
#line 224
c_rt_lib0clear(&___nl__1);
#line 224
c_rt_lib0clear(&___nl__0);
#line 224
return NULL;
}

ImmT ptd_priv0try_dynamic_cast(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 227
c_rt_lib0move(&___nl__2, c_std_lib0is_variant(___nl__0));
#line 227
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 227
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 227
if(c_rt_lib0check_true_native(___nl__2)){ goto label_15;}
#line 227
c_rt_lib0move(&___nl__4, ptd0get_imm_kind(___nl__0));
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(1050), ___nl__4));
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__4));
#line 227
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(1, ___nl__4));
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0clear(&___nl__0);
#line 227
c_rt_lib0clear(&___nl__1);
#line 227
c_rt_lib0clear(&___nl__2);
#line 227
return ___nl__3;
#line 227
c_rt_lib0clear(&___nl__3);
#line 227
goto label_15;
#line 227
label_15:
#line 227
c_rt_lib0clear(&___nl__2);
#line 228
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1025)));
#line 228
if(c_rt_lib0check_true_native(___nl__2)){ goto label_34;}
#line 237
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1020)));
#line 237
if(c_rt_lib0check_true_native(___nl__2)){ goto label_93;}
#line 246
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1021)));
#line 246
if(c_rt_lib0check_true_native(___nl__2)){ goto label_156;}
#line 257
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1022)));
#line 257
if(c_rt_lib0check_true_native(___nl__2)){ goto label_260;}
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1027)));
#line 259
if(c_rt_lib0check_true_native(___nl__2)){ goto label_280;}
#line 274
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(1026)));
#line 274
if(c_rt_lib0check_true_native(___nl__2)){ goto label_418;}
#line 275
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(5)));
#line 275
if(c_rt_lib0check_true_native(___nl__2)){ goto label_420;}
#line 275
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 275
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 275
nl_die_arg(___nl__2);
#line 228
label_34:
#line 228
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(1025)));
#line 229
c_rt_lib0move(&___nl__4, c_std_lib0is_hash(___nl__1));
#line 229
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 229
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 229
if(c_rt_lib0check_true_native(___nl__4)){ goto label_53;}
#line 229
c_rt_lib0move(&___nl__6, ptd0get_imm_kind(___nl__0));
#line 229
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1051), ___nl__6));
#line 229
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__6));
#line 229
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 229
c_rt_lib0clear(&___nl__6);
#line 229
c_rt_lib0clear(&___nl__0);
#line 229
c_rt_lib0clear(&___nl__1);
#line 229
c_rt_lib0clear(&___nl__2);
#line 229
c_rt_lib0clear(&___nl__3);
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
return ___nl__5;
#line 229
c_rt_lib0clear(&___nl__5);
#line 229
goto label_53;
#line 229
label_53:
#line 229
c_rt_lib0clear(&___nl__4);
#line 230
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__1));
#line 230
label_56:
#line 230
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 230
if(c_rt_lib0check_true_native(___nl__4)){ goto label_87;}
#line 230
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 230
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__1, ___nl__4));
#line 231
c_rt_lib0move(&___nl__7, ptd_priv0try_dynamic_cast(___nl__3, ___nl__5));
#line 232
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 232
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 232
c_rt_lib0move(&___nl__8, c_rt_lib0gt(___nl__8, ___nl__9));
#line 232
c_rt_lib0clear(&___nl__9);
#line 232
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 232
if(c_rt_lib0check_true_native(___nl__8)){ goto label_82;}
#line 233
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(855), ___nl__4));
#line 233
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(1029), ___nl__9));
#line 233
c_rt_lib0delete(array0push(&___nl__7, ___nl__9));
#line 233
c_rt_lib0clear(&___nl__9);
#line 234
c_rt_lib0clear(&___nl__0);
#line 234
c_rt_lib0clear(&___nl__1);
#line 234
c_rt_lib0clear(&___nl__2);
#line 234
c_rt_lib0clear(&___nl__3);
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0clear(&___nl__8);
#line 234
return ___nl__7;
#line 235
goto label_82;
#line 235
label_82:
#line 235
c_rt_lib0clear(&___nl__8);
#line 235
c_rt_lib0clear(&___nl__7);
#line 236
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 236
goto label_56;
#line 236
label_87:
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0clear(&___nl__5);
#line 236
c_rt_lib0clear(&___nl__6);
#line 236
c_rt_lib0clear(&___nl__3);
#line 237
goto label_449;
#line 237
label_93:
#line 237
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(1020)));
#line 238
c_rt_lib0move(&___nl__4, c_std_lib0is_array(___nl__1));
#line 238
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 238
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 238
if(c_rt_lib0check_true_native(___nl__4)){ goto label_112;}
#line 238
c_rt_lib0move(&___nl__6, ptd0get_imm_kind(___nl__0));
#line 238
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1052), ___nl__6));
#line 238
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__6));
#line 238
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 238
c_rt_lib0clear(&___nl__6);
#line 238
c_rt_lib0clear(&___nl__0);
#line 238
c_rt_lib0clear(&___nl__1);
#line 238
c_rt_lib0clear(&___nl__2);
#line 238
c_rt_lib0clear(&___nl__3);
#line 238
c_rt_lib0clear(&___nl__4);
#line 238
return ___nl__5;
#line 238
c_rt_lib0clear(&___nl__5);
#line 238
goto label_112;
#line 238
label_112:
#line 238
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0move(&___nl__4, array0len(___nl__1));
#line 239
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 239
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 239
label_117:
#line 239
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__5, ___nl__4));
#line 239
if(c_rt_lib0check_true_native(___nl__7)){ goto label_149;}
#line 240
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 240
c_rt_lib0move(&___nl__8, ptd_priv0try_dynamic_cast(___nl__3, ___nl__9));
#line 240
c_rt_lib0clear(&___nl__9);
#line 241
c_rt_lib0move(&___nl__9, array0len(___nl__8));
#line 241
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 241
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__9, ___nl__10));
#line 241
c_rt_lib0clear(&___nl__10);
#line 241
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 241
if(c_rt_lib0check_true_native(___nl__9)){ goto label_144;}
#line 242
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(1045), ___nl__5));
#line 242
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(1029), ___nl__10));
#line 242
c_rt_lib0delete(array0push(&___nl__8, ___nl__10));
#line 242
c_rt_lib0clear(&___nl__10);
#line 243
c_rt_lib0clear(&___nl__0);
#line 243
c_rt_lib0clear(&___nl__1);
#line 243
c_rt_lib0clear(&___nl__2);
#line 243
c_rt_lib0clear(&___nl__3);
#line 243
c_rt_lib0clear(&___nl__4);
#line 243
c_rt_lib0clear(&___nl__5);
#line 243
c_rt_lib0clear(&___nl__6);
#line 243
c_rt_lib0clear(&___nl__7);
#line 243
c_rt_lib0clear(&___nl__9);
#line 243
return ___nl__8;
#line 244
goto label_144;
#line 244
label_144:
#line 244
c_rt_lib0clear(&___nl__9);
#line 244
c_rt_lib0clear(&___nl__8);
#line 245
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 245
goto label_117;
#line 245
label_149:
#line 245
c_rt_lib0clear(&___nl__4);
#line 245
c_rt_lib0clear(&___nl__5);
#line 245
c_rt_lib0clear(&___nl__6);
#line 245
c_rt_lib0clear(&___nl__7);
#line 245
c_rt_lib0clear(&___nl__3);
#line 246
goto label_449;
#line 246
label_156:
#line 246
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(1021)));
#line 247
c_rt_lib0move(&___nl__4, c_std_lib0is_hash(___nl__1));
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 247
if(c_rt_lib0check_true_native(___nl__4)){ goto label_175;}
#line 247
c_rt_lib0move(&___nl__6, ptd0get_imm_kind(___nl__0));
#line 247
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1053), ___nl__6));
#line 247
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__6));
#line 247
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 247
c_rt_lib0clear(&___nl__6);
#line 247
c_rt_lib0clear(&___nl__0);
#line 247
c_rt_lib0clear(&___nl__1);
#line 247
c_rt_lib0clear(&___nl__2);
#line 247
c_rt_lib0clear(&___nl__3);
#line 247
c_rt_lib0clear(&___nl__4);
#line 247
return ___nl__5;
#line 247
c_rt_lib0clear(&___nl__5);
#line 247
goto label_175;
#line 247
label_175:
#line 247
c_rt_lib0clear(&___nl__4);
#line 248
c_rt_lib0move(&___nl__4, hash0size(___nl__3));
#line 248
c_rt_lib0move(&___nl__5, hash0size(___nl__1));
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 248
c_rt_lib0clear(&___nl__5);
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 248
if(c_rt_lib0check_true_native(___nl__4)){ goto label_197;}
#line 248
c_rt_lib0move(&___nl__6, hash0size(___nl__1));
#line 248
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1056), ___nl__6));
#line 248
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__6));
#line 248
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 248
c_rt_lib0clear(&___nl__6);
#line 248
c_rt_lib0clear(&___nl__0);
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
c_rt_lib0clear(&___nl__2);
#line 248
c_rt_lib0clear(&___nl__3);
#line 248
c_rt_lib0clear(&___nl__4);
#line 248
return ___nl__5;
#line 248
c_rt_lib0clear(&___nl__5);
#line 248
goto label_197;
#line 248
label_197:
#line 248
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 249
label_200:
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 249
if(c_rt_lib0check_true_native(___nl__4)){ goto label_254;}
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 249
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 250
c_rt_lib0move(&___nl__7, hash0has_key(___nl__1, ___nl__4));
#line 250
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 250
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 250
if(c_rt_lib0check_true_native(___nl__7)){ goto label_224;}
#line 250
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(1057), ___nl__4));
#line 250
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__9));
#line 250
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(1, ___nl__9));
#line 250
c_rt_lib0clear(&___nl__9);
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
c_rt_lib0clear(&___nl__2);
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
c_rt_lib0clear(&___nl__4);
#line 250
c_rt_lib0clear(&___nl__5);
#line 250
c_rt_lib0clear(&___nl__6);
#line 250
c_rt_lib0clear(&___nl__7);
#line 250
return ___nl__8;
#line 250
c_rt_lib0clear(&___nl__8);
#line 250
goto label_224;
#line 250
label_224:
#line 250
c_rt_lib0clear(&___nl__7);
#line 251
c_rt_lib0move(&___nl__8, hash0get_value(___nl__1, ___nl__4));
#line 251
c_rt_lib0move(&___nl__7, ptd_priv0try_dynamic_cast(___nl__5, ___nl__8));
#line 251
c_rt_lib0clear(&___nl__8);
#line 252
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 252
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 252
c_rt_lib0move(&___nl__8, c_rt_lib0gt(___nl__8, ___nl__9));
#line 252
c_rt_lib0clear(&___nl__9);
#line 252
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 252
if(c_rt_lib0check_true_native(___nl__8)){ goto label_249;}
#line 253
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(1046), ___nl__4));
#line 253
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(1029), ___nl__9));
#line 253
c_rt_lib0delete(array0push(&___nl__7, ___nl__9));
#line 253
c_rt_lib0clear(&___nl__9);
#line 254
c_rt_lib0clear(&___nl__0);
#line 254
c_rt_lib0clear(&___nl__1);
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
c_rt_lib0clear(&___nl__3);
#line 254
c_rt_lib0clear(&___nl__4);
#line 254
c_rt_lib0clear(&___nl__5);
#line 254
c_rt_lib0clear(&___nl__6);
#line 254
c_rt_lib0clear(&___nl__8);
#line 254
return ___nl__7;
#line 255
goto label_249;
#line 255
label_249:
#line 255
c_rt_lib0clear(&___nl__8);
#line 255
c_rt_lib0clear(&___nl__7);
#line 256
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 256
goto label_200;
#line 256
label_254:
#line 256
c_rt_lib0clear(&___nl__4);
#line 256
c_rt_lib0clear(&___nl__5);
#line 256
c_rt_lib0clear(&___nl__6);
#line 256
c_rt_lib0clear(&___nl__3);
#line 257
goto label_449;
#line 257
label_260:
#line 258
c_rt_lib0move(&___nl__3, c_std_lib0is_sim(___nl__1));
#line 258
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 258
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 258
if(c_rt_lib0check_true_native(___nl__3)){ goto label_277;}
#line 258
c_rt_lib0move(&___nl__5, ptd0get_imm_kind(___nl__0));
#line 258
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(1054), ___nl__5));
#line 258
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__5));
#line 258
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 258
c_rt_lib0clear(&___nl__5);
#line 258
c_rt_lib0clear(&___nl__0);
#line 258
c_rt_lib0clear(&___nl__1);
#line 258
c_rt_lib0clear(&___nl__2);
#line 258
c_rt_lib0clear(&___nl__3);
#line 258
return ___nl__4;
#line 258
c_rt_lib0clear(&___nl__4);
#line 258
goto label_277;
#line 258
label_277:
#line 258
c_rt_lib0clear(&___nl__3);
#line 259
goto label_449;
#line 259
label_280:
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(1027)));
#line 260
c_rt_lib0move(&___nl__4, c_std_lib0is_variant(___nl__1));
#line 260
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 260
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 260
if(c_rt_lib0check_true_native(___nl__4)){ goto label_299;}
#line 260
c_rt_lib0move(&___nl__6, ptd0get_imm_kind(___nl__0));
#line 260
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1055), ___nl__6));
#line 260
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__6));
#line 260
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 260
c_rt_lib0clear(&___nl__6);
#line 260
c_rt_lib0clear(&___nl__0);
#line 260
c_rt_lib0clear(&___nl__1);
#line 260
c_rt_lib0clear(&___nl__2);
#line 260
c_rt_lib0clear(&___nl__3);
#line 260
c_rt_lib0clear(&___nl__4);
#line 260
return ___nl__5;
#line 260
c_rt_lib0clear(&___nl__5);
#line 260
goto label_299;
#line 260
label_299:
#line 260
c_rt_lib0clear(&___nl__4);
#line 261
c_rt_lib0move(&___nl__4, ov0get_element(___nl__1));
#line 262
c_rt_lib0move(&___nl__5, hash0has_key(___nl__3, ___nl__4));
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 262
if(c_rt_lib0check_true_native(___nl__5)){ goto label_321;}
#line 262
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 262
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__4, ___nl__7));
#line 262
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1058), ___nl__7));
#line 262
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__7));
#line 262
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 262
c_rt_lib0clear(&___nl__7);
#line 262
c_rt_lib0clear(&___nl__0);
#line 262
c_rt_lib0clear(&___nl__1);
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
c_rt_lib0clear(&___nl__3);
#line 262
c_rt_lib0clear(&___nl__4);
#line 262
c_rt_lib0clear(&___nl__5);
#line 262
return ___nl__6;
#line 262
c_rt_lib0clear(&___nl__6);
#line 262
goto label_321;
#line 262
label_321:
#line 262
c_rt_lib0clear(&___nl__5);
#line 263
c_rt_lib0move(&___nl__5, hash0get_value(___nl__3, ___nl__4));
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(809)));
#line 264
if(c_rt_lib0check_true_native(___nl__6)){ goto label_331;}
#line 271
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(808)));
#line 271
if(c_rt_lib0check_true_native(___nl__6)){ goto label_388;}
#line 271
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 271
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 271
nl_die_arg(___nl__6);
#line 264
label_331:
#line 264
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(809)));
#line 265
c_rt_lib0move(&___nl__8, ov0has_value(___nl__1));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 265
if(c_rt_lib0check_true_native(___nl__8)){ goto label_355;}
#line 265
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 265
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__4, ___nl__10));
#line 265
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(1060), ___nl__10));
#line 265
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__10));
#line 265
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 265
c_rt_lib0clear(&___nl__10);
#line 265
c_rt_lib0clear(&___nl__0);
#line 265
c_rt_lib0clear(&___nl__1);
#line 265
c_rt_lib0clear(&___nl__2);
#line 265
c_rt_lib0clear(&___nl__3);
#line 265
c_rt_lib0clear(&___nl__4);
#line 265
c_rt_lib0clear(&___nl__5);
#line 265
c_rt_lib0clear(&___nl__6);
#line 265
c_rt_lib0clear(&___nl__7);
#line 265
c_rt_lib0clear(&___nl__8);
#line 265
return ___nl__9;
#line 265
c_rt_lib0clear(&___nl__9);
#line 265
goto label_355;
#line 265
label_355:
#line 265
c_rt_lib0clear(&___nl__8);
#line 266
c_rt_lib0move(&___nl__9, ov0get_value(___nl__1));
#line 266
c_rt_lib0move(&___nl__8, ptd_priv0try_dynamic_cast(___nl__7, ___nl__9));
#line 266
c_rt_lib0clear(&___nl__9);
#line 267
c_rt_lib0move(&___nl__9, array0len(___nl__8));
#line 267
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 267
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__9, ___nl__10));
#line 267
c_rt_lib0clear(&___nl__10);
#line 267
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 267
if(c_rt_lib0check_true_native(___nl__9)){ goto label_383;}
#line 268
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 268
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__4, ___nl__10));
#line 268
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(1047), ___nl__10));
#line 268
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(1029), ___nl__10));
#line 268
c_rt_lib0delete(array0push(&___nl__8, ___nl__10));
#line 268
c_rt_lib0clear(&___nl__10);
#line 269
c_rt_lib0clear(&___nl__0);
#line 269
c_rt_lib0clear(&___nl__1);
#line 269
c_rt_lib0clear(&___nl__2);
#line 269
c_rt_lib0clear(&___nl__3);
#line 269
c_rt_lib0clear(&___nl__4);
#line 269
c_rt_lib0clear(&___nl__5);
#line 269
c_rt_lib0clear(&___nl__6);
#line 269
c_rt_lib0clear(&___nl__7);
#line 269
c_rt_lib0clear(&___nl__9);
#line 269
return ___nl__8;
#line 270
goto label_383;
#line 270
label_383:
#line 270
c_rt_lib0clear(&___nl__9);
#line 270
c_rt_lib0clear(&___nl__8);
#line 270
c_rt_lib0clear(&___nl__7);
#line 271
goto label_412;
#line 271
label_388:
#line 272
c_rt_lib0move(&___nl__7, ov0has_value(___nl__1));
#line 272
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 272
if(c_rt_lib0check_true_native(___nl__7)){ goto label_409;}
#line 272
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__4, ___nl__9));
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(1059), ___nl__9));
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(112), ___nl__9));
#line 272
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(1, ___nl__9));
#line 272
c_rt_lib0clear(&___nl__9);
#line 272
c_rt_lib0clear(&___nl__0);
#line 272
c_rt_lib0clear(&___nl__1);
#line 272
c_rt_lib0clear(&___nl__2);
#line 272
c_rt_lib0clear(&___nl__3);
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0clear(&___nl__5);
#line 272
c_rt_lib0clear(&___nl__6);
#line 272
c_rt_lib0clear(&___nl__7);
#line 272
return ___nl__8;
#line 272
c_rt_lib0clear(&___nl__8);
#line 272
goto label_409;
#line 272
label_409:
#line 272
c_rt_lib0clear(&___nl__7);
#line 273
goto label_412;
#line 273
label_412:
#line 273
c_rt_lib0clear(&___nl__6);
#line 273
c_rt_lib0clear(&___nl__4);
#line 273
c_rt_lib0clear(&___nl__5);
#line 273
c_rt_lib0clear(&___nl__3);
#line 274
goto label_449;
#line 274
label_418:
#line 275
goto label_449;
#line 275
label_420:
#line 275
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(5)));
#line 276
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 276
c_rt_lib0move(&___nl__5, ptd_priv0exec(___nl__0, ___nl__6));
#line 276
c_rt_lib0clear(&___nl__6);
#line 276
c_rt_lib0move(&___nl__4, ptd_priv0try_dynamic_cast(___nl__5, ___nl__1));
#line 276
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0move(&___nl__5, array0len(___nl__4));
#line 277
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 277
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 277
c_rt_lib0clear(&___nl__6);
#line 277
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 277
if(c_rt_lib0check_true_native(___nl__5)){ goto label_444;}
#line 278
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1048), ___nl__3));
#line 278
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1029), ___nl__6));
#line 278
c_rt_lib0delete(array0push(&___nl__4, ___nl__6));
#line 278
c_rt_lib0clear(&___nl__6);
#line 279
c_rt_lib0clear(&___nl__0);
#line 279
c_rt_lib0clear(&___nl__1);
#line 279
c_rt_lib0clear(&___nl__2);
#line 279
c_rt_lib0clear(&___nl__3);
#line 279
c_rt_lib0clear(&___nl__5);
#line 279
return ___nl__4;
#line 280
goto label_444;
#line 280
label_444:
#line 280
c_rt_lib0clear(&___nl__5);
#line 280
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0clear(&___nl__3);
#line 281
goto label_449;
#line 281
label_449:
#line 281
c_rt_lib0clear(&___nl__2);
#line 282
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 282
c_rt_lib0clear(&___nl__0);
#line 282
c_rt_lib0clear(&___nl__1);
#line 282
return ___nl__2;
#line 282
c_rt_lib0clear(&___nl__2);
#line 282
c_rt_lib0clear(&___nl__0);
#line 282
c_rt_lib0clear(&___nl__1);
#line 282
return NULL;
}

ImmT ptd0reconstruct_nl_with_args0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 5, "ptd0reconstruct_nl_with_args");
return ptd0reconstruct_nl_with_args(_tab[0], _tab[1], _tab[2], _tab[3], _tab[4]);}
ImmT ptd0reconstruct_nl_with_args(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
ImmT ___nl__5 = NULL;
#line 286
c_rt_lib0move(&___nl__5, ptd0ptd_reconstruct_nl_with_args(___nl__0, ___nl__1, ___nl__2, ___nl__3, ___nl__4));
#line 286
c_rt_lib0clear(&___nl__0);
#line 286
c_rt_lib0clear(&___nl__1);
#line 286
c_rt_lib0clear(&___nl__2);
#line 286
c_rt_lib0clear(&___nl__3);
#line 286
c_rt_lib0clear(&___nl__4);
#line 286
return ___nl__5;
#line 286
c_rt_lib0clear(&___nl__5);
#line 286
c_rt_lib0clear(&___nl__0);
#line 286
c_rt_lib0clear(&___nl__1);
#line 286
c_rt_lib0clear(&___nl__2);
#line 286
c_rt_lib0clear(&___nl__3);
#line 286
c_rt_lib0clear(&___nl__4);
#line 286
return NULL;
}

ImmT ptd0ptd_reconstruct_nl_with_args0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 5, "ptd0ptd_reconstruct_nl_with_args");
return ptd0ptd_reconstruct_nl_with_args(_tab[0], _tab[1], _tab[2], _tab[3], _tab[4]);}
ImmT ptd0ptd_reconstruct_nl_with_args(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 290
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__2));
#line 291
c_rt_lib0move(&___nl__8, ptd0ptd_im());
#line 291
c_rt_lib0move(&___nl__7, ptd0arr(___nl__8));
#line 291
c_rt_lib0clear(&___nl__8);
#line 291
c_rt_lib0move(&___nl__6, ptd0ensure(___nl__7, ___nl__4));
#line 291
c_rt_lib0clear(&___nl__7);
#line 291
c_rt_lib0delete(array0append(&___nl__5, ___nl__6));
#line 291
c_rt_lib0clear(&___nl__6);
#line 292
c_rt_lib0move(&___nl__6, ptd_priv0reconstruct(___nl__0, ___nl__1, ___nl__3, ___nl__5));
#line 292
c_rt_lib0clear(&___nl__0);
#line 292
c_rt_lib0clear(&___nl__1);
#line 292
c_rt_lib0clear(&___nl__2);
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0clear(&___nl__5);
#line 292
return ___nl__6;
#line 292
c_rt_lib0clear(&___nl__6);
#line 292
c_rt_lib0clear(&___nl__5);
#line 292
c_rt_lib0clear(&___nl__0);
#line 292
c_rt_lib0clear(&___nl__1);
#line 292
c_rt_lib0clear(&___nl__2);
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
return NULL;
}

ImmT ptd_priv0reconstruct(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
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
#line 299
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(1025)));
#line 299
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 307
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(1021)));
#line 307
if(c_rt_lib0check_true_native(___nl__4)){ goto label_72;}
#line 315
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(1020)));
#line 315
if(c_rt_lib0check_true_native(___nl__4)){ goto label_127;}
#line 323
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(1027)));
#line 323
if(c_rt_lib0check_true_native(___nl__4)){ goto label_185;}
#line 332
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(1022)));
#line 332
if(c_rt_lib0check_true_native(___nl__4)){ goto label_253;}
#line 334
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(1026)));
#line 334
if(c_rt_lib0check_true_native(___nl__4)){ goto label_263;}
#line 336
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(5)));
#line 336
if(c_rt_lib0check_true_native(___nl__4)){ goto label_273;}
#line 336
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 336
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__1));
#line 336
nl_die_arg(___nl__4);
#line 299
label_17:
#line 299
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__1, ___get_global_const(1025)));
#line 300
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 301
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 301
label_21:
#line 301
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 301
if(c_rt_lib0check_true_native(___nl__7)){ goto label_55;}
#line 301
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 301
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 302
c_rt_lib0move(&___nl__11, hash0get_value(___nl__5, ___nl__7));
#line 302
c_rt_lib0move(&___nl__10, ptd_priv0reconstruct(___nl__8, ___nl__11, ___nl__2, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__11);
#line 303
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 303
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(1061)));
#line 303
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 303
if(c_rt_lib0check_true_native(___nl__11)){ goto label_46;}
#line 303
c_rt_lib0clear(&___nl__0);
#line 303
c_rt_lib0clear(&___nl__1);
#line 303
c_rt_lib0clear(&___nl__2);
#line 303
c_rt_lib0clear(&___nl__3);
#line 303
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0clear(&___nl__5);
#line 303
c_rt_lib0clear(&___nl__6);
#line 303
c_rt_lib0clear(&___nl__7);
#line 303
c_rt_lib0clear(&___nl__8);
#line 303
c_rt_lib0clear(&___nl__9);
#line 303
c_rt_lib0clear(&___nl__11);
#line 303
return ___nl__10;
#line 303
goto label_46;
#line 303
label_46:
#line 303
c_rt_lib0clear(&___nl__11);
#line 304
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 304
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(1062)));
#line 304
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__7, ___nl__11));
#line 304
c_rt_lib0clear(&___nl__11);
#line 304
c_rt_lib0clear(&___nl__10);
#line 305
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 305
goto label_21;
#line 305
label_55:
#line 305
c_rt_lib0clear(&___nl__7);
#line 305
c_rt_lib0clear(&___nl__8);
#line 305
c_rt_lib0clear(&___nl__9);
#line 306
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1062), ___nl__6));
#line 306
c_rt_lib0clear(&___nl__0);
#line 306
c_rt_lib0clear(&___nl__1);
#line 306
c_rt_lib0clear(&___nl__2);
#line 306
c_rt_lib0clear(&___nl__3);
#line 306
c_rt_lib0clear(&___nl__4);
#line 306
c_rt_lib0clear(&___nl__5);
#line 306
c_rt_lib0clear(&___nl__6);
#line 306
return ___nl__7;
#line 306
c_rt_lib0clear(&___nl__7);
#line 306
c_rt_lib0clear(&___nl__6);
#line 306
c_rt_lib0clear(&___nl__5);
#line 307
goto label_345;
#line 307
label_72:
#line 307
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__1, ___get_global_const(1021)));
#line 308
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 309
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 309
label_76:
#line 309
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 309
if(c_rt_lib0check_true_native(___nl__7)){ goto label_110;}
#line 309
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 309
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 310
c_rt_lib0move(&___nl__11, hash0get_value(___nl__5, ___nl__7));
#line 310
c_rt_lib0move(&___nl__10, ptd_priv0reconstruct(___nl__8, ___nl__11, ___nl__2, ___nl__3));
#line 310
c_rt_lib0clear(&___nl__11);
#line 311
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 311
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(1061)));
#line 311
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 311
if(c_rt_lib0check_true_native(___nl__11)){ goto label_101;}
#line 311
c_rt_lib0clear(&___nl__0);
#line 311
c_rt_lib0clear(&___nl__1);
#line 311
c_rt_lib0clear(&___nl__2);
#line 311
c_rt_lib0clear(&___nl__3);
#line 311
c_rt_lib0clear(&___nl__4);
#line 311
c_rt_lib0clear(&___nl__5);
#line 311
c_rt_lib0clear(&___nl__6);
#line 311
c_rt_lib0clear(&___nl__7);
#line 311
c_rt_lib0clear(&___nl__8);
#line 311
c_rt_lib0clear(&___nl__9);
#line 311
c_rt_lib0clear(&___nl__11);
#line 311
return ___nl__10;
#line 311
goto label_101;
#line 311
label_101:
#line 311
c_rt_lib0clear(&___nl__11);
#line 312
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 312
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(1062)));
#line 312
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__7, ___nl__11));
#line 312
c_rt_lib0clear(&___nl__11);
#line 312
c_rt_lib0clear(&___nl__10);
#line 313
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 313
goto label_76;
#line 313
label_110:
#line 313
c_rt_lib0clear(&___nl__7);
#line 313
c_rt_lib0clear(&___nl__8);
#line 313
c_rt_lib0clear(&___nl__9);
#line 314
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1062), ___nl__6));
#line 314
c_rt_lib0clear(&___nl__0);
#line 314
c_rt_lib0clear(&___nl__1);
#line 314
c_rt_lib0clear(&___nl__2);
#line 314
c_rt_lib0clear(&___nl__3);
#line 314
c_rt_lib0clear(&___nl__4);
#line 314
c_rt_lib0clear(&___nl__5);
#line 314
c_rt_lib0clear(&___nl__6);
#line 314
return ___nl__7;
#line 314
c_rt_lib0clear(&___nl__7);
#line 314
c_rt_lib0clear(&___nl__6);
#line 314
c_rt_lib0clear(&___nl__5);
#line 315
goto label_345;
#line 315
label_127:
#line 315
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__1, ___get_global_const(1020)));
#line 316
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 317
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 317
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 317
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__0));
#line 317
label_133:
#line 317
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 317
if(c_rt_lib0check_true_native(___nl__11)){ goto label_166;}
#line 317
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__8));
#line 318
c_rt_lib0move(&___nl__12, ptd_priv0reconstruct(___nl__7, ___nl__5, ___nl__2, ___nl__3));
#line 319
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 319
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(1061)));
#line 319
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 319
if(c_rt_lib0check_true_native(___nl__13)){ goto label_157;}
#line 319
c_rt_lib0clear(&___nl__0);
#line 319
c_rt_lib0clear(&___nl__1);
#line 319
c_rt_lib0clear(&___nl__2);
#line 319
c_rt_lib0clear(&___nl__3);
#line 319
c_rt_lib0clear(&___nl__4);
#line 319
c_rt_lib0clear(&___nl__5);
#line 319
c_rt_lib0clear(&___nl__6);
#line 319
c_rt_lib0clear(&___nl__7);
#line 319
c_rt_lib0clear(&___nl__8);
#line 319
c_rt_lib0clear(&___nl__9);
#line 319
c_rt_lib0clear(&___nl__10);
#line 319
c_rt_lib0clear(&___nl__11);
#line 319
c_rt_lib0clear(&___nl__13);
#line 319
return ___nl__12;
#line 319
goto label_157;
#line 319
label_157:
#line 319
c_rt_lib0clear(&___nl__13);
#line 320
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 320
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(1062)));
#line 320
c_rt_lib0delete(array0push(&___nl__6, ___nl__13));
#line 320
c_rt_lib0clear(&___nl__13);
#line 320
c_rt_lib0clear(&___nl__12);
#line 321
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 321
goto label_133;
#line 321
label_166:
#line 321
c_rt_lib0clear(&___nl__7);
#line 321
c_rt_lib0clear(&___nl__8);
#line 321
c_rt_lib0clear(&___nl__9);
#line 321
c_rt_lib0clear(&___nl__10);
#line 321
c_rt_lib0clear(&___nl__11);
#line 322
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1062), ___nl__6));
#line 322
c_rt_lib0clear(&___nl__0);
#line 322
c_rt_lib0clear(&___nl__1);
#line 322
c_rt_lib0clear(&___nl__2);
#line 322
c_rt_lib0clear(&___nl__3);
#line 322
c_rt_lib0clear(&___nl__4);
#line 322
c_rt_lib0clear(&___nl__5);
#line 322
c_rt_lib0clear(&___nl__6);
#line 322
return ___nl__7;
#line 322
c_rt_lib0clear(&___nl__7);
#line 322
c_rt_lib0clear(&___nl__6);
#line 322
c_rt_lib0clear(&___nl__5);
#line 323
goto label_345;
#line 323
label_185:
#line 323
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__1, ___get_global_const(1027)));
#line 324
c_rt_lib0move(&___nl__6, ov0get_element(___nl__0));
#line 325
c_rt_lib0move(&___nl__7, hash0get_value(___nl__5, ___nl__6));
#line 325
c_rt_lib0copy(&___nl__1, ___nl__7);
#line 325
c_rt_lib0clear(&___nl__7);
#line 326
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 326
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(808)));
#line 326
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 326
if(c_rt_lib0check_true_native(___nl__7)){ goto label_207;}
#line 326
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(1062), ___nl__0));
#line 326
c_rt_lib0clear(&___nl__0);
#line 326
c_rt_lib0clear(&___nl__1);
#line 326
c_rt_lib0clear(&___nl__2);
#line 326
c_rt_lib0clear(&___nl__3);
#line 326
c_rt_lib0clear(&___nl__4);
#line 326
c_rt_lib0clear(&___nl__5);
#line 326
c_rt_lib0clear(&___nl__6);
#line 326
c_rt_lib0clear(&___nl__7);
#line 326
return ___nl__8;
#line 326
c_rt_lib0clear(&___nl__8);
#line 326
goto label_207;
#line 326
label_207:
#line 326
c_rt_lib0clear(&___nl__7);
#line 327
c_rt_lib0move(&___nl__7, ov0get_value(___nl__0));
#line 327
c_rt_lib0copy(&___nl__0, ___nl__7);
#line 327
c_rt_lib0clear(&___nl__7);
#line 328
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 328
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(809)));
#line 329
c_rt_lib0move(&___nl__8, ptd_priv0reconstruct(___nl__0, ___nl__7, ___nl__2, ___nl__3));
#line 330
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 330
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(1061)));
#line 330
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 330
if(c_rt_lib0check_true_native(___nl__9)){ goto label_230;}
#line 330
c_rt_lib0clear(&___nl__0);
#line 330
c_rt_lib0clear(&___nl__1);
#line 330
c_rt_lib0clear(&___nl__2);
#line 330
c_rt_lib0clear(&___nl__3);
#line 330
c_rt_lib0clear(&___nl__4);
#line 330
c_rt_lib0clear(&___nl__5);
#line 330
c_rt_lib0clear(&___nl__6);
#line 330
c_rt_lib0clear(&___nl__7);
#line 330
c_rt_lib0clear(&___nl__9);
#line 330
return ___nl__8;
#line 330
goto label_230;
#line 330
label_230:
#line 330
c_rt_lib0clear(&___nl__9);
#line 331
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 331
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(1062)));
#line 331
c_rt_lib0move(&___nl__9, ov0mk_val(___nl__6, ___nl__10));
#line 331
c_rt_lib0clear(&___nl__10);
#line 331
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(1062), ___nl__9));
#line 331
c_rt_lib0clear(&___nl__0);
#line 331
c_rt_lib0clear(&___nl__1);
#line 331
c_rt_lib0clear(&___nl__2);
#line 331
c_rt_lib0clear(&___nl__3);
#line 331
c_rt_lib0clear(&___nl__4);
#line 331
c_rt_lib0clear(&___nl__5);
#line 331
c_rt_lib0clear(&___nl__6);
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0clear(&___nl__8);
#line 331
return ___nl__9;
#line 331
c_rt_lib0clear(&___nl__9);
#line 331
c_rt_lib0clear(&___nl__6);
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0clear(&___nl__8);
#line 331
c_rt_lib0clear(&___nl__5);
#line 332
goto label_345;
#line 332
label_253:
#line 333
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(1062), ___nl__0));
#line 333
c_rt_lib0clear(&___nl__0);
#line 333
c_rt_lib0clear(&___nl__1);
#line 333
c_rt_lib0clear(&___nl__2);
#line 333
c_rt_lib0clear(&___nl__3);
#line 333
c_rt_lib0clear(&___nl__4);
#line 333
return ___nl__5;
#line 333
c_rt_lib0clear(&___nl__5);
#line 334
goto label_345;
#line 334
label_263:
#line 335
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(1062), ___nl__0));
#line 335
c_rt_lib0clear(&___nl__0);
#line 335
c_rt_lib0clear(&___nl__1);
#line 335
c_rt_lib0clear(&___nl__2);
#line 335
c_rt_lib0clear(&___nl__3);
#line 335
c_rt_lib0clear(&___nl__4);
#line 335
return ___nl__5;
#line 335
c_rt_lib0clear(&___nl__5);
#line 336
goto label_345;
#line 336
label_273:
#line 336
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__1, ___get_global_const(5)));
#line 337
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__0, ___nl__1));
#line 338
c_rt_lib0delete(array0append(&___nl__6, ___nl__3));
#line 339
c_rt_lib0move(&___nl__7, ptd_priv0exec(___nl__2, ___nl__6));
#line 340
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(1062)));
#line 340
if(c_rt_lib0check_true_native(___nl__8)){ goto label_287;}
#line 342
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(1061)));
#line 342
if(c_rt_lib0check_true_native(___nl__8)){ goto label_304;}
#line 344
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(41)));
#line 344
if(c_rt_lib0check_true_native(___nl__8)){ goto label_321;}
#line 344
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 344
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 344
nl_die_arg(___nl__8);
#line 340
label_287:
#line 340
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(1062)));
#line 341
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(1062), ___nl__9));
#line 341
c_rt_lib0clear(&___nl__0);
#line 341
c_rt_lib0clear(&___nl__1);
#line 341
c_rt_lib0clear(&___nl__2);
#line 341
c_rt_lib0clear(&___nl__3);
#line 341
c_rt_lib0clear(&___nl__4);
#line 341
c_rt_lib0clear(&___nl__5);
#line 341
c_rt_lib0clear(&___nl__6);
#line 341
c_rt_lib0clear(&___nl__7);
#line 341
c_rt_lib0clear(&___nl__8);
#line 341
c_rt_lib0clear(&___nl__9);
#line 341
return ___nl__10;
#line 341
c_rt_lib0clear(&___nl__10);
#line 341
c_rt_lib0clear(&___nl__9);
#line 342
goto label_339;
#line 342
label_304:
#line 342
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(1061)));
#line 343
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(1061), ___nl__9));
#line 343
c_rt_lib0clear(&___nl__0);
#line 343
c_rt_lib0clear(&___nl__1);
#line 343
c_rt_lib0clear(&___nl__2);
#line 343
c_rt_lib0clear(&___nl__3);
#line 343
c_rt_lib0clear(&___nl__4);
#line 343
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0clear(&___nl__6);
#line 343
c_rt_lib0clear(&___nl__7);
#line 343
c_rt_lib0clear(&___nl__8);
#line 343
c_rt_lib0clear(&___nl__9);
#line 343
return ___nl__10;
#line 343
c_rt_lib0clear(&___nl__10);
#line 343
c_rt_lib0clear(&___nl__9);
#line 344
goto label_339;
#line 344
label_321:
#line 345
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 345
c_rt_lib0move(&___nl__10, ptd_priv0exec(___nl__1, ___nl__11));
#line 345
c_rt_lib0clear(&___nl__11);
#line 345
c_rt_lib0move(&___nl__9, ptd_priv0reconstruct(___nl__0, ___nl__10, ___nl__2, ___nl__3));
#line 345
c_rt_lib0clear(&___nl__10);
#line 345
c_rt_lib0clear(&___nl__0);
#line 345
c_rt_lib0clear(&___nl__1);
#line 345
c_rt_lib0clear(&___nl__2);
#line 345
c_rt_lib0clear(&___nl__3);
#line 345
c_rt_lib0clear(&___nl__4);
#line 345
c_rt_lib0clear(&___nl__5);
#line 345
c_rt_lib0clear(&___nl__6);
#line 345
c_rt_lib0clear(&___nl__7);
#line 345
c_rt_lib0clear(&___nl__8);
#line 345
return ___nl__9;
#line 345
c_rt_lib0clear(&___nl__9);
#line 346
goto label_339;
#line 346
label_339:
#line 346
c_rt_lib0clear(&___nl__8);
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0clear(&___nl__5);
#line 347
goto label_345;
#line 347
label_345:
#line 347
c_rt_lib0clear(&___nl__4);
#line 347
c_rt_lib0clear(&___nl__0);
#line 347
c_rt_lib0clear(&___nl__1);
#line 347
c_rt_lib0clear(&___nl__2);
#line 347
c_rt_lib0clear(&___nl__3);
#line 347
return NULL;
}


static ImmT ___const__[9];
static int ___const_init__ = 1;
void ptd0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[8];


for(int i=0;i<8;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 8);
}
ImmT ptd_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ptd_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = ptd0sim0cal();
	break;
case 1:
	___const__[1] = ptd0none0cal();
	break;
case 2:
	___const__[2] = ptd0void0cal();
	break;
case 3:
	___const__[3] = ptd0ptd_im0cal();
	break;
case 4:
	___const__[4] = ptd0meta_type0cal();
	break;
case 5:
	___const__[5] = ptd0cast_t0cal();
	break;
case 6:
	___const__[6] = ptd0imm_kind_t0cal();
	break;
case 7:
	___const__[7] = ptd0cast_error_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
