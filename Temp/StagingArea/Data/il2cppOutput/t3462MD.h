#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3462;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t885.h"

extern "C" void m20555_gshared (t3462 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20555(__this, p0, p1, method) (( void (*) (t3462 *, t9 *, t58, MethodInfo*))m20555_gshared)(__this, p0, p1, method)
extern "C" t885  m20557_gshared (t3462 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m20557(__this, p0, p1, method) (( t885  (*) (t3462 *, t9 *, t9 *, MethodInfo*))m20557_gshared)(__this, p0, p1, method)
extern "C" t9 * m20559_gshared (t3462 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m20559(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3462 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m20559_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t885  m20561_gshared (t3462 * __this, t9 * p0, MethodInfo* method);
#define m20561(__this, p0, method) (( t885  (*) (t3462 *, t9 *, MethodInfo*))m20561_gshared)(__this, p0, method)
