#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3642;
struct t9;
struct t121;
#include "t3636.h"

extern "C" void m22390_gshared (t3642 * __this, t121 * p0, MethodInfo* method);
#define m22390(__this, p0, method) (( void (*) (t3642 *, t121 *, MethodInfo*))m22390_gshared)(__this, p0, method)
extern "C" t9 * m22391_gshared (t3642 * __this, MethodInfo* method);
#define m22391(__this, method) (( t9 * (*) (t3642 *, MethodInfo*))m22391_gshared)(__this, method)
extern "C" void m22392_gshared (t3642 * __this, MethodInfo* method);
#define m22392(__this, method) (( void (*) (t3642 *, MethodInfo*))m22392_gshared)(__this, method)
extern "C" bool m22393_gshared (t3642 * __this, MethodInfo* method);
#define m22393(__this, method) (( bool (*) (t3642 *, MethodInfo*))m22393_gshared)(__this, method)
extern "C" t3636  m22394_gshared (t3642 * __this, MethodInfo* method);
#define m22394(__this, method) (( t3636  (*) (t3642 *, MethodInfo*))m22394_gshared)(__this, method)
