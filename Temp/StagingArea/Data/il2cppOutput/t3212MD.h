#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3212;
struct t9;
struct t121;
#include "t3200.h"

extern "C" void m18053_gshared (t3212 * __this, t121 * p0, MethodInfo* method);
#define m18053(__this, p0, method) (( void (*) (t3212 *, t121 *, MethodInfo*))m18053_gshared)(__this, p0, method)
extern "C" t9 * m18054_gshared (t3212 * __this, MethodInfo* method);
#define m18054(__this, method) (( t9 * (*) (t3212 *, MethodInfo*))m18054_gshared)(__this, method)
extern "C" void m18055_gshared (t3212 * __this, MethodInfo* method);
#define m18055(__this, method) (( void (*) (t3212 *, MethodInfo*))m18055_gshared)(__this, method)
extern "C" bool m18056_gshared (t3212 * __this, MethodInfo* method);
#define m18056(__this, method) (( bool (*) (t3212 *, MethodInfo*))m18056_gshared)(__this, method)
extern "C" t3200  m18057_gshared (t3212 * __this, MethodInfo* method);
#define m18057(__this, method) (( t3200  (*) (t3212 *, MethodInfo*))m18057_gshared)(__this, method)
