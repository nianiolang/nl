###
# (c) Atinea Sp. z o.o.
###


use string;
use ptd;
use array;
use boolean_t;

def get_tab_size() : ptd::sim() {
	return 4;
}

def get_line_width() : ptd::sim() {
	return 120;
}

def get_sep() : @wprinter::pretty_t {
	return {len => 1, el => :sep};
}

def wprinter::state_t() {
	return ptd::rec({out => ptd::sim()});
}

def is_to_long(len : ptd::sim()) : @boolean_t::type {
	return len > get_line_width();
}

def state_print(ref state : @wprinter::state_t, str : ptd::sim()) : ptd::void() {
	state->out .= str;
}

def pind(ind : ptd::sim()) : ptd::sim() {
	var r = '';
	r .= string::chr(9) rep var i (ind);
	return r;
}

def wprinter::arr_kind_t() {
	return ptd::var({array => ptd::none(), list => ptd::none(), op_list => ptd::none()});
}

def wprinter::pretty_t() {
	return ptd::rec({
			len => ptd::sim(),
			el => ptd::var({
					arr => ptd::rec({arr => @wprinter::pretty_arr_t, type => @wprinter::arr_kind_t}),
					arr_decl => ptd::rec({arr => @wprinter::pretty_arr_t, start => ptd::sim(), end => ptd::sim()}),
					bind => ptd::rec({first => @wprinter::pretty_t, second => @wprinter::pretty_t}),
					sim => ptd::sim(),
					sep => ptd::none(),
					str_arr => @wprinter::str_arr_t
				})
		});
}

def wprinter::str_arr_t() {
	return ptd::rec({arr => ptd::arr(ptd::sim()), last => ptd::var({end => ptd::none(), new_line => ptd::none()})});
}

def wprinter::pretty_arr_t() {
	return ptd::arr(@wprinter::pretty_t);
}

def wprinter::get_sep() : @wprinter::pretty_t {
	return get_sep();
}

def count_len(arr : @wprinter::pretty_arr_t) : ptd::sim() {
	var ret : ptd::sim() = 0;
	fora var el (arr) {
		ret += el->len;
	}
	return ret;
}

def wprinter::build_pretty_a(arr : @wprinter::pretty_arr_t) : @wprinter::pretty_t {
	return {len => count_len(arr), el => :arr({arr => arr, type => :array})};
}

def wprinter::build_pretty_l(arr : @wprinter::pretty_arr_t) : @wprinter::pretty_t {
	return {len => count_len(arr), el => :arr({arr => arr, type => :list})};
}

def wprinter::build_pretty_op_l(arr : @wprinter::pretty_arr_t) : @wprinter::pretty_t {
	return {len => count_len(arr), el => :arr({arr => arr, type => :op_list})};
}

def wprinter::build_pretty_bind(a : @wprinter::pretty_t, b : @wprinter::pretty_t) : @wprinter::pretty_t {
	return {len => a->len + b->len, el => :bind({first => a, second => b})};
}

def wprinter::build_pretty_arr_decl(arr : @wprinter::pretty_arr_t, start : ptd::sim(), end : ptd::sim()) : 
	@wprinter::pretty_t {
	return {
			len => count_len(arr) + string::length(start) + string::length(end),
			el => :arr_decl({arr => arr, start => start, end => end})
		};
}

def wprinter::build_sim(str : ptd::sim()) : @wprinter::pretty_t {
	return {len => string::length(str), el => :sim(str)};
}

def wprinter::build_str_arr(str_arr : ptd::arr(ptd::sim()), last : ptd::var({
		end => ptd::none(),
		new_line => ptd::none()
	})) : @wprinter::pretty_t {
	match (last) case :end {
		return wprinter::build_sim(str_arr[0]) if array::len(str_arr) == 1;
	} case :new_line {
	}
	return {len => 2 * get_line_width(), el => :str_arr({arr => str_arr, last => last})};
}

def print_sim_arr(ref state : @wprinter::state_t, arr : @wprinter::pretty_arr_t) : ptd::void() {
	fora var el (arr) {
		print_sim_rec(ref state, el);
	}
}

def print_str_arr(ref state : @wprinter::state_t, elem : @wprinter::str_arr_t, pref : ptd::sim(), ind : ptd::sim()) : 
		ptd::sim() {
	var ret_pref = pref;
	var str_arr = elem->arr;
	if (is_to_long(pref + string::length(str_arr[0]))) {
		state_print(ref state, string::lf());
		state_print(ref state, pind(ind));
		ret_pref = get_tab_size() * ind;
	}
	var i = 0;
	fora var str (str_arr) {
		state_print(ref state, str);
		ret_pref += string::length(str);
		if (i != array::len(str_arr) - 1) {
			state_print(ref state, string::lf() . pind(ind));
			ret_pref = get_tab_size() * ind;
		}
		++i;
	}
	match (elem->last) case :new_line {
		state_print(ref state, string::lf() . pind(ind));
		ret_pref = get_tab_size() * ind;
	} case :end {
	}
	return ret_pref;
}

def print_sim_rec(ref state : @wprinter::state_t, wise_s : @wprinter::pretty_t) : ptd::void() {
	match (wise_s->el) case :sim(var sim_el) {
		state_print(ref state, sim_el);
	} case :arr(var arr_el) {
		print_sim_arr(ref state, arr_el->arr);
	} case :sep {
		state_print(ref state, ' ');
	} case :arr_decl(var decl_el) {
		state_print(ref state, decl_el->start);
		print_sim_arr(ref state, decl_el->arr);
		state_print(ref state, decl_el->end);
	} case :bind(var bind) {
		print_sim_rec(ref state, bind->first);
		print_sim_rec(ref state, bind->second);
	} case :str_arr(var str_arr) {
		die;
	}
}

def wprinter::print_t(ref state : @wprinter::state_t, wise_s : @wprinter::pretty_t, ind : ptd::sim()) : ptd::void() {
	print_t_rec(ref state, wise_s, ind * get_tab_size(), ind);
}

def flush_list(ref state : @wprinter::state_t, list : @wprinter::pretty_arr_t, pref : ptd::sim(), len : ptd::sim(), ind 
	: ptd::sim(), first : @boolean_t::type) : ptd::sim() {
	if (!is_to_long(len)) {
		fora var e (list) {
			print_sim_rec(ref state, e);
		}
		return len;
	} else {
		if (!(list[array::len(list) - 1]->el is :str_arr)) {
			if ((ind + 1) * get_tab_size() < pref && !first) {
				state_print(ref state, string::lf() . pind(ind + 1));
				pref = (ind + 1) * get_tab_size();
			}
		}
		fora var e (list) {
			pref = print_t_rec(ref state, e, pref, ind + 1);
		}
		return pref;
	}
}

def print_arr_in_lines(ref state : @wprinter::state_t, arr : @wprinter::pretty_arr_t, ind : ptd::sim(), pref : ptd::sim()) 
	: ptd::sim() {
	fora var el (arr) {
		if (el->el is :sep) {
			state_print(ref state, string::lf() . pind(ind));
			pref = ind * get_tab_size();
			continue;
		}
		pref = print_t_rec(ref state, el, pref, ind);
	}
	return pref;
}

def process_list(ref state : @wprinter::state_t, arr : @wprinter::pretty_arr_t, is_op_list : @boolean_t::type, pref : 
		ptd::sim(), ind : ptd::sim()) : ptd::sim() {
	var els : @wprinter::pretty_arr_t = [];
	var els_len : ptd::sim() = 0;
	var first : @boolean_t::type = true;
	rep var i (array::len(arr)) {
		var elem : @wprinter::pretty_t = arr[i];
		if (elem->el is :sep) {
			pref = flush_list(ref state, els, pref, els_len + pref, ind - (is_op_list ? 1 : 0), first || !is_op_list);
			first = false;
			state_print(ref state, ' ');
			++pref;
			els = [];
			els_len = 0;
		} else {
			array::push(ref els, elem);
			els_len += elem->len;
		}
	}
	pref = flush_list(ref state, els, pref, els_len + pref, ind - (is_op_list ? 1 : 0), first || !is_op_list)
		if array::len(els) > 0;
	return pref;
}

def print_t_rec(ref state : @wprinter::state_t, wise_s : @wprinter::pretty_t, pref : ptd::sim(), ind : ptd::sim()) : 
		ptd::sim() {
	if (!is_to_long(wise_s->len + pref)) {
		print_sim_rec(ref state, wise_s);
		pref += wise_s->len;
		return pref;
	}
	match (wise_s->el) case :sim(var sim_val) {
		if (sim_val eq ',' || sim_val eq ')') {
			state_print(ref state, sim_val);
			return pref + wise_s->len;
		}
		state_print(ref state, string::lf() . pind(ind)) if pref != ind * get_tab_size();
		print_sim_rec(ref state, wise_s);
		return wise_s->len + ind * get_tab_size();
	} case :arr_decl(var el) {
		state_print(ref state, el->start . string::lf() . pind(ind + 1));
		pref = (ind + 1) * get_tab_size();
		pref = print_arr_in_lines(ref state, el->arr, ind + 1, pref);
		state_print(ref state, string::lf() . pind(ind)) if array::len(el->arr) > 0;
		state_print(ref state, el->end);
		return ind * get_tab_size() + string::length(el->end);
	} case :arr(var el) {
		var arr : @wprinter::pretty_arr_t = el->arr;
		match (el->type) case :array {
			pref = print_arr_in_lines(ref state, arr, ind + 1, pref);
		} case :list {
			return process_list(ref state, arr, false, pref, ind);
		} case :op_list {
			return process_list(ref state, arr, true, pref, ind);
		}
	} case :bind(var bind) {
		state_print(ref state, string::lf() . pind(ind));
		pref = bind->first->len + ind * get_tab_size();
		print_sim_rec(ref state, bind->first);
		return print_t_rec(ref state, bind->second, pref, ind);
	} case :sep {
		state_print(ref state, ' ');
		return pref + 1;
	} case :str_arr(var str_arr) {
		return print_str_arr(ref state, str_arr, pref, ind);
	}
	return pref;
}

