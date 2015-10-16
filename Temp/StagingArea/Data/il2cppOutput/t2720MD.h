#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2720;
struct t9;
struct t121;
#include "t2719.h"

extern "C" void m13122_gshared (t2720 * __this, t121 * p0, MethodInfo* method);
#define m13122(__this, p0, method) (( void (*) (t2720 *, t121 *, MethodInfo*))m13122_gshared)(__this, p0, method)
extern "C" t9 * m13123_gshared (t2720 * __this, MethodInfo* method);
#define m13123(__this, method) (( t9 * (*) (t2720 *, MethodInfo*))m13123_gshared)(__this, method)
extern "C" void m13124_gshared (t2720 * __this, MethodInfo* method);
#define m13124(__this, method) (( void (*) (t2720 *, MethodInfo*))m13124_gshared)(__this, method)
extern "C" bool m13125_gshared (t2720 * __this, MethodInfo* method);
#define m13125(__this, method) (( bool (*) (t2720 *, MethodInfo*))m13125_gshared)(__this, method)
extern "C" t2719  m13126_gshared (t2720 * __this, MethodInfo* method);
#define m13126(__this, method) (( t2719  (*) (t2720 *, MethodInfo*))m13126_gshared)(__this, method)
