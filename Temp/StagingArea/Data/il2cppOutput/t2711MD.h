#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2711;
struct t9;
struct t121;
#include "t2703.h"

extern "C" void m13038_gshared (t2711 * __this, t121 * p0, MethodInfo* method);
#define m13038(__this, p0, method) (( void (*) (t2711 *, t121 *, MethodInfo*))m13038_gshared)(__this, p0, method)
extern "C" t9 * m13039_gshared (t2711 * __this, MethodInfo* method);
#define m13039(__this, method) (( t9 * (*) (t2711 *, MethodInfo*))m13039_gshared)(__this, method)
extern "C" void m13040_gshared (t2711 * __this, MethodInfo* method);
#define m13040(__this, method) (( void (*) (t2711 *, MethodInfo*))m13040_gshared)(__this, method)
extern "C" bool m13041_gshared (t2711 * __this, MethodInfo* method);
#define m13041(__this, method) (( bool (*) (t2711 *, MethodInfo*))m13041_gshared)(__this, method)
extern "C" t2703  m13042_gshared (t2711 * __this, MethodInfo* method);
#define m13042(__this, method) (( t2703  (*) (t2711 *, MethodInfo*))m13042_gshared)(__this, method)
