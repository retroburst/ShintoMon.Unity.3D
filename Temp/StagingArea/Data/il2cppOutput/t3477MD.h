#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3477;
struct t9;
struct t121;
#include "t58.h"

extern "C" void m20724_gshared (t3477 * __this, t121 * p0, MethodInfo* method);
#define m20724(__this, p0, method) (( void (*) (t3477 *, t121 *, MethodInfo*))m20724_gshared)(__this, p0, method)
extern "C" t9 * m20725_gshared (t3477 * __this, MethodInfo* method);
#define m20725(__this, method) (( t9 * (*) (t3477 *, MethodInfo*))m20725_gshared)(__this, method)
extern "C" void m20726_gshared (t3477 * __this, MethodInfo* method);
#define m20726(__this, method) (( void (*) (t3477 *, MethodInfo*))m20726_gshared)(__this, method)
extern "C" bool m20727_gshared (t3477 * __this, MethodInfo* method);
#define m20727(__this, method) (( bool (*) (t3477 *, MethodInfo*))m20727_gshared)(__this, method)
extern "C" t58 m20728_gshared (t3477 * __this, MethodInfo* method);
#define m20728(__this, method) (( t58 (*) (t3477 *, MethodInfo*))m20728_gshared)(__this, method)
