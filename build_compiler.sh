#!/bin/bash
set -exu
mkdir -p tmp tmp/a tmp/b tmp/c tmp/d tmp/nianio_lang
cp -r ./nianio_lib/* tmp/nianio_lang/
cp -r ./checker/* tmp/nianio_lang/
cp -r ./pretty_printer/* tmp/nianio_lang/
cp -r ./ast/* tmp/nianio_lang/
cp -r ./compiler/* tmp/nianio_lang/
cp -r ./translator/* tmp/nianio_lang/
cp -r ./parser/* tmp/nianio_lang/

gcc -std=c99 -O0 -o bin/mk_cache.exe mk_cache.c bin/native_lib_c/*.c bin/nianio_lang_c/*.c -Ibin/native_lib_c -Ibin/nianio_lang_c
./bin/mk_cache.exe tmp/nianio_lang --strict --o tmp/a --c
gcc -std=c99 -O0 -ggdb -o a tmp/a/*.c native_lib_c/*.c mk_cache.c -Itmp/a -Inative_lib_c 
./a.exe tmp/nianio_lang --o tmp/b --c
gcc -std=c99 -O0 -ggdb -o b tmp/b/*.c native_lib_c/*.c mk_cache.c -Itmp/b -Inative_lib_c
./b.exe tmp/nianio_lang --o tmp/c --strict --pm

cp nl_mk_cache.pl tmp/nl_mk_cache.pl
time perl -I"native_lib_pm/" -I"tmp/c/" tmp/nl_mk_cache.pl --c tmp/nianio_lang --o tmp/d/

if diff -ru tmp/b tmp/d ; then
	echo OK
else
	echo ERROR
	exit 1
fi
rm -r bin/*
mv ./b.exe bin/mk_cache.exe
mv tmp/c bin/nianio_lang_pm
cp -r ./native_lib_pm/ bin/native_lib_pm/

cp -r ./native_lib_c/ bin/native_lib_c/
mv tmp/b bin/nianio_lang_c
rm -r tmp
rm ./a.exe

