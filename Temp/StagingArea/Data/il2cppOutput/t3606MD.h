#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3606;
struct t9;
struct t121;
#include "t3600.h"

extern "C" void m22162_gshared (t3606 * __this, t121 * p0, MethodInfo* method);
#define m22162(__this, p0, method) (( void (*) (t3606 *, t121 *, MethodInfo*))m22162_gshared)(__this, p0, method)
extern "C" t9 * m22163_gshared (t3606 * __this, MethodInfo* method);
#define m22163(__this, method) (( t9 * (*) (t3606 *, MethodInfo*))m22163_gshared)(__this, method)
extern "C" void m22164_gshared (t3606 * __this, MethodInfo* method);
#define m22164(__this, method) (( void (*) (t3606 *, MethodInfo*))m22164_gshared)(__this, method)
extern "C" bool m22165_gshared (t3606 * __this, MethodInfo* method);
#define m22165(__this, method) (( bool (*) (t3606 *, MethodInfo*))m22165_gshared)(__this, method)
extern "C" t3600  m22166_gshared (t3606 * __this, MethodInfo* method);
#define m22166(__this, method) (( t3600  (*) (t3606 *, MethodInfo*))m22166_gshared)(__this, method)
