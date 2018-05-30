
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "generator_java.h"
#include "array.h"
#include "boolean_t.h"
#include "string_utils.h"
#include "nl.h"
#include "nlasm.h"
#include "ov.h"
#include "ptd.h"
#include "string.h"
#line 1 "generator_java.nl"

static ImmT *__const__f = NULL;
ImmT generator_java_priv0__const__sim(int __nr);
ImmT generator_java_priv0__const__sing(int __nr);

ImmT generator_java_priv0print_package_name();
ImmT generator_java_priv0print_imports(ImmT ___nl__0);
ImmT generator_java_priv0get_class_name(ImmT ___nl__0);
ImmT generator_java_priv0print_class_begin(ImmT ___nl__0);
ImmT generator_java_priv0print_class_end();
ImmT generator_java_priv0get_function_name(ImmT ___nl__0);
ImmT generator_java_priv0get_function_declaration(ImmT ___nl__0);
ImmT generator_java_priv0escape_string(ImmT ___nl__0);
ImmT generator_java_priv0is_singleton_use_function(ImmT ___nl__0);
ImmT generator_java_priv0print_function_or_singleton(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_java_priv0print_function(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_java_priv0print_command(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_java_priv0print_arr(ImmT ___nl__0);
ImmT generator_java_priv0print_bin_op(ImmT ___nl__0);
ImmT generator_java_priv0print_imm_double_operation(ImmT ___nl__0);
ImmT generator_java_priv0print_register_as_number(ImmT ___nl__0);
ImmT generator_java_priv0print_int_value();
ImmT generator_java_priv0print_call(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);
ImmT generator_java_priv0print_const_arr(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_java_priv0print_const_hash(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_java_priv0print_const_ov(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_java_priv0print_const_value(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_java_priv0print_goto(ImmT ___nl__0);
ImmT generator_java_priv0print_hash(ImmT ___nl__0);
ImmT generator_java_priv0print_hash_name();
ImmT generator_java_priv0print_get_hash_value(ImmT ___nl__0);
ImmT generator_java_priv0print_set_hash_value(ImmT ___nl__0);
ImmT generator_java_priv0print_ov_mk(ImmT ___nl__0);
ImmT generator_java_priv0print_register(ImmT ___nl__0);
ImmT generator_java_priv0print_register_getter(ImmT ___nl__0);
ImmT generator_java_priv0print_getter();
ImmT generator_java_priv0print_register_setter(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_java_priv0print_return(ImmT ___nl__0);
ImmT generator_java_priv0print_una_op(ImmT ___nl__0);


ImmT generator_java0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "generator_java0generate");
return generator_java0generate(_tab[0]);}
ImmT generator_java0generate(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 16
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 17
c_rt_lib0move(&___nl__2, generator_java_priv0print_package_name());
#line 17
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 17
c_rt_lib0clear(&___nl__2);
#line 18
c_rt_lib0move(&___nl__2, generator_java_priv0print_imports(___nl__0));
#line 18
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 18
c_rt_lib0clear(&___nl__2);
#line 19
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(186)));
#line 19
c_rt_lib0move(&___nl__2, generator_java_priv0print_class_begin(___nl__3));
#line 19
c_rt_lib0clear(&___nl__3);
#line 19
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 19
c_rt_lib0clear(&___nl__2);
#line 20
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(92)));
#line 20
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 20
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 20
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 20
label_16:
#line 20
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 20
if(c_rt_lib0check_true_native(___nl__7)){ goto label_27;}
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 20
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(186)));
#line 20
c_rt_lib0move(&___nl__8, generator_java_priv0print_function_or_singleton(___nl__3, ___nl__9));
#line 20
c_rt_lib0clear(&___nl__9);
#line 20
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__8));
#line 20
c_rt_lib0clear(&___nl__8);
#line 20
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 20
goto label_16;
#line 20
label_27:
#line 20
c_rt_lib0clear(&___nl__2);
#line 20
c_rt_lib0clear(&___nl__3);
#line 20
c_rt_lib0clear(&___nl__4);
#line 20
c_rt_lib0clear(&___nl__5);
#line 20
c_rt_lib0clear(&___nl__6);
#line 20
c_rt_lib0clear(&___nl__7);
#line 21
c_rt_lib0move(&___nl__2, generator_java_priv0print_class_end());
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 21
c_rt_lib0clear(&___nl__2);
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
return ___nl__1;
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
return NULL;
}

ImmT generator_java_priv0print_package_name(){
return generator_java_priv0__const__sing(0);}
ImmT generator_java_priv0print_package_name0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 26
c_rt_lib0move(&___nl__0,___get_global_const(474));
#line 26
c_rt_lib0move(&___nl__1, string0lf());
#line 26
c_rt_lib0move(&___nl__0, c_rt_lib0concat_add(___nl__0, ___nl__1));
#line 26
c_rt_lib0clear(&___nl__1);
#line 26
c_rt_lib0move(&___nl__1, string0lf());
#line 26
c_rt_lib0move(&___nl__0, c_rt_lib0concat_add(___nl__0, ___nl__1));
#line 26
c_rt_lib0clear(&___nl__1);
#line 26
return ___nl__0;
#line 26
c_rt_lib0clear(&___nl__0);
#line 26
return NULL;
}

ImmT generator_java_priv0print_imports(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 30
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 31
c_rt_lib0move(&___nl__2,___get_global_const(475));
#line 31
c_rt_lib0move(&___nl__3, string0lf());
#line 31
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 31
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0move(&___nl__2,___get_global_const(476));
#line 32
c_rt_lib0move(&___nl__3, string0lf());
#line 32
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 32
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(384)));
#line 33
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 33
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 33
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 33
label_17:
#line 33
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 33
if(c_rt_lib0check_true_native(___nl__7)){ goto label_35;}
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 34
c_rt_lib0move(&___nl__8,___get_global_const(477));
#line 34
c_rt_lib0move(&___nl__9, generator_java_priv0get_class_name(___nl__3));
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 34
c_rt_lib0clear(&___nl__9);
#line 34
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 34
c_rt_lib0clear(&___nl__9);
#line 34
c_rt_lib0move(&___nl__9, string0lf());
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 34
c_rt_lib0clear(&___nl__9);
#line 34
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__8));
#line 34
c_rt_lib0clear(&___nl__8);
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 35
goto label_17;
#line 35
label_35:
#line 35
c_rt_lib0clear(&___nl__2);
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0clear(&___nl__4);
#line 35
c_rt_lib0clear(&___nl__5);
#line 35
c_rt_lib0clear(&___nl__6);
#line 35
c_rt_lib0clear(&___nl__7);
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return ___nl__1;
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return NULL;
}

ImmT generator_java_priv0get_class_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 40
c_rt_lib0move(&___nl__1,___get_global_const(478));
#line 40
c_rt_lib0move(&___nl__1, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
return ___nl__1;
#line 40
c_rt_lib0clear(&___nl__1);
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
return NULL;
}

ImmT generator_java_priv0print_class_begin(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 44
c_rt_lib0move(&___nl__1,___get_global_const(479));
#line 44
c_rt_lib0move(&___nl__2, generator_java_priv0get_class_name(___nl__0));
#line 44
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0move(&___nl__2,___get_global_const(423));
#line 44
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0move(&___nl__2, string0lf());
#line 44
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return ___nl__1;
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return NULL;
}

ImmT generator_java_priv0print_class_end(){
return generator_java_priv0__const__sing(1);}
ImmT generator_java_priv0print_class_end0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 48
c_rt_lib0move(&___nl__0, string0lf());
#line 48
c_rt_lib0move(&___nl__1,___get_global_const(253));
#line 48
c_rt_lib0move(&___nl__0, c_rt_lib0concat_add(___nl__0, ___nl__1));
#line 48
c_rt_lib0clear(&___nl__1);
#line 48
return ___nl__0;
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
return NULL;
}

ImmT generator_java_priv0get_function_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 52
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 53
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(183)));
#line 53
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(379)));
#line 54
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 54
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 54
nl_die_arg(___nl__3);
#line 53
label_9:
#line 54
goto label_16;
#line 54
label_11:
#line 55
c_rt_lib0move(&___nl__4,___get_global_const(223));
#line 55
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 55
c_rt_lib0clear(&___nl__4);
#line 56
goto label_16;
#line 56
label_16:
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0clear(&___nl__3);
#line 57
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 57
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 57
c_rt_lib0move(&___nl__3,___get_global_const(480));
#line 57
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 57
c_rt_lib0clear(&___nl__3);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
c_rt_lib0clear(&___nl__1);
#line 57
return ___nl__2;
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0clear(&___nl__1);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
return NULL;
}

ImmT generator_java_priv0get_function_declaration(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 61
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 62
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(183)));
#line 62
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(379)));
#line 64
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 64
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 64
nl_die_arg(___nl__3);
#line 62
label_9:
#line 63
c_rt_lib0move(&___nl__4,___get_global_const(481));
#line 63
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 63
c_rt_lib0clear(&___nl__4);
#line 64
goto label_19;
#line 64
label_14:
#line 65
c_rt_lib0move(&___nl__4,___get_global_const(482));
#line 65
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 65
c_rt_lib0clear(&___nl__4);
#line 66
goto label_19;
#line 66
label_19:
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__3);
#line 67
c_rt_lib0move(&___nl__2,___get_global_const(483));
#line 67
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 67
c_rt_lib0move(&___nl__3, generator_java_priv0get_function_name(___nl__0));
#line 67
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 67
c_rt_lib0clear(&___nl__3);
#line 67
c_rt_lib0clear(&___nl__0);
#line 67
c_rt_lib0clear(&___nl__1);
#line 67
return ___nl__2;
#line 67
c_rt_lib0clear(&___nl__2);
#line 67
c_rt_lib0clear(&___nl__1);
#line 67
c_rt_lib0clear(&___nl__0);
#line 67
return NULL;
}

ImmT generator_java_priv0escape_string(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 71
c_rt_lib0move(&___nl__2,___get_global_const(96));
#line 71
c_rt_lib0move(&___nl__3,___get_global_const(264));
#line 71
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 71
c_rt_lib0clear(&___nl__1);
#line 72
c_rt_lib0move(&___nl__2,___get_global_const(235));
#line 72
c_rt_lib0move(&___nl__3,___get_global_const(269));
#line 72
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 72
c_rt_lib0clear(&___nl__1);
#line 73
c_rt_lib0move(&___nl__3,___get_global_const(238));
#line 73
c_rt_lib0move(&___nl__2, string0chr(___nl__3));
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0move(&___nl__3, string0lf());
#line 73
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0move(&___nl__3,___get_global_const(484));
#line 73
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0clear(&___nl__2);
#line 73
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 73
c_rt_lib0clear(&___nl__1);
#line 74
c_rt_lib0move(&___nl__2, string0lf());
#line 74
c_rt_lib0move(&___nl__3,___get_global_const(272));
#line 74
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return ___nl__1;
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return NULL;
}

ImmT generator_java_priv0is_singleton_use_function(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
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
#line 78
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 78
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 78
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 78
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 78
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 78
c_rt_lib0clear(&___nl__0);
#line 78
c_rt_lib0clear(&___nl__1);
#line 78
return ___nl__2;
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
goto label_14;
#line 78
label_14:
#line 78
c_rt_lib0clear(&___nl__1);
#line 79
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(200)));
#line 79
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(168)));
#line 79
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 79
if(c_rt_lib0check_true_native(___nl__1)){ goto label_26;}
#line 79
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 79
c_rt_lib0clear(&___nl__0);
#line 79
c_rt_lib0clear(&___nl__1);
#line 79
return ___nl__2;
#line 79
c_rt_lib0clear(&___nl__2);
#line 79
goto label_26;
#line 79
label_26:
#line 79
c_rt_lib0clear(&___nl__1);
#line 80
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 82
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(187)));
#line 82
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 82
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 82
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 82
label_33:
#line 82
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 82
if(c_rt_lib0check_true_native(___nl__8)){ goto label_195;}
#line 82
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 83
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 84
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 84
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(206)));
#line 84
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 84
if(c_rt_lib0check_true_native(___nl__10)){ goto label_82;}
#line 85
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 85
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(206)));
#line 86
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(224)));
#line 86
c_rt_lib0move(&___nl__13,___get_global_const(429));
#line 86
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 86
c_rt_lib0clear(&___nl__13);
#line 86
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 86
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 86
if(c_rt_lib0check_true_native(___nl__12)){ goto label_57;}
#line 86
c_rt_lib0clear(&___nl__9);
#line 86
c_rt_lib0clear(&___nl__10);
#line 86
c_rt_lib0clear(&___nl__11);
#line 86
c_rt_lib0clear(&___nl__12);
#line 86
goto label_192;
#line 86
goto label_57;
#line 86
label_57:
#line 86
c_rt_lib0clear(&___nl__12);
#line 87
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(222)));
#line 87
c_rt_lib0move(&___nl__13,___get_global_const(338));
#line 87
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 87
c_rt_lib0clear(&___nl__13);
#line 87
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 87
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 87
if(c_rt_lib0check_true_native(___nl__12)){ goto label_72;}
#line 87
c_rt_lib0clear(&___nl__9);
#line 87
c_rt_lib0clear(&___nl__10);
#line 87
c_rt_lib0clear(&___nl__11);
#line 87
c_rt_lib0clear(&___nl__12);
#line 87
goto label_192;
#line 87
goto label_72;
#line 87
label_72:
#line 87
c_rt_lib0clear(&___nl__12);
#line 88
c_rt_lib0move(&___nl__12, c_rt_lib0get_true());
#line 88
c_rt_lib0copy(&___nl__1, ___nl__12);
#line 88
c_rt_lib0clear(&___nl__12);
#line 89
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(197)));
#line 89
c_rt_lib0copy(&___nl__2, ___nl__12);
#line 89
c_rt_lib0clear(&___nl__12);
#line 89
c_rt_lib0clear(&___nl__11);
#line 90
goto label_189;
#line 90
label_82:
#line 90
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 90
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(90)));
#line 90
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 90
if(c_rt_lib0check_true_native(___nl__10)){ goto label_154;}
#line 91
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 91
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 91
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 91
if(c_rt_lib0check_true_native(___nl__11)){ goto label_107;}
#line 91
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
c_rt_lib0clear(&___nl__1);
#line 91
c_rt_lib0clear(&___nl__2);
#line 91
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0clear(&___nl__5);
#line 91
c_rt_lib0clear(&___nl__6);
#line 91
c_rt_lib0clear(&___nl__7);
#line 91
c_rt_lib0clear(&___nl__8);
#line 91
c_rt_lib0clear(&___nl__9);
#line 91
c_rt_lib0clear(&___nl__10);
#line 91
c_rt_lib0clear(&___nl__11);
#line 91
return ___nl__12;
#line 91
c_rt_lib0clear(&___nl__12);
#line 91
goto label_107;
#line 91
label_107:
#line 91
c_rt_lib0clear(&___nl__11);
#line 92
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 92
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(90)));
#line 93
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 93
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(198)));
#line 93
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 93
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 93
if(c_rt_lib0check_true_native(___nl__12)){ goto label_133;}
#line 93
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
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
c_rt_lib0clear(&___nl__9);
#line 93
c_rt_lib0clear(&___nl__10);
#line 93
c_rt_lib0clear(&___nl__11);
#line 93
c_rt_lib0clear(&___nl__12);
#line 93
return ___nl__13;
#line 93
c_rt_lib0clear(&___nl__13);
#line 93
goto label_133;
#line 93
label_133:
#line 93
c_rt_lib0clear(&___nl__12);
#line 94
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 94
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(198)));
#line 94
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__2));
#line 94
c_rt_lib0clear(&___nl__0);
#line 94
c_rt_lib0clear(&___nl__1);
#line 94
c_rt_lib0clear(&___nl__2);
#line 94
c_rt_lib0clear(&___nl__3);
#line 94
c_rt_lib0clear(&___nl__4);
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0clear(&___nl__6);
#line 94
c_rt_lib0clear(&___nl__7);
#line 94
c_rt_lib0clear(&___nl__8);
#line 94
c_rt_lib0clear(&___nl__9);
#line 94
c_rt_lib0clear(&___nl__10);
#line 94
c_rt_lib0clear(&___nl__11);
#line 94
return ___nl__12;
#line 94
c_rt_lib0clear(&___nl__12);
#line 94
c_rt_lib0clear(&___nl__11);
#line 95
goto label_189;
#line 95
label_154:
#line 95
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 95
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(218)));
#line 95
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 95
if(c_rt_lib0check_true_native(___nl__10)){ goto label_160;}
#line 96
goto label_189;
#line 96
label_160:
#line 96
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 96
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(221)));
#line 96
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 96
if(c_rt_lib0check_true_native(___nl__10)){ goto label_166;}
#line 97
goto label_189;
#line 97
label_166:
#line 98
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 98
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 98
if(c_rt_lib0check_true_native(___nl__11)){ goto label_186;}
#line 98
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 98
c_rt_lib0clear(&___nl__0);
#line 98
c_rt_lib0clear(&___nl__1);
#line 98
c_rt_lib0clear(&___nl__2);
#line 98
c_rt_lib0clear(&___nl__3);
#line 98
c_rt_lib0clear(&___nl__4);
#line 98
c_rt_lib0clear(&___nl__5);
#line 98
c_rt_lib0clear(&___nl__6);
#line 98
c_rt_lib0clear(&___nl__7);
#line 98
c_rt_lib0clear(&___nl__8);
#line 98
c_rt_lib0clear(&___nl__9);
#line 98
c_rt_lib0clear(&___nl__10);
#line 98
c_rt_lib0clear(&___nl__11);
#line 98
return ___nl__12;
#line 98
c_rt_lib0clear(&___nl__12);
#line 98
goto label_186;
#line 98
label_186:
#line 98
c_rt_lib0clear(&___nl__11);
#line 99
goto label_189;
#line 99
label_189:
#line 99
c_rt_lib0clear(&___nl__10);
#line 99
c_rt_lib0clear(&___nl__9);
#line 99
label_192:
#line 100
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 100
goto label_33;
#line 100
label_195:
#line 100
c_rt_lib0clear(&___nl__3);
#line 100
c_rt_lib0clear(&___nl__4);
#line 100
c_rt_lib0clear(&___nl__5);
#line 100
c_rt_lib0clear(&___nl__6);
#line 100
c_rt_lib0clear(&___nl__7);
#line 100
c_rt_lib0clear(&___nl__8);
#line 101
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 101
c_rt_lib0clear(&___nl__0);
#line 101
c_rt_lib0clear(&___nl__1);
#line 101
c_rt_lib0clear(&___nl__2);
#line 101
return ___nl__3;
#line 101
c_rt_lib0clear(&___nl__3);
#line 101
c_rt_lib0clear(&___nl__1);
#line 101
c_rt_lib0clear(&___nl__2);
#line 101
c_rt_lib0clear(&___nl__0);
#line 101
return NULL;
}

ImmT generator_java_priv0print_function_or_singleton(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 105
c_rt_lib0move(&___nl__2, generator_java_priv0is_singleton_use_function(___nl__0));
#line 105
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 105
if(c_rt_lib0check_true_native(___nl__2)){ goto label_60;}
#line 106
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 107
c_rt_lib0move(&___nl__4,___get_global_const(485));
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 107
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 107
c_rt_lib0clear(&___nl__5);
#line 107
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 107
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(93), ___nl__5);
#line 107
c_rt_lib0clear(&___nl__4);
#line 107
c_rt_lib0clear(&___nl__5);
#line 108
c_rt_lib0move(&___nl__4, generator_java_priv0get_function_name(___nl__3));
#line 109
c_rt_lib0move(&___nl__5,___get_global_const(486));
#line 109
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 110
c_rt_lib0move(&___nl__6, generator_java_priv0print_function(___nl__3, ___nl__1));
#line 111
c_rt_lib0move(&___nl__7,___get_global_const(487));
#line 111
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__5));
#line 111
c_rt_lib0move(&___nl__8,___get_global_const(488));
#line 111
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 111
c_rt_lib0clear(&___nl__8);
#line 111
c_rt_lib0move(&___nl__8, string0lf());
#line 111
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 111
c_rt_lib0clear(&___nl__8);
#line 111
c_rt_lib0move(&___nl__8, generator_java_priv0get_function_declaration(___nl__0));
#line 111
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 111
c_rt_lib0clear(&___nl__8);
#line 112
c_rt_lib0move(&___nl__8,___get_global_const(489));
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 112
c_rt_lib0clear(&___nl__8);
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__5));
#line 113
c_rt_lib0move(&___nl__8,___get_global_const(490));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__5));
#line 114
c_rt_lib0move(&___nl__8,___get_global_const(491));
#line 114
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 114
c_rt_lib0clear(&___nl__8);
#line 114
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 114
c_rt_lib0move(&___nl__8,___get_global_const(492));
#line 114
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 114
c_rt_lib0clear(&___nl__8);
#line 114
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__5));
#line 116
c_rt_lib0move(&___nl__8,___get_global_const(493));
#line 116
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 116
c_rt_lib0clear(&___nl__8);
#line 116
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 116
c_rt_lib0clear(&___nl__7);
#line 118
c_rt_lib0clear(&___nl__0);
#line 118
c_rt_lib0clear(&___nl__1);
#line 118
c_rt_lib0clear(&___nl__2);
#line 118
c_rt_lib0clear(&___nl__3);
#line 118
c_rt_lib0clear(&___nl__4);
#line 118
c_rt_lib0clear(&___nl__5);
#line 118
return ___nl__6;
#line 118
c_rt_lib0clear(&___nl__3);
#line 118
c_rt_lib0clear(&___nl__4);
#line 118
c_rt_lib0clear(&___nl__5);
#line 118
c_rt_lib0clear(&___nl__6);
#line 119
goto label_68;
#line 119
label_60:
#line 120
c_rt_lib0move(&___nl__3, generator_java_priv0print_function(___nl__0, ___nl__1));
#line 120
c_rt_lib0clear(&___nl__0);
#line 120
c_rt_lib0clear(&___nl__1);
#line 120
c_rt_lib0clear(&___nl__2);
#line 120
return ___nl__3;
#line 120
c_rt_lib0clear(&___nl__3);
#line 121
goto label_68;
#line 121
label_68:
#line 121
c_rt_lib0clear(&___nl__2);
#line 121
c_rt_lib0clear(&___nl__0);
#line 121
c_rt_lib0clear(&___nl__1);
#line 121
return NULL;
}

ImmT generator_java_priv0print_function(ImmT ___nl__0,ImmT ___nl__1) {
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
#line 125
c_rt_lib0move(&___nl__2, string0lf());
#line 125
c_rt_lib0move(&___nl__3, generator_java_priv0get_function_declaration(___nl__0));
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 125
c_rt_lib0clear(&___nl__3);
#line 125
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 125
c_rt_lib0clear(&___nl__3);
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 126
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 126
c_rt_lib0clear(&___nl__4);
#line 126
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 126
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 126
label_12:
#line 126
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 126
if(c_rt_lib0check_true_native(___nl__6)){ goto label_32;}
#line 127
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 127
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__4, ___nl__7));
#line 127
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 127
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 127
if(c_rt_lib0check_true_native(___nl__7)){ goto label_24;}
#line 127
c_rt_lib0move(&___nl__8,___get_global_const(271));
#line 127
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__8));
#line 127
c_rt_lib0clear(&___nl__8);
#line 127
goto label_24;
#line 127
label_24:
#line 127
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__7,___get_global_const(494));
#line 128
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 128
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 129
goto label_12;
#line 129
label_32:
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0clear(&___nl__5);
#line 129
c_rt_lib0clear(&___nl__6);
#line 130
c_rt_lib0move(&___nl__3,___get_global_const(495));
#line 130
c_rt_lib0move(&___nl__4, string0lf());
#line 130
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 130
c_rt_lib0clear(&___nl__4);
#line 130
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 130
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 131
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 131
c_rt_lib0clear(&___nl__4);
#line 131
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 131
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 131
label_48:
#line 131
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 131
if(c_rt_lib0check_true_native(___nl__6)){ goto label_94;}
#line 132
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 132
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__4));
#line 132
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(198)));
#line 132
if(c_rt_lib0check_true_native(___nl__8)){ goto label_60;}
#line 134
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 134
if(c_rt_lib0check_true_native(___nl__8)){ goto label_76;}
#line 134
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 134
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 134
nl_die_arg(___nl__8);
#line 132
label_60:
#line 133
c_rt_lib0move(&___nl__9,___get_global_const(496));
#line 133
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 133
c_rt_lib0move(&___nl__10,___get_global_const(497));
#line 133
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 133
c_rt_lib0clear(&___nl__10);
#line 133
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 133
c_rt_lib0move(&___nl__10, generator_java_priv0print_getter());
#line 133
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 133
c_rt_lib0clear(&___nl__10);
#line 133
c_rt_lib0move(&___nl__10,___get_global_const(498));
#line 133
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 133
c_rt_lib0clear(&___nl__10);
#line 133
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 133
c_rt_lib0clear(&___nl__9);
#line 134
goto label_89;
#line 134
label_76:
#line 135
c_rt_lib0move(&___nl__9,___get_global_const(496));
#line 135
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 135
c_rt_lib0move(&___nl__10,___get_global_const(499));
#line 135
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 135
c_rt_lib0clear(&___nl__10);
#line 135
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 135
c_rt_lib0move(&___nl__10,___get_global_const(360));
#line 135
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 135
c_rt_lib0clear(&___nl__10);
#line 135
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 135
c_rt_lib0clear(&___nl__9);
#line 136
goto label_89;
#line 136
label_89:
#line 136
c_rt_lib0clear(&___nl__7);
#line 136
c_rt_lib0clear(&___nl__8);
#line 137
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 137
goto label_48;
#line 137
label_94:
#line 137
c_rt_lib0clear(&___nl__3);
#line 137
c_rt_lib0clear(&___nl__4);
#line 137
c_rt_lib0clear(&___nl__5);
#line 137
c_rt_lib0clear(&___nl__6);
#line 138
c_rt_lib0move(&___nl__3, string0lf());
#line 138
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 138
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 139
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
label_105:
#line 139
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(189)));
#line 139
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__4));
#line 139
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 139
if(c_rt_lib0check_true_native(___nl__4)){ goto label_124;}
#line 140
c_rt_lib0move(&___nl__5,___get_global_const(496));
#line 140
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 140
c_rt_lib0move(&___nl__6,___get_global_const(500));
#line 140
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 140
c_rt_lib0clear(&___nl__6);
#line 140
c_rt_lib0move(&___nl__6, string0lf());
#line 140
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 140
c_rt_lib0clear(&___nl__6);
#line 140
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 140
c_rt_lib0clear(&___nl__5);
#line 139
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 139
c_rt_lib0clear(&___nl__5);
#line 141
goto label_105;
#line 141
label_124:
#line 141
c_rt_lib0clear(&___nl__3);
#line 141
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0move(&___nl__3,___get_global_const(501));
#line 142
c_rt_lib0move(&___nl__4, generator_java_priv0print_hash_name());
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0move(&___nl__4,___get_global_const(360));
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0move(&___nl__4, string0lf());
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 142
c_rt_lib0clear(&___nl__3);
#line 143
c_rt_lib0move(&___nl__3,___get_global_const(502));
#line 143
c_rt_lib0move(&___nl__4, string0lf());
#line 143
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 143
c_rt_lib0clear(&___nl__4);
#line 143
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 143
c_rt_lib0clear(&___nl__3);
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(187)));
#line 144
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 144
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 144
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 144
label_149:
#line 144
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 144
if(c_rt_lib0check_true_native(___nl__8)){ goto label_158;}
#line 144
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 144
c_rt_lib0move(&___nl__9, generator_java_priv0print_command(___nl__1, ___nl__4));
#line 144
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 144
c_rt_lib0clear(&___nl__9);
#line 144
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 144
goto label_149;
#line 144
label_158:
#line 144
c_rt_lib0clear(&___nl__3);
#line 144
c_rt_lib0clear(&___nl__4);
#line 144
c_rt_lib0clear(&___nl__5);
#line 144
c_rt_lib0clear(&___nl__6);
#line 144
c_rt_lib0clear(&___nl__7);
#line 144
c_rt_lib0clear(&___nl__8);
#line 145
c_rt_lib0move(&___nl__3,___get_global_const(503));
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__3));
#line 145
c_rt_lib0move(&___nl__4, string0lf());
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 145
c_rt_lib0clear(&___nl__4);
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
c_rt_lib0clear(&___nl__2);
#line 145
return ___nl__3;
#line 145
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0clear(&___nl__2);
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
return NULL;
}

ImmT generator_java_priv0print_command(ImmT ___nl__0,ImmT ___nl__1) {
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
ImmT ___nl__11 = NULL;
#line 150
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(201)));
#line 150
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(204)));
#line 150
if(c_rt_lib0check_true_native(___nl__4)){ goto label_46;}
#line 152
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(205)));
#line 152
if(c_rt_lib0check_true_native(___nl__4)){ goto label_62;}
#line 155
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(206)));
#line 155
if(c_rt_lib0check_true_native(___nl__4)){ goto label_85;}
#line 157
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(88)));
#line 157
if(c_rt_lib0check_true_native(___nl__4)){ goto label_105;}
#line 160
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(207)));
#line 160
if(c_rt_lib0check_true_native(___nl__4)){ goto label_128;}
#line 162
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(208)));
#line 162
if(c_rt_lib0check_true_native(___nl__4)){ goto label_135;}
#line 164
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(209)));
#line 164
if(c_rt_lib0check_true_native(___nl__4)){ goto label_142;}
#line 167
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(210)));
#line 167
if(c_rt_lib0check_true_native(___nl__4)){ goto label_172;}
#line 170
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(90)));
#line 170
if(c_rt_lib0check_true_native(___nl__4)){ goto label_202;}
#line 172
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(217)));
#line 172
if(c_rt_lib0check_true_native(___nl__4)){ goto label_209;}
#line 174
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(211)));
#line 174
if(c_rt_lib0check_true_native(___nl__4)){ goto label_216;}
#line 176
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(199)));
#line 176
if(c_rt_lib0check_true_native(___nl__4)){ goto label_232;}
#line 178
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(212)));
#line 178
if(c_rt_lib0check_true_native(___nl__4)){ goto label_252;}
#line 183
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(213)));
#line 183
if(c_rt_lib0check_true_native(___nl__4)){ goto label_298;}
#line 189
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(214)));
#line 189
if(c_rt_lib0check_true_native(___nl__4)){ goto label_368;}
#line 191
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(215)));
#line 191
if(c_rt_lib0check_true_native(___nl__4)){ goto label_382;}
#line 195
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(216)));
#line 195
if(c_rt_lib0check_true_native(___nl__4)){ goto label_413;}
#line 197
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(218)));
#line 197
if(c_rt_lib0check_true_native(___nl__4)){ goto label_420;}
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(219)));
#line 199
if(c_rt_lib0check_true_native(___nl__4)){ goto label_431;}
#line 202
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(220)));
#line 202
if(c_rt_lib0check_true_native(___nl__4)){ goto label_454;}
#line 204
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(221)));
#line 204
if(c_rt_lib0check_true_native(___nl__4)){ goto label_461;}
#line 204
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 204
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 204
nl_die_arg(___nl__4);
#line 150
label_46:
#line 150
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(204)));
#line 151
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 151
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 151
c_rt_lib0move(&___nl__8, generator_java_priv0print_arr(___nl__9));
#line 151
c_rt_lib0clear(&___nl__9);
#line 151
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 151
c_rt_lib0clear(&___nl__8);
#line 151
c_rt_lib0clear(&___nl__7);
#line 151
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 151
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 151
c_rt_lib0clear(&___nl__7);
#line 151
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 151
c_rt_lib0clear(&___nl__6);
#line 151
c_rt_lib0clear(&___nl__5);
#line 152
goto label_473;
#line 152
label_62:
#line 152
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(205)));
#line 153
c_rt_lib0move(&___nl__6, generator_java_priv0print_hash(___nl__5));
#line 153
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 153
c_rt_lib0clear(&___nl__6);
#line 154
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 154
c_rt_lib0move(&___nl__8,___get_global_const(504));
#line 154
c_rt_lib0move(&___nl__9, generator_java_priv0print_hash_name());
#line 154
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 154
c_rt_lib0clear(&___nl__9);
#line 154
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 154
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 154
c_rt_lib0clear(&___nl__9);
#line 154
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 154
c_rt_lib0clear(&___nl__8);
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 154
c_rt_lib0clear(&___nl__6);
#line 154
c_rt_lib0clear(&___nl__5);
#line 155
goto label_473;
#line 155
label_85:
#line 155
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(206)));
#line 156
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 156
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(222)));
#line 156
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(224)));
#line 156
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(89)));
#line 156
c_rt_lib0move(&___nl__8, generator_java_priv0print_call(___nl__0, ___nl__9, ___nl__10, ___nl__11));
#line 156
c_rt_lib0clear(&___nl__11);
#line 156
c_rt_lib0clear(&___nl__10);
#line 156
c_rt_lib0clear(&___nl__9);
#line 156
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 156
c_rt_lib0clear(&___nl__8);
#line 156
c_rt_lib0clear(&___nl__7);
#line 156
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 156
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 156
c_rt_lib0clear(&___nl__7);
#line 156
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 156
c_rt_lib0clear(&___nl__6);
#line 156
c_rt_lib0clear(&___nl__5);
#line 157
goto label_473;
#line 157
label_105:
#line 157
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(88)));
#line 158
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 158
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 158
c_rt_lib0move(&___nl__9, generator_java_priv0get_class_name(___nl__10));
#line 158
c_rt_lib0clear(&___nl__10);
#line 158
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 158
c_rt_lib0move(&___nl__11,___get_global_const(480));
#line 158
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 158
c_rt_lib0clear(&___nl__11);
#line 158
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(132), ___nl__9, ___get_global_const(93), ___nl__10));
#line 158
c_rt_lib0clear(&___nl__9);
#line 158
c_rt_lib0clear(&___nl__10);
#line 158
c_rt_lib0move(&___nl__6, generator_java_priv0print_const_hash(___nl__7, ___nl__8));
#line 158
c_rt_lib0clear(&___nl__8);
#line 158
c_rt_lib0clear(&___nl__7);
#line 159
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 159
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 159
c_rt_lib0clear(&___nl__7);
#line 159
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 159
c_rt_lib0clear(&___nl__6);
#line 159
c_rt_lib0clear(&___nl__5);
#line 160
goto label_473;
#line 160
label_128:
#line 160
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(207)));
#line 161
c_rt_lib0move(&___nl__6, generator_java_priv0print_una_op(___nl__5));
#line 161
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 161
c_rt_lib0clear(&___nl__6);
#line 161
c_rt_lib0clear(&___nl__5);
#line 162
goto label_473;
#line 162
label_135:
#line 162
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(208)));
#line 163
c_rt_lib0move(&___nl__6, generator_java_priv0print_bin_op(___nl__5));
#line 163
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 163
c_rt_lib0clear(&___nl__6);
#line 163
c_rt_lib0clear(&___nl__5);
#line 164
goto label_473;
#line 164
label_142:
#line 164
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(209)));
#line 165
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 165
c_rt_lib0move(&___nl__8,___get_global_const(505));
#line 165
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 165
c_rt_lib0move(&___nl__9, generator_java_priv0print_register(___nl__10));
#line 165
c_rt_lib0clear(&___nl__10);
#line 165
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 165
c_rt_lib0clear(&___nl__9);
#line 166
c_rt_lib0move(&___nl__9,___get_global_const(506));
#line 166
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 166
c_rt_lib0clear(&___nl__9);
#line 166
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 166
c_rt_lib0move(&___nl__9, generator_java_priv0escape_string(___nl__10));
#line 166
c_rt_lib0clear(&___nl__10);
#line 166
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 166
c_rt_lib0clear(&___nl__9);
#line 166
c_rt_lib0move(&___nl__9,___get_global_const(507));
#line 166
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 166
c_rt_lib0clear(&___nl__9);
#line 166
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 166
c_rt_lib0clear(&___nl__8);
#line 166
c_rt_lib0clear(&___nl__7);
#line 166
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 166
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 166
c_rt_lib0clear(&___nl__7);
#line 166
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 166
c_rt_lib0clear(&___nl__6);
#line 166
c_rt_lib0clear(&___nl__5);
#line 167
goto label_473;
#line 167
label_172:
#line 167
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(210)));
#line 168
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 168
c_rt_lib0move(&___nl__8,___get_global_const(508));
#line 168
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 168
c_rt_lib0move(&___nl__9, generator_java_priv0print_register(___nl__10));
#line 168
c_rt_lib0clear(&___nl__10);
#line 168
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 168
c_rt_lib0clear(&___nl__9);
#line 169
c_rt_lib0move(&___nl__9,___get_global_const(506));
#line 169
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 169
c_rt_lib0clear(&___nl__9);
#line 169
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 169
c_rt_lib0move(&___nl__9, generator_java_priv0escape_string(___nl__10));
#line 169
c_rt_lib0clear(&___nl__10);
#line 169
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 169
c_rt_lib0clear(&___nl__9);
#line 169
c_rt_lib0move(&___nl__9,___get_global_const(507));
#line 169
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 169
c_rt_lib0clear(&___nl__9);
#line 169
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 169
c_rt_lib0clear(&___nl__8);
#line 169
c_rt_lib0clear(&___nl__7);
#line 169
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 169
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 169
c_rt_lib0clear(&___nl__7);
#line 169
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 169
c_rt_lib0clear(&___nl__6);
#line 169
c_rt_lib0clear(&___nl__5);
#line 170
goto label_473;
#line 170
label_202:
#line 170
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(90)));
#line 171
c_rt_lib0move(&___nl__6, generator_java_priv0print_return(___nl__5));
#line 171
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 171
c_rt_lib0clear(&___nl__6);
#line 171
c_rt_lib0clear(&___nl__5);
#line 172
goto label_473;
#line 172
label_209:
#line 172
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(217)));
#line 173
c_rt_lib0move(&___nl__6,___get_global_const(509));
#line 173
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 173
c_rt_lib0clear(&___nl__6);
#line 173
c_rt_lib0clear(&___nl__5);
#line 174
goto label_473;
#line 174
label_216:
#line 174
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(211)));
#line 175
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 175
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 175
c_rt_lib0move(&___nl__8, generator_java_priv0print_register_getter(___nl__9));
#line 175
c_rt_lib0clear(&___nl__9);
#line 175
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 175
c_rt_lib0clear(&___nl__8);
#line 175
c_rt_lib0clear(&___nl__7);
#line 175
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 175
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 175
c_rt_lib0clear(&___nl__7);
#line 175
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 175
c_rt_lib0clear(&___nl__6);
#line 175
c_rt_lib0clear(&___nl__5);
#line 176
goto label_473;
#line 176
label_232:
#line 176
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(199)));
#line 177
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 177
c_rt_lib0move(&___nl__9, generator_java_priv0print_register(___nl__10));
#line 177
c_rt_lib0clear(&___nl__10);
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(198)));
#line 177
c_rt_lib0move(&___nl__8, generator_java_priv0print_const_value(___nl__9, ___nl__10));
#line 177
c_rt_lib0clear(&___nl__10);
#line 177
c_rt_lib0clear(&___nl__9);
#line 177
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 177
c_rt_lib0clear(&___nl__8);
#line 177
c_rt_lib0clear(&___nl__7);
#line 177
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 177
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 177
c_rt_lib0clear(&___nl__7);
#line 177
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 177
c_rt_lib0clear(&___nl__6);
#line 177
c_rt_lib0clear(&___nl__5);
#line 178
goto label_473;
#line 178
label_252:
#line 178
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(212)));
#line 179
c_rt_lib0move(&___nl__6,___get_global_const(510));
#line 179
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 179
c_rt_lib0move(&___nl__7, generator_java_priv0print_register_getter(___nl__8));
#line 179
c_rt_lib0clear(&___nl__8);
#line 179
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 179
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
c_rt_lib0move(&___nl__7, generator_java_priv0print_getter());
#line 179
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 179
c_rt_lib0clear(&___nl__6);
#line 180
c_rt_lib0move(&___nl__6,___get_global_const(511));
#line 180
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(232)));
#line 180
c_rt_lib0move(&___nl__7, generator_java_priv0print_register_getter(___nl__8));
#line 180
c_rt_lib0clear(&___nl__8);
#line 180
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 180
c_rt_lib0clear(&___nl__7);
#line 180
c_rt_lib0move(&___nl__7,___get_global_const(512));
#line 180
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 180
c_rt_lib0clear(&___nl__7);
#line 180
c_rt_lib0move(&___nl__7, generator_java_priv0print_getter());
#line 180
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 180
c_rt_lib0clear(&___nl__7);
#line 180
c_rt_lib0move(&___nl__7, generator_java_priv0print_int_value());
#line 180
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 180
c_rt_lib0clear(&___nl__7);
#line 181
c_rt_lib0move(&___nl__7,___get_global_const(259));
#line 181
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 181
c_rt_lib0clear(&___nl__7);
#line 181
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 181
c_rt_lib0clear(&___nl__6);
#line 182
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 182
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__2));
#line 182
c_rt_lib0clear(&___nl__7);
#line 182
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 182
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 182
c_rt_lib0clear(&___nl__7);
#line 182
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 182
c_rt_lib0clear(&___nl__6);
#line 182
c_rt_lib0clear(&___nl__5);
#line 183
goto label_473;
#line 183
label_298:
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(213)));
#line 184
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 184
c_rt_lib0move(&___nl__8,___get_global_const(513));
#line 184
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 184
c_rt_lib0move(&___nl__9, generator_java_priv0print_register_getter(___nl__10));
#line 184
c_rt_lib0clear(&___nl__10);
#line 184
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 184
c_rt_lib0clear(&___nl__9);
#line 185
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 185
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 185
c_rt_lib0clear(&___nl__9);
#line 185
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 185
c_rt_lib0clear(&___nl__8);
#line 185
c_rt_lib0clear(&___nl__7);
#line 185
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 185
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 185
c_rt_lib0clear(&___nl__7);
#line 185
c_rt_lib0move(&___nl__7, string0lf());
#line 185
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 185
c_rt_lib0clear(&___nl__7);
#line 185
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 185
c_rt_lib0clear(&___nl__6);
#line 186
c_rt_lib0move(&___nl__6,___get_global_const(510));
#line 186
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 186
c_rt_lib0move(&___nl__7, generator_java_priv0print_register_getter(___nl__8));
#line 186
c_rt_lib0clear(&___nl__8);
#line 186
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 186
c_rt_lib0clear(&___nl__7);
#line 186
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 186
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 186
c_rt_lib0clear(&___nl__7);
#line 186
c_rt_lib0move(&___nl__7, generator_java_priv0print_getter());
#line 186
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 186
c_rt_lib0clear(&___nl__7);
#line 186
c_rt_lib0move(&___nl__7,___get_global_const(258));
#line 186
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 186
c_rt_lib0clear(&___nl__7);
#line 186
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 186
c_rt_lib0clear(&___nl__6);
#line 187
c_rt_lib0move(&___nl__6,___get_global_const(514));
#line 187
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(232)));
#line 187
c_rt_lib0move(&___nl__7, generator_java_priv0print_register_getter(___nl__8));
#line 187
c_rt_lib0clear(&___nl__8);
#line 187
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 187
c_rt_lib0clear(&___nl__7);
#line 187
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 187
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 187
c_rt_lib0clear(&___nl__7);
#line 187
c_rt_lib0move(&___nl__7, generator_java_priv0print_getter());
#line 187
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 187
c_rt_lib0clear(&___nl__7);
#line 187
c_rt_lib0move(&___nl__7, generator_java_priv0print_int_value());
#line 187
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 187
c_rt_lib0clear(&___nl__7);
#line 188
c_rt_lib0move(&___nl__7,___get_global_const(405));
#line 188
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 188
c_rt_lib0clear(&___nl__7);
#line 188
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(198)));
#line 188
c_rt_lib0move(&___nl__7, generator_java_priv0print_register_getter(___nl__8));
#line 188
c_rt_lib0clear(&___nl__8);
#line 188
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 188
c_rt_lib0clear(&___nl__7);
#line 188
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 188
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 188
c_rt_lib0clear(&___nl__7);
#line 188
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 188
c_rt_lib0clear(&___nl__6);
#line 188
c_rt_lib0clear(&___nl__5);
#line 189
goto label_473;
#line 189
label_368:
#line 189
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(214)));
#line 190
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 190
c_rt_lib0move(&___nl__8, generator_java_priv0print_get_hash_value(___nl__5));
#line 190
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 190
c_rt_lib0clear(&___nl__8);
#line 190
c_rt_lib0clear(&___nl__7);
#line 190
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 190
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 190
c_rt_lib0clear(&___nl__7);
#line 190
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 190
c_rt_lib0clear(&___nl__6);
#line 190
c_rt_lib0clear(&___nl__5);
#line 191
goto label_473;
#line 191
label_382:
#line 191
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(215)));
#line 192
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 192
c_rt_lib0move(&___nl__8,___get_global_const(513));
#line 192
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 192
c_rt_lib0move(&___nl__9, generator_java_priv0print_register_getter(___nl__10));
#line 192
c_rt_lib0clear(&___nl__10);
#line 192
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 192
c_rt_lib0clear(&___nl__9);
#line 192
c_rt_lib0move(&___nl__9,___get_global_const(260));
#line 192
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 192
c_rt_lib0clear(&___nl__9);
#line 192
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 192
c_rt_lib0clear(&___nl__8);
#line 192
c_rt_lib0clear(&___nl__7);
#line 193
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 193
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 193
c_rt_lib0clear(&___nl__7);
#line 193
c_rt_lib0move(&___nl__7, string0lf());
#line 193
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 193
c_rt_lib0clear(&___nl__7);
#line 193
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 193
c_rt_lib0clear(&___nl__6);
#line 194
c_rt_lib0move(&___nl__6, generator_java_priv0print_set_hash_value(___nl__5));
#line 194
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 194
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 194
c_rt_lib0clear(&___nl__7);
#line 194
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 194
c_rt_lib0clear(&___nl__6);
#line 194
c_rt_lib0clear(&___nl__5);
#line 195
goto label_473;
#line 195
label_413:
#line 195
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(216)));
#line 196
c_rt_lib0move(&___nl__6, generator_java_priv0print_ov_mk(___nl__5));
#line 196
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 196
c_rt_lib0clear(&___nl__6);
#line 196
c_rt_lib0clear(&___nl__5);
#line 197
goto label_473;
#line 197
label_420:
#line 197
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(218)));
#line 198
c_rt_lib0move(&___nl__6,___get_global_const(515));
#line 198
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 198
c_rt_lib0move(&___nl__7,___get_global_const(516));
#line 198
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 198
c_rt_lib0clear(&___nl__7);
#line 198
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 198
c_rt_lib0clear(&___nl__6);
#line 198
c_rt_lib0clear(&___nl__5);
#line 199
goto label_473;
#line 199
label_431:
#line 199
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(219)));
#line 200
c_rt_lib0move(&___nl__6,___get_global_const(517));
#line 200
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 200
c_rt_lib0move(&___nl__7, generator_java_priv0print_register(___nl__8));
#line 200
c_rt_lib0clear(&___nl__8);
#line 200
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 200
c_rt_lib0clear(&___nl__7);
#line 200
c_rt_lib0move(&___nl__7,___get_global_const(518));
#line 200
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 200
c_rt_lib0clear(&___nl__7);
#line 201
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(197)));
#line 201
c_rt_lib0move(&___nl__7, generator_java_priv0print_goto(___nl__8));
#line 201
c_rt_lib0clear(&___nl__8);
#line 201
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 201
c_rt_lib0clear(&___nl__7);
#line 201
c_rt_lib0move(&___nl__7,___get_global_const(253));
#line 201
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 201
c_rt_lib0clear(&___nl__7);
#line 201
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 201
c_rt_lib0clear(&___nl__6);
#line 201
c_rt_lib0clear(&___nl__5);
#line 202
goto label_473;
#line 202
label_454:
#line 202
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(220)));
#line 203
c_rt_lib0move(&___nl__6, generator_java_priv0print_goto(___nl__5));
#line 203
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 203
c_rt_lib0clear(&___nl__6);
#line 203
c_rt_lib0clear(&___nl__5);
#line 204
goto label_473;
#line 204
label_461:
#line 204
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(221)));
#line 205
c_rt_lib0move(&___nl__7,___get_global_const(519));
#line 205
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__5, ___nl__7));
#line 205
c_rt_lib0clear(&___nl__7);
#line 205
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 205
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 205
c_rt_lib0clear(&___nl__7);
#line 205
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 205
c_rt_lib0clear(&___nl__6);
#line 205
c_rt_lib0clear(&___nl__5);
#line 206
goto label_473;
#line 206
label_473:
#line 206
c_rt_lib0clear(&___nl__3);
#line 206
c_rt_lib0clear(&___nl__4);
#line 207
c_rt_lib0move(&___nl__3,___get_global_const(520));
#line 207
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(195)));
#line 207
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(439)));
#line 207
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(440)));
#line 207
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(134)));
#line 207
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 207
c_rt_lib0clear(&___nl__4);
#line 207
c_rt_lib0move(&___nl__4, string0lf());
#line 207
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 207
c_rt_lib0clear(&___nl__4);
#line 207
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 207
c_rt_lib0move(&___nl__4, string0lf());
#line 207
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 207
c_rt_lib0clear(&___nl__4);
#line 207
c_rt_lib0clear(&___nl__0);
#line 207
c_rt_lib0clear(&___nl__1);
#line 207
c_rt_lib0clear(&___nl__2);
#line 207
return ___nl__3;
#line 207
c_rt_lib0clear(&___nl__3);
#line 207
c_rt_lib0clear(&___nl__2);
#line 207
c_rt_lib0clear(&___nl__0);
#line 207
c_rt_lib0clear(&___nl__1);
#line 207
return NULL;
}

ImmT generator_java_priv0print_arr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 211
c_rt_lib0move(&___nl__1,___get_global_const(521));
#line 212
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 212
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 212
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__3));
#line 212
c_rt_lib0clear(&___nl__3);
#line 212
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 212
if(c_rt_lib0check_true_native(___nl__2)){ goto label_11;}
#line 213
c_rt_lib0move(&___nl__3,___get_global_const(522));
#line 213
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 213
c_rt_lib0clear(&___nl__3);
#line 214
goto label_40;
#line 214
label_11:
#line 215
c_rt_lib0move(&___nl__3,___get_global_const(523));
#line 215
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 215
c_rt_lib0clear(&___nl__3);
#line 216
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 216
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 216
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__0));
#line 216
label_18:
#line 216
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 216
if(c_rt_lib0check_true_native(___nl__7)){ goto label_30;}
#line 216
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 216
c_rt_lib0move(&___nl__8, generator_java_priv0print_register_getter(___nl__3));
#line 216
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 216
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 216
c_rt_lib0clear(&___nl__9);
#line 216
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__8));
#line 216
c_rt_lib0clear(&___nl__8);
#line 216
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 216
goto label_18;
#line 216
label_30:
#line 216
c_rt_lib0clear(&___nl__3);
#line 216
c_rt_lib0clear(&___nl__4);
#line 216
c_rt_lib0clear(&___nl__5);
#line 216
c_rt_lib0clear(&___nl__6);
#line 216
c_rt_lib0clear(&___nl__7);
#line 217
c_rt_lib0move(&___nl__3,___get_global_const(253));
#line 217
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 217
c_rt_lib0clear(&___nl__3);
#line 218
goto label_40;
#line 218
label_40:
#line 218
c_rt_lib0clear(&___nl__2);
#line 219
c_rt_lib0move(&___nl__2,___get_global_const(260));
#line 219
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 219
c_rt_lib0clear(&___nl__0);
#line 219
c_rt_lib0clear(&___nl__1);
#line 219
return ___nl__2;
#line 219
c_rt_lib0clear(&___nl__2);
#line 219
c_rt_lib0clear(&___nl__1);
#line 219
c_rt_lib0clear(&___nl__0);
#line 219
return NULL;
}

ImmT generator_java_priv0print_bin_op(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 223
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 224
c_rt_lib0move(&___nl__3,___get_global_const(318));
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 224
c_rt_lib0clear(&___nl__3);
#line 224
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 224
c_rt_lib0move(&___nl__3,___get_global_const(308));
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 224
c_rt_lib0clear(&___nl__3);
#line 224
label_10:
#line 224
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 224
c_rt_lib0move(&___nl__3,___get_global_const(310));
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 224
c_rt_lib0clear(&___nl__3);
#line 224
label_16:
#line 224
if(c_rt_lib0check_true_native(___nl__2)){ goto label_22;}
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 224
c_rt_lib0move(&___nl__3,___get_global_const(316));
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 224
c_rt_lib0clear(&___nl__3);
#line 224
label_22:
#line 224
if(c_rt_lib0check_true_native(___nl__2)){ goto label_28;}
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 224
c_rt_lib0move(&___nl__3,___get_global_const(312));
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 224
c_rt_lib0clear(&___nl__3);
#line 224
label_28:
#line 224
if(c_rt_lib0check_true_native(___nl__2)){ goto label_34;}
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 225
c_rt_lib0move(&___nl__3,___get_global_const(314));
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 225
c_rt_lib0clear(&___nl__3);
#line 225
label_34:
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 225
if(c_rt_lib0check_true_native(___nl__2)){ goto label_47;}
#line 226
c_rt_lib0move(&___nl__3,___get_global_const(524));
#line 226
c_rt_lib0move(&___nl__4, generator_java_priv0print_imm_double_operation(___nl__0));
#line 226
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 226
c_rt_lib0clear(&___nl__4);
#line 226
c_rt_lib0move(&___nl__4,___get_global_const(525));
#line 226
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 226
c_rt_lib0clear(&___nl__4);
#line 226
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 226
c_rt_lib0clear(&___nl__3);
#line 227
goto label_130;
#line 227
label_47:
#line 227
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 227
c_rt_lib0move(&___nl__3,___get_global_const(300));
#line 227
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 227
c_rt_lib0clear(&___nl__3);
#line 227
if(c_rt_lib0check_true_native(___nl__2)){ goto label_57;}
#line 227
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 227
c_rt_lib0move(&___nl__3,___get_global_const(301));
#line 227
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 227
c_rt_lib0clear(&___nl__3);
#line 227
label_57:
#line 227
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 227
if(c_rt_lib0check_true_native(___nl__2)){ goto label_92;}
#line 228
c_rt_lib0move(&___nl__3,___get_global_const(524));
#line 228
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 228
c_rt_lib0clear(&___nl__3);
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 229
c_rt_lib0move(&___nl__4,___get_global_const(301));
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 229
if(c_rt_lib0check_true_native(___nl__3)){ goto label_73;}
#line 230
c_rt_lib0move(&___nl__4,___get_global_const(294));
#line 230
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__4));
#line 230
c_rt_lib0clear(&___nl__4);
#line 231
goto label_73;
#line 231
label_73:
#line 231
c_rt_lib0clear(&___nl__3);
#line 232
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 232
c_rt_lib0move(&___nl__3, generator_java_priv0print_register_getter(___nl__4));
#line 232
c_rt_lib0clear(&___nl__4);
#line 232
c_rt_lib0move(&___nl__4,___get_global_const(526));
#line 232
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 232
c_rt_lib0clear(&___nl__4);
#line 232
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 232
c_rt_lib0clear(&___nl__3);
#line 233
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 233
c_rt_lib0move(&___nl__3, generator_java_priv0print_register_getter(___nl__4));
#line 233
c_rt_lib0clear(&___nl__4);
#line 233
c_rt_lib0move(&___nl__4,___get_global_const(527));
#line 233
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 233
c_rt_lib0clear(&___nl__4);
#line 233
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 233
c_rt_lib0clear(&___nl__3);
#line 234
goto label_130;
#line 234
label_92:
#line 234
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 234
c_rt_lib0move(&___nl__3,___get_global_const(97));
#line 234
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 234
c_rt_lib0clear(&___nl__3);
#line 234
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 234
if(c_rt_lib0check_true_native(___nl__2)){ goto label_119;}
#line 235
c_rt_lib0move(&___nl__3,___get_global_const(528));
#line 235
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 235
c_rt_lib0move(&___nl__4, generator_java_priv0print_register_getter(___nl__5));
#line 235
c_rt_lib0clear(&___nl__5);
#line 235
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 235
c_rt_lib0clear(&___nl__4);
#line 235
c_rt_lib0move(&___nl__4,___get_global_const(529));
#line 235
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 235
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 236
c_rt_lib0move(&___nl__4, generator_java_priv0print_register_getter(___nl__5));
#line 236
c_rt_lib0clear(&___nl__5);
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(530));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 236
c_rt_lib0clear(&___nl__3);
#line 237
goto label_130;
#line 237
label_119:
#line 238
c_rt_lib0move(&___nl__3,___get_global_const(531));
#line 238
c_rt_lib0move(&___nl__4, generator_java_priv0print_imm_double_operation(___nl__0));
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 238
c_rt_lib0clear(&___nl__4);
#line 238
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 238
c_rt_lib0clear(&___nl__4);
#line 238
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 238
c_rt_lib0clear(&___nl__3);
#line 239
goto label_130;
#line 239
label_130:
#line 239
c_rt_lib0clear(&___nl__2);
#line 240
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(197)));
#line 240
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_setter(___nl__3, ___nl__1));
#line 240
c_rt_lib0clear(&___nl__3);
#line 240
c_rt_lib0move(&___nl__3,___get_global_const(360));
#line 240
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 240
c_rt_lib0clear(&___nl__3);
#line 240
c_rt_lib0clear(&___nl__0);
#line 240
c_rt_lib0clear(&___nl__1);
#line 240
return ___nl__2;
#line 240
c_rt_lib0clear(&___nl__2);
#line 240
c_rt_lib0clear(&___nl__1);
#line 240
c_rt_lib0clear(&___nl__0);
#line 240
return NULL;
}

ImmT generator_java_priv0print_imm_double_operation(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 244
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 244
c_rt_lib0move(&___nl__1, generator_java_priv0print_register_as_number(___nl__2));
#line 244
c_rt_lib0clear(&___nl__2);
#line 245
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 245
c_rt_lib0move(&___nl__3,___get_global_const(312));
#line 245
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 245
c_rt_lib0clear(&___nl__3);
#line 245
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 245
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 245
c_rt_lib0move(&___nl__3,___get_global_const(314));
#line 245
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 245
c_rt_lib0clear(&___nl__3);
#line 245
label_12:
#line 245
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 245
if(c_rt_lib0check_true_native(___nl__2)){ goto label_33;}
#line 246
c_rt_lib0move(&___nl__3,___get_global_const(532));
#line 246
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 246
c_rt_lib0move(&___nl__4, generator_java_priv0print_register_as_number(___nl__5));
#line 246
c_rt_lib0clear(&___nl__5);
#line 246
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0move(&___nl__4,___get_global_const(533));
#line 246
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 246
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0move(&___nl__4,___get_global_const(534));
#line 246
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 246
c_rt_lib0clear(&___nl__3);
#line 247
goto label_43;
#line 247
label_33:
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 248
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 248
c_rt_lib0move(&___nl__4, generator_java_priv0print_register_as_number(___nl__5));
#line 248
c_rt_lib0clear(&___nl__5);
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 248
c_rt_lib0clear(&___nl__4);
#line 248
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 248
c_rt_lib0clear(&___nl__3);
#line 249
goto label_43;
#line 249
label_43:
#line 249
c_rt_lib0clear(&___nl__2);
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
return ___nl__1;
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
return NULL;
}

ImmT generator_java_priv0print_register_as_number(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 254
c_rt_lib0move(&___nl__1,___get_global_const(535));
#line 254
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_getter(___nl__0));
#line 254
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
c_rt_lib0move(&___nl__2, generator_java_priv0print_getter());
#line 254
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
c_rt_lib0move(&___nl__2,___get_global_const(536));
#line 254
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
c_rt_lib0clear(&___nl__0);
#line 254
return ___nl__1;
#line 254
c_rt_lib0clear(&___nl__1);
#line 254
c_rt_lib0clear(&___nl__0);
#line 254
return NULL;
}

ImmT generator_java_priv0print_int_value(){
return generator_java_priv0__const__sing(2);}
ImmT generator_java_priv0print_int_value0cal() {
ImmT ___nl__0 = NULL;
#line 258
c_rt_lib0move(&___nl__0,___get_global_const(537));
#line 258
return ___nl__0;
#line 258
c_rt_lib0clear(&___nl__0);
#line 258
return NULL;
}

ImmT generator_java_priv0print_call(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
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
#line 262
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 262
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 262
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 262
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 262
c_rt_lib0move(&___nl__5,___get_global_const(223));
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__2, ___nl__5));
#line 262
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 262
c_rt_lib0clear(&___nl__5);
#line 262
goto label_9;
#line 262
label_9:
#line 262
c_rt_lib0clear(&___nl__4);
#line 263
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 263
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 263
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 263
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 263
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 263
goto label_17;
#line 263
label_17:
#line 263
c_rt_lib0clear(&___nl__4);
#line 264
c_rt_lib0move(&___nl__4, generator_java_priv0get_class_name(___nl__1));
#line 264
c_rt_lib0move(&___nl__5,___get_global_const(97));
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 264
c_rt_lib0clear(&___nl__5);
#line 264
c_rt_lib0copy(&___nl__5, ___nl__2);
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 264
c_rt_lib0clear(&___nl__5);
#line 264
c_rt_lib0move(&___nl__5,___get_global_const(538));
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 264
c_rt_lib0clear(&___nl__5);
#line 265
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 266
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 266
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 266
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__3));
#line 266
label_33:
#line 266
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 266
if(c_rt_lib0check_true_native(___nl__10)){ goto label_76;}
#line 266
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 267
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 267
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__5, ___nl__11));
#line 267
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 267
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 267
if(c_rt_lib0check_true_native(___nl__11)){ goto label_46;}
#line 267
c_rt_lib0move(&___nl__12,___get_global_const(256));
#line 267
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__12));
#line 267
c_rt_lib0clear(&___nl__12);
#line 267
goto label_46;
#line 267
label_46:
#line 267
c_rt_lib0clear(&___nl__11);
#line 268
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 268
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__11));
#line 268
c_rt_lib0clear(&___nl__11);
#line 269
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(5)));
#line 269
if(c_rt_lib0check_true_native(___nl__11)){ goto label_58;}
#line 271
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(198)));
#line 271
if(c_rt_lib0check_true_native(___nl__11)){ goto label_65;}
#line 271
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 271
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__6));
#line 271
nl_die_arg(___nl__11);
#line 269
label_58:
#line 269
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__6, ___get_global_const(5)));
#line 270
c_rt_lib0move(&___nl__13, generator_java_priv0print_register(___nl__12));
#line 270
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__13));
#line 270
c_rt_lib0clear(&___nl__13);
#line 270
c_rt_lib0clear(&___nl__12);
#line 271
goto label_72;
#line 271
label_65:
#line 271
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__6, ___get_global_const(198)));
#line 272
c_rt_lib0move(&___nl__13, generator_java_priv0print_register(___nl__12));
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__13));
#line 272
c_rt_lib0clear(&___nl__13);
#line 272
c_rt_lib0clear(&___nl__12);
#line 273
goto label_72;
#line 273
label_72:
#line 273
c_rt_lib0clear(&___nl__11);
#line 274
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 274
goto label_33;
#line 274
label_76:
#line 274
c_rt_lib0clear(&___nl__6);
#line 274
c_rt_lib0clear(&___nl__7);
#line 274
c_rt_lib0clear(&___nl__8);
#line 274
c_rt_lib0clear(&___nl__9);
#line 274
c_rt_lib0clear(&___nl__10);
#line 275
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 275
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__4, ___nl__6));
#line 275
c_rt_lib0clear(&___nl__0);
#line 275
c_rt_lib0clear(&___nl__1);
#line 275
c_rt_lib0clear(&___nl__2);
#line 275
c_rt_lib0clear(&___nl__3);
#line 275
c_rt_lib0clear(&___nl__4);
#line 275
c_rt_lib0clear(&___nl__5);
#line 275
return ___nl__6;
#line 275
c_rt_lib0clear(&___nl__6);
#line 275
c_rt_lib0clear(&___nl__4);
#line 275
c_rt_lib0clear(&___nl__5);
#line 275
c_rt_lib0clear(&___nl__0);
#line 275
c_rt_lib0clear(&___nl__1);
#line 275
c_rt_lib0clear(&___nl__2);
#line 275
c_rt_lib0clear(&___nl__3);
#line 275
return NULL;
}

ImmT generator_java_priv0print_const_arr(ImmT ___nl__0,ImmT ___nl__1) {
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
#line 279
c_rt_lib0move(&___nl__2,___get_global_const(539));
#line 280
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 280
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 280
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 280
label_4:
#line 280
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 280
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 280
c_rt_lib0move(&___nl__8, generator_java_priv0print_const_value(___nl__0, ___nl__3));
#line 280
c_rt_lib0move(&___nl__9,___get_global_const(256));
#line 280
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 280
c_rt_lib0clear(&___nl__9);
#line 280
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__8));
#line 280
c_rt_lib0clear(&___nl__8);
#line 280
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 280
goto label_4;
#line 280
label_16:
#line 280
c_rt_lib0clear(&___nl__3);
#line 280
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0clear(&___nl__5);
#line 280
c_rt_lib0clear(&___nl__6);
#line 280
c_rt_lib0clear(&___nl__7);
#line 281
c_rt_lib0move(&___nl__3,___get_global_const(253));
#line 281
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__3));
#line 281
c_rt_lib0clear(&___nl__0);
#line 281
c_rt_lib0clear(&___nl__1);
#line 281
c_rt_lib0clear(&___nl__2);
#line 281
return ___nl__3;
#line 281
c_rt_lib0clear(&___nl__3);
#line 281
c_rt_lib0clear(&___nl__2);
#line 281
c_rt_lib0clear(&___nl__0);
#line 281
c_rt_lib0clear(&___nl__1);
#line 281
return NULL;
}

ImmT generator_java_priv0print_const_hash(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 285
c_rt_lib0move(&___nl__2, generator_java_priv0print_hash_name());
#line 285
c_rt_lib0move(&___nl__3,___get_global_const(540));
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 285
c_rt_lib0clear(&___nl__3);
#line 285
c_rt_lib0move(&___nl__3, string0lf());
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 285
c_rt_lib0clear(&___nl__3);
#line 286
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__1));
#line 286
label_8:
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 286
if(c_rt_lib0check_true_native(___nl__3)){ goto label_36;}
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 286
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__1, ___nl__3));
#line 286
c_rt_lib0move(&___nl__6, generator_java_priv0print_hash_name());
#line 286
c_rt_lib0move(&___nl__7,___get_global_const(541));
#line 286
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 286
c_rt_lib0clear(&___nl__7);
#line 286
c_rt_lib0move(&___nl__7, generator_java_priv0escape_string(___nl__3));
#line 286
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 286
c_rt_lib0clear(&___nl__7);
#line 286
c_rt_lib0move(&___nl__7,___get_global_const(542));
#line 286
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 286
c_rt_lib0clear(&___nl__7);
#line 286
c_rt_lib0move(&___nl__7, generator_java_priv0print_const_value(___nl__0, ___nl__4));
#line 286
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 286
c_rt_lib0clear(&___nl__7);
#line 287
c_rt_lib0move(&___nl__7,___get_global_const(498));
#line 287
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 287
c_rt_lib0clear(&___nl__7);
#line 287
c_rt_lib0move(&___nl__7, string0lf());
#line 287
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 287
c_rt_lib0clear(&___nl__7);
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 287
c_rt_lib0clear(&___nl__6);
#line 287
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 287
goto label_8;
#line 287
label_36:
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0clear(&___nl__4);
#line 287
c_rt_lib0clear(&___nl__5);
#line 289
c_rt_lib0move(&___nl__4,___get_global_const(504));
#line 289
c_rt_lib0move(&___nl__5, generator_java_priv0print_hash_name());
#line 289
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 289
c_rt_lib0clear(&___nl__5);
#line 289
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 289
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 289
c_rt_lib0clear(&___nl__5);
#line 289
c_rt_lib0move(&___nl__3, generator_java_priv0print_register_setter(___nl__0, ___nl__4));
#line 289
c_rt_lib0clear(&___nl__4);
#line 289
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__3));
#line 289
c_rt_lib0clear(&___nl__0);
#line 289
c_rt_lib0clear(&___nl__1);
#line 289
c_rt_lib0clear(&___nl__2);
#line 289
return ___nl__3;
#line 289
c_rt_lib0clear(&___nl__3);
#line 289
c_rt_lib0clear(&___nl__2);
#line 289
c_rt_lib0clear(&___nl__0);
#line 289
c_rt_lib0clear(&___nl__1);
#line 289
return NULL;
}

ImmT generator_java_priv0print_const_ov(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 293
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 294
c_rt_lib0move(&___nl__3, ov0has_value(___nl__1));
#line 294
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 294
if(c_rt_lib0check_true_native(___nl__3)){ goto label_24;}
#line 295
c_rt_lib0move(&___nl__4,___get_global_const(543));
#line 295
c_rt_lib0move(&___nl__6, ov0get_element(___nl__1));
#line 295
c_rt_lib0move(&___nl__5, generator_java_priv0escape_string(___nl__6));
#line 295
c_rt_lib0clear(&___nl__6);
#line 295
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 295
c_rt_lib0clear(&___nl__5);
#line 295
c_rt_lib0move(&___nl__5,___get_global_const(544));
#line 295
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 295
c_rt_lib0clear(&___nl__5);
#line 296
c_rt_lib0move(&___nl__6, ov0get_value(___nl__1));
#line 296
c_rt_lib0move(&___nl__5, generator_java_priv0print_const_value(___nl__0, ___nl__6));
#line 296
c_rt_lib0clear(&___nl__6);
#line 296
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 296
c_rt_lib0clear(&___nl__5);
#line 296
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 296
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 296
c_rt_lib0clear(&___nl__5);
#line 296
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 296
c_rt_lib0clear(&___nl__4);
#line 297
goto label_37;
#line 297
label_24:
#line 298
c_rt_lib0move(&___nl__4,___get_global_const(543));
#line 298
c_rt_lib0move(&___nl__6, ov0get_element(___nl__1));
#line 298
c_rt_lib0move(&___nl__5, generator_java_priv0escape_string(___nl__6));
#line 298
c_rt_lib0clear(&___nl__6);
#line 298
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 298
c_rt_lib0clear(&___nl__5);
#line 298
c_rt_lib0move(&___nl__5,___get_global_const(545));
#line 298
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 298
c_rt_lib0clear(&___nl__5);
#line 298
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 298
c_rt_lib0clear(&___nl__4);
#line 299
goto label_37;
#line 299
label_37:
#line 299
c_rt_lib0clear(&___nl__3);
#line 300
c_rt_lib0clear(&___nl__0);
#line 300
c_rt_lib0clear(&___nl__1);
#line 300
return ___nl__2;
#line 300
c_rt_lib0clear(&___nl__2);
#line 300
c_rt_lib0clear(&___nl__0);
#line 300
c_rt_lib0clear(&___nl__1);
#line 300
return NULL;
}

ImmT generator_java_priv0print_const_value(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 304
c_rt_lib0move(&___nl__2, nl0is_sim(___nl__1));
#line 304
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 304
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 304
c_rt_lib0move(&___nl__5, ptd0sim());
#line 304
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__1));
#line 304
c_rt_lib0clear(&___nl__5);
#line 304
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__4));
#line 304
c_rt_lib0clear(&___nl__4);
#line 304
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 305
c_rt_lib0move(&___nl__5, ptd0sim());
#line 305
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__1));
#line 305
c_rt_lib0clear(&___nl__5);
#line 305
c_rt_lib0move(&___nl__2, string_utils0is_float(___nl__4));
#line 305
c_rt_lib0clear(&___nl__4);
#line 305
label_14:
#line 305
c_rt_lib0clear(&___nl__3);
#line 305
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 305
if(c_rt_lib0check_true_native(___nl__2)){ goto label_29;}
#line 306
c_rt_lib0move(&___nl__3,___get_global_const(531));
#line 306
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 306
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 306
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 306
c_rt_lib0clear(&___nl__4);
#line 306
c_rt_lib0clear(&___nl__0);
#line 306
c_rt_lib0clear(&___nl__1);
#line 306
c_rt_lib0clear(&___nl__2);
#line 306
return ___nl__3;
#line 306
c_rt_lib0clear(&___nl__3);
#line 307
goto label_84;
#line 307
label_29:
#line 307
c_rt_lib0move(&___nl__2, nl0is_sim(___nl__1));
#line 307
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 307
if(c_rt_lib0check_true_native(___nl__2)){ goto label_46;}
#line 308
c_rt_lib0move(&___nl__3,___get_global_const(546));
#line 308
c_rt_lib0move(&___nl__4, generator_java_priv0escape_string(___nl__1));
#line 308
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 308
c_rt_lib0clear(&___nl__4);
#line 308
c_rt_lib0move(&___nl__4,___get_global_const(468));
#line 308
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 308
c_rt_lib0clear(&___nl__4);
#line 308
c_rt_lib0clear(&___nl__0);
#line 308
c_rt_lib0clear(&___nl__1);
#line 308
c_rt_lib0clear(&___nl__2);
#line 308
return ___nl__3;
#line 308
c_rt_lib0clear(&___nl__3);
#line 309
goto label_84;
#line 309
label_46:
#line 309
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 309
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 309
if(c_rt_lib0check_true_native(___nl__2)){ goto label_57;}
#line 310
c_rt_lib0move(&___nl__3, generator_java_priv0print_const_arr(___nl__0, ___nl__1));
#line 310
c_rt_lib0clear(&___nl__0);
#line 310
c_rt_lib0clear(&___nl__1);
#line 310
c_rt_lib0clear(&___nl__2);
#line 310
return ___nl__3;
#line 310
c_rt_lib0clear(&___nl__3);
#line 311
goto label_84;
#line 311
label_57:
#line 311
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 311
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 311
if(c_rt_lib0check_true_native(___nl__2)){ goto label_68;}
#line 312
c_rt_lib0move(&___nl__3, generator_java_priv0print_const_hash(___nl__0, ___nl__1));
#line 312
c_rt_lib0clear(&___nl__0);
#line 312
c_rt_lib0clear(&___nl__1);
#line 312
c_rt_lib0clear(&___nl__2);
#line 312
return ___nl__3;
#line 312
c_rt_lib0clear(&___nl__3);
#line 313
goto label_84;
#line 313
label_68:
#line 313
c_rt_lib0move(&___nl__2, nl0is_variant(___nl__1));
#line 313
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 313
if(c_rt_lib0check_true_native(___nl__2)){ goto label_79;}
#line 314
c_rt_lib0move(&___nl__3, generator_java_priv0print_const_ov(___nl__0, ___nl__1));
#line 314
c_rt_lib0clear(&___nl__0);
#line 314
c_rt_lib0clear(&___nl__1);
#line 314
c_rt_lib0clear(&___nl__2);
#line 314
return ___nl__3;
#line 314
c_rt_lib0clear(&___nl__3);
#line 315
goto label_84;
#line 315
label_79:
#line 316
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 316
nl_die_arg(___nl__3);
#line 316
c_rt_lib0clear(&___nl__3);
#line 317
goto label_84;
#line 317
label_84:
#line 317
c_rt_lib0clear(&___nl__2);
#line 317
c_rt_lib0clear(&___nl__0);
#line 317
c_rt_lib0clear(&___nl__1);
#line 317
return NULL;
}

ImmT generator_java_priv0print_goto(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 321
c_rt_lib0move(&___nl__1,___get_global_const(547));
#line 321
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 321
c_rt_lib0move(&___nl__2,___get_global_const(548));
#line 321
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 321
c_rt_lib0clear(&___nl__2);
#line 321
c_rt_lib0clear(&___nl__0);
#line 321
return ___nl__1;
#line 321
c_rt_lib0clear(&___nl__1);
#line 321
c_rt_lib0clear(&___nl__0);
#line 321
return NULL;
}

ImmT generator_java_priv0print_hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
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
#line 325
c_rt_lib0move(&___nl__1, generator_java_priv0print_hash_name());
#line 325
c_rt_lib0move(&___nl__2,___get_global_const(540));
#line 325
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0move(&___nl__2, string0lf());
#line 325
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 328
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 328
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 328
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 328
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 328
label_11:
#line 328
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 328
if(c_rt_lib0check_true_native(___nl__7)){ goto label_42;}
#line 328
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 326
c_rt_lib0move(&___nl__8, generator_java_priv0print_hash_name());
#line 326
c_rt_lib0move(&___nl__9,___get_global_const(541));
#line 326
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 326
c_rt_lib0clear(&___nl__9);
#line 326
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(329)));
#line 326
c_rt_lib0move(&___nl__9, generator_java_priv0escape_string(___nl__10));
#line 326
c_rt_lib0clear(&___nl__10);
#line 326
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 326
c_rt_lib0clear(&___nl__9);
#line 326
c_rt_lib0move(&___nl__9,___get_global_const(542));
#line 326
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 326
c_rt_lib0clear(&___nl__9);
#line 327
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(198)));
#line 327
c_rt_lib0move(&___nl__9, generator_java_priv0print_register_getter(___nl__10));
#line 327
c_rt_lib0clear(&___nl__10);
#line 327
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 327
c_rt_lib0clear(&___nl__9);
#line 327
c_rt_lib0move(&___nl__9,___get_global_const(498));
#line 327
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 327
c_rt_lib0clear(&___nl__9);
#line 327
c_rt_lib0move(&___nl__9, string0lf());
#line 327
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 327
c_rt_lib0clear(&___nl__9);
#line 327
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__8));
#line 327
c_rt_lib0clear(&___nl__8);
#line 327
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 327
goto label_11;
#line 327
label_42:
#line 327
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0clear(&___nl__3);
#line 327
c_rt_lib0clear(&___nl__4);
#line 327
c_rt_lib0clear(&___nl__5);
#line 327
c_rt_lib0clear(&___nl__6);
#line 327
c_rt_lib0clear(&___nl__7);
#line 329
c_rt_lib0clear(&___nl__0);
#line 329
return ___nl__1;
#line 329
c_rt_lib0clear(&___nl__1);
#line 329
c_rt_lib0clear(&___nl__0);
#line 329
return NULL;
}

ImmT generator_java_priv0print_hash_name(){
return generator_java_priv0__const__sing(3);}
ImmT generator_java_priv0print_hash_name0cal() {
ImmT ___nl__0 = NULL;
#line 333
c_rt_lib0move(&___nl__0,___get_global_const(549));
#line 333
return ___nl__0;
#line 333
c_rt_lib0clear(&___nl__0);
#line 333
return NULL;
}

ImmT generator_java_priv0print_get_hash_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 337
c_rt_lib0move(&___nl__1,___get_global_const(550));
#line 337
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 337
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_getter(___nl__3));
#line 337
c_rt_lib0clear(&___nl__3);
#line 337
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 337
c_rt_lib0clear(&___nl__2);
#line 337
c_rt_lib0move(&___nl__2,___get_global_const(260));
#line 337
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 337
c_rt_lib0clear(&___nl__2);
#line 337
c_rt_lib0move(&___nl__2, generator_java_priv0print_getter());
#line 337
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 337
c_rt_lib0clear(&___nl__2);
#line 337
c_rt_lib0move(&___nl__2,___get_global_const(551));
#line 337
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 337
c_rt_lib0clear(&___nl__2);
#line 338
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 338
c_rt_lib0move(&___nl__2, generator_java_priv0escape_string(___nl__3));
#line 338
c_rt_lib0clear(&___nl__3);
#line 338
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 338
c_rt_lib0clear(&___nl__2);
#line 338
c_rt_lib0move(&___nl__2,___get_global_const(552));
#line 338
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 338
c_rt_lib0clear(&___nl__2);
#line 338
c_rt_lib0clear(&___nl__0);
#line 338
return ___nl__1;
#line 338
c_rt_lib0clear(&___nl__1);
#line 338
c_rt_lib0clear(&___nl__0);
#line 338
return NULL;
}

ImmT generator_java_priv0print_set_hash_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 342
c_rt_lib0move(&___nl__1,___get_global_const(550));
#line 342
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 342
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_getter(___nl__3));
#line 342
c_rt_lib0clear(&___nl__3);
#line 342
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 342
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0move(&___nl__2,___get_global_const(260));
#line 342
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 342
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0move(&___nl__2, generator_java_priv0print_getter());
#line 342
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 342
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0move(&___nl__2,___get_global_const(541));
#line 342
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 342
c_rt_lib0clear(&___nl__2);
#line 343
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 343
c_rt_lib0move(&___nl__2, generator_java_priv0escape_string(___nl__3));
#line 343
c_rt_lib0clear(&___nl__3);
#line 343
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 343
c_rt_lib0clear(&___nl__2);
#line 343
c_rt_lib0move(&___nl__2,___get_global_const(553));
#line 343
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 343
c_rt_lib0clear(&___nl__2);
#line 344
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 344
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_getter(___nl__3));
#line 344
c_rt_lib0clear(&___nl__3);
#line 344
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 344
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 344
c_rt_lib0clear(&___nl__3);
#line 344
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 344
c_rt_lib0clear(&___nl__2);
#line 345
c_rt_lib0clear(&___nl__0);
#line 345
return ___nl__1;
#line 345
c_rt_lib0clear(&___nl__1);
#line 345
c_rt_lib0clear(&___nl__0);
#line 345
return NULL;
}

ImmT generator_java_priv0print_ov_mk(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 349
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 350
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 350
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(288)));
#line 350
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 350
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 350
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 350
c_rt_lib0move(&___nl__4,___get_global_const(7));
#line 350
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 350
c_rt_lib0clear(&___nl__4);
#line 350
label_9:
#line 350
c_rt_lib0clear(&___nl__3);
#line 350
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 350
if(c_rt_lib0check_true_native(___nl__2)){ goto label_17;}
#line 351
c_rt_lib0move(&___nl__3,___get_global_const(554));
#line 351
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 351
c_rt_lib0clear(&___nl__3);
#line 352
goto label_81;
#line 352
label_17:
#line 352
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 352
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(288)));
#line 352
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 352
if(c_rt_lib0check_true_native(___nl__3)){ goto label_26;}
#line 352
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 352
c_rt_lib0move(&___nl__4,___get_global_const(8));
#line 352
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 352
c_rt_lib0clear(&___nl__4);
#line 352
label_26:
#line 352
c_rt_lib0clear(&___nl__3);
#line 352
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 352
if(c_rt_lib0check_true_native(___nl__2)){ goto label_34;}
#line 353
c_rt_lib0move(&___nl__3,___get_global_const(555));
#line 353
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 353
c_rt_lib0clear(&___nl__3);
#line 354
goto label_81;
#line 354
label_34:
#line 355
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 355
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(233)));
#line 355
if(c_rt_lib0check_true_native(___nl__4)){ goto label_43;}
#line 358
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(288)));
#line 358
if(c_rt_lib0check_true_native(___nl__4)){ goto label_64;}
#line 358
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 358
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 358
nl_die_arg(___nl__4);
#line 355
label_43:
#line 355
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(233)));
#line 356
c_rt_lib0move(&___nl__6,___get_global_const(556));
#line 356
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 356
c_rt_lib0move(&___nl__7, generator_java_priv0escape_string(___nl__8));
#line 356
c_rt_lib0clear(&___nl__8);
#line 356
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 356
c_rt_lib0clear(&___nl__7);
#line 356
c_rt_lib0move(&___nl__7,___get_global_const(553));
#line 356
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 356
c_rt_lib0clear(&___nl__7);
#line 357
c_rt_lib0move(&___nl__7, generator_java_priv0print_register(___nl__5));
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 357
c_rt_lib0clear(&___nl__7);
#line 357
c_rt_lib0move(&___nl__7,___get_global_const(260));
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 357
c_rt_lib0clear(&___nl__7);
#line 357
c_rt_lib0copy(&___nl__1, ___nl__6);
#line 357
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0clear(&___nl__5);
#line 358
goto label_77;
#line 358
label_64:
#line 359
c_rt_lib0move(&___nl__5,___get_global_const(557));
#line 359
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 359
c_rt_lib0move(&___nl__6, generator_java_priv0escape_string(___nl__7));
#line 359
c_rt_lib0clear(&___nl__7);
#line 359
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 359
c_rt_lib0clear(&___nl__6);
#line 359
c_rt_lib0move(&___nl__6,___get_global_const(552));
#line 359
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 359
c_rt_lib0clear(&___nl__6);
#line 359
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 359
c_rt_lib0clear(&___nl__5);
#line 360
goto label_77;
#line 360
label_77:
#line 360
c_rt_lib0clear(&___nl__3);
#line 360
c_rt_lib0clear(&___nl__4);
#line 361
goto label_81;
#line 361
label_81:
#line 361
c_rt_lib0clear(&___nl__2);
#line 362
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(197)));
#line 362
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_setter(___nl__3, ___nl__1));
#line 362
c_rt_lib0clear(&___nl__3);
#line 362
c_rt_lib0move(&___nl__3,___get_global_const(360));
#line 362
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 362
c_rt_lib0clear(&___nl__3);
#line 362
c_rt_lib0clear(&___nl__0);
#line 362
c_rt_lib0clear(&___nl__1);
#line 362
return ___nl__2;
#line 362
c_rt_lib0clear(&___nl__2);
#line 362
c_rt_lib0clear(&___nl__1);
#line 362
c_rt_lib0clear(&___nl__0);
#line 362
return NULL;
}

ImmT generator_java_priv0print_register(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 366
c_rt_lib0move(&___nl__1,___get_global_const(347));
#line 366
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 366
c_rt_lib0clear(&___nl__0);
#line 366
return ___nl__1;
#line 366
c_rt_lib0clear(&___nl__1);
#line 366
c_rt_lib0clear(&___nl__0);
#line 366
return NULL;
}

ImmT generator_java_priv0print_register_getter(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 370
c_rt_lib0move(&___nl__1, generator_java_priv0print_register(___nl__0));
#line 370
c_rt_lib0move(&___nl__2, generator_java_priv0print_getter());
#line 370
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 370
c_rt_lib0clear(&___nl__2);
#line 370
c_rt_lib0clear(&___nl__0);
#line 370
return ___nl__1;
#line 370
c_rt_lib0clear(&___nl__1);
#line 370
c_rt_lib0clear(&___nl__0);
#line 370
return NULL;
}

ImmT generator_java_priv0print_getter(){
return generator_java_priv0__const__sing(4);}
ImmT generator_java_priv0print_getter0cal() {
ImmT ___nl__0 = NULL;
#line 374
c_rt_lib0move(&___nl__0,___get_global_const(558));
#line 374
return ___nl__0;
#line 374
c_rt_lib0clear(&___nl__0);
#line 374
return NULL;
}

ImmT generator_java_priv0print_register_setter(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 378
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 378
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__0, ___nl__2));
#line 378
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 378
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 378
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 378
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 378
c_rt_lib0clear(&___nl__0);
#line 378
c_rt_lib0clear(&___nl__1);
#line 378
c_rt_lib0clear(&___nl__2);
#line 378
return ___nl__3;
#line 378
c_rt_lib0clear(&___nl__3);
#line 378
goto label_12;
#line 378
label_12:
#line 378
c_rt_lib0clear(&___nl__2);
#line 379
c_rt_lib0move(&___nl__2, generator_java_priv0print_register(___nl__0));
#line 379
c_rt_lib0move(&___nl__3,___get_global_const(559));
#line 379
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 379
c_rt_lib0clear(&___nl__3);
#line 379
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 379
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 379
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 379
c_rt_lib0clear(&___nl__3);
#line 379
c_rt_lib0clear(&___nl__0);
#line 379
c_rt_lib0clear(&___nl__1);
#line 379
return ___nl__2;
#line 379
c_rt_lib0clear(&___nl__2);
#line 379
c_rt_lib0clear(&___nl__0);
#line 379
c_rt_lib0clear(&___nl__1);
#line 379
return NULL;
}

ImmT generator_java_priv0print_return(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 383
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 384
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(198)));
#line 384
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 386
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(288)));
#line 386
if(c_rt_lib0check_true_native(___nl__2)){ goto label_21;}
#line 386
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 386
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 386
nl_die_arg(___nl__2);
#line 384
label_8:
#line 384
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(198)));
#line 385
c_rt_lib0move(&___nl__4,___get_global_const(394));
#line 385
c_rt_lib0move(&___nl__5, generator_java_priv0print_register_getter(___nl__3));
#line 385
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 385
c_rt_lib0clear(&___nl__5);
#line 385
c_rt_lib0move(&___nl__5,___get_global_const(360));
#line 385
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 385
c_rt_lib0clear(&___nl__5);
#line 385
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 385
c_rt_lib0clear(&___nl__4);
#line 385
c_rt_lib0clear(&___nl__3);
#line 386
goto label_26;
#line 386
label_21:
#line 387
c_rt_lib0move(&___nl__3,___get_global_const(560));
#line 387
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 387
c_rt_lib0clear(&___nl__3);
#line 388
goto label_26;
#line 388
label_26:
#line 388
c_rt_lib0clear(&___nl__2);
#line 389
c_rt_lib0move(&___nl__2,___get_global_const(561));
#line 389
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 389
c_rt_lib0clear(&___nl__0);
#line 389
c_rt_lib0clear(&___nl__1);
#line 389
return ___nl__2;
#line 389
c_rt_lib0clear(&___nl__2);
#line 389
c_rt_lib0clear(&___nl__1);
#line 389
c_rt_lib0clear(&___nl__0);
#line 389
return NULL;
}

ImmT generator_java_priv0print_una_op(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 393
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 394
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 394
c_rt_lib0move(&___nl__3,___get_global_const(294));
#line 394
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 394
c_rt_lib0clear(&___nl__3);
#line 394
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 394
if(c_rt_lib0check_true_native(___nl__2)){ goto label_19;}
#line 395
c_rt_lib0move(&___nl__3,___get_global_const(562));
#line 395
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 395
c_rt_lib0move(&___nl__4, generator_java_priv0print_register(___nl__5));
#line 395
c_rt_lib0clear(&___nl__5);
#line 395
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 395
c_rt_lib0clear(&___nl__4);
#line 395
c_rt_lib0move(&___nl__4,___get_global_const(512));
#line 395
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 395
c_rt_lib0clear(&___nl__4);
#line 395
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 395
c_rt_lib0clear(&___nl__3);
#line 396
goto label_44;
#line 396
label_19:
#line 397
c_rt_lib0move(&___nl__3,___get_global_const(531));
#line 397
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 397
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 397
c_rt_lib0clear(&___nl__4);
#line 397
c_rt_lib0move(&___nl__4,___get_global_const(514));
#line 397
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 397
c_rt_lib0clear(&___nl__4);
#line 397
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 397
c_rt_lib0move(&___nl__4, generator_java_priv0print_register_getter(___nl__5));
#line 397
c_rt_lib0clear(&___nl__5);
#line 397
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 397
c_rt_lib0clear(&___nl__4);
#line 397
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 397
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 397
c_rt_lib0clear(&___nl__4);
#line 398
c_rt_lib0move(&___nl__4, generator_java_priv0print_getter());
#line 398
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 398
c_rt_lib0clear(&___nl__4);
#line 398
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 398
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 398
c_rt_lib0clear(&___nl__4);
#line 398
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 398
c_rt_lib0clear(&___nl__3);
#line 399
goto label_44;
#line 399
label_44:
#line 399
c_rt_lib0clear(&___nl__2);
#line 400
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(197)));
#line 400
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_setter(___nl__3, ___nl__1));
#line 400
c_rt_lib0clear(&___nl__3);
#line 400
c_rt_lib0move(&___nl__3,___get_global_const(360));
#line 400
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 400
c_rt_lib0clear(&___nl__3);
#line 400
c_rt_lib0clear(&___nl__0);
#line 400
c_rt_lib0clear(&___nl__1);
#line 400
return ___nl__2;
#line 400
c_rt_lib0clear(&___nl__2);
#line 400
c_rt_lib0clear(&___nl__1);
#line 400
c_rt_lib0clear(&___nl__0);
#line 400
return NULL;
}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void generator_java0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}
ImmT generator_java_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_java_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = generator_java_priv0print_package_name0cal();
	break;
case 1:
	___const__[1] = generator_java_priv0print_class_end0cal();
	break;
case 2:
	___const__[2] = generator_java_priv0print_int_value0cal();
	break;
case 3:
	___const__[3] = generator_java_priv0print_hash_name0cal();
	break;
case 4:
	___const__[4] = generator_java_priv0print_getter0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
