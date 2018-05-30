/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: AJF 2014-02-14
*/

var instadb;
(function(_namespace, undefined) {
	_namespace.c_std_lib = {};

	_namespace.c_std_lib.fast_substr = function(sarr, start, length) {
		if (sarr.len() != 1)
			nl_die();
		return _namespace.c_std_lib.string_sub(sarr.get_index_int(0), start, length);
	}

	_namespace.c_std_lib.array_sub = function(array, begin, length) {
		return array.subarray(begin, length);
	}

	_namespace.c_std_lib.array_sort = function(arr, func) {
		var result = arr.as_arr();
		var f = window[_namespace.c_std_lib_priv.get_fun_name(func)];
		result.sort(function(a, b) {
			return _namespace.c_rt_lib.check_true_native(f(a, b));
		});
		return _namespace.imm_arr(result);
	}

	_namespace.c_std_lib.array_push = function(/*ref*/arr, el) {
		arr.value = arr.value.push(el);
	}

	_namespace.c_std_lib.array_len = function(arr) {
		return _namespace.c_rt_lib.array_len(arr);
	}

	_namespace.c_std_lib.array_pop = function(/*ref*/arr) {
		arr.value = arr.value.pop();
	}

	_namespace.c_std_lib.hash_get_value = function(hash, key) {
		return _namespace.c_rt_lib.hash_get_value(hash, key);
	}

	_namespace.c_std_lib.hash_has_key = function(hash, key) {
		return _namespace.c_rt_lib.native_to_nl(hash.has_key(key));
	}

	_namespace.c_std_lib.hash_set_value = function(/*ref*/hash, key, value) {
		_namespace.c_rt_lib.hash_set_value(hash, key, value);
	}

	_namespace.c_std_lib.hash_delete = function(/*ref*/hash, key) {
		hash.value = hash.value.delete_key(key);
	}

	_namespace.c_std_lib.hash_size = function(hash) {
		return hash.hash_size();
	}

	_namespace.c_std_lib.string_chr = function(code) {
		return _namespace.imm_str(String.fromCharCode(code.as_int()));
	}

	_namespace.c_std_lib.string_ord = function(str) {
		return _namespace.imm_int(str.as_byte_string().charCodeAt(0));
	}

	_namespace.c_std_lib.string_length = function(s) {
		return _namespace.imm_int(s.as_byte_string().length);
	}

	_namespace.c_std_lib.string_index = function(str, substr, start) {
		return _namespace.imm_int(str.as_byte_string().indexOf(substr.as_byte_string(), start.as_int()));
	}

	_namespace.c_std_lib.string_sub = function(str, start, length) {
		return _namespace.imm_from_byte_string(str.as_byte_string().substring(start.as_int(), start.as_int() + length.as_int()));
	}

	_namespace.c_std_lib.string_replace = function(str, old, new_part) {
		var find = old.as_byte_string().replace(/[\-\[\]\/\{\}\(\)\*\+\?\.\\\^\$\|]/g, "\\$&");
		return _namespace.imm_from_byte_string(str.as_byte_string().replace(new RegExp(find, 'g'), new_part.as_byte_string()));
	}
	
	_namespace.c_std_lib.string_escape2hex31 = function(str) {
		var digits = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'];
		var byte_str = str.as_byte_string();
		var result = '';
		var i = 0;
		var last = 0;
		while (i < byte_str.length) {
			while (i < byte_str.length && byte_str.charCodeAt(i) >= 32)
				++i;
			var x = '';
			if (i < byte_str.length)
				x = '\\x' + digits[Math.floor(byte_str.charCodeAt(i) / 16)] + digits[byte_str.charCodeAt(i) % 16];
			result += byte_str.substring(last, i) + x;
			last = ++i;
		}
		return _namespace.imm_from_byte_string(result);
	}

	_namespace.c_std_lib.string_compare = function(a, b) {
		if (a.as_byte_string() != b.as_byte_string())
			return _namespace.imm_int(a.as_byte_string() > b.as_byte_string() ? 1 : -1);
		return _namespace.imm_int(0);
	}

	_namespace.c_std_lib.is_array = function(imm) {
		return _namespace.c_rt_lib.native_to_nl(imm.get_imm_type() == 'array');
	}

	_namespace.c_std_lib.is_hash = function(imm) {
		return _namespace.c_rt_lib.native_to_nl(imm.get_imm_type() == 'hash');
	}

	_namespace.c_std_lib.is_sim = function(imm) {
		return _namespace.c_rt_lib.native_to_nl(imm.get_imm_type() == 'sim');
	}

	_namespace.c_std_lib.is_variant = function(imm) {
		return _namespace.c_rt_lib.native_to_nl(imm.get_imm_type() == 'ov');
	}

	_namespace.c_std_lib.exec = function(func, /*ref*/arr) {
		func = func.ov_as(_namespace.imm_str('ref'));
		return _namespace[func.get_value_byte_str('module').as_byte_string()]['__dyn_' + func.get_value_byte_str('name').as_byte_string()].apply(null, [arr]);
	}
})(instadb = instadb || {});
