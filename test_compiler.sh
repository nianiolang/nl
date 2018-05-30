#!/bin/bash
set -exu
mkdir tmp
cp -r nl_mk_cache.pl test_all.pl test bin native_lib_pm nianio_lib compiler_base tmp
(
	cd tmp
	#./nl_mk_cache.pl --strict --pm
	#./test_all.pl
)
rm -r tmp
mkdir tmp
./bin/mk_cache.exe test nianio_lib compiler_base --o tmp --c
gcc -std=c99 -O0 -ggdb -o test.exe tmp/*.c native_lib_c/*.c test_all.c -Itmp -Inative_lib_c -lm
./test.exe
rm ./test.exe
rm -r tmp
