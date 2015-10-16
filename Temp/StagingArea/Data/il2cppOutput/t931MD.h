#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t931;
struct t57;
struct t57_marshaled;
struct t821;
struct t158;

extern "C" void m4442_gshared (t931 * __this, t57 * p0, t821 * p1, float p2, MethodInfo* method);
#define m4442(__this, p0, p1, p2, method) (( void (*) (t931 *, t57 *, t821 *, float, MethodInfo*))m4442_gshared)(__this, p0, p1, p2, method)
extern "C" void m23477_gshared (t931 * __this, t158* p0, MethodInfo* method);
#define m23477(__this, p0, method) (( void (*) (t931 *, t158*, MethodInfo*))m23477_gshared)(__this, p0, method)
