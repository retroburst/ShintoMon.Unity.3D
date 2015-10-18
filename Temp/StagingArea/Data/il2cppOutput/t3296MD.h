#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3296;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3271.h"

extern "C" void m18911_gshared (t3296 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18911(__this, p0, p1, method) (( void (*) (t3296 *, t9 *, t58, MethodInfo*))m18911_gshared)(__this, p0, p1, method)
extern "C" t3271  m18913_gshared (t3296 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18913(__this, p0, p1, method) (( t3271  (*) (t3296 *, t9 *, t9 *, MethodInfo*))m18913_gshared)(__this, p0, p1, method)
extern "C" t9 * m18915_gshared (t3296 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m18915(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3296 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m18915_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3271  m18917_gshared (t3296 * __this, t9 * p0, MethodInfo* method);
#define m18917(__this, p0, method) (( t3271  (*) (t3296 *, t9 *, MethodInfo*))m18917_gshared)(__this, p0, method)
