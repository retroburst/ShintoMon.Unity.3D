#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3816;
struct t835;
struct t2;
struct t9;
struct t870;

extern "C" void m24014_gshared (t3816 * __this, MethodInfo* method);
#define m24014(__this, method) (( void (*) (t3816 *, MethodInfo*))m24014_gshared)(__this, method)
extern "C" t835 * m24015_gshared (t3816 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m24015(__this, p0, p1, method) (( t835 * (*) (t3816 *, t2*, t9 *, MethodInfo*))m24015_gshared)(__this, p0, p1, method)
extern "C" t870 * m24016_gshared (t3816 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m24016(__this, p0, p1, method) (( t870 * (*) (t3816 *, t9 *, t835 *, MethodInfo*))m24016_gshared)(__this, p0, p1, method)
