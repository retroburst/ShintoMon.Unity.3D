#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t351;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t354.h"

extern "C" void m2455_gshared (t351 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2455(__this, p0, p1, method) (( void (*) (t351 *, t9 *, t58, MethodInfo*))m2455_gshared)(__this, p0, p1, method)
extern "C" int32_t m16253_gshared (t351 * __this, t354  p0, t354  p1, MethodInfo* method);
#define m16253(__this, p0, p1, method) (( int32_t (*) (t351 *, t354 , t354 , MethodInfo*))m16253_gshared)(__this, p0, p1, method)
extern "C" t9 * m16254_gshared (t351 * __this, t354  p0, t354  p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m16254(__this, p0, p1, p2, p3, method) (( t9 * (*) (t351 *, t354 , t354 , t477 *, t9 *, MethodInfo*))m16254_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16255_gshared (t351 * __this, t9 * p0, MethodInfo* method);
#define m16255(__this, p0, method) (( int32_t (*) (t351 *, t9 *, MethodInfo*))m16255_gshared)(__this, p0, method)
