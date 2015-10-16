#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3095;
struct t9;
struct t121;
#include "t559.h"

extern "C" void m16938_gshared (t3095 * __this, t121 * p0, MethodInfo* method);
#define m16938(__this, p0, method) (( void (*) (t3095 *, t121 *, MethodInfo*))m16938_gshared)(__this, p0, method)
extern "C" t9 * m16939_gshared (t3095 * __this, MethodInfo* method);
#define m16939(__this, method) (( t9 * (*) (t3095 *, MethodInfo*))m16939_gshared)(__this, method)
extern "C" void m16940_gshared (t3095 * __this, MethodInfo* method);
#define m16940(__this, method) (( void (*) (t3095 *, MethodInfo*))m16940_gshared)(__this, method)
extern "C" bool m16941_gshared (t3095 * __this, MethodInfo* method);
#define m16941(__this, method) (( bool (*) (t3095 *, MethodInfo*))m16941_gshared)(__this, method)
extern "C" t559  m16942_gshared (t3095 * __this, MethodInfo* method);
#define m16942(__this, method) (( t559  (*) (t3095 *, MethodInfo*))m16942_gshared)(__this, method)
