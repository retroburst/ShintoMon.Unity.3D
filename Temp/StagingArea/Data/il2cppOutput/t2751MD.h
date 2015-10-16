#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2751;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t2740.h"

extern "C" void m13354_gshared (t2751 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13354(__this, p0, p1, method) (( void (*) (t2751 *, t9 *, t58, MethodInfo*))m13354_gshared)(__this, p0, p1, method)
extern "C" t2740  m13356_gshared (t2751 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13356(__this, p0, p1, method) (( t2740  (*) (t2751 *, t9 *, t9 *, MethodInfo*))m13356_gshared)(__this, p0, p1, method)
extern "C" t9 * m13358_gshared (t2751 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m13358(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2751 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m13358_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2740  m13360_gshared (t2751 * __this, t9 * p0, MethodInfo* method);
#define m13360(__this, p0, method) (( t2740  (*) (t2751 *, t9 *, MethodInfo*))m13360_gshared)(__this, p0, method)
