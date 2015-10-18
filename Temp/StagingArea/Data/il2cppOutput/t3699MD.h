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

extern "C" void m22974_gshared (t3699 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22974(__this, p0, p1, method) (( void (*) (t3699 *, t9 *, t58, MethodInfo*))m22974_gshared)(__this, p0, p1, method)
extern "C" t919  m22976_gshared (t3699 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22976(__this, p0, p1, method) (( t919  (*) (t3699 *, t9 *, t9 *, MethodInfo*))m22976_gshared)(__this, p0, p1, method)
extern "C" t9 * m22978_gshared (t3699 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m22978(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3699 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m22978_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t919  m22980_gshared (t3699 * __this, t9 * p0, MethodInfo* method);
#define m22980(__this, p0, method) (( t919  (*) (t3699 *, t9 *, MethodInfo*))m22980_gshared)(__this, p0, method)
