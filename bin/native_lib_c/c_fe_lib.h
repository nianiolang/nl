
/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: PLE 2013-03-28
 */

#pragma once

#include "c_rt_lib.h"

ImmT c_fe_lib0print(ImmT arg);
ImmT c_fe_lib0file_to_string(ImmT filename);
ImmT c_fe_lib0string_to_file(ImmT filename, ImmT content);
ImmT c_fe_lib0get_file_size(ImmT filename);
ImmT c_fe_lib0get_modif_time(ImmT filename);
ImmT c_fe_lib0get_module_files(ImmT dirname);
ImmT c_fe_lib0get_module_files_rec(ImmT dirname);
ImmT c_fe_lib0mk_path(ImmT path);
ImmT c_fe_lib0get_time();
ImmT c_fe_lib0sleep(ImmT sec);
ImmT c_fe_lib0exec_cmd(ImmT cmdI);
