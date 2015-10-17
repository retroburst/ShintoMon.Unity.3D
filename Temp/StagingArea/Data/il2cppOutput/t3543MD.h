#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3543;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3533.h"

extern "C" void m21473_gshared (t3543 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21473(__this, p0, p1, method) (( void (*) (t3543 *, t9 *, t58, MethodInfo*))m21473_gshared)(__this, p0, p1, method)
extern "C" t3533  m21475_gshared (t3543 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21475(__this, p0, p1, method) (( t3533  (*) (t3543 *, t9 *, int64_t, MethodInfo*))m21475_gshared)(__this, p0, p1, method)
extern "C" t9 * m21477_gshared (t3543 * __this, t9 * p0, int64_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m21477(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3543 *, t9 *, int64_t, t470 *, t9 *, MethodInfo*))m21477_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3533  m21479_gshared (t3543 * __this, t9 * p0, MethodInfo* method);
#define m21479(__this, p0, method) (( t3533  (*) (t3543 *, t9 *, MethodInfo*))m21479_gshared)(__this, p0, method)
