
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
void generator_java_priv0__const__init();
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
generator_java_priv0__const__init();
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
c_rt_lib0move(&___nl__1,___get_global_const(0));
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
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(430)));
#line 19
c_rt_lib0move(&___nl__2, generator_java_priv0print_class_begin(___nl__3));
#line 19
c_rt_lib0clear(&___nl__3);
#line 19
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 19
c_rt_lib0clear(&___nl__2);
#line 20
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(75)));
#line 20
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 20
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 20
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 20
label_3:
#line 20
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 20
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 20
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(430)));
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
goto label_3;
#line 20
label_1:
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
generator_java_priv0__const__init();
return generator_java_priv0__const__sing(0);}
ImmT generator_java_priv0print_package_name0cal() {
generator_java_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 26
c_rt_lib0move(&___nl__0,___get_global_const(431));
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
generator_java_priv0__const__init();
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
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 31
c_rt_lib0move(&___nl__2,___get_global_const(432));
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
c_rt_lib0move(&___nl__2,___get_global_const(433));
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
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(336)));
#line 33
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 33
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 33
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 33
label_3:
#line 33
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 33
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 34
c_rt_lib0move(&___nl__8,___get_global_const(434));
#line 34
c_rt_lib0move(&___nl__9, generator_java_priv0get_class_name(___nl__3));
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 34
c_rt_lib0clear(&___nl__9);
#line 34
c_rt_lib0move(&___nl__9,___get_global_const(311));
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
goto label_3;
#line 35
label_1:
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
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 40
c_rt_lib0move(&___nl__1,___get_global_const(435));
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
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 44
c_rt_lib0move(&___nl__1,___get_global_const(436));
#line 44
c_rt_lib0move(&___nl__2, generator_java_priv0get_class_name(___nl__0));
#line 44
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0move(&___nl__2,___get_global_const(377));
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
generator_java_priv0__const__init();
return generator_java_priv0__const__sing(1);}
ImmT generator_java_priv0print_class_end0cal() {
generator_java_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 48
c_rt_lib0move(&___nl__0, string0lf());
#line 48
c_rt_lib0move(&___nl__1,___get_global_const(169));
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
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 52
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 53
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(328)));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(329)));
#line 53
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(330)));
#line 54
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 54
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 54
nl_die_arg(___nl__3);
#line 53
label_2:
#line 54
goto label_1;
#line 54
label_3:
#line 55
c_rt_lib0move(&___nl__4,___get_global_const(389));
#line 55
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 55
c_rt_lib0clear(&___nl__4);
#line 56
goto label_1;
#line 56
label_1:
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0clear(&___nl__3);
#line 57
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 57
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 57
c_rt_lib0move(&___nl__3,___get_global_const(437));
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
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 61
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 62
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(328)));
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(329)));
#line 62
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(330)));
#line 64
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 64
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 64
nl_die_arg(___nl__3);
#line 62
label_2:
#line 63
c_rt_lib0move(&___nl__4,___get_global_const(438));
#line 63
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 63
c_rt_lib0clear(&___nl__4);
#line 64
goto label_1;
#line 64
label_3:
#line 65
c_rt_lib0move(&___nl__4,___get_global_const(439));
#line 65
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 65
c_rt_lib0clear(&___nl__4);
#line 66
goto label_1;
#line 66
label_1:
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__3);
#line 67
c_rt_lib0move(&___nl__2,___get_global_const(440));
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
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 71
c_rt_lib0move(&___nl__2,___get_global_const(80));
#line 71
c_rt_lib0move(&___nl__3,___get_global_const(181));
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
c_rt_lib0move(&___nl__2,___get_global_const(150));
#line 72
c_rt_lib0move(&___nl__3,___get_global_const(186));
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
c_rt_lib0move(&___nl__3,___get_global_const(153));
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
c_rt_lib0move(&___nl__3,___get_global_const(441));
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
c_rt_lib0move(&___nl__3,___get_global_const(189));
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
generator_java_priv0__const__init();
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
#line 77
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 77
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 77
c_rt_lib0clear(&___nl__2);
#line 77
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 77
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 77
c_rt_lib0clear(&___nl__2);
#line 77
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 77
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 77
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 77
c_rt_lib0clear(&___nl__0);
#line 77
c_rt_lib0clear(&___nl__1);
#line 77
return ___nl__2;
#line 77
c_rt_lib0clear(&___nl__2);
#line 77
goto label_2;
#line 77
label_2:
#line 77
c_rt_lib0clear(&___nl__1);
#line 78
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(212)));
#line 78
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(141)));
#line 78
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 78
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 78
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 78
c_rt_lib0clear(&___nl__0);
#line 78
c_rt_lib0clear(&___nl__1);
#line 78
return ___nl__2;
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
goto label_4;
#line 78
label_4:
#line 78
c_rt_lib0clear(&___nl__1);
#line 79
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 81
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(380)));
#line 81
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 81
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 81
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 81
label_7:
#line 81
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 81
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 81
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 82
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 83
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 83
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(217)));
#line 83
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 83
if(c_rt_lib0check_true_native(___nl__10)){ goto label_9;}
#line 84
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 84
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(217)));
#line 85
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(385)));
#line 85
c_rt_lib0move(&___nl__13,___get_global_const(386));
#line 85
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 85
c_rt_lib0clear(&___nl__13);
#line 85
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 85
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 85
if(c_rt_lib0check_true_native(___nl__12)){ goto label_11;}
#line 85
c_rt_lib0clear(&___nl__9);
#line 85
c_rt_lib0clear(&___nl__10);
#line 85
c_rt_lib0clear(&___nl__11);
#line 85
c_rt_lib0clear(&___nl__12);
#line 85
goto label_6;
#line 85
goto label_11;
#line 85
label_11:
#line 85
c_rt_lib0clear(&___nl__12);
#line 86
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(257)));
#line 86
c_rt_lib0move(&___nl__13,___get_global_const(288));
#line 86
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 86
c_rt_lib0clear(&___nl__13);
#line 86
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 86
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 86
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 86
c_rt_lib0clear(&___nl__9);
#line 86
c_rt_lib0clear(&___nl__10);
#line 86
c_rt_lib0clear(&___nl__11);
#line 86
c_rt_lib0clear(&___nl__12);
#line 86
goto label_6;
#line 86
goto label_13;
#line 86
label_13:
#line 86
c_rt_lib0clear(&___nl__12);
#line 87
c_rt_lib0move(&___nl__12, c_rt_lib0get_true());
#line 87
c_rt_lib0copy(&___nl__1, ___nl__12);
#line 87
c_rt_lib0clear(&___nl__12);
#line 88
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(233)));
#line 88
c_rt_lib0copy(&___nl__2, ___nl__12);
#line 88
c_rt_lib0clear(&___nl__12);
#line 88
c_rt_lib0clear(&___nl__11);
#line 89
goto label_8;
#line 89
label_9:
#line 89
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 89
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(210)));
#line 89
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 89
if(c_rt_lib0check_true_native(___nl__10)){ goto label_14;}
#line 90
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 90
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 90
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 90
if(c_rt_lib0check_true_native(___nl__11)){ goto label_16;}
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 90
c_rt_lib0clear(&___nl__0);
#line 90
c_rt_lib0clear(&___nl__1);
#line 90
c_rt_lib0clear(&___nl__2);
#line 90
c_rt_lib0clear(&___nl__3);
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
c_rt_lib0clear(&___nl__9);
#line 90
c_rt_lib0clear(&___nl__10);
#line 90
c_rt_lib0clear(&___nl__11);
#line 90
return ___nl__12;
#line 90
c_rt_lib0clear(&___nl__12);
#line 90
goto label_16;
#line 90
label_16:
#line 90
c_rt_lib0clear(&___nl__11);
#line 91
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 91
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(210)));
#line 92
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 92
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(234)));
#line 92
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 92
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 92
if(c_rt_lib0check_true_native(___nl__12)){ goto label_18;}
#line 92
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 92
c_rt_lib0clear(&___nl__0);
#line 92
c_rt_lib0clear(&___nl__1);
#line 92
c_rt_lib0clear(&___nl__2);
#line 92
c_rt_lib0clear(&___nl__3);
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0clear(&___nl__5);
#line 92
c_rt_lib0clear(&___nl__6);
#line 92
c_rt_lib0clear(&___nl__7);
#line 92
c_rt_lib0clear(&___nl__8);
#line 92
c_rt_lib0clear(&___nl__9);
#line 92
c_rt_lib0clear(&___nl__10);
#line 92
c_rt_lib0clear(&___nl__11);
#line 92
c_rt_lib0clear(&___nl__12);
#line 92
return ___nl__13;
#line 92
c_rt_lib0clear(&___nl__13);
#line 92
goto label_18;
#line 92
label_18:
#line 92
c_rt_lib0clear(&___nl__12);
#line 93
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 93
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(234)));
#line 93
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__2));
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
return ___nl__12;
#line 93
c_rt_lib0clear(&___nl__12);
#line 93
c_rt_lib0clear(&___nl__11);
#line 94
goto label_8;
#line 94
label_14:
#line 94
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 94
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(230)));
#line 94
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 94
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 95
goto label_8;
#line 95
label_19:
#line 95
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 95
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(195)));
#line 95
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 95
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 96
goto label_8;
#line 96
label_20:
#line 97
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 97
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 97
if(c_rt_lib0check_true_native(___nl__11)){ goto label_22;}
#line 97
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
c_rt_lib0clear(&___nl__1);
#line 97
c_rt_lib0clear(&___nl__2);
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
c_rt_lib0clear(&___nl__9);
#line 97
c_rt_lib0clear(&___nl__10);
#line 97
c_rt_lib0clear(&___nl__11);
#line 97
return ___nl__12;
#line 97
c_rt_lib0clear(&___nl__12);
#line 97
goto label_22;
#line 97
label_22:
#line 97
c_rt_lib0clear(&___nl__11);
#line 98
goto label_8;
#line 98
label_8:
#line 98
c_rt_lib0clear(&___nl__10);
#line 98
c_rt_lib0clear(&___nl__9);
#line 98
label_6:
#line 99
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 99
goto label_7;
#line 99
label_5:
#line 99
c_rt_lib0clear(&___nl__3);
#line 99
c_rt_lib0clear(&___nl__4);
#line 99
c_rt_lib0clear(&___nl__5);
#line 99
c_rt_lib0clear(&___nl__6);
#line 99
c_rt_lib0clear(&___nl__7);
#line 99
c_rt_lib0clear(&___nl__8);
#line 100
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 100
c_rt_lib0clear(&___nl__0);
#line 100
c_rt_lib0clear(&___nl__1);
#line 100
c_rt_lib0clear(&___nl__2);
#line 100
return ___nl__3;
#line 100
c_rt_lib0clear(&___nl__3);
#line 100
c_rt_lib0clear(&___nl__1);
#line 100
c_rt_lib0clear(&___nl__2);
#line 100
c_rt_lib0clear(&___nl__0);
#line 100
return NULL;
}

ImmT generator_java_priv0print_function_or_singleton(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_java_priv0__const__init();
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
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 106
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 107
c_rt_lib0move(&___nl__4,___get_global_const(442));
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 107
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 107
c_rt_lib0clear(&___nl__5);
#line 107
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 107
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(76), ___nl__5);
#line 107
c_rt_lib0clear(&___nl__4);
#line 107
c_rt_lib0clear(&___nl__5);
#line 108
c_rt_lib0move(&___nl__4, generator_java_priv0get_function_name(___nl__3));
#line 109
c_rt_lib0move(&___nl__5,___get_global_const(443));
#line 109
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 111
c_rt_lib0move(&___nl__6, generator_java_priv0print_function(___nl__3, ___nl__1));
#line 113
c_rt_lib0move(&___nl__7,___get_global_const(444));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__5));
#line 113
c_rt_lib0move(&___nl__8,___get_global_const(445));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0move(&___nl__8, string0lf());
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0move(&___nl__8, generator_java_priv0get_function_declaration(___nl__0));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0move(&___nl__8,___get_global_const(446));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__5));
#line 113
c_rt_lib0move(&___nl__8,___get_global_const(447));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__5));
#line 113
c_rt_lib0move(&___nl__8,___get_global_const(448));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 113
c_rt_lib0move(&___nl__8,___get_global_const(449));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__5));
#line 113
c_rt_lib0move(&___nl__8,___get_global_const(450));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 113
c_rt_lib0clear(&___nl__7);
#line 120
c_rt_lib0clear(&___nl__0);
#line 120
c_rt_lib0clear(&___nl__1);
#line 120
c_rt_lib0clear(&___nl__2);
#line 120
c_rt_lib0clear(&___nl__3);
#line 120
c_rt_lib0clear(&___nl__4);
#line 120
c_rt_lib0clear(&___nl__5);
#line 120
return ___nl__6;
#line 120
c_rt_lib0clear(&___nl__3);
#line 120
c_rt_lib0clear(&___nl__4);
#line 120
c_rt_lib0clear(&___nl__5);
#line 120
c_rt_lib0clear(&___nl__6);
#line 121
goto label_1;
#line 121
label_2:
#line 122
c_rt_lib0move(&___nl__3, generator_java_priv0print_function(___nl__0, ___nl__1));
#line 122
c_rt_lib0clear(&___nl__0);
#line 122
c_rt_lib0clear(&___nl__1);
#line 122
c_rt_lib0clear(&___nl__2);
#line 122
return ___nl__3;
#line 122
c_rt_lib0clear(&___nl__3);
#line 123
goto label_1;
#line 123
label_1:
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0clear(&___nl__0);
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
return NULL;
}

ImmT generator_java_priv0print_function(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_java_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 127
c_rt_lib0move(&___nl__2, string0lf());
#line 127
c_rt_lib0move(&___nl__3, generator_java_priv0get_function_declaration(___nl__0));
#line 127
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 127
c_rt_lib0clear(&___nl__3);
#line 127
c_rt_lib0move(&___nl__3,___get_global_const(322));
#line 127
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 127
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 128
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 128
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 128
label_3:
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 128
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 129
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 129
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__4, ___nl__7));
#line 129
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 129
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 129
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 129
c_rt_lib0move(&___nl__8,___get_global_const(188));
#line 129
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__8));
#line 129
c_rt_lib0clear(&___nl__8);
#line 129
goto label_5;
#line 129
label_5:
#line 129
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0move(&___nl__7,___get_global_const(451));
#line 130
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 130
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__7));
#line 130
c_rt_lib0clear(&___nl__7);
#line 131
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 131
goto label_3;
#line 131
label_1:
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0clear(&___nl__4);
#line 131
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0clear(&___nl__6);
#line 132
c_rt_lib0move(&___nl__3,___get_global_const(452));
#line 132
c_rt_lib0move(&___nl__4, string0lf());
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 132
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 132
c_rt_lib0clear(&___nl__3);
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 133
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 133
c_rt_lib0clear(&___nl__4);
#line 133
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 133
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 133
label_8:
#line 133
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 133
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 134
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 134
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__4));
#line 134
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(234)));
#line 134
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 136
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 136
if(c_rt_lib0check_true_native(___nl__8)){ goto label_11;}
#line 136
c_rt_lib0move(&___nl__8,___get_global_const(74));
#line 136
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 136
nl_die_arg(___nl__8);
#line 134
label_10:
#line 135
c_rt_lib0move(&___nl__9,___get_global_const(453));
#line 135
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 135
c_rt_lib0move(&___nl__10,___get_global_const(454));
#line 135
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 135
c_rt_lib0clear(&___nl__10);
#line 135
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 135
c_rt_lib0move(&___nl__10, generator_java_priv0print_getter());
#line 135
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 135
c_rt_lib0clear(&___nl__10);
#line 135
c_rt_lib0move(&___nl__10,___get_global_const(455));
#line 135
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 135
c_rt_lib0clear(&___nl__10);
#line 135
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 135
c_rt_lib0clear(&___nl__9);
#line 136
goto label_9;
#line 136
label_11:
#line 137
c_rt_lib0move(&___nl__9,___get_global_const(453));
#line 137
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 137
c_rt_lib0move(&___nl__10,___get_global_const(456));
#line 137
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 137
c_rt_lib0clear(&___nl__10);
#line 137
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 137
c_rt_lib0move(&___nl__10,___get_global_const(311));
#line 137
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 137
c_rt_lib0clear(&___nl__10);
#line 137
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 137
c_rt_lib0clear(&___nl__9);
#line 138
goto label_9;
#line 138
label_9:
#line 138
c_rt_lib0clear(&___nl__7);
#line 138
c_rt_lib0clear(&___nl__8);
#line 139
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 139
goto label_8;
#line 139
label_6:
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0clear(&___nl__5);
#line 139
c_rt_lib0clear(&___nl__6);
#line 140
c_rt_lib0move(&___nl__3, string0lf());
#line 140
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 140
c_rt_lib0clear(&___nl__3);
#line 141
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 141
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 141
c_rt_lib0clear(&___nl__4);
#line 141
label_13:
#line 141
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(378)));
#line 141
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__4));
#line 141
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 141
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 142
c_rt_lib0move(&___nl__5,___get_global_const(453));
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 142
c_rt_lib0move(&___nl__6,___get_global_const(457));
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0move(&___nl__6, string0lf());
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 142
c_rt_lib0clear(&___nl__5);
#line 143
goto label_13;
#line 143
label_12:
#line 143
c_rt_lib0clear(&___nl__3);
#line 143
c_rt_lib0clear(&___nl__4);
#line 144
c_rt_lib0move(&___nl__3,___get_global_const(458));
#line 144
c_rt_lib0move(&___nl__4, generator_java_priv0print_hash_name());
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 144
c_rt_lib0clear(&___nl__4);
#line 144
c_rt_lib0move(&___nl__4,___get_global_const(311));
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 144
c_rt_lib0clear(&___nl__4);
#line 144
c_rt_lib0move(&___nl__4, string0lf());
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 144
c_rt_lib0clear(&___nl__4);
#line 144
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 144
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0move(&___nl__3,___get_global_const(459));
#line 145
c_rt_lib0move(&___nl__4, string0lf());
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 145
c_rt_lib0clear(&___nl__4);
#line 145
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 145
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(380)));
#line 146
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 146
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 146
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 146
label_17:
#line 146
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 146
if(c_rt_lib0check_true_native(___nl__8)){ goto label_15;}
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 146
c_rt_lib0move(&___nl__9, generator_java_priv0print_command(___nl__1, ___nl__4));
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 146
c_rt_lib0clear(&___nl__9);
#line 146
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 146
goto label_17;
#line 146
label_15:
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0clear(&___nl__5);
#line 146
c_rt_lib0clear(&___nl__6);
#line 146
c_rt_lib0clear(&___nl__7);
#line 146
c_rt_lib0clear(&___nl__8);
#line 147
c_rt_lib0move(&___nl__3,___get_global_const(460));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__3));
#line 147
c_rt_lib0move(&___nl__4, string0lf());
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
c_rt_lib0clear(&___nl__0);
#line 147
c_rt_lib0clear(&___nl__1);
#line 147
c_rt_lib0clear(&___nl__2);
#line 147
return ___nl__3;
#line 147
c_rt_lib0clear(&___nl__3);
#line 147
c_rt_lib0clear(&___nl__2);
#line 147
c_rt_lib0clear(&___nl__0);
#line 147
c_rt_lib0clear(&___nl__1);
#line 147
return NULL;
}

ImmT generator_java_priv0print_command(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_java_priv0__const__init();
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
#line 152
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(209)));
#line 152
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(215)));
#line 152
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 154
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(216)));
#line 154
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 157
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(217)));
#line 157
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 159
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(71)));
#line 159
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 161
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(218)));
#line 161
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 163
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(219)));
#line 163
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 165
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(220)));
#line 165
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 167
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(221)));
#line 167
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 169
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(210)));
#line 169
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 171
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(229)));
#line 171
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 173
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(222)));
#line 173
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 175
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(223)));
#line 175
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 177
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(224)));
#line 177
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 181
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(225)));
#line 181
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 185
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(226)));
#line 185
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 187
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(227)));
#line 187
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 190
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(228)));
#line 190
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 192
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(230)));
#line 192
if(c_rt_lib0check_true_native(___nl__4)){ goto label_19;}
#line 194
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(231)));
#line 194
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 196
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(232)));
#line 196
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 198
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(195)));
#line 198
if(c_rt_lib0check_true_native(___nl__4)){ goto label_22;}
#line 198
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 198
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 198
nl_die_arg(___nl__4);
#line 152
label_2:
#line 152
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(215)));
#line 153
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 153
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 153
c_rt_lib0move(&___nl__8, generator_java_priv0print_arr(___nl__9));
#line 153
c_rt_lib0clear(&___nl__9);
#line 153
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 153
c_rt_lib0clear(&___nl__8);
#line 153
c_rt_lib0clear(&___nl__7);
#line 153
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 153
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 153
c_rt_lib0clear(&___nl__7);
#line 153
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 153
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0clear(&___nl__5);
#line 154
goto label_1;
#line 154
label_3:
#line 154
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(216)));
#line 155
c_rt_lib0move(&___nl__6, generator_java_priv0print_hash(___nl__5));
#line 155
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 155
c_rt_lib0clear(&___nl__6);
#line 156
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 156
c_rt_lib0move(&___nl__8,___get_global_const(461));
#line 156
c_rt_lib0move(&___nl__9, generator_java_priv0print_hash_name());
#line 156
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 156
c_rt_lib0clear(&___nl__9);
#line 156
c_rt_lib0move(&___nl__9,___get_global_const(176));
#line 156
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 156
c_rt_lib0clear(&___nl__9);
#line 156
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 156
c_rt_lib0clear(&___nl__8);
#line 156
c_rt_lib0clear(&___nl__7);
#line 156
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 156
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 156
c_rt_lib0clear(&___nl__7);
#line 156
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 156
c_rt_lib0clear(&___nl__6);
#line 156
c_rt_lib0clear(&___nl__5);
#line 157
goto label_1;
#line 157
label_4:
#line 157
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(217)));
#line 158
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 158
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(257)));
#line 158
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(385)));
#line 158
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(73)));
#line 158
c_rt_lib0move(&___nl__8, generator_java_priv0print_call(___nl__0, ___nl__9, ___nl__10, ___nl__11));
#line 158
c_rt_lib0clear(&___nl__11);
#line 158
c_rt_lib0clear(&___nl__10);
#line 158
c_rt_lib0clear(&___nl__9);
#line 158
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 158
c_rt_lib0clear(&___nl__8);
#line 158
c_rt_lib0clear(&___nl__7);
#line 158
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 158
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 158
c_rt_lib0clear(&___nl__7);
#line 158
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 158
c_rt_lib0clear(&___nl__6);
#line 158
c_rt_lib0clear(&___nl__5);
#line 159
goto label_1;
#line 159
label_5:
#line 159
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(71)));
#line 160
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 160
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(99)));
#line 160
c_rt_lib0move(&___nl__9, generator_java_priv0get_class_name(___nl__10));
#line 160
c_rt_lib0clear(&___nl__10);
#line 160
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(76)));
#line 160
c_rt_lib0move(&___nl__11,___get_global_const(437));
#line 160
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 160
c_rt_lib0clear(&___nl__11);
#line 160
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(99), ___nl__9, ___get_global_const(76), ___nl__10));
#line 160
c_rt_lib0clear(&___nl__9);
#line 160
c_rt_lib0clear(&___nl__10);
#line 160
c_rt_lib0move(&___nl__6, generator_java_priv0print_const_hash(___nl__7, ___nl__8));
#line 160
c_rt_lib0clear(&___nl__8);
#line 160
c_rt_lib0clear(&___nl__7);
#line 160
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 160
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 160
c_rt_lib0clear(&___nl__7);
#line 160
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0clear(&___nl__5);
#line 161
goto label_1;
#line 161
label_6:
#line 161
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(218)));
#line 162
c_rt_lib0move(&___nl__6, generator_java_priv0print_una_op(___nl__5));
#line 162
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 162
c_rt_lib0clear(&___nl__6);
#line 162
c_rt_lib0clear(&___nl__5);
#line 163
goto label_1;
#line 163
label_7:
#line 163
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(219)));
#line 164
c_rt_lib0move(&___nl__6, generator_java_priv0print_bin_op(___nl__5));
#line 164
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 164
c_rt_lib0clear(&___nl__6);
#line 164
c_rt_lib0clear(&___nl__5);
#line 165
goto label_1;
#line 165
label_8:
#line 165
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(220)));
#line 166
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 166
c_rt_lib0move(&___nl__8,___get_global_const(462));
#line 166
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 166
c_rt_lib0move(&___nl__9, generator_java_priv0print_register(___nl__10));
#line 166
c_rt_lib0clear(&___nl__10);
#line 166
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 166
c_rt_lib0clear(&___nl__9);
#line 166
c_rt_lib0move(&___nl__9,___get_global_const(463));
#line 166
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 166
c_rt_lib0clear(&___nl__9);
#line 166
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(72)));
#line 166
c_rt_lib0move(&___nl__9, generator_java_priv0escape_string(___nl__10));
#line 166
c_rt_lib0clear(&___nl__10);
#line 166
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 166
c_rt_lib0clear(&___nl__9);
#line 166
c_rt_lib0move(&___nl__9,___get_global_const(464));
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
c_rt_lib0move(&___nl__7,___get_global_const(311));
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
goto label_1;
#line 167
label_9:
#line 167
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(221)));
#line 168
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 168
c_rt_lib0move(&___nl__8,___get_global_const(465));
#line 168
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 168
c_rt_lib0move(&___nl__9, generator_java_priv0print_register(___nl__10));
#line 168
c_rt_lib0clear(&___nl__10);
#line 168
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 168
c_rt_lib0clear(&___nl__9);
#line 168
c_rt_lib0move(&___nl__9,___get_global_const(463));
#line 168
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 168
c_rt_lib0clear(&___nl__9);
#line 168
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(72)));
#line 168
c_rt_lib0move(&___nl__9, generator_java_priv0escape_string(___nl__10));
#line 168
c_rt_lib0clear(&___nl__10);
#line 168
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 168
c_rt_lib0clear(&___nl__9);
#line 168
c_rt_lib0move(&___nl__9,___get_global_const(464));
#line 168
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 168
c_rt_lib0clear(&___nl__9);
#line 168
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 168
c_rt_lib0clear(&___nl__8);
#line 168
c_rt_lib0clear(&___nl__7);
#line 168
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 168
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 168
c_rt_lib0clear(&___nl__7);
#line 168
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 168
c_rt_lib0clear(&___nl__6);
#line 168
c_rt_lib0clear(&___nl__5);
#line 169
goto label_1;
#line 169
label_10:
#line 169
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(210)));
#line 170
c_rt_lib0move(&___nl__6, generator_java_priv0print_return(___nl__5));
#line 170
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 170
c_rt_lib0clear(&___nl__6);
#line 170
c_rt_lib0clear(&___nl__5);
#line 171
goto label_1;
#line 171
label_11:
#line 171
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(229)));
#line 172
c_rt_lib0move(&___nl__6,___get_global_const(466));
#line 172
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 172
c_rt_lib0clear(&___nl__6);
#line 172
c_rt_lib0clear(&___nl__5);
#line 173
goto label_1;
#line 173
label_12:
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(222)));
#line 174
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 174
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 174
c_rt_lib0move(&___nl__8, generator_java_priv0print_register_getter(___nl__9));
#line 174
c_rt_lib0clear(&___nl__9);
#line 174
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 174
c_rt_lib0clear(&___nl__8);
#line 174
c_rt_lib0clear(&___nl__7);
#line 174
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 174
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 174
c_rt_lib0clear(&___nl__7);
#line 174
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 174
c_rt_lib0clear(&___nl__6);
#line 174
c_rt_lib0clear(&___nl__5);
#line 175
goto label_1;
#line 175
label_13:
#line 175
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(223)));
#line 176
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 176
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 176
c_rt_lib0move(&___nl__9, generator_java_priv0print_register(___nl__10));
#line 176
c_rt_lib0clear(&___nl__10);
#line 176
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(234)));
#line 176
c_rt_lib0move(&___nl__8, generator_java_priv0print_const_value(___nl__9, ___nl__10));
#line 176
c_rt_lib0clear(&___nl__10);
#line 176
c_rt_lib0clear(&___nl__9);
#line 176
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 176
c_rt_lib0clear(&___nl__8);
#line 176
c_rt_lib0clear(&___nl__7);
#line 176
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 176
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 176
c_rt_lib0clear(&___nl__7);
#line 176
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 176
c_rt_lib0clear(&___nl__6);
#line 176
c_rt_lib0clear(&___nl__5);
#line 177
goto label_1;
#line 177
label_14:
#line 177
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(224)));
#line 178
c_rt_lib0move(&___nl__6,___get_global_const(467));
#line 178
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 178
c_rt_lib0move(&___nl__7, generator_java_priv0print_register_getter(___nl__8));
#line 178
c_rt_lib0clear(&___nl__8);
#line 178
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 178
c_rt_lib0clear(&___nl__7);
#line 178
c_rt_lib0move(&___nl__7,___get_global_const(176));
#line 178
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 178
c_rt_lib0clear(&___nl__7);
#line 178
c_rt_lib0move(&___nl__7, generator_java_priv0print_getter());
#line 178
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 178
c_rt_lib0clear(&___nl__7);
#line 178
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 178
c_rt_lib0clear(&___nl__6);
#line 179
c_rt_lib0move(&___nl__6,___get_global_const(468));
#line 179
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 179
c_rt_lib0move(&___nl__7, generator_java_priv0print_register_getter(___nl__8));
#line 179
c_rt_lib0clear(&___nl__8);
#line 179
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
c_rt_lib0move(&___nl__7,___get_global_const(469));
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
c_rt_lib0move(&___nl__7, generator_java_priv0print_int_value());
#line 179
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
c_rt_lib0move(&___nl__7,___get_global_const(175));
#line 179
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 179
c_rt_lib0clear(&___nl__6);
#line 180
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 180
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__2));
#line 180
c_rt_lib0clear(&___nl__7);
#line 180
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 180
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 180
c_rt_lib0clear(&___nl__7);
#line 180
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 180
c_rt_lib0clear(&___nl__6);
#line 180
c_rt_lib0clear(&___nl__5);
#line 181
goto label_1;
#line 181
label_15:
#line 181
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(225)));
#line 182
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 182
c_rt_lib0move(&___nl__8,___get_global_const(470));
#line 182
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 182
c_rt_lib0move(&___nl__9, generator_java_priv0print_register_getter(___nl__10));
#line 182
c_rt_lib0clear(&___nl__10);
#line 182
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 182
c_rt_lib0clear(&___nl__9);
#line 182
c_rt_lib0move(&___nl__9,___get_global_const(176));
#line 182
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 182
c_rt_lib0clear(&___nl__9);
#line 182
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 182
c_rt_lib0clear(&___nl__8);
#line 182
c_rt_lib0clear(&___nl__7);
#line 182
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 182
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 182
c_rt_lib0clear(&___nl__7);
#line 182
c_rt_lib0move(&___nl__7, string0lf());
#line 182
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 182
c_rt_lib0clear(&___nl__7);
#line 182
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 182
c_rt_lib0clear(&___nl__6);
#line 183
c_rt_lib0move(&___nl__6,___get_global_const(467));
#line 183
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 183
c_rt_lib0move(&___nl__7, generator_java_priv0print_register_getter(___nl__8));
#line 183
c_rt_lib0clear(&___nl__8);
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 183
c_rt_lib0clear(&___nl__7);
#line 183
c_rt_lib0move(&___nl__7,___get_global_const(176));
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 183
c_rt_lib0clear(&___nl__7);
#line 183
c_rt_lib0move(&___nl__7, generator_java_priv0print_getter());
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 183
c_rt_lib0clear(&___nl__7);
#line 183
c_rt_lib0move(&___nl__7,___get_global_const(174));
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 183
c_rt_lib0clear(&___nl__7);
#line 183
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 183
c_rt_lib0clear(&___nl__6);
#line 184
c_rt_lib0move(&___nl__6,___get_global_const(471));
#line 184
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 184
c_rt_lib0move(&___nl__7, generator_java_priv0print_register_getter(___nl__8));
#line 184
c_rt_lib0clear(&___nl__8);
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0move(&___nl__7,___get_global_const(176));
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0move(&___nl__7, generator_java_priv0print_getter());
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0move(&___nl__7, generator_java_priv0print_int_value());
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0move(&___nl__7,___get_global_const(359));
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(234)));
#line 184
c_rt_lib0move(&___nl__7, generator_java_priv0print_register_getter(___nl__8));
#line 184
c_rt_lib0clear(&___nl__8);
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 184
c_rt_lib0clear(&___nl__6);
#line 184
c_rt_lib0clear(&___nl__5);
#line 185
goto label_1;
#line 185
label_16:
#line 185
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(226)));
#line 186
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 186
c_rt_lib0move(&___nl__8, generator_java_priv0print_get_hash_value(___nl__5));
#line 186
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 186
c_rt_lib0clear(&___nl__8);
#line 186
c_rt_lib0clear(&___nl__7);
#line 186
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 186
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 186
c_rt_lib0clear(&___nl__7);
#line 186
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 186
c_rt_lib0clear(&___nl__6);
#line 186
c_rt_lib0clear(&___nl__5);
#line 187
goto label_1;
#line 187
label_17:
#line 187
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(227)));
#line 188
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 188
c_rt_lib0move(&___nl__8,___get_global_const(470));
#line 188
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 188
c_rt_lib0move(&___nl__9, generator_java_priv0print_register_getter(___nl__10));
#line 188
c_rt_lib0clear(&___nl__10);
#line 188
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 188
c_rt_lib0clear(&___nl__9);
#line 188
c_rt_lib0move(&___nl__9,___get_global_const(176));
#line 188
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 188
c_rt_lib0clear(&___nl__9);
#line 188
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__7, ___nl__8));
#line 188
c_rt_lib0clear(&___nl__8);
#line 188
c_rt_lib0clear(&___nl__7);
#line 188
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 188
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 188
c_rt_lib0clear(&___nl__7);
#line 188
c_rt_lib0move(&___nl__7, string0lf());
#line 188
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 188
c_rt_lib0clear(&___nl__7);
#line 188
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 188
c_rt_lib0clear(&___nl__6);
#line 189
c_rt_lib0move(&___nl__6, generator_java_priv0print_set_hash_value(___nl__5));
#line 189
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 189
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 189
c_rt_lib0clear(&___nl__7);
#line 189
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 189
c_rt_lib0clear(&___nl__6);
#line 189
c_rt_lib0clear(&___nl__5);
#line 190
goto label_1;
#line 190
label_18:
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(228)));
#line 191
c_rt_lib0move(&___nl__6, generator_java_priv0print_ov_mk(___nl__5));
#line 191
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 191
c_rt_lib0clear(&___nl__6);
#line 191
c_rt_lib0clear(&___nl__5);
#line 192
goto label_1;
#line 192
label_19:
#line 192
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(230)));
#line 193
c_rt_lib0move(&___nl__6,___get_global_const(472));
#line 193
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 193
c_rt_lib0move(&___nl__7,___get_global_const(473));
#line 193
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 193
c_rt_lib0clear(&___nl__7);
#line 193
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 193
c_rt_lib0clear(&___nl__6);
#line 193
c_rt_lib0clear(&___nl__5);
#line 194
goto label_1;
#line 194
label_20:
#line 194
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(231)));
#line 195
c_rt_lib0move(&___nl__6,___get_global_const(474));
#line 195
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 195
c_rt_lib0move(&___nl__7, generator_java_priv0print_register(___nl__8));
#line 195
c_rt_lib0clear(&___nl__8);
#line 195
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 195
c_rt_lib0clear(&___nl__7);
#line 195
c_rt_lib0move(&___nl__7,___get_global_const(475));
#line 195
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 195
c_rt_lib0clear(&___nl__7);
#line 195
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 195
c_rt_lib0move(&___nl__7, generator_java_priv0print_goto(___nl__8));
#line 195
c_rt_lib0clear(&___nl__8);
#line 195
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 195
c_rt_lib0clear(&___nl__7);
#line 195
c_rt_lib0move(&___nl__7,___get_global_const(169));
#line 195
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 195
c_rt_lib0clear(&___nl__7);
#line 195
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 195
c_rt_lib0clear(&___nl__6);
#line 195
c_rt_lib0clear(&___nl__5);
#line 196
goto label_1;
#line 196
label_21:
#line 196
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(232)));
#line 197
c_rt_lib0move(&___nl__6, generator_java_priv0print_goto(___nl__5));
#line 197
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 197
c_rt_lib0clear(&___nl__6);
#line 197
c_rt_lib0clear(&___nl__5);
#line 198
goto label_1;
#line 198
label_22:
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(195)));
#line 199
c_rt_lib0move(&___nl__7,___get_global_const(476));
#line 199
c_rt_lib0move(&___nl__6, generator_java_priv0print_register_setter(___nl__5, ___nl__7));
#line 199
c_rt_lib0clear(&___nl__7);
#line 199
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 199
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 199
c_rt_lib0clear(&___nl__7);
#line 199
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 199
c_rt_lib0clear(&___nl__6);
#line 199
c_rt_lib0clear(&___nl__5);
#line 200
goto label_1;
#line 200
label_1:
#line 200
c_rt_lib0clear(&___nl__3);
#line 200
c_rt_lib0clear(&___nl__4);
#line 201
c_rt_lib0move(&___nl__3,___get_global_const(477));
#line 201
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(213)));
#line 201
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(395)));
#line 201
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(396)));
#line 201
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(98)));
#line 201
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 201
c_rt_lib0clear(&___nl__4);
#line 201
c_rt_lib0move(&___nl__4, string0lf());
#line 201
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 201
c_rt_lib0clear(&___nl__4);
#line 201
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 201
c_rt_lib0move(&___nl__4, string0lf());
#line 201
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 201
c_rt_lib0clear(&___nl__4);
#line 201
c_rt_lib0clear(&___nl__0);
#line 201
c_rt_lib0clear(&___nl__1);
#line 201
c_rt_lib0clear(&___nl__2);
#line 201
return ___nl__3;
#line 201
c_rt_lib0clear(&___nl__3);
#line 201
c_rt_lib0clear(&___nl__2);
#line 201
c_rt_lib0clear(&___nl__0);
#line 201
c_rt_lib0clear(&___nl__1);
#line 201
return NULL;
}

ImmT generator_java_priv0print_arr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 205
c_rt_lib0move(&___nl__1,___get_global_const(478));
#line 206
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 206
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 206
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__3));
#line 206
c_rt_lib0clear(&___nl__3);
#line 206
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 206
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 207
c_rt_lib0move(&___nl__3,___get_global_const(479));
#line 207
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 207
c_rt_lib0clear(&___nl__3);
#line 208
goto label_1;
#line 208
label_2:
#line 209
c_rt_lib0move(&___nl__3,___get_global_const(480));
#line 209
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 209
c_rt_lib0clear(&___nl__3);
#line 210
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 210
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 210
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__0));
#line 210
label_5:
#line 210
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 210
if(c_rt_lib0check_true_native(___nl__7)){ goto label_3;}
#line 210
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 210
c_rt_lib0move(&___nl__8, generator_java_priv0print_register_getter(___nl__3));
#line 210
c_rt_lib0move(&___nl__9,___get_global_const(172));
#line 210
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 210
c_rt_lib0clear(&___nl__9);
#line 210
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__8));
#line 210
c_rt_lib0clear(&___nl__8);
#line 210
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 210
goto label_5;
#line 210
label_3:
#line 210
c_rt_lib0clear(&___nl__3);
#line 210
c_rt_lib0clear(&___nl__4);
#line 210
c_rt_lib0clear(&___nl__5);
#line 210
c_rt_lib0clear(&___nl__6);
#line 210
c_rt_lib0clear(&___nl__7);
#line 211
c_rt_lib0move(&___nl__3,___get_global_const(169));
#line 211
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 211
c_rt_lib0clear(&___nl__3);
#line 212
goto label_1;
#line 212
label_1:
#line 212
c_rt_lib0clear(&___nl__2);
#line 213
c_rt_lib0move(&___nl__2,___get_global_const(176));
#line 213
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 213
c_rt_lib0clear(&___nl__0);
#line 213
c_rt_lib0clear(&___nl__1);
#line 213
return ___nl__2;
#line 213
c_rt_lib0clear(&___nl__2);
#line 213
c_rt_lib0clear(&___nl__1);
#line 213
c_rt_lib0clear(&___nl__0);
#line 213
return NULL;
}

ImmT generator_java_priv0print_bin_op(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 217
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 218
c_rt_lib0move(&___nl__3,___get_global_const(268));
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 218
c_rt_lib0clear(&___nl__3);
#line 218
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 218
c_rt_lib0move(&___nl__3,___get_global_const(258));
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 218
c_rt_lib0clear(&___nl__3);
#line 218
label_7:
#line 218
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 218
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 218
c_rt_lib0clear(&___nl__3);
#line 218
label_6:
#line 218
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 218
c_rt_lib0move(&___nl__3,___get_global_const(266));
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 218
c_rt_lib0clear(&___nl__3);
#line 218
label_5:
#line 218
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 218
c_rt_lib0move(&___nl__3,___get_global_const(262));
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 218
c_rt_lib0clear(&___nl__3);
#line 218
label_4:
#line 218
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 218
c_rt_lib0move(&___nl__3,___get_global_const(264));
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 218
c_rt_lib0clear(&___nl__3);
#line 218
label_3:
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 218
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 220
c_rt_lib0move(&___nl__3,___get_global_const(481));
#line 220
c_rt_lib0move(&___nl__4, generator_java_priv0print_imm_double_operation(___nl__0));
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0move(&___nl__4,___get_global_const(482));
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 220
c_rt_lib0clear(&___nl__3);
#line 221
goto label_1;
#line 221
label_2:
#line 221
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 221
c_rt_lib0move(&___nl__3,___get_global_const(249));
#line 221
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 221
c_rt_lib0clear(&___nl__3);
#line 221
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 221
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 221
c_rt_lib0move(&___nl__3,___get_global_const(250));
#line 221
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 221
c_rt_lib0clear(&___nl__3);
#line 221
label_9:
#line 221
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 221
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 222
c_rt_lib0move(&___nl__3,___get_global_const(481));
#line 222
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 222
c_rt_lib0clear(&___nl__3);
#line 223
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 223
c_rt_lib0move(&___nl__4,___get_global_const(250));
#line 223
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 223
c_rt_lib0clear(&___nl__4);
#line 223
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 223
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 224
c_rt_lib0move(&___nl__4,___get_global_const(243));
#line 224
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__4));
#line 224
c_rt_lib0clear(&___nl__4);
#line 225
goto label_11;
#line 225
label_11:
#line 225
c_rt_lib0clear(&___nl__3);
#line 226
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 226
c_rt_lib0move(&___nl__3, generator_java_priv0print_register_getter(___nl__4));
#line 226
c_rt_lib0clear(&___nl__4);
#line 226
c_rt_lib0move(&___nl__4,___get_global_const(483));
#line 226
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 226
c_rt_lib0clear(&___nl__4);
#line 226
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 226
c_rt_lib0clear(&___nl__3);
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 227
c_rt_lib0move(&___nl__3, generator_java_priv0print_register_getter(___nl__4));
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0move(&___nl__4,___get_global_const(484));
#line 227
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 227
c_rt_lib0clear(&___nl__3);
#line 228
goto label_1;
#line 228
label_8:
#line 228
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 228
c_rt_lib0move(&___nl__3,___get_global_const(81));
#line 228
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 228
c_rt_lib0clear(&___nl__3);
#line 228
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 228
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 229
c_rt_lib0move(&___nl__3,___get_global_const(485));
#line 229
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 229
c_rt_lib0move(&___nl__4, generator_java_priv0print_register_getter(___nl__5));
#line 229
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
c_rt_lib0move(&___nl__4,___get_global_const(486));
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 229
c_rt_lib0move(&___nl__4, generator_java_priv0print_register_getter(___nl__5));
#line 229
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
c_rt_lib0move(&___nl__4,___get_global_const(487));
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 229
c_rt_lib0clear(&___nl__3);
#line 230
goto label_1;
#line 230
label_12:
#line 231
c_rt_lib0move(&___nl__3,___get_global_const(488));
#line 231
c_rt_lib0move(&___nl__4, generator_java_priv0print_imm_double_operation(___nl__0));
#line 231
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 231
c_rt_lib0clear(&___nl__4);
#line 231
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 231
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 231
c_rt_lib0clear(&___nl__4);
#line 231
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 231
c_rt_lib0clear(&___nl__3);
#line 232
goto label_1;
#line 232
label_1:
#line 232
c_rt_lib0clear(&___nl__2);
#line 233
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 233
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_setter(___nl__3, ___nl__1));
#line 233
c_rt_lib0clear(&___nl__3);
#line 233
c_rt_lib0move(&___nl__3,___get_global_const(311));
#line 233
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 233
c_rt_lib0clear(&___nl__3);
#line 233
c_rt_lib0clear(&___nl__0);
#line 233
c_rt_lib0clear(&___nl__1);
#line 233
return ___nl__2;
#line 233
c_rt_lib0clear(&___nl__2);
#line 233
c_rt_lib0clear(&___nl__1);
#line 233
c_rt_lib0clear(&___nl__0);
#line 233
return NULL;
}

ImmT generator_java_priv0print_imm_double_operation(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 237
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 237
c_rt_lib0move(&___nl__1, generator_java_priv0print_register_as_number(___nl__2));
#line 237
c_rt_lib0clear(&___nl__2);
#line 238
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 238
c_rt_lib0move(&___nl__3,___get_global_const(262));
#line 238
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 238
c_rt_lib0clear(&___nl__3);
#line 238
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 238
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 238
c_rt_lib0move(&___nl__3,___get_global_const(264));
#line 238
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 238
c_rt_lib0clear(&___nl__3);
#line 238
label_3:
#line 238
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 238
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 239
c_rt_lib0move(&___nl__3,___get_global_const(489));
#line 239
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 239
c_rt_lib0move(&___nl__4, generator_java_priv0print_register_as_number(___nl__5));
#line 239
c_rt_lib0clear(&___nl__5);
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 239
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0move(&___nl__4,___get_global_const(490));
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 239
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 239
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0move(&___nl__4,___get_global_const(491));
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 239
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 239
c_rt_lib0clear(&___nl__3);
#line 240
goto label_1;
#line 240
label_2:
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 241
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 241
c_rt_lib0move(&___nl__4, generator_java_priv0print_register_as_number(___nl__5));
#line 241
c_rt_lib0clear(&___nl__5);
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 241
c_rt_lib0clear(&___nl__3);
#line 242
goto label_1;
#line 242
label_1:
#line 242
c_rt_lib0clear(&___nl__2);
#line 243
c_rt_lib0clear(&___nl__0);
#line 243
return ___nl__1;
#line 243
c_rt_lib0clear(&___nl__1);
#line 243
c_rt_lib0clear(&___nl__0);
#line 243
return NULL;
}

ImmT generator_java_priv0print_register_as_number(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 247
c_rt_lib0move(&___nl__1,___get_global_const(492));
#line 247
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_getter(___nl__0));
#line 247
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 247
c_rt_lib0clear(&___nl__2);
#line 247
c_rt_lib0move(&___nl__2, generator_java_priv0print_getter());
#line 247
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 247
c_rt_lib0clear(&___nl__2);
#line 247
c_rt_lib0move(&___nl__2,___get_global_const(493));
#line 247
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 247
c_rt_lib0clear(&___nl__2);
#line 247
c_rt_lib0clear(&___nl__0);
#line 247
return ___nl__1;
#line 247
c_rt_lib0clear(&___nl__1);
#line 247
c_rt_lib0clear(&___nl__0);
#line 247
return NULL;
}

ImmT generator_java_priv0print_int_value(){
generator_java_priv0__const__init();
return generator_java_priv0__const__sing(2);}
ImmT generator_java_priv0print_int_value0cal() {
generator_java_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 251
c_rt_lib0move(&___nl__0,___get_global_const(494));
#line 251
return ___nl__0;
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
return NULL;
}

ImmT generator_java_priv0print_call(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
generator_java_priv0__const__init();
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
#line 255
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 255
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 255
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 255
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 255
c_rt_lib0move(&___nl__5,___get_global_const(389));
#line 255
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__2, ___nl__5));
#line 255
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 255
c_rt_lib0clear(&___nl__5);
#line 255
goto label_2;
#line 255
label_2:
#line 255
c_rt_lib0clear(&___nl__4);
#line 256
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 256
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 256
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 256
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 256
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 256
goto label_4;
#line 256
label_4:
#line 256
c_rt_lib0clear(&___nl__4);
#line 257
c_rt_lib0move(&___nl__4, generator_java_priv0get_class_name(___nl__1));
#line 257
c_rt_lib0move(&___nl__5,___get_global_const(81));
#line 257
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 257
c_rt_lib0clear(&___nl__5);
#line 257
c_rt_lib0copy(&___nl__5, ___nl__2);
#line 257
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 257
c_rt_lib0clear(&___nl__5);
#line 257
c_rt_lib0move(&___nl__5,___get_global_const(495));
#line 257
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 257
c_rt_lib0clear(&___nl__5);
#line 258
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 259
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 259
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 259
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__3));
#line 259
label_7:
#line 259
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 259
if(c_rt_lib0check_true_native(___nl__10)){ goto label_5;}
#line 259
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 260
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 260
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__5, ___nl__11));
#line 260
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 260
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 260
if(c_rt_lib0check_true_native(___nl__11)){ goto label_9;}
#line 260
c_rt_lib0move(&___nl__12,___get_global_const(172));
#line 260
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__12));
#line 260
c_rt_lib0clear(&___nl__12);
#line 260
goto label_9;
#line 260
label_9:
#line 260
c_rt_lib0clear(&___nl__11);
#line 261
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 261
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__11));
#line 261
c_rt_lib0clear(&___nl__11);
#line 262
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(5)));
#line 262
if(c_rt_lib0check_true_native(___nl__11)){ goto label_11;}
#line 264
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(234)));
#line 264
if(c_rt_lib0check_true_native(___nl__11)){ goto label_12;}
#line 264
c_rt_lib0move(&___nl__11,___get_global_const(74));
#line 264
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__6));
#line 264
nl_die_arg(___nl__11);
#line 262
label_11:
#line 262
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__6, ___get_global_const(5)));
#line 263
c_rt_lib0move(&___nl__13, generator_java_priv0print_register(___nl__12));
#line 263
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__13));
#line 263
c_rt_lib0clear(&___nl__13);
#line 263
c_rt_lib0clear(&___nl__12);
#line 264
goto label_10;
#line 264
label_12:
#line 264
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__6, ___get_global_const(234)));
#line 265
c_rt_lib0move(&___nl__13, generator_java_priv0print_register(___nl__12));
#line 265
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__13));
#line 265
c_rt_lib0clear(&___nl__13);
#line 265
c_rt_lib0clear(&___nl__12);
#line 266
goto label_10;
#line 266
label_10:
#line 266
c_rt_lib0clear(&___nl__11);
#line 267
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 267
goto label_7;
#line 267
label_5:
#line 267
c_rt_lib0clear(&___nl__6);
#line 267
c_rt_lib0clear(&___nl__7);
#line 267
c_rt_lib0clear(&___nl__8);
#line 267
c_rt_lib0clear(&___nl__9);
#line 267
c_rt_lib0clear(&___nl__10);
#line 268
c_rt_lib0move(&___nl__6,___get_global_const(176));
#line 268
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__4, ___nl__6));
#line 268
c_rt_lib0clear(&___nl__0);
#line 268
c_rt_lib0clear(&___nl__1);
#line 268
c_rt_lib0clear(&___nl__2);
#line 268
c_rt_lib0clear(&___nl__3);
#line 268
c_rt_lib0clear(&___nl__4);
#line 268
c_rt_lib0clear(&___nl__5);
#line 268
return ___nl__6;
#line 268
c_rt_lib0clear(&___nl__6);
#line 268
c_rt_lib0clear(&___nl__4);
#line 268
c_rt_lib0clear(&___nl__5);
#line 268
c_rt_lib0clear(&___nl__0);
#line 268
c_rt_lib0clear(&___nl__1);
#line 268
c_rt_lib0clear(&___nl__2);
#line 268
c_rt_lib0clear(&___nl__3);
#line 268
return NULL;
}

ImmT generator_java_priv0print_const_arr(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_java_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 272
c_rt_lib0move(&___nl__2,___get_global_const(496));
#line 273
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 273
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 273
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 273
label_3:
#line 273
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 273
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 273
c_rt_lib0move(&___nl__8, generator_java_priv0print_const_value(___nl__0, ___nl__3));
#line 273
c_rt_lib0move(&___nl__9,___get_global_const(172));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 273
c_rt_lib0clear(&___nl__9);
#line 273
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__8));
#line 273
c_rt_lib0clear(&___nl__8);
#line 273
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 273
goto label_3;
#line 273
label_1:
#line 273
c_rt_lib0clear(&___nl__3);
#line 273
c_rt_lib0clear(&___nl__4);
#line 273
c_rt_lib0clear(&___nl__5);
#line 273
c_rt_lib0clear(&___nl__6);
#line 273
c_rt_lib0clear(&___nl__7);
#line 274
c_rt_lib0move(&___nl__3,___get_global_const(169));
#line 274
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__3));
#line 274
c_rt_lib0clear(&___nl__0);
#line 274
c_rt_lib0clear(&___nl__1);
#line 274
c_rt_lib0clear(&___nl__2);
#line 274
return ___nl__3;
#line 274
c_rt_lib0clear(&___nl__3);
#line 274
c_rt_lib0clear(&___nl__2);
#line 274
c_rt_lib0clear(&___nl__0);
#line 274
c_rt_lib0clear(&___nl__1);
#line 274
return NULL;
}

ImmT generator_java_priv0print_const_hash(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_java_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 278
c_rt_lib0move(&___nl__2, generator_java_priv0print_hash_name());
#line 278
c_rt_lib0move(&___nl__3,___get_global_const(497));
#line 278
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 278
c_rt_lib0clear(&___nl__3);
#line 278
c_rt_lib0move(&___nl__3, string0lf());
#line 278
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 278
c_rt_lib0clear(&___nl__3);
#line 279
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__1));
#line 279
label_3:
#line 279
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 279
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 279
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__1, ___nl__3));
#line 279
c_rt_lib0move(&___nl__6, generator_java_priv0print_hash_name());
#line 279
c_rt_lib0move(&___nl__7,___get_global_const(498));
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__7, generator_java_priv0escape_string(___nl__3));
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__7,___get_global_const(499));
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__7, generator_java_priv0print_const_value(___nl__0, ___nl__4));
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__7,___get_global_const(455));
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__7, string0lf());
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 279
c_rt_lib0clear(&___nl__6);
#line 279
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 279
goto label_3;
#line 279
label_1:
#line 279
c_rt_lib0clear(&___nl__3);
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0clear(&___nl__5);
#line 280
c_rt_lib0move(&___nl__4,___get_global_const(461));
#line 280
c_rt_lib0move(&___nl__5, generator_java_priv0print_hash_name());
#line 280
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 280
c_rt_lib0clear(&___nl__5);
#line 280
c_rt_lib0move(&___nl__5,___get_global_const(176));
#line 280
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 280
c_rt_lib0clear(&___nl__5);
#line 280
c_rt_lib0move(&___nl__3, generator_java_priv0print_register_setter(___nl__0, ___nl__4));
#line 280
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__3));
#line 280
c_rt_lib0clear(&___nl__0);
#line 280
c_rt_lib0clear(&___nl__1);
#line 280
c_rt_lib0clear(&___nl__2);
#line 280
return ___nl__3;
#line 280
c_rt_lib0clear(&___nl__3);
#line 280
c_rt_lib0clear(&___nl__2);
#line 280
c_rt_lib0clear(&___nl__0);
#line 280
c_rt_lib0clear(&___nl__1);
#line 280
return NULL;
}

ImmT generator_java_priv0print_const_ov(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_java_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 284
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 285
c_rt_lib0move(&___nl__3, ov0has_value(___nl__1));
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 285
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 286
c_rt_lib0move(&___nl__4,___get_global_const(500));
#line 286
c_rt_lib0move(&___nl__6, ov0get_element(___nl__1));
#line 286
c_rt_lib0move(&___nl__5, generator_java_priv0escape_string(___nl__6));
#line 286
c_rt_lib0clear(&___nl__6);
#line 286
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 286
c_rt_lib0clear(&___nl__5);
#line 286
c_rt_lib0move(&___nl__5,___get_global_const(501));
#line 286
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 286
c_rt_lib0clear(&___nl__5);
#line 286
c_rt_lib0move(&___nl__6, ov0get_value(___nl__1));
#line 286
c_rt_lib0move(&___nl__5, generator_java_priv0print_const_value(___nl__0, ___nl__6));
#line 286
c_rt_lib0clear(&___nl__6);
#line 286
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 286
c_rt_lib0clear(&___nl__5);
#line 286
c_rt_lib0move(&___nl__5,___get_global_const(176));
#line 286
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 286
c_rt_lib0clear(&___nl__5);
#line 286
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 286
c_rt_lib0clear(&___nl__4);
#line 287
goto label_1;
#line 287
label_2:
#line 288
c_rt_lib0move(&___nl__4,___get_global_const(500));
#line 288
c_rt_lib0move(&___nl__6, ov0get_element(___nl__1));
#line 288
c_rt_lib0move(&___nl__5, generator_java_priv0escape_string(___nl__6));
#line 288
c_rt_lib0clear(&___nl__6);
#line 288
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 288
c_rt_lib0clear(&___nl__5);
#line 288
c_rt_lib0move(&___nl__5,___get_global_const(502));
#line 288
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 288
c_rt_lib0clear(&___nl__5);
#line 288
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 288
c_rt_lib0clear(&___nl__4);
#line 289
goto label_1;
#line 289
label_1:
#line 289
c_rt_lib0clear(&___nl__3);
#line 290
c_rt_lib0clear(&___nl__0);
#line 290
c_rt_lib0clear(&___nl__1);
#line 290
return ___nl__2;
#line 290
c_rt_lib0clear(&___nl__2);
#line 290
c_rt_lib0clear(&___nl__0);
#line 290
c_rt_lib0clear(&___nl__1);
#line 290
return NULL;
}

ImmT generator_java_priv0print_const_value(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_java_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 294
c_rt_lib0move(&___nl__2, nl0is_sim(___nl__1));
#line 294
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 294
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 294
c_rt_lib0move(&___nl__5, ptd0sim());
#line 294
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__1));
#line 294
c_rt_lib0clear(&___nl__5);
#line 294
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__4));
#line 294
c_rt_lib0clear(&___nl__4);
#line 294
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 294
c_rt_lib0move(&___nl__5, ptd0sim());
#line 294
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__1));
#line 294
c_rt_lib0clear(&___nl__5);
#line 294
c_rt_lib0move(&___nl__2, string_utils0is_float(___nl__4));
#line 294
c_rt_lib0clear(&___nl__4);
#line 294
label_4:
#line 294
c_rt_lib0clear(&___nl__3);
#line 294
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 294
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 296
c_rt_lib0move(&___nl__3,___get_global_const(488));
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 296
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 296
c_rt_lib0clear(&___nl__4);
#line 296
c_rt_lib0clear(&___nl__0);
#line 296
c_rt_lib0clear(&___nl__1);
#line 296
c_rt_lib0clear(&___nl__2);
#line 296
return ___nl__3;
#line 296
c_rt_lib0clear(&___nl__3);
#line 297
goto label_1;
#line 297
label_2:
#line 297
c_rt_lib0move(&___nl__2, nl0is_sim(___nl__1));
#line 297
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 297
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(503));
#line 298
c_rt_lib0move(&___nl__4, generator_java_priv0escape_string(___nl__1));
#line 298
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 298
c_rt_lib0clear(&___nl__4);
#line 298
c_rt_lib0move(&___nl__4,___get_global_const(425));
#line 298
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 298
c_rt_lib0clear(&___nl__4);
#line 298
c_rt_lib0clear(&___nl__0);
#line 298
c_rt_lib0clear(&___nl__1);
#line 298
c_rt_lib0clear(&___nl__2);
#line 298
return ___nl__3;
#line 298
c_rt_lib0clear(&___nl__3);
#line 299
goto label_1;
#line 299
label_5:
#line 299
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 299
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 299
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 300
c_rt_lib0move(&___nl__3, generator_java_priv0print_const_arr(___nl__0, ___nl__1));
#line 300
c_rt_lib0clear(&___nl__0);
#line 300
c_rt_lib0clear(&___nl__1);
#line 300
c_rt_lib0clear(&___nl__2);
#line 300
return ___nl__3;
#line 300
c_rt_lib0clear(&___nl__3);
#line 301
goto label_1;
#line 301
label_6:
#line 301
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 301
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 301
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 302
c_rt_lib0move(&___nl__3, generator_java_priv0print_const_hash(___nl__0, ___nl__1));
#line 302
c_rt_lib0clear(&___nl__0);
#line 302
c_rt_lib0clear(&___nl__1);
#line 302
c_rt_lib0clear(&___nl__2);
#line 302
return ___nl__3;
#line 302
c_rt_lib0clear(&___nl__3);
#line 303
goto label_1;
#line 303
label_7:
#line 303
c_rt_lib0move(&___nl__2, nl0is_variant(___nl__1));
#line 303
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 303
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 304
c_rt_lib0move(&___nl__3, generator_java_priv0print_const_ov(___nl__0, ___nl__1));
#line 304
c_rt_lib0clear(&___nl__0);
#line 304
c_rt_lib0clear(&___nl__1);
#line 304
c_rt_lib0clear(&___nl__2);
#line 304
return ___nl__3;
#line 304
c_rt_lib0clear(&___nl__3);
#line 305
goto label_1;
#line 305
label_8:
#line 306
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 306
nl_die_arg(___nl__3);
#line 306
c_rt_lib0clear(&___nl__3);
#line 307
goto label_1;
#line 307
label_1:
#line 307
c_rt_lib0clear(&___nl__2);
#line 307
c_rt_lib0clear(&___nl__0);
#line 307
c_rt_lib0clear(&___nl__1);
#line 307
return NULL;
}

ImmT generator_java_priv0print_goto(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 311
c_rt_lib0move(&___nl__1,___get_global_const(504));
#line 311
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 311
c_rt_lib0move(&___nl__2,___get_global_const(505));
#line 311
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 311
c_rt_lib0clear(&___nl__2);
#line 311
c_rt_lib0clear(&___nl__0);
#line 311
return ___nl__1;
#line 311
c_rt_lib0clear(&___nl__1);
#line 311
c_rt_lib0clear(&___nl__0);
#line 311
return NULL;
}

ImmT generator_java_priv0print_hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
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
#line 315
c_rt_lib0move(&___nl__1, generator_java_priv0print_hash_name());
#line 315
c_rt_lib0move(&___nl__2,___get_global_const(497));
#line 315
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 315
c_rt_lib0clear(&___nl__2);
#line 315
c_rt_lib0move(&___nl__2, string0lf());
#line 315
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 315
c_rt_lib0clear(&___nl__2);
#line 316
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 316
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 316
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 316
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 316
label_3:
#line 316
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 316
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 316
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 316
c_rt_lib0move(&___nl__8, generator_java_priv0print_hash_name());
#line 316
c_rt_lib0move(&___nl__9,___get_global_const(498));
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(279)));
#line 316
c_rt_lib0move(&___nl__9, generator_java_priv0escape_string(___nl__10));
#line 316
c_rt_lib0clear(&___nl__10);
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
c_rt_lib0move(&___nl__9,___get_global_const(499));
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(234)));
#line 316
c_rt_lib0move(&___nl__9, generator_java_priv0print_register_getter(___nl__10));
#line 316
c_rt_lib0clear(&___nl__10);
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
c_rt_lib0move(&___nl__9,___get_global_const(455));
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
c_rt_lib0move(&___nl__9, string0lf());
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__8));
#line 316
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 316
goto label_3;
#line 316
label_1:
#line 316
c_rt_lib0clear(&___nl__2);
#line 316
c_rt_lib0clear(&___nl__3);
#line 316
c_rt_lib0clear(&___nl__4);
#line 316
c_rt_lib0clear(&___nl__5);
#line 316
c_rt_lib0clear(&___nl__6);
#line 316
c_rt_lib0clear(&___nl__7);
#line 317
c_rt_lib0clear(&___nl__0);
#line 317
return ___nl__1;
#line 317
c_rt_lib0clear(&___nl__1);
#line 317
c_rt_lib0clear(&___nl__0);
#line 317
return NULL;
}

ImmT generator_java_priv0print_hash_name(){
generator_java_priv0__const__init();
return generator_java_priv0__const__sing(3);}
ImmT generator_java_priv0print_hash_name0cal() {
generator_java_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 321
c_rt_lib0move(&___nl__0,___get_global_const(506));
#line 321
return ___nl__0;
#line 321
c_rt_lib0clear(&___nl__0);
#line 321
return NULL;
}

ImmT generator_java_priv0print_get_hash_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 325
c_rt_lib0move(&___nl__1,___get_global_const(507));
#line 325
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 325
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_getter(___nl__3));
#line 325
c_rt_lib0clear(&___nl__3);
#line 325
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0move(&___nl__2,___get_global_const(176));
#line 325
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0move(&___nl__2, generator_java_priv0print_getter());
#line 325
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0move(&___nl__2,___get_global_const(508));
#line 325
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(279)));
#line 325
c_rt_lib0move(&___nl__2, generator_java_priv0escape_string(___nl__3));
#line 325
c_rt_lib0clear(&___nl__3);
#line 325
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0move(&___nl__2,___get_global_const(509));
#line 325
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0clear(&___nl__0);
#line 325
return ___nl__1;
#line 325
c_rt_lib0clear(&___nl__1);
#line 325
c_rt_lib0clear(&___nl__0);
#line 325
return NULL;
}

ImmT generator_java_priv0print_set_hash_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 329
c_rt_lib0move(&___nl__1,___get_global_const(507));
#line 329
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 329
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_getter(___nl__3));
#line 329
c_rt_lib0clear(&___nl__3);
#line 329
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0move(&___nl__2,___get_global_const(176));
#line 329
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0move(&___nl__2, generator_java_priv0print_getter());
#line 329
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0move(&___nl__2,___get_global_const(498));
#line 329
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(279)));
#line 329
c_rt_lib0move(&___nl__2, generator_java_priv0escape_string(___nl__3));
#line 329
c_rt_lib0clear(&___nl__3);
#line 329
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0move(&___nl__2,___get_global_const(510));
#line 329
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 329
c_rt_lib0clear(&___nl__2);
#line 330
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 330
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_getter(___nl__3));
#line 330
c_rt_lib0clear(&___nl__3);
#line 330
c_rt_lib0move(&___nl__3,___get_global_const(176));
#line 330
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 330
c_rt_lib0clear(&___nl__3);
#line 330
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 330
c_rt_lib0clear(&___nl__2);
#line 331
c_rt_lib0clear(&___nl__0);
#line 331
return ___nl__1;
#line 331
c_rt_lib0clear(&___nl__1);
#line 331
c_rt_lib0clear(&___nl__0);
#line 331
return NULL;
}

ImmT generator_java_priv0print_ov_mk(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 335
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 336
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 336
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(211)));
#line 336
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 336
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 336
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 336
c_rt_lib0move(&___nl__4,___get_global_const(6));
#line 336
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 336
c_rt_lib0clear(&___nl__4);
#line 336
label_3:
#line 336
c_rt_lib0clear(&___nl__3);
#line 336
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 336
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 337
c_rt_lib0move(&___nl__3,___get_global_const(511));
#line 337
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 337
c_rt_lib0clear(&___nl__3);
#line 338
goto label_1;
#line 338
label_2:
#line 338
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 338
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(211)));
#line 338
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 338
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 338
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 338
c_rt_lib0move(&___nl__4,___get_global_const(7));
#line 338
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 338
c_rt_lib0clear(&___nl__4);
#line 338
label_5:
#line 338
c_rt_lib0clear(&___nl__3);
#line 338
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 338
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 339
c_rt_lib0move(&___nl__3,___get_global_const(512));
#line 339
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 339
c_rt_lib0clear(&___nl__3);
#line 340
goto label_1;
#line 340
label_4:
#line 341
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 341
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(238)));
#line 341
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 343
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(211)));
#line 343
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 343
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 343
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 343
nl_die_arg(___nl__4);
#line 341
label_7:
#line 341
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(238)));
#line 342
c_rt_lib0move(&___nl__6,___get_global_const(513));
#line 342
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 342
c_rt_lib0move(&___nl__7, generator_java_priv0escape_string(___nl__8));
#line 342
c_rt_lib0clear(&___nl__8);
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 342
c_rt_lib0clear(&___nl__7);
#line 342
c_rt_lib0move(&___nl__7,___get_global_const(510));
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 342
c_rt_lib0clear(&___nl__7);
#line 342
c_rt_lib0move(&___nl__7, generator_java_priv0print_register(___nl__5));
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 342
c_rt_lib0clear(&___nl__7);
#line 342
c_rt_lib0move(&___nl__7,___get_global_const(176));
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 342
c_rt_lib0clear(&___nl__7);
#line 342
c_rt_lib0copy(&___nl__1, ___nl__6);
#line 342
c_rt_lib0clear(&___nl__6);
#line 342
c_rt_lib0clear(&___nl__5);
#line 343
goto label_6;
#line 343
label_8:
#line 344
c_rt_lib0move(&___nl__5,___get_global_const(514));
#line 344
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 344
c_rt_lib0move(&___nl__6, generator_java_priv0escape_string(___nl__7));
#line 344
c_rt_lib0clear(&___nl__7);
#line 344
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 344
c_rt_lib0clear(&___nl__6);
#line 344
c_rt_lib0move(&___nl__6,___get_global_const(509));
#line 344
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 344
c_rt_lib0clear(&___nl__6);
#line 344
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 344
c_rt_lib0clear(&___nl__5);
#line 345
goto label_6;
#line 345
label_6:
#line 345
c_rt_lib0clear(&___nl__3);
#line 345
c_rt_lib0clear(&___nl__4);
#line 346
goto label_1;
#line 346
label_1:
#line 346
c_rt_lib0clear(&___nl__2);
#line 347
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 347
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_setter(___nl__3, ___nl__1));
#line 347
c_rt_lib0clear(&___nl__3);
#line 347
c_rt_lib0move(&___nl__3,___get_global_const(311));
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 347
c_rt_lib0clear(&___nl__3);
#line 347
c_rt_lib0clear(&___nl__0);
#line 347
c_rt_lib0clear(&___nl__1);
#line 347
return ___nl__2;
#line 347
c_rt_lib0clear(&___nl__2);
#line 347
c_rt_lib0clear(&___nl__1);
#line 347
c_rt_lib0clear(&___nl__0);
#line 347
return NULL;
}

ImmT generator_java_priv0print_register(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 351
c_rt_lib0move(&___nl__1,___get_global_const(297));
#line 351
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 351
c_rt_lib0clear(&___nl__0);
#line 351
return ___nl__1;
#line 351
c_rt_lib0clear(&___nl__1);
#line 351
c_rt_lib0clear(&___nl__0);
#line 351
return NULL;
}

ImmT generator_java_priv0print_register_getter(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 355
c_rt_lib0move(&___nl__1, generator_java_priv0print_register(___nl__0));
#line 355
c_rt_lib0move(&___nl__2, generator_java_priv0print_getter());
#line 355
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 355
c_rt_lib0clear(&___nl__2);
#line 355
c_rt_lib0clear(&___nl__0);
#line 355
return ___nl__1;
#line 355
c_rt_lib0clear(&___nl__1);
#line 355
c_rt_lib0clear(&___nl__0);
#line 355
return NULL;
}

ImmT generator_java_priv0print_getter(){
generator_java_priv0__const__init();
return generator_java_priv0__const__sing(4);}
ImmT generator_java_priv0print_getter0cal() {
generator_java_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 359
c_rt_lib0move(&___nl__0,___get_global_const(515));
#line 359
return ___nl__0;
#line 359
c_rt_lib0clear(&___nl__0);
#line 359
return NULL;
}

ImmT generator_java_priv0print_register_setter(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_java_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 363
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 363
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__0, ___nl__2));
#line 363
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 363
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 363
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 363
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 363
c_rt_lib0clear(&___nl__0);
#line 363
c_rt_lib0clear(&___nl__1);
#line 363
c_rt_lib0clear(&___nl__2);
#line 363
return ___nl__3;
#line 363
c_rt_lib0clear(&___nl__3);
#line 363
goto label_2;
#line 363
label_2:
#line 363
c_rt_lib0clear(&___nl__2);
#line 364
c_rt_lib0move(&___nl__2, generator_java_priv0print_register(___nl__0));
#line 364
c_rt_lib0move(&___nl__3,___get_global_const(516));
#line 364
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 364
c_rt_lib0clear(&___nl__3);
#line 364
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 364
c_rt_lib0move(&___nl__3,___get_global_const(176));
#line 364
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 364
c_rt_lib0clear(&___nl__3);
#line 364
c_rt_lib0clear(&___nl__0);
#line 364
c_rt_lib0clear(&___nl__1);
#line 364
return ___nl__2;
#line 364
c_rt_lib0clear(&___nl__2);
#line 364
c_rt_lib0clear(&___nl__0);
#line 364
c_rt_lib0clear(&___nl__1);
#line 364
return NULL;
}

ImmT generator_java_priv0print_return(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 368
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 369
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(234)));
#line 369
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 371
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(211)));
#line 371
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 371
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 371
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 371
nl_die_arg(___nl__2);
#line 369
label_2:
#line 369
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(234)));
#line 370
c_rt_lib0move(&___nl__4,___get_global_const(348));
#line 370
c_rt_lib0move(&___nl__5, generator_java_priv0print_register_getter(___nl__3));
#line 370
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 370
c_rt_lib0clear(&___nl__5);
#line 370
c_rt_lib0move(&___nl__5,___get_global_const(311));
#line 370
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 370
c_rt_lib0clear(&___nl__5);
#line 370
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 370
c_rt_lib0clear(&___nl__4);
#line 370
c_rt_lib0clear(&___nl__3);
#line 371
goto label_1;
#line 371
label_3:
#line 372
c_rt_lib0move(&___nl__3,___get_global_const(517));
#line 372
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 372
c_rt_lib0clear(&___nl__3);
#line 373
goto label_1;
#line 373
label_1:
#line 373
c_rt_lib0clear(&___nl__2);
#line 374
c_rt_lib0move(&___nl__2,___get_global_const(518));
#line 374
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 374
c_rt_lib0clear(&___nl__0);
#line 374
c_rt_lib0clear(&___nl__1);
#line 374
return ___nl__2;
#line 374
c_rt_lib0clear(&___nl__2);
#line 374
c_rt_lib0clear(&___nl__1);
#line 374
c_rt_lib0clear(&___nl__0);
#line 374
return NULL;
}

ImmT generator_java_priv0print_una_op(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_java_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 378
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 379
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 379
c_rt_lib0move(&___nl__3,___get_global_const(243));
#line 379
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 379
c_rt_lib0clear(&___nl__3);
#line 379
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 379
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 380
c_rt_lib0move(&___nl__3,___get_global_const(519));
#line 380
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 380
c_rt_lib0move(&___nl__4, generator_java_priv0print_register(___nl__5));
#line 380
c_rt_lib0clear(&___nl__5);
#line 380
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 380
c_rt_lib0clear(&___nl__4);
#line 380
c_rt_lib0move(&___nl__4,___get_global_const(469));
#line 380
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 380
c_rt_lib0clear(&___nl__4);
#line 380
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 380
c_rt_lib0clear(&___nl__3);
#line 381
goto label_1;
#line 381
label_2:
#line 382
c_rt_lib0move(&___nl__3,___get_global_const(488));
#line 382
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 382
c_rt_lib0clear(&___nl__4);
#line 382
c_rt_lib0move(&___nl__4,___get_global_const(471));
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 382
c_rt_lib0clear(&___nl__4);
#line 382
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 382
c_rt_lib0move(&___nl__4, generator_java_priv0print_register_getter(___nl__5));
#line 382
c_rt_lib0clear(&___nl__5);
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 382
c_rt_lib0clear(&___nl__4);
#line 382
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 382
c_rt_lib0clear(&___nl__4);
#line 382
c_rt_lib0move(&___nl__4, generator_java_priv0print_getter());
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 382
c_rt_lib0clear(&___nl__4);
#line 382
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 382
c_rt_lib0clear(&___nl__4);
#line 382
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 382
c_rt_lib0clear(&___nl__3);
#line 383
goto label_1;
#line 383
label_1:
#line 383
c_rt_lib0clear(&___nl__2);
#line 384
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 384
c_rt_lib0move(&___nl__2, generator_java_priv0print_register_setter(___nl__3, ___nl__1));
#line 384
c_rt_lib0clear(&___nl__3);
#line 384
c_rt_lib0move(&___nl__3,___get_global_const(311));
#line 384
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 384
c_rt_lib0clear(&___nl__3);
#line 384
c_rt_lib0clear(&___nl__0);
#line 384
c_rt_lib0clear(&___nl__1);
#line 384
return ___nl__2;
#line 384
c_rt_lib0clear(&___nl__2);
#line 384
c_rt_lib0clear(&___nl__1);
#line 384
c_rt_lib0clear(&___nl__0);
#line 384
return NULL;
}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void generator_java_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}}
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
