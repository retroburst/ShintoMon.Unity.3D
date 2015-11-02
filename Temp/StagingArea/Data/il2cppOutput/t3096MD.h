#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3096;
struct t9;
#include "t354.h"

extern "C" void m16747_gshared (t3096 * __this, MethodInfo* method);
#define m16747(__this, method) (( void (*) (t3096 *, MethodInfo*))m16747_gshared)(__this, method)
extern "C" void m16748_gshared (t9 * __this , MethodInfo* method);
#define m16748(__this , method) (( void (*) (t9 * , MethodInfo*))m16748_gshared)(__this , method)
extern "C" int32_t m16749_gshared (t3096 * __this, t9 * p0, MethodInfo* method);
#define m16749(__this, p0, method) (( int32_t (*) (t3096 *, t9 *, MethodInfo*))m16749_gshared)(__this, p0, method)
extern "C" bool m16750_gshared (t3096 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m16750(__this, p0, p1, method) (( bool (*) (t3096 *, t9 *, t9 *, MethodInfo*))m16750_gshared)(__this, p0, p1, method)
extern "C" t3096 * m16751_gshared (t9 * __this , MethodInfo* method);
#define m16751(__this , method) (( t3096 * (*) (t9 * , MethodInfo*))m16751_gshared)(__this , method)
