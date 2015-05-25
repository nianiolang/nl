/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: PLE 2013-01-03
*/

#pragma once

#include </usr/include/stdio.h>

typedef double FLOAT;
typedef long long INT;
typedef void * ImmT;

typedef struct {
	char type;
	int refs;
} NlData;

typedef struct {
	NlData d;
	int length;
	int capacity;
	char *s;
} NlString;

typedef struct {
	NlData d;
	ImmT (*f)(int, ImmT*);
	NlString *module;
	NlString *name;
} NlFunction;

typedef struct {
	NlData d;
	int size;
	int capacity;
	ImmT *keys;
	ImmT *values;
} NlArrHash;

typedef struct sNlHashNode {
	ImmT name;
	ImmT value;
} NlHashNode;

typedef struct {
	NlData d;
	int size;
	int capacity;
	NlHashNode *tab;
} NlHash;

typedef struct {
	NlData d;
	NlString *name;
} NlOvNone;

typedef struct {
	NlData d;
	NlString *name;
	ImmT value;
} NlOv;

typedef struct {
	NlData d;
	int size;
	int capacity;
	ImmT *arr;
} NlArray;

typedef struct {
	NlData d;
	INT i;
} NlInt;

typedef struct {
	NlData d;
	FLOAT f;
} NlFloat;

void c_rt_lib0init();
void c_rt_lib0register_const(ImmT *,int);
void c_rt_lib0register_global_const(ImmT begin, ImmT end);
void c_rt_lib0finish();

int c_rt_lib0get_global_const_offset();

ImmT c_rt_lib0print(ImmT arg);
ImmT c_rt_lib0flush();
ImmT c_rt_lib0print_shallow(ImmT arg);

ImmT nl_die();
ImmT nl_die_arg(ImmT arg);

//func
ImmT c_rt_lib0func_new(ImmT (*f)(int, ImmT*), ImmT module, ImmT name);
void c_rt_lib0func_num_args(int a, int b, const char *s);
ImmT c_rt_lib0exec(ImmT func, ImmT *arr);

//hash
ImmT c_rt_lib0hash_new();
ImmT c_rt_lib0hash_mk(int nargs, ...);
ImmT c_rt_lib0hash_mk_dec(int nargs, ...);
ImmT c_rt_lib0hash_size(ImmT hashI);
ImmT c_rt_lib0hash_get_value_dec(ImmT hash, ImmT key);
ImmT c_rt_lib0hash_get_value(ImmT hash, ImmT key);
void c_rt_lib0hash_set_value_dec(ImmT *hash, ImmT key, ImmT val);
void c_rt_lib0hash_set_value(ImmT *hash, ImmT key, ImmT val);
ImmT c_rt_lib0hash_delete(ImmT *hash, ImmT key);
ImmT c_rt_lib0hash_has_key(ImmT hash, ImmT key);

//forh
ImmT c_rt_lib0init_iter(ImmT hashI);
ImmT c_rt_lib0get_key_iter(ImmT iter);
ImmT c_rt_lib0next_iter(ImmT iter);
ImmT c_rt_lib0is_end_hash(ImmT iter);

//ov
ImmT c_rt_lib0ov_arg_new(ImmT name, ImmT arg);
ImmT c_rt_lib0ov_none_new(ImmT name);
ImmT c_rt_lib0ov_mk_arg(ImmT name, ImmT arg);
ImmT c_rt_lib0ov_mk_arg_dec(ImmT name, ImmT arg);
ImmT c_rt_lib0ov_mk_none(ImmT name);
ImmT c_rt_lib0ov_is(ImmT variant, ImmT is_val);
ImmT c_rt_lib0ov_as(ImmT variant, ImmT as_val);
ImmT c_rt_lib0ov_get_element(ImmT variant);
ImmT c_rt_lib0ov_get_value(ImmT variant);
ImmT c_rt_lib0ov_has_value(ImmT variant);
ImmT c_rt_lib0priv_is(ImmT variant, ImmT is);
ImmT c_rt_lib0priv_as(ImmT variant, ImmT as);

//int
INT getIntFromImm(ImmT num);
ImmT c_rt_lib0int_new(INT i);
void c_rt_lib0int_new_to_memory(INT i, ImmT memory);

//float
FLOAT getFloatFromImm(ImmT num);
ImmT c_rt_lib0float_new(FLOAT f);
void c_rt_lib0float_new_to_memory(FLOAT f, ImmT memory);
//string
NlString* toStringIfSim(ImmT sim);
NlString* toStringIfImm(ImmT imm);
ImmT c_rt_lib0string_new(const char *ss);
void c_rt_lib0string_new_to_memory(const char *ss, ImmT memory);
ImmT c_rt_lib0string_new_alloc(char *ss, int length, int capacity);
ImmT c_rt_lib0string_chr(ImmT sI);
ImmT c_rt_lib0string_ord(ImmT sI);
ImmT c_rt_lib0string_length(ImmT sI);
ImmT c_rt_lib0concat_new(ImmT left, ImmT right);
ImmT c_rt_lib0concat_add(ImmT left, ImmT right);

ImmT c_rt_lib0fast_concat(ImmT *left, ImmT right);

//array
ImmT c_rt_lib0array_pop(ImmT *arrI);
ImmT c_rt_lib0array_push(ImmT *arrI, ImmT el);
ImmT c_rt_lib0array_new();
ImmT c_rt_lib0array_mk(int nargs, ...);
ImmT c_rt_lib0array_mk_dec(int nargs, ...);
ImmT c_rt_lib0array_len(ImmT arrI);
ImmT c_rt_lib0array_get(ImmT arrI, ImmT indexI);
ImmT c_rt_lib0array_set(ImmT *arrI, ImmT indexI, ImmT el);

//types
ImmT c_rt_lib0is_array(ImmT imm);
ImmT c_rt_lib0is_hash(ImmT imm);
ImmT c_rt_lib0is_sim(ImmT imm);
ImmT c_rt_lib0is_variant(ImmT imm);

//operators
ImmT c_rt_lib0eq(ImmT left, ImmT right);
ImmT c_rt_lib0ne(ImmT left, ImmT right);

ImmT c_rt_lib0add(ImmT left, ImmT right);
ImmT c_rt_lib0sub(ImmT left, ImmT right);
ImmT c_rt_lib0mul(ImmT left, ImmT right);
ImmT c_rt_lib0div(ImmT left, ImmT right);
ImmT c_rt_lib0mod(ImmT left, ImmT right);

ImmT c_rt_lib0add_mod(ImmT left, ImmT right);
ImmT c_rt_lib0sub_mod(ImmT left, ImmT right);
ImmT c_rt_lib0mul_mod(ImmT left, ImmT right);
ImmT c_rt_lib0div_mod(ImmT left, ImmT right);
ImmT c_rt_lib0mod_mod(ImmT left, ImmT right);

ImmT c_rt_lib0le(ImmT left, ImmT right);
ImmT c_rt_lib0lt(ImmT left, ImmT right);
ImmT c_rt_lib0gt(ImmT left, ImmT right);
ImmT c_rt_lib0ge(ImmT left, ImmT right);
ImmT c_rt_lib0num_eq(ImmT left, ImmT right);
ImmT c_rt_lib0num_ne(ImmT left, ImmT right);

ImmT c_rt_lib0not(ImmT arg);
ImmT c_rt_lib0unary_minus(ImmT arg);
ImmT c_rt_lib0unary_plus(ImmT arg);

//boolean
int c_rt_lib0check_true_native(ImmT imm);
ImmT c_rt_lib0get_false();
ImmT c_rt_lib0get_true();

//ref arg
ImmT c_rt_lib0get_ref_hash(ImmT hashI, ImmT keyI);
ImmT c_rt_lib0get_ref_arr(ImmT arrI, ImmT indexI);
ImmT c_rt_lib0set_ref_hash(ImmT *hashI, ImmT keyI, ImmT valI);
ImmT c_rt_lib0set_ref_arr(ImmT *arrI, ImmT indexI, ImmT valI);

//memory function
void* alloc_mem(int size);
void free_mem(void* ptr, int size);
void* realloc_mem(void* ptr, int old_size, int new_size);

//reference counting
void c_rt_lib0move(ImmT *left, ImmT right);
void c_rt_lib0copy(ImmT *left, ImmT right);
void c_rt_lib0clear(ImmT *arg);
void c_rt_lib0delete(ImmT arg);
void c_rt_lib0arg_val(ImmT arg);
ImmT c_rt_lib0gen_imm(ImmT imm);
