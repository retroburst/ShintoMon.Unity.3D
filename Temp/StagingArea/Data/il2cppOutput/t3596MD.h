#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3596;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3584.h"

extern "C" void m22018_gshared (t3596 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22018(__this, p0, p1, method) (( void (*) (t3596 *, t9 *, t58, MethodInfo*))m22018_gshared)(__this, p0, p1, method)
extern "C" t3584  m22019_gshared (t3596 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m22019(__this, p0, p1, method) (( t3584  (*) (t3596 *, uint64_t, t9 *, MethodInfo*))m22019_gshared)(__this, p0, p1, method)
extern "C" t9 * m22020_gshared (t3596 * __this, uint64_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m22020(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3596 *, uint64_t, t9 *, t477 *, t9 *, MethodInfo*))m22020_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3584  m22021_gshared (t3596 * __this, t9 * p0, MethodInfo* method);
#define m22021(__this, p0, method) (( t3584  (*) (t3596 *, t9 *, MethodInfo*))m22021_gshared)(__this, p0, method)
