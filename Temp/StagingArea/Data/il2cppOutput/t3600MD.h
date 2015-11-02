#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3600;

extern "C" void m22036_gshared (t3600 * __this, MethodInfo* method);
#define m22036(__this, method) (( void (*) (t3600 *, MethodInfo*))m22036_gshared)(__this, method)
extern "C" int32_t m22037_gshared (t3600 * __this, uint64_t p0, MethodInfo* method);
#define m22037(__this, p0, method) (( int32_t (*) (t3600 *, uint64_t, MethodInfo*))m22037_gshared)(__this, p0, method)
extern "C" bool m22038_gshared (t3600 * __this, uint64_t p0, uint64_t p1, MethodInfo* method);
#define m22038(__this, p0, p1, method) (( bool (*) (t3600 *, uint64_t, uint64_t, MethodInfo*))m22038_gshared)(__this, p0, p1, method)
