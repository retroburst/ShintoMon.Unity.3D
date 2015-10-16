#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t337;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t340.h"

extern "C" void m2391_gshared (t337 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2391(__this, p0, p1, method) (( void (*) (t337 *, t9 *, t58, MethodInfo*))m2391_gshared)(__this, p0, p1, method)
extern "C" int32_t m16010_gshared (t337 * __this, t340  p0, t340  p1, MethodInfo* method);
#define m16010(__this, p0, p1, method) (( int32_t (*) (t337 *, t340 , t340 , MethodInfo*))m16010_gshared)(__this, p0, p1, method)
extern "C" t9 * m16011_gshared (t337 * __this, t340  p0, t340  p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m16011(__this, p0, p1, p2, p3, method) (( t9 * (*) (t337 *, t340 , t340 , t463 *, t9 *, MethodInfo*))m16011_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16012_gshared (t337 * __this, t9 * p0, MethodInfo* method);
#define m16012(__this, p0, method) (( int32_t (*) (t337 *, t9 *, MethodInfo*))m16012_gshared)(__this, p0, method)
