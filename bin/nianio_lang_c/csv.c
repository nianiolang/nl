
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "csv.h"
#include "string.h"
#include "array.h"
#line 1 "csv.nl"

static ImmT *__const__f = NULL;
void csv_priv0__const__init();
ImmT csv_priv0__const__sim(int __nr);
ImmT csv_priv0__const__sing(int __nr);

ImmT csv_priv0get_char(ImmT ___nl__0,ImmT * ___ref___1);
ImmT csv_priv0end(ImmT * ___ref___0,ImmT * ___ref___1,ImmT ___nl__2);


ImmT csv0save0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "csv0save");
return csv0save(_tab[0]);}
ImmT csv0save(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
csv_priv0__const__init();
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
#line 10
c_rt_lib0move(&___nl__1,___get_global_const(150));
#line 11
c_rt_lib0move(&___nl__2, string0tab());
#line 12
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__1));
#line 13
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 14
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 14
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 14
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__0));
#line 14
label_3:
#line 14
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 14
if(c_rt_lib0check_true_native(___nl__9)){ goto label_1;}
#line 14
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__0, ___nl__6));
#line 15
c_rt_lib0move(&___nl__10, array0len(___nl__5));
#line 16
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 16
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 16
label_6:
#line 16
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__11, ___nl__10));
#line 16
if(c_rt_lib0check_true_native(___nl__13)){ goto label_4;}
#line 17
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__5, ___nl__11));
#line 18
c_rt_lib0move(&___nl__15, string0length(___nl__14));
#line 19
c_rt_lib0move(&___nl__16, c_rt_lib0get_false());
#line 20
c_rt_lib0move(&___nl__17,___get_global_const(1));
#line 20
c_rt_lib0move(&___nl__18,___get_global_const(2));
#line 20
label_9:
#line 20
c_rt_lib0move(&___nl__19, c_rt_lib0ge(___nl__17, ___nl__15));
#line 20
if(c_rt_lib0check_true_native(___nl__19)){ goto label_7;}
#line 21
c_rt_lib0move(&___nl__21,___get_global_const(2));
#line 21
c_rt_lib0move(&___nl__20, string0substr(___nl__14, ___nl__17, ___nl__21));
#line 21
c_rt_lib0clear(&___nl__21);
#line 22
c_rt_lib0move(&___nl__21, string0ord(___nl__20));
#line 22
c_rt_lib0move(&___nl__22,___get_global_const(151));
#line 22
c_rt_lib0move(&___nl__21, c_rt_lib0lt(___nl__21, ___nl__22));
#line 22
c_rt_lib0clear(&___nl__22);
#line 22
if(c_rt_lib0check_true_native(___nl__21)){ goto label_12;}
#line 22
c_rt_lib0move(&___nl__21, c_rt_lib0eq(___nl__20, ___nl__1));
#line 22
label_12:
#line 22
c_rt_lib0move(&___nl__21, c_rt_lib0not(___nl__21));
#line 22
if(c_rt_lib0check_true_native(___nl__21)){ goto label_11;}
#line 22
c_rt_lib0move(&___nl__22, c_rt_lib0get_true());
#line 22
c_rt_lib0copy(&___nl__16, ___nl__22);
#line 22
c_rt_lib0clear(&___nl__22);
#line 22
goto label_11;
#line 22
label_11:
#line 22
c_rt_lib0clear(&___nl__21);
#line 22
c_rt_lib0clear(&___nl__20);
#line 23
c_rt_lib0move(&___nl__17, c_rt_lib0add_mod(___nl__17, ___nl__18));
#line 23
goto label_9;
#line 23
label_7:
#line 23
c_rt_lib0clear(&___nl__17);
#line 23
c_rt_lib0clear(&___nl__18);
#line 23
c_rt_lib0clear(&___nl__19);
#line 24
c_rt_lib0copy(&___nl__17, ___nl__16);
#line 24
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 24
if(c_rt_lib0check_true_native(___nl__17)){ goto label_14;}
#line 24
c_rt_lib0move(&___nl__18, string0replace(___nl__14, ___nl__1, ___nl__3));
#line 24
c_rt_lib0move(&___nl__18, c_rt_lib0concat_new(___nl__1, ___nl__18));
#line 24
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__1));
#line 24
c_rt_lib0copy(&___nl__14, ___nl__18);
#line 24
c_rt_lib0clear(&___nl__18);
#line 24
goto label_14;
#line 24
label_14:
#line 24
c_rt_lib0clear(&___nl__17);
#line 25
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__14));
#line 26
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 26
c_rt_lib0move(&___nl__17, c_rt_lib0sub(___nl__10, ___nl__17));
#line 26
c_rt_lib0move(&___nl__17, c_rt_lib0num_eq(___nl__11, ___nl__17));
#line 26
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 26
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 26
if(c_rt_lib0check_true_native(___nl__17)){ goto label_16;}
#line 26
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__2));
#line 26
goto label_16;
#line 26
label_16:
#line 26
c_rt_lib0clear(&___nl__17);
#line 26
c_rt_lib0clear(&___nl__14);
#line 26
c_rt_lib0clear(&___nl__15);
#line 26
c_rt_lib0clear(&___nl__16);
#line 27
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__12));
#line 27
goto label_6;
#line 27
label_4:
#line 27
c_rt_lib0clear(&___nl__11);
#line 27
c_rt_lib0clear(&___nl__12);
#line 27
c_rt_lib0clear(&___nl__13);
#line 28
c_rt_lib0move(&___nl__11, string0lf());
#line 28
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__11));
#line 28
c_rt_lib0clear(&___nl__11);
#line 28
c_rt_lib0clear(&___nl__10);
#line 29
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 29
goto label_3;
#line 29
label_1:
#line 29
c_rt_lib0clear(&___nl__5);
#line 29
c_rt_lib0clear(&___nl__6);
#line 29
c_rt_lib0clear(&___nl__7);
#line 29
c_rt_lib0clear(&___nl__8);
#line 29
c_rt_lib0clear(&___nl__9);
#line 30
c_rt_lib0clear(&___nl__0);
#line 30
c_rt_lib0clear(&___nl__1);
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
return ___nl__4;
#line 30
c_rt_lib0clear(&___nl__1);
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0clear(&___nl__0);
#line 30
return NULL;
}

ImmT csv_priv0get_char(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
csv_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 34
c_rt_lib0copy(&___nl__3, *___ref___1);
#line 34
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 34
c_rt_lib0move(___ref___1, c_rt_lib0add_mod(*___ref___1, ___nl__4));
#line 34
c_rt_lib0clear(&___nl__4);
#line 34
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 34
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__3, ___nl__4));
#line 34
c_rt_lib0clear(&___nl__4);
#line 34
c_rt_lib0clear(&___nl__3);
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
return ___nl__2;
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
return NULL;
}

ImmT csv_priv0end(ImmT * ___ref___0,ImmT * ___ref___1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__2);
csv_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 37
c_rt_lib0delete(array0push(___ref___1, ___nl__2));
#line 38
c_rt_lib0delete(array0push(___ref___0, *___ref___1));
#line 39
c_rt_lib0copy(&___nl__3, *___ref___0);
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
return ___nl__3;
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
return NULL;
}

ImmT csv0load0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "csv0load");
return csv0load(_tab[0]);}
ImmT csv0load(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
csv_priv0__const__init();
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
#line 42
c_rt_lib0move(&___nl__1,___get_global_const(150));
#line 43
c_rt_lib0move(&___nl__2, string0tab());
#line 44
c_rt_lib0move(&___nl__3, string0ord(___nl__2));
#line 45
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 46
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__6, string0length(___nl__0));
#line 48
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 48
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__6, ___nl__7));
#line 48
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 48
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
c_rt_lib0clear(&___nl__1);
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0clear(&___nl__7);
#line 48
return ___nl__4;
#line 48
goto label_2;
#line 48
label_2:
#line 48
c_rt_lib0clear(&___nl__7);
#line 49
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 49
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__6, ___nl__9));
#line 49
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 49
c_rt_lib0move(&___nl__8, string0substr(___nl__0, ___nl__9, ___nl__10));
#line 49
c_rt_lib0clear(&___nl__10);
#line 49
c_rt_lib0clear(&___nl__9);
#line 49
c_rt_lib0move(&___nl__7, string0ord(___nl__8));
#line 49
c_rt_lib0clear(&___nl__8);
#line 49
c_rt_lib0move(&___nl__8,___get_global_const(152));
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__8));
#line 49
c_rt_lib0clear(&___nl__8);
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 49
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 50
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 51
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 51
c_rt_lib0move(&___nl__10, c_rt_lib0sub(___nl__6, ___nl__10));
#line 51
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 51
c_rt_lib0move(&___nl__9, string0substr(___nl__0, ___nl__10, ___nl__11));
#line 51
c_rt_lib0clear(&___nl__11);
#line 51
c_rt_lib0clear(&___nl__10);
#line 51
c_rt_lib0move(&___nl__8, string0ord(___nl__9));
#line 51
c_rt_lib0clear(&___nl__9);
#line 51
c_rt_lib0move(&___nl__9,___get_global_const(153));
#line 51
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 51
c_rt_lib0clear(&___nl__9);
#line 51
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 51
if(c_rt_lib0check_true_native(___nl__8)){ goto label_6;}
#line 51
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 51
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__9));
#line 51
c_rt_lib0clear(&___nl__9);
#line 51
goto label_6;
#line 51
label_6:
#line 51
c_rt_lib0clear(&___nl__8);
#line 52
goto label_4;
#line 52
label_4:
#line 52
c_rt_lib0clear(&___nl__7);
#line 53
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 54
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 55
label_8:
#line 55
c_rt_lib0move(&___nl__9, c_rt_lib0lt(___nl__8, ___nl__6));
#line 55
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 55
if(c_rt_lib0check_true_native(___nl__9)){ goto label_7;}
#line 56
c_rt_lib0move(&___nl__10, csv_priv0get_char(___nl__0, &___nl__8));
#line 57
c_rt_lib0move(&___nl__11, c_rt_lib0eq(___nl__10, ___nl__1));
#line 57
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 57
if(c_rt_lib0check_true_native(___nl__11)){ goto label_10;}
#line 58
label_12:
#line 59
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__8, ___nl__6));
#line 59
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 59
if(c_rt_lib0check_true_native(___nl__12)){ goto label_14;}
#line 59
c_rt_lib0move(&___nl__13, csv_priv0end(&___nl__4, &___nl__5, ___nl__7));
#line 59
c_rt_lib0clear(&___nl__0);
#line 59
c_rt_lib0clear(&___nl__1);
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0clear(&___nl__4);
#line 59
c_rt_lib0clear(&___nl__5);
#line 59
c_rt_lib0clear(&___nl__6);
#line 59
c_rt_lib0clear(&___nl__7);
#line 59
c_rt_lib0clear(&___nl__8);
#line 59
c_rt_lib0clear(&___nl__9);
#line 59
c_rt_lib0clear(&___nl__10);
#line 59
c_rt_lib0clear(&___nl__11);
#line 59
c_rt_lib0clear(&___nl__12);
#line 59
return ___nl__13;
#line 59
c_rt_lib0clear(&___nl__13);
#line 59
goto label_14;
#line 59
label_14:
#line 59
c_rt_lib0clear(&___nl__12);
#line 60
c_rt_lib0move(&___nl__12, csv_priv0get_char(___nl__0, &___nl__8));
#line 60
c_rt_lib0copy(&___nl__10, ___nl__12);
#line 60
c_rt_lib0clear(&___nl__12);
#line 61
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__10, ___nl__1));
#line 61
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 61
if(c_rt_lib0check_true_native(___nl__12)){ goto label_16;}
#line 62
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__8, ___nl__6));
#line 62
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 62
if(c_rt_lib0check_true_native(___nl__13)){ goto label_18;}
#line 62
c_rt_lib0move(&___nl__14, csv_priv0end(&___nl__4, &___nl__5, ___nl__7));
#line 62
c_rt_lib0clear(&___nl__0);
#line 62
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
c_rt_lib0clear(&___nl__5);
#line 62
c_rt_lib0clear(&___nl__6);
#line 62
c_rt_lib0clear(&___nl__7);
#line 62
c_rt_lib0clear(&___nl__8);
#line 62
c_rt_lib0clear(&___nl__9);
#line 62
c_rt_lib0clear(&___nl__10);
#line 62
c_rt_lib0clear(&___nl__11);
#line 62
c_rt_lib0clear(&___nl__12);
#line 62
c_rt_lib0clear(&___nl__13);
#line 62
return ___nl__14;
#line 62
c_rt_lib0clear(&___nl__14);
#line 62
goto label_18;
#line 62
label_18:
#line 62
c_rt_lib0clear(&___nl__13);
#line 63
c_rt_lib0move(&___nl__13, csv_priv0get_char(___nl__0, &___nl__8));
#line 63
c_rt_lib0copy(&___nl__10, ___nl__13);
#line 63
c_rt_lib0clear(&___nl__13);
#line 64
c_rt_lib0move(&___nl__13, c_rt_lib0ne(___nl__10, ___nl__1));
#line 64
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 64
if(c_rt_lib0check_true_native(___nl__13)){ goto label_20;}
#line 64
c_rt_lib0clear(&___nl__12);
#line 64
c_rt_lib0clear(&___nl__13);
#line 64
goto label_11;
#line 64
goto label_20;
#line 64
label_20:
#line 64
c_rt_lib0clear(&___nl__13);
#line 65
goto label_16;
#line 65
label_16:
#line 65
c_rt_lib0clear(&___nl__12);
#line 66
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__10));
#line 58
goto label_12;
#line 58
label_11:
#line 68
goto label_9;
#line 68
label_10:
#line 69
c_rt_lib0move(&___nl__12, string0ord(___nl__10));
#line 70
label_22:
#line 70
c_rt_lib0move(&___nl__13, c_rt_lib0num_ne(___nl__12, ___nl__3));
#line 70
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__13));
#line 70
if(c_rt_lib0check_true_native(___nl__15)){ goto label_24;}
#line 70
c_rt_lib0move(&___nl__13,___get_global_const(152));
#line 70
c_rt_lib0move(&___nl__13, c_rt_lib0num_ne(___nl__12, ___nl__13));
#line 70
label_24:
#line 70
c_rt_lib0clear(&___nl__15);
#line 70
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__13));
#line 70
if(c_rt_lib0check_true_native(___nl__14)){ goto label_23;}
#line 70
c_rt_lib0move(&___nl__13,___get_global_const(153));
#line 70
c_rt_lib0move(&___nl__13, c_rt_lib0num_ne(___nl__12, ___nl__13));
#line 70
label_23:
#line 70
c_rt_lib0clear(&___nl__14);
#line 70
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 70
if(c_rt_lib0check_true_native(___nl__13)){ goto label_21;}
#line 72
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__10));
#line 73
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__8, ___nl__6));
#line 73
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 73
if(c_rt_lib0check_true_native(___nl__14)){ goto label_26;}
#line 73
c_rt_lib0move(&___nl__15, csv_priv0end(&___nl__4, &___nl__5, ___nl__7));
#line 73
c_rt_lib0clear(&___nl__0);
#line 73
c_rt_lib0clear(&___nl__1);
#line 73
c_rt_lib0clear(&___nl__2);
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0clear(&___nl__4);
#line 73
c_rt_lib0clear(&___nl__5);
#line 73
c_rt_lib0clear(&___nl__6);
#line 73
c_rt_lib0clear(&___nl__7);
#line 73
c_rt_lib0clear(&___nl__8);
#line 73
c_rt_lib0clear(&___nl__9);
#line 73
c_rt_lib0clear(&___nl__10);
#line 73
c_rt_lib0clear(&___nl__11);
#line 73
c_rt_lib0clear(&___nl__12);
#line 73
c_rt_lib0clear(&___nl__13);
#line 73
c_rt_lib0clear(&___nl__14);
#line 73
return ___nl__15;
#line 73
c_rt_lib0clear(&___nl__15);
#line 73
goto label_26;
#line 73
label_26:
#line 73
c_rt_lib0clear(&___nl__14);
#line 74
c_rt_lib0move(&___nl__14, csv_priv0get_char(___nl__0, &___nl__8));
#line 74
c_rt_lib0copy(&___nl__10, ___nl__14);
#line 74
c_rt_lib0clear(&___nl__14);
#line 75
c_rt_lib0move(&___nl__14, string0ord(___nl__10));
#line 75
c_rt_lib0copy(&___nl__12, ___nl__14);
#line 75
c_rt_lib0clear(&___nl__14);
#line 76
goto label_22;
#line 76
label_21:
#line 76
c_rt_lib0clear(&___nl__13);
#line 76
c_rt_lib0clear(&___nl__12);
#line 77
goto label_9;
#line 77
label_9:
#line 77
c_rt_lib0clear(&___nl__11);
#line 78
c_rt_lib0delete(array0push(&___nl__5, ___nl__7));
#line 79
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 79
c_rt_lib0copy(&___nl__7, ___nl__11);
#line 79
c_rt_lib0clear(&___nl__11);
#line 80
c_rt_lib0move(&___nl__11, string0ord(___nl__10));
#line 81
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__11, ___nl__3));
#line 81
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 81
if(c_rt_lib0check_true_native(___nl__12)){ goto label_28;}
#line 81
c_rt_lib0clear(&___nl__10);
#line 81
c_rt_lib0clear(&___nl__11);
#line 81
c_rt_lib0clear(&___nl__12);
#line 81
goto label_8;
#line 81
goto label_28;
#line 81
label_28:
#line 81
c_rt_lib0clear(&___nl__12);
#line 82
c_rt_lib0move(&___nl__12,___get_global_const(153));
#line 82
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__11, ___nl__12));
#line 82
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 82
if(c_rt_lib0check_true_native(___nl__12)){ goto label_30;}
#line 83
c_rt_lib0move(&___nl__13, csv_priv0get_char(___nl__0, &___nl__8));
#line 83
c_rt_lib0copy(&___nl__10, ___nl__13);
#line 83
c_rt_lib0clear(&___nl__13);
#line 84
c_rt_lib0move(&___nl__13, string0ord(___nl__10));
#line 84
c_rt_lib0copy(&___nl__11, ___nl__13);
#line 84
c_rt_lib0clear(&___nl__13);
#line 85
goto label_30;
#line 85
label_30:
#line 85
c_rt_lib0clear(&___nl__12);
#line 86
c_rt_lib0move(&___nl__12,___get_global_const(152));
#line 86
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__11, ___nl__12));
#line 86
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 86
if(c_rt_lib0check_true_native(___nl__12)){ goto label_32;}
#line 87
c_rt_lib0delete(array0push(&___nl__4, ___nl__5));
#line 88
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(0));
#line 88
c_rt_lib0copy(&___nl__5, ___nl__13);
#line 88
c_rt_lib0clear(&___nl__13);
#line 89
c_rt_lib0clear(&___nl__10);
#line 89
c_rt_lib0clear(&___nl__11);
#line 89
c_rt_lib0clear(&___nl__12);
#line 89
goto label_8;
#line 90
goto label_32;
#line 90
label_32:
#line 90
c_rt_lib0clear(&___nl__12);
#line 90
c_rt_lib0clear(&___nl__10);
#line 90
c_rt_lib0clear(&___nl__11);
#line 92
goto label_8;
#line 92
label_7:
#line 92
c_rt_lib0clear(&___nl__9);
#line 93
c_rt_lib0move(&___nl__9, csv_priv0end(&___nl__4, &___nl__5, ___nl__7));
#line 93
c_rt_lib0clear(&___nl__0);
#line 93
c_rt_lib0clear(&___nl__1);
#line 93
c_rt_lib0clear(&___nl__2);
#line 93
c_rt_lib0clear(&___nl__3);
#line 93
c_rt_lib0clear(&___nl__4);
#line 93
c_rt_lib0clear(&___nl__5);
#line 93
c_rt_lib0clear(&___nl__6);
#line 93
c_rt_lib0clear(&___nl__7);
#line 93
c_rt_lib0clear(&___nl__8);
#line 93
return ___nl__9;
#line 93
c_rt_lib0clear(&___nl__9);
#line 93
c_rt_lib0clear(&___nl__1);
#line 93
c_rt_lib0clear(&___nl__2);
#line 93
c_rt_lib0clear(&___nl__3);
#line 93
c_rt_lib0clear(&___nl__4);
#line 93
c_rt_lib0clear(&___nl__5);
#line 93
c_rt_lib0clear(&___nl__6);
#line 93
c_rt_lib0clear(&___nl__7);
#line 93
c_rt_lib0clear(&___nl__8);
#line 93
c_rt_lib0clear(&___nl__0);
#line 93
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void csv_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT csv_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT csv_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
