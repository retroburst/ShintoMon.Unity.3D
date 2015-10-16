#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3654;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3600.h"

extern "C" void m22647_gshared (t3654 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22647(__this, p0, p1, method) (( void (*) (t3654 *, t9 *, t58, MethodInfo*))m22647_gshared)(__this, p0, p1, method)
extern "C" t3600  m22649_gshared (t3654 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22649(__this, p0, p1, method) (( t3600  (*) (t3654 *, t9 *, t9 *, MethodInfo*))m22649_gshared)(__this, p0, p1, method)
extern "C" t9 * m22651_gshared (t3654 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m22651(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3654 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m22651_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3600  m22653_gshared (t3654 * __this, t9 * p0, MethodInfo* method);
#define m22653(__this, p0, method) (( t3600  (*) (t3654 *, t9 *, MethodInfo*))m22653_gshared)(__this, p0, method)
