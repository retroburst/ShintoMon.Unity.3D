#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3532;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m21405_gshared (t3532 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21405(__this, p0, p1, method) (( void (*) (t3532 *, t9 *, t58, MethodInfo*))m21405_gshared)(__this, p0, p1, method)
extern "C" int64_t m21406_gshared (t3532 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21406(__this, p0, p1, method) (( int64_t (*) (t3532 *, t9 *, int64_t, MethodInfo*))m21406_gshared)(__this, p0, p1, method)
extern "C" t9 * m21407_gshared (t3532 * __this, t9 * p0, int64_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m21407(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3532 *, t9 *, int64_t, t477 *, t9 *, MethodInfo*))m21407_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int64_t m21408_gshared (t3532 * __this, t9 * p0, MethodInfo* method);
#define m21408(__this, p0, method) (( int64_t (*) (t3532 *, t9 *, MethodInfo*))m21408_gshared)(__this, p0, method)
