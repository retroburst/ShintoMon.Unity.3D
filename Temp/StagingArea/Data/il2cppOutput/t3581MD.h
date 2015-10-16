#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3581;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m21915_gshared (t3581 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21915(__this, p0, p1, method) (( void (*) (t3581 *, t9 *, t58, MethodInfo*))m21915_gshared)(__this, p0, p1, method)
extern "C" void m21917_gshared (t3581 * __this, t9 * p0, MethodInfo* method);
#define m21917(__this, p0, method) (( void (*) (t3581 *, t9 *, MethodInfo*))m21917_gshared)(__this, p0, method)
extern "C" t9 * m21919_gshared (t3581 * __this, t9 * p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m21919(__this, p0, p1, p2, method) (( t9 * (*) (t3581 *, t9 *, t463 *, t9 *, MethodInfo*))m21919_gshared)(__this, p0, p1, p2, method)
extern "C" void m21921_gshared (t3581 * __this, t9 * p0, MethodInfo* method);
#define m21921(__this, p0, method) (( void (*) (t3581 *, t9 *, MethodInfo*))m21921_gshared)(__this, p0, method)
