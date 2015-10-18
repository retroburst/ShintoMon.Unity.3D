#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3531;

extern "C" void m21394_gshared (t3531 * __this, MethodInfo* method);
#define m21394(__this, method) (( void (*) (t3531 *, MethodInfo*))m21394_gshared)(__this, method)
extern "C" int32_t m21395_gshared (t3531 * __this, int64_t p0, MethodInfo* method);
#define m21395(__this, p0, method) (( int32_t (*) (t3531 *, int64_t, MethodInfo*))m21395_gshared)(__this, p0, method)
extern "C" bool m21396_gshared (t3531 * __this, int64_t p0, int64_t p1, MethodInfo* method);
#define m21396(__this, p0, p1, method) (( bool (*) (t3531 *, int64_t, int64_t, MethodInfo*))m21396_gshared)(__this, p0, p1, method)
