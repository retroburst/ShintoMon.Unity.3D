#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2980;
struct t9;
struct t121;
#include "t2979.h"

extern "C" void m15612_gshared (t2980 * __this, t121 * p0, MethodInfo* method);
#define m15612(__this, p0, method) (( void (*) (t2980 *, t121 *, MethodInfo*))m15612_gshared)(__this, p0, method)
extern "C" t9 * m15613_gshared (t2980 * __this, MethodInfo* method);
#define m15613(__this, method) (( t9 * (*) (t2980 *, MethodInfo*))m15613_gshared)(__this, method)
extern "C" void m15614_gshared (t2980 * __this, MethodInfo* method);
#define m15614(__this, method) (( void (*) (t2980 *, MethodInfo*))m15614_gshared)(__this, method)
extern "C" bool m15615_gshared (t2980 * __this, MethodInfo* method);
#define m15615(__this, method) (( bool (*) (t2980 *, MethodInfo*))m15615_gshared)(__this, method)
extern "C" t2979  m15616_gshared (t2980 * __this, MethodInfo* method);
#define m15616(__this, method) (( t2979  (*) (t2980 *, MethodInfo*))m15616_gshared)(__this, method)
