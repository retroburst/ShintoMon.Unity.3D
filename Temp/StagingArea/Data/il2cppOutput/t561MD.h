#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t561;
struct t9;
struct t343;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m16222_gshared (t561 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m16222(__this, p0, p1, method) (( void (*) (t561 *, t9 *, t58, MethodInfo*))m16222_gshared)(__this, p0, p1, method)
extern "C" void m16224_gshared (t561 * __this, t9 * p0, t343 * p1, MethodInfo* method);
#define m16224(__this, p0, p1, method) (( void (*) (t561 *, t9 *, t343 *, MethodInfo*))m16224_gshared)(__this, p0, p1, method)
extern "C" t9 * m16226_gshared (t561 * __this, t9 * p0, t343 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m16226(__this, p0, p1, p2, p3, method) (( t9 * (*) (t561 *, t9 *, t343 *, t470 *, t9 *, MethodInfo*))m16226_gshared)(__this, p0, p1, p2, p3, method)
extern "C" void m16228_gshared (t561 * __this, t9 * p0, MethodInfo* method);
#define m16228(__this, p0, method) (( void (*) (t561 *, t9 *, MethodInfo*))m16228_gshared)(__this, p0, method)
