#!/bin/bash
# (c) Atinea Sp z o. o.
# Stamp: PLE 2016-06-16

set -e


MODE=CHECK
if [[ $# -eq 1 ]] ; then
	MODE=$1
fi

GRIDS_DIR='/var/www/praca2/instadb15/'
NL_DIR='.'

CAT=("compiler" "checker" "ast" "parser" "pretty_printer" "translator")

function exe_mode {

	rm -r "$GRIDS_DIR/compiler/";
	mkdir -p "$GRIDS_DIR/compiler/";
	for C in ${CAT[@]} ; do
		rm -r "$GRIDS_DIR/compiler/$C" || true
		cp -r "$NL_DIR/$C" "$GRIDS_DIR/compiler"
	done
	rm $GRIDS_DIR/compiler/compiler/compiler.nl

	cp mk_cache.exe $GRIDS_DIR || echo -e "mk_cache.exe migration failed\n\n\n\n"
	mkdir -p "$GRIDS_DIR/c_compiler_lib"
	cp $NL_DIR/native_lib_c/c_rt_lib.* $NL_DIR/native_lib_c/c_std_lib.* $NL_DIR/native_lib_c/c_trace.* "$GRIDS_DIR/c_compiler_lib"
	rm -r $GRIDS_DIR/nl
	mkdir -p $GRIDS_DIR/nl
	cp $NL_DIR/mk_cache.c $NL_DIR/native_lib_c/* $NL_DIR/cache_nl/* $GRIDS_DIR/nl

	rm $GRIDS_DIR/static/js/nl/c_rt_lib.js $GRIDS_DIR/static/js/nl/c_std_lib.js
	cp $NL_DIR/native_lib_js/* $GRIDS_DIR/static/js/nl

	rm -r $GRIDS_DIR/nianio_lib
	cp -r $NL_DIR/nianio_lib $GRIDS_DIR
	echo "migration complete"
}


function ordinary_diff {
	for C in ${CAT[@]} ; do
		diff -x compiler.nl -Naur "$NL_DIR/$C" "$GRIDS_DIR/compiler/$C" || true
	done
	
	FILES_TO_DIFF=`ls $NL_DIR/native_lib_c/c_rt_lib.* $NL_DIR/native_lib_c/c_std_lib.* $NL_DIR/native_lib_c/c_trace.*`

	for FILE in ${FILES_TO_DIFF[@]} ; do 
		BASE_FILE=$(basename $FILE)
		diff -Naur "$NL_DIR/native_lib_c/$BASE_FILE" "$GRIDS_DIR/c_compiler_lib/$BASE_FILE" || true
	done
}

function check_diff {		
	COMPILED_TO_DIFF=`ls $NL_DIR/mk_cache.c $NL_DIR/native_lib_c/* $NL_DIR/cache_nl/*`

	COMPILED_DIFF=""
	CHANGED_FILES=""
	for FILE in ${COMPILED_TO_DIFF[@]} ; do 
		BASE_FILE=$(basename $FILE)	
		RET=` (diff -Naur "$FILE" "$GRIDS_DIR/nl/$BASE_FILE" || true) | head -n 10 `
		COMPILED_DIFF="$COMPILED_DIFF$RET"
		if [ "$RET" != "" ] ; then
			CHANGED_FILES="$CHANGED_FILES\n# $BASE_FILE"
		fi
	done
	if [ "$COMPILED_DIFF" != "" ] ; then
		echo -e "\n# compiled files changed: \n"
		echo "$COMPILED_DIFF" | head -n 20
		echo -e "\n# binary files changed:\n$CHANGED_FILES"
	fi
	echo -e "\n\n# source files changed\n\n"
	ordinary_diff | perl -e '
### PERL BEG
sub flush() {
	return unless defined $fn;
	printf "#%7s%7s%5s  %s\n", "-$minus", "+$plus", "\@$chunks", $fn;
	undef $fn;
}
my @x = <>;
for (@x) {
	if (/^diff/) {
		flush();
	} elsif (/^---/) {
		#nop
	} elsif (/^\+\+\+ ([^\t]+)/) {
		$fn = $1;
		$chunks = 0;
		$plus = 0;
		$minus = 0;
	} elsif (/^@/) {
		++$chunks;
	} elsif (/^\+/) {
		++$plus;
		++$plus_all;
	} elsif (/^\-/) {
		++$minus;
		++$minus_all;
	}
}
flush();
printf "#%7s%7s%5s  %s\n###\n\n", "-$minus_all", "+$plus_all", "", "TOTAL";
print for @x;
### PERL END
'

	echo "check complete"
}


if [ "$MODE" = "EXE" ] ; then
	exe_mode
elif [ "$MODE" = "CHECK" ] ; then
	check_diff	
fi


