#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3840;
struct t2;

extern "C" void m24242_gshared (t3840 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24242(__this, p0, p1, method) (( void (*) (t3840 *, int32_t, int32_t, MethodInfo*))m24242_gshared)(__this, p0, p1, method)
extern "C" int32_t m24243_gshared (t3840 * __this, MethodInfo* method);
#define m24243(__this, method) (( int32_t (*) (t3840 *, MethodInfo*))m24243_gshared)(__this, method)
extern "C" void m24244_gshared (t3840 * __this, int32_t p0, MethodInfo* method);
#define m24244(__this, p0, method) (( void (*) (t3840 *, int32_t, MethodInfo*))m24244_gshared)(__this, p0, method)
extern "C" int32_t m24245_gshared (t3840 * __this, MethodInfo* method);
#define m24245(__this, method) (( int32_t (*) (t3840 *, MethodInfo*))m24245_gshared)(__this, method)
extern "C" void m24246_gshared (t3840 * __this, int32_t p0, MethodInfo* method);
#define m24246(__this, p0, method) (( void (*) (t3840 *, int32_t, MethodInfo*))m24246_gshared)(__this, p0, method)
extern "C" t2* m24247_gshared (t3840 * __this, MethodInfo* method);
#define m24247(__this, method) (( t2* (*) (t3840 *, MethodInfo*))m24247_gshared)(__this, method)
