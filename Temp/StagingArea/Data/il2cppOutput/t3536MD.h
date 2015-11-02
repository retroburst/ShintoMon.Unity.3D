#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3536;

extern "C" void m21428_gshared (t3536 * __this, MethodInfo* method);
#define m21428(__this, method) (( void (*) (t3536 *, MethodInfo*))m21428_gshared)(__this, method)
extern "C" int32_t m21429_gshared (t3536 * __this, int64_t p0, MethodInfo* method);
#define m21429(__this, p0, method) (( int32_t (*) (t3536 *, int64_t, MethodInfo*))m21429_gshared)(__this, p0, method)
extern "C" bool m21430_gshared (t3536 * __this, int64_t p0, int64_t p1, MethodInfo* method);
#define m21430(__this, p0, p1, method) (( bool (*) (t3536 *, int64_t, int64_t, MethodInfo*))m21430_gshared)(__this, p0, p1, method)
