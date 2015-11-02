#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3460;
struct t9;
struct t121;
#include "t892.h"

extern "C" void m20528_gshared (t3460 * __this, t121 * p0, MethodInfo* method);
#define m20528(__this, p0, method) (( void (*) (t3460 *, t121 *, MethodInfo*))m20528_gshared)(__this, p0, method)
extern "C" t9 * m20529_gshared (t3460 * __this, MethodInfo* method);
#define m20529(__this, method) (( t9 * (*) (t3460 *, MethodInfo*))m20529_gshared)(__this, method)
extern "C" void m20530_gshared (t3460 * __this, MethodInfo* method);
#define m20530(__this, method) (( void (*) (t3460 *, MethodInfo*))m20530_gshared)(__this, method)
extern "C" bool m20531_gshared (t3460 * __this, MethodInfo* method);
#define m20531(__this, method) (( bool (*) (t3460 *, MethodInfo*))m20531_gshared)(__this, method)
extern "C" t892  m20532_gshared (t3460 * __this, MethodInfo* method);
#define m20532(__this, method) (( t892  (*) (t3460 *, MethodInfo*))m20532_gshared)(__this, method)
