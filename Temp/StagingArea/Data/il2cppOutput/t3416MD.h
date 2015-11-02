#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3416;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3405.h"

extern "C" void m20031_gshared (t3416 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20031(__this, p0, p1, method) (( void (*) (t3416 *, t9 *, t58, MethodInfo*))m20031_gshared)(__this, p0, p1, method)
extern "C" t3405  m20033_gshared (t3416 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m20033(__this, p0, p1, method) (( t3405  (*) (t3416 *, int32_t, t9 *, MethodInfo*))m20033_gshared)(__this, p0, p1, method)
extern "C" t9 * m20035_gshared (t3416 * __this, int32_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m20035(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3416 *, int32_t, t9 *, t477 *, t9 *, MethodInfo*))m20035_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3405  m20037_gshared (t3416 * __this, t9 * p0, MethodInfo* method);
#define m20037(__this, p0, method) (( t3405  (*) (t3416 *, t9 *, MethodInfo*))m20037_gshared)(__this, p0, method)
