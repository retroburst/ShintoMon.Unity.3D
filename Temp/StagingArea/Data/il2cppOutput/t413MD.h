#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t413;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t164.h"

extern "C" void m2599_gshared (t413 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2599(__this, p0, p1, method) (( void (*) (t413 *, t9 *, t58, MethodInfo*))m2599_gshared)(__this, p0, p1, method)
extern "C" int32_t m17430_gshared (t413 * __this, t164  p0, t164  p1, MethodInfo* method);
#define m17430(__this, p0, p1, method) (( int32_t (*) (t413 *, t164 , t164 , MethodInfo*))m17430_gshared)(__this, p0, p1, method)
extern "C" t9 * m17431_gshared (t413 * __this, t164  p0, t164  p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m17431(__this, p0, p1, p2, p3, method) (( t9 * (*) (t413 *, t164 , t164 , t477 *, t9 *, MethodInfo*))m17431_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m17432_gshared (t413 * __this, t9 * p0, MethodInfo* method);
#define m17432(__this, p0, method) (( int32_t (*) (t413 *, t9 *, MethodInfo*))m17432_gshared)(__this, p0, method)
