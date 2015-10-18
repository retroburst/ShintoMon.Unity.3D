#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3160;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t1164.h"

extern "C" void m17558_gshared (t3160 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17558(__this, p0, p1, method) (( void (*) (t3160 *, t9 *, t58, MethodInfo*))m17558_gshared)(__this, p0, p1, method)
extern "C" t1164  m17559_gshared (t3160 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17559(__this, p0, p1, method) (( t1164  (*) (t3160 *, t9 *, int32_t, MethodInfo*))m17559_gshared)(__this, p0, p1, method)
extern "C" t9 * m17560_gshared (t3160 * __this, t9 * p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m17560(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3160 *, t9 *, int32_t, t470 *, t9 *, MethodInfo*))m17560_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1164  m17561_gshared (t3160 * __this, t9 * p0, MethodInfo* method);
#define m17561(__this, p0, method) (( t1164  (*) (t3160 *, t9 *, MethodInfo*))m17561_gshared)(__this, p0, method)
