#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3437;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3429.h"

extern "C" void m20289_gshared (t3437 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20289(__this, p0, p1, method) (( void (*) (t3437 *, t9 *, t58, MethodInfo*))m20289_gshared)(__this, p0, p1, method)
extern "C" t3429  m20291_gshared (t3437 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m20291(__this, p0, p1, method) (( t3429  (*) (t3437 *, t9 *, t9 *, MethodInfo*))m20291_gshared)(__this, p0, p1, method)
extern "C" t9 * m20293_gshared (t3437 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m20293(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3437 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m20293_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3429  m20295_gshared (t3437 * __this, t9 * p0, MethodInfo* method);
#define m20295(__this, p0, method) (( t3429  (*) (t3437 *, t9 *, MethodInfo*))m20295_gshared)(__this, p0, method)
