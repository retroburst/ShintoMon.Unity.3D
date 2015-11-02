#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3602;
struct t9;
struct t121;
#include "t3601.h"

extern "C" void m22045_gshared (t3602 * __this, t121 * p0, MethodInfo* method);
#define m22045(__this, p0, method) (( void (*) (t3602 *, t121 *, MethodInfo*))m22045_gshared)(__this, p0, method)
extern "C" t9 * m22046_gshared (t3602 * __this, MethodInfo* method);
#define m22046(__this, method) (( t9 * (*) (t3602 *, MethodInfo*))m22046_gshared)(__this, method)
extern "C" void m22047_gshared (t3602 * __this, MethodInfo* method);
#define m22047(__this, method) (( void (*) (t3602 *, MethodInfo*))m22047_gshared)(__this, method)
extern "C" bool m22048_gshared (t3602 * __this, MethodInfo* method);
#define m22048(__this, method) (( bool (*) (t3602 *, MethodInfo*))m22048_gshared)(__this, method)
extern "C" t3601  m22049_gshared (t3602 * __this, MethodInfo* method);
#define m22049(__this, method) (( t3601  (*) (t3602 *, MethodInfo*))m22049_gshared)(__this, method)
