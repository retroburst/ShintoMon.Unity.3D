#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2976;
struct t9;
struct t121;
#include "t2975.h"

extern "C" void m15556_gshared (t2976 * __this, t121 * p0, MethodInfo* method);
#define m15556(__this, p0, method) (( void (*) (t2976 *, t121 *, MethodInfo*))m15556_gshared)(__this, p0, method)
extern "C" t9 * m15557_gshared (t2976 * __this, MethodInfo* method);
#define m15557(__this, method) (( t9 * (*) (t2976 *, MethodInfo*))m15557_gshared)(__this, method)
extern "C" void m15558_gshared (t2976 * __this, MethodInfo* method);
#define m15558(__this, method) (( void (*) (t2976 *, MethodInfo*))m15558_gshared)(__this, method)
extern "C" bool m15559_gshared (t2976 * __this, MethodInfo* method);
#define m15559(__this, method) (( bool (*) (t2976 *, MethodInfo*))m15559_gshared)(__this, method)
extern "C" t2975  m15560_gshared (t2976 * __this, MethodInfo* method);
#define m15560(__this, method) (( t2975  (*) (t2976 *, MethodInfo*))m15560_gshared)(__this, method)
