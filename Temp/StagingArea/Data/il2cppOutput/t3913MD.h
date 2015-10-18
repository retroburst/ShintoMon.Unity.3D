#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3913;
struct t9;
struct t121;
#include "t270.h"

extern "C" void m24627_gshared (t3913 * __this, t121 * p0, MethodInfo* method);
#define m24627(__this, p0, method) (( void (*) (t3913 *, t121 *, MethodInfo*))m24627_gshared)(__this, p0, method)
extern "C" t9 * m24628_gshared (t3913 * __this, MethodInfo* method);
#define m24628(__this, method) (( t9 * (*) (t3913 *, MethodInfo*))m24628_gshared)(__this, method)
extern "C" void m24629_gshared (t3913 * __this, MethodInfo* method);
#define m24629(__this, method) (( void (*) (t3913 *, MethodInfo*))m24629_gshared)(__this, method)
extern "C" bool m24630_gshared (t3913 * __this, MethodInfo* method);
#define m24630(__this, method) (( bool (*) (t3913 *, MethodInfo*))m24630_gshared)(__this, method)
extern "C" t270  m24631_gshared (t3913 * __this, MethodInfo* method);
#define m24631(__this, method) (( t270  (*) (t3913 *, MethodInfo*))m24631_gshared)(__this, method)
