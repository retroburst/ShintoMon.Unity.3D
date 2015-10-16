#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3396;
struct t9;
struct t121;
#include "t3395.h"

extern "C" void m20014_gshared (t3396 * __this, t121 * p0, MethodInfo* method);
#define m20014(__this, p0, method) (( void (*) (t3396 *, t121 *, MethodInfo*))m20014_gshared)(__this, p0, method)
extern "C" t9 * m20015_gshared (t3396 * __this, MethodInfo* method);
#define m20015(__this, method) (( t9 * (*) (t3396 *, MethodInfo*))m20015_gshared)(__this, method)
extern "C" void m20016_gshared (t3396 * __this, MethodInfo* method);
#define m20016(__this, method) (( void (*) (t3396 *, MethodInfo*))m20016_gshared)(__this, method)
extern "C" bool m20017_gshared (t3396 * __this, MethodInfo* method);
#define m20017(__this, method) (( bool (*) (t3396 *, MethodInfo*))m20017_gshared)(__this, method)
extern "C" t3395  m20018_gshared (t3396 * __this, MethodInfo* method);
#define m20018(__this, method) (( t3395  (*) (t3396 *, MethodInfo*))m20018_gshared)(__this, method)
