#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3668;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t912.h"

extern "C" void m22780_gshared (t3668 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22780(__this, p0, p1, method) (( void (*) (t3668 *, t9 *, t58, MethodInfo*))m22780_gshared)(__this, p0, p1, method)
extern "C" t912  m22782_gshared (t3668 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22782(__this, p0, p1, method) (( t912  (*) (t3668 *, t9 *, t9 *, MethodInfo*))m22782_gshared)(__this, p0, p1, method)
extern "C" t9 * m22784_gshared (t3668 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m22784(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3668 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m22784_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t912  m22786_gshared (t3668 * __this, t9 * p0, MethodInfo* method);
#define m22786(__this, p0, method) (( t912  (*) (t3668 *, t9 *, MethodInfo*))m22786_gshared)(__this, p0, method)
