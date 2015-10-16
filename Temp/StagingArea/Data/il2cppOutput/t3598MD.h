#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3598;
struct t9;
struct t121;
#include "t3595.h"

extern "C" void m22114_gshared (t3598 * __this, t121 * p0, MethodInfo* method);
#define m22114(__this, p0, method) (( void (*) (t3598 *, t121 *, MethodInfo*))m22114_gshared)(__this, p0, method)
extern "C" t9 * m22115_gshared (t3598 * __this, MethodInfo* method);
#define m22115(__this, method) (( t9 * (*) (t3598 *, MethodInfo*))m22115_gshared)(__this, method)
extern "C" void m22116_gshared (t3598 * __this, MethodInfo* method);
#define m22116(__this, method) (( void (*) (t3598 *, MethodInfo*))m22116_gshared)(__this, method)
extern "C" bool m22117_gshared (t3598 * __this, MethodInfo* method);
#define m22117(__this, method) (( bool (*) (t3598 *, MethodInfo*))m22117_gshared)(__this, method)
extern "C" t3595  m22118_gshared (t3598 * __this, MethodInfo* method);
#define m22118(__this, method) (( t3595  (*) (t3598 *, MethodInfo*))m22118_gshared)(__this, method)
