#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3820;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m24028_gshared (t3820 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24028(__this, p0, p1, method) (( void (*) (t3820 *, t9 *, t58, MethodInfo*))m24028_gshared)(__this, p0, p1, method)
extern "C" t9 * m24029_gshared (t3820 * __this, t9 * p0, MethodInfo* method);
#define m24029(__this, p0, method) (( t9 * (*) (t3820 *, t9 *, MethodInfo*))m24029_gshared)(__this, p0, method)
extern "C" t9 * m24030_gshared (t3820 * __this, t9 * p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m24030(__this, p0, p1, p2, method) (( t9 * (*) (t3820 *, t9 *, t470 *, t9 *, MethodInfo*))m24030_gshared)(__this, p0, p1, p2, method)
extern "C" t9 * m24031_gshared (t3820 * __this, t9 * p0, MethodInfo* method);
#define m24031(__this, p0, method) (( t9 * (*) (t3820 *, t9 *, MethodInfo*))m24031_gshared)(__this, p0, method)
