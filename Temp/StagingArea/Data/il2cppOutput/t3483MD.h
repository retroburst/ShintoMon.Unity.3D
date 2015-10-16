#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3483;
struct t9;
struct t2;

extern "C" void m21087_gshared (t3483 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21087(__this, p0, p1, method) (( void (*) (t3483 *, t9 *, int64_t, MethodInfo*))m21087_gshared)(__this, p0, p1, method)
extern "C" t9 * m21088_gshared (t3483 * __this, MethodInfo* method);
#define m21088(__this, method) (( t9 * (*) (t3483 *, MethodInfo*))m21088_gshared)(__this, method)
extern "C" void m21089_gshared (t3483 * __this, t9 * p0, MethodInfo* method);
#define m21089(__this, p0, method) (( void (*) (t3483 *, t9 *, MethodInfo*))m21089_gshared)(__this, p0, method)
extern "C" int64_t m21090_gshared (t3483 * __this, MethodInfo* method);
#define m21090(__this, method) (( int64_t (*) (t3483 *, MethodInfo*))m21090_gshared)(__this, method)
extern "C" void m21091_gshared (t3483 * __this, int64_t p0, MethodInfo* method);
#define m21091(__this, p0, method) (( void (*) (t3483 *, int64_t, MethodInfo*))m21091_gshared)(__this, p0, method)
extern "C" t2* m21092_gshared (t3483 * __this, MethodInfo* method);
#define m21092(__this, method) (( t2* (*) (t3483 *, MethodInfo*))m21092_gshared)(__this, method)
