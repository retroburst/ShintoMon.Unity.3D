#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3622;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3590.h"

extern "C" void m22329_gshared (t3622 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22329(__this, p0, p1, method) (( void (*) (t3622 *, t9 *, t58, MethodInfo*))m22329_gshared)(__this, p0, p1, method)
extern "C" t3590  m22331_gshared (t3622 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22331(__this, p0, p1, method) (( t3590  (*) (t3622 *, t9 *, t9 *, MethodInfo*))m22331_gshared)(__this, p0, p1, method)
extern "C" t9 * m22333_gshared (t3622 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m22333(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3622 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m22333_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3590  m22335_gshared (t3622 * __this, t9 * p0, MethodInfo* method);
#define m22335(__this, p0, method) (( t3590  (*) (t3622 *, t9 *, MethodInfo*))m22335_gshared)(__this, p0, method)
