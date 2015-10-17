#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2711;
struct t9;
struct t121;
#include "t1668.h"

extern "C" void m13028_gshared (t2711 * __this, t121 * p0, MethodInfo* method);
#define m13028(__this, p0, method) (( void (*) (t2711 *, t121 *, MethodInfo*))m13028_gshared)(__this, p0, method)
extern "C" t9 * m13029_gshared (t2711 * __this, MethodInfo* method);
#define m13029(__this, method) (( t9 * (*) (t2711 *, MethodInfo*))m13029_gshared)(__this, method)
extern "C" void m13030_gshared (t2711 * __this, MethodInfo* method);
#define m13030(__this, method) (( void (*) (t2711 *, MethodInfo*))m13030_gshared)(__this, method)
extern "C" bool m13031_gshared (t2711 * __this, MethodInfo* method);
#define m13031(__this, method) (( bool (*) (t2711 *, MethodInfo*))m13031_gshared)(__this, method)
extern "C" t1668  m13032_gshared (t2711 * __this, MethodInfo* method);
#define m13032(__this, method) (( t1668  (*) (t2711 *, MethodInfo*))m13032_gshared)(__this, method)
