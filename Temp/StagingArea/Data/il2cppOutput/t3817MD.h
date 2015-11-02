#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3817;
struct t835;
struct t2;
struct t9;
struct t870;

extern "C" void m24017_gshared (t3817 * __this, MethodInfo* method);
#define m24017(__this, method) (( void (*) (t3817 *, MethodInfo*))m24017_gshared)(__this, method)
extern "C" t835 * m24018_gshared (t3817 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m24018(__this, p0, p1, method) (( t835 * (*) (t3817 *, t2*, t9 *, MethodInfo*))m24018_gshared)(__this, p0, p1, method)
extern "C" t870 * m24019_gshared (t3817 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m24019(__this, p0, p1, method) (( t870 * (*) (t3817 *, t9 *, t835 *, MethodInfo*))m24019_gshared)(__this, p0, p1, method)
