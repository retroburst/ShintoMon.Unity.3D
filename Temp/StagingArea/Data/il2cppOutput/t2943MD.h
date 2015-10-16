#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2943;
struct t9;
struct t121;
#include "t2942.h"

extern "C" void m15314_gshared (t2943 * __this, t121 * p0, MethodInfo* method);
#define m15314(__this, p0, method) (( void (*) (t2943 *, t121 *, MethodInfo*))m15314_gshared)(__this, p0, method)
extern "C" t9 * m15315_gshared (t2943 * __this, MethodInfo* method);
#define m15315(__this, method) (( t9 * (*) (t2943 *, MethodInfo*))m15315_gshared)(__this, method)
extern "C" void m15316_gshared (t2943 * __this, MethodInfo* method);
#define m15316(__this, method) (( void (*) (t2943 *, MethodInfo*))m15316_gshared)(__this, method)
extern "C" bool m15317_gshared (t2943 * __this, MethodInfo* method);
#define m15317(__this, method) (( bool (*) (t2943 *, MethodInfo*))m15317_gshared)(__this, method)
extern "C" t2942  m15318_gshared (t2943 * __this, MethodInfo* method);
#define m15318(__this, method) (( t2942  (*) (t2943 *, MethodInfo*))m15318_gshared)(__this, method)
