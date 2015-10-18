#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2894;
struct t9;
struct t121;
#include "t2892.h"

extern "C" void m14722_gshared (t2894 * __this, t121 * p0, MethodInfo* method);
#define m14722(__this, p0, method) (( void (*) (t2894 *, t121 *, MethodInfo*))m14722_gshared)(__this, p0, method)
extern "C" t9 * m14723_gshared (t2894 * __this, MethodInfo* method);
#define m14723(__this, method) (( t9 * (*) (t2894 *, MethodInfo*))m14723_gshared)(__this, method)
extern "C" void m14724_gshared (t2894 * __this, MethodInfo* method);
#define m14724(__this, method) (( void (*) (t2894 *, MethodInfo*))m14724_gshared)(__this, method)
extern "C" bool m14725_gshared (t2894 * __this, MethodInfo* method);
#define m14725(__this, method) (( bool (*) (t2894 *, MethodInfo*))m14725_gshared)(__this, method)
extern "C" t2892  m14726_gshared (t2894 * __this, MethodInfo* method);
#define m14726(__this, method) (( t2892  (*) (t2894 *, MethodInfo*))m14726_gshared)(__this, method)
