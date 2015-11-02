#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3658;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3628.h"

extern "C" void m22557_gshared (t3658 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22557(__this, p0, p1, method) (( void (*) (t3658 *, t9 *, t58, MethodInfo*))m22557_gshared)(__this, p0, p1, method)
extern "C" t3628  m22559_gshared (t3658 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22559(__this, p0, p1, method) (( t3628  (*) (t3658 *, t9 *, t9 *, MethodInfo*))m22559_gshared)(__this, p0, p1, method)
extern "C" t9 * m22561_gshared (t3658 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m22561(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3658 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m22561_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3628  m22563_gshared (t3658 * __this, t9 * p0, MethodInfo* method);
#define m22563(__this, p0, method) (( t3628  (*) (t3658 *, t9 *, MethodInfo*))m22563_gshared)(__this, p0, method)
