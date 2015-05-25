
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "profile.h"
#include "c_fe_lib.h"
#include "c_std_lib.h"
#include "string.h"
#include "hash.h"
#include "func.h"
#include "array.h"
#include "ptd.h"
#line 1 "profile.nl"

static ImmT *__const__f = NULL;
void profile_priv0__const__init();
ImmT profile_priv0__const__sim(int __nr);
ImmT profile_priv0__const__sing(int __nr);

ImmT profile_priv0diff_time(ImmT ___nl__0,ImmT ___nl__1);
ImmT profile_priv0print_row(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT profile_priv0get_profile_global();


ImmT profile_priv0diff_time(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
profile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 15
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 15
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 15
c_rt_lib0clear(&___nl__3);
#line 15
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 15
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 15
c_rt_lib0clear(&___nl__4);
#line 15
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__3));
#line 15
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 16
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 16
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 16
c_rt_lib0clear(&___nl__5);
#line 16
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 16
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 17
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__4));
#line 17
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 17
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 18
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 18
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__5));
#line 18
c_rt_lib0clear(&___nl__5);
#line 19
c_rt_lib0move(&___nl__5,___get_global_const(935));
#line 19
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 19
c_rt_lib0clear(&___nl__5);
#line 20
goto label_2;
#line 20
label_2:
#line 20
c_rt_lib0clear(&___nl__4);
#line 21
c_rt_lib0move(&___nl__4,___get_global_const(936));
#line 21
c_rt_lib0move(&___nl__4, c_rt_lib0mul(___nl__2, ___nl__4));
#line 21
c_rt_lib0move(&___nl__5,___get_global_const(936));
#line 21
c_rt_lib0move(&___nl__5, c_rt_lib0div(___nl__3, ___nl__5));
#line 21
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 21
c_rt_lib0clear(&___nl__5);
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
return ___nl__4;
#line 21
c_rt_lib0clear(&___nl__4);
#line 21
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
return NULL;
}

ImmT profile_priv0print_row(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
profile_priv0__const__init();
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
#line 25
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 26
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(632)));
#line 26
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 26
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 26
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 26
label_3:
#line 26
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 26
if(c_rt_lib0check_true_native(___nl__9)){ goto label_1;}
#line 26
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 27
c_rt_lib0move(&___nl__10,___get_global_const(937));
#line 27
c_rt_lib0move(&___nl__11, profile_priv0diff_time(___nl__1, ___nl__5));
#line 27
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 27
c_rt_lib0clear(&___nl__11);
#line 28
c_rt_lib0move(&___nl__12,___get_global_const(81));
#line 28
c_rt_lib0move(&___nl__11, string0index2(___nl__10, ___nl__12));
#line 28
c_rt_lib0clear(&___nl__12);
#line 29
c_rt_lib0move(&___nl__12, string0length(___nl__10));
#line 30
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 30
c_rt_lib0move(&___nl__13, c_rt_lib0unary_minus(___nl__13));
#line 30
c_rt_lib0move(&___nl__13, c_rt_lib0num_eq(___nl__11, ___nl__13));
#line 30
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 30
if(c_rt_lib0check_true_native(___nl__13)){ goto label_5;}
#line 31
c_rt_lib0move(&___nl__14,___get_global_const(938));
#line 31
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__14));
#line 31
c_rt_lib0clear(&___nl__14);
#line 32
goto label_4;
#line 32
label_5:
#line 33
c_rt_lib0move(&___nl__14,___get_global_const(939));
#line 33
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__14));
#line 33
c_rt_lib0clear(&___nl__14);
#line 34
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 34
c_rt_lib0move(&___nl__16,___get_global_const(940));
#line 34
c_rt_lib0move(&___nl__16, c_rt_lib0add(___nl__11, ___nl__16));
#line 34
c_rt_lib0move(&___nl__14, string0substr(___nl__10, ___nl__15, ___nl__16));
#line 34
c_rt_lib0clear(&___nl__16);
#line 34
c_rt_lib0clear(&___nl__15);
#line 34
c_rt_lib0copy(&___nl__10, ___nl__14);
#line 34
c_rt_lib0clear(&___nl__14);
#line 35
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 36
goto label_4;
#line 36
label_4:
#line 36
c_rt_lib0clear(&___nl__13);
#line 37
c_rt_lib0move(&___nl__14,___get_global_const(159));
#line 37
c_rt_lib0move(&___nl__14, c_rt_lib0sub(___nl__12, ___nl__14));
#line 37
c_rt_lib0move(&___nl__15,___get_global_const(940));
#line 37
c_rt_lib0move(&___nl__13, string0substr(___nl__10, ___nl__14, ___nl__15));
#line 37
c_rt_lib0clear(&___nl__15);
#line 37
c_rt_lib0clear(&___nl__14);
#line 37
c_rt_lib0move(&___nl__14,___get_global_const(603));
#line 37
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 37
c_rt_lib0clear(&___nl__14);
#line 37
c_rt_lib0move(&___nl__15,___get_global_const(941));
#line 37
c_rt_lib0move(&___nl__15, c_rt_lib0sub(___nl__12, ___nl__15));
#line 37
c_rt_lib0move(&___nl__16,___get_global_const(159));
#line 37
c_rt_lib0move(&___nl__14, string0substr(___nl__10, ___nl__15, ___nl__16));
#line 37
c_rt_lib0clear(&___nl__16);
#line 37
c_rt_lib0clear(&___nl__15);
#line 37
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 37
c_rt_lib0clear(&___nl__14);
#line 37
c_rt_lib0move(&___nl__14, string0tab());
#line 37
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 37
c_rt_lib0clear(&___nl__14);
#line 37
c_rt_lib0copy(&___nl__10, ___nl__13);
#line 37
c_rt_lib0clear(&___nl__13);
#line 38
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__10));
#line 38
c_rt_lib0clear(&___nl__10);
#line 38
c_rt_lib0clear(&___nl__11);
#line 38
c_rt_lib0clear(&___nl__12);
#line 39
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 39
goto label_3;
#line 39
label_1:
#line 39
c_rt_lib0clear(&___nl__4);
#line 39
c_rt_lib0clear(&___nl__5);
#line 39
c_rt_lib0clear(&___nl__6);
#line 39
c_rt_lib0clear(&___nl__7);
#line 39
c_rt_lib0clear(&___nl__8);
#line 39
c_rt_lib0clear(&___nl__9);
#line 40
c_rt_lib0move(&___nl__4, string0tab());
#line 40
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 40
c_rt_lib0clear(&___nl__4);
#line 41
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 42
c_rt_lib0move(&___nl__4, string0lf());
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 42
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0move(&___nl__4,___get_global_const(140));
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 43
c_rt_lib0move(&___nl__5,___get_global_const(140));
#line 43
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 43
c_rt_lib0clear(&___nl__5);
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
return NULL;
}

ImmT profile_priv0get_profile_global() {
profile_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 46
c_rt_lib0move(&___nl__0, c_std_lib0get_profile_global());
#line 47
c_rt_lib0move(&___nl__1, hash0size(___nl__0));
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 47
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 47
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 47
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 47
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(140), ___nl__3, ___get_global_const(632), ___nl__4));
#line 47
c_rt_lib0clear(&___nl__3);
#line 47
c_rt_lib0clear(&___nl__4);
#line 47
c_rt_lib0copy(&___nl__0, ___nl__2);
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
goto label_2;
#line 47
label_2:
#line 47
c_rt_lib0clear(&___nl__1);
#line 48
return ___nl__0;
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
return NULL;
}

ImmT profile0sub0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "profile0sub");
return profile0sub(_tab[0], _tab[1], _tab[2]);}
ImmT profile0sub(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
profile_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 52
c_rt_lib0move(&___nl__3, profile0sub_ref(___nl__0, ___nl__1, &___nl__2));
#line 52
c_rt_lib0clear(&___nl__0);
#line 52
c_rt_lib0clear(&___nl__1);
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
return ___nl__3;
#line 52
c_rt_lib0clear(&___nl__3);
#line 52
c_rt_lib0clear(&___nl__0);
#line 52
c_rt_lib0clear(&___nl__1);
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
return NULL;
}

ImmT profile0sub_ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "profile0sub_ref");
return profile0sub_ref(_tab[0], _tab[1], &_tab[2]);}
ImmT profile0sub_ref(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
profile_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 55
c_rt_lib0move(&___nl__3, profile_priv0get_profile_global());
#line 56
c_rt_lib0move(&___nl__4, c_fe_lib0get_time());
#line 57
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(632)));
#line 58
c_rt_lib0move(&___nl__6,___get_global_const(632));
#line 58
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(___nl__3, ___nl__6));
#line 58
c_rt_lib0delete(array0push(&___nl__6, ___nl__4));
#line 58
c_rt_lib0move(&___nl__7,___get_global_const(632));
#line 58
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__7, ___nl__6));
#line 58
c_rt_lib0clear(&___nl__7);
#line 58
c_rt_lib0clear(&___nl__6);
#line 59
c_rt_lib0delete(profile_priv0print_row(&___nl__3, ___nl__4, ___nl__0));
#line 60
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__3));
#line 61
c_rt_lib0move(&___nl__6, func0exec_ref(___nl__1, ___ref___2));
#line 62
c_rt_lib0move(&___nl__7, profile_priv0get_profile_global());
#line 62
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 62
c_rt_lib0clear(&___nl__7);
#line 63
c_rt_lib0move(&___nl__7, c_fe_lib0get_time());
#line 63
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 63
c_rt_lib0clear(&___nl__7);
#line 64
c_rt_lib0move(&___nl__7,___get_global_const(942));
#line 64
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 64
c_rt_lib0delete(profile_priv0print_row(&___nl__3, ___nl__4, ___nl__7));
#line 64
c_rt_lib0clear(&___nl__7);
#line 65
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 65
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(632), ___nl__7);
#line 65
c_rt_lib0clear(&___nl__7);
#line 66
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__3));
#line 67
c_rt_lib0clear(&___nl__0);
#line 67
c_rt_lib0clear(&___nl__1);
#line 67
c_rt_lib0clear(&___nl__3);
#line 67
c_rt_lib0clear(&___nl__4);
#line 67
c_rt_lib0clear(&___nl__5);
#line 67
return ___nl__6;
#line 67
c_rt_lib0clear(&___nl__3);
#line 67
c_rt_lib0clear(&___nl__4);
#line 67
c_rt_lib0clear(&___nl__5);
#line 67
c_rt_lib0clear(&___nl__6);
#line 67
c_rt_lib0clear(&___nl__0);
#line 67
c_rt_lib0clear(&___nl__1);
#line 67
return NULL;
}

ImmT profile0save0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0save");
return profile0save(_tab[0]);}
ImmT profile0save(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
profile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 71
c_rt_lib0move(&___nl__1, profile_priv0get_profile_global());
#line 72
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(632)));
#line 72
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 72
c_rt_lib0move(&___nl__2, c_rt_lib0num_ne(___nl__2, ___nl__3));
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 72
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 72
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 72
nl_die_arg(___nl__3);
#line 72
goto label_2;
#line 72
label_2:
#line 72
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(140)));
#line 73
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__0, ___nl__2));
#line 73
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 74
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 74
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(140), ___nl__3);
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__1));
#line 75
c_rt_lib0clear(&___nl__1);
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void profile_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT profile_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT profile_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
