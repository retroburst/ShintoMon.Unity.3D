#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3070;
struct t3072;
struct t9;

extern "C" void m16411_gshared (t3070 * __this, t3072 * p0, t3072 * p1, MethodInfo* method);
#define m16411(__this, p0, p1, method) (( void (*) (t3070 *, t3072 *, t3072 *, MethodInfo*))m16411_gshared)(__this, p0, p1, method)
extern "C" int32_t m16413_gshared (t3070 * __this, MethodInfo* method);
#define m16413(__this, method) (( int32_t (*) (t3070 *, MethodInfo*))m16413_gshared)(__this, method)
extern "C" void m16415_gshared (t3070 * __this, int32_t p0, MethodInfo* method);
#define m16415(__this, p0, method) (( void (*) (t3070 *, int32_t, MethodInfo*))m16415_gshared)(__this, p0, method)
extern "C" int32_t m16417_gshared (t3070 * __this, MethodInfo* method);
#define m16417(__this, method) (( int32_t (*) (t3070 *, MethodInfo*))m16417_gshared)(__this, method)
extern "C" int32_t m16419_gshared (t3070 * __this, MethodInfo* method);
#define m16419(__this, method) (( int32_t (*) (t3070 *, MethodInfo*))m16419_gshared)(__this, method)
extern "C" t9 * m16421_gshared (t3070 * __this, MethodInfo* method);
#define m16421(__this, method) (( t9 * (*) (t3070 *, MethodInfo*))m16421_gshared)(__this, method)
extern "C" void m16423_gshared (t3070 * __this, t9 * p0, MethodInfo* method);
#define m16423(__this, p0, method) (( void (*) (t3070 *, t9 *, MethodInfo*))m16423_gshared)(__this, p0, method)
