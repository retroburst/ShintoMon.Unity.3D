#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2987;

extern "C" void m15637_gshared (t2987 * __this, MethodInfo* method);
#define m15637(__this, method) (( void (*) (t2987 *, MethodInfo*))m15637_gshared)(__this, method)
extern "C" int32_t m15638_gshared (t2987 * __this, int32_t p0, MethodInfo* method);
#define m15638(__this, p0, method) (( int32_t (*) (t2987 *, int32_t, MethodInfo*))m15638_gshared)(__this, p0, method)
extern "C" bool m15639_gshared (t2987 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m15639(__this, p0, p1, method) (( bool (*) (t2987 *, int32_t, int32_t, MethodInfo*))m15639_gshared)(__this, p0, p1, method)
