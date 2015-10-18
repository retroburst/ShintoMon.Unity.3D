#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3515;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t1164.h"

extern "C" void m21375_gshared (t3515 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21375(__this, p0, p1, method) (( void (*) (t3515 *, t9 *, t58, MethodInfo*))m21375_gshared)(__this, p0, p1, method)
extern "C" t1164  m21376_gshared (t3515 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21376(__this, p0, p1, method) (( t1164  (*) (t3515 *, t9 *, int64_t, MethodInfo*))m21376_gshared)(__this, p0, p1, method)
extern "C" t9 * m21377_gshared (t3515 * __this, t9 * p0, int64_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m21377(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3515 *, t9 *, int64_t, t470 *, t9 *, MethodInfo*))m21377_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1164  m21378_gshared (t3515 * __this, t9 * p0, MethodInfo* method);
#define m21378(__this, p0, method) (( t1164  (*) (t3515 *, t9 *, MethodInfo*))m21378_gshared)(__this, p0, method)
