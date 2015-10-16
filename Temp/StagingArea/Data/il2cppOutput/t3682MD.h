#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3682;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t909.h"

extern "C" void m22954_gshared (t3682 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22954(__this, p0, p1, method) (( void (*) (t3682 *, t9 *, t58, MethodInfo*))m22954_gshared)(__this, p0, p1, method)
extern "C" t909  m22955_gshared (t3682 * __this, t9 * p0, t909  p1, MethodInfo* method);
#define m22955(__this, p0, p1, method) (( t909  (*) (t3682 *, t9 *, t909 , MethodInfo*))m22955_gshared)(__this, p0, p1, method)
extern "C" t9 * m22956_gshared (t3682 * __this, t9 * p0, t909  p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m22956(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3682 *, t9 *, t909 , t463 *, t9 *, MethodInfo*))m22956_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t909  m22957_gshared (t3682 * __this, t9 * p0, MethodInfo* method);
#define m22957(__this, p0, method) (( t909  (*) (t3682 *, t9 *, MethodInfo*))m22957_gshared)(__this, p0, method)
