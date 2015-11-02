#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3442;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3434.h"

extern "C" void m20324_gshared (t3442 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20324(__this, p0, p1, method) (( void (*) (t3442 *, t9 *, t58, MethodInfo*))m20324_gshared)(__this, p0, p1, method)
extern "C" t3434  m20326_gshared (t3442 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m20326(__this, p0, p1, method) (( t3434  (*) (t3442 *, t9 *, t9 *, MethodInfo*))m20326_gshared)(__this, p0, p1, method)
extern "C" t9 * m20328_gshared (t3442 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m20328(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3442 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m20328_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3434  m20330_gshared (t3442 * __this, t9 * p0, MethodInfo* method);
#define m20330(__this, p0, method) (( t3434  (*) (t3442 *, t9 *, MethodInfo*))m20330_gshared)(__this, p0, method)
