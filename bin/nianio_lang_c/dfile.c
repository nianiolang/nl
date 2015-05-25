
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "dfile.h"
#include "ov.h"
#include "c_fe_lib.h"
#include "c_std_lib.h"
#include "string.h"
#include "hash.h"
#include "array.h"
#include "nl.h"
#include "boolean_t.h"
#include "ptd.h"
#line 1 "dfile.nl"

static ImmT *__const__f = NULL;
void dfile_priv0__const__init();
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


ImmT dfile0fsave0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0fsave");
return dfile0fsave(_tab[0], _tab[1]);}
ImmT dfile0fsave(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 17
c_rt_lib0move(&___nl__4, dfile0ssave(___nl__1));
#line 17
c_rt_lib0move(&___nl__3, c_fe_lib0string_to_file(___nl__0, ___nl__4));
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(44)));
#line 17
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__3));
#line 17
nl_die_arg(___nl__3);
#line 17
label_1:
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return NULL;
}

ImmT dfile0fload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0fload");
return dfile0fload(_tab[0]);}
ImmT dfile0fload(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 21
c_rt_lib0move(&___nl__3, c_fe_lib0file_to_string(___nl__0));
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(44)));
#line 21
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__3));
#line 21
nl_die_arg(___nl__3);
#line 21
label_1:
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(44)));
#line 21
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0clear(&___nl__3);
#line 22
c_rt_lib0move(&___nl__2, dfile0sload(___nl__1));
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
return ___nl__2;
#line 22
c_rt_lib0clear(&___nl__2);
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
return NULL;
}

ImmT dfile0ssave0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0ssave");
return dfile0ssave(_tab[0]);}
ImmT dfile0ssave(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 26
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 26
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 26
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__2, ___get_global_const(155), ___nl__3));
#line 26
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 27
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 27
c_rt_lib0delete(dfile_priv0sprint(&___nl__1, ___nl__0, ___nl__2, ___nl__3));
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(154)));
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
return ___nl__2;
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
return NULL;
}

ImmT dfile0debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0debug");
return dfile0debug(_tab[0]);}
ImmT dfile0debug(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 32
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 32
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__2, ___get_global_const(155), ___nl__3));
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 33
c_rt_lib0delete(dfile_priv0sprint(&___nl__1, ___nl__0, ___nl__2, ___nl__3));
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(154)));
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
return ___nl__2;
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
return NULL;
}

ImmT dfile0ssave_net_format0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0ssave_net_format");
return dfile0ssave_net_format(_tab[0]);}
ImmT dfile0ssave_net_format(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 38
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 38
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 38
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__2, ___get_global_const(155), ___nl__3));
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0delete(dfile_priv0print_net_format(&___nl__1, ___nl__0));
#line 40
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(154)));
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
c_rt_lib0clear(&___nl__1);
#line 40
return ___nl__2;
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__1);
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
return NULL;
}

ImmT dfile_priv0eat_ws(ImmT * ___ref___0) {
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 44
label_2:
#line 45
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 45
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(157)));
#line 45
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 45
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
return NULL;
#line 45
goto label_4;
#line 45
label_4:
#line 45
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0move(&___nl__2, dfile_priv0get_char(___ref___0));
#line 46
c_rt_lib0move(&___nl__1, string0ord(___nl__2));
#line 46
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(158));
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(152));
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 47
label_9:
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(153));
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 47
label_8:
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(151));
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 47
label_7:
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 48
c_rt_lib0move(&___nl__3,___get_global_const(156));
#line 48
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 48
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 48
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 48
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 48
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__4);
#line 49
goto label_5;
#line 49
label_6:
#line 50
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0clear(&___nl__2);
#line 50
return NULL;
#line 51
goto label_5;
#line 51
label_5:
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__1);
#line 44
goto label_2;
#line 44
return NULL;
}

ImmT dfile_priv0get_char(ImmT * ___ref___0) {
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 55
c_rt_lib0move(&___nl__2, ptd0sim());
#line 55
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(154)));
#line 55
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 55
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 55
c_rt_lib0move(&___nl__3, c_std_lib0fast_substr(___nl__4, ___nl__5, ___nl__6));
#line 55
c_rt_lib0clear(&___nl__6);
#line 55
c_rt_lib0clear(&___nl__5);
#line 55
c_rt_lib0clear(&___nl__4);
#line 55
c_rt_lib0move(&___nl__1, ptd0ensure(___nl__2, ___nl__3));
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
return ___nl__1;
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
return NULL;
}

ImmT dfile_priv0is_ov(ImmT * ___ref___0) {
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 58
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(154)));
#line 58
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 58
c_rt_lib0move(&___nl__4,___get_global_const(159));
#line 58
c_rt_lib0move(&___nl__1, c_std_lib0fast_substr(___nl__2, ___nl__3, ___nl__4));
#line 58
c_rt_lib0clear(&___nl__4);
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0move(&___nl__2,___get_global_const(160));
#line 58
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__2));
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
return ___nl__1;
#line 58
c_rt_lib0clear(&___nl__1);
#line 58
return NULL;
}

ImmT dfile_priv0eat_non_ws(ImmT * ___ref___0,ImmT * ___ref___1) {
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 62
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(157)));
#line 64
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 64
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__4, ___nl__3));
#line 64
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 64
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 65
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 65
c_rt_lib0copy(___ref___1, ___nl__5);
#line 65
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 66
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 66
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 66
c_rt_lib0clear(&___nl__6);
#line 66
c_rt_lib0move(&___nl__6,___get_global_const(162));
#line 66
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 66
c_rt_lib0clear(&___nl__6);
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__4);
#line 66
return ___nl__5;
#line 66
c_rt_lib0clear(&___nl__5);
#line 67
goto label_2;
#line 67
label_2:
#line 67
c_rt_lib0clear(&___nl__4);
#line 68
label_4:
#line 69
c_rt_lib0move(&___nl__4, dfile_priv0get_char(___ref___0));
#line 70
c_rt_lib0move(&___nl__5, string0is_letter(___nl__4));
#line 70
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 70
c_rt_lib0move(&___nl__5, string0is_digit(___nl__4));
#line 70
label_8:
#line 70
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 70
c_rt_lib0move(&___nl__5,___get_global_const(163));
#line 70
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 70
label_7:
#line 70
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 70
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 70
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 70
c_rt_lib0clear(&___nl__4);
#line 70
c_rt_lib0clear(&___nl__5);
#line 70
goto label_3;
#line 70
goto label_6;
#line 70
label_6:
#line 70
c_rt_lib0clear(&___nl__5);
#line 71
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 71
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 71
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 71
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 71
c_rt_lib0move(&___nl__7,___get_global_const(156));
#line 71
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 71
c_rt_lib0clear(&___nl__7);
#line 71
c_rt_lib0clear(&___nl__5);
#line 71
c_rt_lib0clear(&___nl__6);
#line 72
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 73
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 73
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__5, ___nl__3));
#line 73
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 73
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 73
c_rt_lib0clear(&___nl__4);
#line 73
c_rt_lib0clear(&___nl__5);
#line 73
goto label_3;
#line 73
goto label_10;
#line 73
label_10:
#line 73
c_rt_lib0clear(&___nl__5);
#line 73
c_rt_lib0clear(&___nl__4);
#line 68
goto label_4;
#line 68
label_3:
#line 75
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 75
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__2, ___nl__4));
#line 75
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 75
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 76
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 76
c_rt_lib0copy(___ref___1, ___nl__5);
#line 76
c_rt_lib0clear(&___nl__5);
#line 77
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 77
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 77
c_rt_lib0clear(&___nl__6);
#line 77
c_rt_lib0move(&___nl__6,___get_global_const(162));
#line 77
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 77
c_rt_lib0clear(&___nl__6);
#line 77
c_rt_lib0clear(&___nl__2);
#line 77
c_rt_lib0clear(&___nl__3);
#line 77
c_rt_lib0clear(&___nl__4);
#line 77
return ___nl__5;
#line 77
c_rt_lib0clear(&___nl__5);
#line 78
goto label_12;
#line 78
label_12:
#line 78
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0clear(&___nl__3);
#line 79
return ___nl__2;
#line 79
c_rt_lib0clear(&___nl__2);
#line 79
c_rt_lib0clear(&___nl__3);
#line 79
return NULL;
}

ImmT dfile_priv0parse_scalar(ImmT * ___ref___0,ImmT * ___ref___1) {
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 83
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 84
c_rt_lib0move(&___nl__2, dfile_priv0get_char(___ref___0));
#line 84
c_rt_lib0move(&___nl__3,___get_global_const(150));
#line 84
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 84
c_rt_lib0clear(&___nl__3);
#line 84
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 84
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 85
c_rt_lib0move(&___nl__3,___get_global_const(156));
#line 85
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 85
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 85
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 85
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 85
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 85
c_rt_lib0clear(&___nl__5);
#line 85
c_rt_lib0clear(&___nl__3);
#line 85
c_rt_lib0clear(&___nl__4);
#line 86
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 87
label_4:
#line 88
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 88
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(157)));
#line 88
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__4, ___nl__5));
#line 88
c_rt_lib0clear(&___nl__5);
#line 88
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 88
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 89
c_rt_lib0copy(___ref___1, ___nl__5);
#line 89
c_rt_lib0clear(&___nl__5);
#line 90
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 90
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 90
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 90
c_rt_lib0clear(&___nl__6);
#line 90
c_rt_lib0move(&___nl__6,___get_global_const(164));
#line 90
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 90
c_rt_lib0clear(&___nl__6);
#line 90
c_rt_lib0clear(&___nl__2);
#line 90
c_rt_lib0clear(&___nl__3);
#line 90
c_rt_lib0clear(&___nl__4);
#line 90
return ___nl__5;
#line 90
c_rt_lib0clear(&___nl__5);
#line 91
goto label_6;
#line 91
label_6:
#line 91
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0move(&___nl__4, dfile_priv0get_char(___ref___0));
#line 93
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 93
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 93
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 93
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 93
c_rt_lib0move(&___nl__7,___get_global_const(156));
#line 93
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 93
c_rt_lib0clear(&___nl__7);
#line 93
c_rt_lib0clear(&___nl__5);
#line 93
c_rt_lib0clear(&___nl__6);
#line 94
c_rt_lib0move(&___nl__5,___get_global_const(150));
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 94
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 94
c_rt_lib0clear(&___nl__4);
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
goto label_3;
#line 94
goto label_8;
#line 94
label_8:
#line 94
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0move(&___nl__5,___get_global_const(80));
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 95
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 96
c_rt_lib0move(&___nl__6, dfile_priv0get_char(___ref___0));
#line 97
c_rt_lib0move(&___nl__7,___get_global_const(165));
#line 97
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 97
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 97
if(c_rt_lib0check_true_native(___nl__7)){ goto label_12;}
#line 98
c_rt_lib0move(&___nl__8, string0lf());
#line 98
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 98
c_rt_lib0clear(&___nl__8);
#line 99
goto label_11;
#line 99
label_12:
#line 99
c_rt_lib0move(&___nl__7,___get_global_const(166));
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 99
if(c_rt_lib0check_true_native(___nl__7)){ goto label_13;}
#line 100
c_rt_lib0move(&___nl__8, string0r());
#line 100
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 100
c_rt_lib0clear(&___nl__8);
#line 101
goto label_11;
#line 101
label_13:
#line 101
c_rt_lib0move(&___nl__7,___get_global_const(167));
#line 101
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 101
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 101
if(c_rt_lib0check_true_native(___nl__7)){ goto label_14;}
#line 102
c_rt_lib0move(&___nl__8, string0tab());
#line 102
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 102
c_rt_lib0clear(&___nl__8);
#line 103
goto label_11;
#line 103
label_14:
#line 104
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 105
goto label_11;
#line 105
label_11:
#line 105
c_rt_lib0clear(&___nl__7);
#line 106
c_rt_lib0move(&___nl__7,___get_global_const(156));
#line 106
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 106
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 106
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 106
c_rt_lib0move(&___nl__9,___get_global_const(156));
#line 106
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__7));
#line 106
c_rt_lib0clear(&___nl__9);
#line 106
c_rt_lib0clear(&___nl__7);
#line 106
c_rt_lib0clear(&___nl__8);
#line 106
c_rt_lib0clear(&___nl__6);
#line 107
goto label_9;
#line 107
label_10:
#line 108
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 109
goto label_9;
#line 109
label_9:
#line 109
c_rt_lib0clear(&___nl__5);
#line 109
c_rt_lib0clear(&___nl__4);
#line 87
goto label_4;
#line 87
label_3:
#line 111
c_rt_lib0clear(&___nl__2);
#line 111
return ___nl__3;
#line 111
c_rt_lib0clear(&___nl__3);
#line 112
goto label_1;
#line 112
label_2:
#line 113
c_rt_lib0move(&___nl__3, dfile_priv0eat_non_ws(___ref___0, ___ref___1));
#line 113
c_rt_lib0clear(&___nl__2);
#line 113
return ___nl__3;
#line 113
c_rt_lib0clear(&___nl__3);
#line 114
goto label_1;
#line 114
label_1:
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
return NULL;
}

ImmT dfile_priv0match_s(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 118
c_rt_lib0move(&___nl__2, string0length(___nl__1));
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(154)));
#line 119
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 119
c_rt_lib0move(&___nl__3, c_std_lib0fast_substr(___nl__4, ___nl__5, ___nl__2));
#line 119
c_rt_lib0clear(&___nl__5);
#line 119
c_rt_lib0clear(&___nl__4);
#line 119
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__1));
#line 119
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 119
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 120
c_rt_lib0move(&___nl__4,___get_global_const(156));
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__2));
#line 120
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 120
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 120
c_rt_lib0clear(&___nl__5);
#line 120
c_rt_lib0clear(&___nl__4);
#line 121
c_rt_lib0move(&___nl__4, c_rt_lib0get_true());
#line 121
c_rt_lib0clear(&___nl__1);
#line 121
c_rt_lib0clear(&___nl__2);
#line 121
c_rt_lib0clear(&___nl__3);
#line 121
return ___nl__4;
#line 121
c_rt_lib0clear(&___nl__4);
#line 122
goto label_1;
#line 122
label_2:
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
return ___nl__4;
#line 123
c_rt_lib0clear(&___nl__4);
#line 124
goto label_1;
#line 124
label_1:
#line 124
c_rt_lib0clear(&___nl__3);
#line 124
c_rt_lib0clear(&___nl__2);
#line 124
c_rt_lib0clear(&___nl__1);
#line 124
return NULL;
}

ImmT dfile0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "dfile0state_t");
return dfile0state_t();}
ImmT dfile0state_t(){
dfile_priv0__const__init();
return dfile_priv0__const__sing(0);}
ImmT dfile0state_t0cal() {
dfile_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 128
c_rt_lib0move(&___nl__3, ptd0sim());
#line 128
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0move(&___nl__3, ptd0sim());
#line 128
c_rt_lib0move(&___nl__4, ptd0sim());
#line 128
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(154), ___nl__2, ___get_global_const(157), ___nl__3, ___get_global_const(156), ___nl__4));
#line 128
c_rt_lib0clear(&___nl__2);
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 128
c_rt_lib0clear(&___nl__1);
#line 128
return ___nl__0;
#line 128
c_rt_lib0clear(&___nl__0);
#line 128
return NULL;
}

ImmT dfile_priv0parse(ImmT * ___ref___0,ImmT * ___ref___1) {
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 136
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 137
c_rt_lib0move(&___nl__2, dfile_priv0get_char(___ref___0));
#line 138
c_rt_lib0move(&___nl__3,___get_global_const(168));
#line 138
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 138
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 138
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 139
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 139
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 139
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 139
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 139
c_rt_lib0move(&___nl__6,___get_global_const(156));
#line 139
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 139
c_rt_lib0clear(&___nl__6);
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0clear(&___nl__5);
#line 140
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 141
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 142
label_4:
#line 142
c_rt_lib0move(&___nl__6,___get_global_const(169));
#line 142
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 142
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 143
c_rt_lib0move(&___nl__6, dfile_priv0parse_scalar(___ref___0, ___ref___1));
#line 144
c_rt_lib0copy(&___nl__7, *___ref___1);
#line 144
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 144
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 144
c_rt_lib0clear(&___nl__2);
#line 144
c_rt_lib0clear(&___nl__3);
#line 144
c_rt_lib0clear(&___nl__4);
#line 144
c_rt_lib0clear(&___nl__5);
#line 144
c_rt_lib0clear(&___nl__7);
#line 144
return ___nl__6;
#line 144
goto label_6;
#line 144
label_6:
#line 144
c_rt_lib0clear(&___nl__7);
#line 145
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 146
c_rt_lib0move(&___nl__8,___get_global_const(170));
#line 146
c_rt_lib0move(&___nl__7, dfile_priv0match_s(___ref___0, ___nl__8));
#line 146
c_rt_lib0clear(&___nl__8);
#line 146
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 146
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 146
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 147
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 147
c_rt_lib0copy(___ref___1, ___nl__8);
#line 147
c_rt_lib0clear(&___nl__8);
#line 148
c_rt_lib0move(&___nl__8,___get_global_const(161));
#line 148
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 148
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 148
c_rt_lib0clear(&___nl__9);
#line 148
c_rt_lib0move(&___nl__9,___get_global_const(171));
#line 148
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 148
c_rt_lib0clear(&___nl__9);
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
c_rt_lib0clear(&___nl__7);
#line 148
return ___nl__8;
#line 148
c_rt_lib0clear(&___nl__8);
#line 149
goto label_8;
#line 149
label_8:
#line 149
c_rt_lib0clear(&___nl__7);
#line 150
c_rt_lib0move(&___nl__7, dfile_priv0parse(___ref___0, ___ref___1));
#line 151
c_rt_lib0copy(&___nl__8, *___ref___1);
#line 151
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 151
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 151
c_rt_lib0clear(&___nl__2);
#line 151
c_rt_lib0clear(&___nl__3);
#line 151
c_rt_lib0clear(&___nl__4);
#line 151
c_rt_lib0clear(&___nl__5);
#line 151
c_rt_lib0clear(&___nl__6);
#line 151
c_rt_lib0clear(&___nl__8);
#line 151
return ___nl__7;
#line 151
goto label_10;
#line 151
label_10:
#line 151
c_rt_lib0clear(&___nl__8);
#line 152
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__6, ___nl__7));
#line 153
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 154
c_rt_lib0move(&___nl__9,___get_global_const(172));
#line 154
c_rt_lib0move(&___nl__8, dfile_priv0match_s(___ref___0, ___nl__9));
#line 154
c_rt_lib0clear(&___nl__9);
#line 154
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 154
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 154
if(c_rt_lib0check_true_native(___nl__8)){ goto label_12;}
#line 155
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 155
c_rt_lib0copy(___ref___1, ___nl__9);
#line 155
c_rt_lib0clear(&___nl__9);
#line 156
c_rt_lib0move(&___nl__9,___get_global_const(161));
#line 156
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 156
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 156
c_rt_lib0clear(&___nl__10);
#line 156
c_rt_lib0move(&___nl__10,___get_global_const(173));
#line 156
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 156
c_rt_lib0clear(&___nl__10);
#line 156
c_rt_lib0clear(&___nl__2);
#line 156
c_rt_lib0clear(&___nl__3);
#line 156
c_rt_lib0clear(&___nl__4);
#line 156
c_rt_lib0clear(&___nl__5);
#line 156
c_rt_lib0clear(&___nl__6);
#line 156
c_rt_lib0clear(&___nl__7);
#line 156
c_rt_lib0clear(&___nl__8);
#line 156
return ___nl__9;
#line 156
c_rt_lib0clear(&___nl__9);
#line 157
goto label_12;
#line 157
label_12:
#line 157
c_rt_lib0clear(&___nl__8);
#line 158
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 158
c_rt_lib0clear(&___nl__6);
#line 158
c_rt_lib0clear(&___nl__7);
#line 159
goto label_4;
#line 159
label_3:
#line 159
c_rt_lib0clear(&___nl__5);
#line 160
c_rt_lib0clear(&___nl__2);
#line 160
c_rt_lib0clear(&___nl__3);
#line 160
return ___nl__4;
#line 160
c_rt_lib0clear(&___nl__4);
#line 161
goto label_1;
#line 161
label_2:
#line 161
c_rt_lib0move(&___nl__3,___get_global_const(174));
#line 161
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 161
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 161
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 162
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 162
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 162
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 162
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 162
c_rt_lib0move(&___nl__6,___get_global_const(156));
#line 162
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 162
c_rt_lib0clear(&___nl__6);
#line 162
c_rt_lib0clear(&___nl__4);
#line 162
c_rt_lib0clear(&___nl__5);
#line 163
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 164
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 165
label_15:
#line 165
c_rt_lib0move(&___nl__6,___get_global_const(175));
#line 165
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 165
c_rt_lib0clear(&___nl__6);
#line 165
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 165
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 165
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 166
c_rt_lib0move(&___nl__6, dfile_priv0parse(___ref___0, ___ref___1));
#line 167
c_rt_lib0copy(&___nl__7, *___ref___1);
#line 167
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 167
if(c_rt_lib0check_true_native(___nl__7)){ goto label_17;}
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
c_rt_lib0clear(&___nl__3);
#line 167
c_rt_lib0clear(&___nl__4);
#line 167
c_rt_lib0clear(&___nl__5);
#line 167
c_rt_lib0clear(&___nl__7);
#line 167
return ___nl__6;
#line 167
goto label_17;
#line 167
label_17:
#line 167
c_rt_lib0clear(&___nl__7);
#line 168
c_rt_lib0delete(array0push(&___nl__4, ___nl__6));
#line 169
c_rt_lib0move(&___nl__8,___get_global_const(172));
#line 169
c_rt_lib0move(&___nl__7, dfile_priv0match_s(___ref___0, ___nl__8));
#line 169
c_rt_lib0clear(&___nl__8);
#line 169
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 169
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 169
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 170
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 170
c_rt_lib0copy(___ref___1, ___nl__8);
#line 170
c_rt_lib0clear(&___nl__8);
#line 171
c_rt_lib0move(&___nl__8,___get_global_const(161));
#line 171
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 171
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 171
c_rt_lib0clear(&___nl__9);
#line 171
c_rt_lib0move(&___nl__9,___get_global_const(173));
#line 171
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 171
c_rt_lib0clear(&___nl__9);
#line 171
c_rt_lib0clear(&___nl__2);
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
c_rt_lib0clear(&___nl__4);
#line 171
c_rt_lib0clear(&___nl__5);
#line 171
c_rt_lib0clear(&___nl__6);
#line 171
c_rt_lib0clear(&___nl__7);
#line 171
return ___nl__8;
#line 171
c_rt_lib0clear(&___nl__8);
#line 172
goto label_19;
#line 172
label_19:
#line 172
c_rt_lib0clear(&___nl__7);
#line 173
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 173
c_rt_lib0clear(&___nl__6);
#line 174
goto label_15;
#line 174
label_14:
#line 174
c_rt_lib0clear(&___nl__5);
#line 175
c_rt_lib0clear(&___nl__2);
#line 175
c_rt_lib0clear(&___nl__3);
#line 175
return ___nl__4;
#line 175
c_rt_lib0clear(&___nl__4);
#line 176
goto label_1;
#line 176
label_13:
#line 176
c_rt_lib0move(&___nl__3,___get_global_const(139));
#line 176
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 176
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 176
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 176
c_rt_lib0move(&___nl__3, dfile_priv0is_ov(___ref___0));
#line 176
label_21:
#line 176
c_rt_lib0clear(&___nl__4);
#line 176
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 176
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 177
c_rt_lib0move(&___nl__4,___get_global_const(159));
#line 177
c_rt_lib0move(&___nl__5,___get_global_const(156));
#line 177
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 177
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 177
c_rt_lib0move(&___nl__6,___get_global_const(156));
#line 177
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 177
c_rt_lib0clear(&___nl__6);
#line 177
c_rt_lib0clear(&___nl__4);
#line 177
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0move(&___nl__4, dfile_priv0parse_scalar(___ref___0, ___ref___1));
#line 179
c_rt_lib0copy(&___nl__5, *___ref___1);
#line 179
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 179
if(c_rt_lib0check_true_native(___nl__5)){ goto label_23;}
#line 179
c_rt_lib0clear(&___nl__2);
#line 179
c_rt_lib0clear(&___nl__3);
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
return ___nl__4;
#line 179
goto label_23;
#line 179
label_23:
#line 179
c_rt_lib0clear(&___nl__5);
#line 180
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 181
c_rt_lib0move(&___nl__6,___get_global_const(172));
#line 181
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 181
c_rt_lib0clear(&___nl__6);
#line 181
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 181
if(c_rt_lib0check_true_native(___nl__5)){ goto label_25;}
#line 182
c_rt_lib0move(&___nl__6, dfile_priv0parse(___ref___0, ___ref___1));
#line 183
c_rt_lib0copy(&___nl__7, *___ref___1);
#line 183
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 183
if(c_rt_lib0check_true_native(___nl__7)){ goto label_27;}
#line 183
c_rt_lib0clear(&___nl__2);
#line 183
c_rt_lib0clear(&___nl__3);
#line 183
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0clear(&___nl__5);
#line 183
c_rt_lib0clear(&___nl__7);
#line 183
return ___nl__6;
#line 183
goto label_27;
#line 183
label_27:
#line 183
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 185
c_rt_lib0move(&___nl__8,___get_global_const(176));
#line 185
c_rt_lib0move(&___nl__7, dfile_priv0match_s(___ref___0, ___nl__8));
#line 185
c_rt_lib0clear(&___nl__8);
#line 185
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 185
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 185
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
#line 186
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 186
c_rt_lib0copy(___ref___1, ___nl__8);
#line 186
c_rt_lib0clear(&___nl__8);
#line 187
c_rt_lib0move(&___nl__8,___get_global_const(161));
#line 187
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 187
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 187
c_rt_lib0clear(&___nl__9);
#line 187
c_rt_lib0move(&___nl__9,___get_global_const(177));
#line 187
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 187
c_rt_lib0clear(&___nl__9);
#line 187
c_rt_lib0clear(&___nl__2);
#line 187
c_rt_lib0clear(&___nl__3);
#line 187
c_rt_lib0clear(&___nl__4);
#line 187
c_rt_lib0clear(&___nl__5);
#line 187
c_rt_lib0clear(&___nl__6);
#line 187
c_rt_lib0clear(&___nl__7);
#line 187
return ___nl__8;
#line 187
c_rt_lib0clear(&___nl__8);
#line 188
goto label_29;
#line 188
label_29:
#line 188
c_rt_lib0clear(&___nl__7);
#line 189
c_rt_lib0move(&___nl__7, ov0mk_val(___nl__4, ___nl__6));
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
return ___nl__7;
#line 189
c_rt_lib0clear(&___nl__7);
#line 189
c_rt_lib0clear(&___nl__6);
#line 190
goto label_25;
#line 190
label_25:
#line 190
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 192
c_rt_lib0move(&___nl__6,___get_global_const(176));
#line 192
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 192
c_rt_lib0clear(&___nl__6);
#line 192
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 192
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 192
if(c_rt_lib0check_true_native(___nl__5)){ goto label_31;}
#line 193
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 193
c_rt_lib0copy(___ref___1, ___nl__6);
#line 193
c_rt_lib0clear(&___nl__6);
#line 194
c_rt_lib0move(&___nl__6,___get_global_const(161));
#line 194
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(156)));
#line 194
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 194
c_rt_lib0clear(&___nl__7);
#line 194
c_rt_lib0move(&___nl__7,___get_global_const(177));
#line 194
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 194
c_rt_lib0clear(&___nl__7);
#line 194
c_rt_lib0clear(&___nl__2);
#line 194
c_rt_lib0clear(&___nl__3);
#line 194
c_rt_lib0clear(&___nl__4);
#line 194
c_rt_lib0clear(&___nl__5);
#line 194
return ___nl__6;
#line 194
c_rt_lib0clear(&___nl__6);
#line 195
goto label_31;
#line 195
label_31:
#line 195
c_rt_lib0clear(&___nl__5);
#line 196
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 197
c_rt_lib0move(&___nl__5, ov0mk(___nl__4));
#line 197
c_rt_lib0clear(&___nl__2);
#line 197
c_rt_lib0clear(&___nl__3);
#line 197
c_rt_lib0clear(&___nl__4);
#line 197
return ___nl__5;
#line 197
c_rt_lib0clear(&___nl__5);
#line 197
c_rt_lib0clear(&___nl__4);
#line 198
goto label_1;
#line 198
label_20:
#line 199
c_rt_lib0move(&___nl__4, dfile_priv0parse_scalar(___ref___0, ___ref___1));
#line 199
c_rt_lib0clear(&___nl__2);
#line 199
c_rt_lib0clear(&___nl__3);
#line 199
return ___nl__4;
#line 199
c_rt_lib0clear(&___nl__4);
#line 200
goto label_1;
#line 200
label_1:
#line 200
c_rt_lib0clear(&___nl__3);
#line 200
c_rt_lib0clear(&___nl__2);
#line 200
return NULL;
}

ImmT dfile0sload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0sload");
return dfile0sload(_tab[0]);}
ImmT dfile0sload(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 204
c_rt_lib0move(&___nl__3, dfile0try_sload(___nl__0));
#line 204
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(44)));
#line 204
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__3));
#line 204
nl_die_arg(___nl__3);
#line 204
label_1:
#line 204
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(44)));
#line 204
c_rt_lib0clear(&___nl__2);
#line 204
c_rt_lib0clear(&___nl__3);
#line 205
c_rt_lib0clear(&___nl__0);
#line 205
return ___nl__1;
#line 205
c_rt_lib0clear(&___nl__1);
#line 205
c_rt_lib0clear(&___nl__0);
#line 205
return NULL;
}

ImmT dfile0try_sload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0try_sload");
return dfile0try_sload(_tab[0]);}
ImmT dfile0try_sload(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 209
c_rt_lib0move(&___nl__2, ptd0sim());
#line 209
c_rt_lib0move(&___nl__1, ptd0ensure(___nl__2, ___nl__0));
#line 209
c_rt_lib0clear(&___nl__2);
#line 210
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(1, ___nl__1));
#line 210
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 210
c_rt_lib0move(&___nl__5, string0length(___nl__1));
#line 210
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(154), ___nl__3, ___get_global_const(156), ___nl__4, ___get_global_const(157), ___nl__5));
#line 210
c_rt_lib0clear(&___nl__3);
#line 210
c_rt_lib0clear(&___nl__4);
#line 210
c_rt_lib0clear(&___nl__5);
#line 211
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 212
c_rt_lib0move(&___nl__4,___get_global_const(178));
#line 212
c_rt_lib0delete(dfile_priv0match_s(&___nl__2, ___nl__4));
#line 212
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__2));
#line 214
c_rt_lib0move(&___nl__4, dfile_priv0parse(&___nl__2, &___nl__3));
#line 215
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__2));
#line 216
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 216
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 216
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 216
if(c_rt_lib0check_true_native(___nl__6)){ goto label_3;}
#line 216
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(156)));
#line 216
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(157)));
#line 216
c_rt_lib0move(&___nl__5, c_rt_lib0num_ne(___nl__5, ___nl__7));
#line 216
c_rt_lib0clear(&___nl__7);
#line 216
label_3:
#line 216
c_rt_lib0clear(&___nl__6);
#line 216
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 216
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 217
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 217
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 217
c_rt_lib0clear(&___nl__6);
#line 218
c_rt_lib0move(&___nl__6,___get_global_const(161));
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(156)));
#line 218
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 218
c_rt_lib0clear(&___nl__7);
#line 218
c_rt_lib0move(&___nl__7,___get_global_const(179));
#line 218
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 218
c_rt_lib0clear(&___nl__7);
#line 218
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 218
c_rt_lib0clear(&___nl__6);
#line 219
goto label_2;
#line 219
label_2:
#line 219
c_rt_lib0clear(&___nl__5);
#line 220
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 220
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 220
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 221
c_rt_lib0move(&___nl__7, ptd0sim());
#line 221
c_rt_lib0move(&___nl__6, ptd0ensure(___nl__7, ___nl__4));
#line 221
c_rt_lib0clear(&___nl__7);
#line 221
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 221
c_rt_lib0clear(&___nl__6);
#line 222
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__4));
#line 222
c_rt_lib0clear(&___nl__0);
#line 222
c_rt_lib0clear(&___nl__1);
#line 222
c_rt_lib0clear(&___nl__2);
#line 222
c_rt_lib0clear(&___nl__3);
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
return ___nl__6;
#line 222
c_rt_lib0clear(&___nl__6);
#line 223
goto label_4;
#line 223
label_5:
#line 224
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
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
goto label_4;
#line 225
label_4:
#line 225
c_rt_lib0clear(&___nl__5);
#line 225
c_rt_lib0clear(&___nl__1);
#line 225
c_rt_lib0clear(&___nl__2);
#line 225
c_rt_lib0clear(&___nl__3);
#line 225
c_rt_lib0clear(&___nl__4);
#line 225
c_rt_lib0clear(&___nl__0);
#line 225
return NULL;
}

ImmT dfile0state_out0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "dfile0state_out");
return dfile0state_out();}
ImmT dfile0state_out(){
dfile_priv0__const__init();
return dfile_priv0__const__sing(1);}
ImmT dfile0state_out0cal() {
dfile_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 230
c_rt_lib0move(&___nl__2, ptd0sim());
#line 230
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(180), ___get_global_const(72)));
#line 230
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 230
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 230
c_rt_lib0clear(&___nl__4);
#line 230
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__2, ___get_global_const(155), ___nl__3));
#line 230
c_rt_lib0clear(&___nl__2);
#line 230
c_rt_lib0clear(&___nl__3);
#line 230
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 230
c_rt_lib0clear(&___nl__1);
#line 230
return ___nl__0;
#line 230
c_rt_lib0clear(&___nl__0);
#line 230
return NULL;
}

ImmT dfile_priv0sp(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 236
c_rt_lib0move(&___nl__2,___get_global_const(154));
#line 236
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 236
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 236
c_rt_lib0move(&___nl__3,___get_global_const(154));
#line 236
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 236
c_rt_lib0clear(&___nl__3);
#line 236
c_rt_lib0clear(&___nl__2);
#line 236
c_rt_lib0clear(&___nl__1);
#line 236
return NULL;
}

ImmT dfile_priv0sprintstr(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 240
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 240
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 240
c_rt_lib0clear(&___nl__2);
#line 241
c_rt_lib0move(&___nl__3,___get_global_const(80));
#line 241
c_rt_lib0move(&___nl__4,___get_global_const(181));
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
c_rt_lib0move(&___nl__3,___get_global_const(182));
#line 242
c_rt_lib0move(&___nl__4,___get_global_const(183));
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
c_rt_lib0move(&___nl__3,___get_global_const(184));
#line 243
c_rt_lib0move(&___nl__4,___get_global_const(185));
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
c_rt_lib0move(&___nl__3,___get_global_const(150));
#line 244
c_rt_lib0move(&___nl__4,___get_global_const(186));
#line 244
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 244
c_rt_lib0clear(&___nl__4);
#line 244
c_rt_lib0clear(&___nl__3);
#line 244
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 244
c_rt_lib0clear(&___nl__2);
#line 245
c_rt_lib0move(&___nl__2,___get_global_const(150));
#line 245
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 245
c_rt_lib0move(&___nl__3,___get_global_const(150));
#line 245
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 245
c_rt_lib0clear(&___nl__3);
#line 245
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__2));
#line 245
c_rt_lib0clear(&___nl__2);
#line 245
c_rt_lib0clear(&___nl__1);
#line 245
return NULL;
}

ImmT dfile_priv0is_simple_string(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 249
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 250
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 250
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
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
goto label_2;
#line 250
label_2:
#line 250
c_rt_lib0clear(&___nl__2);
#line 251
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 251
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 251
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__4, ___nl__5));
#line 251
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0move(&___nl__2, string0is_letter(___nl__3));
#line 251
c_rt_lib0clear(&___nl__3);
#line 251
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 251
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 251
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 251
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__3, ___nl__4));
#line 251
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0clear(&___nl__3);
#line 251
c_rt_lib0move(&___nl__3,___get_global_const(163));
#line 251
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 251
c_rt_lib0clear(&___nl__3);
#line 251
label_5:
#line 251
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 251
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 251
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 251
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
c_rt_lib0clear(&___nl__2);
#line 251
return ___nl__3;
#line 251
c_rt_lib0clear(&___nl__3);
#line 251
goto label_4;
#line 251
label_4:
#line 251
c_rt_lib0clear(&___nl__2);
#line 252
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 252
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 252
label_8:
#line 252
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 252
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 253
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 253
c_rt_lib0move(&___nl__5, string0substr(___nl__0, ___nl__2, ___nl__6));
#line 253
c_rt_lib0clear(&___nl__6);
#line 254
c_rt_lib0move(&___nl__6, string0is_letter(___nl__5));
#line 254
if(c_rt_lib0check_true_native(___nl__6)){ goto label_12;}
#line 254
c_rt_lib0move(&___nl__6, string0is_digit(___nl__5));
#line 254
label_12:
#line 254
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 254
c_rt_lib0move(&___nl__6,___get_global_const(163));
#line 254
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__5, ___nl__6));
#line 254
label_11:
#line 254
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 254
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 254
if(c_rt_lib0check_true_native(___nl__6)){ goto label_10;}
#line 254
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
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
return ___nl__7;
#line 254
c_rt_lib0clear(&___nl__7);
#line 254
goto label_10;
#line 254
label_10:
#line 254
c_rt_lib0clear(&___nl__6);
#line 254
c_rt_lib0clear(&___nl__5);
#line 255
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 255
goto label_8;
#line 255
label_6:
#line 255
c_rt_lib0clear(&___nl__2);
#line 255
c_rt_lib0clear(&___nl__3);
#line 255
c_rt_lib0clear(&___nl__4);
#line 256
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 256
c_rt_lib0clear(&___nl__0);
#line 256
c_rt_lib0clear(&___nl__1);
#line 256
return ___nl__2;
#line 256
c_rt_lib0clear(&___nl__2);
#line 256
c_rt_lib0clear(&___nl__1);
#line 256
c_rt_lib0clear(&___nl__0);
#line 256
return NULL;
}

ImmT dfile_priv0sprint_hash_key(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 260
c_rt_lib0move(&___nl__2, dfile_priv0is_simple_string(___nl__1));
#line 260
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 260
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 261
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__1));
#line 262
goto label_1;
#line 262
label_2:
#line 263
c_rt_lib0delete(dfile_priv0sprintstr(___ref___0, ___nl__1));
#line 264
goto label_1;
#line 264
label_1:
#line 264
c_rt_lib0clear(&___nl__2);
#line 264
c_rt_lib0clear(&___nl__1);
#line 264
return NULL;
}

ImmT dfile_priv0get_ind(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 268
c_rt_lib0move(&___nl__2, string0tab());
#line 268
c_rt_lib0move(&___nl__1, string0char_times(___nl__2, ___nl__0));
#line 268
c_rt_lib0clear(&___nl__2);
#line 268
c_rt_lib0clear(&___nl__0);
#line 268
return ___nl__1;
#line 268
c_rt_lib0clear(&___nl__1);
#line 268
c_rt_lib0clear(&___nl__0);
#line 268
return NULL;
}

ImmT dfile_priv0sprint_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
dfile_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
#line 273
c_rt_lib0move(&___nl__4,___get_global_const(168));
#line 273
c_rt_lib0move(&___nl__5, string0lf());
#line 273
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 273
c_rt_lib0clear(&___nl__5);
#line 273
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__4));
#line 273
c_rt_lib0clear(&___nl__4);
#line 274
c_rt_lib0move(&___nl__4, hash0keys(___nl__1));
#line 275
c_rt_lib0delete(array0sort(&___nl__4));
#line 276
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 276
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 276
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 276
label_3:
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 276
if(c_rt_lib0check_true_native(___nl__9)){ goto label_1;}
#line 276
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 277
c_rt_lib0move(&___nl__10, hash0get_value(___nl__1, ___nl__5));
#line 278
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 278
c_rt_lib0move(&___nl__12, c_rt_lib0add(___nl__2, ___nl__12));
#line 278
c_rt_lib0move(&___nl__11, dfile_priv0get_ind(___nl__12));
#line 278
c_rt_lib0clear(&___nl__12);
#line 278
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__11));
#line 278
c_rt_lib0clear(&___nl__11);
#line 279
c_rt_lib0delete(dfile_priv0sprint_hash_key(___ref___0, ___nl__5));
#line 280
c_rt_lib0move(&___nl__11,___get_global_const(187));
#line 280
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__11));
#line 280
c_rt_lib0clear(&___nl__11);
#line 281
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 281
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__2, ___nl__11));
#line 281
c_rt_lib0delete(dfile_priv0sprint(___ref___0, ___nl__10, ___nl__11, ___nl__3));
#line 281
c_rt_lib0clear(&___nl__11);
#line 282
c_rt_lib0move(&___nl__11,___get_global_const(172));
#line 282
c_rt_lib0move(&___nl__12, string0lf());
#line 282
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 282
c_rt_lib0clear(&___nl__12);
#line 282
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__11));
#line 282
c_rt_lib0clear(&___nl__11);
#line 282
c_rt_lib0clear(&___nl__10);
#line 283
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 283
goto label_3;
#line 283
label_1:
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0clear(&___nl__6);
#line 283
c_rt_lib0clear(&___nl__7);
#line 283
c_rt_lib0clear(&___nl__8);
#line 283
c_rt_lib0clear(&___nl__9);
#line 284
c_rt_lib0move(&___nl__5, dfile_priv0get_ind(___nl__2));
#line 284
c_rt_lib0move(&___nl__6,___get_global_const(169));
#line 284
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 284
c_rt_lib0clear(&___nl__6);
#line 284
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 284
c_rt_lib0clear(&___nl__5);
#line 284
c_rt_lib0clear(&___nl__4);
#line 284
c_rt_lib0clear(&___nl__1);
#line 284
c_rt_lib0clear(&___nl__2);
#line 284
c_rt_lib0clear(&___nl__3);
#line 284
return NULL;
}

ImmT dfile_priv0handle_debug(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 288
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 288
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 288
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 288
label_4:
#line 288
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 288
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 288
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(155)));
#line 288
c_rt_lib0move(&___nl__2, hash0has_key(___nl__4, ___nl__1));
#line 288
c_rt_lib0clear(&___nl__4);
#line 288
label_3:
#line 288
c_rt_lib0clear(&___nl__3);
#line 288
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 288
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 289
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__1));
#line 290
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 290
c_rt_lib0clear(&___nl__1);
#line 290
c_rt_lib0clear(&___nl__2);
#line 290
return ___nl__3;
#line 290
c_rt_lib0clear(&___nl__3);
#line 291
goto label_1;
#line 291
label_2:
#line 292
c_rt_lib0move(&___nl__3,___get_global_const(155));
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 292
c_rt_lib0move(&___nl__4, c_rt_lib0get_true());
#line 292
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__1, ___nl__4));
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0move(&___nl__4,___get_global_const(155));
#line 292
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0clear(&___nl__3);
#line 293
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 293
c_rt_lib0clear(&___nl__1);
#line 293
c_rt_lib0clear(&___nl__2);
#line 293
return ___nl__3;
#line 293
c_rt_lib0clear(&___nl__3);
#line 294
goto label_1;
#line 294
label_1:
#line 294
c_rt_lib0clear(&___nl__2);
#line 294
c_rt_lib0clear(&___nl__1);
#line 294
return NULL;
}

ImmT dfile_priv0sprint(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
dfile_priv0__const__init();
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
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 298
c_rt_lib0move(&___nl__4, dfile_priv0handle_debug(___ref___0, ___nl__1));
#line 298
label_3:
#line 298
c_rt_lib0clear(&___nl__5);
#line 298
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 298
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
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
goto label_2;
#line 298
label_2:
#line 298
c_rt_lib0clear(&___nl__4);
#line 299
c_rt_lib0move(&___nl__4, nl0is_sim(___nl__1));
#line 299
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 299
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 300
c_rt_lib0delete(dfile_priv0sprintstr(___ref___0, ___nl__1));
#line 301
goto label_4;
#line 301
label_5:
#line 301
c_rt_lib0move(&___nl__4, nl0is_array(___nl__1));
#line 301
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 301
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 302
c_rt_lib0move(&___nl__5,___get_global_const(174));
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
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 303
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 303
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__1));
#line 303
label_9:
#line 303
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 303
if(c_rt_lib0check_true_native(___nl__9)){ goto label_7;}
#line 303
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__1, ___nl__6));
#line 304
c_rt_lib0move(&___nl__11,___get_global_const(2));
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
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 305
c_rt_lib0move(&___nl__10, c_rt_lib0add(___nl__2, ___nl__10));
#line 305
c_rt_lib0delete(dfile_priv0sprint(___ref___0, ___nl__5, ___nl__10, ___nl__3));
#line 305
c_rt_lib0clear(&___nl__10);
#line 306
c_rt_lib0move(&___nl__10,___get_global_const(172));
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
goto label_9;
#line 307
label_7:
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
c_rt_lib0move(&___nl__6,___get_global_const(175));
#line 308
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 308
c_rt_lib0clear(&___nl__6);
#line 308
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 308
c_rt_lib0clear(&___nl__5);
#line 309
goto label_4;
#line 309
label_6:
#line 309
c_rt_lib0move(&___nl__4, nl0is_hash(___nl__1));
#line 309
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 309
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 310
c_rt_lib0delete(dfile_priv0sprint_hash(___ref___0, ___nl__1, ___nl__2, ___nl__3));
#line 311
goto label_4;
#line 311
label_10:
#line 311
c_rt_lib0move(&___nl__4, nl0is_variant(___nl__1));
#line 311
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 311
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 312
c_rt_lib0move(&___nl__5,___get_global_const(160));
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
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 315
c_rt_lib0move(&___nl__6,___get_global_const(188));
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
goto label_13;
#line 317
label_13:
#line 317
c_rt_lib0clear(&___nl__5);
#line 318
c_rt_lib0move(&___nl__5,___get_global_const(176));
#line 318
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 318
c_rt_lib0clear(&___nl__5);
#line 319
goto label_4;
#line 319
label_11:
#line 320
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 320
nl_die_arg(___nl__5);
#line 320
c_rt_lib0clear(&___nl__5);
#line 321
goto label_4;
#line 321
label_4:
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
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 325
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 325
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 326
c_rt_lib0move(&___nl__3,___get_global_const(80));
#line 326
c_rt_lib0move(&___nl__4,___get_global_const(181));
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
c_rt_lib0move(&___nl__4,___get_global_const(189));
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
c_rt_lib0move(&___nl__3,___get_global_const(182));
#line 328
c_rt_lib0move(&___nl__4,___get_global_const(183));
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
c_rt_lib0move(&___nl__3,___get_global_const(184));
#line 329
c_rt_lib0move(&___nl__4,___get_global_const(185));
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
c_rt_lib0move(&___nl__3,___get_global_const(150));
#line 330
c_rt_lib0move(&___nl__4,___get_global_const(186));
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
c_rt_lib0move(&___nl__2,___get_global_const(150));
#line 331
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 331
c_rt_lib0move(&___nl__3,___get_global_const(150));
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
dfile_priv0__const__init();
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
#line 336
c_rt_lib0move(&___nl__2, nl0is_sim(___nl__1));
#line 336
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 336
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 337
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___0, ___nl__1));
#line 338
goto label_1;
#line 338
label_2:
#line 338
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 338
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 338
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 339
c_rt_lib0move(&___nl__3,___get_global_const(174));
#line 339
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 339
c_rt_lib0clear(&___nl__3);
#line 340
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 340
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 340
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 340
label_6:
#line 340
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 340
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 340
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 341
c_rt_lib0delete(dfile_priv0print_net_format(___ref___0, ___nl__3));
#line 342
c_rt_lib0move(&___nl__8,___get_global_const(172));
#line 342
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__8));
#line 342
c_rt_lib0clear(&___nl__8);
#line 343
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 343
goto label_6;
#line 343
label_4:
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
#line 344
c_rt_lib0move(&___nl__3,___get_global_const(175));
#line 344
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 344
c_rt_lib0clear(&___nl__3);
#line 345
goto label_1;
#line 345
label_3:
#line 345
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 345
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 345
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 346
c_rt_lib0move(&___nl__3,___get_global_const(168));
#line 346
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 346
c_rt_lib0clear(&___nl__3);
#line 347
c_rt_lib0move(&___nl__3, hash0keys(___nl__1));
#line 347
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 347
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 347
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 347
label_10:
#line 347
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 347
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 347
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 348
c_rt_lib0move(&___nl__9, hash0get_value(___nl__1, ___nl__4));
#line 349
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 349
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__4, ___nl__11));
#line 349
c_rt_lib0move(&___nl__10, dfile_priv0is_simple_string(___nl__11));
#line 349
c_rt_lib0clear(&___nl__11);
#line 349
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 349
if(c_rt_lib0check_true_native(___nl__10)){ goto label_12;}
#line 350
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__4));
#line 351
goto label_11;
#line 351
label_12:
#line 352
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___0, ___nl__4));
#line 353
goto label_11;
#line 353
label_11:
#line 353
c_rt_lib0clear(&___nl__10);
#line 354
c_rt_lib0move(&___nl__10,___get_global_const(170));
#line 354
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__10));
#line 354
c_rt_lib0clear(&___nl__10);
#line 355
c_rt_lib0delete(dfile_priv0print_net_format(___ref___0, ___nl__9));
#line 356
c_rt_lib0move(&___nl__10,___get_global_const(172));
#line 356
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__10));
#line 356
c_rt_lib0clear(&___nl__10);
#line 356
c_rt_lib0clear(&___nl__9);
#line 357
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 357
goto label_10;
#line 357
label_8:
#line 357
c_rt_lib0clear(&___nl__3);
#line 357
c_rt_lib0clear(&___nl__4);
#line 357
c_rt_lib0clear(&___nl__5);
#line 357
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0clear(&___nl__7);
#line 357
c_rt_lib0clear(&___nl__8);
#line 358
c_rt_lib0move(&___nl__3,___get_global_const(169));
#line 358
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 358
c_rt_lib0clear(&___nl__3);
#line 359
goto label_1;
#line 359
label_7:
#line 359
c_rt_lib0move(&___nl__2, nl0is_variant(___nl__1));
#line 359
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 359
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 360
c_rt_lib0move(&___nl__3,___get_global_const(160));
#line 360
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 360
c_rt_lib0clear(&___nl__3);
#line 361
c_rt_lib0move(&___nl__3, ov0get_element(___nl__1));
#line 361
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___0, ___nl__3));
#line 361
c_rt_lib0clear(&___nl__3);
#line 362
c_rt_lib0move(&___nl__3, ov0has_value(___nl__1));
#line 362
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 362
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 363
c_rt_lib0move(&___nl__4,___get_global_const(172));
#line 363
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__4));
#line 363
c_rt_lib0clear(&___nl__4);
#line 364
c_rt_lib0move(&___nl__4, ov0get_value(___nl__1));
#line 364
c_rt_lib0delete(dfile_priv0print_net_format(___ref___0, ___nl__4));
#line 364
c_rt_lib0clear(&___nl__4);
#line 365
goto label_15;
#line 365
label_15:
#line 365
c_rt_lib0clear(&___nl__3);
#line 366
c_rt_lib0move(&___nl__3,___get_global_const(176));
#line 366
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 366
c_rt_lib0clear(&___nl__3);
#line 367
goto label_1;
#line 367
label_13:
#line 368
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(1, ___nl__1));
#line 368
nl_die_arg(___nl__3);
#line 368
c_rt_lib0clear(&___nl__3);
#line 369
goto label_1;
#line 369
label_1:
#line 369
c_rt_lib0clear(&___nl__2);
#line 369
c_rt_lib0clear(&___nl__1);
#line 369
return NULL;
}


static ImmT ___const__[3];
static int ___const_init__ = 1;
void dfile_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[2];


for(int i=0;i<2;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 2);
}}
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
