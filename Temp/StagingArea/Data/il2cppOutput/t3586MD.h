#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3586;
struct t9;
struct t121;

extern "C" void m21941_gshared (t3586 * __this, t121 * p0, MethodInfo* method);
#define m21941(__this, p0, method) (( void (*) (t3586 *, t121 *, MethodInfo*))m21941_gshared)(__this, p0, method)
extern "C" t9 * m21942_gshared (t3586 * __this, MethodInfo* method);
#define m21942(__this, method) (( t9 * (*) (t3586 *, MethodInfo*))m21942_gshared)(__this, method)
extern "C" void m21943_gshared (t3586 * __this, MethodInfo* method);
#define m21943(__this, method) (( void (*) (t3586 *, MethodInfo*))m21943_gshared)(__this, method)
extern "C" bool m21944_gshared (t3586 * __this, MethodInfo* method);
#define m21944(__this, method) (( bool (*) (t3586 *, MethodInfo*))m21944_gshared)(__this, method)
extern "C" uint64_t m21945_gshared (t3586 * __this, MethodInfo* method);
#define m21945(__this, method) (( uint64_t (*) (t3586 *, MethodInfo*))m21945_gshared)(__this, method)
