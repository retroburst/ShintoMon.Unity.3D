#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3755;
struct t57;
struct t57_marshaled;
struct t821;
struct t158;

extern "C" void m23488_gshared (t3755 * __this, t57 * p0, t821 * p1, uint8_t p2, MethodInfo* method);
#define m23488(__this, p0, p1, p2, method) (( void (*) (t3755 *, t57 *, t821 *, uint8_t, MethodInfo*))m23488_gshared)(__this, p0, p1, p2, method)
extern "C" void m23490_gshared (t3755 * __this, t158* p0, MethodInfo* method);
#define m23490(__this, p0, method) (( void (*) (t3755 *, t158*, MethodInfo*))m23490_gshared)(__this, p0, method)
