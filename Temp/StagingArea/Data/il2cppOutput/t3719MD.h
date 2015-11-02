#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3719;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3637.h"
#include "t922.h"

extern "C" void m23190_gshared (t3719 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23190(__this, p0, p1, method) (( void (*) (t3719 *, t9 *, t58, MethodInfo*))m23190_gshared)(__this, p0, p1, method)
extern "C" t3637  m23191_gshared (t3719 * __this, t9 * p0, t922  p1, MethodInfo* method);
#define m23191(__this, p0, p1, method) (( t3637  (*) (t3719 *, t9 *, t922 , MethodInfo*))m23191_gshared)(__this, p0, p1, method)
extern "C" t9 * m23192_gshared (t3719 * __this, t9 * p0, t922  p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m23192(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3719 *, t9 *, t922 , t477 *, t9 *, MethodInfo*))m23192_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3637  m23193_gshared (t3719 * __this, t9 * p0, MethodInfo* method);
#define m23193(__this, p0, method) (( t3637  (*) (t3719 *, t9 *, MethodInfo*))m23193_gshared)(__this, p0, method)
