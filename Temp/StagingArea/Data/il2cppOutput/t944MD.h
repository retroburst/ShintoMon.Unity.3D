#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t944;
struct t57;
struct t57_marshaled;
struct t835;
struct t158;

extern "C" void m4508_gshared (t944 * __this, t57 * p0, t835 * p1, float p2, MethodInfo* method);
#define m4508(__this, p0, p1, p2, method) (( void (*) (t944 *, t57 *, t835 *, float, MethodInfo*))m4508_gshared)(__this, p0, p1, p2, method)
extern "C" void m23705_gshared (t944 * __this, t158* p0, MethodInfo* method);
#define m23705(__this, p0, method) (( void (*) (t944 *, t158*, MethodInfo*))m23705_gshared)(__this, p0, method)
