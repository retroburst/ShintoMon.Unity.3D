#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3266;
struct t9;
struct t121;
#include "t28.h"

extern "C" void m18723_gshared (t3266 * __this, t121 * p0, MethodInfo* method);
#define m18723(__this, p0, method) (( void (*) (t3266 *, t121 *, MethodInfo*))m18723_gshared)(__this, p0, method)
extern "C" t9 * m18724_gshared (t3266 * __this, MethodInfo* method);
#define m18724(__this, method) (( t9 * (*) (t3266 *, MethodInfo*))m18724_gshared)(__this, method)
extern "C" void m18725_gshared (t3266 * __this, MethodInfo* method);
#define m18725(__this, method) (( void (*) (t3266 *, MethodInfo*))m18725_gshared)(__this, method)
extern "C" bool m18726_gshared (t3266 * __this, MethodInfo* method);
#define m18726(__this, method) (( bool (*) (t3266 *, MethodInfo*))m18726_gshared)(__this, method)
extern "C" t28  m18727_gshared (t3266 * __this, MethodInfo* method);
#define m18727(__this, method) (( t28  (*) (t3266 *, MethodInfo*))m18727_gshared)(__this, method)
