
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "ptd.h"
#include "hash.h"
#include "ov.h"
#include "c_std_lib.h"
#line 1 "ptd.nl"

static ImmT *__const__f = NULL;
void ptd_priv0__const__init();
ImmT ptd_priv0__const__sim(int __nr);
ImmT ptd_priv0__const__sing(int __nr);

ImmT ptd_priv0exec(ImmT ___nl__0,ImmT ___nl__1);


ImmT ptd0arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0arr");
return ptd0arr(_tab[0]);}
ImmT ptd0arr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 12
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(943), ___nl__0));
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
ptd_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 16
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(944), ___nl__0));
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
ptd_priv0__const__init();
return ptd_priv0__const__sing(0);}
ImmT ptd0sim0cal() {
ptd_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 20
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(945)));
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
ptd_priv0__const__init();
return ptd_priv0__const__sing(1);}
ImmT ptd0none0cal() {
ptd_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 24
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(946)));
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
ptd_priv0__const__init();
return ptd_priv0__const__sing(2);}
ImmT ptd0void0cal() {
ptd_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 28
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(947)));
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
ptd_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 32
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(948), ___nl__0));
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
ptd_priv0__const__init();
return ptd_priv0__const__sing(3);}
ImmT ptd0ptd_im0cal() {
ptd_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 36
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(949)));
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
ptd_priv0__const__init();
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
label_3:
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 41
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 41
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 43
c_rt_lib0copy(&___nl__6, ___nl__3);
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(946)));
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 43
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 44
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(733)));
#line 44
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 44
c_rt_lib0clear(&___nl__7);
#line 45
goto label_4;
#line 45
label_5:
#line 46
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(734), ___nl__3));
#line 46
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 46
c_rt_lib0clear(&___nl__7);
#line 47
goto label_4;
#line 47
label_4:
#line 47
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__2, ___nl__5));
#line 48
c_rt_lib0clear(&___nl__5);
#line 49
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 49
goto label_3;
#line 49
label_1:
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__4);
#line 50
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(621), ___get_global_const(622)));
#line 50
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 50
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(950), ___nl__1));
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
ptd_priv0__const__init();
return ptd_priv0__const__sing(4);}
ImmT ptd0meta_type0cal() {
ptd_priv0__const__init();
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
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(621), ___get_global_const(622)));
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 54
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(621), ___get_global_const(622)));
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 54
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(621), ___get_global_const(622)));
#line 54
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 54
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(621), ___get_global_const(622)));
#line 54
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 54
c_rt_lib0move(&___nl__9, ptd0none());
#line 54
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(734), ___nl__8, ___get_global_const(733), ___nl__9));
#line 54
c_rt_lib0clear(&___nl__8);
#line 54
c_rt_lib0clear(&___nl__9);
#line 54
c_rt_lib0move(&___nl__6, ptd0var(___nl__7));
#line 54
c_rt_lib0clear(&___nl__7);
#line 54
c_rt_lib0move(&___nl__5, ptd0hash(___nl__6));
#line 54
c_rt_lib0clear(&___nl__6);
#line 54
c_rt_lib0move(&___nl__6, ptd0sim());
#line 54
c_rt_lib0move(&___nl__7, ptd0none());
#line 54
c_rt_lib0move(&___nl__8, ptd0none());
#line 54
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(7, ___get_global_const(944), ___nl__2, ___get_global_const(948), ___nl__3, ___get_global_const(943), ___nl__4, ___get_global_const(950), ___nl__5, ___get_global_const(5), ___nl__6, ___get_global_const(945), ___nl__7, ___get_global_const(949), ___nl__8));
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0clear(&___nl__5);
#line 54
c_rt_lib0clear(&___nl__6);
#line 54
c_rt_lib0clear(&___nl__7);
#line 54
c_rt_lib0clear(&___nl__8);
#line 54
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
return ___nl__0;
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
return NULL;
}

ImmT ptd0ensure0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure");
return ptd0ensure(_tab[0], _tab[1]);}
ImmT ptd0ensure(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
#line 66
c_rt_lib0delete(ptd0ensure_dyn(___nl__0, ___nl__1));
#line 67
c_rt_lib0clear(&___nl__0);
#line 67
return ___nl__1;
#line 67
c_rt_lib0clear(&___nl__0);
#line 67
c_rt_lib0clear(&___nl__1);
#line 67
return NULL;
}

ImmT ptd0ensure_only_dynamic0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_only_dynamic");
return ptd0ensure_only_dynamic(_tab[0], _tab[1]);}
ImmT ptd0ensure_only_dynamic(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
#line 71
c_rt_lib0delete(ptd0ensure_dyn(___nl__0, ___nl__1));
#line 72
c_rt_lib0clear(&___nl__0);
#line 72
return ___nl__1;
#line 72
c_rt_lib0clear(&___nl__0);
#line 72
c_rt_lib0clear(&___nl__1);
#line 72
return NULL;
}

ImmT ptd0ensure_only_static_do_not_touch_without_permission0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_only_static_do_not_touch_without_permission");
return ptd0ensure_only_static_do_not_touch_without_permission(_tab[0], _tab[1]);}
ImmT ptd0ensure_only_static_do_not_touch_without_permission(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
#line 77
c_rt_lib0clear(&___nl__0);
#line 77
return ___nl__1;
#line 77
c_rt_lib0clear(&___nl__0);
#line 77
c_rt_lib0clear(&___nl__1);
#line 77
return NULL;
}

ImmT ptd0ensure_dyn0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_dyn");
return ptd0ensure_dyn(_tab[0], _tab[1]);}
ImmT ptd0ensure_dyn(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 80
c_rt_lib0move(&___nl__2, c_std_lib0is_variant(___nl__0));
#line 80
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 80
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 80
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 80
c_rt_lib0move(&___nl__4,___get_global_const(951));
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(1, ___nl__4));
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
nl_die_arg(___nl__3);
#line 80
goto label_2;
#line 80
label_2:
#line 80
c_rt_lib0clear(&___nl__2);
#line 80
c_rt_lib0clear(&___nl__3);
#line 81
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(948)));
#line 81
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 86
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(943)));
#line 86
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 91
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(944)));
#line 91
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 98
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(945)));
#line 98
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 100
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(950)));
#line 100
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 111
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(949)));
#line 111
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 112
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(5)));
#line 112
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 112
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 112
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 112
nl_die_arg(___nl__2);
#line 81
label_4:
#line 81
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(948)));
#line 82
c_rt_lib0move(&___nl__4, c_std_lib0is_hash(___nl__1));
#line 82
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 82
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 82
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 82
c_rt_lib0move(&___nl__6,___get_global_const(952));
#line 82
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 82
c_rt_lib0clear(&___nl__6);
#line 82
nl_die_arg(___nl__5);
#line 82
goto label_12;
#line 82
label_12:
#line 82
c_rt_lib0clear(&___nl__4);
#line 82
c_rt_lib0clear(&___nl__5);
#line 83
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__1));
#line 83
label_15:
#line 83
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 83
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 83
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 83
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__1, ___nl__4));
#line 84
c_rt_lib0delete(ptd0ensure_dyn(___nl__3, ___nl__5));
#line 85
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 85
goto label_15;
#line 85
label_13:
#line 85
c_rt_lib0clear(&___nl__4);
#line 85
c_rt_lib0clear(&___nl__5);
#line 85
c_rt_lib0clear(&___nl__6);
#line 85
c_rt_lib0clear(&___nl__3);
#line 86
goto label_3;
#line 86
label_5:
#line 86
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(943)));
#line 87
c_rt_lib0move(&___nl__4, c_std_lib0is_array(___nl__1));
#line 87
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 87
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 87
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 87
c_rt_lib0move(&___nl__6,___get_global_const(953));
#line 87
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 87
c_rt_lib0clear(&___nl__6);
#line 87
nl_die_arg(___nl__5);
#line 87
goto label_17;
#line 87
label_17:
#line 87
c_rt_lib0clear(&___nl__4);
#line 87
c_rt_lib0clear(&___nl__5);
#line 88
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 88
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 88
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 88
label_20:
#line 88
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 88
if(c_rt_lib0check_true_native(___nl__8)){ goto label_18;}
#line 88
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 89
c_rt_lib0delete(ptd0ensure_dyn(___nl__3, ___nl__4));
#line 90
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 90
goto label_20;
#line 90
label_18:
#line 90
c_rt_lib0clear(&___nl__4);
#line 90
c_rt_lib0clear(&___nl__5);
#line 90
c_rt_lib0clear(&___nl__6);
#line 90
c_rt_lib0clear(&___nl__7);
#line 90
c_rt_lib0clear(&___nl__8);
#line 90
c_rt_lib0clear(&___nl__3);
#line 91
goto label_3;
#line 91
label_6:
#line 91
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(944)));
#line 92
c_rt_lib0move(&___nl__4, c_std_lib0is_hash(___nl__1));
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 92
if(c_rt_lib0check_true_native(___nl__4)){ goto label_22;}
#line 92
c_rt_lib0move(&___nl__6,___get_global_const(954));
#line 92
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 92
c_rt_lib0clear(&___nl__6);
#line 92
nl_die_arg(___nl__5);
#line 92
goto label_22;
#line 92
label_22:
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0clear(&___nl__5);
#line 93
c_rt_lib0move(&___nl__4, hash0size(___nl__3));
#line 93
c_rt_lib0move(&___nl__5, hash0size(___nl__1));
#line 93
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 93
c_rt_lib0clear(&___nl__5);
#line 93
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 93
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 93
if(c_rt_lib0check_true_native(___nl__4)){ goto label_24;}
#line 93
c_rt_lib0move(&___nl__6,___get_global_const(955));
#line 93
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 93
c_rt_lib0clear(&___nl__6);
#line 93
nl_die_arg(___nl__5);
#line 93
goto label_24;
#line 93
label_24:
#line 93
c_rt_lib0clear(&___nl__4);
#line 93
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 94
label_27:
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 94
if(c_rt_lib0check_true_native(___nl__4)){ goto label_25;}
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 95
c_rt_lib0move(&___nl__7, hash0has_key(___nl__1, ___nl__4));
#line 95
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 95
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 95
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
#line 95
c_rt_lib0move(&___nl__9,___get_global_const(956));
#line 95
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 95
c_rt_lib0move(&___nl__10,___get_global_const(957));
#line 95
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 95
c_rt_lib0clear(&___nl__10);
#line 95
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(1, ___nl__9));
#line 95
c_rt_lib0clear(&___nl__9);
#line 95
nl_die_arg(___nl__8);
#line 95
goto label_29;
#line 95
label_29:
#line 95
c_rt_lib0clear(&___nl__7);
#line 95
c_rt_lib0clear(&___nl__8);
#line 96
c_rt_lib0move(&___nl__7, hash0get_value(___nl__1, ___nl__4));
#line 96
c_rt_lib0delete(ptd0ensure_dyn(___nl__5, ___nl__7));
#line 96
c_rt_lib0clear(&___nl__7);
#line 97
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 97
goto label_27;
#line 97
label_25:
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0clear(&___nl__6);
#line 97
c_rt_lib0clear(&___nl__3);
#line 98
goto label_3;
#line 98
label_7:
#line 99
c_rt_lib0move(&___nl__3, c_std_lib0is_sim(___nl__1));
#line 99
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 99
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 99
if(c_rt_lib0check_true_native(___nl__3)){ goto label_31;}
#line 99
c_rt_lib0move(&___nl__5,___get_global_const(958));
#line 99
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 99
c_rt_lib0clear(&___nl__5);
#line 99
nl_die_arg(___nl__4);
#line 99
goto label_31;
#line 99
label_31:
#line 99
c_rt_lib0clear(&___nl__3);
#line 99
c_rt_lib0clear(&___nl__4);
#line 100
goto label_3;
#line 100
label_8:
#line 100
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(950)));
#line 101
c_rt_lib0move(&___nl__4, c_std_lib0is_variant(___nl__1));
#line 101
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 101
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 101
if(c_rt_lib0check_true_native(___nl__4)){ goto label_33;}
#line 101
c_rt_lib0move(&___nl__6,___get_global_const(959));
#line 101
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 101
c_rt_lib0clear(&___nl__6);
#line 101
nl_die_arg(___nl__5);
#line 101
goto label_33;
#line 101
label_33:
#line 101
c_rt_lib0clear(&___nl__4);
#line 101
c_rt_lib0clear(&___nl__5);
#line 102
c_rt_lib0move(&___nl__4, ov0get_element(___nl__1));
#line 103
c_rt_lib0move(&___nl__5, hash0has_key(___nl__3, ___nl__4));
#line 103
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 103
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 103
if(c_rt_lib0check_true_native(___nl__5)){ goto label_35;}
#line 103
c_rt_lib0move(&___nl__7,___get_global_const(960));
#line 103
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 103
c_rt_lib0move(&___nl__8,___get_global_const(961));
#line 103
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 103
c_rt_lib0clear(&___nl__8);
#line 103
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 103
c_rt_lib0clear(&___nl__7);
#line 103
nl_die_arg(___nl__6);
#line 103
goto label_35;
#line 103
label_35:
#line 103
c_rt_lib0clear(&___nl__5);
#line 103
c_rt_lib0clear(&___nl__6);
#line 104
c_rt_lib0move(&___nl__5, hash0get_value(___nl__3, ___nl__4));
#line 105
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(734)));
#line 105
if(c_rt_lib0check_true_native(___nl__6)){ goto label_37;}
#line 108
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(733)));
#line 108
if(c_rt_lib0check_true_native(___nl__6)){ goto label_38;}
#line 108
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 108
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 108
nl_die_arg(___nl__6);
#line 105
label_37:
#line 105
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(734)));
#line 106
c_rt_lib0move(&___nl__8, ov0has_value(___nl__1));
#line 106
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 106
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 106
if(c_rt_lib0check_true_native(___nl__8)){ goto label_40;}
#line 106
c_rt_lib0move(&___nl__10,___get_global_const(962));
#line 106
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 106
c_rt_lib0clear(&___nl__10);
#line 106
nl_die_arg(___nl__9);
#line 106
goto label_40;
#line 106
label_40:
#line 106
c_rt_lib0clear(&___nl__8);
#line 106
c_rt_lib0clear(&___nl__9);
#line 107
c_rt_lib0move(&___nl__8, ov0get_value(___nl__1));
#line 107
c_rt_lib0delete(ptd0ensure_dyn(___nl__7, ___nl__8));
#line 107
c_rt_lib0clear(&___nl__8);
#line 107
c_rt_lib0clear(&___nl__7);
#line 108
goto label_36;
#line 108
label_38:
#line 109
c_rt_lib0move(&___nl__7, ov0has_value(___nl__1));
#line 109
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 109
if(c_rt_lib0check_true_native(___nl__7)){ goto label_42;}
#line 109
c_rt_lib0move(&___nl__9,___get_global_const(963));
#line 109
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(1, ___nl__9));
#line 109
c_rt_lib0clear(&___nl__9);
#line 109
nl_die_arg(___nl__8);
#line 109
goto label_42;
#line 109
label_42:
#line 109
c_rt_lib0clear(&___nl__7);
#line 109
c_rt_lib0clear(&___nl__8);
#line 110
goto label_36;
#line 110
label_36:
#line 110
c_rt_lib0clear(&___nl__6);
#line 110
c_rt_lib0clear(&___nl__4);
#line 110
c_rt_lib0clear(&___nl__5);
#line 110
c_rt_lib0clear(&___nl__3);
#line 111
goto label_3;
#line 111
label_9:
#line 112
goto label_3;
#line 112
label_10:
#line 112
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(5)));
#line 113
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 113
c_rt_lib0move(&___nl__4, ptd_priv0exec(___nl__0, ___nl__5));
#line 113
c_rt_lib0clear(&___nl__5);
#line 113
c_rt_lib0delete(ptd0ensure_dyn(___nl__4, ___nl__1));
#line 113
c_rt_lib0clear(&___nl__4);
#line 113
c_rt_lib0clear(&___nl__3);
#line 114
goto label_3;
#line 114
label_3:
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
c_rt_lib0clear(&___nl__0);
#line 114
c_rt_lib0clear(&___nl__1);
#line 114
return NULL;
}

ImmT ptd0is_ref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0is_ref_type");
return ptd0is_ref_type(_tab[0], _tab[1]);}
ImmT ptd0is_ref_type(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 118
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(5)));
#line 118
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 128
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(949)));
#line 128
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 129
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(945)));
#line 129
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 130
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(943)));
#line 130
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(950)));
#line 131
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 132
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(944)));
#line 132
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 133
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(948)));
#line 133
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 133
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 133
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 133
nl_die_arg(___nl__2);
#line 118
label_2:
#line 118
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(5)));
#line 119
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(5)));
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 119
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 119
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 119
c_rt_lib0clear(&___nl__0);
#line 119
c_rt_lib0clear(&___nl__1);
#line 119
c_rt_lib0clear(&___nl__2);
#line 119
c_rt_lib0clear(&___nl__3);
#line 119
c_rt_lib0clear(&___nl__4);
#line 119
return ___nl__5;
#line 119
c_rt_lib0clear(&___nl__5);
#line 119
goto label_10;
#line 119
label_10:
#line 119
c_rt_lib0clear(&___nl__4);
#line 120
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(5)));
#line 121
c_rt_lib0move(&___nl__5, c_std_lib0is_hash(___nl__4));
#line 121
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 121
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 122
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(99)));
#line 122
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(99)));
#line 122
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 122
c_rt_lib0clear(&___nl__7);
#line 122
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 122
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 122
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 122
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 122
c_rt_lib0clear(&___nl__0);
#line 122
c_rt_lib0clear(&___nl__1);
#line 122
c_rt_lib0clear(&___nl__2);
#line 122
c_rt_lib0clear(&___nl__3);
#line 122
c_rt_lib0clear(&___nl__4);
#line 122
c_rt_lib0clear(&___nl__5);
#line 122
c_rt_lib0clear(&___nl__6);
#line 122
return ___nl__7;
#line 122
c_rt_lib0clear(&___nl__7);
#line 122
goto label_14;
#line 122
label_14:
#line 122
c_rt_lib0clear(&___nl__6);
#line 123
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 123
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(76)));
#line 123
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 123
c_rt_lib0clear(&___nl__7);
#line 123
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 123
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 123
if(c_rt_lib0check_true_native(___nl__6)){ goto label_16;}
#line 123
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 123
c_rt_lib0clear(&___nl__0);
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
c_rt_lib0clear(&___nl__2);
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
goto label_16;
#line 123
label_16:
#line 123
c_rt_lib0clear(&___nl__6);
#line 124
goto label_11;
#line 124
label_12:
#line 125
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__3));
#line 125
c_rt_lib0clear(&___nl__0);
#line 125
c_rt_lib0clear(&___nl__1);
#line 125
c_rt_lib0clear(&___nl__2);
#line 125
c_rt_lib0clear(&___nl__3);
#line 125
c_rt_lib0clear(&___nl__4);
#line 125
c_rt_lib0clear(&___nl__5);
#line 125
return ___nl__6;
#line 125
c_rt_lib0clear(&___nl__6);
#line 126
goto label_11;
#line 126
label_11:
#line 126
c_rt_lib0clear(&___nl__5);
#line 127
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 127
c_rt_lib0clear(&___nl__0);
#line 127
c_rt_lib0clear(&___nl__1);
#line 127
c_rt_lib0clear(&___nl__2);
#line 127
c_rt_lib0clear(&___nl__3);
#line 127
c_rt_lib0clear(&___nl__4);
#line 127
return ___nl__5;
#line 127
c_rt_lib0clear(&___nl__5);
#line 127
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0clear(&___nl__3);
#line 128
goto label_1;
#line 128
label_3:
#line 129
goto label_1;
#line 129
label_4:
#line 130
goto label_1;
#line 130
label_5:
#line 130
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(943)));
#line 130
c_rt_lib0clear(&___nl__3);
#line 131
goto label_1;
#line 131
label_6:
#line 131
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(950)));
#line 131
c_rt_lib0clear(&___nl__3);
#line 132
goto label_1;
#line 132
label_7:
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(944)));
#line 132
c_rt_lib0clear(&___nl__3);
#line 133
goto label_1;
#line 133
label_8:
#line 133
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(948)));
#line 133
c_rt_lib0clear(&___nl__3);
#line 134
goto label_1;
#line 134
label_1:
#line 134
c_rt_lib0clear(&___nl__2);
#line 135
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 135
c_rt_lib0clear(&___nl__0);
#line 135
c_rt_lib0clear(&___nl__1);
#line 135
return ___nl__2;
#line 135
c_rt_lib0clear(&___nl__2);
#line 135
c_rt_lib0clear(&___nl__0);
#line 135
c_rt_lib0clear(&___nl__1);
#line 135
return NULL;
}

ImmT ptd_priv0exec(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 139
c_rt_lib0move(&___nl__2, c_std_lib0exec(___nl__0, &___nl__1));
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
return ___nl__2;
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
return NULL;
}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void ptd_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}}
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
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
