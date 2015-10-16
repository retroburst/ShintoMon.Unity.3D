#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3443;
struct t9;
struct t121;
#include "t58.h"

extern "C" void m20515_gshared (t3443 * __this, t121 * p0, MethodInfo* method);
#define m20515(__this, p0, method) (( void (*) (t3443 *, t121 *, MethodInfo*))m20515_gshared)(__this, p0, method)
extern "C" t9 * m20516_gshared (t3443 * __this, MethodInfo* method);
#define m20516(__this, method) (( t9 * (*) (t3443 *, MethodInfo*))m20516_gshared)(__this, method)
extern "C" void m20517_gshared (t3443 * __this, MethodInfo* method);
#define m20517(__this, method) (( void (*) (t3443 *, MethodInfo*))m20517_gshared)(__this, method)
extern "C" bool m20518_gshared (t3443 * __this, MethodInfo* method);
#define m20518(__this, method) (( bool (*) (t3443 *, MethodInfo*))m20518_gshared)(__this, method)
extern "C" t58 m20519_gshared (t3443 * __this, MethodInfo* method);
#define m20519(__this, method) (( t58 (*) (t3443 *, MethodInfo*))m20519_gshared)(__this, method)
