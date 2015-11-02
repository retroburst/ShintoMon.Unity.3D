#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3280;
struct t9;
struct t121;
#include "t3279.h"

extern "C" void m18791_gshared (t3280 * __this, t121 * p0, MethodInfo* method);
#define m18791(__this, p0, method) (( void (*) (t3280 *, t121 *, MethodInfo*))m18791_gshared)(__this, p0, method)
extern "C" t9 * m18792_gshared (t3280 * __this, MethodInfo* method);
#define m18792(__this, method) (( t9 * (*) (t3280 *, MethodInfo*))m18792_gshared)(__this, method)
extern "C" void m18793_gshared (t3280 * __this, MethodInfo* method);
#define m18793(__this, method) (( void (*) (t3280 *, MethodInfo*))m18793_gshared)(__this, method)
extern "C" bool m18794_gshared (t3280 * __this, MethodInfo* method);
#define m18794(__this, method) (( bool (*) (t3280 *, MethodInfo*))m18794_gshared)(__this, method)
extern "C" t3279  m18795_gshared (t3280 * __this, MethodInfo* method);
#define m18795(__this, method) (( t3279  (*) (t3280 *, MethodInfo*))m18795_gshared)(__this, method)
