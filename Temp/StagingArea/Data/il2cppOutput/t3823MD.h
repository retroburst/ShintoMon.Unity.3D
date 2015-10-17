#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3823;
struct t9;
struct t121;
#include "t3822.h"

extern "C" void m24085_gshared (t3823 * __this, t121 * p0, MethodInfo* method);
#define m24085(__this, p0, method) (( void (*) (t3823 *, t121 *, MethodInfo*))m24085_gshared)(__this, p0, method)
extern "C" t9 * m24086_gshared (t3823 * __this, MethodInfo* method);
#define m24086(__this, method) (( t9 * (*) (t3823 *, MethodInfo*))m24086_gshared)(__this, method)
extern "C" void m24087_gshared (t3823 * __this, MethodInfo* method);
#define m24087(__this, method) (( void (*) (t3823 *, MethodInfo*))m24087_gshared)(__this, method)
extern "C" bool m24088_gshared (t3823 * __this, MethodInfo* method);
#define m24088(__this, method) (( bool (*) (t3823 *, MethodInfo*))m24088_gshared)(__this, method)
extern "C" t3822  m24089_gshared (t3823 * __this, MethodInfo* method);
#define m24089(__this, method) (( t3822  (*) (t3823 *, MethodInfo*))m24089_gshared)(__this, method)
