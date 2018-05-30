
use ptd;

def compiler_lib::error_type_t() {
	return ptd::var({
		error => ptd::none(),
		warning => ptd::none()
	});
}

def compiler_lib::error_t() {
	return ptd::rec({
		line => ptd::sim(),
		column => ptd::sim(),
		message => ptd::sim(),
		module => ptd::sim(),
		type => @compiler_lib::error_type_t,
	});
}

def compiler_lib::errors_t() {
	return ptd::arr(@compiler_lib::error_t);
}
