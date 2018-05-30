
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "dfile.h"
#include "ov.h"
#include "c_std_lib.h"
#include "string.h"
#include "hash.h"
#include "array.h"
#include "nl.h"
#include "boolean_t.h"
#include "ptd.h"
#include "boolean_t.h"
#line 1 "dfile.nl"

static ImmT *__const__f = NULL;
ImmT dfile_priv0__const__sim(int __nr);
ImmT dfile_priv0__const__sing(int __nr);

ImmT dfile_priv0eat_ws(ImmT * ___ref___0);
ImmT dfile_priv0get_char(ImmT * ___ref___0);
ImmT dfile_priv0is_ov(ImmT * ___ref___0);
ImmT dfile_priv0eat_non_ws(ImmT * ___ref___0,ImmT * ___ref___1);
ImmT dfile_priv0parse_scalar(ImmT * ___ref___0,ImmT * ___ref___1);
ImmT dfile_priv0match_s(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0parse(ImmT * ___ref___0,ImmT * ___ref___1);
ImmT dfile_priv0sp(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0sprintstr(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0is_simple_string(ImmT ___nl__0);
ImmT dfile_priv0sprint_hash_key(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0get_ind(ImmT ___nl__0);
ImmT dfile_priv0sprint_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);
ImmT dfile_priv0handle_debug(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0sprint(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);
ImmT dfile_priv0print_net_formatstr(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0print_net_format(ImmT * ___ref___0,ImmT ___nl__1);


ImmT dfile0deep_eq0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0deep_eq");
return dfile0deep_eq(_tab[0], _tab[1]);}
ImmT dfile0deep_eq(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 16
c_rt_lib0move(&___nl__2, dfile0ssave(___nl__0));
#line 16
c_rt_lib0move(&___nl__3, dfile0ssave(___nl__1));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
return ___nl__2;
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
return NULL;
}

ImmT dfile0rs0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0rs");
return dfile0rs(_tab[0], _tab[1]);}
ImmT dfile0rs(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 20
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 20
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 20
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(239), ___nl__3, ___get_global_const(240), ___nl__4));
#line 20
c_rt_lib0clear(&___nl__3);
#line 20
c_rt_lib0clear(&___nl__4);
#line 21
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0num_ne(___nl__1, ___nl__3));
#line 21
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 21
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 21
c_rt_lib0move(&___nl__3, dfile_priv0is_simple_string(___nl__0));
#line 21
label_10:
#line 21
c_rt_lib0clear(&___nl__4);
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 21
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 22
c_rt_lib0delete(dfile_priv0sp(&___nl__2, ___nl__0));
#line 23
goto label_19;
#line 23
label_16:
#line 24
c_rt_lib0delete(dfile_priv0sprintstr(&___nl__2, ___nl__0));
#line 25
goto label_19;
#line 25
label_19:
#line 25
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 26
c_rt_lib0clear(&___nl__0);
#line 26
c_rt_lib0clear(&___nl__1);
#line 26
c_rt_lib0clear(&___nl__2);
#line 26
return ___nl__3;
#line 26
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0clear(&___nl__0);
#line 26
c_rt_lib0clear(&___nl__1);
#line 26
return NULL;
}

ImmT dfile0ssave0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0ssave");
return dfile0ssave(_tab[0]);}
ImmT dfile0ssave(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 30
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 30
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 30
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(239), ___nl__2, ___get_global_const(240), ___nl__3));
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__3);
#line 31
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 31
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 31
c_rt_lib0delete(dfile_priv0sprint(&___nl__1, ___nl__0, ___nl__2, ___nl__3));
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(239)));
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
return ___nl__2;
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return NULL;
}

ImmT dfile0debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0debug");
return dfile0debug(_tab[0]);}
ImmT dfile0debug(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 36
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 36
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 36
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(239), ___nl__2, ___get_global_const(240), ___nl__3));
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__3);
#line 37
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 37
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 37
c_rt_lib0delete(dfile_priv0sprint(&___nl__1, ___nl__0, ___nl__2, ___nl__3));
#line 37
c_rt_lib0clear(&___nl__3);
#line 37
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(239)));
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
return ___nl__2;
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
return NULL;
}

ImmT dfile0ssave_net_format0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0ssave_net_format");
return dfile0ssave_net_format(_tab[0]);}
ImmT dfile0ssave_net_format(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 42
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 42
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(239), ___nl__2, ___get_global_const(240), ___nl__3));
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0delete(dfile_priv0print_net_format(&___nl__1, ___nl__0));
#line 44
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(239)));
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
return ___nl__2;
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return NULL;
}

ImmT dfile_priv0eat_ws(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 48
label_0:
#line 49
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 49
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(242)));
#line 49
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 49
if(c_rt_lib0check_true_native(___nl__1)){ goto label_10;}
#line 49
c_rt_lib0clear(&___nl__1);
#line 49
return NULL;
#line 49
goto label_10;
#line 49
label_10:
#line 49
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0move(&___nl__2, dfile_priv0get_char(___ref___0));
#line 50
c_rt_lib0move(&___nl__1, string0ord(___nl__2));
#line 50
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0move(&___nl__2,___get_global_const(243));
#line 51
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 51
if(c_rt_lib0check_true_native(___nl__2)){ goto label_20;}
#line 51
c_rt_lib0move(&___nl__2,___get_global_const(237));
#line 51
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 51
label_20:
#line 51
if(c_rt_lib0check_true_native(___nl__2)){ goto label_24;}
#line 51
c_rt_lib0move(&___nl__2,___get_global_const(238));
#line 51
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 51
label_24:
#line 51
if(c_rt_lib0check_true_native(___nl__2)){ goto label_28;}
#line 51
c_rt_lib0move(&___nl__2,___get_global_const(236));
#line 51
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 51
label_28:
#line 51
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 51
if(c_rt_lib0check_true_native(___nl__2)){ goto label_41;}
#line 52
c_rt_lib0move(&___nl__3,___get_global_const(241));
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 52
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 52
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 52
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 52
c_rt_lib0clear(&___nl__5);
#line 52
c_rt_lib0clear(&___nl__3);
#line 52
c_rt_lib0clear(&___nl__4);
#line 53
goto label_46;
#line 53
label_41:
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
return NULL;
#line 55
goto label_46;
#line 55
label_46:
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__1);
#line 48
goto label_0;
#line 48
return NULL;
}

ImmT dfile_priv0get_char(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 60
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(239)));
#line 60
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 60
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 60
c_rt_lib0move(&___nl__1, c_std_lib0fast_substr(___nl__2, ___nl__3, ___nl__4));
#line 60
c_rt_lib0clear(&___nl__4);
#line 60
c_rt_lib0clear(&___nl__3);
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
return ___nl__1;
#line 60
c_rt_lib0clear(&___nl__1);
#line 60
return NULL;
}

ImmT dfile_priv0is_ov(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 64
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(239)));
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 64
c_rt_lib0move(&___nl__4,___get_global_const(244));
#line 64
c_rt_lib0move(&___nl__1, c_std_lib0fast_substr(___nl__2, ___nl__3, ___nl__4));
#line 64
c_rt_lib0clear(&___nl__4);
#line 64
c_rt_lib0clear(&___nl__3);
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
c_rt_lib0move(&___nl__2,___get_global_const(245));
#line 64
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__2));
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
return ___nl__1;
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
return NULL;
}

ImmT dfile_priv0eat_non_ws(ImmT * ___ref___0,ImmT * ___ref___1) {
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 68
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 69
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(242)));
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__4, ___nl__3));
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 70
if(c_rt_lib0check_true_native(___nl__4)){ goto label_22;}
#line 71
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 71
c_rt_lib0copy(___ref___1, ___nl__5);
#line 71
c_rt_lib0clear(&___nl__5);
#line 72
c_rt_lib0move(&___nl__5,___get_global_const(246));
#line 72
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 72
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 72
c_rt_lib0clear(&___nl__6);
#line 72
c_rt_lib0move(&___nl__6,___get_global_const(247));
#line 72
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 72
c_rt_lib0clear(&___nl__6);
#line 72
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0clear(&___nl__4);
#line 72
return ___nl__5;
#line 72
c_rt_lib0clear(&___nl__5);
#line 73
goto label_22;
#line 73
label_22:
#line 73
c_rt_lib0clear(&___nl__4);
#line 74
label_24:
#line 75
c_rt_lib0move(&___nl__4, dfile_priv0get_char(___ref___0));
#line 76
c_rt_lib0move(&___nl__5, string0is_letter(___nl__4));
#line 76
if(c_rt_lib0check_true_native(___nl__5)){ goto label_29;}
#line 76
c_rt_lib0move(&___nl__5, string0is_digit(___nl__4));
#line 76
label_29:
#line 76
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 76
c_rt_lib0move(&___nl__5,___get_global_const(83));
#line 76
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 76
label_33:
#line 76
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 76
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 76
if(c_rt_lib0check_true_native(___nl__5)){ goto label_41;}
#line 76
c_rt_lib0clear(&___nl__4);
#line 76
c_rt_lib0clear(&___nl__5);
#line 76
goto label_65;
#line 76
goto label_41;
#line 76
label_41:
#line 76
c_rt_lib0clear(&___nl__5);
#line 77
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 77
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 77
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 77
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 77
c_rt_lib0move(&___nl__7,___get_global_const(241));
#line 77
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 77
c_rt_lib0clear(&___nl__7);
#line 77
c_rt_lib0clear(&___nl__5);
#line 77
c_rt_lib0clear(&___nl__6);
#line 78
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 79
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 79
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__5, ___nl__3));
#line 79
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 79
if(c_rt_lib0check_true_native(___nl__5)){ goto label_61;}
#line 79
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0clear(&___nl__5);
#line 79
goto label_65;
#line 79
goto label_61;
#line 79
label_61:
#line 79
c_rt_lib0clear(&___nl__5);
#line 79
c_rt_lib0clear(&___nl__4);
#line 74
goto label_24;
#line 74
label_65:
#line 81
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 81
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__2, ___nl__4));
#line 81
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 81
if(c_rt_lib0check_true_native(___nl__4)){ goto label_86;}
#line 82
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 82
c_rt_lib0copy(___ref___1, ___nl__5);
#line 82
c_rt_lib0clear(&___nl__5);
#line 83
c_rt_lib0move(&___nl__5,___get_global_const(246));
#line 83
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 83
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 83
c_rt_lib0clear(&___nl__6);
#line 83
c_rt_lib0move(&___nl__6,___get_global_const(247));
#line 83
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 83
c_rt_lib0clear(&___nl__6);
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0clear(&___nl__4);
#line 83
return ___nl__5;
#line 83
c_rt_lib0clear(&___nl__5);
#line 84
goto label_86;
#line 84
label_86:
#line 84
c_rt_lib0clear(&___nl__4);
#line 85
c_rt_lib0clear(&___nl__3);
#line 85
return ___nl__2;
#line 85
c_rt_lib0clear(&___nl__2);
#line 85
c_rt_lib0clear(&___nl__3);
#line 85
return NULL;
}

ImmT dfile_priv0parse_scalar(ImmT * ___ref___0,ImmT * ___ref___1) {
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 89
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 90
c_rt_lib0move(&___nl__2, dfile_priv0get_char(___ref___0));
#line 90
c_rt_lib0move(&___nl__3,___get_global_const(235));
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 90
c_rt_lib0clear(&___nl__3);
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 90
if(c_rt_lib0check_true_native(___nl__2)){ goto label_121;}
#line 91
c_rt_lib0move(&___nl__3,___get_global_const(241));
#line 91
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 91
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 91
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 91
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 91
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 91
c_rt_lib0clear(&___nl__5);
#line 91
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 93
label_17:
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(242)));
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__4, ___nl__5));
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 94
if(c_rt_lib0check_true_native(___nl__4)){ goto label_40;}
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 95
c_rt_lib0copy(___ref___1, ___nl__5);
#line 95
c_rt_lib0clear(&___nl__5);
#line 96
c_rt_lib0move(&___nl__5,___get_global_const(246));
#line 96
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0move(&___nl__6,___get_global_const(248));
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0clear(&___nl__2);
#line 96
c_rt_lib0clear(&___nl__3);
#line 96
c_rt_lib0clear(&___nl__4);
#line 96
return ___nl__5;
#line 96
c_rt_lib0clear(&___nl__5);
#line 97
goto label_40;
#line 97
label_40:
#line 97
c_rt_lib0clear(&___nl__4);
#line 98
c_rt_lib0move(&___nl__4, dfile_priv0get_char(___ref___0));
#line 99
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 99
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 99
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 99
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 99
c_rt_lib0move(&___nl__7,___get_global_const(241));
#line 99
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 99
c_rt_lib0clear(&___nl__7);
#line 99
c_rt_lib0clear(&___nl__5);
#line 99
c_rt_lib0clear(&___nl__6);
#line 100
c_rt_lib0move(&___nl__5,___get_global_const(235));
#line 100
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 100
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 100
if(c_rt_lib0check_true_native(___nl__5)){ goto label_60;}
#line 100
c_rt_lib0clear(&___nl__4);
#line 100
c_rt_lib0clear(&___nl__5);
#line 100
goto label_116;
#line 100
goto label_60;
#line 100
label_60:
#line 100
c_rt_lib0clear(&___nl__5);
#line 101
c_rt_lib0move(&___nl__5,___get_global_const(96));
#line 101
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 101
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 101
if(c_rt_lib0check_true_native(___nl__5)){ goto label_109;}
#line 102
c_rt_lib0move(&___nl__6, dfile_priv0get_char(___ref___0));
#line 103
c_rt_lib0move(&___nl__7,___get_global_const(249));
#line 103
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 103
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 103
if(c_rt_lib0check_true_native(___nl__7)){ goto label_75;}
#line 104
c_rt_lib0move(&___nl__8, string0lf());
#line 104
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 104
c_rt_lib0clear(&___nl__8);
#line 105
goto label_96;
#line 105
label_75:
#line 105
c_rt_lib0move(&___nl__7,___get_global_const(250));
#line 105
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 105
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 105
if(c_rt_lib0check_true_native(___nl__7)){ goto label_84;}
#line 106
c_rt_lib0move(&___nl__8, string0r());
#line 106
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 106
c_rt_lib0clear(&___nl__8);
#line 107
goto label_96;
#line 107
label_84:
#line 107
c_rt_lib0move(&___nl__7,___get_global_const(251));
#line 107
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 107
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 107
if(c_rt_lib0check_true_native(___nl__7)){ goto label_93;}
#line 108
c_rt_lib0move(&___nl__8, string0tab());
#line 108
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 108
c_rt_lib0clear(&___nl__8);
#line 109
goto label_96;
#line 109
label_93:
#line 110
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 111
goto label_96;
#line 111
label_96:
#line 111
c_rt_lib0clear(&___nl__7);
#line 112
c_rt_lib0move(&___nl__7,___get_global_const(241));
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 112
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 112
c_rt_lib0move(&___nl__9,___get_global_const(241));
#line 112
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__7));
#line 112
c_rt_lib0clear(&___nl__9);
#line 112
c_rt_lib0clear(&___nl__7);
#line 112
c_rt_lib0clear(&___nl__8);
#line 112
c_rt_lib0clear(&___nl__6);
#line 113
goto label_112;
#line 113
label_109:
#line 114
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 115
goto label_112;
#line 115
label_112:
#line 115
c_rt_lib0clear(&___nl__5);
#line 115
c_rt_lib0clear(&___nl__4);
#line 93
goto label_17;
#line 93
label_116:
#line 117
c_rt_lib0clear(&___nl__2);
#line 117
return ___nl__3;
#line 117
c_rt_lib0clear(&___nl__3);
#line 118
goto label_127;
#line 118
label_121:
#line 119
c_rt_lib0move(&___nl__3, dfile_priv0eat_non_ws(___ref___0, ___ref___1));
#line 119
c_rt_lib0clear(&___nl__2);
#line 119
return ___nl__3;
#line 119
c_rt_lib0clear(&___nl__3);
#line 120
goto label_127;
#line 120
label_127:
#line 120
c_rt_lib0clear(&___nl__2);
#line 120
return NULL;
}

ImmT dfile_priv0match_s(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 124
c_rt_lib0move(&___nl__2, string0length(___nl__1));
#line 125
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(239)));
#line 125
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 125
c_rt_lib0move(&___nl__3, c_std_lib0fast_substr(___nl__4, ___nl__5, ___nl__2));
#line 125
c_rt_lib0clear(&___nl__5);
#line 125
c_rt_lib0clear(&___nl__4);
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__1));
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 125
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 126
c_rt_lib0move(&___nl__4,___get_global_const(241));
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__2));
#line 126
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 126
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 126
c_rt_lib0clear(&___nl__5);
#line 126
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0move(&___nl__4, c_rt_lib0get_true());
#line 127
c_rt_lib0clear(&___nl__1);
#line 127
c_rt_lib0clear(&___nl__2);
#line 127
c_rt_lib0clear(&___nl__3);
#line 127
return ___nl__4;
#line 127
c_rt_lib0clear(&___nl__4);
#line 128
goto label_31;
#line 128
label_23:
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
return ___nl__4;
#line 129
c_rt_lib0clear(&___nl__4);
#line 130
goto label_31;
#line 130
label_31:
#line 130
c_rt_lib0clear(&___nl__3);
#line 130
c_rt_lib0clear(&___nl__2);
#line 130
c_rt_lib0clear(&___nl__1);
#line 130
return NULL;
}

ImmT dfile0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "dfile0state_t");
return dfile0state_t();}
ImmT dfile0state_t(){
return dfile_priv0__const__sing(0);}
ImmT dfile0state_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 134
c_rt_lib0move(&___nl__3, ptd0sim());
#line 134
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 134
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0move(&___nl__3, ptd0sim());
#line 134
c_rt_lib0move(&___nl__4, ptd0sim());
#line 134
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(239), ___nl__2, ___get_global_const(242), ___nl__3, ___get_global_const(241), ___nl__4));
#line 134
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 134
c_rt_lib0clear(&___nl__1);
#line 134
return ___nl__0;
#line 134
c_rt_lib0clear(&___nl__0);
#line 134
return NULL;
}

ImmT dfile_priv0parse(ImmT * ___ref___0,ImmT * ___ref___1) {
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 138
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 139
c_rt_lib0move(&___nl__2, dfile_priv0get_char(___ref___0));
#line 140
c_rt_lib0move(&___nl__3,___get_global_const(252));
#line 140
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 140
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 140
if(c_rt_lib0check_true_native(___nl__3)){ goto label_120;}
#line 141
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 141
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 141
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 141
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 141
c_rt_lib0move(&___nl__6,___get_global_const(241));
#line 141
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 141
c_rt_lib0clear(&___nl__6);
#line 141
c_rt_lib0clear(&___nl__4);
#line 141
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 143
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 144
label_17:
#line 144
c_rt_lib0move(&___nl__6,___get_global_const(253));
#line 144
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 144
c_rt_lib0clear(&___nl__6);
#line 144
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 144
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 144
if(c_rt_lib0check_true_native(___nl__5)){ goto label_113;}
#line 145
c_rt_lib0move(&___nl__6, dfile_priv0parse_scalar(___ref___0, ___ref___1));
#line 146
c_rt_lib0copy(&___nl__7, *___ref___1);
#line 146
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 146
if(c_rt_lib0check_true_native(___nl__7)){ goto label_35;}
#line 146
c_rt_lib0clear(&___nl__2);
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0clear(&___nl__5);
#line 146
c_rt_lib0clear(&___nl__7);
#line 146
return ___nl__6;
#line 146
goto label_35;
#line 146
label_35:
#line 146
c_rt_lib0clear(&___nl__7);
#line 147
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 148
c_rt_lib0move(&___nl__8,___get_global_const(254));
#line 148
c_rt_lib0move(&___nl__7, dfile_priv0match_s(___ref___0, ___nl__8));
#line 148
c_rt_lib0clear(&___nl__8);
#line 148
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 148
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 148
if(c_rt_lib0check_true_native(___nl__7)){ goto label_63;}
#line 149
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 149
c_rt_lib0copy(___ref___1, ___nl__8);
#line 149
c_rt_lib0clear(&___nl__8);
#line 150
c_rt_lib0move(&___nl__8,___get_global_const(246));
#line 150
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 150
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 150
c_rt_lib0clear(&___nl__9);
#line 150
c_rt_lib0move(&___nl__9,___get_global_const(255));
#line 150
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 150
c_rt_lib0clear(&___nl__9);
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
c_rt_lib0clear(&___nl__7);
#line 150
return ___nl__8;
#line 150
c_rt_lib0clear(&___nl__8);
#line 151
goto label_63;
#line 151
label_63:
#line 151
c_rt_lib0clear(&___nl__7);
#line 152
c_rt_lib0move(&___nl__7, dfile_priv0parse(___ref___0, ___ref___1));
#line 153
c_rt_lib0copy(&___nl__8, *___ref___1);
#line 153
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 153
if(c_rt_lib0check_true_native(___nl__8)){ goto label_77;}
#line 153
c_rt_lib0clear(&___nl__2);
#line 153
c_rt_lib0clear(&___nl__3);
#line 153
c_rt_lib0clear(&___nl__4);
#line 153
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0clear(&___nl__8);
#line 153
return ___nl__7;
#line 153
goto label_77;
#line 153
label_77:
#line 153
c_rt_lib0clear(&___nl__8);
#line 154
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__6, ___nl__7));
#line 155
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 156
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 156
c_rt_lib0move(&___nl__8, dfile_priv0match_s(___ref___0, ___nl__9));
#line 156
c_rt_lib0clear(&___nl__9);
#line 156
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 156
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 156
if(c_rt_lib0check_true_native(___nl__8)){ goto label_107;}
#line 157
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 157
c_rt_lib0copy(___ref___1, ___nl__9);
#line 157
c_rt_lib0clear(&___nl__9);
#line 158
c_rt_lib0move(&___nl__9,___get_global_const(246));
#line 158
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 158
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 158
c_rt_lib0clear(&___nl__10);
#line 158
c_rt_lib0move(&___nl__10,___get_global_const(257));
#line 158
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 158
c_rt_lib0clear(&___nl__10);
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0clear(&___nl__5);
#line 158
c_rt_lib0clear(&___nl__6);
#line 158
c_rt_lib0clear(&___nl__7);
#line 158
c_rt_lib0clear(&___nl__8);
#line 158
return ___nl__9;
#line 158
c_rt_lib0clear(&___nl__9);
#line 159
goto label_107;
#line 159
label_107:
#line 159
c_rt_lib0clear(&___nl__8);
#line 160
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0clear(&___nl__7);
#line 161
goto label_17;
#line 161
label_113:
#line 161
c_rt_lib0clear(&___nl__5);
#line 162
c_rt_lib0clear(&___nl__2);
#line 162
c_rt_lib0clear(&___nl__3);
#line 162
return ___nl__4;
#line 162
c_rt_lib0clear(&___nl__4);
#line 163
goto label_325;
#line 163
label_120:
#line 163
c_rt_lib0move(&___nl__3,___get_global_const(258));
#line 163
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 163
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 163
if(c_rt_lib0check_true_native(___nl__3)){ goto label_194;}
#line 164
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 164
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 164
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 164
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 164
c_rt_lib0move(&___nl__6,___get_global_const(241));
#line 164
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 164
c_rt_lib0clear(&___nl__6);
#line 164
c_rt_lib0clear(&___nl__4);
#line 164
c_rt_lib0clear(&___nl__5);
#line 165
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 166
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 167
label_136:
#line 167
c_rt_lib0move(&___nl__6,___get_global_const(259));
#line 167
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 167
c_rt_lib0clear(&___nl__6);
#line 167
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 167
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 167
if(c_rt_lib0check_true_native(___nl__5)){ goto label_187;}
#line 168
c_rt_lib0move(&___nl__6, dfile_priv0parse(___ref___0, ___ref___1));
#line 169
c_rt_lib0copy(&___nl__7, *___ref___1);
#line 169
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 169
if(c_rt_lib0check_true_native(___nl__7)){ goto label_154;}
#line 169
c_rt_lib0clear(&___nl__2);
#line 169
c_rt_lib0clear(&___nl__3);
#line 169
c_rt_lib0clear(&___nl__4);
#line 169
c_rt_lib0clear(&___nl__5);
#line 169
c_rt_lib0clear(&___nl__7);
#line 169
return ___nl__6;
#line 169
goto label_154;
#line 169
label_154:
#line 169
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0delete(array0push(&___nl__4, ___nl__6));
#line 171
c_rt_lib0move(&___nl__8,___get_global_const(256));
#line 171
c_rt_lib0move(&___nl__7, dfile_priv0match_s(___ref___0, ___nl__8));
#line 171
c_rt_lib0clear(&___nl__8);
#line 171
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 171
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 171
if(c_rt_lib0check_true_native(___nl__7)){ goto label_182;}
#line 172
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 172
c_rt_lib0copy(___ref___1, ___nl__8);
#line 172
c_rt_lib0clear(&___nl__8);
#line 173
c_rt_lib0move(&___nl__8,___get_global_const(246));
#line 173
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 173
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 173
c_rt_lib0clear(&___nl__9);
#line 173
c_rt_lib0move(&___nl__9,___get_global_const(257));
#line 173
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 173
c_rt_lib0clear(&___nl__9);
#line 173
c_rt_lib0clear(&___nl__2);
#line 173
c_rt_lib0clear(&___nl__3);
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0clear(&___nl__6);
#line 173
c_rt_lib0clear(&___nl__7);
#line 173
return ___nl__8;
#line 173
c_rt_lib0clear(&___nl__8);
#line 174
goto label_182;
#line 174
label_182:
#line 174
c_rt_lib0clear(&___nl__7);
#line 175
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 175
c_rt_lib0clear(&___nl__6);
#line 176
goto label_136;
#line 176
label_187:
#line 176
c_rt_lib0clear(&___nl__5);
#line 177
c_rt_lib0clear(&___nl__2);
#line 177
c_rt_lib0clear(&___nl__3);
#line 177
return ___nl__4;
#line 177
c_rt_lib0clear(&___nl__4);
#line 178
goto label_325;
#line 178
label_194:
#line 178
c_rt_lib0move(&___nl__3,___get_global_const(166));
#line 178
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 178
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 178
if(c_rt_lib0check_true_native(___nl__4)){ goto label_200;}
#line 178
c_rt_lib0move(&___nl__3, dfile_priv0is_ov(___ref___0));
#line 178
label_200:
#line 178
c_rt_lib0clear(&___nl__4);
#line 178
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 178
if(c_rt_lib0check_true_native(___nl__3)){ goto label_318;}
#line 179
c_rt_lib0move(&___nl__4,___get_global_const(244));
#line 179
c_rt_lib0move(&___nl__5,___get_global_const(241));
#line 179
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 179
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 179
c_rt_lib0move(&___nl__6,___get_global_const(241));
#line 179
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 179
c_rt_lib0clear(&___nl__6);
#line 179
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0clear(&___nl__5);
#line 180
c_rt_lib0move(&___nl__4, dfile_priv0parse_scalar(___ref___0, ___ref___1));
#line 181
c_rt_lib0copy(&___nl__5, *___ref___1);
#line 181
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 181
if(c_rt_lib0check_true_native(___nl__5)){ goto label_222;}
#line 181
c_rt_lib0clear(&___nl__2);
#line 181
c_rt_lib0clear(&___nl__3);
#line 181
c_rt_lib0clear(&___nl__5);
#line 181
return ___nl__4;
#line 181
goto label_222;
#line 181
label_222:
#line 181
c_rt_lib0clear(&___nl__5);
#line 182
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 183
c_rt_lib0move(&___nl__6,___get_global_const(256));
#line 183
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 183
c_rt_lib0clear(&___nl__6);
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 183
if(c_rt_lib0check_true_native(___nl__5)){ goto label_281;}
#line 184
c_rt_lib0move(&___nl__6, dfile_priv0parse(___ref___0, ___ref___1));
#line 185
c_rt_lib0copy(&___nl__7, *___ref___1);
#line 185
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 185
if(c_rt_lib0check_true_native(___nl__7)){ goto label_241;}
#line 185
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0clear(&___nl__3);
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0clear(&___nl__7);
#line 185
return ___nl__6;
#line 185
goto label_241;
#line 185
label_241:
#line 185
c_rt_lib0clear(&___nl__7);
#line 186
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 187
c_rt_lib0move(&___nl__8,___get_global_const(260));
#line 187
c_rt_lib0move(&___nl__7, dfile_priv0match_s(___ref___0, ___nl__8));
#line 187
c_rt_lib0clear(&___nl__8);
#line 187
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 187
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 187
if(c_rt_lib0check_true_native(___nl__7)){ goto label_269;}
#line 188
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 188
c_rt_lib0copy(___ref___1, ___nl__8);
#line 188
c_rt_lib0clear(&___nl__8);
#line 189
c_rt_lib0move(&___nl__8,___get_global_const(246));
#line 189
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 189
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 189
c_rt_lib0clear(&___nl__9);
#line 189
c_rt_lib0move(&___nl__9,___get_global_const(261));
#line 189
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 189
c_rt_lib0clear(&___nl__9);
#line 189
c_rt_lib0clear(&___nl__2);
#line 189
c_rt_lib0clear(&___nl__3);
#line 189
c_rt_lib0clear(&___nl__4);
#line 189
c_rt_lib0clear(&___nl__5);
#line 189
c_rt_lib0clear(&___nl__6);
#line 189
c_rt_lib0clear(&___nl__7);
#line 189
return ___nl__8;
#line 189
c_rt_lib0clear(&___nl__8);
#line 190
goto label_269;
#line 190
label_269:
#line 190
c_rt_lib0clear(&___nl__7);
#line 191
c_rt_lib0move(&___nl__7, ov0mk_val(___nl__4, ___nl__6));
#line 191
c_rt_lib0clear(&___nl__2);
#line 191
c_rt_lib0clear(&___nl__3);
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0clear(&___nl__6);
#line 191
return ___nl__7;
#line 191
c_rt_lib0clear(&___nl__7);
#line 191
c_rt_lib0clear(&___nl__6);
#line 192
goto label_281;
#line 192
label_281:
#line 192
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 194
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 194
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 194
c_rt_lib0clear(&___nl__6);
#line 194
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 194
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 194
if(c_rt_lib0check_true_native(___nl__5)){ goto label_307;}
#line 195
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 195
c_rt_lib0copy(___ref___1, ___nl__6);
#line 195
c_rt_lib0clear(&___nl__6);
#line 196
c_rt_lib0move(&___nl__6,___get_global_const(246));
#line 196
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(241)));
#line 196
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 196
c_rt_lib0clear(&___nl__7);
#line 196
c_rt_lib0move(&___nl__7,___get_global_const(261));
#line 196
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 196
c_rt_lib0clear(&___nl__7);
#line 196
c_rt_lib0clear(&___nl__2);
#line 196
c_rt_lib0clear(&___nl__3);
#line 196
c_rt_lib0clear(&___nl__4);
#line 196
c_rt_lib0clear(&___nl__5);
#line 196
return ___nl__6;
#line 196
c_rt_lib0clear(&___nl__6);
#line 197
goto label_307;
#line 197
label_307:
#line 197
c_rt_lib0clear(&___nl__5);
#line 198
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 199
c_rt_lib0move(&___nl__5, ov0mk(___nl__4));
#line 199
c_rt_lib0clear(&___nl__2);
#line 199
c_rt_lib0clear(&___nl__3);
#line 199
c_rt_lib0clear(&___nl__4);
#line 199
return ___nl__5;
#line 199
c_rt_lib0clear(&___nl__5);
#line 199
c_rt_lib0clear(&___nl__4);
#line 200
goto label_325;
#line 200
label_318:
#line 201
c_rt_lib0move(&___nl__4, dfile_priv0parse_scalar(___ref___0, ___ref___1));
#line 201
c_rt_lib0clear(&___nl__2);
#line 201
c_rt_lib0clear(&___nl__3);
#line 201
return ___nl__4;
#line 201
c_rt_lib0clear(&___nl__4);
#line 202
goto label_325;
#line 202
label_325:
#line 202
c_rt_lib0clear(&___nl__3);
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
return NULL;
}

ImmT dfile0sload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0sload");
return dfile0sload(_tab[0]);}
ImmT dfile0sload(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 206
c_rt_lib0move(&___nl__3, dfile0try_sload(___nl__0));
#line 206
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(48)));
#line 206
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 206
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__3));
#line 206
nl_die_arg(___nl__3);
#line 206
label_5:
#line 206
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(48)));
#line 206
c_rt_lib0clear(&___nl__2);
#line 206
c_rt_lib0clear(&___nl__3);
#line 207
c_rt_lib0clear(&___nl__0);
#line 207
return ___nl__1;
#line 207
c_rt_lib0clear(&___nl__1);
#line 207
c_rt_lib0clear(&___nl__0);
#line 207
return NULL;
}

ImmT dfile0try_sload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0try_sload");
return dfile0try_sload(_tab[0]);}
ImmT dfile0try_sload(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 211
c_rt_lib0move(&___nl__2, ptd0sim());
#line 211
c_rt_lib0move(&___nl__1, ptd0ensure(___nl__2, ___nl__0));
#line 211
c_rt_lib0clear(&___nl__2);
#line 212
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(1, ___nl__1));
#line 212
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 212
c_rt_lib0move(&___nl__5, string0length(___nl__1));
#line 212
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(239), ___nl__3, ___get_global_const(241), ___nl__4, ___get_global_const(242), ___nl__5));
#line 212
c_rt_lib0clear(&___nl__3);
#line 212
c_rt_lib0clear(&___nl__4);
#line 212
c_rt_lib0clear(&___nl__5);
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 214
c_rt_lib0move(&___nl__4,___get_global_const(262));
#line 214
c_rt_lib0delete(dfile_priv0match_s(&___nl__2, ___nl__4));
#line 214
c_rt_lib0clear(&___nl__4);
#line 215
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__2));
#line 216
c_rt_lib0move(&___nl__4, dfile_priv0parse(&___nl__2, &___nl__3));
#line 217
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__2));
#line 218
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 218
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 218
if(c_rt_lib0check_true_native(___nl__6)){ goto label_25;}
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(241)));
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(242)));
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0num_ne(___nl__5, ___nl__7));
#line 218
c_rt_lib0clear(&___nl__7);
#line 218
label_25:
#line 218
c_rt_lib0clear(&___nl__6);
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 218
if(c_rt_lib0check_true_native(___nl__5)){ goto label_42;}
#line 219
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 219
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 219
c_rt_lib0clear(&___nl__6);
#line 220
c_rt_lib0move(&___nl__6,___get_global_const(246));
#line 220
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(241)));
#line 220
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 220
c_rt_lib0clear(&___nl__7);
#line 220
c_rt_lib0move(&___nl__7,___get_global_const(263));
#line 220
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 220
c_rt_lib0clear(&___nl__7);
#line 220
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 220
c_rt_lib0clear(&___nl__6);
#line 221
goto label_42;
#line 221
label_42:
#line 221
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 222
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 222
if(c_rt_lib0check_true_native(___nl__5)){ goto label_62;}
#line 223
c_rt_lib0move(&___nl__7, ptd0sim());
#line 223
c_rt_lib0move(&___nl__6, ptd0ensure(___nl__7, ___nl__4));
#line 223
c_rt_lib0clear(&___nl__7);
#line 223
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 223
c_rt_lib0clear(&___nl__6);
#line 224
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__4));
#line 224
c_rt_lib0clear(&___nl__0);
#line 224
c_rt_lib0clear(&___nl__1);
#line 224
c_rt_lib0clear(&___nl__2);
#line 224
c_rt_lib0clear(&___nl__3);
#line 224
c_rt_lib0clear(&___nl__4);
#line 224
c_rt_lib0clear(&___nl__5);
#line 224
return ___nl__6;
#line 224
c_rt_lib0clear(&___nl__6);
#line 225
goto label_73;
#line 225
label_62:
#line 226
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__4));
#line 226
c_rt_lib0clear(&___nl__0);
#line 226
c_rt_lib0clear(&___nl__1);
#line 226
c_rt_lib0clear(&___nl__2);
#line 226
c_rt_lib0clear(&___nl__3);
#line 226
c_rt_lib0clear(&___nl__4);
#line 226
c_rt_lib0clear(&___nl__5);
#line 226
return ___nl__6;
#line 226
c_rt_lib0clear(&___nl__6);
#line 227
goto label_73;
#line 227
label_73:
#line 227
c_rt_lib0clear(&___nl__5);
#line 227
c_rt_lib0clear(&___nl__1);
#line 227
c_rt_lib0clear(&___nl__2);
#line 227
c_rt_lib0clear(&___nl__3);
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0clear(&___nl__0);
#line 227
return NULL;
}

ImmT dfile0state_out0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "dfile0state_out");
return dfile0state_out();}
ImmT dfile0state_out(){
return dfile_priv0__const__sing(1);}
ImmT dfile0state_out0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 231
c_rt_lib0move(&___nl__2, ptd0sim());
#line 231
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 231
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 231
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 231
c_rt_lib0clear(&___nl__4);
#line 231
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(239), ___nl__2, ___get_global_const(240), ___nl__3));
#line 231
c_rt_lib0clear(&___nl__2);
#line 231
c_rt_lib0clear(&___nl__3);
#line 231
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 231
c_rt_lib0clear(&___nl__1);
#line 231
return ___nl__0;
#line 231
c_rt_lib0clear(&___nl__0);
#line 231
return NULL;
}

ImmT dfile_priv0sp(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 235
c_rt_lib0move(&___nl__2,___get_global_const(239));
#line 235
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 235
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 235
c_rt_lib0move(&___nl__3,___get_global_const(239));
#line 235
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 235
c_rt_lib0clear(&___nl__3);
#line 235
c_rt_lib0clear(&___nl__2);
#line 235
c_rt_lib0clear(&___nl__1);
#line 235
return NULL;
}

ImmT dfile_priv0sprintstr(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 239
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 239
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 239
c_rt_lib0clear(&___nl__2);
#line 240
c_rt_lib0move(&___nl__3,___get_global_const(96));
#line 240
c_rt_lib0move(&___nl__4,___get_global_const(264));
#line 240
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 240
c_rt_lib0clear(&___nl__4);
#line 240
c_rt_lib0clear(&___nl__3);
#line 240
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 240
c_rt_lib0clear(&___nl__2);
#line 241
c_rt_lib0move(&___nl__3,___get_global_const(265));
#line 241
c_rt_lib0move(&___nl__4,___get_global_const(266));
#line 241
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0clear(&___nl__3);
#line 241
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 241
c_rt_lib0clear(&___nl__2);
#line 242
c_rt_lib0move(&___nl__3,___get_global_const(267));
#line 242
c_rt_lib0move(&___nl__4,___get_global_const(268));
#line 242
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 242
c_rt_lib0clear(&___nl__4);
#line 242
c_rt_lib0clear(&___nl__3);
#line 242
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 242
c_rt_lib0clear(&___nl__2);
#line 243
c_rt_lib0move(&___nl__3,___get_global_const(235));
#line 243
c_rt_lib0move(&___nl__4,___get_global_const(269));
#line 243
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 243
c_rt_lib0clear(&___nl__4);
#line 243
c_rt_lib0clear(&___nl__3);
#line 243
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 243
c_rt_lib0clear(&___nl__2);
#line 244
c_rt_lib0move(&___nl__2,___get_global_const(235));
#line 244
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 244
c_rt_lib0move(&___nl__3,___get_global_const(235));
#line 244
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 244
c_rt_lib0clear(&___nl__3);
#line 244
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__2));
#line 244
c_rt_lib0clear(&___nl__2);
#line 244
c_rt_lib0clear(&___nl__1);
#line 244
return NULL;
}

ImmT dfile_priv0is_simple_string(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 248
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 249
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 249
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 249
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 249
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 249
c_rt_lib0clear(&___nl__0);
#line 249
c_rt_lib0clear(&___nl__1);
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
return ___nl__3;
#line 249
c_rt_lib0clear(&___nl__3);
#line 249
goto label_12;
#line 249
label_12:
#line 249
c_rt_lib0clear(&___nl__2);
#line 250
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 250
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 250
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__4, ___nl__5));
#line 250
c_rt_lib0clear(&___nl__5);
#line 250
c_rt_lib0clear(&___nl__4);
#line 250
c_rt_lib0move(&___nl__2, string0is_letter(___nl__3));
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
if(c_rt_lib0check_true_native(___nl__2)){ goto label_30;}
#line 250
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 250
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 250
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__3, ___nl__4));
#line 250
c_rt_lib0clear(&___nl__4);
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
c_rt_lib0move(&___nl__3,___get_global_const(83));
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
label_30:
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 250
if(c_rt_lib0check_true_native(___nl__2)){ goto label_41;}
#line 250
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
c_rt_lib0clear(&___nl__2);
#line 250
return ___nl__3;
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
goto label_41;
#line 250
label_41:
#line 250
c_rt_lib0clear(&___nl__2);
#line 251
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 251
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 251
label_45:
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 251
if(c_rt_lib0check_true_native(___nl__4)){ goto label_78;}
#line 252
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 252
c_rt_lib0move(&___nl__5, string0substr(___nl__0, ___nl__2, ___nl__6));
#line 252
c_rt_lib0clear(&___nl__6);
#line 253
c_rt_lib0move(&___nl__6, string0is_letter(___nl__5));
#line 253
if(c_rt_lib0check_true_native(___nl__6)){ goto label_54;}
#line 253
c_rt_lib0move(&___nl__6, string0is_digit(___nl__5));
#line 253
label_54:
#line 253
if(c_rt_lib0check_true_native(___nl__6)){ goto label_58;}
#line 253
c_rt_lib0move(&___nl__6,___get_global_const(83));
#line 253
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__5, ___nl__6));
#line 253
label_58:
#line 253
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 253
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 253
if(c_rt_lib0check_true_native(___nl__6)){ goto label_73;}
#line 253
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 253
c_rt_lib0clear(&___nl__0);
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
goto label_73;
#line 253
label_73:
#line 253
c_rt_lib0clear(&___nl__6);
#line 253
c_rt_lib0clear(&___nl__5);
#line 254
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 254
goto label_45;
#line 254
label_78:
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
c_rt_lib0clear(&___nl__3);
#line 254
c_rt_lib0clear(&___nl__4);
#line 255
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
c_rt_lib0clear(&___nl__1);
#line 255
return ___nl__2;
#line 255
c_rt_lib0clear(&___nl__2);
#line 255
c_rt_lib0clear(&___nl__1);
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
return NULL;
}

ImmT dfile_priv0sprint_hash_key(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 259
c_rt_lib0move(&___nl__2, dfile_priv0is_simple_string(___nl__1));
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 259
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 260
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__1));
#line 261
goto label_8;
#line 261
label_5:
#line 262
c_rt_lib0delete(dfile_priv0sprintstr(___ref___0, ___nl__1));
#line 263
goto label_8;
#line 263
label_8:
#line 263
c_rt_lib0clear(&___nl__2);
#line 263
c_rt_lib0clear(&___nl__1);
#line 263
return NULL;
}

ImmT dfile_priv0get_ind(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 267
c_rt_lib0move(&___nl__2, string0tab());
#line 267
c_rt_lib0move(&___nl__1, string0char_times(___nl__2, ___nl__0));
#line 267
c_rt_lib0clear(&___nl__2);
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
return ___nl__1;
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
return NULL;
}

ImmT dfile_priv0sprint_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
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
#line 272
c_rt_lib0move(&___nl__4,___get_global_const(252));
#line 272
c_rt_lib0move(&___nl__5, string0lf());
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 272
c_rt_lib0clear(&___nl__5);
#line 272
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__4));
#line 272
c_rt_lib0clear(&___nl__4);
#line 273
c_rt_lib0move(&___nl__4, hash0keys(___nl__1));
#line 274
c_rt_lib0delete(array0sort(&___nl__4));
#line 275
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 275
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 275
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 275
label_11:
#line 275
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 275
if(c_rt_lib0check_true_native(___nl__9)){ goto label_39;}
#line 275
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 276
c_rt_lib0move(&___nl__10, hash0get_value(___nl__1, ___nl__5));
#line 277
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 277
c_rt_lib0move(&___nl__12, c_rt_lib0add(___nl__2, ___nl__12));
#line 277
c_rt_lib0move(&___nl__11, dfile_priv0get_ind(___nl__12));
#line 277
c_rt_lib0clear(&___nl__12);
#line 277
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__11));
#line 277
c_rt_lib0clear(&___nl__11);
#line 278
c_rt_lib0delete(dfile_priv0sprint_hash_key(___ref___0, ___nl__5));
#line 279
c_rt_lib0move(&___nl__11,___get_global_const(270));
#line 279
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__11));
#line 279
c_rt_lib0clear(&___nl__11);
#line 280
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 280
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__2, ___nl__11));
#line 280
c_rt_lib0delete(dfile_priv0sprint(___ref___0, ___nl__10, ___nl__11, ___nl__3));
#line 280
c_rt_lib0clear(&___nl__11);
#line 281
c_rt_lib0move(&___nl__11,___get_global_const(256));
#line 281
c_rt_lib0move(&___nl__12, string0lf());
#line 281
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 281
c_rt_lib0clear(&___nl__12);
#line 281
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__11));
#line 281
c_rt_lib0clear(&___nl__11);
#line 281
c_rt_lib0clear(&___nl__10);
#line 282
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 282
goto label_11;
#line 282
label_39:
#line 282
c_rt_lib0clear(&___nl__5);
#line 282
c_rt_lib0clear(&___nl__6);
#line 282
c_rt_lib0clear(&___nl__7);
#line 282
c_rt_lib0clear(&___nl__8);
#line 282
c_rt_lib0clear(&___nl__9);
#line 283
c_rt_lib0move(&___nl__5, dfile_priv0get_ind(___nl__2));
#line 283
c_rt_lib0move(&___nl__6,___get_global_const(253));
#line 283
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 283
c_rt_lib0clear(&___nl__6);
#line 283
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
c_rt_lib0clear(&___nl__2);
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
return NULL;
}

ImmT dfile_priv0handle_debug(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 287
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 287
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 287
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 287
label_3:
#line 287
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 287
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 287
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(240)));
#line 287
c_rt_lib0move(&___nl__2, hash0has_key(___nl__4, ___nl__1));
#line 287
c_rt_lib0clear(&___nl__4);
#line 287
label_9:
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 287
if(c_rt_lib0check_true_native(___nl__2)){ goto label_20;}
#line 288
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__1));
#line 289
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 289
c_rt_lib0clear(&___nl__1);
#line 289
c_rt_lib0clear(&___nl__2);
#line 289
return ___nl__3;
#line 289
c_rt_lib0clear(&___nl__3);
#line 290
goto label_36;
#line 290
label_20:
#line 291
c_rt_lib0move(&___nl__3,___get_global_const(240));
#line 291
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0get_true());
#line 291
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__1, ___nl__4));
#line 291
c_rt_lib0clear(&___nl__4);
#line 291
c_rt_lib0move(&___nl__4,___get_global_const(240));
#line 291
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 291
c_rt_lib0clear(&___nl__4);
#line 291
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 292
c_rt_lib0clear(&___nl__1);
#line 292
c_rt_lib0clear(&___nl__2);
#line 292
return ___nl__3;
#line 292
c_rt_lib0clear(&___nl__3);
#line 293
goto label_36;
#line 293
label_36:
#line 293
c_rt_lib0clear(&___nl__2);
#line 293
c_rt_lib0clear(&___nl__1);
#line 293
return NULL;
}

ImmT dfile_priv0sprint(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
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
#line 298
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 298
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 298
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 298
c_rt_lib0move(&___nl__4, dfile_priv0handle_debug(___ref___0, ___nl__1));
#line 298
label_4:
#line 298
c_rt_lib0clear(&___nl__5);
#line 298
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 298
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 298
c_rt_lib0clear(&___nl__1);
#line 298
c_rt_lib0clear(&___nl__2);
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
c_rt_lib0clear(&___nl__4);
#line 298
return NULL;
#line 298
goto label_14;
#line 298
label_14:
#line 298
c_rt_lib0clear(&___nl__4);
#line 299
c_rt_lib0move(&___nl__4, nl0is_sim(___nl__1));
#line 299
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 299
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 300
c_rt_lib0delete(dfile_priv0sprintstr(___ref___0, ___nl__1));
#line 301
goto label_106;
#line 301
label_21:
#line 301
c_rt_lib0move(&___nl__4, nl0is_array(___nl__1));
#line 301
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 301
if(c_rt_lib0check_true_native(___nl__4)){ goto label_69;}
#line 302
c_rt_lib0move(&___nl__5,___get_global_const(258));
#line 302
c_rt_lib0move(&___nl__6, string0lf());
#line 302
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 302
c_rt_lib0clear(&___nl__6);
#line 302
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 302
c_rt_lib0clear(&___nl__5);
#line 303
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 303
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 303
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__1));
#line 303
label_34:
#line 303
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 303
if(c_rt_lib0check_true_native(___nl__9)){ goto label_56;}
#line 303
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__1, ___nl__6));
#line 304
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 304
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__2, ___nl__11));
#line 304
c_rt_lib0move(&___nl__10, dfile_priv0get_ind(___nl__11));
#line 304
c_rt_lib0clear(&___nl__11);
#line 304
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__10));
#line 304
c_rt_lib0clear(&___nl__10);
#line 305
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 305
c_rt_lib0move(&___nl__10, c_rt_lib0add(___nl__2, ___nl__10));
#line 305
c_rt_lib0delete(dfile_priv0sprint(___ref___0, ___nl__5, ___nl__10, ___nl__3));
#line 305
c_rt_lib0clear(&___nl__10);
#line 306
c_rt_lib0move(&___nl__10,___get_global_const(256));
#line 306
c_rt_lib0move(&___nl__11, string0lf());
#line 306
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 306
c_rt_lib0clear(&___nl__11);
#line 306
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__10));
#line 306
c_rt_lib0clear(&___nl__10);
#line 307
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 307
goto label_34;
#line 307
label_56:
#line 307
c_rt_lib0clear(&___nl__5);
#line 307
c_rt_lib0clear(&___nl__6);
#line 307
c_rt_lib0clear(&___nl__7);
#line 307
c_rt_lib0clear(&___nl__8);
#line 307
c_rt_lib0clear(&___nl__9);
#line 308
c_rt_lib0move(&___nl__5, dfile_priv0get_ind(___nl__2));
#line 308
c_rt_lib0move(&___nl__6,___get_global_const(259));
#line 308
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 308
c_rt_lib0clear(&___nl__6);
#line 308
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 308
c_rt_lib0clear(&___nl__5);
#line 309
goto label_106;
#line 309
label_69:
#line 309
c_rt_lib0move(&___nl__4, nl0is_hash(___nl__1));
#line 309
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 309
if(c_rt_lib0check_true_native(___nl__4)){ goto label_75;}
#line 310
c_rt_lib0delete(dfile_priv0sprint_hash(___ref___0, ___nl__1, ___nl__2, ___nl__3));
#line 311
goto label_106;
#line 311
label_75:
#line 311
c_rt_lib0move(&___nl__4, nl0is_variant(___nl__1));
#line 311
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 311
if(c_rt_lib0check_true_native(___nl__4)){ goto label_101;}
#line 312
c_rt_lib0move(&___nl__5,___get_global_const(245));
#line 312
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 312
c_rt_lib0clear(&___nl__5);
#line 313
c_rt_lib0move(&___nl__5, ov0get_element(___nl__1));
#line 313
c_rt_lib0delete(dfile_priv0sprintstr(___ref___0, ___nl__5));
#line 313
c_rt_lib0clear(&___nl__5);
#line 314
c_rt_lib0move(&___nl__5, ov0has_value(___nl__1));
#line 314
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 314
if(c_rt_lib0check_true_native(___nl__5)){ goto label_95;}
#line 315
c_rt_lib0move(&___nl__6,___get_global_const(271));
#line 315
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__6));
#line 315
c_rt_lib0clear(&___nl__6);
#line 316
c_rt_lib0move(&___nl__6, ov0get_value(___nl__1));
#line 316
c_rt_lib0delete(dfile_priv0sprint(___ref___0, ___nl__6, ___nl__2, ___nl__3));
#line 316
c_rt_lib0clear(&___nl__6);
#line 317
goto label_95;
#line 317
label_95:
#line 317
c_rt_lib0clear(&___nl__5);
#line 318
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 318
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 318
c_rt_lib0clear(&___nl__5);
#line 319
goto label_106;
#line 319
label_101:
#line 320
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 320
nl_die_arg(___nl__5);
#line 320
c_rt_lib0clear(&___nl__5);
#line 321
goto label_106;
#line 321
label_106:
#line 321
c_rt_lib0clear(&___nl__4);
#line 321
c_rt_lib0clear(&___nl__1);
#line 321
c_rt_lib0clear(&___nl__2);
#line 321
c_rt_lib0clear(&___nl__3);
#line 321
return NULL;
}

ImmT dfile_priv0print_net_formatstr(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 325
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 325
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 326
c_rt_lib0move(&___nl__3,___get_global_const(96));
#line 326
c_rt_lib0move(&___nl__4,___get_global_const(264));
#line 326
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 326
c_rt_lib0clear(&___nl__4);
#line 326
c_rt_lib0clear(&___nl__3);
#line 326
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 326
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0move(&___nl__3, string0lf());
#line 327
c_rt_lib0move(&___nl__4,___get_global_const(272));
#line 327
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 327
c_rt_lib0clear(&___nl__4);
#line 327
c_rt_lib0clear(&___nl__3);
#line 327
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 327
c_rt_lib0clear(&___nl__2);
#line 328
c_rt_lib0move(&___nl__3,___get_global_const(265));
#line 328
c_rt_lib0move(&___nl__4,___get_global_const(266));
#line 328
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 328
c_rt_lib0clear(&___nl__4);
#line 328
c_rt_lib0clear(&___nl__3);
#line 328
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 328
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0move(&___nl__3,___get_global_const(267));
#line 329
c_rt_lib0move(&___nl__4,___get_global_const(268));
#line 329
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 329
c_rt_lib0clear(&___nl__4);
#line 329
c_rt_lib0clear(&___nl__3);
#line 329
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 329
c_rt_lib0clear(&___nl__2);
#line 330
c_rt_lib0move(&___nl__3,___get_global_const(235));
#line 330
c_rt_lib0move(&___nl__4,___get_global_const(269));
#line 330
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 330
c_rt_lib0clear(&___nl__4);
#line 330
c_rt_lib0clear(&___nl__3);
#line 330
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 330
c_rt_lib0clear(&___nl__2);
#line 331
c_rt_lib0move(&___nl__2,___get_global_const(235));
#line 331
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 331
c_rt_lib0move(&___nl__3,___get_global_const(235));
#line 331
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 331
c_rt_lib0clear(&___nl__3);
#line 331
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__2));
#line 331
c_rt_lib0clear(&___nl__2);
#line 331
c_rt_lib0clear(&___nl__1);
#line 331
return NULL;
}

ImmT dfile_priv0print_net_format(ImmT * ___ref___0,ImmT ___nl__1) {
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
ImmT ___nl__11 = NULL;
#line 335
c_rt_lib0move(&___nl__2, nl0is_sim(___nl__1));
#line 335
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 335
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 336
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___0, ___nl__1));
#line 337
goto label_116;
#line 337
label_5:
#line 337
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 337
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 337
if(c_rt_lib0check_true_native(___nl__2)){ goto label_35;}
#line 338
c_rt_lib0move(&___nl__3,___get_global_const(258));
#line 338
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 338
c_rt_lib0clear(&___nl__3);
#line 339
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 339
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 339
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 339
label_15:
#line 339
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 339
if(c_rt_lib0check_true_native(___nl__7)){ goto label_25;}
#line 339
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 340
c_rt_lib0delete(dfile_priv0print_net_format(___ref___0, ___nl__3));
#line 341
c_rt_lib0move(&___nl__8,___get_global_const(256));
#line 341
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__8));
#line 341
c_rt_lib0clear(&___nl__8);
#line 342
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 342
goto label_15;
#line 342
label_25:
#line 342
c_rt_lib0clear(&___nl__3);
#line 342
c_rt_lib0clear(&___nl__4);
#line 342
c_rt_lib0clear(&___nl__5);
#line 342
c_rt_lib0clear(&___nl__6);
#line 342
c_rt_lib0clear(&___nl__7);
#line 343
c_rt_lib0move(&___nl__3,___get_global_const(259));
#line 343
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 343
c_rt_lib0clear(&___nl__3);
#line 344
goto label_116;
#line 344
label_35:
#line 344
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 344
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 344
if(c_rt_lib0check_true_native(___nl__2)){ goto label_85;}
#line 345
c_rt_lib0move(&___nl__3,___get_global_const(252));
#line 345
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 345
c_rt_lib0clear(&___nl__3);
#line 346
c_rt_lib0move(&___nl__3, hash0keys(___nl__1));
#line 346
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 346
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 346
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 346
label_46:
#line 346
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 346
if(c_rt_lib0check_true_native(___nl__8)){ goto label_74;}
#line 346
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 347
c_rt_lib0move(&___nl__9, hash0get_value(___nl__1, ___nl__4));
#line 348
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 348
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__4, ___nl__11));
#line 348
c_rt_lib0move(&___nl__10, dfile_priv0is_simple_string(___nl__11));
#line 348
c_rt_lib0clear(&___nl__11);
#line 348
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 348
if(c_rt_lib0check_true_native(___nl__10)){ goto label_59;}
#line 349
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__4));
#line 350
goto label_62;
#line 350
label_59:
#line 351
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___0, ___nl__4));
#line 352
goto label_62;
#line 352
label_62:
#line 352
c_rt_lib0clear(&___nl__10);
#line 353
c_rt_lib0move(&___nl__10,___get_global_const(254));
#line 353
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__10));
#line 353
c_rt_lib0clear(&___nl__10);
#line 354
c_rt_lib0delete(dfile_priv0print_net_format(___ref___0, ___nl__9));
#line 355
c_rt_lib0move(&___nl__10,___get_global_const(256));
#line 355
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__10));
#line 355
c_rt_lib0clear(&___nl__10);
#line 355
c_rt_lib0clear(&___nl__9);
#line 356
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 356
goto label_46;
#line 356
label_74:
#line 356
c_rt_lib0clear(&___nl__3);
#line 356
c_rt_lib0clear(&___nl__4);
#line 356
c_rt_lib0clear(&___nl__5);
#line 356
c_rt_lib0clear(&___nl__6);
#line 356
c_rt_lib0clear(&___nl__7);
#line 356
c_rt_lib0clear(&___nl__8);
#line 357
c_rt_lib0move(&___nl__3,___get_global_const(253));
#line 357
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 357
c_rt_lib0clear(&___nl__3);
#line 358
goto label_116;
#line 358
label_85:
#line 358
c_rt_lib0move(&___nl__2, nl0is_variant(___nl__1));
#line 358
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 358
if(c_rt_lib0check_true_native(___nl__2)){ goto label_111;}
#line 359
c_rt_lib0move(&___nl__3,___get_global_const(245));
#line 359
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 359
c_rt_lib0clear(&___nl__3);
#line 360
c_rt_lib0move(&___nl__3, ov0get_element(___nl__1));
#line 360
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___0, ___nl__3));
#line 360
c_rt_lib0clear(&___nl__3);
#line 361
c_rt_lib0move(&___nl__3, ov0has_value(___nl__1));
#line 361
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 361
if(c_rt_lib0check_true_native(___nl__3)){ goto label_105;}
#line 362
c_rt_lib0move(&___nl__4,___get_global_const(256));
#line 362
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__4));
#line 362
c_rt_lib0clear(&___nl__4);
#line 363
c_rt_lib0move(&___nl__4, ov0get_value(___nl__1));
#line 363
c_rt_lib0delete(dfile_priv0print_net_format(___ref___0, ___nl__4));
#line 363
c_rt_lib0clear(&___nl__4);
#line 364
goto label_105;
#line 364
label_105:
#line 364
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 365
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 365
c_rt_lib0clear(&___nl__3);
#line 366
goto label_116;
#line 366
label_111:
#line 367
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(1, ___nl__1));
#line 367
nl_die_arg(___nl__3);
#line 367
c_rt_lib0clear(&___nl__3);
#line 368
goto label_116;
#line 368
label_116:
#line 368
c_rt_lib0clear(&___nl__2);
#line 368
c_rt_lib0clear(&___nl__1);
#line 368
return NULL;
}


static ImmT ___const__[3];
static int ___const_init__ = 1;
void dfile0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[2];


for(int i=0;i<2;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 2);
}
ImmT dfile_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT dfile_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = dfile0state_t0cal();
	break;
case 1:
	___const__[1] = dfile0state_out0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
