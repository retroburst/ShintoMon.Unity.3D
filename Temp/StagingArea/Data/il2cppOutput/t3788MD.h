#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3788;
struct t57;
struct t57_marshaled;
struct t835;
struct t9;
struct t158;

extern "C" void m23703_gshared (t3788 * __this, t57 * p0, t835 * p1, t9 * p2, MethodInfo* method);
#define m23703(__this, p0, p1, p2, method) (( void (*) (t3788 *, t57 *, t835 *, t9 *, MethodInfo*))m23703_gshared)(__this, p0, p1, p2, method)
extern "C" void m23704_gshared (t3788 * __this, t158* p0, MethodInfo* method);
#define m23704(__this, p0, method) (( void (*) (t3788 *, t158*, MethodInfo*))m23704_gshared)(__this, p0, method)
