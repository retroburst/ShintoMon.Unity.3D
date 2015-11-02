#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2993;

extern "C" void m15675_gshared (t2993 * __this, MethodInfo* method);
#define m15675(__this, method) (( void (*) (t2993 *, MethodInfo*))m15675_gshared)(__this, method)
extern "C" int32_t m15676_gshared (t2993 * __this, int32_t p0, MethodInfo* method);
#define m15676(__this, p0, method) (( int32_t (*) (t2993 *, int32_t, MethodInfo*))m15676_gshared)(__this, p0, method)
extern "C" bool m15677_gshared (t2993 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m15677(__this, p0, p1, method) (( bool (*) (t2993 *, int32_t, int32_t, MethodInfo*))m15677_gshared)(__this, p0, p1, method)
