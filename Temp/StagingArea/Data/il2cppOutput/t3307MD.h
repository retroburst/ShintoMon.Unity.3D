#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3307;
struct t9;
struct t121;
#include "t600.h"

extern "C" void m18976_gshared (t3307 * __this, t121 * p0, MethodInfo* method);
#define m18976(__this, p0, method) (( void (*) (t3307 *, t121 *, MethodInfo*))m18976_gshared)(__this, p0, method)
extern "C" t9 * m18977_gshared (t3307 * __this, MethodInfo* method);
#define m18977(__this, method) (( t9 * (*) (t3307 *, MethodInfo*))m18977_gshared)(__this, method)
extern "C" void m18978_gshared (t3307 * __this, MethodInfo* method);
#define m18978(__this, method) (( void (*) (t3307 *, MethodInfo*))m18978_gshared)(__this, method)
extern "C" bool m18979_gshared (t3307 * __this, MethodInfo* method);
#define m18979(__this, method) (( bool (*) (t3307 *, MethodInfo*))m18979_gshared)(__this, method)
extern "C" t600  m18980_gshared (t3307 * __this, MethodInfo* method);
#define m18980(__this, method) (( t600  (*) (t3307 *, MethodInfo*))m18980_gshared)(__this, method)
