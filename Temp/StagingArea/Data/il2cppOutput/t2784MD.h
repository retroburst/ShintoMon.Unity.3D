#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2784;
struct t9;
struct t121;
#include "t2783.h"

extern "C" void m13774_gshared (t2784 * __this, t121 * p0, MethodInfo* method);
#define m13774(__this, p0, method) (( void (*) (t2784 *, t121 *, MethodInfo*))m13774_gshared)(__this, p0, method)
extern "C" t9 * m13775_gshared (t2784 * __this, MethodInfo* method);
#define m13775(__this, method) (( t9 * (*) (t2784 *, MethodInfo*))m13775_gshared)(__this, method)
extern "C" void m13776_gshared (t2784 * __this, MethodInfo* method);
#define m13776(__this, method) (( void (*) (t2784 *, MethodInfo*))m13776_gshared)(__this, method)
extern "C" bool m13777_gshared (t2784 * __this, MethodInfo* method);
#define m13777(__this, method) (( bool (*) (t2784 *, MethodInfo*))m13777_gshared)(__this, method)
extern "C" t2783  m13778_gshared (t2784 * __this, MethodInfo* method);
#define m13778(__this, method) (( t2783  (*) (t2784 *, MethodInfo*))m13778_gshared)(__this, method)
