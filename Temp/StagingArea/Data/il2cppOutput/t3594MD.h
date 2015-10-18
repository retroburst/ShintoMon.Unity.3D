#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3594;

extern "C" void m21999_gshared (t3594 * __this, MethodInfo* method);
#define m21999(__this, method) (( void (*) (t3594 *, MethodInfo*))m21999_gshared)(__this, method)
extern "C" int32_t m22000_gshared (t3594 * __this, uint64_t p0, MethodInfo* method);
#define m22000(__this, p0, method) (( int32_t (*) (t3594 *, uint64_t, MethodInfo*))m22000_gshared)(__this, p0, method)
extern "C" bool m22001_gshared (t3594 * __this, uint64_t p0, uint64_t p1, MethodInfo* method);
#define m22001(__this, p0, p1, method) (( bool (*) (t3594 *, uint64_t, uint64_t, MethodInfo*))m22001_gshared)(__this, p0, p1, method)
