#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3124;
struct t9;
struct t828;
struct t3067;
struct t158;

extern "C" void m17044_gshared (t3124 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m17044(__this, p0, p1, method) (( void (*) (t3124 *, t9 *, t828 *, MethodInfo*))m17044_gshared)(__this, p0, p1, method)
extern "C" void m17045_gshared (t3124 * __this, t3067 * p0, MethodInfo* method);
#define m17045(__this, p0, method) (( void (*) (t3124 *, t3067 *, MethodInfo*))m17045_gshared)(__this, p0, method)
extern "C" void m17046_gshared (t3124 * __this, t158* p0, MethodInfo* method);
#define m17046(__this, p0, method) (( void (*) (t3124 *, t158*, MethodInfo*))m17046_gshared)(__this, p0, method)
extern "C" bool m17047_gshared (t3124 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m17047(__this, p0, p1, method) (( bool (*) (t3124 *, t9 *, t828 *, MethodInfo*))m17047_gshared)(__this, p0, p1, method)
