#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3850;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m24318_gshared (t3850 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24318(__this, p0, p1, method) (( void (*) (t3850 *, t9 *, t58, MethodInfo*))m24318_gshared)(__this, p0, p1, method)
extern "C" int32_t m24319_gshared (t3850 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24319(__this, p0, p1, method) (( int32_t (*) (t3850 *, int32_t, int32_t, MethodInfo*))m24319_gshared)(__this, p0, p1, method)
extern "C" t9 * m24320_gshared (t3850 * __this, int32_t p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m24320(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3850 *, int32_t, int32_t, t477 *, t9 *, MethodInfo*))m24320_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m24321_gshared (t3850 * __this, t9 * p0, MethodInfo* method);
#define m24321(__this, p0, method) (( int32_t (*) (t3850 *, t9 *, MethodInfo*))m24321_gshared)(__this, p0, method)
