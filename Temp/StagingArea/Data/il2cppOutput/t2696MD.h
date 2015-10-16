#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2696;
struct t9;
struct t121;
#include "t2688.h"

extern "C" void m12970_gshared (t2696 * __this, t121 * p0, MethodInfo* method);
#define m12970(__this, p0, method) (( void (*) (t2696 *, t121 *, MethodInfo*))m12970_gshared)(__this, p0, method)
extern "C" t9 * m12971_gshared (t2696 * __this, MethodInfo* method);
#define m12971(__this, method) (( t9 * (*) (t2696 *, MethodInfo*))m12971_gshared)(__this, method)
extern "C" void m12972_gshared (t2696 * __this, MethodInfo* method);
#define m12972(__this, method) (( void (*) (t2696 *, MethodInfo*))m12972_gshared)(__this, method)
extern "C" bool m12973_gshared (t2696 * __this, MethodInfo* method);
#define m12973(__this, method) (( bool (*) (t2696 *, MethodInfo*))m12973_gshared)(__this, method)
extern "C" t2688  m12974_gshared (t2696 * __this, MethodInfo* method);
#define m12974(__this, method) (( t2688  (*) (t2696 *, MethodInfo*))m12974_gshared)(__this, method)
