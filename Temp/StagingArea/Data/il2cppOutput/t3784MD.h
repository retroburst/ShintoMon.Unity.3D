#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3784;
struct t9;
struct t835;
struct t158;

extern "C" void m23689_gshared (t3784 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m23689(__this, p0, p1, method) (( void (*) (t3784 *, t9 *, t835 *, MethodInfo*))m23689_gshared)(__this, p0, p1, method)
extern "C" void m23690_gshared (t3784 * __this, t158* p0, MethodInfo* method);
#define m23690(__this, p0, method) (( void (*) (t3784 *, t158*, MethodInfo*))m23690_gshared)(__this, p0, method)
extern "C" bool m23691_gshared (t3784 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m23691(__this, p0, p1, method) (( bool (*) (t3784 *, t9 *, t835 *, MethodInfo*))m23691_gshared)(__this, p0, p1, method)
