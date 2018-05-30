/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: PLE 2013-03-28
*/

#include </usr/include/stdlib.h>
#include </usr/include/string.h>
#include "c_std_lib.h"

static ImmT global_profile[1] = {NULL};

ImmT c_std_lib0print(ImmT ___nl__el) {
	return c_rt_lib0print(___nl__el);
}
ImmT c_std_lib0set_profile_global(ImmT ___nl__el) {
	if(global_profile[0] == NULL)
		c_rt_lib0register_const(global_profile, 1);
	c_rt_lib0copy(&global_profile[0], ___nl__el);
	return NULL;
}
ImmT c_std_lib0get_profile_global() {
	if(global_profile[0] == NULL){
		c_rt_lib0register_const(global_profile, 1);
		global_profile[0] = c_rt_lib0hash_new();
	}
	ImmT ret = NULL;
	c_rt_lib0copy(&ret, global_profile[0]);
	return ret;
}

ImmT c_std_lib0fast_substr(ImmT ___nl__0, ImmT ___nl__1, ImmT ___nl__2) {
	NlArray *arr = (NlArray*)___nl__0;
	if(arr->size!=1) nl_die_arg(___nl__0);
	ImmT strg = arr->arr[0];
	return c_std_lib0string_sub(strg, ___nl__1, ___nl__2);
}

ImmT c_std_lib0array_sub(ImmT ___nl__array, ImmT ___nl__begin, ImmT ___nl__length) {
	ImmT _out = c_rt_lib0array_new();
	int beg = getIntFromImm(___nl__begin);
	int len = getIntFromImm(___nl__length);
	NlArray *arr = (NlArray*)___nl__array;
	if(arr->size >= beg+len){
		len +=beg;
		for(;beg<len;++beg)
			c_rt_lib0array_push(&_out, arr->arr[beg]);
	} else if(arr->size > beg){
		for(;beg<arr->size;++beg)
			c_rt_lib0array_push(&_out, arr->arr[beg]);
	} else {
		nl_die();
	}
	return _out;
}

ImmT c_std_lib0array_push(ImmT *___ref___arr, ImmT ___nl__el) {
	c_rt_lib0array_push(___ref___arr, ___nl__el);
	return NULL;
}

ImmT c_std_lib0array_len(ImmT ___nl__arr) {
	return c_rt_lib0array_len(___nl__arr);
}
ImmT c_std_lib0array_pop(ImmT *___ref___arr){
	return c_rt_lib0array_pop(___ref___arr);
}

ImmT c_std_lib0hash_get_value(ImmT ___nl__hash, ImmT ___nl__key) {
	return c_rt_lib0hash_get_value(___nl__hash, ___nl__key);
}

ImmT c_std_lib0hash_has_key(ImmT ___nl__hash, ImmT ___nl__key) {
	return c_rt_lib0hash_has_key(___nl__hash, ___nl__key);
}

ImmT c_std_lib0hash_set_value(ImmT *___ref___hash, ImmT ___nl__key, ImmT ___nl__value) {
	c_rt_lib0hash_set_value(___ref___hash, ___nl__key, ___nl__value);
	return NULL;
}

ImmT c_std_lib0hash_delete(ImmT *___ref___hash, ImmT ___nl__key) {
	c_rt_lib0hash_delete(___ref___hash, ___nl__key);
	return NULL;
}

ImmT c_std_lib0hash_size(ImmT ___nl__hash) {
	return c_rt_lib0hash_size(___nl__hash);
}

ImmT c_std_lib0string_chr(ImmT ___nl__cc) {
	return c_rt_lib0string_chr(___nl__cc);
}

ImmT c_std_lib0string_ord(ImmT ___nl__c) {
	return c_rt_lib0string_ord(___nl__c);
}

ImmT c_std_lib0string_length(ImmT ___nl__s) {
	return c_rt_lib0string_length(___nl__s);
}
int *compute_prefix_function(const char *pattern, int psize){
	int k = -1;
	int i = 1;
	int *pi = (int*)alloc_mem(sizeof(int)*(psize+1));
	if (!pi)
		nl_die();

	pi[0] = k;
	for (i = 1; i < psize; i++) {
		while (k > -1 && pattern[k+1] != pattern[i])
			k = pi[k];
		if (pattern[i] == pattern[k+1])
			k++;
		pi[i] = k;
	}
	return pi;
}
int kmp_index(char *str, int l_s, char *fin, int l_f, int start){
	int i, k = -1;
	int *pi = compute_prefix_function(fin, l_f);
	for (i = start; i < l_s; ++i) {
		while (k > -1 && fin[k+1] != str[i]) k = pi[k];
		if (str[i] == fin[k+1]) k++;
		if (k == l_f - 1){
			free_mem(pi, sizeof(int)*(l_f+1));
			return i-k;
		}
	}
	free_mem(pi, sizeof(int)*(l_f+1));
	return -1;
}
int kmp_replace(char *str, int l_s, const char *old, int l_o, const char *_new, int l_n, char **_out, int *s_out){
	int i,j,l_d, k = -1, d=0, count=0;
	int *pi = compute_prefix_function(old, l_o);
	for (i = 0; i < l_s; ++i) {
		while (k > -1 && old[k+1] != str[i]) k = pi[k];
		if (str[i] == old[k+1]) k++;
		if (k == l_o - 1){
			++count;
			k=-1;
		}
	}
	l_d = l_s + (l_n-l_o)*count;
	if(l_d<0) nl_die();
	*s_out = l_d+1;
	if(*s_out < l_s) *s_out = l_s;
	
	char *dest = (char*)alloc_mem(sizeof(char) * (*s_out));
	k = -1;
	d = 0;
	for (i = 0; i < l_s; ++i,++d) {
		while (k > -1 && old[k+1] != str[i]) k = pi[k];
		if (str[i] == old[k+1]) k++;
		if (k == l_o - 1){
			for(j=0;j<l_n;++j)
				dest[d-k+j] = _new[j];
			d = d - l_o + l_n;
			k=-1;
		} else
			dest[d] = str[i];
	}
	free_mem(pi, sizeof(int)*(l_o+1));
	dest[l_d] = '\0';
	(*_out) = dest;
	return l_d;
}

ImmT c_std_lib0string_index(ImmT ___nl__str, ImmT ___nl__substr, ImmT ___nl__start) {
	NlString *oI = toStringIfSim(___nl__substr);
	if(oI->length == 0){
		nl_die();
		ImmT tmp = NULL;
		c_rt_lib0copy(&tmp, ___nl__start);
		c_rt_lib0clear((void**)&oI);
		return tmp;
	}
	NlString *sI = toStringIfSim(___nl__str);
	int beg = getIntFromImm(___nl__start);
	if(beg<0) nl_die();
	int ret = kmp_index(sI->s, sI->length, oI->s, oI->length, beg);
	c_rt_lib0clear((void**)&sI);
	c_rt_lib0clear((void**)&oI);
	return c_rt_lib0int_new(ret);
}

ImmT c_std_lib0string_sub(ImmT ___nl__strg, ImmT ___nl__start, ImmT ___nl__length) {
	char *_out;
	int beg = getIntFromImm(___nl__start);
	if(beg<0) nl_die();
	int len = getIntFromImm(___nl__length);
	if(len<0) nl_die();
	NlString *str = toStringIfSim(___nl__strg);
	if(str->length >= beg+len){
		_out = (char*)alloc_mem(sizeof(char) * (len+1));
		memcpy(_out, str->s+beg, sizeof(char) * len);
		_out[len] = '\0';
	} else if(str->length > beg){
		len = str->length - beg;
		if(len<0) nl_die();
		_out = (char*)alloc_mem(sizeof(char) * (len+1));
		memcpy(_out, str->s+beg, sizeof(char) * (len));
		_out[len] = '\0';
	} else {
		c_rt_lib0clear((void**)&str);
		return c_rt_lib0string_new("");
	}
	c_rt_lib0clear((void**)&str);
	return c_rt_lib0string_new_alloc(_out, len, len+1);
}
ImmT c_std_lib0string_get_char_code(ImmT ___nl__strI, ImmT ___nl__position) {
	NlString *str = toStringIfSim(___nl__strI);
	INT pos = getIntFromImm(___nl__position);
	if(pos<0 || pos >= str->length) nl_die();
	ImmT ret = c_rt_lib0int_new(((unsigned char*)(str)->s)[pos]);
	c_rt_lib0clear((void**)&str);
	return ret;
}

ImmT c_std_lib0string_replace(ImmT ___nl__str, ImmT ___nl__old, ImmT ___nl__new_part) {
	NlString *sI = toStringIfSim(___nl__str);
	if(sI->length == 0) return (ImmT)sI;
	NlString *oI = toStringIfSim(___nl__old);
	NlString *nI = toStringIfSim(___nl__new_part);
	char *_out;
	int _len;
	if(oI->length == 0) nl_die();
	int l = kmp_replace(sI->s, sI->length, oI->s, oI->length, nI->s, nI->length, &_out, &_len);
	c_rt_lib0clear((void**)&sI);
	c_rt_lib0clear((void**)&oI);
	c_rt_lib0clear((void**)&nI);
	return c_rt_lib0string_new_alloc(_out, l, _len);
}

static char hex(char a) {
	if (a < 10)
		return '0' + a;
	return 'a' + a - 10;
}

ImmT c_std_lib0string_escape2hex31(ImmT ___nl__str) {
	NlString *sI = toStringIfSim(___nl__str);
	int counter = 0;
	for (int i = 0; i < sI->length; ++i)
		counter += (sI->s[i] >= 0) & (sI->s[i] < 32);
	if (counter == 0)
		return (ImmT)sI;
	int len = sI->length + 3 * counter;
	char *result = (char*)alloc_mem(len * sizeof(char));
	int j = 0;
	for (int i = 0; i < sI->length; ++i) {
		if (sI->s[i] >= 0 && sI->s[i] < 32) {
			result[j] = '\\';
			result[j + 1] = 'x';
			result[j + 2] = hex(sI->s[i] / 16);
			result[j + 3] = hex(sI->s[i] % 16);
			j += 4;
		} else {
			result[j] = sI->s[i];
			++j;
		}
	}
	return c_rt_lib0string_new_alloc(result, len, len);
}

ImmT c_std_lib0string_compare(ImmT ___nl__a, ImmT ___nl__b) {
	NlString *sI = toStringIfSim(___nl__a);
	NlString *oI = toStringIfSim(___nl__b);
	int ret = compare_strings(sI, oI);
	c_rt_lib0clear((void**)&sI);
	c_rt_lib0clear((void**)&oI);
	return c_rt_lib0int_new(ret);
}

unsigned get_char_utf8(unsigned char *utf8, int *poz){
	unsigned k1 = utf8[(*poz)++];
	if(k1<0x80) return k1;
	unsigned k2 = utf8[(*poz)++];
	if(k1<0xC0){
		nl_die();
	}
	if(k1<0xE0){
		return (k1 - 0xC0) * 64 + k2 - 0x80;
	}
	unsigned k3 = utf8[(*poz)++];
	if(k1<0xF0){
		return ((k1 - 0xE0) * 64 + k2 - 0x80) * 64 + k3 - 0x80;
	}
	unsigned k4 = utf8[(*poz)++];
	if(k1<0xF8){
		return (((k1 - 0xF0) * 64 + k2 - 0x80) * 64 + k3 - 0x80) * 64 + k4 - 0x80;
	}
	nl_die();
	return 0;
}

void set_char_utf8(unsigned char *utf8, int *poz, unsigned val){
	if(val<0x80){
		utf8[(*poz)++] = val;
		return;
	}
	if(val<0x800){
		utf8[(*poz)++] = val / 64 + 0xC0;
		utf8[(*poz)++] = val % 64 + 0x80;
		return;
	}
	if(val<0x10000){
		utf8[(*poz)++] = val / 64 / 64 + 0xE0;
		utf8[(*poz)++] = val / 64 % 64 + 0x80;
		utf8[(*poz)++] = val % 64 + 0x80;
		return;
	}
	nl_die();
}

INT get_char_utf16(unsigned char *utf16, int *poz, int is_le){
	unsigned val = utf16[(*poz)++];
	if(is_le)
		val = val + utf16[(*poz)++] * 256;
	else 
		val = val * 256 + utf16[(*poz)++];
	if(val >= 0xD800 && val <= 0xDFFF)
		return -1;
	return (INT) val;
}

void set_char_utf16(unsigned char *utf16, int *poz, unsigned val){
	if(val<0x10000){
		utf16[(*poz)++] = val % 256;
		utf16[(*poz)++] = val / 256 % 256;
	} else {
		nl_die();
	}
}

ImmT c_std_lib0string_encode_utf16(ImmT ___nl__str) {
	NlString *sI = toStringIfSim(___nl__str);
	int size = sizeof(unsigned char) * (sI->length*2 + 3);
	unsigned char *utf16 = (unsigned char *)alloc_mem(size);
	int set = 0;
	for(int get = 0; get < sI->length;){
		unsigned v = get_char_utf8((unsigned char *)sI->s, &get);
		set_char_utf16(utf16, &set, v);
	}
	utf16[set] = 0x0;
	utf16[set+1] = 0x0;
	c_rt_lib0clear((ImmT*)&sI);
	return c_rt_lib0string_new_alloc((char*)utf16, set, size);
}

ImmT c_std_lib0string_decode_utf16(ImmT ___nl__str, ImmT ___nl__a) {
	NlString *sI = toStringIfSim(___nl__str);
	int le = c_rt_lib0check_true_native(___nl__a);
	int size = sizeof(unsigned char) * (2 * sI->length + 1);
	unsigned char *utf8 = (unsigned char *)alloc_mem(size);
	int set = 0;
	for(int get = 0; get + 1 < sI->length;){
		INT v = get_char_utf16((unsigned char *)sI->s, &get, le);
		if (v != -1) {
			set_char_utf8(utf8, &set, (unsigned) v);
		} else {
			c_rt_lib0clear((ImmT*)&sI);
			return c_rt_lib0ov_arg_new(c_rt_lib0string_new("err"), c_rt_lib0string_new("Could not decode string"));
		}
	}
	utf8[set] = '\0';
	c_rt_lib0clear((ImmT*)&sI);
	return c_rt_lib0ov_arg_new(c_rt_lib0string_new("ok"), c_rt_lib0string_new_alloc((char*)utf8, set, size));
}

ImmT c_std_lib0is_array(ImmT ___nl__imm) {
	return c_rt_lib0is_array(___nl__imm);
}

ImmT c_std_lib0is_hash(ImmT ___nl__imm) {
	return c_rt_lib0is_hash(___nl__imm);
}

ImmT c_std_lib0is_sim(ImmT ___nl__imm) {
	return c_rt_lib0is_sim(___nl__imm);
}

ImmT c_std_lib0is_variant(ImmT ___nl__imm) {
	return c_rt_lib0is_variant(___nl__imm);
}

ImmT c_std_lib0exec(ImmT ___nl__func, ImmT *___ref___arr){
	ImmT var = c_rt_lib0string_new("ref");
	___nl__func = c_rt_lib0ov_as(___nl__func, var);
	c_rt_lib0clear(&var);
	ImmT ret = c_rt_lib0exec(___nl__func, ___ref___arr);
	c_rt_lib0clear(&___nl__func);
	return ret;
}
