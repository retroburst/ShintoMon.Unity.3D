#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2966;
struct t9;
struct t121;
#include "t2965.h"

extern "C" void m15518_gshared (t2966 * __this, t121 * p0, MethodInfo* method);
#define m15518(__this, p0, method) (( void (*) (t2966 *, t121 *, MethodInfo*))m15518_gshared)(__this, p0, method)
extern "C" t9 * m15519_gshared (t2966 * __this, MethodInfo* method);
#define m15519(__this, method) (( t9 * (*) (t2966 *, MethodInfo*))m15519_gshared)(__this, method)
extern "C" void m15520_gshared (t2966 * __this, MethodInfo* method);
#define m15520(__this, method) (( void (*) (t2966 *, MethodInfo*))m15520_gshared)(__this, method)
extern "C" bool m15521_gshared (t2966 * __this, MethodInfo* method);
#define m15521(__this, method) (( bool (*) (t2966 *, MethodInfo*))m15521_gshared)(__this, method)
extern "C" t2965  m15522_gshared (t2966 * __this, MethodInfo* method);
#define m15522(__this, method) (( t2965  (*) (t2966 *, MethodInfo*))m15522_gshared)(__this, method)
