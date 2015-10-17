#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3685;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3631.h"

extern "C" void m22840_gshared (t3685 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22840(__this, p0, p1, method) (( void (*) (t3685 *, t9 *, t58, MethodInfo*))m22840_gshared)(__this, p0, p1, method)
extern "C" t3631  m22842_gshared (t3685 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22842(__this, p0, p1, method) (( t3631  (*) (t3685 *, t9 *, t9 *, MethodInfo*))m22842_gshared)(__this, p0, p1, method)
extern "C" t9 * m22844_gshared (t3685 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m22844(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3685 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m22844_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3631  m22846_gshared (t3685 * __this, t9 * p0, MethodInfo* method);
#define m22846(__this, p0, method) (( t3631  (*) (t3685 *, t9 *, MethodInfo*))m22846_gshared)(__this, p0, method)
