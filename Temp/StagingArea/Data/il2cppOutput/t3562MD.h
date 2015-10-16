#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3562;

extern "C" void m21798_gshared (t3562 * __this, MethodInfo* method);
#define m21798(__this, method) (( void (*) (t3562 *, MethodInfo*))m21798_gshared)(__this, method)
extern "C" int32_t m21799_gshared (t3562 * __this, uint64_t p0, MethodInfo* method);
#define m21799(__this, p0, method) (( int32_t (*) (t3562 *, uint64_t, MethodInfo*))m21799_gshared)(__this, p0, method)
extern "C" bool m21800_gshared (t3562 * __this, uint64_t p0, uint64_t p1, MethodInfo* method);
#define m21800(__this, p0, p1, method) (( bool (*) (t3562 *, uint64_t, uint64_t, MethodInfo*))m21800_gshared)(__this, p0, p1, method)
