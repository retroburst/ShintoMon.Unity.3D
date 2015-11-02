#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3308;
struct t9;
struct t121;
#include "t601.h"

extern "C" void m18981_gshared (t3308 * __this, t121 * p0, MethodInfo* method);
#define m18981(__this, p0, method) (( void (*) (t3308 *, t121 *, MethodInfo*))m18981_gshared)(__this, p0, method)
extern "C" t9 * m18982_gshared (t3308 * __this, MethodInfo* method);
#define m18982(__this, method) (( t9 * (*) (t3308 *, MethodInfo*))m18982_gshared)(__this, method)
extern "C" void m18983_gshared (t3308 * __this, MethodInfo* method);
#define m18983(__this, method) (( void (*) (t3308 *, MethodInfo*))m18983_gshared)(__this, method)
extern "C" bool m18984_gshared (t3308 * __this, MethodInfo* method);
#define m18984(__this, method) (( bool (*) (t3308 *, MethodInfo*))m18984_gshared)(__this, method)
extern "C" t601  m18985_gshared (t3308 * __this, MethodInfo* method);
#define m18985(__this, method) (( t601  (*) (t3308 *, MethodInfo*))m18985_gshared)(__this, method)
