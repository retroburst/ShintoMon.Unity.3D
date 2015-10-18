#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2739;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t2728.h"

extern "C" void m13224_gshared (t2739 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13224(__this, p0, p1, method) (( void (*) (t2739 *, t9 *, t58, MethodInfo*))m13224_gshared)(__this, p0, p1, method)
extern "C" t2728  m13226_gshared (t2739 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13226(__this, p0, p1, method) (( t2728  (*) (t2739 *, t9 *, t9 *, MethodInfo*))m13226_gshared)(__this, p0, p1, method)
extern "C" t9 * m13228_gshared (t2739 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m13228(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2739 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m13228_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2728  m13230_gshared (t2739 * __this, t9 * p0, MethodInfo* method);
#define m13230(__this, p0, method) (( t2728  (*) (t2739 *, t9 *, MethodInfo*))m13230_gshared)(__this, p0, method)
