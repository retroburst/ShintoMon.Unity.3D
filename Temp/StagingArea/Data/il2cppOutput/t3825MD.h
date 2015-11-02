#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3825;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m24062_gshared (t3825 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24062(__this, p0, p1, method) (( void (*) (t3825 *, t9 *, t58, MethodInfo*))m24062_gshared)(__this, p0, p1, method)
extern "C" t9 * m24063_gshared (t3825 * __this, t9 * p0, MethodInfo* method);
#define m24063(__this, p0, method) (( t9 * (*) (t3825 *, t9 *, MethodInfo*))m24063_gshared)(__this, p0, method)
extern "C" t9 * m24064_gshared (t3825 * __this, t9 * p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m24064(__this, p0, p1, p2, method) (( t9 * (*) (t3825 *, t9 *, t477 *, t9 *, MethodInfo*))m24064_gshared)(__this, p0, p1, p2, method)
extern "C" t9 * m24065_gshared (t3825 * __this, t9 * p0, MethodInfo* method);
#define m24065(__this, p0, method) (( t9 * (*) (t3825 *, t9 *, MethodInfo*))m24065_gshared)(__this, p0, method)
