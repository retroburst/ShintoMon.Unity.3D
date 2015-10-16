#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3445;
struct t9;
struct t121;
#include "t741.h"

extern "C" void m20525_gshared (t3445 * __this, t121 * p0, MethodInfo* method);
#define m20525(__this, p0, method) (( void (*) (t3445 *, t121 *, MethodInfo*))m20525_gshared)(__this, p0, method)
extern "C" t9 * m20526_gshared (t3445 * __this, MethodInfo* method);
#define m20526(__this, method) (( t9 * (*) (t3445 *, MethodInfo*))m20526_gshared)(__this, method)
extern "C" void m20527_gshared (t3445 * __this, MethodInfo* method);
#define m20527(__this, method) (( void (*) (t3445 *, MethodInfo*))m20527_gshared)(__this, method)
extern "C" bool m20528_gshared (t3445 * __this, MethodInfo* method);
#define m20528(__this, method) (( bool (*) (t3445 *, MethodInfo*))m20528_gshared)(__this, method)
extern "C" t741  m20529_gshared (t3445 * __this, MethodInfo* method);
#define m20529(__this, method) (( t741  (*) (t3445 *, MethodInfo*))m20529_gshared)(__this, method)
