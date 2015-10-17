#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3296;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3271.h"

extern "C" void m18910_gshared (t3296 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18910(__this, p0, p1, method) (( void (*) (t3296 *, t9 *, t58, MethodInfo*))m18910_gshared)(__this, p0, p1, method)
extern "C" t3271  m18912_gshared (t3296 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18912(__this, p0, p1, method) (( t3271  (*) (t3296 *, t9 *, t9 *, MethodInfo*))m18912_gshared)(__this, p0, p1, method)
extern "C" t9 * m18914_gshared (t3296 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m18914(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3296 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m18914_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3271  m18916_gshared (t3296 * __this, t9 * p0, MethodInfo* method);
#define m18916(__this, p0, method) (( t3271  (*) (t3296 *, t9 *, MethodInfo*))m18916_gshared)(__this, p0, method)
