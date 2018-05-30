/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: AJF 2014-02-14
*/

var instadb;
(function(_namespace, undefined) {
	_namespace.c_rt_lib = {};

	(function() {
		  var formatter = {
			header: function(x, config) {
				if (typeof config !== 'undefined' && typeof config.imm_disallow !== 'undefined') {
					return null;
				}
				if (typeof x.get_imm_type === 'function') {
					if (x.get_imm_type() == 'sim') {
						return ['object', {'object' : x.as_js_str()}];
					}
					return ["span", {}, "Imm: " +   x.get_imm_type()];
				} else {
					return null;
				}
			},
			hasBody: function(x) {
				if (typeof x.get_imm_type === 'function') {
					return true;
				} else {
					return false;
				}
			},
			body: function(x) {
				var object = ["li", {}, 
					['span', {}, 'object: '], 
					['object', {'object' : x, 'config' : {imm_disallow : true}}]];
				var list = ['ol', {}];
				if (x.get_imm_type() == 'ov') {
					list.push(["li", {}, 
							['span', {}, "name : "],
							['object', {'object' : x.ov_get_label()}], 
						]);
					list.push(
						["li", {}, 
							['span', {}, 'value: '], 
							['object', {'object' : x.ov_get_value()}]
						]);
				} else if (x.get_imm_type() == 'sim') {
				} else if (x.get_imm_type() == 'array') {
					list.push(x.get_debug_body());
				} else if (x.get_imm_type() == 'hash') {
					list.push(x.get_debug_body());
				}
				list.push(object);
				return list;
			}
		  };
		  window.devtoolsFormatters = [formatter];
	  })();

	_namespace.imm_ref = function(x) {
		this.value = x;
	}

	function fromUtf8Array(byte_string) {
		var out = "", i = 0, len = byte_string.length;
		while(i < len) {
			var c = byte_string.charCodeAt(i++);
			switch (c >> 4) { 
				case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
					out += String.fromCharCode(c);
					break;
				case 12: case 13:
					var char2 = byte_string.charCodeAt(i++);
					out += String.fromCharCode(((c & 0x1F) << 6) | (char2 & 0x3F));
					break;
				case 14:
					var char2 = byte_string.charCodeAt(i++);
					var char3 = byte_string.charCodeAt(i++);
					out += String.fromCharCode(((c & 0x0F) << 12) |
								   ((char2 & 0x3F) << 6) |
								   ((char3 & 0x3F) << 0));
					break;
			}
		}
		return out;
	}
	function toUTF8Array(str) {
		var utf8 = '';
		for (var i = 0; i < str.length; i++) {
			var charcode = str.charCodeAt(i);
			if (charcode < 0x80) {
				utf8 += String.fromCharCode(charcode);
			} else if (charcode < 0x800) {
				utf8 += String.fromCharCode(0xc0 | (charcode >> 6));
				utf8 += String.fromCharCode(0x80 | (charcode & 0x3f));
			} else if (charcode < 0xd800 || charcode >= 0xe000) {
				utf8 += String.fromCharCode(0xe0 | (charcode >> 12));
				utf8 += String.fromCharCode(0x80 | ((charcode>>6) & 0x3f));
				utf8 += String.fromCharCode(0x80 | (charcode & 0x3f));
			} else {
				i++;
				charcode = (0x10000 + (((charcode & 0x3ff)<<10) | (str.charCodeAt(i) & 0x3ff)));
				utf8 += String.fromCharCode(0xf0 | (charcode >> 18));
				utf8 += String.fromCharCode(0x80 | ((charcode >> 12) & 0x3f));
				utf8 += String.fromCharCode(0x80 | ((charcode >> 6) & 0x3f));
				utf8 += String.fromCharCode(0x80 | (charcode & 0x3f));
			}
		}
		return utf8;
	}

	var from_utf8_counter = 0;
	var from_utf8_counter_len = 0;
	var to_utf8_counter = 0;
	var to_utf8_counter_len = 0;


	//NL -> JS
	function from_utf8(str) {
		++from_utf8_counter;
		from_utf8_counter_len += str.length;
		return fromUtf8Array(str);
	}

	//JS -> NL
	function to_utf8(str) {
		++to_utf8_counter;
		to_utf8_counter_len += str.length;
		return toUTF8Array(str);
	}

	_namespace.imm_deep = function(value) {
		if (typeof value == 'string') {
			return _namespace.imm_str(value);
		} else if (value instanceof Array) {
			var arr = [];
			for (var i = 0; i < value.length; ++i) {
				arr.push(_namespace.imm_deep(value[i]));
			}
			return _namespace.imm_arr(arr);
		} else if (+value == value) {
			return _namespace.imm_float(value);
		} else if (value instanceof Object) {
			var keys = {};
			for (var key in value) {
				keys[key] = _namespace.imm_deep(value[key]);
			}
			return _namespace.imm_hash(keys);
		} else {
			_namespace.nl_die();
		}
	}

	var arr_counter = 0;
	var push_counter = 0;
	var arr_copy_counter = 0;
	var arr_copy_counter_size = 0;
	_namespace.imm_print_debug = function() {
		return 'arr_counter: ' + arr_counter + "\n" +
			'push_counter: ' + push_counter + "\n" +
			'arr_copy_counter: ' + arr_copy_counter + "\n" +
			'arr_copy_counter_size: ' + arr_copy_counter_size + "\n";
	}

	_namespace.imm_arr = function(v) {
		if (v instanceof Array) {
		} else {
			_namespace.nl_die();
		}

		return new arr_priv(v.slice());
	}

	function arr_priv(v_priv) {
		this.value = v_priv;
		this.max_len = -1;
	};

	arr_priv.prototype.update_value = function() {
		if (this.max_len != -1) {
			this.value = this.value.slice(0, this.max_len);
			arr_copy_counter_size += this.max_len;
			this.max_len = -1;
			++arr_counter;
		}
	}

	arr_priv.prototype.new_array = function() {
		this.update_value();
		++arr_copy_counter;
		return this.value.slice();
	}

	arr_priv.prototype.check_index = function(idx) {
		this.update_value();
		if (idx < 0 || idx >= this.value.length) {
			_namespace.nl_die();
		}
	}

	arr_priv.prototype.set_index_int = function(idx, value) {
		this.update_value();
		var ret = this.new_array();
		this.check_index(idx);
		ret[idx] = value;
		return _namespace.imm_arr(ret);
	}

	arr_priv.prototype.get_index = function(i) {
		this.update_value();
		var idx = i.as_int();
		this.check_index(idx);
		return this.value[idx];
	}

	arr_priv.prototype.set_index = function(ind, value) {
		var idx = ind.as_int();
		return this.set_index_int(idx, value);
	}

	arr_priv.prototype.get_index_int = function(i) {
		this.update_value();
		this.check_index(i);
		return this.value[i];
	}

	arr_priv.prototype.len = function() {
		this.update_value();
		return this.value.length;
	}

	arr_priv.prototype.push = function(el) {
		this.update_value();
		_namespace.check_null(el);
		this.max_len = this.value.length;
		this.value.push(el);
		++push_counter;
		return new arr_priv(this.value);
	}

	arr_priv.prototype.get_imm_type = function() {
		return 'array';
	}

	arr_priv.prototype.subarray = function(begin, length) {
		this.update_value();
		return new arr_priv(this.value.slice(begin.as_int(), begin.as_int() + length.as_int()));
	}

	arr_priv.prototype.pop = function() {
		this.update_value();
		var ret  = this.new_array();
		ret.pop();
		return new arr_priv(ret);
	}

	arr_priv.prototype.as_arr = function() {
		this.update_value();
		return this.new_array();
	}

	arr_priv.prototype.get_debug_body = function() {
		return ['li', {}, ['span', {}, 'array'],  ['object', {'object' : this.value}]];
	}

	_namespace.imm_ov_js_str = function(str, value) {
		return _namespace.imm_ov(_namespace.imm_str(str), value);
	}

	_namespace.imm_ov = function(n, v) {
		return new ov_priv(n, v);
	}

	function ov_priv(n, v) {
		if (typeof v === 'undefined') {
			v = null;
		}
		this.name = n;
		this.value = v;
		if (this.name.get_imm_type() != 'sim') {
			_namespace.nl_die();
		}
	}

	ov_priv.prototype.ov_is = function(label) {
		return this.name.as_byte_string() == label.as_byte_string();
	}

	ov_priv.prototype.ov_has_value = function() {
		return this.value !== null;
	}

	ov_priv.prototype.ov_get_label = function() {
		return this.name;
	}

	ov_priv.prototype.ov_as = function(label) {
		if (this.value === null || this.name.as_byte_string() != label.as_byte_string()) {
			_namespace.nl_die();
		}
		return this.value;
	}

	ov_priv.prototype.ov_get_value = function() {
		return this.value;
	}

	ov_priv.prototype.ov_has_value_nl = function() {
		return _namespace.c_rt_lib.native_to_nl(this.ov_has_value());
	}
	
	ov_priv.prototype.ov_is_nl = function(label) {
		return _namespace.c_rt_lib.native_to_nl(this.ov_is(label));
	}

	ov_priv.prototype.get_imm_type = function() {
		return 'ov';
	}

	_namespace.imm_str = function(v) {
		if (typeof v === "string") {
		} else if (typeof v == "number") {
			v = v.toString();
		} else {
			_namespace.nl_die();
		}
		return _namespace.imm_from_byte_string(to_utf8(v));
	}

	_namespace.imm_from_byte_string = function(v) {
		return new str_priv(v);
	}
	
	function str_priv(v) {
		if (typeof v === "string") {
		} else if (typeof v == "number") {
			v = v.toString();
		} else {
			_namespace.nl_die();
		}
		this.value = v;
	}

	str_priv.prototype.as_js_str = function() {
		return from_utf8(this.value);
	}

	str_priv.prototype.as_float = function() {
		return parseFloat(this.value);
	}

	str_priv.prototype.as_int = function() {
		return Math.floor(parseFloat(this.value));
	}
	str_priv.prototype.get_imm_type = function() {
		return 'sim';
	}

	str_priv.prototype.as_byte_string = function() {
		return this.value;
	}

	
	_namespace.imm_int = function(v) {
		return new _namespace.imm_int_p(v);
	}

	_namespace.imm_int_p = function(v) {
		this.v = v;
	}

	_namespace.imm_int_p.prototype.as_js_str = function() {
		return this.v.toString();
	}

	_namespace.imm_int_p.prototype.as_float = function() {
		return this.v;
	}

	_namespace.imm_int_p.prototype.as_int = function() {
		return this.v;
	}

	_namespace.imm_int_p.prototype.get_imm_type = function() {
		return 'sim';
	}

	_namespace.imm_int_p.prototype.as_byte_string = function() {
		return this.v.toString();
	}

	_namespace.imm_float = function(v) {
		if (v === (v|0)) {
			return _namespace.imm_int(v);
		} else {
			return _namespace.imm_str(v.toString());
		}
	}

	function hash_copy(hash) {
		var ret = {};
		for (var key in hash) {
			ret[to_utf8(key)] = hash[key];
		}
		return ret;
	}

	function byte_hash_copy(hash) {
		var ret = {};
		for (var key in hash) {
			ret[key] = hash[key];
		}
		return ret;
	}

	var set_value_counter = 0;
	var copy_counter = 0;
	var copy_counter_size = 0;
	var old_copies = 0;

	_namespace.imm_hash_debug = function() {
		return "set_value_counter: " + set_value_counter + "\n" +
			"copy_counter: " + copy_counter + "\n" +
			"copy_counter_size: " + copy_counter_size + "\n" + 
			"old_copies" + old_copies + "\n";
	}

	function hash_len(hash) {
		return Object.keys(hash).length;
	}

	_namespace.imm_hash = function(v) {
		return new priv_hash(hash_copy(v));
	}

	function priv_hash(priv_v) {
		this.value = priv_v;

		this._old_hash = undefined;
		this._old_key = undefined;
		this._old_value = undefined;
	}

			
	priv_hash.prototype.update_hash = function() {
		if (this.value === undefined) {
			this.value = this._old_hash.get_hash_copy();
			if (this._old_value === undefined) {
				delete this.value[this._old_key];
			} else {
				this.value[this._old_key] = this._old_value;
			}
			this._old_key = undefined;
			this._old_hash = undefined;
			this._old_value = undefined;
		}
	}

	priv_hash.prototype.new_hash = function() {
		++copy_counter;
		this.update_hash();
		return byte_hash_copy(this.value);
	}

	priv_hash.prototype.get_value_byte_str = function(key) {
		this.update_hash();
		var ret = this.value[key];
		_namespace.check_null(ret);
		return ret;
	}

	priv_hash.prototype.set_value_byte_str = function(key, hash_value) {
		
		this.update_hash();
		_namespace.check_null(hash_value);
		this._old_key = key;
		this._old_value = this.value[key];
		this.value[key] = hash_value;
		this._old_hash = new priv_hash(this.value);
		this.value = undefined;
		++set_value_counter;
		return this._old_hash;
	}

	priv_hash.prototype.has_key = function(key) {
		this.update_hash();
		return key.as_byte_string() in this.value;
	}

	priv_hash.prototype.get_value = function(key) {
		this.update_hash();
		return this.get_value_byte_str(key.as_byte_string());
	}

	priv_hash.prototype.set_value = function(key, value) {
		this.update_hash();
		return this.set_value_byte_str(key.as_byte_string(), value);
	}

	priv_hash.prototype.delete_key = function(key) {
		this.update_hash();
		var ret = this.new_hash();
		var byte_str = key.as_byte_string();
		delete ret[byte_str];
		return new priv_hash(ret);
	}

	priv_hash.prototype.get_imm_type = function() {
		return 'hash';
	}

	priv_hash.prototype.hash_size = function() {
		this.update_hash();
		return _namespace.imm_int(hash_len(this.value));
	}

	priv_hash.prototype.get_debug_body = function() {
		return ['li', {}, ['span', {}, 'hash: '],  ['object', {'object' : this.value}]];
	}

	priv_hash.prototype.get_keys = function() {
		this.update_hash();
		var keys = [];
		for (var key in this.value) {
			keys.push(_namespace.imm_from_byte_string(key));
		}
		return _namespace.imm_arr(keys);
	}

	priv_hash.prototype.get_hash_copy = function() {
		this.update_hash();
		return this.new_hash();
	}

	_namespace.nl_die = function() {
		throw new Error("DIE");
	}

	_namespace.c_rt_lib.array_len = function(arr) {
		return _namespace.imm_int(arr.len());
	}

	_namespace.check_null = function(el) {
		if (typeof el === 'undefined') {
			_namespace.nl_die();
		}
	}

	_namespace.c_rt_lib.get_ref_arr = function(arr, ind) {
		return arr.get_index(ind);
	}

	_namespace.c_rt_lib.set_ref_arr = function(/*ref*/arr, ind, value) {
		arr.value = arr.value.set_index(ind, value);
	}


	_namespace.c_rt_lib.hash_get_value = function(hash, key) {
		return hash.get_value(key);
	}

	_namespace.c_rt_lib.hash_set_value = function(/*ref*/hash, key, value) {
		hash.value = hash.value.set_value(key, value);
	}

	_namespace.c_rt_lib.get_ref_hash = function(hash, key) {
		return _namespace.c_rt_lib.hash_get_value(hash, key);
	}

	_namespace.c_rt_lib.set_ref_hash = function(/*ref*/hash, key, value) {
		_namespace.c_rt_lib.hash_set_value(hash, key, value);
	}

	_namespace.c_rt_lib.init_iter = function(hash) {
		return _namespace.imm_hash({
			keys : hash.get_keys(),
			position : _namespace.imm_int(0)});
	}

	_namespace.c_rt_lib.get_key_iter = function(iter) {
		return iter.get_value_byte_str('keys').get_index(iter.get_value_byte_str('position'));
	}

	_namespace.c_rt_lib.is_end_hash = function(iter) {
		return _namespace.c_rt_lib.native_to_nl(
				iter.get_value_byte_str('position').as_int() >= 
				iter.get_value_byte_str('keys').len());
	}

	_namespace.c_rt_lib.next_iter = function(iter) {
		return iter.set_value_byte_str('position', 
				_namespace.imm_int(iter.get_value_byte_str('position').as_int() + 1));
	}

	_namespace.c_rt_lib.ov_as = function(ov, name) {
		return ov.ov_as(name);
	}

	_namespace.c_rt_lib.ov_is = function(ov, name) {
		return ov.ov_is_nl(name);
	}

	_namespace.c_rt_lib.ov_has_value = function(ov) {
		return ov.ov_has_value_nl();
	}

	_namespace.c_rt_lib.ov_get_value = function(ov) {
		return ov.ov_get_value();
	}

	_namespace.c_rt_lib.ov_get_element = function(ov) {
		return ov.ov_get_label();
	}

	_namespace.c_rt_lib.ov_arg_new = function(name, arg){
		return _namespace.imm_ov(name, arg);
	}

	_namespace.c_rt_lib.ov_none_new = function(name) {
		return _namespace.imm_ov(name, null);
	}

	_namespace.c_rt_lib.ov_mk_arg = function(name, val) {
		return _namespace.imm_ov(name, val);
	}

	_namespace.c_rt_lib.ov_mk_none = function(name) {
		return _namespace.imm_ov_js_str(name, null);
	}

	_namespace.c_rt_lib.check_true = function(bool) {
		return _namespace.c_rt_lib.check_true_native(bool) ? 1 : 0;
	}

	_namespace.c_rt_lib.check_true_native = function(bool) {
		if (bool === c_rt_lib_true) {
			return true;
		} else if (bool === c_rt_lib_false) {
			return false;
		} else {
			return bool.ov_get_label().as_byte_string() == 'TRUE';
		}
	}

	_namespace.c_rt_lib.to_nl = function(bool){
		return _namespace.c_rt_lib.native_to_nl(bool.as_int());
	}


	var c_rt_lib_true = _namespace.c_rt_lib.ov_mk_none('TRUE');
	var c_rt_lib_false = _namespace.c_rt_lib.ov_mk_none('FALSE');

	_namespace.c_rt_lib.get_false = function() {
		return c_rt_lib_false;
	}

	_namespace.c_rt_lib.get_true = function() {
		return c_rt_lib_true;
	}

	_namespace.c_rt_lib.native_to_nl = function(bool) {
		return bool ? _namespace.c_rt_lib.get_true() : _namespace.c_rt_lib.get_false();
	}

	_namespace.c_rt_lib.array_push = function(/*ref*/arr, el) {
		arr.value = arr.value.push(el);
	}

	_namespace.c_rt_lib.imm_to_float = function(el) {
		return el.as_float();
	}

	var concat_counter = 0;
	_namespace.c_rt_lib.concat = function(l, r) {
		++concat_counter;
		return _namespace.imm_from_byte_string(l.as_byte_string() + r.as_byte_string());
	}

	_namespace.c_rt_lib.eq = function(l, r) {
		return _namespace.c_rt_lib.native_to_nl(l.as_byte_string() == r.as_byte_string());
	}

	_namespace.c_rt_lib.ne = function(l, r) {
		return _namespace.c_rt_lib.native_to_nl(l.as_byte_string() != r.as_byte_string());
	}

	_namespace.c_rt_lib.float_round = function(imm_s) {
		return _namespace.imm_float(Math.round(Number(imm_s.as_byte_string())));
	}

	_namespace.c_rt_lib.bool_not = function(arg) {
		return _namespace.c_rt_lib.native_to_nl(!_namespace.c_rt_lib.check_true_native(arg));
	}

})(instadb = instadb || {});
