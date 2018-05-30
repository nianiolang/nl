###
# (c) Atinea Sp. z o.o.
###


use ov;
use c_std_lib;
use string;
use hash;
use array;
use nl;
use boolean_t;
use ptd;

def dfile::deep_eq(left, right) {
	return dfile::ssave(left) eq dfile::ssave(right);
}

def dfile::rs(str, is_key) {
	var ret = {str => '', objects => {}};
	if (is_key != 0 && is_simple_string(str)) {
		sp(ref ret, str);
	} else {
		sprintstr(ref ret, str);
	}
	return ret->str;
}

def dfile::ssave(obj) : ptd::sim() {
	var state = {str => '', objects => {}};
	sprint(ref state, obj, 0, false);
	return state->str;
}

def dfile::debug(obj) : ptd::sim() {
	var state = {str => '', objects => {}};
	sprint(ref state, obj, 0, true);
	return state->str;
}

def dfile::ssave_net_format(obj) : ptd::sim() {
	var state = {str => '', objects => {}};
	print_net_format(ref state, obj);
	return state->str;
}

def eat_ws(ref state : @dfile::state_t) {
	loop {
		return if (state->pos == state->len);
		var char = string::ord(get_char(ref state));
		if (char == 9 || char == 10 || char == 13 || char == 32) {
			state->pos++;
		} else {
			return;
		}
	}
}

def get_char(ref state : @dfile::state_t) : ptd::sim() {
	return c_std_lib::fast_substr(state->str, state->pos, 1);
}

def is_ov(ref state : @dfile::state_t) : @boolean_t::type {
	return c_std_lib::fast_substr(state->str, state->pos, 7) eq 'ov::mk(';
}

def eat_non_ws(ref state : @dfile::state_t, ref error : @boolean_t::type) : ptd::sim() {
	var ret = '';
	var l = state->len;
	if (state->pos >= l) {
		error = true;
		return 'pos ' . state->pos . ': expected scalar';
	}
	loop {
		var char = get_char(ref state);
		break unless string::is_letter(char) || string::is_digit(char) || char eq '_';
		++state->pos;
		ret .= char;
		break if (state->pos >= l);
	}
	if (ret eq '') {
		error = true;
		return 'pos ' . state->pos . ': expected scalar';
	}
	return ret;
}

def parse_scalar(ref state : @dfile::state_t, ref error : @boolean_t::type) : ptd::sim() {
	eat_ws(ref state);
	if (get_char(ref state) eq '"') {
		++state->pos;
		var ret = '';
		loop {
			if (state->pos >= state->len) {
				error = true;
				return 'pos ' . state->pos . ': expected "';
			}
			var char = get_char(ref state);
			++state->pos;
			break if (char eq '"');
			if (char eq '\') {
				var n = get_char(ref state);
				if (n eq 'n') {
					ret .= string::lf();
				} elsif (n eq 'r') {
					ret .= string::r();
				} elsif (n eq 't') {
					ret .= string::tab();
				} else {
					ret .= n;
				}
				++state->pos;
			} else {
				ret .= char;
			}
		}
		return ret;
	} else {
		return eat_non_ws(ref state, ref error);
	}
}

def match_s(ref state : @dfile::state_t, pattern : ptd::sim()) : @boolean_t::type {
	var len = string::length(pattern);
	if (c_std_lib::fast_substr(state->str, state->pos, len) eq pattern) {
		state->pos += len;
		return true;
	} else {
		return false;
	}
}

def dfile::state_t() {
	return ptd::rec({str => ptd::arr(ptd::sim()), len => ptd::sim(), pos => ptd::sim()});
}

def parse(ref state : @dfile::state_t, ref error : @boolean_t::type) : ptd::ptd_im() {
	eat_ws(ref state);
	var char = get_char(ref state);
	if (char eq '{') {
		state->pos += 1;
		var hash = {};
		eat_ws(ref state);
		while (!match_s(ref state, '}')) {
			var key = parse_scalar(ref state, ref error);
			return key if error;
			eat_ws(ref state);
			if (!match_s(ref state, '=>')) {
				error = true;
				return 'pos ' . state->pos . ': expected =>';
			}
			var value = parse(ref state, ref error);
			return value if error;
			hash::set_value(ref hash, key, value);
			eat_ws(ref state);
			if (!match_s(ref state, ',')) {
				error = true;
				return 'pos ' . state->pos . ': expected ,';
			}
			eat_ws(ref state);
		}
		return hash;
	} elsif (char eq '[') {
		state->pos += 1;
		var arr = [];
		eat_ws(ref state);
		while (!match_s(ref state, ']')) {
			var value = parse(ref state, ref error);
			return value if error;
			array::push(ref arr, value);
			if (!match_s(ref state, ',')) {
				error = true;
				return 'pos ' . state->pos . ': expected ,';
			}
			eat_ws(ref state);
		}
		return arr;
	} elsif (char eq 'o' && is_ov(ref state)) {
		state->pos += 7;
		var key = parse_scalar(ref state, ref error);
		return key if error;
		eat_ws(ref state);
		if (match_s(ref state, ',')) {
			var val = parse(ref state, ref error);
			return val if error;
			eat_ws(ref state);
			if (!match_s(ref state, ')')) {
				error = true;
				return 'pos ' . state->pos . ': expected )';
			}
			return ov::mk_val(key, val);
		}
		eat_ws(ref state);
		if (!match_s(ref state, ')')) {
			error = true;
			return 'pos ' . state->pos . ': expected )';
		}
		eat_ws(ref state);
		return ov::mk(key);
	} else {
		return parse_scalar(ref state, ref error);
	}
}

def dfile::sload(str_im) : ptd::ptd_im() {
	ensure var result = dfile::try_sload(str_im);
	return result;
}

def dfile::try_sload(str_im) : ptd::var({ok => ptd::ptd_im(), err => ptd::sim()}) {
	var str = ptd::ensure(ptd::sim(), str_im);
	var state = {str => [str], pos => 0, len => string::length(str)};
	var error = false;
	match_s(ref state, 'use utf8;');
	eat_ws(ref state);
	var val = parse(ref state, ref error);
	eat_ws(ref state);
	if (!error && state->pos != state->len) {
		error = true;
		val = 'pos ' . state->pos . ': expected eof';
	}
	if (error) {
		val = ptd::ensure(ptd::sim(), val);
		return :err(val);
	} else {
		return :ok(val);
	}
}

def dfile::state_out() {
	return ptd::rec({str => ptd::sim(), objects => ptd::hash(@boolean_t::type)});
}

def sp(ref state : @dfile::state_out, str) : ptd::void() {
	state->str .= str;
}

def sprintstr(ref state : @dfile::state_out, str) : ptd::void() {
	str .= '';
	str = string::replace(str, '\', '\\');
	str = string::replace(str, '$', '\$');
	str = string::replace(str, '@', '\@');
	str = string::replace(str, '"', '\"');
	sp(ref state, '"' . str . '"');
}

def is_simple_string(str) : @boolean_t::type {
	var len = string::length(str);
	return false if len == 0;
	return false unless string::is_letter(string::substr(str, 0, 1)) || string::substr(str, 0, 1) eq '_';
	rep var i (len) {
		var c = string::substr(str, i, 1);
		return false unless string::is_letter(c) || string::is_digit(c) || c eq '_';
	}
	return true;
}

def sprint_hash_key(ref state : @dfile::state_out, str) : ptd::void() {
	if (is_simple_string(str)) {
		sp(ref state, str);
	} else {
		sprintstr(ref state, str);
	}
}

def get_ind(ind : ptd::sim()) : ptd::sim() {
	return string::char_times(string::tab(), ind);
}

def sprint_hash(ref state : @dfile::state_out, obj : ptd::ptd_im(), indent : ptd::sim(), is_debug : @boolean_t::type) : 
		ptd::void() {
	sp(ref state, '{' . string::lf());
	var keys = hash::keys(obj);
	array::sort(ref keys);
	fora var key (keys) {
		var val = hash::get_value(obj, key);
		sp(ref state, get_ind(indent + 1));
		sprint_hash_key(ref state, key);
		sp(ref state, ' => ');
		sprint(ref state, val, indent + 1, is_debug);
		sp(ref state, ',' . string::lf());
	}
	sp(ref state, get_ind(indent) . '}');
}

def handle_debug(ref state : @dfile::state_out, obj) : @boolean_t::type {
	if ((nl::is_hash(obj) || nl::is_array(obj)) && hash::has_key(state->objects, obj)) {
		sp(ref state, obj);
		return true;
	} else {
		hash::set_value(ref state->objects, obj, true);
		return false;
	}
}

def sprint(ref state : @dfile::state_out, obj : ptd::ptd_im(), indent : ptd::sim(), is_debug : @boolean_t::type) : 
		ptd::void() {
	return if is_debug && handle_debug(ref state, obj);
	if (nl::is_sim(obj)) {
		sprintstr(ref state, obj);
	} elsif (nl::is_array(obj)) {
		sp(ref state, '[' . string::lf());
		fora var el (obj) {
			sp(ref state, get_ind(indent + 1));
			sprint(ref state, el, indent + 1, is_debug);
			sp(ref state, ',' . string::lf());
		}
		sp(ref state, get_ind(indent) . ']');
	} elsif (nl::is_hash(obj)) {
		sprint_hash(ref state, obj, indent, is_debug);
	} elsif (nl::is_variant(obj)) {
		sp(ref state, 'ov::mk(');
		sprintstr(ref state, ov::get_element(obj));
		if (ov::has_value(obj)) {
			sp(ref state, ', ');
			sprint(ref state, ov::get_value(obj), indent, is_debug);
		}
		sp(ref state, ')');
	} else {
		die;
	}
}

def print_net_formatstr(ref state : @dfile::state_out, str) : ptd::void() {
	str .= '';
	str = string::replace(str, '\', '\\');
	str = string::replace(str, string::lf(), '\n');
	str = string::replace(str, '$', '\$');
	str = string::replace(str, '@', '\@');
	str = string::replace(str, '"', '\"');
	sp(ref state, '"' . str . '"');
}

def print_net_format(ref state : @dfile::state_out, obj : ptd::ptd_im()) : ptd::void() {
	if (nl::is_sim(obj)) {
		print_net_formatstr(ref state, obj);
	} elsif (nl::is_array(obj)) {
		sp(ref state, '[');
		fora var el (obj) {
			print_net_format(ref state, el);
			sp(ref state, ',');
		}
		sp(ref state, ']');
	} elsif (nl::is_hash(obj)) {
		sp(ref state, '{');
		fora var key (hash::keys(obj)) {
			var val = hash::get_value(obj, key);
			if (is_simple_string(key . '')) {
				sp(ref state, key);
			} else {
				print_net_formatstr(ref state, key);
			}
			sp(ref state, '=>');
			print_net_format(ref state, val);
			sp(ref state, ',');
		}
		sp(ref state, '}');
	} elsif (nl::is_variant(obj)) {
		sp(ref state, 'ov::mk(');
		print_net_formatstr(ref state, ov::get_element(obj));
		if (ov::has_value(obj)) {
			sp(ref state, ',');
			print_net_format(ref state, ov::get_value(obj));
		}
		sp(ref state, ')');
	} else {
		die(obj);
	}
}

