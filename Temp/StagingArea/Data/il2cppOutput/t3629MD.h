#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3629;
struct t9;
struct t121;
#include "t3628.h"

extern "C" void m22312_gshared (t3629 * __this, t121 * p0, MethodInfo* method);
#define m22312(__this, p0, method) (( void (*) (t3629 *, t121 *, MethodInfo*))m22312_gshared)(__this, p0, method)
extern "C" t9 * m22313_gshared (t3629 * __this, MethodInfo* method);
#define m22313(__this, method) (( t9 * (*) (t3629 *, MethodInfo*))m22313_gshared)(__this, method)
extern "C" void m22314_gshared (t3629 * __this, MethodInfo* method);
#define m22314(__this, method) (( void (*) (t3629 *, MethodInfo*))m22314_gshared)(__this, method)
extern "C" bool m22315_gshared (t3629 * __this, MethodInfo* method);
#define m22315(__this, method) (( bool (*) (t3629 *, MethodInfo*))m22315_gshared)(__this, method)
extern "C" t3628  m22316_gshared (t3629 * __this, MethodInfo* method);
#define m22316(__this, method) (( t3628  (*) (t3629 *, MethodInfo*))m22316_gshared)(__this, method)
