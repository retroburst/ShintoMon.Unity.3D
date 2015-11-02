#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3305;
struct t9;
struct t121;
#include "t28.h"

extern "C" void m18966_gshared (t3305 * __this, t121 * p0, MethodInfo* method);
#define m18966(__this, p0, method) (( void (*) (t3305 *, t121 *, MethodInfo*))m18966_gshared)(__this, p0, method)
extern "C" t9 * m18967_gshared (t3305 * __this, MethodInfo* method);
#define m18967(__this, method) (( t9 * (*) (t3305 *, MethodInfo*))m18967_gshared)(__this, method)
extern "C" void m18968_gshared (t3305 * __this, MethodInfo* method);
#define m18968(__this, method) (( void (*) (t3305 *, MethodInfo*))m18968_gshared)(__this, method)
extern "C" bool m18969_gshared (t3305 * __this, MethodInfo* method);
#define m18969(__this, method) (( bool (*) (t3305 *, MethodInfo*))m18969_gshared)(__this, method)
extern "C" t28  m18970_gshared (t3305 * __this, MethodInfo* method);
#define m18970(__this, method) (( t28  (*) (t3305 *, MethodInfo*))m18970_gshared)(__this, method)
