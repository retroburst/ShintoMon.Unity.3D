#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2924;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m14970_gshared (t2924 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14970(__this, p0, p1, method) (( void (*) (t2924 *, t9 *, t58, MethodInfo*))m14970_gshared)(__this, p0, p1, method)
extern "C" int32_t m14971_gshared (t2924 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14971(__this, p0, p1, method) (( int32_t (*) (t2924 *, uint16_t, uint16_t, MethodInfo*))m14971_gshared)(__this, p0, p1, method)
extern "C" t9 * m14972_gshared (t2924 * __this, uint16_t p0, uint16_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m14972(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2924 *, uint16_t, uint16_t, t477 *, t9 *, MethodInfo*))m14972_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m14973_gshared (t2924 * __this, t9 * p0, MethodInfo* method);
#define m14973(__this, p0, method) (( int32_t (*) (t2924 *, t9 *, MethodInfo*))m14973_gshared)(__this, p0, method)
