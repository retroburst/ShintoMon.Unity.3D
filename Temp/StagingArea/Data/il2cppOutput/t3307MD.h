#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3307;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t28.h"

extern "C" void m18973_gshared (t3307 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18973(__this, p0, p1, method) (( void (*) (t3307 *, t9 *, t58, MethodInfo*))m18973_gshared)(__this, p0, p1, method)
extern "C" void m18974_gshared (t3307 * __this, t28  p0, MethodInfo* method);
#define m18974(__this, p0, method) (( void (*) (t3307 *, t28 , MethodInfo*))m18974_gshared)(__this, p0, method)
extern "C" t9 * m18975_gshared (t3307 * __this, t28  p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m18975(__this, p0, p1, p2, method) (( t9 * (*) (t3307 *, t28 , t470 *, t9 *, MethodInfo*))m18975_gshared)(__this, p0, p1, p2, method)
extern "C" void m18976_gshared (t3307 * __this, t9 * p0, MethodInfo* method);
#define m18976(__this, p0, method) (( void (*) (t3307 *, t9 *, MethodInfo*))m18976_gshared)(__this, p0, method)
