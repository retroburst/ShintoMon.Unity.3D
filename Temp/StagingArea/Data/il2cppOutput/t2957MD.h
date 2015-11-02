#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2957;
struct t9;
struct t121;
#include "t2956.h"

extern "C" void m15377_gshared (t2957 * __this, t121 * p0, MethodInfo* method);
#define m15377(__this, p0, method) (( void (*) (t2957 *, t121 *, MethodInfo*))m15377_gshared)(__this, p0, method)
extern "C" t9 * m15378_gshared (t2957 * __this, MethodInfo* method);
#define m15378(__this, method) (( t9 * (*) (t2957 *, MethodInfo*))m15378_gshared)(__this, method)
extern "C" void m15379_gshared (t2957 * __this, MethodInfo* method);
#define m15379(__this, method) (( void (*) (t2957 *, MethodInfo*))m15379_gshared)(__this, method)
extern "C" bool m15380_gshared (t2957 * __this, MethodInfo* method);
#define m15380(__this, method) (( bool (*) (t2957 *, MethodInfo*))m15380_gshared)(__this, method)
extern "C" t2956  m15381_gshared (t2957 * __this, MethodInfo* method);
#define m15381(__this, method) (( t2956  (*) (t2957 *, MethodInfo*))m15381_gshared)(__this, method)
