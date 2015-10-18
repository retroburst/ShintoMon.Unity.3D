#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2952;
struct t9;
struct t121;
#include "t2951.h"

extern "C" void m15343_gshared (t2952 * __this, t121 * p0, MethodInfo* method);
#define m15343(__this, p0, method) (( void (*) (t2952 *, t121 *, MethodInfo*))m15343_gshared)(__this, p0, method)
extern "C" t9 * m15344_gshared (t2952 * __this, MethodInfo* method);
#define m15344(__this, method) (( t9 * (*) (t2952 *, MethodInfo*))m15344_gshared)(__this, method)
extern "C" void m15345_gshared (t2952 * __this, MethodInfo* method);
#define m15345(__this, method) (( void (*) (t2952 *, MethodInfo*))m15345_gshared)(__this, method)
extern "C" bool m15346_gshared (t2952 * __this, MethodInfo* method);
#define m15346(__this, method) (( bool (*) (t2952 *, MethodInfo*))m15346_gshared)(__this, method)
extern "C" t2951  m15347_gshared (t2952 * __this, MethodInfo* method);
#define m15347(__this, method) (( t2951  (*) (t2952 *, MethodInfo*))m15347_gshared)(__this, method)
