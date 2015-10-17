#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3578;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t1164.h"

extern "C" void m21979_gshared (t3578 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21979(__this, p0, p1, method) (( void (*) (t3578 *, t9 *, t58, MethodInfo*))m21979_gshared)(__this, p0, p1, method)
extern "C" t1164  m21980_gshared (t3578 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21980(__this, p0, p1, method) (( t1164  (*) (t3578 *, uint64_t, t9 *, MethodInfo*))m21980_gshared)(__this, p0, p1, method)
extern "C" t9 * m21981_gshared (t3578 * __this, uint64_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m21981(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3578 *, uint64_t, t9 *, t470 *, t9 *, MethodInfo*))m21981_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1164  m21982_gshared (t3578 * __this, t9 * p0, MethodInfo* method);
#define m21982(__this, p0, method) (( t1164  (*) (t3578 *, t9 *, MethodInfo*))m21982_gshared)(__this, p0, method)
