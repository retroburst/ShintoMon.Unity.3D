#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3548;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3538.h"

extern "C" void m21508_gshared (t3548 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21508(__this, p0, p1, method) (( void (*) (t3548 *, t9 *, t58, MethodInfo*))m21508_gshared)(__this, p0, p1, method)
extern "C" t3538  m21510_gshared (t3548 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21510(__this, p0, p1, method) (( t3538  (*) (t3548 *, t9 *, int64_t, MethodInfo*))m21510_gshared)(__this, p0, p1, method)
extern "C" t9 * m21512_gshared (t3548 * __this, t9 * p0, int64_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m21512(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3548 *, t9 *, int64_t, t477 *, t9 *, MethodInfo*))m21512_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3538  m21514_gshared (t3548 * __this, t9 * p0, MethodInfo* method);
#define m21514(__this, p0, method) (( t3538  (*) (t3548 *, t9 *, MethodInfo*))m21514_gshared)(__this, p0, method)
