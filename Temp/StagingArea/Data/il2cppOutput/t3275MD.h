#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3275;
struct t9;
struct t121;
#include "t3274.h"

extern "C" void m18757_gshared (t3275 * __this, t121 * p0, MethodInfo* method);
#define m18757(__this, p0, method) (( void (*) (t3275 *, t121 *, MethodInfo*))m18757_gshared)(__this, p0, method)
extern "C" t9 * m18758_gshared (t3275 * __this, MethodInfo* method);
#define m18758(__this, method) (( t9 * (*) (t3275 *, MethodInfo*))m18758_gshared)(__this, method)
extern "C" void m18759_gshared (t3275 * __this, MethodInfo* method);
#define m18759(__this, method) (( void (*) (t3275 *, MethodInfo*))m18759_gshared)(__this, method)
extern "C" bool m18760_gshared (t3275 * __this, MethodInfo* method);
#define m18760(__this, method) (( bool (*) (t3275 *, MethodInfo*))m18760_gshared)(__this, method)
extern "C" t3274  m18761_gshared (t3275 * __this, MethodInfo* method);
#define m18761(__this, method) (( t3274  (*) (t3275 *, MethodInfo*))m18761_gshared)(__this, method)
