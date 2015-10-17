#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2988;

extern "C" void m15640_gshared (t2988 * __this, MethodInfo* method);
#define m15640(__this, method) (( void (*) (t2988 *, MethodInfo*))m15640_gshared)(__this, method)
extern "C" int32_t m15641_gshared (t2988 * __this, int32_t p0, MethodInfo* method);
#define m15641(__this, p0, method) (( int32_t (*) (t2988 *, int32_t, MethodInfo*))m15641_gshared)(__this, p0, method)
extern "C" bool m15642_gshared (t2988 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m15642(__this, p0, p1, method) (( bool (*) (t2988 *, int32_t, int32_t, MethodInfo*))m15642_gshared)(__this, p0, p1, method)
