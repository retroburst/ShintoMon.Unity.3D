#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t939;
struct t57;
struct t57_marshaled;
struct t828;
struct t158;

extern "C" void m4467_gshared (t939 * __this, t57 * p0, t828 * p1, int32_t p2, MethodInfo* method);
#define m4467(__this, p0, p1, p2, method) (( void (*) (t939 *, t57 *, t828 *, int32_t, MethodInfo*))m4467_gshared)(__this, p0, p1, p2, method)
extern "C" void m23671_gshared (t939 * __this, t158* p0, MethodInfo* method);
#define m23671(__this, p0, method) (( void (*) (t939 *, t158*, MethodInfo*))m23671_gshared)(__this, p0, method)
