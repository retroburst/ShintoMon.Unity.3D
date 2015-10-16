#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t932;
struct t57;
struct t57_marshaled;
struct t821;
struct t158;

extern "C" void m4443_gshared (t932 * __this, t57 * p0, t821 * p1, int32_t p2, MethodInfo* method);
#define m4443(__this, p0, p1, p2, method) (( void (*) (t932 *, t57 *, t821 *, int32_t, MethodInfo*))m4443_gshared)(__this, p0, p1, p2, method)
extern "C" void m23478_gshared (t932 * __this, t158* p0, MethodInfo* method);
#define m23478(__this, p0, method) (( void (*) (t932 *, t158*, MethodInfo*))m23478_gshared)(__this, p0, method)
