#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3782;
struct t821;
struct t2;
struct t9;
struct t856;

extern "C" void m23792_gshared (t3782 * __this, MethodInfo* method);
#define m23792(__this, method) (( void (*) (t3782 *, MethodInfo*))m23792_gshared)(__this, method)
extern "C" t821 * m23793_gshared (t3782 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m23793(__this, p0, p1, method) (( t821 * (*) (t3782 *, t2*, t9 *, MethodInfo*))m23793_gshared)(__this, p0, p1, method)
extern "C" t856 * m23794_gshared (t3782 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m23794(__this, p0, p1, method) (( t856 * (*) (t3782 *, t9 *, t821 *, MethodInfo*))m23794_gshared)(__this, p0, p1, method)
