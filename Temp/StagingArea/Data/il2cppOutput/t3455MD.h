#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3455;
struct t9;
struct t121;
#include "t885.h"

extern "C" void m20494_gshared (t3455 * __this, t121 * p0, MethodInfo* method);
#define m20494(__this, p0, method) (( void (*) (t3455 *, t121 *, MethodInfo*))m20494_gshared)(__this, p0, method)
extern "C" t9 * m20495_gshared (t3455 * __this, MethodInfo* method);
#define m20495(__this, method) (( t9 * (*) (t3455 *, MethodInfo*))m20495_gshared)(__this, method)
extern "C" void m20496_gshared (t3455 * __this, MethodInfo* method);
#define m20496(__this, method) (( void (*) (t3455 *, MethodInfo*))m20496_gshared)(__this, method)
extern "C" bool m20497_gshared (t3455 * __this, MethodInfo* method);
#define m20497(__this, method) (( bool (*) (t3455 *, MethodInfo*))m20497_gshared)(__this, method)
extern "C" t885  m20498_gshared (t3455 * __this, MethodInfo* method);
#define m20498(__this, method) (( t885  (*) (t3455 *, MethodInfo*))m20498_gshared)(__this, method)
