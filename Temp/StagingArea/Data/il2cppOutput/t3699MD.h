#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3699;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t919.h"

extern "C" void m22973_gshared (t3699 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22973(__this, p0, p1, method) (( void (*) (t3699 *, t9 *, t58, MethodInfo*))m22973_gshared)(__this, p0, p1, method)
extern "C" t919  m22975_gshared (t3699 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22975(__this, p0, p1, method) (( t919  (*) (t3699 *, t9 *, t9 *, MethodInfo*))m22975_gshared)(__this, p0, p1, method)
extern "C" t9 * m22977_gshared (t3699 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m22977(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3699 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m22977_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t919  m22979_gshared (t3699 * __this, t9 * p0, MethodInfo* method);
#define m22979(__this, p0, method) (( t919  (*) (t3699 *, t9 *, MethodInfo*))m22979_gshared)(__this, p0, method)
