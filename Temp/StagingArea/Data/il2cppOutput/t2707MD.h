#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2707;
struct t9;
struct t121;

extern "C" void m13009_gshared (t2707 * __this, t121 * p0, MethodInfo* method);
#define m13009(__this, p0, method) (( void (*) (t2707 *, t121 *, MethodInfo*))m13009_gshared)(__this, p0, method)
extern "C" t9 * m13010_gshared (t2707 * __this, MethodInfo* method);
#define m13010(__this, method) (( t9 * (*) (t2707 *, MethodInfo*))m13010_gshared)(__this, method)
extern "C" void m13011_gshared (t2707 * __this, MethodInfo* method);
#define m13011(__this, method) (( void (*) (t2707 *, MethodInfo*))m13011_gshared)(__this, method)
extern "C" bool m13012_gshared (t2707 * __this, MethodInfo* method);
#define m13012(__this, method) (( bool (*) (t2707 *, MethodInfo*))m13012_gshared)(__this, method)
extern "C" int32_t m13013_gshared (t2707 * __this, MethodInfo* method);
#define m13013(__this, method) (( int32_t (*) (t2707 *, MethodInfo*))m13013_gshared)(__this, method)
