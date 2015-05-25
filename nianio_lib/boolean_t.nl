###
# (c) Atinea Sp. z o.o.
###


use ptd;

def boolean_t::type() {
	return ptd::var({TRUE => ptd::none(), FALSE => ptd::none()});
}

