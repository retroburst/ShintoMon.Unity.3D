#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3780;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m23658_gshared (t3780 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23658(__this, p0, p1, method) (( void (*) (t3780 *, t9 *, t58, MethodInfo*))m23658_gshared)(__this, p0, p1, method)
extern "C" void m23659_gshared (t3780 * __this, t9 * p0, t9 * p1, t9 * p2, MethodInfo* method);
#define m23659(__this, p0, p1, p2, method) (( void (*) (t3780 *, t9 *, t9 *, t9 *, MethodInfo*))m23659_gshared)(__this, p0, p1, p2, method)
extern "C" t9 * m23660_gshared (t3780 * __this, t9 * p0, t9 * p1, t9 * p2, t470 * p3, t9 * p4, MethodInfo* method);
#define m23660(__this, p0, p1, p2, p3, p4, method) (( t9 * (*) (t3780 *, t9 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m23660_gshared)(__this, p0, p1, p2, p3, p4, method)
extern "C" void m23661_gshared (t3780 * __this, t9 * p0, MethodInfo* method);
#define m23661(__this, p0, method) (( void (*) (t3780 *, t9 *, MethodInfo*))m23661_gshared)(__this, p0, method)
