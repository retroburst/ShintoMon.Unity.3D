#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3760;
struct t9;
struct t121;
#include "t3759.h"

extern "C" void m23540_gshared (t3760 * __this, t121 * p0, MethodInfo* method);
#define m23540(__this, p0, method) (( void (*) (t3760 *, t121 *, MethodInfo*))m23540_gshared)(__this, p0, method)
extern "C" t9 * m23541_gshared (t3760 * __this, MethodInfo* method);
#define m23541(__this, method) (( t9 * (*) (t3760 *, MethodInfo*))m23541_gshared)(__this, method)
extern "C" void m23542_gshared (t3760 * __this, MethodInfo* method);
#define m23542(__this, method) (( void (*) (t3760 *, MethodInfo*))m23542_gshared)(__this, method)
extern "C" bool m23543_gshared (t3760 * __this, MethodInfo* method);
#define m23543(__this, method) (( bool (*) (t3760 *, MethodInfo*))m23543_gshared)(__this, method)
extern "C" t3759  m23544_gshared (t3760 * __this, MethodInfo* method);
#define m23544(__this, method) (( t3759  (*) (t3760 *, MethodInfo*))m23544_gshared)(__this, method)
