
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "wprinter.h"
#include "string.h"
#include "ptd.h"
#include "array.h"
#include "boolean_t.h"
#include "wprinter.h"
#line 1 "wprinter.nl"

static ImmT *__const__f = NULL;
ImmT wprinter_priv0__const__sim(int __nr);
ImmT wprinter_priv0__const__sing(int __nr);

ImmT wprinter_priv0get_tab_size();
ImmT wprinter_priv0get_line_width();
ImmT wprinter_priv0get_sep();
ImmT wprinter_priv0is_to_long(ImmT ___nl__0);
ImmT wprinter_priv0state_print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT wprinter_priv0pind(ImmT ___nl__0);
ImmT wprinter_priv0count_len(ImmT ___nl__0);
ImmT wprinter_priv0print_sim_arr(ImmT * ___ref___0,ImmT ___nl__1);
ImmT wprinter_priv0print_str_arr(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);
ImmT wprinter_priv0print_sim_rec(ImmT * ___ref___0,ImmT ___nl__1);
ImmT wprinter_priv0flush_list(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5);
ImmT wprinter_priv0print_arr_in_lines(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);
ImmT wprinter_priv0process_list(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4);
ImmT wprinter_priv0print_t_rec(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);


ImmT wprinter_priv0get_tab_size(){
return wprinter_priv0__const__sing(0);}
ImmT wprinter_priv0get_tab_size0cal() {
ImmT ___nl__0 = NULL;
#line 12
c_rt_lib0move(&___nl__0,___get_global_const(82));
#line 12
return ___nl__0;
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return NULL;
}

ImmT wprinter_priv0get_line_width(){
return wprinter_priv0__const__sing(1);}
ImmT wprinter_priv0get_line_width0cal() {
ImmT ___nl__0 = NULL;
#line 16
c_rt_lib0move(&___nl__0,___get_global_const(1272));
#line 16
return ___nl__0;
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return NULL;
}

ImmT wprinter_priv0get_sep(){
return wprinter_priv0__const__sing(2);}
ImmT wprinter_priv0get_sep0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 20
c_rt_lib0move(&___nl__1,___get_global_const(1));
#line 20
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(1273)));
#line 20
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__1, ___get_global_const(1009), ___nl__2));
#line 20
c_rt_lib0clear(&___nl__1);
#line 20
c_rt_lib0clear(&___nl__2);
#line 20
return ___nl__0;
#line 20
c_rt_lib0clear(&___nl__0);
#line 20
return NULL;
}

ImmT wprinter0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0state_t");
return wprinter0state_t();}
ImmT wprinter0state_t(){
return wprinter_priv0__const__sing(3);}
ImmT wprinter0state_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 24
c_rt_lib0move(&___nl__2, ptd0sim());
#line 24
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(1, ___get_global_const(167), ___nl__2));
#line 24
c_rt_lib0clear(&___nl__2);
#line 24
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 24
c_rt_lib0clear(&___nl__1);
#line 24
return ___nl__0;
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
return NULL;
}

ImmT wprinter_priv0is_to_long(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 28
c_rt_lib0move(&___nl__1, wprinter_priv0get_line_width());
#line 28
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__0, ___nl__1));
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
return ___nl__1;
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
return NULL;
}

ImmT wprinter_priv0state_print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 32
c_rt_lib0move(&___nl__2,___get_global_const(167));
#line 32
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 32
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 32
c_rt_lib0move(&___nl__3,___get_global_const(167));
#line 32
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
return NULL;
}

ImmT wprinter_priv0pind(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 36
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 37
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 37
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 37
label_3:
#line 37
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__0));
#line 37
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 37
c_rt_lib0move(&___nl__6,___get_global_const(243));
#line 37
c_rt_lib0move(&___nl__5, string0chr(___nl__6));
#line 37
c_rt_lib0clear(&___nl__6);
#line 37
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__5));
#line 37
c_rt_lib0clear(&___nl__5);
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 37
goto label_3;
#line 37
label_13:
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__3);
#line 37
c_rt_lib0clear(&___nl__4);
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
return ___nl__1;
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
return NULL;
}

ImmT wprinter0arr_kind_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0arr_kind_t");
return wprinter0arr_kind_t();}
ImmT wprinter0arr_kind_t(){
return wprinter_priv0__const__sing(4);}
ImmT wprinter0arr_kind_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 42
c_rt_lib0move(&___nl__2, ptd0none());
#line 42
c_rt_lib0move(&___nl__3, ptd0none());
#line 42
c_rt_lib0move(&___nl__4, ptd0none());
#line 42
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(3), ___nl__2, ___get_global_const(1274), ___nl__3, ___get_global_const(1275), ___nl__4));
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 42
c_rt_lib0clear(&___nl__1);
#line 42
return ___nl__0;
#line 42
c_rt_lib0clear(&___nl__0);
#line 42
return NULL;
}

ImmT wprinter0pretty_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0pretty_t");
return wprinter0pretty_t();}
ImmT wprinter0pretty_t(){
return wprinter_priv0__const__sing(5);}
ImmT wprinter0pretty_t0cal() {
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
#line 47
c_rt_lib0move(&___nl__2, ptd0sim());
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(wprinter0pretty_arr_t0ptr, ___get_global_const(1276), ___get_global_const(1277)));
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 49
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(wprinter0arr_kind_t0ptr, ___get_global_const(1276), ___get_global_const(1278)));
#line 49
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 49
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__7, ___get_global_const(63), ___nl__8));
#line 49
c_rt_lib0clear(&___nl__7);
#line 49
c_rt_lib0clear(&___nl__8);
#line 49
c_rt_lib0move(&___nl__5, ptd0rec(___nl__6));
#line 49
c_rt_lib0clear(&___nl__6);
#line 50
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(wprinter0pretty_arr_t0ptr, ___get_global_const(1276), ___get_global_const(1277)));
#line 50
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 50
c_rt_lib0move(&___nl__9, ptd0sim());
#line 50
c_rt_lib0move(&___nl__10, ptd0sim());
#line 50
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(327), ___nl__8, ___get_global_const(834), ___nl__9, ___get_global_const(905), ___nl__10));
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
c_rt_lib0clear(&___nl__9);
#line 50
c_rt_lib0clear(&___nl__10);
#line 50
c_rt_lib0move(&___nl__6, ptd0rec(___nl__7));
#line 50
c_rt_lib0clear(&___nl__7);
#line 51
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(wprinter0pretty_t0ptr, ___get_global_const(1276), ___get_global_const(1279)));
#line 51
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 51
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(wprinter0pretty_t0ptr, ___get_global_const(1276), ___get_global_const(1279)));
#line 51
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 51
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(1115), ___nl__9, ___get_global_const(1116), ___nl__10));
#line 51
c_rt_lib0clear(&___nl__9);
#line 51
c_rt_lib0clear(&___nl__10);
#line 51
c_rt_lib0move(&___nl__7, ptd0rec(___nl__8));
#line 51
c_rt_lib0clear(&___nl__8);
#line 52
c_rt_lib0move(&___nl__8, ptd0sim());
#line 53
c_rt_lib0move(&___nl__9, ptd0none());
#line 54
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(wprinter0str_arr_t0ptr, ___get_global_const(1276), ___get_global_const(1280)));
#line 54
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 54
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(6, ___get_global_const(327), ___nl__5, ___get_global_const(204), ___nl__6, ___get_global_const(1281), ___nl__7, ___get_global_const(337), ___nl__8, ___get_global_const(1273), ___nl__9, ___get_global_const(1282), ___nl__10));
#line 54
c_rt_lib0clear(&___nl__5);
#line 54
c_rt_lib0clear(&___nl__6);
#line 54
c_rt_lib0clear(&___nl__7);
#line 54
c_rt_lib0clear(&___nl__8);
#line 54
c_rt_lib0clear(&___nl__9);
#line 54
c_rt_lib0clear(&___nl__10);
#line 54
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__2, ___get_global_const(1009), ___nl__3));
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__3);
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

ImmT wprinter0str_arr_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0str_arr_t");
return wprinter0str_arr_t();}
ImmT wprinter0str_arr_t(){
return wprinter_priv0__const__sing(6);}
ImmT wprinter0str_arr_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 60
c_rt_lib0move(&___nl__3, ptd0sim());
#line 60
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 60
c_rt_lib0clear(&___nl__3);
#line 60
c_rt_lib0move(&___nl__5, ptd0none());
#line 60
c_rt_lib0move(&___nl__6, ptd0none());
#line 60
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(905), ___nl__5, ___get_global_const(906), ___nl__6));
#line 60
c_rt_lib0clear(&___nl__5);
#line 60
c_rt_lib0clear(&___nl__6);
#line 60
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 60
c_rt_lib0clear(&___nl__4);
#line 60
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__2, ___get_global_const(907), ___nl__3));
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
c_rt_lib0clear(&___nl__3);
#line 60
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 60
c_rt_lib0clear(&___nl__1);
#line 60
return ___nl__0;
#line 60
c_rt_lib0clear(&___nl__0);
#line 60
return NULL;
}

ImmT wprinter0pretty_arr_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0pretty_arr_t");
return wprinter0pretty_arr_t();}
ImmT wprinter0pretty_arr_t(){
return wprinter_priv0__const__sing(7);}
ImmT wprinter0pretty_arr_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 64
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(wprinter0pretty_t0ptr, ___get_global_const(1276), ___get_global_const(1279)));
#line 64
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 64
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
return ___nl__0;
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
return NULL;
}

ImmT wprinter0get_sep0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "wprinter0get_sep");
return wprinter0get_sep();}
ImmT wprinter0get_sep(){
return wprinter_priv0__const__sing(8);}
ImmT wprinter0get_sep0cal() {
ImmT ___nl__0 = NULL;
#line 68
c_rt_lib0move(&___nl__0, wprinter_priv0get_sep());
#line 68
return ___nl__0;
#line 68
c_rt_lib0clear(&___nl__0);
#line 68
return NULL;
}

ImmT wprinter_priv0count_len(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 72
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 73
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 73
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 73
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 73
label_4:
#line 73
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 73
if(c_rt_lib0check_true_native(___nl__6)){ goto label_13;}
#line 73
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 74
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(242)));
#line 74
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__7));
#line 74
c_rt_lib0clear(&___nl__7);
#line 75
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 75
goto label_4;
#line 75
label_13:
#line 75
c_rt_lib0clear(&___nl__2);
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0clear(&___nl__4);
#line 75
c_rt_lib0clear(&___nl__5);
#line 75
c_rt_lib0clear(&___nl__6);
#line 76
c_rt_lib0clear(&___nl__0);
#line 76
return ___nl__1;
#line 76
c_rt_lib0clear(&___nl__1);
#line 76
c_rt_lib0clear(&___nl__0);
#line 76
return NULL;
}

ImmT wprinter0build_pretty_a0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_pretty_a");
return wprinter0build_pretty_a(_tab[0]);}
ImmT wprinter0build_pretty_a(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 80
c_rt_lib0move(&___nl__2, wprinter_priv0count_len(___nl__0));
#line 80
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(3)));
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__0, ___get_global_const(63), ___nl__4));
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(327), ___nl__3));
#line 80
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__2, ___get_global_const(1009), ___nl__3));
#line 80
c_rt_lib0clear(&___nl__2);
#line 80
c_rt_lib0clear(&___nl__3);
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
return ___nl__1;
#line 80
c_rt_lib0clear(&___nl__1);
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
return NULL;
}

ImmT wprinter0build_pretty_l0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_pretty_l");
return wprinter0build_pretty_l(_tab[0]);}
ImmT wprinter0build_pretty_l(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 84
c_rt_lib0move(&___nl__2, wprinter_priv0count_len(___nl__0));
#line 84
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(1274)));
#line 84
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__0, ___get_global_const(63), ___nl__4));
#line 84
c_rt_lib0clear(&___nl__4);
#line 84
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(327), ___nl__3));
#line 84
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__2, ___get_global_const(1009), ___nl__3));
#line 84
c_rt_lib0clear(&___nl__2);
#line 84
c_rt_lib0clear(&___nl__3);
#line 84
c_rt_lib0clear(&___nl__0);
#line 84
return ___nl__1;
#line 84
c_rt_lib0clear(&___nl__1);
#line 84
c_rt_lib0clear(&___nl__0);
#line 84
return NULL;
}

ImmT wprinter0build_pretty_op_l0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_pretty_op_l");
return wprinter0build_pretty_op_l(_tab[0]);}
ImmT wprinter0build_pretty_op_l(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 88
c_rt_lib0move(&___nl__2, wprinter_priv0count_len(___nl__0));
#line 88
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(1275)));
#line 88
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__0, ___get_global_const(63), ___nl__4));
#line 88
c_rt_lib0clear(&___nl__4);
#line 88
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(327), ___nl__3));
#line 88
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__2, ___get_global_const(1009), ___nl__3));
#line 88
c_rt_lib0clear(&___nl__2);
#line 88
c_rt_lib0clear(&___nl__3);
#line 88
c_rt_lib0clear(&___nl__0);
#line 88
return ___nl__1;
#line 88
c_rt_lib0clear(&___nl__1);
#line 88
c_rt_lib0clear(&___nl__0);
#line 88
return NULL;
}

ImmT wprinter0build_pretty_bind0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "wprinter0build_pretty_bind");
return wprinter0build_pretty_bind(_tab[0], _tab[1]);}
ImmT wprinter0build_pretty_bind(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 92
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(242)));
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(242)));
#line 92
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(1115), ___nl__0, ___get_global_const(1116), ___nl__1));
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(1281), ___nl__4));
#line 92
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__3, ___get_global_const(1009), ___nl__4));
#line 92
c_rt_lib0clear(&___nl__3);
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0clear(&___nl__0);
#line 92
c_rt_lib0clear(&___nl__1);
#line 92
return ___nl__2;
#line 92
c_rt_lib0clear(&___nl__2);
#line 92
c_rt_lib0clear(&___nl__0);
#line 92
c_rt_lib0clear(&___nl__1);
#line 92
return NULL;
}

ImmT wprinter0build_pretty_arr_decl0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "wprinter0build_pretty_arr_decl");
return wprinter0build_pretty_arr_decl(_tab[0], _tab[1], _tab[2]);}
ImmT wprinter0build_pretty_arr_decl(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 98
c_rt_lib0move(&___nl__4, wprinter_priv0count_len(___nl__0));
#line 98
c_rt_lib0move(&___nl__5, string0length(___nl__1));
#line 98
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 98
c_rt_lib0clear(&___nl__5);
#line 98
c_rt_lib0move(&___nl__5, string0length(___nl__2));
#line 98
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 98
c_rt_lib0clear(&___nl__5);
#line 99
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(327), ___nl__0, ___get_global_const(834), ___nl__1, ___get_global_const(905), ___nl__2));
#line 99
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(204), ___nl__5));
#line 99
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__4, ___get_global_const(1009), ___nl__5));
#line 99
c_rt_lib0clear(&___nl__4);
#line 99
c_rt_lib0clear(&___nl__5);
#line 99
c_rt_lib0clear(&___nl__0);
#line 99
c_rt_lib0clear(&___nl__1);
#line 99
c_rt_lib0clear(&___nl__2);
#line 99
return ___nl__3;
#line 99
c_rt_lib0clear(&___nl__3);
#line 99
c_rt_lib0clear(&___nl__0);
#line 99
c_rt_lib0clear(&___nl__1);
#line 99
c_rt_lib0clear(&___nl__2);
#line 99
return NULL;
}

ImmT wprinter0build_sim0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "wprinter0build_sim");
return wprinter0build_sim(_tab[0]);}
ImmT wprinter0build_sim(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 104
c_rt_lib0move(&___nl__2, string0length(___nl__0));
#line 104
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(337), ___nl__0));
#line 104
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__2, ___get_global_const(1009), ___nl__3));
#line 104
c_rt_lib0clear(&___nl__2);
#line 104
c_rt_lib0clear(&___nl__3);
#line 104
c_rt_lib0clear(&___nl__0);
#line 104
return ___nl__1;
#line 104
c_rt_lib0clear(&___nl__1);
#line 104
c_rt_lib0clear(&___nl__0);
#line 104
return NULL;
}

ImmT wprinter0build_str_arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "wprinter0build_str_arr");
return wprinter0build_str_arr(_tab[0], _tab[1]);}
ImmT wprinter0build_str_arr(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 111
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(905)));
#line 111
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 113
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(906)));
#line 113
if(c_rt_lib0check_true_native(___nl__2)){ goto label_29;}
#line 113
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 113
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 113
nl_die_arg(___nl__2);
#line 111
label_7:
#line 112
c_rt_lib0move(&___nl__3, array0len(___nl__0));
#line 112
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 112
c_rt_lib0move(&___nl__3, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 112
c_rt_lib0clear(&___nl__4);
#line 112
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 112
if(c_rt_lib0check_true_native(___nl__3)){ goto label_26;}
#line 112
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 112
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__0, ___nl__6));
#line 112
c_rt_lib0clear(&___nl__6);
#line 112
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 112
c_rt_lib0clear(&___nl__5);
#line 112
c_rt_lib0clear(&___nl__0);
#line 112
c_rt_lib0clear(&___nl__1);
#line 112
c_rt_lib0clear(&___nl__2);
#line 112
c_rt_lib0clear(&___nl__3);
#line 112
return ___nl__4;
#line 112
c_rt_lib0clear(&___nl__4);
#line 112
goto label_26;
#line 112
label_26:
#line 112
c_rt_lib0clear(&___nl__3);
#line 113
goto label_31;
#line 113
label_29:
#line 114
goto label_31;
#line 114
label_31:
#line 114
c_rt_lib0clear(&___nl__2);
#line 115
c_rt_lib0move(&___nl__3,___get_global_const(6));
#line 115
c_rt_lib0move(&___nl__4, wprinter_priv0get_line_width());
#line 115
c_rt_lib0move(&___nl__3, c_rt_lib0mul_mod(___nl__3, ___nl__4));
#line 115
c_rt_lib0clear(&___nl__4);
#line 115
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__0, ___get_global_const(907), ___nl__1));
#line 115
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(1282), ___nl__4));
#line 115
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(242), ___nl__3, ___get_global_const(1009), ___nl__4));
#line 115
c_rt_lib0clear(&___nl__3);
#line 115
c_rt_lib0clear(&___nl__4);
#line 115
c_rt_lib0clear(&___nl__0);
#line 115
c_rt_lib0clear(&___nl__1);
#line 115
return ___nl__2;
#line 115
c_rt_lib0clear(&___nl__2);
#line 115
c_rt_lib0clear(&___nl__0);
#line 115
c_rt_lib0clear(&___nl__1);
#line 115
return NULL;
}

ImmT wprinter_priv0print_sim_arr(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 119
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 119
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 119
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__1));
#line 119
label_3:
#line 119
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 119
if(c_rt_lib0check_true_native(___nl__6)){ goto label_10;}
#line 119
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 120
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___0, ___nl__2));
#line 121
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 121
goto label_3;
#line 121
label_10:
#line 121
c_rt_lib0clear(&___nl__2);
#line 121
c_rt_lib0clear(&___nl__3);
#line 121
c_rt_lib0clear(&___nl__4);
#line 121
c_rt_lib0clear(&___nl__5);
#line 121
c_rt_lib0clear(&___nl__6);
#line 121
c_rt_lib0clear(&___nl__1);
#line 121
return NULL;
}

ImmT wprinter_priv0print_str_arr(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
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
ImmT ___nl__14 = NULL;
#line 126
c_rt_lib0copy(&___nl__4, ___nl__2);
#line 127
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(327)));
#line 128
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 128
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__5, ___nl__9));
#line 128
c_rt_lib0clear(&___nl__9);
#line 128
c_rt_lib0move(&___nl__7, string0length(___nl__8));
#line 128
c_rt_lib0clear(&___nl__8);
#line 128
c_rt_lib0move(&___nl__7, c_rt_lib0add(___nl__2, ___nl__7));
#line 128
c_rt_lib0move(&___nl__6, wprinter_priv0is_to_long(___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 128
if(c_rt_lib0check_true_native(___nl__6)){ goto label_23;}
#line 129
c_rt_lib0move(&___nl__7, string0lf());
#line 129
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__7));
#line 129
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0move(&___nl__7, wprinter_priv0pind(___nl__3));
#line 130
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__7));
#line 130
c_rt_lib0clear(&___nl__7);
#line 131
c_rt_lib0move(&___nl__7, wprinter_priv0get_tab_size());
#line 131
c_rt_lib0move(&___nl__7, c_rt_lib0mul_mod(___nl__7, ___nl__3));
#line 131
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 131
c_rt_lib0clear(&___nl__7);
#line 132
goto label_23;
#line 132
label_23:
#line 132
c_rt_lib0clear(&___nl__6);
#line 133
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 134
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 134
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 134
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__5));
#line 134
label_29:
#line 134
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 134
if(c_rt_lib0check_true_native(___nl__11)){ goto label_62;}
#line 134
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 135
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__7));
#line 136
c_rt_lib0move(&___nl__12, string0length(___nl__7));
#line 136
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__12));
#line 136
c_rt_lib0clear(&___nl__12);
#line 137
c_rt_lib0move(&___nl__12, array0len(___nl__5));
#line 137
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 137
c_rt_lib0move(&___nl__12, c_rt_lib0sub_mod(___nl__12, ___nl__13));
#line 137
c_rt_lib0clear(&___nl__13);
#line 137
c_rt_lib0move(&___nl__12, c_rt_lib0num_ne(___nl__6, ___nl__12));
#line 137
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 137
if(c_rt_lib0check_true_native(___nl__12)){ goto label_55;}
#line 138
c_rt_lib0move(&___nl__13, string0lf());
#line 138
c_rt_lib0move(&___nl__14, wprinter_priv0pind(___nl__3));
#line 138
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 138
c_rt_lib0clear(&___nl__14);
#line 138
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__13));
#line 138
c_rt_lib0clear(&___nl__13);
#line 139
c_rt_lib0move(&___nl__13, wprinter_priv0get_tab_size());
#line 139
c_rt_lib0move(&___nl__13, c_rt_lib0mul_mod(___nl__13, ___nl__3));
#line 139
c_rt_lib0copy(&___nl__4, ___nl__13);
#line 139
c_rt_lib0clear(&___nl__13);
#line 140
goto label_55;
#line 140
label_55:
#line 140
c_rt_lib0clear(&___nl__12);
#line 141
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 141
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__12));
#line 141
c_rt_lib0clear(&___nl__12);
#line 142
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 142
goto label_29;
#line 142
label_62:
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0clear(&___nl__8);
#line 142
c_rt_lib0clear(&___nl__9);
#line 142
c_rt_lib0clear(&___nl__10);
#line 142
c_rt_lib0clear(&___nl__11);
#line 143
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(907)));
#line 143
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(906)));
#line 143
if(c_rt_lib0check_true_native(___nl__8)){ goto label_76;}
#line 146
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(905)));
#line 146
if(c_rt_lib0check_true_native(___nl__8)){ goto label_88;}
#line 146
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 146
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 146
nl_die_arg(___nl__8);
#line 143
label_76:
#line 144
c_rt_lib0move(&___nl__9, string0lf());
#line 144
c_rt_lib0move(&___nl__10, wprinter_priv0pind(___nl__3));
#line 144
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 144
c_rt_lib0clear(&___nl__10);
#line 144
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__9));
#line 144
c_rt_lib0clear(&___nl__9);
#line 145
c_rt_lib0move(&___nl__9, wprinter_priv0get_tab_size());
#line 145
c_rt_lib0move(&___nl__9, c_rt_lib0mul_mod(___nl__9, ___nl__3));
#line 145
c_rt_lib0copy(&___nl__4, ___nl__9);
#line 145
c_rt_lib0clear(&___nl__9);
#line 146
goto label_90;
#line 146
label_88:
#line 147
goto label_90;
#line 147
label_90:
#line 147
c_rt_lib0clear(&___nl__7);
#line 147
c_rt_lib0clear(&___nl__8);
#line 148
c_rt_lib0clear(&___nl__1);
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
c_rt_lib0clear(&___nl__5);
#line 148
c_rt_lib0clear(&___nl__6);
#line 148
return ___nl__4;
#line 148
c_rt_lib0clear(&___nl__4);
#line 148
c_rt_lib0clear(&___nl__5);
#line 148
c_rt_lib0clear(&___nl__6);
#line 148
c_rt_lib0clear(&___nl__1);
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
return NULL;
}

ImmT wprinter_priv0print_sim_rec(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 152
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1009)));
#line 152
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(337)));
#line 152
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 154
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(327)));
#line 154
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 156
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(1273)));
#line 156
if(c_rt_lib0check_true_native(___nl__3)){ goto label_28;}
#line 158
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(204)));
#line 158
if(c_rt_lib0check_true_native(___nl__3)){ goto label_33;}
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(1281)));
#line 162
if(c_rt_lib0check_true_native(___nl__3)){ goto label_46;}
#line 165
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(1282)));
#line 165
if(c_rt_lib0check_true_native(___nl__3)){ goto label_56;}
#line 165
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 165
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 165
nl_die_arg(___nl__3);
#line 152
label_16:
#line 152
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(337)));
#line 153
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__4));
#line 153
c_rt_lib0clear(&___nl__4);
#line 154
goto label_63;
#line 154
label_21:
#line 154
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(327)));
#line 155
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(327)));
#line 155
c_rt_lib0delete(wprinter_priv0print_sim_arr(___ref___0, ___nl__5));
#line 155
c_rt_lib0clear(&___nl__5);
#line 155
c_rt_lib0clear(&___nl__4);
#line 156
goto label_63;
#line 156
label_28:
#line 157
c_rt_lib0move(&___nl__4,___get_global_const(571));
#line 157
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__4));
#line 157
c_rt_lib0clear(&___nl__4);
#line 158
goto label_63;
#line 158
label_33:
#line 158
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(204)));
#line 159
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(834)));
#line 159
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__5));
#line 159
c_rt_lib0clear(&___nl__5);
#line 160
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(327)));
#line 160
c_rt_lib0delete(wprinter_priv0print_sim_arr(___ref___0, ___nl__5));
#line 160
c_rt_lib0clear(&___nl__5);
#line 161
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(905)));
#line 161
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__5));
#line 161
c_rt_lib0clear(&___nl__5);
#line 161
c_rt_lib0clear(&___nl__4);
#line 162
goto label_63;
#line 162
label_46:
#line 162
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(1281)));
#line 163
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1115)));
#line 163
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___0, ___nl__5));
#line 163
c_rt_lib0clear(&___nl__5);
#line 164
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1116)));
#line 164
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___0, ___nl__5));
#line 164
c_rt_lib0clear(&___nl__5);
#line 164
c_rt_lib0clear(&___nl__4);
#line 165
goto label_63;
#line 165
label_56:
#line 165
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(1282)));
#line 166
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 166
nl_die_arg(___nl__5);
#line 166
c_rt_lib0clear(&___nl__5);
#line 166
c_rt_lib0clear(&___nl__4);
#line 167
goto label_63;
#line 167
label_63:
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
c_rt_lib0clear(&___nl__3);
#line 167
c_rt_lib0clear(&___nl__1);
#line 167
return NULL;
}

ImmT wprinter0print_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "wprinter0print_t");
return wprinter0print_t(&_tab[0], _tab[1], _tab[2]);}
ImmT wprinter0print_t(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 171
c_rt_lib0move(&___nl__3, wprinter_priv0get_tab_size());
#line 171
c_rt_lib0move(&___nl__3, c_rt_lib0mul(___nl__2, ___nl__3));
#line 171
c_rt_lib0delete(wprinter_priv0print_t_rec(___ref___0, ___nl__1, ___nl__3, ___nl__2));
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
c_rt_lib0clear(&___nl__1);
#line 171
c_rt_lib0clear(&___nl__2);
#line 171
return NULL;
}

ImmT wprinter_priv0flush_list(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
#line 176
c_rt_lib0move(&___nl__6, wprinter_priv0is_to_long(___nl__3));
#line 176
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 176
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 176
if(c_rt_lib0check_true_native(___nl__6)){ goto label_27;}
#line 177
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 177
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__1));
#line 177
label_7:
#line 177
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 177
if(c_rt_lib0check_true_native(___nl__11)){ goto label_14;}
#line 177
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__1, ___nl__8));
#line 178
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___0, ___nl__7));
#line 179
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 179
goto label_7;
#line 179
label_14:
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
c_rt_lib0clear(&___nl__8);
#line 179
c_rt_lib0clear(&___nl__9);
#line 179
c_rt_lib0clear(&___nl__10);
#line 179
c_rt_lib0clear(&___nl__11);
#line 180
c_rt_lib0clear(&___nl__1);
#line 180
c_rt_lib0clear(&___nl__2);
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0clear(&___nl__5);
#line 180
c_rt_lib0clear(&___nl__6);
#line 180
return ___nl__3;
#line 181
goto label_103;
#line 181
label_27:
#line 182
c_rt_lib0move(&___nl__8, array0len(___nl__1));
#line 182
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 182
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 182
c_rt_lib0clear(&___nl__9);
#line 182
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__1, ___nl__8));
#line 182
c_rt_lib0clear(&___nl__8);
#line 182
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(1009)));
#line 182
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(1282)));
#line 182
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 182
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 182
if(c_rt_lib0check_true_native(___nl__7)){ goto label_73;}
#line 183
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 183
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__4, ___nl__8));
#line 183
c_rt_lib0move(&___nl__10, wprinter_priv0get_tab_size());
#line 183
c_rt_lib0move(&___nl__8, c_rt_lib0mul_mod(___nl__8, ___nl__10));
#line 183
c_rt_lib0clear(&___nl__10);
#line 183
c_rt_lib0move(&___nl__8, c_rt_lib0lt(___nl__8, ___nl__2));
#line 183
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 183
if(c_rt_lib0check_true_native(___nl__9)){ goto label_49;}
#line 183
c_rt_lib0copy(&___nl__8, ___nl__5);
#line 183
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 183
label_49:
#line 183
c_rt_lib0clear(&___nl__9);
#line 183
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 183
if(c_rt_lib0check_true_native(___nl__8)){ goto label_70;}
#line 184
c_rt_lib0move(&___nl__9, string0lf());
#line 184
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 184
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__4, ___nl__11));
#line 184
c_rt_lib0move(&___nl__10, wprinter_priv0pind(___nl__11));
#line 184
c_rt_lib0clear(&___nl__11);
#line 184
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 184
c_rt_lib0clear(&___nl__10);
#line 184
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__9));
#line 184
c_rt_lib0clear(&___nl__9);
#line 185
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 185
c_rt_lib0move(&___nl__9, c_rt_lib0add(___nl__4, ___nl__9));
#line 185
c_rt_lib0move(&___nl__10, wprinter_priv0get_tab_size());
#line 185
c_rt_lib0move(&___nl__9, c_rt_lib0mul_mod(___nl__9, ___nl__10));
#line 185
c_rt_lib0clear(&___nl__10);
#line 185
c_rt_lib0copy(&___nl__2, ___nl__9);
#line 185
c_rt_lib0clear(&___nl__9);
#line 186
goto label_70;
#line 186
label_70:
#line 186
c_rt_lib0clear(&___nl__8);
#line 187
goto label_73;
#line 187
label_73:
#line 187
c_rt_lib0clear(&___nl__7);
#line 188
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 188
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 188
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__1));
#line 188
label_78:
#line 188
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 188
if(c_rt_lib0check_true_native(___nl__11)){ goto label_90;}
#line 188
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__1, ___nl__8));
#line 189
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 189
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__4, ___nl__13));
#line 189
c_rt_lib0move(&___nl__12, wprinter_priv0print_t_rec(___ref___0, ___nl__7, ___nl__2, ___nl__13));
#line 189
c_rt_lib0clear(&___nl__13);
#line 189
c_rt_lib0copy(&___nl__2, ___nl__12);
#line 189
c_rt_lib0clear(&___nl__12);
#line 190
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 190
goto label_78;
#line 190
label_90:
#line 190
c_rt_lib0clear(&___nl__7);
#line 190
c_rt_lib0clear(&___nl__8);
#line 190
c_rt_lib0clear(&___nl__9);
#line 190
c_rt_lib0clear(&___nl__10);
#line 190
c_rt_lib0clear(&___nl__11);
#line 191
c_rt_lib0clear(&___nl__1);
#line 191
c_rt_lib0clear(&___nl__3);
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0clear(&___nl__6);
#line 191
return ___nl__2;
#line 192
goto label_103;
#line 192
label_103:
#line 192
c_rt_lib0clear(&___nl__6);
#line 192
c_rt_lib0clear(&___nl__1);
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0clear(&___nl__3);
#line 192
c_rt_lib0clear(&___nl__4);
#line 192
c_rt_lib0clear(&___nl__5);
#line 192
return NULL;
}

ImmT wprinter_priv0print_arr_in_lines(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
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
#line 197
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 197
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 197
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 197
label_3:
#line 197
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 197
if(c_rt_lib0check_true_native(___nl__8)){ goto label_32;}
#line 197
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 198
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1009)));
#line 198
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(1273)));
#line 198
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 198
if(c_rt_lib0check_true_native(___nl__9)){ goto label_24;}
#line 199
c_rt_lib0move(&___nl__10, string0lf());
#line 199
c_rt_lib0move(&___nl__11, wprinter_priv0pind(___nl__2));
#line 199
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 199
c_rt_lib0clear(&___nl__11);
#line 199
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__10));
#line 199
c_rt_lib0clear(&___nl__10);
#line 200
c_rt_lib0move(&___nl__10, wprinter_priv0get_tab_size());
#line 200
c_rt_lib0move(&___nl__10, c_rt_lib0mul(___nl__2, ___nl__10));
#line 200
c_rt_lib0copy(&___nl__3, ___nl__10);
#line 200
c_rt_lib0clear(&___nl__10);
#line 201
c_rt_lib0clear(&___nl__9);
#line 201
goto label_29;
#line 202
goto label_24;
#line 202
label_24:
#line 202
c_rt_lib0clear(&___nl__9);
#line 203
c_rt_lib0move(&___nl__9, wprinter_priv0print_t_rec(___ref___0, ___nl__4, ___nl__3, ___nl__2));
#line 203
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 203
c_rt_lib0clear(&___nl__9);
#line 203
label_29:
#line 204
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 204
goto label_3;
#line 204
label_32:
#line 204
c_rt_lib0clear(&___nl__4);
#line 204
c_rt_lib0clear(&___nl__5);
#line 204
c_rt_lib0clear(&___nl__6);
#line 204
c_rt_lib0clear(&___nl__7);
#line 204
c_rt_lib0clear(&___nl__8);
#line 205
c_rt_lib0clear(&___nl__1);
#line 205
c_rt_lib0clear(&___nl__2);
#line 205
return ___nl__3;
#line 205
c_rt_lib0clear(&___nl__1);
#line 205
c_rt_lib0clear(&___nl__2);
#line 205
c_rt_lib0clear(&___nl__3);
#line 205
return NULL;
}

ImmT wprinter_priv0process_list(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
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
#line 210
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 211
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 212
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 213
c_rt_lib0move(&___nl__8, array0len(___nl__1));
#line 213
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 213
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 213
label_6:
#line 213
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__9, ___nl__8));
#line 213
if(c_rt_lib0check_true_native(___nl__11)){ goto label_60;}
#line 214
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__1, ___nl__9));
#line 215
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(1009)));
#line 215
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(1273)));
#line 215
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 215
if(c_rt_lib0check_true_native(___nl__13)){ goto label_49;}
#line 216
c_rt_lib0move(&___nl__15, c_rt_lib0add(___nl__6, ___nl__3));
#line 216
if(c_rt_lib0check_true_native(___nl__2)){ goto label_18;}
#line 216
c_rt_lib0move(&___nl__16,___get_global_const(0));
#line 216
goto label_20;
#line 216
label_18:
#line 216
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 216
label_20:
#line 216
c_rt_lib0move(&___nl__16, c_rt_lib0sub(___nl__4, ___nl__16));
#line 216
c_rt_lib0copy(&___nl__17, ___nl__7);
#line 216
if(c_rt_lib0check_true_native(___nl__7)){ goto label_26;}
#line 216
c_rt_lib0copy(&___nl__17, ___nl__2);
#line 216
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 216
label_26:
#line 216
c_rt_lib0move(&___nl__14, wprinter_priv0flush_list(___ref___0, ___nl__5, ___nl__3, ___nl__15, ___nl__16, ___nl__17));
#line 216
c_rt_lib0clear(&___nl__17);
#line 216
c_rt_lib0clear(&___nl__16);
#line 216
c_rt_lib0clear(&___nl__15);
#line 216
c_rt_lib0copy(&___nl__3, ___nl__14);
#line 216
c_rt_lib0clear(&___nl__14);
#line 217
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 217
c_rt_lib0copy(&___nl__7, ___nl__14);
#line 217
c_rt_lib0clear(&___nl__14);
#line 218
c_rt_lib0move(&___nl__14,___get_global_const(571));
#line 218
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__14));
#line 218
c_rt_lib0clear(&___nl__14);
#line 219
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 219
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__14));
#line 219
c_rt_lib0clear(&___nl__14);
#line 220
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 220
c_rt_lib0copy(&___nl__5, ___nl__14);
#line 220
c_rt_lib0clear(&___nl__14);
#line 221
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 221
c_rt_lib0copy(&___nl__6, ___nl__14);
#line 221
c_rt_lib0clear(&___nl__14);
#line 222
goto label_55;
#line 222
label_49:
#line 223
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 224
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(242)));
#line 224
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__14));
#line 224
c_rt_lib0clear(&___nl__14);
#line 225
goto label_55;
#line 225
label_55:
#line 225
c_rt_lib0clear(&___nl__13);
#line 225
c_rt_lib0clear(&___nl__12);
#line 226
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 226
goto label_6;
#line 226
label_60:
#line 226
c_rt_lib0clear(&___nl__8);
#line 226
c_rt_lib0clear(&___nl__9);
#line 226
c_rt_lib0clear(&___nl__10);
#line 226
c_rt_lib0clear(&___nl__11);
#line 228
c_rt_lib0move(&___nl__8, array0len(___nl__5));
#line 228
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 228
c_rt_lib0move(&___nl__8, c_rt_lib0gt(___nl__8, ___nl__9));
#line 228
c_rt_lib0clear(&___nl__9);
#line 228
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 228
if(c_rt_lib0check_true_native(___nl__8)){ goto label_91;}
#line 227
c_rt_lib0move(&___nl__10, c_rt_lib0add(___nl__6, ___nl__3));
#line 227
if(c_rt_lib0check_true_native(___nl__2)){ goto label_75;}
#line 227
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 227
goto label_77;
#line 227
label_75:
#line 227
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 227
label_77:
#line 227
c_rt_lib0move(&___nl__11, c_rt_lib0sub(___nl__4, ___nl__11));
#line 227
c_rt_lib0copy(&___nl__12, ___nl__7);
#line 227
if(c_rt_lib0check_true_native(___nl__7)){ goto label_83;}
#line 227
c_rt_lib0copy(&___nl__12, ___nl__2);
#line 227
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 227
label_83:
#line 227
c_rt_lib0move(&___nl__9, wprinter_priv0flush_list(___ref___0, ___nl__5, ___nl__3, ___nl__10, ___nl__11, ___nl__12));
#line 227
c_rt_lib0clear(&___nl__12);
#line 227
c_rt_lib0clear(&___nl__11);
#line 227
c_rt_lib0clear(&___nl__10);
#line 227
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 227
c_rt_lib0clear(&___nl__9);
#line 227
goto label_91;
#line 227
label_91:
#line 227
c_rt_lib0clear(&___nl__8);
#line 229
c_rt_lib0clear(&___nl__1);
#line 229
c_rt_lib0clear(&___nl__2);
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0clear(&___nl__6);
#line 229
c_rt_lib0clear(&___nl__7);
#line 229
return ___nl__3;
#line 229
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0clear(&___nl__6);
#line 229
c_rt_lib0clear(&___nl__7);
#line 229
c_rt_lib0clear(&___nl__1);
#line 229
c_rt_lib0clear(&___nl__2);
#line 229
c_rt_lib0clear(&___nl__3);
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
return NULL;
}

ImmT wprinter_priv0print_t_rec(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
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
#line 234
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(242)));
#line 234
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__2));
#line 234
c_rt_lib0move(&___nl__4, wprinter_priv0is_to_long(___nl__5));
#line 234
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 234
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 234
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 235
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___0, ___nl__1));
#line 236
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(242)));
#line 236
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__5));
#line 236
c_rt_lib0clear(&___nl__5);
#line 237
c_rt_lib0clear(&___nl__1);
#line 237
c_rt_lib0clear(&___nl__3);
#line 237
c_rt_lib0clear(&___nl__4);
#line 237
return ___nl__2;
#line 238
goto label_16;
#line 238
label_16:
#line 238
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1009)));
#line 239
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(337)));
#line 239
if(c_rt_lib0check_true_native(___nl__5)){ goto label_34;}
#line 247
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(204)));
#line 247
if(c_rt_lib0check_true_native(___nl__5)){ goto label_89;}
#line 254
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(327)));
#line 254
if(c_rt_lib0check_true_native(___nl__5)){ goto label_155;}
#line 263
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(1281)));
#line 263
if(c_rt_lib0check_true_native(___nl__5)){ goto label_214;}
#line 268
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(1273)));
#line 268
if(c_rt_lib0check_true_native(___nl__5)){ goto label_246;}
#line 271
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(1282)));
#line 271
if(c_rt_lib0check_true_native(___nl__5)){ goto label_260;}
#line 271
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 271
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 271
nl_die_arg(___nl__5);
#line 239
label_34:
#line 239
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(337)));
#line 240
c_rt_lib0move(&___nl__7,___get_global_const(256));
#line 240
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 240
if(c_rt_lib0check_true_native(___nl__7)){ goto label_41;}
#line 240
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 240
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 240
label_41:
#line 240
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 240
if(c_rt_lib0check_true_native(___nl__7)){ goto label_57;}
#line 241
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__6));
#line 242
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(242)));
#line 242
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__2, ___nl__8));
#line 242
c_rt_lib0clear(&___nl__1);
#line 242
c_rt_lib0clear(&___nl__2);
#line 242
c_rt_lib0clear(&___nl__3);
#line 242
c_rt_lib0clear(&___nl__4);
#line 242
c_rt_lib0clear(&___nl__5);
#line 242
c_rt_lib0clear(&___nl__6);
#line 242
c_rt_lib0clear(&___nl__7);
#line 242
return ___nl__8;
#line 242
c_rt_lib0clear(&___nl__8);
#line 243
goto label_57;
#line 243
label_57:
#line 243
c_rt_lib0clear(&___nl__7);
#line 244
c_rt_lib0move(&___nl__7, wprinter_priv0get_tab_size());
#line 244
c_rt_lib0move(&___nl__7, c_rt_lib0mul(___nl__3, ___nl__7));
#line 244
c_rt_lib0move(&___nl__7, c_rt_lib0num_ne(___nl__2, ___nl__7));
#line 244
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 244
if(c_rt_lib0check_true_native(___nl__7)){ goto label_71;}
#line 244
c_rt_lib0move(&___nl__8, string0lf());
#line 244
c_rt_lib0move(&___nl__9, wprinter_priv0pind(___nl__3));
#line 244
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 244
c_rt_lib0clear(&___nl__9);
#line 244
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__8));
#line 244
c_rt_lib0clear(&___nl__8);
#line 244
goto label_71;
#line 244
label_71:
#line 244
c_rt_lib0clear(&___nl__7);
#line 245
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___0, ___nl__1));
#line 246
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(242)));
#line 246
c_rt_lib0move(&___nl__8, wprinter_priv0get_tab_size());
#line 246
c_rt_lib0move(&___nl__8, c_rt_lib0mul(___nl__3, ___nl__8));
#line 246
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 246
c_rt_lib0clear(&___nl__8);
#line 246
c_rt_lib0clear(&___nl__1);
#line 246
c_rt_lib0clear(&___nl__2);
#line 246
c_rt_lib0clear(&___nl__3);
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0clear(&___nl__5);
#line 246
c_rt_lib0clear(&___nl__6);
#line 246
return ___nl__7;
#line 246
c_rt_lib0clear(&___nl__7);
#line 246
c_rt_lib0clear(&___nl__6);
#line 247
goto label_273;
#line 247
label_89:
#line 247
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(204)));
#line 248
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(834)));
#line 248
c_rt_lib0move(&___nl__8, string0lf());
#line 248
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 248
c_rt_lib0clear(&___nl__8);
#line 248
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 248
c_rt_lib0move(&___nl__9, c_rt_lib0add(___nl__3, ___nl__9));
#line 248
c_rt_lib0move(&___nl__8, wprinter_priv0pind(___nl__9));
#line 248
c_rt_lib0clear(&___nl__9);
#line 248
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 248
c_rt_lib0clear(&___nl__8);
#line 248
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__7));
#line 248
c_rt_lib0clear(&___nl__7);
#line 249
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0add(___nl__3, ___nl__7));
#line 249
c_rt_lib0move(&___nl__8, wprinter_priv0get_tab_size());
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0mul_mod(___nl__7, ___nl__8));
#line 249
c_rt_lib0clear(&___nl__8);
#line 249
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 249
c_rt_lib0clear(&___nl__7);
#line 250
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(327)));
#line 250
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 250
c_rt_lib0move(&___nl__9, c_rt_lib0add(___nl__3, ___nl__9));
#line 250
c_rt_lib0move(&___nl__7, wprinter_priv0print_arr_in_lines(___ref___0, ___nl__8, ___nl__9, ___nl__2));
#line 250
c_rt_lib0clear(&___nl__9);
#line 250
c_rt_lib0clear(&___nl__8);
#line 250
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 250
c_rt_lib0clear(&___nl__7);
#line 251
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(327)));
#line 251
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 251
c_rt_lib0clear(&___nl__8);
#line 251
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 251
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 251
c_rt_lib0clear(&___nl__8);
#line 251
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 251
if(c_rt_lib0check_true_native(___nl__7)){ goto label_133;}
#line 251
c_rt_lib0move(&___nl__8, string0lf());
#line 251
c_rt_lib0move(&___nl__9, wprinter_priv0pind(___nl__3));
#line 251
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 251
c_rt_lib0clear(&___nl__9);
#line 251
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__8));
#line 251
c_rt_lib0clear(&___nl__8);
#line 251
goto label_133;
#line 251
label_133:
#line 251
c_rt_lib0clear(&___nl__7);
#line 252
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(905)));
#line 252
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__7));
#line 252
c_rt_lib0clear(&___nl__7);
#line 253
c_rt_lib0move(&___nl__7, wprinter_priv0get_tab_size());
#line 253
c_rt_lib0move(&___nl__7, c_rt_lib0mul(___nl__3, ___nl__7));
#line 253
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(905)));
#line 253
c_rt_lib0move(&___nl__8, string0length(___nl__9));
#line 253
c_rt_lib0clear(&___nl__9);
#line 253
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 253
c_rt_lib0clear(&___nl__8);
#line 253
c_rt_lib0clear(&___nl__1);
#line 253
c_rt_lib0clear(&___nl__2);
#line 253
c_rt_lib0clear(&___nl__3);
#line 253
c_rt_lib0clear(&___nl__4);
#line 253
c_rt_lib0clear(&___nl__5);
#line 253
c_rt_lib0clear(&___nl__6);
#line 253
return ___nl__7;
#line 253
c_rt_lib0clear(&___nl__7);
#line 253
c_rt_lib0clear(&___nl__6);
#line 254
goto label_273;
#line 254
label_155:
#line 254
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(327)));
#line 255
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(327)));
#line 256
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 256
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(3)));
#line 256
if(c_rt_lib0check_true_native(___nl__9)){ goto label_168;}
#line 258
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(1274)));
#line 258
if(c_rt_lib0check_true_native(___nl__9)){ goto label_176;}
#line 260
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(1275)));
#line 260
if(c_rt_lib0check_true_native(___nl__9)){ goto label_192;}
#line 260
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 260
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 260
nl_die_arg(___nl__9);
#line 256
label_168:
#line 257
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 257
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__3, ___nl__11));
#line 257
c_rt_lib0move(&___nl__10, wprinter_priv0print_arr_in_lines(___ref___0, ___nl__7, ___nl__11, ___nl__2));
#line 257
c_rt_lib0clear(&___nl__11);
#line 257
c_rt_lib0copy(&___nl__2, ___nl__10);
#line 257
c_rt_lib0clear(&___nl__10);
#line 258
goto label_208;
#line 258
label_176:
#line 259
c_rt_lib0move(&___nl__11, c_rt_lib0get_false());
#line 259
c_rt_lib0move(&___nl__10, wprinter_priv0process_list(___ref___0, ___nl__7, ___nl__11, ___nl__2, ___nl__3));
#line 259
c_rt_lib0clear(&___nl__11);
#line 259
c_rt_lib0clear(&___nl__1);
#line 259
c_rt_lib0clear(&___nl__2);
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
c_rt_lib0clear(&___nl__4);
#line 259
c_rt_lib0clear(&___nl__5);
#line 259
c_rt_lib0clear(&___nl__6);
#line 259
c_rt_lib0clear(&___nl__7);
#line 259
c_rt_lib0clear(&___nl__8);
#line 259
c_rt_lib0clear(&___nl__9);
#line 259
return ___nl__10;
#line 259
c_rt_lib0clear(&___nl__10);
#line 260
goto label_208;
#line 260
label_192:
#line 261
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 261
c_rt_lib0move(&___nl__10, wprinter_priv0process_list(___ref___0, ___nl__7, ___nl__11, ___nl__2, ___nl__3));
#line 261
c_rt_lib0clear(&___nl__11);
#line 261
c_rt_lib0clear(&___nl__1);
#line 261
c_rt_lib0clear(&___nl__2);
#line 261
c_rt_lib0clear(&___nl__3);
#line 261
c_rt_lib0clear(&___nl__4);
#line 261
c_rt_lib0clear(&___nl__5);
#line 261
c_rt_lib0clear(&___nl__6);
#line 261
c_rt_lib0clear(&___nl__7);
#line 261
c_rt_lib0clear(&___nl__8);
#line 261
c_rt_lib0clear(&___nl__9);
#line 261
return ___nl__10;
#line 261
c_rt_lib0clear(&___nl__10);
#line 262
goto label_208;
#line 262
label_208:
#line 262
c_rt_lib0clear(&___nl__8);
#line 262
c_rt_lib0clear(&___nl__9);
#line 262
c_rt_lib0clear(&___nl__7);
#line 262
c_rt_lib0clear(&___nl__6);
#line 263
goto label_273;
#line 263
label_214:
#line 263
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(1281)));
#line 264
c_rt_lib0move(&___nl__7, string0lf());
#line 264
c_rt_lib0move(&___nl__8, wprinter_priv0pind(___nl__3));
#line 264
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 264
c_rt_lib0clear(&___nl__8);
#line 264
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__7));
#line 264
c_rt_lib0clear(&___nl__7);
#line 265
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(1115)));
#line 265
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(242)));
#line 265
c_rt_lib0move(&___nl__8, wprinter_priv0get_tab_size());
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0mul(___nl__3, ___nl__8));
#line 265
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 265
c_rt_lib0clear(&___nl__8);
#line 265
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 265
c_rt_lib0clear(&___nl__7);
#line 266
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(1115)));
#line 266
c_rt_lib0delete(wprinter_priv0print_sim_rec(___ref___0, ___nl__7));
#line 266
c_rt_lib0clear(&___nl__7);
#line 267
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(1116)));
#line 267
c_rt_lib0move(&___nl__7, wprinter_priv0print_t_rec(___ref___0, ___nl__8, ___nl__2, ___nl__3));
#line 267
c_rt_lib0clear(&___nl__8);
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
c_rt_lib0clear(&___nl__2);
#line 267
c_rt_lib0clear(&___nl__3);
#line 267
c_rt_lib0clear(&___nl__4);
#line 267
c_rt_lib0clear(&___nl__5);
#line 267
c_rt_lib0clear(&___nl__6);
#line 267
return ___nl__7;
#line 267
c_rt_lib0clear(&___nl__7);
#line 267
c_rt_lib0clear(&___nl__6);
#line 268
goto label_273;
#line 268
label_246:
#line 269
c_rt_lib0move(&___nl__6,___get_global_const(571));
#line 269
c_rt_lib0delete(wprinter_priv0state_print(___ref___0, ___nl__6));
#line 269
c_rt_lib0clear(&___nl__6);
#line 270
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 270
c_rt_lib0move(&___nl__6, c_rt_lib0add(___nl__2, ___nl__6));
#line 270
c_rt_lib0clear(&___nl__1);
#line 270
c_rt_lib0clear(&___nl__2);
#line 270
c_rt_lib0clear(&___nl__3);
#line 270
c_rt_lib0clear(&___nl__4);
#line 270
c_rt_lib0clear(&___nl__5);
#line 270
return ___nl__6;
#line 270
c_rt_lib0clear(&___nl__6);
#line 271
goto label_273;
#line 271
label_260:
#line 271
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(1282)));
#line 272
c_rt_lib0move(&___nl__7, wprinter_priv0print_str_arr(___ref___0, ___nl__6, ___nl__2, ___nl__3));
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
return ___nl__7;
#line 272
c_rt_lib0clear(&___nl__7);
#line 272
c_rt_lib0clear(&___nl__6);
#line 273
goto label_273;
#line 273
label_273:
#line 273
c_rt_lib0clear(&___nl__4);
#line 273
c_rt_lib0clear(&___nl__5);
#line 274
c_rt_lib0clear(&___nl__1);
#line 274
c_rt_lib0clear(&___nl__3);
#line 274
return ___nl__2;
#line 274
c_rt_lib0clear(&___nl__1);
#line 274
c_rt_lib0clear(&___nl__2);
#line 274
c_rt_lib0clear(&___nl__3);
#line 274
return NULL;
}


static ImmT ___const__[10];
static int ___const_init__ = 1;
void wprinter0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[9];


for(int i=0;i<9;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 9);
}
ImmT wprinter_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT wprinter_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = wprinter_priv0get_tab_size0cal();
	break;
case 1:
	___const__[1] = wprinter_priv0get_line_width0cal();
	break;
case 2:
	___const__[2] = wprinter_priv0get_sep0cal();
	break;
case 3:
	___const__[3] = wprinter0state_t0cal();
	break;
case 4:
	___const__[4] = wprinter0arr_kind_t0cal();
	break;
case 5:
	___const__[5] = wprinter0pretty_t0cal();
	break;
case 6:
	___const__[6] = wprinter0str_arr_t0cal();
	break;
case 7:
	___const__[7] = wprinter0pretty_arr_t0cal();
	break;
case 8:
	___const__[8] = wprinter0get_sep0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
