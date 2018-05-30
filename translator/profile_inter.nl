###
# (c) Atinea Sp. z o.o.
###


use nsystem;
use ptd;
use array;
use string;

def profile_inter::row_t() {
	return ptd::rec({
			time => ptd::arr(ptd::sim()),
			key => ptd::sim(),
			type => ptd::var({begin => ptd::none(), end => ptd::none()})
		});
}

def profile_inter::begin(ref state : ptd::arr(@profile_inter::row_t), key : ptd::sim()) {
	var time = ptd::ensure(ptd::arr(ptd::sim()), nsystem::time_microsec());
	array::push(ref state, {key => key, time => time, type => :begin});
}

def profile_inter::end(ref state : ptd::arr(@profile_inter::row_t), key : ptd::sim()) {
	var time = ptd::ensure(ptd::arr(ptd::sim()), nsystem::time_microsec());
	array::push(ref state, {key => key, time => time, type => :end});
}

def profile_inter::minus(a : ptd::arr(ptd::sim()), b : ptd::arr(ptd::sim())) : ptd::arr(ptd::sim()) {
	a[0] -= b[0];
	if (a[1] < b[1]) {
		--a[0];
		a[1] += 1000 * 1000 - b[1];
	} else {
		a[1] -= b[1];
	}
	return a;
}

def profile_inter::plus(a : ptd::arr(ptd::sim()), b : ptd::arr(ptd::sim())) : ptd::arr(ptd::sim()) {
	a[0] += b[0];
	a[1] += b[1];
	if (a[1] > 1000 * 1000) {
		++a[0];
		a[1] -= 1000 * 1000;
	}
	return a;
}

def profile_inter::save_profile_js(data : ptd::arr(@profile_inter::row_t)) : ptd::sim() {
	var file = '';
	var stack = [];
	fora var row (data) {
		var time = row->time;
		var label = row->key;
		match (row->type) case :begin {
			array::push(ref stack, time);
			file .= print_row(stack, time, label);
		} case :end {
			file .= print_row(stack, time, 'TOTAL: ' . label);
			array::pop(ref stack);
		}
	}
	return file;
}

def print_row(stack, time, label) {
	var line = '';
	fora var el (stack) {
		var str = '           ' . diff_time(time, el);
		var dot = string::index2(str, '.');
		var len = string::length(str);
		if (dot == -1) {
			str .= '.000';
		} else {
			str .= '000';
			str = string::substr(str, 0, dot + 4);
			len = dot;
		}
		str = string::substr(str, len - 7, 4) . ' ' . string::substr(str, len - 3, 7) . string::tab();
		line .= str;
	}
	line .= string::tab();
	line .= label;
	line .= string::lf();
	return line;
}

def diff_time(a, b) {
	var sec = a[0] - b[0];
	var usec = a[1] - b[1];
	if (usec < 0) {
		sec -= 1;
		usec += 1000000;
	}
	return sec * 1000.0 + usec / 1000.0;
}

