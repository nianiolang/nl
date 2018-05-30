###
# (c) Atinea Sp. z o.o.
###


use dfile;

def get_check() {
	return true;
}

def get_verbose() {
	return true;
}

def nassert::a(a, b) {
	if (get_check() && dfile::ssave(a) ne dfile::ssave(b)) {
		if (get_verbose()) {
			die(dfile::ssave(a) . ' != ' . dfile::ssave(b));
		} else {
			die;
		}
	}
}

def nassert::as(a, b, s) {
	die(s) unless get_check() && dfile::ssave(a) eq dfile::ssave(b);
}

