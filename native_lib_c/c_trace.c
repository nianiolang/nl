/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: MZU 2013-08-05
 */

#define _GNU_SOURCE
#include </usr/include/stdio.h>
#include </usr/include/stdlib.h>
#include </usr/include/string.h>

#include "c_rt_lib.h"
#include "dfile.h"


int size = 0;
int poz = 0;
char *str;

char get_char(int p){
	if(p>size)
		return '\0';
	return str[p];
}
int is_alfanum(char c){
	return (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9') || c == '_';
}
int is_num(char c){
	return c>='0' && c<='9';
}
int is_hex(char c){
	return (c>='a' && c<='f') || (c>='A' && c<='F') || (c>='0' && c<='9');
}
void* read_pointer(){
	void *ret;
	sscanf(str + poz, "%p", &ret);
	if(get_char(poz+1) == 'x') poz += 2;
	while(is_hex(get_char(poz))) ++poz;
	return ret;
}
int startsWith(const char *pre, const char *str){
    int lenpre = strlen(pre), lenstr = strlen(str);
    return lenstr < lenpre ? 0 : strncmp(pre, str, lenpre) == 0;
}
char* read_name(){
	int len = 0, i=0;
	while(1){
		if(!is_alfanum(str[poz+len])) break;
		++len;
	}
	char *ret = (char*)malloc(len+1);
	for(i=0;i<len;++i)
		ret[i] = str[poz+i];
	poz += len;
	ret[len] = '\0';
	return ret;
}

void fprintString(FILE *fout, char *s, int len){
	for(int i=0; i<len; ++i){
		if(s[i] == '"') fprintf(fout, "\"\"");
		else fprintf(fout, "%c", s[i]);
	}
}
void gdb_save_stacktrace(const char *text_in, const char *text_out){
	FILE *fin;
	FILE *fout;
	int number = 0;
	size_t nbytes = 300;
	fout = fopen(text_out, "w+");
	fin = fopen(text_in, "r");
	str = (char *) malloc (nbytes + 1);
	
	while(1){
		size = getline (&str, &nbytes, fin);
		if (size == -1) break;
		if (size == 0) break;
		str[size-1] = '\0';
		poz = 4;
		if(get_char(poz) == '0'){
			read_pointer();
			poz += 4;
		}
		char *func = read_name();
		poz += 1;
		int tmppoz = poz;
		if (strcmp(func, "gdb_die") == 0) {
			fprintf(fout, "%s\n", c_rt_lib0get_die_additional_info());
			while(get_char(tmppoz) != '"' && get_char(tmppoz) != '\0') ++tmppoz;
			fprintf(fout, "\"");
			while(1){
				char tmp = get_char(++tmppoz);
				if(tmp == '"') break;
				if(tmp == '\0') break;
				if(tmp == '\\') tmp = get_char(++tmppoz);
				if(tmp == '"') fprintf(fout, "\"");
				fprintf(fout, "%c", tmp);
			}
			fprintf(fout, "\"\n");
			fflush(fout);
		}
		tmppoz = size-3;
		while(is_num(get_char(tmppoz))) --tmppoz;
		int line = atoi(str+tmppoz+1);
		if(get_char(tmppoz) == ':') str[tmppoz] = '\0';
		while(get_char(tmppoz)!=')') --tmppoz;
		tmppoz += 5;
		fprintf(fout, "%d	%s	%s	%d", number, func, str+tmppoz, line);
		int param = 0;
		while(1) {
			if(get_char(poz) == ',') {
				poz +=2;
			} else if(get_char(poz) == '(') {
				poz +=1;
				if(get_char(poz) == ')') break;
			} else if(get_char(poz) == ')') {
				break;
			} else {
				break;
			}
			char *name = read_name();
			void *ptr = NULL;
			if(get_char(poz) == '='){
				++poz;
				ptr = read_pointer();
			}
			if(startsWith("___nl__", name) && ptr != NULL){
				ImmT saved = dfile0ssave(ptr);
				NlString* p = toStringIfSim(saved);
				fprintf(fout, "	\"p%d ", param);
				fprintString(fout, p->s, p->length);
				fprintf(fout, "\"");
			} else if(startsWith("___ref___", name) && ptr != NULL && *(ImmT*)ptr != NULL){
				ImmT saved = dfile0ssave(*(ImmT*)ptr);
				NlString* p = toStringIfSim(saved);
				fprintf(fout, "	\"p%d REF ", param);
				fprintString(fout, p->s, p->length);
				fprintf(fout, "\"");
			} else {
				fprintf(fout, "	p%d %s=%p", param, name, ptr);
			}
			fflush(fout);
			++param;
		}
		fprintf(fout, "\n");
		fflush(fout);
		++number;
	}
	free(str);
	fclose(fin);
	fclose(fout);
}
