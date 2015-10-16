#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3752;
struct t57;
struct t57_marshaled;
struct t821;
struct t9;
struct t158;

extern "C" void m23475_gshared (t3752 * __this, t57 * p0, t821 * p1, t9 * p2, MethodInfo* method);
#define m23475(__this, p0, p1, p2, method) (( void (*) (t3752 *, t57 *, t821 *, t9 *, MethodInfo*))m23475_gshared)(__this, p0, p1, p2, method)
extern "C" void m23476_gshared (t3752 * __this, t158* p0, MethodInfo* method);
#define m23476(__this, p0, method) (( void (*) (t3752 *, t158*, MethodInfo*))m23476_gshared)(__this, p0, method)
