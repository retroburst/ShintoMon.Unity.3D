#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3588;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t805.h"

extern "C" void m22055_gshared (t3588 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22055(__this, p0, p1, method) (( void (*) (t3588 *, t9 *, t58, MethodInfo*))m22055_gshared)(__this, p0, p1, method)
extern "C" t805  m22057_gshared (t3588 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22057(__this, p0, p1, method) (( t805  (*) (t3588 *, t9 *, t9 *, MethodInfo*))m22057_gshared)(__this, p0, p1, method)
extern "C" t9 * m22059_gshared (t3588 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m22059(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3588 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m22059_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t805  m22061_gshared (t3588 * __this, t9 * p0, MethodInfo* method);
#define m22061(__this, p0, method) (( t805  (*) (t3588 *, t9 *, MethodInfo*))m22061_gshared)(__this, p0, method)
