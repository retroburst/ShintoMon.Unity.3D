#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3561;

extern "C" void m21795_gshared (t3561 * __this, MethodInfo* method);
#define m21795(__this, method) (( void (*) (t3561 *, MethodInfo*))m21795_gshared)(__this, method)
extern "C" int32_t m21796_gshared (t3561 * __this, uint64_t p0, MethodInfo* method);
#define m21796(__this, p0, method) (( int32_t (*) (t3561 *, uint64_t, MethodInfo*))m21796_gshared)(__this, p0, method)
extern "C" bool m21797_gshared (t3561 * __this, uint64_t p0, uint64_t p1, MethodInfo* method);
#define m21797(__this, p0, p1, method) (( bool (*) (t3561 *, uint64_t, uint64_t, MethodInfo*))m21797_gshared)(__this, p0, p1, method)
