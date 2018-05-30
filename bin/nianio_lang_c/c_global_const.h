
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include "array.h"
#include "boolean.h"
#include "boolean_t.h"
#include "compiler.h"
#include "compiler_lib.h"
#include "const_evaluator.h"
#include "csv.h"
#include "dfile.h"
#include "enum.h"
#include "flow_graph.h"
#include "func.h"
#include "generator_c.h"
#include "generator_java.h"
#include "generator_js.h"
#include "generator_pm.h"
#include "hash.h"
#include "interpreter.h"
#include "module_checker.h"
#include "nast.h"
#include "nl.h"
#include "nlasm.h"
#include "nparser.h"
#include "nsystem.h"
#include "ntokenizer.h"
#include "ov.h"
#include "post_processing.h"
#include "post_processing_t.h"
#include "pretty_printer.h"
#include "profile.h"
#include "profile_inter.h"
#include "ptd.h"
#include "ptd_parser.h"
#include "ptd_system.h"
#include "reference_generator.h"
#include "register_cleaner.h"
#include "singleton.h"
#include "string.h"
#include "string_compiler.h"
#include "string_utils.h"
#include "tc_types.h"
#include "tct.h"
#include "translator.h"
#include "type_checker.h"
#include "unnecessary_commands.h"
#include "wprinter.h"
void ___global_const_init();
ImmT  ___get_global_const(int __nr);
