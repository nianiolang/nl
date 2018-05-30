###
# (c) Atinea Sp. z o.o.
###


def boolean::to_nl(sim) {
	return sim eq '1';
}

def boolean::check_true(sim) {
	return sim ? 1 : 0;
}

