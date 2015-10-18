#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2900;
struct t9;
struct t121;
#include "t2888.h"

extern "C" void m14748_gshared (t2900 * __this, t121 * p0, MethodInfo* method);
#define m14748(__this, p0, method) (( void (*) (t2900 *, t121 *, MethodInfo*))m14748_gshared)(__this, p0, method)
extern "C" t9 * m14749_gshared (t2900 * __this, MethodInfo* method);
#define m14749(__this, method) (( t9 * (*) (t2900 *, MethodInfo*))m14749_gshared)(__this, method)
extern "C" void m14750_gshared (t2900 * __this, MethodInfo* method);
#define m14750(__this, method) (( void (*) (t2900 *, MethodInfo*))m14750_gshared)(__this, method)
extern "C" bool m14751_gshared (t2900 * __this, MethodInfo* method);
#define m14751(__this, method) (( bool (*) (t2900 *, MethodInfo*))m14751_gshared)(__this, method)
extern "C" t2888  m14752_gshared (t2900 * __this, MethodInfo* method);
#define m14752(__this, method) (( t2888  (*) (t2900 *, MethodInfo*))m14752_gshared)(__this, method)
