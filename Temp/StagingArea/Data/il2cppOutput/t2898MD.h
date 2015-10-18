#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2898;

extern "C" void m14741_gshared (t2898 * __this, MethodInfo* method);
#define m14741(__this, method) (( void (*) (t2898 *, MethodInfo*))m14741_gshared)(__this, method)
extern "C" int32_t m14742_gshared (t2898 * __this, uint16_t p0, MethodInfo* method);
#define m14742(__this, p0, method) (( int32_t (*) (t2898 *, uint16_t, MethodInfo*))m14742_gshared)(__this, p0, method)
extern "C" bool m14743_gshared (t2898 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14743(__this, p0, p1, method) (( bool (*) (t2898 *, uint16_t, uint16_t, MethodInfo*))m14743_gshared)(__this, p0, p1, method)
