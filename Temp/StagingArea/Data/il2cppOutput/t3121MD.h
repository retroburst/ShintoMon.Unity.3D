#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3121;
struct t9;
struct t121;
#include "t164.h"

extern "C" void m17190_gshared (t3121 * __this, t121 * p0, MethodInfo* method);
#define m17190(__this, p0, method) (( void (*) (t3121 *, t121 *, MethodInfo*))m17190_gshared)(__this, p0, method)
extern "C" t9 * m17191_gshared (t3121 * __this, MethodInfo* method);
#define m17191(__this, method) (( t9 * (*) (t3121 *, MethodInfo*))m17191_gshared)(__this, method)
extern "C" void m17192_gshared (t3121 * __this, MethodInfo* method);
#define m17192(__this, method) (( void (*) (t3121 *, MethodInfo*))m17192_gshared)(__this, method)
extern "C" bool m17193_gshared (t3121 * __this, MethodInfo* method);
#define m17193(__this, method) (( bool (*) (t3121 *, MethodInfo*))m17193_gshared)(__this, method)
extern "C" t164  m17194_gshared (t3121 * __this, MethodInfo* method);
#define m17194(__this, method) (( t164  (*) (t3121 *, MethodInfo*))m17194_gshared)(__this, method)
