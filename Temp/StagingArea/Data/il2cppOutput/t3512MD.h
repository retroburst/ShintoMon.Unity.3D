#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3512;
struct t9;
struct t121;
#include "t812.h"

extern "C" void m21187_gshared (t3512 * __this, t121 * p0, MethodInfo* method);
#define m21187(__this, p0, method) (( void (*) (t3512 *, t121 *, MethodInfo*))m21187_gshared)(__this, p0, method)
extern "C" t9 * m21188_gshared (t3512 * __this, MethodInfo* method);
#define m21188(__this, method) (( t9 * (*) (t3512 *, MethodInfo*))m21188_gshared)(__this, method)
extern "C" void m21189_gshared (t3512 * __this, MethodInfo* method);
#define m21189(__this, method) (( void (*) (t3512 *, MethodInfo*))m21189_gshared)(__this, method)
extern "C" bool m21190_gshared (t3512 * __this, MethodInfo* method);
#define m21190(__this, method) (( bool (*) (t3512 *, MethodInfo*))m21190_gshared)(__this, method)
extern "C" t812  m21191_gshared (t3512 * __this, MethodInfo* method);
#define m21191(__this, method) (( t812  (*) (t3512 *, MethodInfo*))m21191_gshared)(__this, method)
