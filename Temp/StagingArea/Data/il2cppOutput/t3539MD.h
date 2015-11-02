#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3539;
struct t9;
struct t121;
#include "t3538.h"

extern "C" void m21440_gshared (t3539 * __this, t121 * p0, MethodInfo* method);
#define m21440(__this, p0, method) (( void (*) (t3539 *, t121 *, MethodInfo*))m21440_gshared)(__this, p0, method)
extern "C" t9 * m21441_gshared (t3539 * __this, MethodInfo* method);
#define m21441(__this, method) (( t9 * (*) (t3539 *, MethodInfo*))m21441_gshared)(__this, method)
extern "C" void m21442_gshared (t3539 * __this, MethodInfo* method);
#define m21442(__this, method) (( void (*) (t3539 *, MethodInfo*))m21442_gshared)(__this, method)
extern "C" bool m21443_gshared (t3539 * __this, MethodInfo* method);
#define m21443(__this, method) (( bool (*) (t3539 *, MethodInfo*))m21443_gshared)(__this, method)
extern "C" t3538  m21444_gshared (t3539 * __this, MethodInfo* method);
#define m21444(__this, method) (( t3538  (*) (t3539 *, MethodInfo*))m21444_gshared)(__this, method)
