
/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: PLE 2013-03-28
 */

#include "c_rt_lib.h"
#include "c_fe_lib.h"


#include </usr/include/stdlib.h>
#include </usr/include/string.h>
#include </usr/include/dirent.h>
#include </usr/include/unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>

ImmT c_fe_lib0print(ImmT ___nl__arg) {
	c_rt_lib0print(___nl__arg);
	printf("\n");
	fflush(stdout);
	return NULL;
}

ImmT get_ov(const char * var, ImmT val){
	ImmT str = c_rt_lib0string_new(var);
	ImmT ret = c_rt_lib0ov_arg_new(str, val);
	c_rt_lib0clear(&str);
	c_rt_lib0clear(&val);
	return ret;
}

long long get_file_size (const char * file_name){
	struct stat sb;
	if (stat (file_name, & sb) != 0) {
		fprintf(stderr, "'stat' failed for '%s'.\n", file_name);
		return -1;
	}
	return sb.st_size;
}
ImmT read_whole_file (const char * file_name){
	long long s;
	char * buf;
	FILE * f;
	unsigned bytes_read;
	int status;

	s = get_file_size (file_name);
	if(s==-1)
		return get_ov("err", c_rt_lib0string_new("'stat' failed"));
	buf = (char *)alloc_mem(s + 1);
	f = fopen (file_name, "r");
	if(!f) {
		fprintf(stderr, "Could not open '%s'.\n", file_name);
		return get_ov("err", c_rt_lib0string_new("Could not open"));
	}
	bytes_read = fread (buf, sizeof (char), s, f);
	if(bytes_read != s) {
		fprintf(stderr, "Short read of '%s': expected %lld bytes but got %u.\n", 
			file_name, s, bytes_read);
		return get_ov("err", c_rt_lib0string_new("Short read"));
	}
	status = fclose (f);
	if(status != 0) {
		fprintf(stderr, "Error closing '%s'.\n", file_name);
		return get_ov("err", c_rt_lib0string_new("Error closing"));
	}
	buf[s] = '\0';
	return get_ov("ok", c_rt_lib0string_new_alloc(buf, s, s+1));
}
ImmT c_fe_lib0file_to_string(ImmT ___nl__filename) {
	return read_whole_file(((NlString *)___nl__filename)->s);
}
ImmT save_string(const char * content, const char * file_name){
	int status;
	unsigned bytes_read;
	FILE * f;
	unsigned s = strlen(content);
	f = fopen (file_name, "w");
	if(!f) {
		fprintf(stderr, "Could not open '%s'.\n", file_name);
		return get_ov("err", c_rt_lib0string_new("Could not open file"));
	}
	bytes_read = fwrite(content, sizeof (char), s, f);
	if(bytes_read != s) {
		fprintf(stderr, "Short write of '%s': expected %u bytes but got %u.\n", file_name, s, bytes_read);
		return get_ov("err", c_rt_lib0string_new("Short write"));
	}
	status = fclose(f);
	if(status != 0) {
		fprintf(stderr, "Error closing '%s'.\n", file_name);
		return get_ov("err", c_rt_lib0string_new("Error closing"));
	}
	return get_ov("ok", c_rt_lib0string_new(""));
}
ImmT c_fe_lib0string_to_file(ImmT ___nl__filename, ImmT ___nl__content) {
	return save_string(((NlString *)___nl__content)->s, ((NlString *)___nl__filename)->s);
}

ImmT c_fe_lib0get_file_size(ImmT ___nl__filename) {
	INT s = (INT)get_file_size(((NlString *)___nl__filename)->s);
	if(s==-1)
		return get_ov("err", c_rt_lib0string_new("'stat' failed"));
	return get_ov("ok", c_rt_lib0int_new(s));
}

ImmT c_fe_lib0get_modif_time(ImmT ___nl__filename) {
	struct stat sb;
	if (stat (((NlString*)___nl__filename)->s, & sb) != 0) {
		fprintf(stderr, "'stat' failed for '%s'.\n", ((NlString*)___nl__filename)->s);
		return get_ov("err", c_rt_lib0string_new("'stat' failed"));
	}
	return get_ov("ok", c_rt_lib0int_new(sb.st_mtime));
}

ImmT get_files_rec(const char * path, ImmT *file, int deep){
	DIR *d;
	struct dirent *dir;
	d = opendir(path);
	if(d)
	{
		unsigned size = strlen(path) + 256;
		char *string = alloc_mem(size);
		while ((dir = readdir(d)) != NULL)
		{
			if(strlen(path)+strlen(dir->d_name)+2 > size){
				free_mem(string, size);
				size = strlen(path)+strlen(dir->d_name)+2;
				string = alloc_mem(size);
			}
			sprintf(string, "%s/%s", path, dir->d_name);
			struct stat st_buf;
			if (stat (string, &st_buf) != 0) {
				fprintf(stderr, "'stat' failed for '%s'.\n", string);
				return get_ov("err", c_rt_lib0string_new("'stat' failed"));
			}
			if(S_ISREG(st_buf.st_mode)){
				ImmT el = c_rt_lib0string_new(string);
				c_rt_lib0array_push(file, el);
				c_rt_lib0clear(&el);
			}
			if(deep && S_ISDIR(st_buf.st_mode)){
				if(strcmp(".",dir->d_name) == 0 || strcmp("..",dir->d_name) == 0)
					continue;
				c_rt_lib0delete(get_files_rec(string, file, deep));
			}
		}
		free_mem(string, size);
		closedir(d);
	}else{
		fprintf(stderr, "Could not open dir '%s'.\n", path);
		return get_ov("err", c_rt_lib0string_new("Could not open dir"));
	}
	return NULL;
}

ImmT c_fe_lib0get_module_files_rec(ImmT ___nl__dirname) {
	ImmT file = c_rt_lib0array_new();
	c_rt_lib0delete(get_files_rec(((NlString*)___nl__dirname)->s, &file, 1));
	return file;
}
ImmT c_fe_lib0get_module_files(ImmT ___nl__dirname) {
	ImmT file = c_rt_lib0array_new();
	ImmT ret = get_files_rec(((NlString*)___nl__dirname)->s, &file, 0);
	if(ret == NULL)
		return get_ov("ok", file);
	c_rt_lib0clear(&file);
	return ret;
}

ImmT c_fe_lib0mk_path(ImmT ___nl__path) {
	struct stat sb;
	char *npath = ((NlString *)___nl__path)->s;
	if (stat (npath, &sb) && mkdir (npath, 0777)){
		fprintf(stderr, "cannot create directory `%s'", npath);
	}
	return NULL;
}
ImmT c_fe_lib0get_time() {
	struct timeval te; 
	gettimeofday(&te, NULL);
	ImmT arr = c_rt_lib0array_new();
	ImmT sec = c_rt_lib0int_new(te.tv_sec);
	ImmT usec = c_rt_lib0int_new(te.tv_usec);
	c_rt_lib0array_push(&arr, sec);
	c_rt_lib0array_push(&arr, usec);
	c_rt_lib0clear(&sec);
	c_rt_lib0clear(&usec);
	return arr;
}
ImmT c_fe_lib0sleep(ImmT ___nl__sec){
	sleep(getIntFromImm(___nl__sec));
	return NULL;
}
ImmT c_fe_lib0exec_cmd(ImmT ___nl__cmdI) {
	NlString *cmd = toStringIfSim(___nl__cmdI);
	int ret = system(cmd->s);
	c_rt_lib0clear((ImmT*)&cmd);
	if(ret != 0) nl_die();
	return NULL;
}