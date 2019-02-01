
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "profile.h"
#include "c_fe_lib.h"
#include "c_std_lib.h"
#include "nsystem.h"
#include "string.h"
#include "hash.h"
#include "func.h"
#include "array.h"
#include "ptd.h"
#line 1 "profile.nl"

static ImmT *__const__f = NULL;
ImmT profile_priv0__const__sim(int __nr);
ImmT profile_priv0__const__sing(int __nr);

ImmT profile_priv0diff_time(ImmT ___nl__0,ImmT ___nl__1);
ImmT profile_priv0print_row(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT profile_priv0get_profile_global();
ImmT profile_priv0start(ImmT ___nl__0);
ImmT profile_priv0stop(ImmT ___nl__0);


ImmT profile_priv0diff_time(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 16
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 16
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__3));
#line 16
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 17
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 17
c_rt_lib0clear(&___nl__4);
#line 18
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__4));
#line 18
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 18
if(c_rt_lib0check_true_native(___nl__4)){ goto label_27;}
#line 19
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 19
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__5));
#line 19
c_rt_lib0clear(&___nl__5);
#line 20
c_rt_lib0move(&___nl__5,___get_global_const(1015));
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 20
c_rt_lib0clear(&___nl__5);
#line 21
goto label_27;
#line 21
label_27:
#line 21
c_rt_lib0clear(&___nl__4);
#line 22
c_rt_lib0move(&___nl__4,___get_global_const(1016));
#line 22
c_rt_lib0move(&___nl__4, c_rt_lib0mul(___nl__2, ___nl__4));
#line 22
c_rt_lib0move(&___nl__5,___get_global_const(1016));
#line 22
c_rt_lib0move(&___nl__5, c_rt_lib0div(___nl__3, ___nl__5));
#line 22
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 22
c_rt_lib0clear(&___nl__5);
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
c_rt_lib0clear(&___nl__2);
#line 22
c_rt_lib0clear(&___nl__3);
#line 22
return ___nl__4;
#line 22
c_rt_lib0clear(&___nl__4);
#line 22
c_rt_lib0clear(&___nl__2);
#line 22
c_rt_lib0clear(&___nl__3);
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
return NULL;
}

ImmT profile_priv0print_row(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
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
#line 26
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 27
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(690)));
#line 27
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 27
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 27
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 27
label_5:
#line 27
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 27
if(c_rt_lib0check_true_native(___nl__9)){ goto label_70;}
#line 27
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 28
c_rt_lib0move(&___nl__10,___get_global_const(1017));
#line 28
c_rt_lib0move(&___nl__11, profile_priv0diff_time(___nl__1, ___nl__5));
#line 28
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 28
c_rt_lib0clear(&___nl__11);
#line 29
c_rt_lib0move(&___nl__12,___get_global_const(97));
#line 29
c_rt_lib0move(&___nl__11, string0index2(___nl__10, ___nl__12));
#line 29
c_rt_lib0clear(&___nl__12);
#line 30
c_rt_lib0move(&___nl__12, string0length(___nl__10));
#line 31
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 31
c_rt_lib0move(&___nl__13, c_rt_lib0unary_minus(___nl__13));
#line 31
c_rt_lib0move(&___nl__13, c_rt_lib0num_eq(___nl__11, ___nl__13));
#line 31
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 31
if(c_rt_lib0check_true_native(___nl__13)){ goto label_26;}
#line 32
c_rt_lib0move(&___nl__14,___get_global_const(1018));
#line 32
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__14));
#line 32
c_rt_lib0clear(&___nl__14);
#line 33
goto label_40;
#line 33
label_26:
#line 34
c_rt_lib0move(&___nl__14,___get_global_const(1019));
#line 34
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__14));
#line 34
c_rt_lib0clear(&___nl__14);
#line 35
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 35
c_rt_lib0move(&___nl__16,___get_global_const(82));
#line 35
c_rt_lib0move(&___nl__16, c_rt_lib0add(___nl__11, ___nl__16));
#line 35
c_rt_lib0move(&___nl__14, string0substr(___nl__10, ___nl__15, ___nl__16));
#line 35
c_rt_lib0clear(&___nl__16);
#line 35
c_rt_lib0clear(&___nl__15);
#line 35
c_rt_lib0copy(&___nl__10, ___nl__14);
#line 35
c_rt_lib0clear(&___nl__14);
#line 36
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 37
goto label_40;
#line 37
label_40:
#line 37
c_rt_lib0clear(&___nl__13);
#line 38
c_rt_lib0move(&___nl__14,___get_global_const(244));
#line 38
c_rt_lib0move(&___nl__14, c_rt_lib0sub(___nl__12, ___nl__14));
#line 38
c_rt_lib0move(&___nl__15,___get_global_const(82));
#line 38
c_rt_lib0move(&___nl__13, string0substr(___nl__10, ___nl__14, ___nl__15));
#line 38
c_rt_lib0clear(&___nl__15);
#line 38
c_rt_lib0clear(&___nl__14);
#line 38
c_rt_lib0move(&___nl__14,___get_global_const(571));
#line 38
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 38
c_rt_lib0clear(&___nl__14);
#line 38
c_rt_lib0move(&___nl__15,___get_global_const(80));
#line 38
c_rt_lib0move(&___nl__15, c_rt_lib0sub(___nl__12, ___nl__15));
#line 38
c_rt_lib0move(&___nl__16,___get_global_const(244));
#line 38
c_rt_lib0move(&___nl__14, string0substr(___nl__10, ___nl__15, ___nl__16));
#line 38
c_rt_lib0clear(&___nl__16);
#line 38
c_rt_lib0clear(&___nl__15);
#line 38
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 38
c_rt_lib0clear(&___nl__14);
#line 38
c_rt_lib0move(&___nl__14, string0tab());
#line 38
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 38
c_rt_lib0clear(&___nl__14);
#line 38
c_rt_lib0copy(&___nl__10, ___nl__13);
#line 38
c_rt_lib0clear(&___nl__13);
#line 39
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__10));
#line 39
c_rt_lib0clear(&___nl__10);
#line 39
c_rt_lib0clear(&___nl__11);
#line 39
c_rt_lib0clear(&___nl__12);
#line 40
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 40
goto label_5;
#line 40
label_70:
#line 40
c_rt_lib0clear(&___nl__4);
#line 40
c_rt_lib0clear(&___nl__5);
#line 40
c_rt_lib0clear(&___nl__6);
#line 40
c_rt_lib0clear(&___nl__7);
#line 40
c_rt_lib0clear(&___nl__8);
#line 40
c_rt_lib0clear(&___nl__9);
#line 41
c_rt_lib0move(&___nl__4, string0tab());
#line 41
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 41
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 43
c_rt_lib0move(&___nl__4, string0lf());
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 43
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0move(&___nl__4,___get_global_const(167));
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 44
c_rt_lib0move(&___nl__5,___get_global_const(167));
#line 44
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 44
c_rt_lib0clear(&___nl__5);
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
return NULL;
}

ImmT profile_priv0get_profile_global() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 48
c_rt_lib0move(&___nl__0, c_std_lib0get_profile_global());
#line 49
c_rt_lib0move(&___nl__1, hash0size(___nl__0));
#line 49
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 49
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 49
if(c_rt_lib0check_true_native(___nl__1)){ goto label_15;}
#line 49
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 49
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 49
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__3, ___get_global_const(690), ___nl__4));
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__4);
#line 49
c_rt_lib0copy(&___nl__0, ___nl__2);
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
goto label_15;
#line 49
label_15:
#line 49
c_rt_lib0clear(&___nl__1);
#line 50
return ___nl__0;
#line 50
c_rt_lib0clear(&___nl__0);
#line 50
return NULL;
}

ImmT profile0sub0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "profile0sub");
return profile0sub(_tab[0], _tab[1], _tab[2]);}
ImmT profile0sub(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
#line 54
c_rt_lib0move(&___nl__3, profile0sub_ref(___nl__0, ___nl__1, &___nl__2));
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
return ___nl__3;
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
return NULL;
}

ImmT profile0sub_ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "profile0sub_ref");
return profile0sub_ref(_tab[0], _tab[1], &_tab[2]);}
ImmT profile0sub_ref(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 58
c_rt_lib0move(&___nl__3, profile_priv0get_profile_global());
#line 59
c_rt_lib0move(&___nl__4, nsystem0time_microsec());
#line 60
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(690)));
#line 61
c_rt_lib0move(&___nl__6,___get_global_const(690));
#line 61
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(___nl__3, ___nl__6));
#line 61
c_rt_lib0delete(array0push(&___nl__6, ___nl__4));
#line 61
c_rt_lib0move(&___nl__7,___get_global_const(690));
#line 61
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__7, ___nl__6));
#line 61
c_rt_lib0clear(&___nl__7);
#line 61
c_rt_lib0clear(&___nl__6);
#line 62
c_rt_lib0delete(profile_priv0print_row(&___nl__3, ___nl__4, ___nl__0));
#line 63
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__3));
#line 64
c_rt_lib0move(&___nl__6, func0exec_ref(___nl__1, ___ref___2));
#line 65
c_rt_lib0move(&___nl__7, profile_priv0get_profile_global());
#line 65
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 65
c_rt_lib0clear(&___nl__7);
#line 66
c_rt_lib0move(&___nl__7, nsystem0time_microsec());
#line 66
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 66
c_rt_lib0clear(&___nl__7);
#line 67
c_rt_lib0move(&___nl__7,___get_global_const(1020));
#line 67
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 67
c_rt_lib0delete(profile_priv0print_row(&___nl__3, ___nl__4, ___nl__7));
#line 67
c_rt_lib0clear(&___nl__7);
#line 68
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 68
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(690), ___nl__7);
#line 68
c_rt_lib0clear(&___nl__7);
#line 69
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__3));
#line 70
c_rt_lib0clear(&___nl__0);
#line 70
c_rt_lib0clear(&___nl__1);
#line 70
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0clear(&___nl__4);
#line 70
c_rt_lib0clear(&___nl__5);
#line 70
return ___nl__6;
#line 70
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0clear(&___nl__4);
#line 70
c_rt_lib0clear(&___nl__5);
#line 70
c_rt_lib0clear(&___nl__6);
#line 70
c_rt_lib0clear(&___nl__0);
#line 70
c_rt_lib0clear(&___nl__1);
#line 70
return NULL;
}

ImmT profile0save0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0save");
return profile0save(_tab[0]);}
ImmT profile0save(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 74
c_rt_lib0move(&___nl__1, profile_priv0get_profile_global());
#line 75
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(690)));
#line 75
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 75
c_rt_lib0move(&___nl__2, c_rt_lib0num_ne(___nl__2, ___nl__3));
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 75
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 75
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 75
nl_die_arg(___nl__3);
#line 75
goto label_12;
#line 75
label_12:
#line 75
c_rt_lib0clear(&___nl__2);
#line 75
c_rt_lib0clear(&___nl__3);
#line 76
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(167)));
#line 76
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__0, ___nl__2));
#line 76
c_rt_lib0clear(&___nl__2);
#line 77
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 77
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 77
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(167), ___nl__3);
#line 77
c_rt_lib0clear(&___nl__2);
#line 77
c_rt_lib0clear(&___nl__3);
#line 78
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__1));
#line 78
c_rt_lib0clear(&___nl__1);
#line 78
c_rt_lib0clear(&___nl__0);
#line 78
return NULL;
}

ImmT profile_priv0start(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 82
c_rt_lib0move(&___nl__1, profile_priv0get_profile_global());
#line 83
c_rt_lib0move(&___nl__2, hash0size(___nl__1));
#line 83
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 83
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__3));
#line 83
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 83
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
return NULL;
#line 83
goto label_12;
#line 83
label_12:
#line 83
c_rt_lib0clear(&___nl__2);
#line 84
c_rt_lib0move(&___nl__2, nsystem0time_microsec());
#line 85
c_rt_lib0move(&___nl__3,___get_global_const(690));
#line 85
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(___nl__1, ___nl__3));
#line 85
c_rt_lib0delete(array0push(&___nl__3, ___nl__2));
#line 85
c_rt_lib0move(&___nl__4,___get_global_const(690));
#line 85
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__4, ___nl__3));
#line 85
c_rt_lib0clear(&___nl__4);
#line 85
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0delete(profile_priv0print_row(&___nl__1, ___nl__2, ___nl__0));
#line 87
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__1));
#line 87
c_rt_lib0clear(&___nl__1);
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
c_rt_lib0clear(&___nl__0);
#line 87
return NULL;
}

ImmT profile_priv0stop(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 91
c_rt_lib0move(&___nl__1, profile_priv0get_profile_global());
#line 92
c_rt_lib0move(&___nl__2, hash0size(___nl__1));
#line 92
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 92
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__3));
#line 92
c_rt_lib0clear(&___nl__3);
#line 92
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 92
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 92
c_rt_lib0clear(&___nl__0);
#line 92
c_rt_lib0clear(&___nl__1);
#line 92
c_rt_lib0clear(&___nl__2);
#line 92
return NULL;
#line 92
goto label_12;
#line 92
label_12:
#line 92
c_rt_lib0clear(&___nl__2);
#line 93
c_rt_lib0move(&___nl__2, nsystem0time_microsec());
#line 94
c_rt_lib0move(&___nl__3,___get_global_const(1020));
#line 94
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 94
c_rt_lib0delete(profile_priv0print_row(&___nl__1, ___nl__2, ___nl__3));
#line 94
c_rt_lib0clear(&___nl__3);
#line 95
c_rt_lib0move(&___nl__3,___get_global_const(690));
#line 95
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(___nl__1, ___nl__3));
#line 95
c_rt_lib0delete(array0pop(&___nl__3));
#line 95
c_rt_lib0move(&___nl__4,___get_global_const(690));
#line 95
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__4, ___nl__3));
#line 95
c_rt_lib0clear(&___nl__4);
#line 95
c_rt_lib0clear(&___nl__3);
#line 96
c_rt_lib0delete(c_std_lib0set_profile_global(___nl__1));
#line 96
c_rt_lib0clear(&___nl__1);
#line 96
c_rt_lib0clear(&___nl__2);
#line 96
c_rt_lib0clear(&___nl__0);
#line 96
return NULL;
}

ImmT profile0begin0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0begin");
return profile0begin(_tab[0]);}
ImmT profile0begin(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
#line 100
c_rt_lib0delete(profile_priv0start(___nl__0));
#line 100
c_rt_lib0clear(&___nl__0);
#line 100
return NULL;
}

ImmT profile0end0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile0end");
return profile0end(_tab[0]);}
ImmT profile0end(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
#line 104
c_rt_lib0delete(profile_priv0stop(___nl__0));
#line 104
c_rt_lib0clear(&___nl__0);
#line 104
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void profile0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}
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
