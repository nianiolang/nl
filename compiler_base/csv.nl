###
# (c) Atinea Sp. z o.o.
###


use string;
use array;

def csv::save(arr) {
	var quot = '"';
	var sep = string::tab();
	var quotquot = quot . quot;
	var ret = '';
	fora var row (arr) {
		var size = array::len(row);
		rep var elem (size) {
			var str = row[elem];
			var len = string::length(str);
			var qou = false;
			rep var i (len) {
				var char = string::substr(str, i, 1);
				qou = true if (string::ord(char) < 32 || char eq quot);
			}
			str = quot . string::replace(str, quot, quotquot) . quot if (qou);
			ret .= str;
			ret .= sep unless elem == size - 1;
		}
		ret .= string::lf();
	}
	return ret;
}

def get_char(str, ref poz) {
	return string::substr(str, poz++, 1);
}

def end(ref ret, ref row, elem) {
	array::push(ref row, elem);
	array::push(ref ret, row);
	return ret;
}

def csv::load(str) {
	var quot = '"';
	var sep = string::tab();
	var csep = string::ord(sep);
	var ret = [];
	var row = [];
	var len = string::length(str);
	return ret if len == 0;
	if (string::ord(string::substr(str, len - 1, 1)) == 10) {
		--len;
		--len if string::ord(string::substr(str, len - 1, 1)) == 13;
	}
	var elem = '';
	var poz = 0;
	while (poz < len) {
		var char = get_char(str, ref poz);
		if (char eq quot) {
			loop {
				return end(ref ret, ref row, elem) if (poz >= len);
				char = get_char(str, ref poz);
				if (char eq quot) {
					return end(ref ret, ref row, elem) if (poz >= len);
					char = get_char(str, ref poz);
					break if (char ne quot);
				}
				elem .= char;
			}
		} else {
			var o = string::ord(char);
			while (o != csep && o != 10 && o != 13) {
				elem .= char;
				return end(ref ret, ref row, elem) if (poz >= len);
				char = get_char(str, ref poz);
				o = string::ord(char);
			}
		}
		array::push(ref row, elem);
		elem = '';
		var o = string::ord(char);
		continue if (o == csep);
		if (o == 13) {
			char = get_char(str, ref poz);
			o = string::ord(char);
		}
		if (o == 10) {
			array::push(ref ret, row);
			row = [];
			continue;
		}
	}
	return end(ref ret, ref row, elem);
}

