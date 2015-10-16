#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3060;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t340.h"

extern "C" void m16516_gshared (t3060 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m16516(__this, p0, p1, method) (( void (*) (t3060 *, t9 *, t58, MethodInfo*))m16516_gshared)(__this, p0, p1, method)
extern "C" void m16517_gshared (t3060 * __this, t340  p0, MethodInfo* method);
#define m16517(__this, p0, method) (( void (*) (t3060 *, t340 , MethodInfo*))m16517_gshared)(__this, p0, method)
extern "C" t9 * m16518_gshared (t3060 * __this, t340  p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m16518(__this, p0, p1, p2, method) (( t9 * (*) (t3060 *, t340 , t463 *, t9 *, MethodInfo*))m16518_gshared)(__this, p0, p1, p2, method)
extern "C" void m16519_gshared (t3060 * __this, t9 * p0, MethodInfo* method);
#define m16519(__this, p0, method) (( void (*) (t3060 *, t9 *, MethodInfo*))m16519_gshared)(__this, p0, method)
