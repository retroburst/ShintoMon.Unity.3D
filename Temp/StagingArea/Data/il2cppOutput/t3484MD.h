#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3484;
struct t9;
struct t121;
#include "t3483.h"

extern "C" void m21093_gshared (t3484 * __this, t121 * p0, MethodInfo* method);
#define m21093(__this, p0, method) (( void (*) (t3484 *, t121 *, MethodInfo*))m21093_gshared)(__this, p0, method)
extern "C" t9 * m21094_gshared (t3484 * __this, MethodInfo* method);
#define m21094(__this, method) (( t9 * (*) (t3484 *, MethodInfo*))m21094_gshared)(__this, method)
extern "C" void m21095_gshared (t3484 * __this, MethodInfo* method);
#define m21095(__this, method) (( void (*) (t3484 *, MethodInfo*))m21095_gshared)(__this, method)
extern "C" bool m21096_gshared (t3484 * __this, MethodInfo* method);
#define m21096(__this, method) (( bool (*) (t3484 *, MethodInfo*))m21096_gshared)(__this, method)
extern "C" t3483  m21097_gshared (t3484 * __this, MethodInfo* method);
#define m21097(__this, method) (( t3483  (*) (t3484 *, MethodInfo*))m21097_gshared)(__this, method)
