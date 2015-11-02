#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3818;
struct t835;
struct t2;
struct t9;
struct t870;

extern "C" void m24020_gshared (t3818 * __this, MethodInfo* method);
#define m24020(__this, method) (( void (*) (t3818 *, MethodInfo*))m24020_gshared)(__this, method)
extern "C" t835 * m24021_gshared (t3818 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m24021(__this, p0, p1, method) (( t835 * (*) (t3818 *, t2*, t9 *, MethodInfo*))m24021_gshared)(__this, p0, p1, method)
extern "C" t870 * m24022_gshared (t3818 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m24022(__this, p0, p1, method) (( t870 * (*) (t3818 *, t9 *, t835 *, MethodInfo*))m24022_gshared)(__this, p0, p1, method)
