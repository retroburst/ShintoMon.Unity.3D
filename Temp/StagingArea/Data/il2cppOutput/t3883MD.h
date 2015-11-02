#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3883;
struct t9;

extern "C" void m24491_gshared (t3883 * __this, MethodInfo* method);
#define m24491(__this, method) (( void (*) (t3883 *, MethodInfo*))m24491_gshared)(__this, method)
extern "C" int32_t m24492_gshared (t3883 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24492(__this, p0, p1, method) (( int32_t (*) (t3883 *, t9 *, t9 *, MethodInfo*))m24492_gshared)(__this, p0, p1, method)
