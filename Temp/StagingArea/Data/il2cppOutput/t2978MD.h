#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2978;

extern "C" void m15603_gshared (t2978 * __this, MethodInfo* method);
#define m15603(__this, method) (( void (*) (t2978 *, MethodInfo*))m15603_gshared)(__this, method)
extern "C" int32_t m15604_gshared (t2978 * __this, int32_t p0, MethodInfo* method);
#define m15604(__this, p0, method) (( int32_t (*) (t2978 *, int32_t, MethodInfo*))m15604_gshared)(__this, p0, method)
extern "C" bool m15605_gshared (t2978 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m15605(__this, p0, p1, method) (( bool (*) (t2978 *, int32_t, int32_t, MethodInfo*))m15605_gshared)(__this, p0, p1, method)
