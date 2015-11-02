#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3506;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t601.h"

extern "C" void m21065_gshared (t3506 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21065(__this, p0, p1, method) (( void (*) (t3506 *, t9 *, t58, MethodInfo*))m21065_gshared)(__this, p0, p1, method)
extern "C" int32_t m21066_gshared (t3506 * __this, t601  p0, t601  p1, MethodInfo* method);
#define m21066(__this, p0, p1, method) (( int32_t (*) (t3506 *, t601 , t601 , MethodInfo*))m21066_gshared)(__this, p0, p1, method)
extern "C" t9 * m21067_gshared (t3506 * __this, t601  p0, t601  p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m21067(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3506 *, t601 , t601 , t477 *, t9 *, MethodInfo*))m21067_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m21068_gshared (t3506 * __this, t9 * p0, MethodInfo* method);
#define m21068(__this, p0, method) (( int32_t (*) (t3506 *, t9 *, MethodInfo*))m21068_gshared)(__this, p0, method)
