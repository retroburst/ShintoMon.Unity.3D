#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t938;
struct t57;
struct t57_marshaled;
struct t828;
struct t158;

extern "C" void m4467_gshared (t938 * __this, t57 * p0, t828 * p1, float p2, MethodInfo* method);
#define m4467(__this, p0, p1, p2, method) (( void (*) (t938 *, t57 *, t828 *, float, MethodInfo*))m4467_gshared)(__this, p0, p1, p2, method)
extern "C" void m23671_gshared (t938 * __this, t158* p0, MethodInfo* method);
#define m23671(__this, p0, method) (( void (*) (t938 *, t158*, MethodInfo*))m23671_gshared)(__this, p0, method)
