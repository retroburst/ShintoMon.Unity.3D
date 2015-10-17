#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2750;
struct t9;
struct t121;
#include "t2749.h"

extern "C" void m13309_gshared (t2750 * __this, t121 * p0, MethodInfo* method);
#define m13309(__this, p0, method) (( void (*) (t2750 *, t121 *, MethodInfo*))m13309_gshared)(__this, p0, method)
extern "C" t9 * m13310_gshared (t2750 * __this, MethodInfo* method);
#define m13310(__this, method) (( t9 * (*) (t2750 *, MethodInfo*))m13310_gshared)(__this, method)
extern "C" void m13311_gshared (t2750 * __this, MethodInfo* method);
#define m13311(__this, method) (( void (*) (t2750 *, MethodInfo*))m13311_gshared)(__this, method)
extern "C" bool m13312_gshared (t2750 * __this, MethodInfo* method);
#define m13312(__this, method) (( bool (*) (t2750 *, MethodInfo*))m13312_gshared)(__this, method)
extern "C" t2749  m13313_gshared (t2750 * __this, MethodInfo* method);
#define m13313(__this, method) (( t2749  (*) (t2750 *, MethodInfo*))m13313_gshared)(__this, method)
