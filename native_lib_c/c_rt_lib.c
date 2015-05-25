
/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: PLE 2013-01-03
 */

#include <stdarg.h>
#include </usr/include/stdio.h>
#include </usr/include/stdlib.h>
#include </usr/include/string.h>
#include </usr/include/math.h>

#include "c_rt_lib.h"
#include "c_global_const.h"

#define ___TYPE_STRING 1
#define ___TYPE_INT 2
#define ___TYPE_ARRHASH 3
#define ___TYPE_ARR 4
#define ___TYPE_OV_NONE 5
#define ___TYPE_OV 6
#define ___TYPE_FLOAT 7
#define ___TYPE_FUNC 8
#define ___TYPE_HASH 9

int IS_STRING(ImmT x) 	{return ((NlData*)x)->type == ___TYPE_STRING;}
int IS_INT(ImmT x) 		{return ((NlData*)x)->type == ___TYPE_INT;}
int IS_ARRHASH(ImmT x) 	{return ((NlData*)x)->type == ___TYPE_ARRHASH;}
int IS_ARR(ImmT x) 		{return ((NlData*)x)->type == ___TYPE_ARR;}
int IS_OV_NONE(ImmT x) 	{return ((NlData*)x)->type == ___TYPE_OV_NONE;}
int IS_OV(ImmT x) 		{return ((NlData*)x)->type == ___TYPE_OV;}
int IS_FLOAT(ImmT x)	{return ((NlData*)x)->type == ___TYPE_FLOAT;}
int IS_FUNC(ImmT x) 	{return ((NlData*)x)->type == ___TYPE_FUNC;}
int IS_HASH(ImmT x) 	{return ((NlData*)x)->type == ___TYPE_HASH;}

#define NAME(x) type_name(((NlData*)x)->type)

#define REFS(x) ((NlData*)x)->refs
#define FTABS 50
#define ITABS 30
#define DIETABS 512

#define REP(I, N) for(int I = 0; I < (N); ++I)

#define START_ARRAY_SIZE 2
#define START_ARR_HASH_SIZE 2
#define MAX_ARR_HASH_SIZE 8
#define START_HASH_SIZE MAX_ARR_HASH_SIZE*2
#define MIN_HASH_SIZE 8
#define MIN_HASH_CELL_ON_ELEM 2


long long _mem_sum = 0;
long long _free_sum = 0;

int _created[] = {0,0,0,0,0,0,0,0,0,0};
int _deleted[] = {0,0,0,0,0,0,0,0,0,0};


ImmT _false = NULL;
ImmT _true = NULL;
ImmT _array = NULL;
ImmT _hash = NULL;
ImmT _int_0 = NULL;
ImmT _int_1 = NULL;
ImmT _empty_str = NULL;
ImmT** _consts = NULL;
int* _consts_s = NULL;
int _consts_size = 0;
int _consts_capacity = 0;
ImmT _global_const_begin_ = NULL;
ImmT _global_const_end_ = NULL;
int _global_const_offset_ = 0;

char* aprint(ImmT val, int deep);
ImmT nl_die_internal(const char *format, ...);
void nl_data_init(ImmT dI, char type);
ImmT priv_to_nl_native(int i);
NlArray *priv_arr_to_change(ImmT *arrI);
void inc_ref(ImmT dI);
void dec_ref(ImmT dI);
ImmT c_rt_lib0array_new_alloc();
ImmT c_rt_lib0hash_new_alloc();
ImmT set_to_hash(NlHash* hash, ImmT key, ImmT val);

void c_rt_lib0init(){
	_global_const_offset_ = sizeof(NlInt);
	if (sizeof(NlFloat) > _global_const_offset_)
		_global_const_offset_ = sizeof(NlFloat);
	if (sizeof(NlString) > _global_const_offset_)
		_global_const_offset_ = sizeof(NlString);
	_false = c_rt_lib0ov_mk_none(c_rt_lib0string_new("FALSE"));
	_true = c_rt_lib0ov_mk_none(c_rt_lib0string_new("TRUE"));
	_array = c_rt_lib0array_new_alloc();
	_hash = c_rt_lib0hash_new_alloc();
	_int_0 = c_rt_lib0int_new(-1);
	((NlInt *)_int_0)->i = 0;
	_int_1 = c_rt_lib0int_new(-1);
	((NlInt *)_int_1)->i = 1;
	char *t = (char*)alloc_mem(sizeof(char));
	t[0] = '\0';
	_empty_str = c_rt_lib0string_new_alloc(t,0,1);
	___global_const_init();
}
void c_rt_lib0register_const(ImmT *a,int size){
	if(_consts_capacity<_consts_size+2){
		_consts_capacity=_consts_capacity*2+2;
		_consts = (ImmT **)realloc(_consts, sizeof(ImmT) * _consts_capacity);
		_consts_s = (int *)realloc(_consts_s, sizeof(int) * _consts_capacity);
	}
	_consts_s[_consts_size]=size;
	_consts[_consts_size]=a;
	++_consts_size;
}
void c_rt_lib0register_global_const(ImmT begin, ImmT end) {
	_global_const_begin_ = begin;
	_global_const_end_ = end;
}
const char* type_name(char a){
	switch(a){
		case ___TYPE_STRING: return "string";
		case ___TYPE_INT: return "int";
		case ___TYPE_ARRHASH: return "arr_hash";
		case ___TYPE_ARR: return "array";
		case ___TYPE_OV_NONE: return "ov_none";
		case ___TYPE_OV: return "ov";
		case ___TYPE_FLOAT: return "float";
		case ___TYPE_FUNC: return "func";
		case ___TYPE_HASH: return "hash";
		default: return "unknown";
	}
}
void c_rt_lib0finish(){
	c_rt_lib0clear(&_false);
	c_rt_lib0clear(&_true);
	c_rt_lib0clear(&_array);
	c_rt_lib0clear(&_hash);
	c_rt_lib0clear(&_int_0);
	c_rt_lib0clear(&_int_1);
	c_rt_lib0clear(&_empty_str);
	for(int i=0;i<_consts_size;++i){
		ImmT* arr = _consts[i];
		for(int j=0;j<_consts_s[i];++j){
			c_rt_lib0clear(&arr[j]);
		}
	}
	if (_global_const_begin_ != NULL) {
		ImmT const_element = _global_const_begin_;
		while (const_element < _global_const_end_) {
			char type = ((NlData *)const_element)->type;
			if (((NlData *)const_element)->refs == 1) {
				++_deleted[(unsigned)type];
				if (type == ___TYPE_STRING) {
					free_mem(((NlString *)const_element)->s, ((NlString*)const_element)->capacity);
				}
				const_element += _global_const_offset_;
			}
		}
	}
	free_mem(_global_const_begin_, _global_const_end_ - _global_const_begin_);
	if(_mem_sum != _free_sum)
		fprintf(stderr, "\nmemory unreleased: %d\n", (int)(_mem_sum - _free_sum));
	for(int i=1;i<=9;++i)
		if(_created[i] != _deleted[i])
			fprintf(stderr, "%s unreleased: %d\n", type_name(i), _created[i] - _deleted[i]);
}
int c_rt_lib0get_global_const_offset() {
	return _global_const_offset_;
}
void c_rt_lib0func_num_args(int a, int b, const char *s){
	if(a!=b)
		nl_die_internal("In dynamic call of function: %s, given: %d arguments, expected: %d", s, a, b);
}
ImmT c_rt_lib0exec(ImmT ___nl__func, ImmT *___ref___arrI){
	if(!IS_FUNC(___nl__func))
		nl_die_internal("can call only function: %s", NAME(___nl__func));
	if(!IS_ARR(*___ref___arrI))
		nl_die_internal("expected array: %s", NAME(*___ref___arrI));
	NlArray *arr = priv_arr_to_change(___ref___arrI);
	NlFunction *ret = (NlFunction *)___nl__func;
	ImmT (*f)(int n, ImmT *arg) = ret->f;
	return (*f)(arr->size, arr->arr);
}
ImmT c_rt_lib0func_new(ImmT (*f)(int, ImmT*), ImmT module, ImmT name){
	NlFunction *ret = (NlFunction *)alloc_mem(sizeof(NlFunction));
	nl_data_init((ImmT)ret, ___TYPE_FUNC);
	ret->module = (NlString*)module;
	ret->name = (NlString*)name;
	ret->f = f;
	return ret;
}
int eq_int_string(NlInt* a, NlString* b){
	int i = a->i;
	int len = b->length;
	if(len==0) return 0;
	char* tab = b->s;
	if(i==0&&tab[0]!='0') return 0;
	int num = atoi(tab);
	if(num!=i) return 0;
	int l = i<0;
	i = abs(i);
	l+=i>=1000000000;
	l+=i>=100000000;
	l+=i>=10000000;
	l+=i>=1000000;
	l+=i>=100000;
	l+=i>=10000;
	l+=i>=1000;
	l+=i>=100;
	l+=i>=10;
	return l+1==len;
}
void sPrintFloat(char* tab, FLOAT f){
	int i;
	sprintf(tab, "%.10f", f);
	for(i=0; tab[i] != '\0'; ++i);
	for(--i; tab[i] == '0'; --i);
	if(tab[i] == '.') --i;
	tab[i+1] = '\0';
}
int eq_float_string(NlFloat* a, NlString* b){
	char tab[FTABS];
	if(b->length>FTABS) return 0;
	sPrintFloat(tab, a->f);
	if(b->length != (int)strlen(tab)) return 0;
	return strncmp(b->s, tab, b->length);
}

int nl_compare_internal(ImmT left, ImmT right) {
	if (_global_const_begin_ != NULL && left >= _global_const_begin_ && left < _global_const_end_ 
			&& right >= _global_const_begin_ && right < _global_const_end_) {
		return left == right;
	}
	if (((NlData *)left)->type != ((NlData *)right)->type) {
		if(IS_INT(left) && IS_STRING(right))
			return eq_int_string((NlInt *)left, (NlString *)right);
		if(IS_INT(right) && IS_STRING(left))
			return eq_int_string((NlInt *)right, (NlString *)left);
			
		if(IS_INT(right) && IS_FLOAT(left))
			return ((NlInt *)right)->i == ((NlFloat *)left)->f;
		if(IS_INT(left) && IS_FLOAT(right))
			return ((NlInt *)left)->i == ((NlFloat *)right)->f;
			
		if(IS_FLOAT(left) && IS_STRING(right))
			return eq_float_string((NlFloat *)left, (NlString *)right);
		if(IS_FLOAT(right) && IS_STRING(left))
			return eq_float_string((NlFloat *)right, (NlString *)left);
		return 0;
	}
	if (((NlData *)left)->type == ___TYPE_STRING) {
		return strcmp(((NlString *)left)->s, ((NlString *)right)->s) == 0;
	} else if (((NlData *)left)->type == ___TYPE_INT) {
		return (((NlInt *)left)->i == ((NlInt *)right)->i);
	} else if (((NlData *)left)->type == ___TYPE_FLOAT) {
		return (((NlFloat *)left)->f == ((NlFloat *)right)->f);
	} else {
		return left == right;
	}
}

ImmT c_rt_lib0compare(ImmT ___nl__left, ImmT ___nl__right) {
	return c_rt_lib0int_new(nl_compare_internal(___nl__left, ___nl__right));
}

ImmT c_rt_lib0hash_mk(int nargs, ...) {
	va_list a;
	va_start(a, nargs);
	ImmT hash = c_rt_lib0hash_new();
	REP(i, nargs) {
		ImmT key = va_arg(a, ImmT);
		ImmT val = va_arg(a, ImmT);
		c_rt_lib0hash_set_value_dec(&hash, key, val);
	}
	va_end(a);
	return hash;
}
ImmT c_rt_lib0hash_mk_dec(int nargs, ...) {
	va_list a;
	va_start(a, nargs);
	ImmT hash = c_rt_lib0hash_new();
	REP(i, nargs) {
		ImmT key = va_arg(a, ImmT);
		ImmT val = va_arg(a, ImmT);
		c_rt_lib0hash_set_value_dec(&hash, key, val);
		dec_ref(val);
	}
	va_end(a);
	return hash;
}

ImmT c_rt_lib0hash_new_alloc() {
	NlArrHash *ret = (NlArrHash *)alloc_mem(sizeof(NlArrHash));
	nl_data_init((ImmT)ret, ___TYPE_ARRHASH);
	ret->size = 0;
	ret->capacity = START_ARR_HASH_SIZE;
	ret->keys = (ImmT*)alloc_mem(sizeof(ImmT) * ret->capacity);
	ret->values = (ImmT*)alloc_mem(sizeof(ImmT) * ret->capacity);
	return ret;
}
ImmT c_rt_lib0hash_new() {
	inc_ref(_hash);
	return _hash;
}

unsigned get_hash_key(ImmT key){
	NlString* str = toStringIfSim(key);
    unsigned hash = 5381;
    REP(i, str->length){
		hash += str->s[i];
        hash += (hash << 10);
        hash ^= (hash >> 6);
    }
    hash += (hash << 3);
    hash ^= (hash >> 11);
    hash += (hash << 15);
	dec_ref(str);
	return hash;
}

void resize_hash(NlHash* hash, int new_capacity) {
	int old_capacity = hash->capacity;
	NlHashNode *old_tab = hash->tab;
	hash->size = 0;
	hash->capacity = new_capacity;
	hash->tab = (NlHashNode*)alloc_mem(sizeof(NlHashNode) * new_capacity);
	REP (i, new_capacity) {
		hash->tab[i].name = NULL;
		hash->tab[i].value = NULL;
	}
	REP (i, old_capacity) {
		if (old_tab[i].name != NULL) {
			set_to_hash(hash, old_tab[i].name, old_tab[i].value);
			dec_ref(old_tab[i].name);
			dec_ref(old_tab[i].value);
		}
	}
	free_mem((void*)old_tab, sizeof(NlHashNode) * old_capacity);
}

unsigned find_hash_slot(NlHash* hash, ImmT key) {
	unsigned nr = get_hash_key(key) % hash->capacity;
	while (hash->tab[nr].name != NULL && !nl_compare_internal(hash->tab[nr].name, key)) {
		nr = (nr + 1) % hash->capacity;
	}
	return nr;
}

ImmT set_to_hash(NlHash* hash, ImmT key, ImmT val){
	if (hash->size * MIN_HASH_CELL_ON_ELEM >= hash->capacity)
		resize_hash(hash, hash->capacity * 2);
			
	unsigned nr = find_hash_slot(hash, key);
	ImmT prev = NULL;
	if (hash->tab[nr].name != NULL) {
		prev = hash->tab[nr].value;
	} else {
		hash->size++;
		inc_ref(key);
		hash->tab[nr].name = key;
	}
	inc_ref(val);
	hash->tab[nr].value = val;
	return prev;
}

ImmT set_to_arr_hash(NlArrHash* hash, ImmT key, ImmT val){
	int index = -1;
	ImmT prev = NULL;
	REP (i, hash->size) {
		if (nl_compare_internal(key, hash->keys[i])) {
			index = i;
			prev = hash->values[i];
			break;
		}
	}
	if (index == -1) {
		if (hash->capacity == hash->size) {
			int size = sizeof(ImmT) * hash->capacity;
			hash->keys = (ImmT *)realloc_mem(hash->keys, size, size*2);
			hash->values = (ImmT *)realloc_mem(hash->values, size, size*2);
			hash->capacity *= 2;
		}
		index = hash->size;
		++hash->size;
		inc_ref(key);
		hash->keys[index] = key;
	}
	inc_ref(val);
	hash->values[index] = val;
	return prev;
}

ImmT get_from_hash(NlHash* hash, ImmT key){
	return hash->tab[find_hash_slot(hash, key)].value;
}

ImmT get_from_arr_hash(NlArrHash* hash, ImmT key){
	REP (i, hash->size)
		if (nl_compare_internal(key, hash->keys[i]))
			return hash->values[i];
	return NULL;
}
void clear_hash_node(NlHashNode* node) {
	dec_ref(node->name);
	dec_ref(node->value);
	node->name = NULL;
	node->value = NULL;
}
void del_from_hash(NlHash* hash, ImmT key){
	unsigned nr = find_hash_slot(hash, key);
	if (hash->tab[nr].name == NULL)
		return;
	clear_hash_node(&(hash->tab[nr]));
	hash->size--;
	unsigned end = nr;
	while (1) {
		end = (end + 1) % hash->capacity;
		if (hash->tab[end].name == NULL)
			break;
		unsigned h = get_hash_key(hash->tab[end].name) % hash->capacity;
		if ((nr <= end) ? ((nr < h) && (h <= end)) : ((nr < h) || (h <= end))) {
			continue;
		}
		hash->tab[nr].name = hash->tab[end].name;
		hash->tab[nr].value = hash->tab[end].value;
		hash->tab[end].name = NULL;
		hash->tab[end].value = NULL;
		nr = end;
	}
	if (hash->capacity / 2 >= MIN_HASH_SIZE && hash->capacity > hash->size * 4 * MIN_HASH_CELL_ON_ELEM)
		resize_hash(hash, hash->capacity / 2);
}
void del_from_arr_hash(NlArrHash* hash, ImmT key){
	REP (i, hash->size) {
		if (nl_compare_internal(key, hash->keys[i])) {
			dec_ref(hash->keys[i]);
			dec_ref(hash->values[i]);
			while (i < hash->size - 1) {
				hash->keys[i] = hash->keys[i + 1];
				hash->values[i] = hash->values[i + 1];
				++i;
			}
			--hash->size;
			return;
		}
	}
	return;
}
NlHash *copy_hash(NlHash* hash) {
	NlHash *hcopy = (NlHash *)alloc_mem(sizeof(NlHash));
	nl_data_init((ImmT)hcopy, ___TYPE_HASH);
	hcopy->size = hash->size;
	hcopy->capacity = hash->capacity;
	hcopy->tab = (NlHashNode*)alloc_mem(sizeof(NlHashNode) * hcopy->capacity);
	REP (i, hcopy->capacity) {
		if (hash->tab[i].name != NULL) {
			inc_ref(hash->tab[i].name);
			inc_ref(hash->tab[i].value);
		}
		hcopy->tab[i].name = hash->tab[i].name;
		hcopy->tab[i].value = hash->tab[i].value;
	}
	return hcopy;
}

NlArrHash* copy_arr_hash(NlArrHash* hash) {
	NlArrHash *hcopy = (NlArrHash *)alloc_mem(sizeof(NlArrHash));
	nl_data_init((ImmT)hcopy, ___TYPE_ARRHASH);
	hcopy->size = hash->size;
	hcopy->capacity = hash->capacity;
	hcopy->keys = (ImmT*)alloc_mem(sizeof(ImmT) * hcopy->capacity);
	hcopy->values = (ImmT*)alloc_mem(sizeof(ImmT) * hcopy->capacity);
	REP (i, hcopy->size) {
		hcopy->keys[i] = hash->keys[i];
		hcopy->values[i] = hash->values[i];
		inc_ref(hcopy->keys[i]);
		inc_ref(hcopy->values[i]);
	}
	return hcopy;
}
ImmT priv_hash_to_change(ImmT *___ref___hashI) {
	if (REFS(*___ref___hashI) > 1) {
		ImmT ret = NULL;
		if(IS_ARRHASH(*___ref___hashI))	ret = copy_arr_hash((NlArrHash*) *___ref___hashI);
		else if(IS_HASH(*___ref___hashI))ret = copy_hash((NlHash*) *___ref___hashI);
		else	nl_die_internal("Hash expected %s;", NAME(*___ref___hashI));
		dec_ref(*___ref___hashI);
		*___ref___hashI = ret;
	}
	return *___ref___hashI;
}

ImmT arr_hash_to_hash(ImmT ___nl__hashI) {
	NlArrHash *hash = (NlArrHash*)___nl__hashI;
	NlHash *ret = (NlHash *)alloc_mem(sizeof(NlHash));
	nl_data_init((ImmT)ret, ___TYPE_HASH);
	ret->size = 0;
	ret->capacity = START_HASH_SIZE;
	ret->tab = (NlHashNode*)alloc_mem(sizeof(NlHashNode) * ret->capacity);
	REP (i, ret->capacity) {
		ret->tab[i].name = NULL;
		ret->tab[i].value = NULL;
	}
	REP (i, hash->size) {
		set_to_hash(ret, hash->keys[i], hash->values[i]);
	}
	return ret;
}

ImmT c_rt_lib0hash_delete(ImmT *___ref___hashI, ImmT ___nl__keyI) {
	ImmT hash = priv_hash_to_change(___ref___hashI);
	if(IS_ARRHASH(hash))	del_from_arr_hash((NlArrHash*) hash, ___nl__keyI);
	else if(IS_HASH(hash))	del_from_hash((NlHash*) hash, ___nl__keyI);
	else	nl_die_internal("Hash expected %s;", NAME(hash));
	return NULL;
}
ImmT c_rt_lib0hash_has_key(ImmT ___nl__hashI, ImmT ___nl__keyI) {
	ImmT ret = NULL;
	if(IS_ARRHASH(___nl__hashI))	ret = get_from_arr_hash((NlArrHash*) ___nl__hashI, ___nl__keyI);
	else if(IS_HASH(___nl__hashI))	ret = get_from_hash((NlHash*) ___nl__hashI, ___nl__keyI);
	else	nl_die_internal("Hash expected %s;", NAME(___nl__hashI));
	return ret == NULL ? c_rt_lib0get_false() : c_rt_lib0get_true();
}
ImmT c_rt_lib0hash_get_value(ImmT ___nl__hashI, ImmT ___nl__keyI) {
	ImmT ret = NULL;
	if(IS_ARRHASH(___nl__hashI))	ret = get_from_arr_hash((NlArrHash*) ___nl__hashI, ___nl__keyI);
	else if(IS_HASH(___nl__hashI))	ret = get_from_hash((NlHash*) ___nl__hashI, ___nl__keyI);
	else	nl_die_internal("Hash expected %s;", NAME(___nl__hashI));
	if(ret == NULL){
		nl_die_internal("no exist key: %s in hash: %s", toStringIfImm(___nl__keyI)->s, aprint(___nl__hashI, 1));
	}
	inc_ref(ret);
	return ret;
}
ImmT c_rt_lib0hash_get_value_dec(ImmT ___nl__hashI, ImmT ___nl__keyI) {
	ImmT ret = c_rt_lib0hash_get_value(___nl__hashI, ___nl__keyI);
	dec_ref(___nl__keyI);
	return ret;
}
void c_rt_lib0hash_set_value_dec(ImmT *___ref___hashI, ImmT ___nl__keyI, ImmT ___nl__val) {
	c_rt_lib0hash_set_value(___ref___hashI, ___nl__keyI, ___nl__val);
	dec_ref(___nl__keyI);
}
void c_rt_lib0hash_set_value(ImmT *___ref___hashI, ImmT ___nl__keyI, ImmT ___nl__val) {
	ImmT hash = *___ref___hashI;
	if(IS_ARRHASH(hash) && ((NlArrHash *)hash)->size == MAX_ARR_HASH_SIZE){
		hash = arr_hash_to_hash(hash);
		dec_ref(*___ref___hashI);
		*___ref___hashI = hash;
	} else
		hash = priv_hash_to_change(___ref___hashI);
	ImmT prev = NULL;
	if(IS_ARRHASH(hash))	prev = set_to_arr_hash((NlArrHash*) hash, ___nl__keyI, ___nl__val);
	else if(IS_HASH(hash))	prev = set_to_hash((NlHash*) hash, ___nl__keyI, ___nl__val);
	else	nl_die_internal("Hash expected %s;", NAME(hash));
	c_rt_lib0clear(&prev);
}
ImmT c_rt_lib0hash_size(ImmT ___nl__hashI) {
	return c_rt_lib0int_new(((NlArrHash *)___nl__hashI)->size);
}

ImmT c_rt_lib0init_iter(ImmT ___nl__hashI) {
	ImmT arr = c_rt_lib0array_new();
	c_rt_lib0array_push(&arr, ___nl__hashI);
	if(IS_ARRHASH(___nl__hashI)){
		ImmT iter = c_rt_lib0int_new(-1);
		((NlInt *)iter)->i++;
		c_rt_lib0array_push(&arr, iter);
		dec_ref(iter);
	} else if(IS_HASH(___nl__hashI)){
		NlHash *hash = (NlHash*)___nl__hashI;
		ImmT iter = c_rt_lib0int_new(-1);
		int i = 0;
		while (i < hash->capacity && hash->tab[i].name == NULL) {
			i++;
		}
		((NlInt *)iter)->i = i;
		c_rt_lib0array_push(&arr, iter);
		dec_ref(iter);
	} else
		nl_die_internal("Hash expected %s;", NAME(___nl__hashI));
	return arr;
}
ImmT c_rt_lib0get_key_iter(ImmT ___nl__iter) {
	NlArray *arr = (NlArray *)___nl__iter;
	ImmT hashI = arr->arr[0];
	INT it = ((NlInt *)arr->arr[1])->i;
	ImmT ret;
	if(IS_ARRHASH(hashI)){
		ret = ((NlArrHash *)hashI)->keys[it];
	} else if(IS_HASH(hashI)){
		ret = ((NlHash *)hashI)->tab[it].name;
	} else nl_die();
	inc_ref(ret);
	return ret;
}
ImmT c_rt_lib0next_iter(ImmT ___nl__iter) {
	NlArray *arr = (NlArray *)___nl__iter;
	ImmT hashI = arr->arr[0];
	if(IS_ARRHASH(hashI)){
		((NlInt *)arr->arr[1])->i++;
	} else if(IS_HASH(hashI)){
		int it = ((NlInt *)arr->arr[1])->i;
		it++;
		NlHash* hash = (NlHash *)hashI;
		while (it < hash->capacity && hash->tab[it].name == NULL) {
			it++;
		}
		((NlInt *)arr->arr[1])->i = it;
	} else nl_die();
	inc_ref(___nl__iter);
	return ___nl__iter;
}
ImmT c_rt_lib0is_end_hash(ImmT ___nl__iter) {
	NlArray *arr = (NlArray *)___nl__iter;
	ImmT hashI = arr->arr[0];
	INT it = ((NlInt *)arr->arr[1])->i;
	if(IS_ARRHASH(hashI)){
		return priv_to_nl_native(it >= ((NlArrHash *)hashI)->size);
	} else if(IS_HASH(hashI)){
		return priv_to_nl_native(it >= ((NlHash *)hashI)->capacity);
	} else nl_die();
	return NULL;
}

ImmT c_rt_lib0ov_arg_new(ImmT ___nl__name, ImmT ___nl__arg){
	return c_rt_lib0ov_mk_arg(toStringIfSim(___nl__name), ___nl__arg);
}
ImmT c_rt_lib0ov_none_new(ImmT ___nl__name){
	return c_rt_lib0ov_mk_none(toStringIfSim(___nl__name));
}
ImmT c_rt_lib0ov_mk_arg(ImmT ___nl__name, ImmT ___nl__arg) {
	NlOv *ret = (NlOv *) alloc_mem(sizeof(NlOv));
	nl_data_init((ImmT)ret, ___TYPE_OV);
	inc_ref(___nl__arg);
	ret->name = (NlString *)___nl__name;
	ret->value = ___nl__arg;
	return ret;
}
ImmT c_rt_lib0ov_mk_arg_dec(ImmT ___nl__name, ImmT ___nl__arg) {
	ImmT ret = c_rt_lib0ov_mk_arg(___nl__name, ___nl__arg);
	dec_ref(___nl__arg);
	return ret;
}

ImmT c_rt_lib0ov_mk_none(ImmT ___nl__name) {
	NlOvNone *ret = (NlOvNone *)alloc_mem(sizeof(NlOvNone));
	nl_data_init((ImmT)ret, ___TYPE_OV_NONE);
	ret->name = (NlString *)___nl__name;
	return ret;
}

ImmT c_rt_lib0ov_is(ImmT ___nl__variant, ImmT ___nl__is_val) {
	if(!IS_OV(___nl__variant) && !IS_OV_NONE(___nl__variant))
		nl_die_internal("expected variant: %s", NAME(___nl__variant));
	return priv_to_nl_native(nl_compare_internal(((NlOvNone *)___nl__variant)->name, ___nl__is_val));
}
ImmT c_rt_lib0ov_as(ImmT ___nl__variant, ImmT ___nl__as_val) {
	if (!IS_OV(___nl__variant)) {
		nl_die_internal("variant with argument expected: %s", NAME(___nl__variant));
	}
	NlOv *val = (NlOv *)___nl__variant;
	if (!nl_compare_internal(val->name, ___nl__as_val)) {
		nl_die_internal("variant with case %s as %s", toStringIfImm(val->name)->s, toStringIfImm(___nl__as_val)->s);
	}
	inc_ref(val->value);
	return val->value;
}
ImmT c_rt_lib0priv_is(ImmT ___nl__variant, ImmT ___nl__is_val) {
	ImmT r = c_rt_lib0ov_is(___nl__variant, ___nl__is_val);
	dec_ref(___nl__is_val);
	return r;
}
ImmT c_rt_lib0priv_as(ImmT ___nl__variant, ImmT ___nl__as_val) {
	ImmT ret = c_rt_lib0ov_as(___nl__variant, ___nl__as_val);
	dec_ref(___nl__as_val);
	return ret;
}

ImmT c_rt_lib0ov_get_value(ImmT ___nl__variant) {
	if (!IS_OV(___nl__variant)) {
		nl_die_internal("variant with argument expected: %s", NAME(___nl__variant));
	}
	NlOv *val = (NlOv *)___nl__variant;
	inc_ref(val->value);
	return val->value;
}

ImmT c_rt_lib0ov_get_element(ImmT ___nl__variant) {
	if(!IS_OV(___nl__variant) && !IS_OV_NONE(___nl__variant))
		nl_die_internal("expected variant: %s", NAME(___nl__variant));
	ImmT ret = ((NlOvNone *)___nl__variant)->name;
	inc_ref(ret);
	return ret;
}

ImmT c_rt_lib0ov_has_value(ImmT ___nl__variant) {
	if(!IS_OV(___nl__variant) && !IS_OV_NONE(___nl__variant))
		nl_die_internal("expected variant: %s", NAME(___nl__variant));
	return priv_to_nl_native(IS_OV(___nl__variant));
}

void gdb_die(const char *msg){
	exit(1);
}
ImmT nl_die_internal(const char *format, ...) {
	char buffer[DIETABS];
	va_list args;
	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);
	va_start(args, format);
	vsnprintf(buffer, DIETABS, format, args);
	va_end(args);
	fflush(stdout);
	gdb_die(buffer);
	return NULL;
}

ImmT nl_die() {
	nl_die_internal("nianio lang die failed");
	return NULL;
}
ImmT nl_die_arg(ImmT ___nl__0) {
	nl_die_internal("nianio lang die failed: \n%s", aprint(___nl__0, 3));
	return NULL;
}

void nl_data_init(ImmT dI, char type) {
	++_created[(unsigned)type];
	NlData *d = (NlData *)dI;
	d->type = type;
	d->refs = 1;
}

ImmT c_rt_lib0string_new_alloc(char *ss, int length, int capacity) {
	NlString *s = (NlString *)alloc_mem(sizeof(NlString));
	nl_data_init(s, ___TYPE_STRING);
	s->s = ss;
	s->length = length;
	s->capacity = capacity;
	return (ImmT)s;
}
ImmT c_rt_lib0string_new(const char *ss){
	int len = strlen(ss);
	if(len==0){
		inc_ref(_empty_str);
		return _empty_str;
	}
	NlString *s = (NlString *)alloc_mem(sizeof(NlString));
	nl_data_init(s, ___TYPE_STRING);
	s->length = len;
	s->capacity = s->length+1;
	s->s = (char*)alloc_mem(sizeof(char)*(s->capacity));
	memcpy(s->s, ss, sizeof(char) * s->capacity);
	return (ImmT)s;
}

void c_rt_lib0string_new_to_memory(const char *ss, ImmT memory) {
	NlString *s = (NlString *)memory;
	nl_data_init(s, ___TYPE_STRING);
	s->length = strlen(ss);
	s->capacity = s->length + 1;
	s->s = (char*)alloc_mem(sizeof(char)*(s->capacity));
	memcpy(s->s, ss, sizeof(char) * s->capacity);
}

ImmT c_rt_lib0string_chr(ImmT ___nl__sI) {
	char ss[2];
	ss[0] = (char) getIntFromImm(___nl__sI);
	ss[1] = '\0';
	return c_rt_lib0string_new(ss);
}

ImmT c_rt_lib0string_ord(ImmT ___nl__sI1) {
	NlString *sI = toStringIfSim(___nl__sI1);
	if(sI->length == 0) nl_die();
	ImmT ret = c_rt_lib0int_new(((unsigned char*)((NlString *)sI)->s)[0]);
	dec_ref(sI);
	return ret;
}

ImmT c_rt_lib0string_length(ImmT ___nl__sI1) {
	NlString *sI = toStringIfSim(___nl__sI1);
	ImmT ret = c_rt_lib0int_new(((NlString *)sI)->length);
	dec_ref(sI);
	return ret;
}

NlString* toStringIfImm(ImmT imm){
	char tab[50];
	if(IS_ARRHASH(imm)){
		sprintf(tab,"ARR_HASH(%p)", imm);
	} else if(IS_HASH(imm)){
		sprintf(tab,"HASH(%p)", imm);
	} else if(IS_ARR(imm)){
		sprintf(tab,"ARRAY(%p)", imm);
	} else if(IS_OV_NONE(imm)){
		sprintf(tab,"OV_NONE(%p)", imm);
	} else if(IS_OV(imm)){
		sprintf(tab,"OV_ARG(%p)", imm);
	} else {
		return toStringIfSim(imm);
	}
	return (NlString*)c_rt_lib0string_new(tab);
}
NlString* toStringIfSim(ImmT sim){
	if(IS_INT(sim)){
		char tab[ITABS];
		sprintf(tab,"%lld",((NlInt *)sim)->i);
		return (NlString*)c_rt_lib0string_new(tab);
	} else if(IS_FLOAT(sim)){
		char tab[FTABS];
		sPrintFloat(tab, ((NlFloat *)sim)->f);
		return (NlString*)c_rt_lib0string_new(tab);
	} else if(IS_STRING(sim)){
		inc_ref(sim);
		return (NlString*)sim;
	} else if(IS_FUNC(sim)){
		ImmT ret = c_rt_lib0string_new("::");
		ImmT ret2 = c_rt_lib0concat_new(((NlFunction *)sim)->module, ret);
		dec_ref(ret);
		ret2 = c_rt_lib0concat_add(ret2, ((NlFunction *)sim)->name);
		dec_ref(ret2);
		return (NlString*)ret2;
	} else
		nl_die_internal("can not converted to string %s;", NAME(sim));
	return NULL;
}
INT getIntFromImm(ImmT num){
	if(IS_INT(num))
		return ((NlInt *)num)->i;
	else if(IS_FLOAT(num))
		return ((NlFloat *)num)->f;
	else if(IS_STRING(num))
		return atoi(((NlString*)num)->s);
	else
		nl_die_internal("can not converted to int %s;", NAME(num));
	return 0;
}
FLOAT getFloatFromImm(ImmT num){
	if(IS_INT(num))
		return ((NlInt *)num)->i;
	else if(IS_FLOAT(num))
		return ((NlFloat *)num)->f;
	else if(IS_STRING(num))
		return atof(((NlString*)num)->s);
	else
		nl_die_internal("can not converted to float %s;", NAME(num));
	return 0;
}
int getNumberFromImm(ImmT num, FLOAT* f, INT* i){
	if(IS_INT(num)){
		*i = ((NlInt *)num)->i;
		*f = ((NlInt *)num)->i;
		return 0;
	}else if(IS_FLOAT(num)){
		*i = ((NlFloat *)num)->f;
		*f = ((NlFloat *)num)->f;
		return 1;
	}else if(IS_STRING(num)){
		char* str = ((NlString*)num)->s;
		int p = 0;
		if(((NlString*)num)->length > 0 && (str[p] == '-' || str[p] == '+')) ++p;
		if(p>=((NlString*)num)->length) nl_die_internal("can not converted string to number '%s';", ((NlString*)num)->s);
		for(;p<((NlString*)num)->length;++p) {
			if(str[p] == '.'){
				*i = atof(str);
				*f = atof(str);
				return 1;
			} else if(str[p]<'0' || str[p]>'9'){
				nl_die_internal("can not converted string to number '%s';", ((NlString*)num)->s);
			}
		}
		*i = atoi(str);
		*f = atoi(str);
		return 0;
	}else
		nl_die_internal("can not converted to number %s;", NAME(num));
	return 0;
}

ImmT concat_new_string(NlString *ls, NlString *rs) {
	int len = ls->length + rs->length;
	char *_new = (char *)alloc_mem(sizeof(char)*(len + 1));
	memcpy(_new, ls->s, sizeof(char) * ls->length);
	memcpy(_new+ls->length, rs->s, sizeof(char) * rs->length);
	_new[len] = '\0';
	return c_rt_lib0string_new_alloc(_new, len, len + 1);
}
ImmT c_rt_lib0concat_new(ImmT ___nl__left, ImmT ___nl__right) {
	NlString *ls = toStringIfSim(___nl__left);
	NlString *rs = toStringIfSim(___nl__right);
	ImmT ret = concat_new_string(ls, rs);
	dec_ref(ls);
	dec_ref(rs);
	return ret;
}
ImmT c_rt_lib0concat_add(ImmT ___nl__left, ImmT ___nl__right) {
	NlString *ls = toStringIfSim(___nl__left);
	ImmT ret = ls;
	if (REFS(ls) <= 2) {
		c_rt_lib0fast_concat(&ret, ___nl__right);
	}else{
		NlString *rs = toStringIfSim(___nl__right);
		ret = concat_new_string(ls, rs);
		dec_ref(rs);
		dec_ref(ls);
	}
	return ret;
}
ImmT c_rt_lib0fast_concat(ImmT *___ref___left, ImmT right){
	NlString *ls = (NlString*)(*___ref___left);
	NlString *rs = toStringIfSim(right);
	if(ls->capacity < ls->length + rs->length + 1){
		int size = sizeof(char)*ls->capacity;
		while(ls->capacity < ls->length + rs->length + 1){
			ls->capacity *= 2;
		}
		char * _new = (char *)alloc_mem(sizeof(char)*(ls->capacity));
		if(ls->length>0)
			memcpy(_new, ls->s, sizeof(char) * ls->length);
		free_mem(ls->s, size);
		ls->s = _new;
	}
	memcpy(ls->s+ls->length, rs->s, sizeof(char) * rs->length);
	ls->length += rs->length;
	ls->s[ls->length] = '\0';
	dec_ref(rs);
	return NULL;
}
ImmT c_rt_lib0array_new_alloc() {
	NlArray *ret = (NlArray *)alloc_mem(sizeof(NlArray));
	nl_data_init(ret, ___TYPE_ARR);
	ret->size = 0;
	ret->capacity = START_ARRAY_SIZE;
	ret->arr = (ImmT *)alloc_mem(sizeof(ImmT) * ret->capacity);
	return ret;
}

ImmT c_rt_lib0array_new() {
	inc_ref(_array);
	return _array;
}

ImmT c_rt_lib0array_len(ImmT ___nl__arrI) {
	if(!IS_ARR(___nl__arrI)) nl_die_internal("Array expected %s;", NAME(___nl__arrI));
	return c_rt_lib0int_new(((NlArray *)___nl__arrI)->size);
}

NlArray* nl_array_internal_copy(ImmT ___nl__arrI) {
	NlArray *arr = (NlArray *)___nl__arrI;
	NlArray *ret = (NlArray *)alloc_mem(sizeof(NlArray));
	nl_data_init(ret, ___TYPE_ARR);
	ret->arr = (ImmT *)alloc_mem(sizeof(ImmT) * arr->capacity);
	memcpy(ret->arr, arr->arr, sizeof(ImmT) * arr->capacity);
	ret->capacity = arr->capacity;
	ret->size = arr->size;
	REP(i, arr->size) {
		inc_ref(arr->arr[i]);
	}
	return ret;
}
NlArray *priv_arr_to_change(ImmT *___ref___arrI) {
	NlArray *arr = (NlArray *)*___ref___arrI;
	if (REFS(arr) > 1) {
		arr = nl_array_internal_copy(arr);
		dec_ref(*___ref___arrI);
		*___ref___arrI = arr;
	}
	return arr;
}

ImmT c_rt_lib0array_push(ImmT *___ref___arrI, ImmT ___nl__el) {
	if(!IS_ARR(*___ref___arrI)) nl_die_internal("Array expected %s;", NAME(*___ref___arrI));
	NlArray *arr = priv_arr_to_change(___ref___arrI);
	if (arr->size == arr->capacity) {
		int size = sizeof(ImmT) * arr->capacity;
		arr->arr = (ImmT *)realloc_mem(arr->arr, size, size*2);
		arr->capacity *= 2;
		if (arr->arr == NULL) {
			nl_die();
		}
	}
	arr->arr[arr->size] = ___nl__el;
	inc_ref(___nl__el);
	++arr->size;
	return NULL;
}

ImmT c_rt_lib0array_pop(ImmT *___ref___arrI) {
	if(!IS_ARR(*___ref___arrI)) nl_die_internal("Array expected %s;", NAME(*___ref___arrI));
	NlArray *arr = priv_arr_to_change(___ref___arrI);
	if (arr->size == 0) {
		nl_die_internal("pop on empty array");
	}
	--arr->size;
	dec_ref(arr->arr[arr->size]);
	if (arr->capacity > 2 && arr->size <= arr->capacity / 4) {
		int size = sizeof(ImmT)*arr->capacity;
		arr->arr = (ImmT *)realloc_mem(arr->arr, size, size/2);
		arr->capacity /= 2;
		if (arr->arr == NULL) {
			nl_die();
		}
	}
	return NULL;
}

ImmT c_rt_lib0int_new(INT i) {
	if(i==0){
		inc_ref(_int_0);
		return _int_0;
	}
	if(i==1){
		inc_ref(_int_1);
		return _int_1;
	}
	NlInt *ret = (NlInt *)alloc_mem(sizeof(NlInt));
	nl_data_init(ret, ___TYPE_INT);
	ret->i = i;
	return ret;
}

void c_rt_lib0int_new_to_memory(INT i, ImmT memory) {
	NlInt *ret = (NlInt *)memory;
	nl_data_init(ret, ___TYPE_INT);
	ret->i = i;
}

ImmT c_rt_lib0float_new(FLOAT f) {
	NlFloat *ret = (NlFloat *)alloc_mem(sizeof(NlFloat));
	nl_data_init(ret, ___TYPE_FLOAT);
	ret->f = f;
	return ret;
}

void c_rt_lib0float_new_to_memory(FLOAT f, ImmT memory) {
	NlFloat *ret = (NlFloat *)memory;
	nl_data_init(ret, ___TYPE_FLOAT);
	ret->f = f;
}

ImmT c_rt_lib0array_get(ImmT ___nl__arrI, ImmT ___nl__indexI) {
	NlArray *arr = (NlArray *)___nl__arrI;
	INT index = getIntFromImm(___nl__indexI);
	if (index < 0 || index >= arr->size)
		nl_die_internal("array index %d out of range, array size: %d", index, arr->size);
	ImmT ret = arr->arr[index];
	inc_ref(ret);
	return ret;
}

ImmT c_rt_lib0array_set(ImmT *___ref___arrI, ImmT ___nl__indexI, ImmT ___nl__el) {
	if(!IS_ARR(*___ref___arrI)) nl_die_internal("Array expected %s;", NAME(*___ref___arrI));
	NlArray *arr = priv_arr_to_change(___ref___arrI);
	INT index = getIntFromImm(___nl__indexI);
	if (index < 0 || index >= arr->size)
		nl_die_internal("array index %d out of range, array size: %d", index, arr->size);
	dec_ref(arr->arr[index]);
	inc_ref(___nl__el);
	arr->arr[index] = ___nl__el;
	return ___nl__el;
}

ImmT c_rt_lib0array_mk(int nargs, ...) {
	va_list a;
	va_start(a, nargs);
	ImmT arr = c_rt_lib0array_new();
	REP(i, nargs) {
		c_rt_lib0array_push(&arr, va_arg(a, ImmT));
	}
	va_end(a);
	return arr;
}
ImmT c_rt_lib0array_mk_dec(int nargs, ...) {
	va_list a;
	va_start(a, nargs);
	ImmT arr = c_rt_lib0array_new();
	REP(i, nargs) {
		ImmT arg = va_arg(a, ImmT);
		c_rt_lib0array_push(&arr, arg);
		dec_ref(arg);
	}
	va_end(a);
	return arr;
}
ImmT c_rt_lib0is_array(ImmT ___nl__imm) {
	NlData *d =  (NlData *)___nl__imm;
	if (IS_ARR(d))
		return c_rt_lib0get_true();
	return c_rt_lib0get_false();
}
ImmT c_rt_lib0is_hash(ImmT ___nl__imm) {
	NlData *d =  (NlData *)___nl__imm;
	if (IS_ARRHASH(d) || IS_HASH(d))
		return c_rt_lib0get_true();
	return c_rt_lib0get_false();
}
ImmT c_rt_lib0is_sim(ImmT ___nl__imm) {
	NlData *d =  (NlData *)___nl__imm;
	if (IS_STRING(d) || IS_INT(d) || IS_FLOAT(d) || IS_FUNC(d))
		return c_rt_lib0get_true();
	return c_rt_lib0get_false();
}
ImmT c_rt_lib0is_variant(ImmT ___nl__imm) {
	NlData *d =  (NlData *)___nl__imm;
	if (IS_OV(d) || IS_OV_NONE(d))
		return c_rt_lib0get_true();
	return c_rt_lib0get_false();
}
#define BIN_OP_NUM_TO_BOOL(OP)	\
	return priv_to_nl_native(getFloatFromImm(___nl__left) OP getFloatFromImm(___nl__right));

#define BIN_MOD_OP_NUM(OP)	\
	if(((NlData*)___nl__left)->refs==1 && is_float && IS_FLOAT(___nl__left)){	\
		((NlFloat *)___nl__left)->f OP fr;	\
		inc_ref(___nl__left);	\
		return ___nl__left;	\
	}	\
	if(((NlData*)___nl__left)->refs==1 && !is_float && IS_INT(___nl__left)){	\
		((NlInt *)___nl__left)->i OP ir;	\
		inc_ref(___nl__left);	\
		return ___nl__left;	\
	}

#define BIN_OP_NUM_GET	\
	int is_float = 0;	\
	FLOAT fl=0,fr=0;	\
	INT il=0,ir=0;	\
	is_float += getNumberFromImm(___nl__left, &fl, &il);	\
	is_float += getNumberFromImm(___nl__right, &fr, &ir);

#define BIN_OP_NUM(OP)	\
	if(is_float)	\
		return c_rt_lib0float_new(fl OP fr);	\
	else	\
		return c_rt_lib0int_new(il OP ir);

ImmT c_rt_lib0add(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_GET;
	BIN_OP_NUM(+);
}
ImmT c_rt_lib0sub(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_GET;
	BIN_OP_NUM(-);
}

ImmT c_rt_lib0mul(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_GET;
	BIN_OP_NUM(*);
}

ImmT c_rt_lib0div(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_GET;
	BIN_OP_NUM(/);
}

ImmT c_rt_lib0mod(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_GET;
	if(is_float)
		return c_rt_lib0float_new(fmod(fl, fr));
	else
		return c_rt_lib0int_new(il % ir);
}

ImmT c_rt_lib0add_mod(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_GET;
	BIN_MOD_OP_NUM(+=);
	BIN_OP_NUM(+);
}
ImmT c_rt_lib0sub_mod(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_GET;
	BIN_MOD_OP_NUM(-=);
	BIN_OP_NUM(-);
}
ImmT c_rt_lib0mul_mod(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_GET;
	BIN_MOD_OP_NUM(*=);
	BIN_OP_NUM(*);
}
ImmT c_rt_lib0div_mod(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_GET;
	BIN_MOD_OP_NUM(/=);
	BIN_OP_NUM(/);
}
ImmT c_rt_lib0mod_mod(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_GET;
	if(is_float){
		if(REFS(___nl__left)==1 && IS_FLOAT(___nl__left)){
			((NlFloat *)___nl__left)->f = fmod(fl, fr);
			inc_ref(___nl__left);
			return ___nl__left;
		}
		return c_rt_lib0float_new(fmod(fl, fr));
	}else{
		if(REFS(___nl__left)==1 && IS_INT(___nl__left)){
			((NlInt *)___nl__left)->i = il % ir;
			inc_ref(___nl__left);
			return ___nl__left;
		}
		return c_rt_lib0int_new(il % ir);
	}
}

ImmT c_rt_lib0le(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_TO_BOOL(<=);
}
ImmT c_rt_lib0lt(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_TO_BOOL(<);
}
ImmT c_rt_lib0gt(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_TO_BOOL(>);
}
ImmT c_rt_lib0ge(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_TO_BOOL(>=);
}
ImmT c_rt_lib0num_eq(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_TO_BOOL(==);
}
ImmT c_rt_lib0num_ne(ImmT ___nl__left, ImmT ___nl__right) {
	BIN_OP_NUM_TO_BOOL(!=);
}

ImmT c_rt_lib0eq(ImmT ___nl__left, ImmT ___nl__right) {
	NlString *ls = toStringIfSim(___nl__left);
	NlString *rs = toStringIfSim(___nl__right);
	ImmT ret = priv_to_nl_native(nl_compare_internal(ls, rs));
	dec_ref(ls);
	dec_ref(rs);
	return ret;
}

ImmT c_rt_lib0ne(ImmT ___nl__left, ImmT ___nl__right) {
	NlString *ls = toStringIfSim(___nl__left);
	NlString *rs = toStringIfSim(___nl__right);
	ImmT ret = priv_to_nl_native(!nl_compare_internal(ls, rs));
	dec_ref(ls);
	dec_ref(rs);
	return ret;
}

ImmT priv_to_nl_native(int arg) {
	return arg == 0 ? c_rt_lib0get_false() : c_rt_lib0get_true();
}

ImmT c_rt_lib0get_false(){
	inc_ref(_false);
	return _false;
}
ImmT c_rt_lib0get_true(){
	inc_ref(_true);
	return _true;
}

int c_rt_lib0check_true_native(ImmT ___nl__arg) {
	if(___nl__arg == _true) return 1;
	if(___nl__arg == _false) return 0;
	char *name = ((NlOv*)___nl__arg)->name->s;
	if (strcmp(name, "TRUE") == 0) {
		return 1;
	} else if (strcmp(name, "FALSE") == 0) {
		return 0;
	}
	nl_die_internal("bad variant in boolean check: %s", name);
	return 0;
}

ImmT c_rt_lib0not(ImmT ___nl__arg) {
	return priv_to_nl_native(!c_rt_lib0check_true_native(___nl__arg));
}

ImmT c_rt_lib0unary_minus(ImmT ___nl__arg) {
	FLOAT f;
	INT i;
	if(getNumberFromImm(___nl__arg, &f, &i))
		return c_rt_lib0float_new(-f);
	else
		return c_rt_lib0int_new(-i);
	return NULL;
}

ImmT c_rt_lib0unary_plus(ImmT ___nl__arg) {
	inc_ref(___nl__arg);
	return ___nl__arg;
}

ImmT c_rt_lib0get_ref_hash(ImmT ___nl__hashI, ImmT ___nl__keyI){
	ImmT ret = c_rt_lib0hash_get_value(___nl__hashI, ___nl__keyI);
	if (REFS(___nl__hashI) == 1)
		dec_ref(ret);
	return ret;
}
ImmT c_rt_lib0set_ref_hash(ImmT *___ref___hashI, ImmT ___nl__key, ImmT ___nl__val){
	if(REFS(*___ref___hashI) == 1) {
		ImmT hash = *___ref___hashI;
		ImmT prev = NULL;
		if(IS_ARRHASH(hash))	prev = set_to_arr_hash((NlArrHash*) hash, ___nl__key, ___nl__val);
		else if(IS_HASH(hash))	prev = set_to_hash((NlHash*) hash, ___nl__key, ___nl__val);
		else	nl_die_internal("Hash expected %s;", NAME(hash));
		if(prev == NULL) {
			nl_die_internal("set_ref_hash no exist key: %s in hash: %s", toStringIfImm(___nl__key)->s, aprint(hash, 1));
		}
		return NULL;
	}
	c_rt_lib0hash_set_value(___ref___hashI, ___nl__key, ___nl__val);
	return NULL;
}

ImmT c_rt_lib0get_ref_arr(ImmT ___nl__arrI, ImmT ___nl__indexI){
	ImmT ret = c_rt_lib0array_get(___nl__arrI, ___nl__indexI);
	if (REFS(___nl__arrI) == 1)
		dec_ref(ret);
	return ret;
}
ImmT c_rt_lib0set_ref_arr(ImmT *___ref___arrI, ImmT ___nl__indexI, ImmT ___nl__val){
	int many = REFS(*___ref___arrI) > 1;
	NlArray *arr = priv_arr_to_change(___ref___arrI);
	INT index = getIntFromImm(___nl__indexI);
	if (index < 0 || index >= arr->size)
		nl_die_internal("array index %d out of range, array size: %d", index, arr->size);
	inc_ref(___nl__val);
	if(many) dec_ref(arr->arr[index]);
	arr->arr[index] = ___nl__val;
	return NULL;
}

ImmT c_rt_lib0print(ImmT ___nl__arg) {
	NlData *d =  (NlData *)___nl__arg;
	if (IS_STRING(d)) {
		fwrite(((NlString *)___nl__arg)->s, sizeof(char), ((NlString *)___nl__arg)->length, stdout);
	} else if (IS_INT(d)) {
		printf("%lld", ((NlInt *)___nl__arg)->i);
	} else if (IS_FLOAT(d)) {
		char tab[FTABS];
		sPrintFloat(tab, ((NlFloat *)___nl__arg)->f);
		printf("%s", tab);
	} else if (IS_FUNC(d)) {
		printf("%s::%s", ((NlFunction*)___nl__arg)->name->s, ((NlFunction*)___nl__arg)->module->s);
	} else {
		printf("ADDR:(%p)", ___nl__arg);
	}
	return NULL;
}
ImmT c_rt_lib0flush(){
	fflush(stdout);
	return NULL;
}

ImmT c_rt_lib0print_shallow(ImmT ___nl__val){
	char* str = aprint(___nl__val, 2);
	fprintf(stderr, "%s", str);
	fflush(stderr);
	free(str);
	return NULL;
}

typedef struct {
	char* str;
	int size;
	int len;
} BUFFER;

void bprintf(BUFFER *buf, int add, const char* format, ...) {
	add+=strlen(format)+2;
	if(buf->size <= buf->len+add) {
		buf->size += buf->size+add;
		buf->str = realloc(buf->str, buf->size);
	}
	va_list a;
	va_start(a, format);
	buf->len += vsnprintf(buf->str+buf->len, buf->size-buf->len, format, a);
	va_end(a);
}

char* sprint_debug(ImmT val, BUFFER *buf, int deep){
	if (val == NULL) {
		bprintf(buf, 0, "NULL");
		return buf->str;
	}
	bprintf(buf, 0, NAME(val));
	if(deep==0 && !(IS_STRING(val) || IS_INT(val) || IS_FLOAT(val) || IS_FUNC(val))){
		return buf->str;
	}
	--deep;
	int type = ((NlData *)val)->type;
	if (type == ___TYPE_STRING) {
		NlString *ss = (NlString *)val;
		bprintf(buf, ss->length, " \"%s\"; ", ss->s);
	} else if (type == ___TYPE_ARRHASH) {
		NlArrHash *hash = (NlArrHash *)val;
		bprintf(buf, 10, " %d{",hash->size);
		REP(i, hash->size){
			sprint_debug(hash->keys[i], buf, deep);
			bprintf(buf, 0, "=>");
			sprint_debug(hash->values[i], buf, deep);
			bprintf(buf, 0, ", ");
		}
		bprintf(buf, 0, "}; ");
	} else if (type == ___TYPE_HASH) {
		NlHash *hash = (NlHash *)val;
		bprintf(buf, 10, " %d{",hash->size);
		REP (i, hash->capacity) {
			if (hash->tab[i].name != NULL) {
				sprint_debug(hash->tab[i].name, buf, deep);
				bprintf(buf, 0, "=>");
				sprint_debug(hash->tab[i].value, buf, deep);
				bprintf(buf, 0, ", ");
			}
		}
		bprintf(buf, 0, "}; ");
	} else if (type == ___TYPE_ARR) {
		NlArray *arr = (NlArray *)val;
		bprintf(buf, 10, " %d[", arr->size);
		REP(i, arr->size){
			sprint_debug(arr->arr[i], buf, deep);
			bprintf(buf, 0, ", ");
		}
		bprintf(buf, 0, "]; ");
	} else if (type == ___TYPE_OV_NONE) {
		NlOvNone *Ov = (NlOvNone *)val;
		bprintf(buf, Ov->name->length, " :%s; ", Ov->name->s);
	} else if (type == ___TYPE_OV) {
		NlOv *Ov = (NlOv *)val;
		bprintf(buf, Ov->name->length, " :%s( ", Ov->name->s);
		sprint_debug(Ov->value, buf, deep);
		bprintf(buf, 0, "); ");
	} else if (type == ___TYPE_INT) {
		bprintf(buf, 20, " %lld; ", ((NlInt *)val)->i);
	} else if (type == ___TYPE_FLOAT) {
		bprintf(buf, 20, " %f; ", ((NlFloat *)val)->f);
	} else if (type == ___TYPE_FUNC) {
		NlFunction *f = (NlFunction *)val;
		bprintf(buf, f->name->length + f->module->length, " \"%s::%s\"; ", f->name->s, f->module->s);
	} else {
		bprintf(buf, 10, " %d; ", type);
	}
	return buf->str;
}
char* aprint(ImmT val, int deep){
	BUFFER buf;
	buf.len = buf.size = 0;
	buf.str = NULL;
	return sprint_debug(val, &buf, deep);
}

void* alloc_mem(int size){
	_mem_sum += size;
	void* ret = malloc(size);
	if(ret==NULL)
		nl_die_internal("can not alloc %d bytes;", size);
	return ret;
}
void* realloc_mem(void* ptr, int sold, int snew){
	_free_sum += sold;
	_mem_sum += snew;
	return realloc(ptr, snew);
}
void free_mem(void* ptr, int size){
	free(ptr);
	_free_sum += size;
}
void checktype(ImmT arg){
	NlData *d = (NlData *)arg;
	if(d->type>9 || d->type<1) nl_die_internal("checktype %d", d->type);
	if(d->refs<=0) nl_die_internal("checkrefs %d", d->refs);
}
void c_rt_lib0move(ImmT *___ref___left, ImmT ___nl__right){
	if(*___ref___left!=NULL) dec_ref(*___ref___left);
	*___ref___left = ___nl__right;
}
void c_rt_lib0copy(ImmT *___ref___left, ImmT ___nl__right){
	inc_ref(___nl__right);
	if(*___ref___left!=NULL) dec_ref(*___ref___left);
	*___ref___left = ___nl__right;
}
void c_rt_lib0clear(ImmT *___ref___arg){
	if(*___ref___arg == NULL) return;
	dec_ref(*___ref___arg);
	*___ref___arg = NULL;
}
void c_rt_lib0delete(ImmT ___nl__arg){
	if(___nl__arg == NULL) return;
	dec_ref(___nl__arg);
}
void c_rt_lib0arg_val(ImmT ___nl__arg){
	inc_ref(___nl__arg);
}

ImmT c_rt_lib0gen_imm(ImmT imm){
	((NlData*)imm)->refs--;
	return imm;
}

void inc_ref(ImmT dI) {
	checktype(dI);
	++((NlData*)dI)->refs;
}

void dec_ref(ImmT dI) {
	NlData *d = (NlData *)dI;
	checktype(dI);
	--d->refs;
	if (d->refs == 0) {
		int type = d->type;
		if (type == ___TYPE_ARR) {
			NlArray *arr = (NlArray *)d;
			REP(i, arr->size) {
				dec_ref(arr->arr[i]);
			}
			free_mem(arr->arr, sizeof(ImmT)*arr->capacity);
			free_mem(dI, sizeof(NlArray));
		} else if (type == ___TYPE_INT) {
			free_mem(dI, sizeof(NlInt));
		} else if (type == ___TYPE_FLOAT) {
			free_mem(dI, sizeof(NlFloat));
		} else if (type == ___TYPE_STRING) {
			free_mem(((NlString *)d)->s, ((NlString*)dI)->capacity);
			free_mem(dI, sizeof(NlString));
		} else if (type == ___TYPE_ARRHASH) {
			NlArrHash *hash = (NlArrHash *)d;
			REP(i, hash->size) {
				dec_ref(hash->values[i]);
				dec_ref(hash->keys[i]);
			}
			free_mem(hash->values, sizeof(ImmT)*hash->capacity);
			free_mem(hash->keys, sizeof(ImmT)*hash->capacity);
			free_mem(dI, sizeof(NlArrHash));
		} else if (type == ___TYPE_HASH) {
			NlHash *hash = (NlHash *)d;
			REP (i, hash->capacity) {
				if (hash->tab[i].name != NULL) {
					clear_hash_node(&(hash->tab[i]));
				}
			}
			free_mem(hash->tab, sizeof(NlHashNode) * hash->capacity);
			free_mem(hash, sizeof(NlHash));
		} else if (type == ___TYPE_OV_NONE) {
			NlOvNone *ov = (NlOvNone *)d;
			dec_ref((ImmT)ov->name);
			free_mem(dI, sizeof(NlOvNone));
		} else if (type == ___TYPE_OV) {
			NlOv *ov = (NlOv *)d;
			dec_ref((ImmT)ov->name);
			dec_ref(ov->value);
			free_mem(dI, sizeof(NlOv));
		} else if (type == ___TYPE_FUNC) {
			NlFunction *func = (NlFunction *)d;
			dec_ref((ImmT)func->name);
			dec_ref((ImmT)func->module);
			free_mem(dI, sizeof(NlFunction));
		} else {
			nl_die_internal("unimplementing deleting type");
		}
		++_deleted[(unsigned)type];
	}
}

