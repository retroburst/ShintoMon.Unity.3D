#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2719;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t2697.h"

extern "C" void m13097_gshared (t2719 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13097(__this, p0, p1, method) (( void (*) (t2719 *, t9 *, t58, MethodInfo*))m13097_gshared)(__this, p0, p1, method)
extern "C" t2697  m13098_gshared (t2719 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13098(__this, p0, p1, method) (( t2697  (*) (t2719 *, t9 *, t9 *, MethodInfo*))m13098_gshared)(__this, p0, p1, method)
extern "C" t9 * m13099_gshared (t2719 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m13099(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2719 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m13099_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2697  m13100_gshared (t2719 * __this, t9 * p0, MethodInfo* method);
#define m13100(__this, p0, method) (( t2697  (*) (t2719 *, t9 *, MethodInfo*))m13100_gshared)(__this, p0, method)
