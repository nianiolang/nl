/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: PLE 2013-03-28
*/

#pragma once

#include "c_rt_lib.h"

ImmT c_std_lib0print(ImmT el);
ImmT c_std_lib0set_profile_global(ImmT el);
ImmT c_std_lib0get_profile_global();
ImmT c_std_lib0fast_substr(ImmT text_arr, ImmT begin, ImmT len);
ImmT c_std_lib0array_sub(ImmT arr, ImmT begin, ImmT len);
ImmT c_std_lib0array_sort(ImmT arr, ImmT func);
ImmT c_std_lib0array_push(ImmT *arr, ImmT el);
ImmT c_std_lib0array_len(ImmT arr);
ImmT c_std_lib0array_pop(ImmT *arr);
ImmT c_std_lib0hash_get_value(ImmT hash, ImmT key);
ImmT c_std_lib0hash_has_key(ImmT hash, ImmT key);
ImmT c_std_lib0hash_set_value(ImmT *hash, ImmT key, ImmT value);
ImmT c_std_lib0hash_delete(ImmT *hash, ImmT key);
ImmT c_std_lib0hash_size(ImmT hash);
ImmT c_std_lib0string_chr(ImmT cc);
ImmT c_std_lib0string_ord(ImmT c);
ImmT c_std_lib0string_length(ImmT s);
ImmT c_std_lib0string_index(ImmT s, ImmT substr, ImmT start);
ImmT c_std_lib0string_sub(ImmT strg, ImmT start, ImmT length);
ImmT c_std_lib0string_get_char_code(ImmT strI, ImmT position);
ImmT c_std_lib0string_replace(ImmT str, ImmT old, ImmT new_part);

ImmT c_std_lib0string_lc(ImmT str);
ImmT c_std_lib0string_uc(ImmT str);
ImmT c_std_lib0string_compare(ImmT a, ImmT b);


ImmT c_std_lib0is_array(ImmT imm);
ImmT c_std_lib0is_hash(ImmT imm);
ImmT c_std_lib0is_sim(ImmT imm);
ImmT c_std_lib0is_variant(ImmT imm);
ImmT c_std_lib0escape_characters(ImmT str);
ImmT c_std_lib0exec(ImmT func, ImmT *arr);
