#!/bin/bash
#
#  (c) Atinea Sp. z o. o.
#  Stamp: MZU 2013-08-05
#

STAMP="$(date "+%Y%m%d%H%M%S")"
RAN=$[ $RANDOM % 10000 ]
PATCH="nl_logs/"
LOG="${PATCH}stacktrace_${STAMP}_${RAN}_mini.log"
EXE="$1"
mkdir -p ${PATCH}
ARG=""
for word in "${@:2}"; do ARG+=" \"$word\""; done
exec gdb -batch-silent  --batch \
	-ex 'break gdb_die' \
	-ex "set args ${ARG}" \
	-ex "set width 0" \
	-x "gdbinit.txt" \
	-ex "set logging file ${LOG}" \
	-ex 'set logging on' \
	-ex 'backtrace' \
	-ex 'set logging off' \
	-ex "call gdb_save_stacktrace_sim(\"${LOG}\")" \
	-ex 'quit' \
	"${EXE}"
