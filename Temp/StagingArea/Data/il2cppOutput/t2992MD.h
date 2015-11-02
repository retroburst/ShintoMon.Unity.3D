#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2992;

extern "C" void m15672_gshared (t2992 * __this, MethodInfo* method);
#define m15672(__this, method) (( void (*) (t2992 *, MethodInfo*))m15672_gshared)(__this, method)
extern "C" int32_t m15673_gshared (t2992 * __this, int32_t p0, MethodInfo* method);
#define m15673(__this, p0, method) (( int32_t (*) (t2992 *, int32_t, MethodInfo*))m15673_gshared)(__this, p0, method)
extern "C" bool m15674_gshared (t2992 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m15674(__this, p0, p1, method) (( bool (*) (t2992 *, int32_t, int32_t, MethodInfo*))m15674_gshared)(__this, p0, p1, method)
