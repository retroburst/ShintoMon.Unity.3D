#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3710;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t916.h"

extern "C" void m23125_gshared (t3710 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23125(__this, p0, p1, method) (( void (*) (t3710 *, t9 *, t58, MethodInfo*))m23125_gshared)(__this, p0, p1, method)
extern "C" t9 * m23126_gshared (t3710 * __this, t9 * p0, t916  p1, MethodInfo* method);
#define m23126(__this, p0, p1, method) (( t9 * (*) (t3710 *, t9 *, t916 , MethodInfo*))m23126_gshared)(__this, p0, p1, method)
extern "C" t9 * m23127_gshared (t3710 * __this, t9 * p0, t916  p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m23127(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3710 *, t9 *, t916 , t470 *, t9 *, MethodInfo*))m23127_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m23128_gshared (t3710 * __this, t9 * p0, MethodInfo* method);
#define m23128(__this, p0, method) (( t9 * (*) (t3710 *, t9 *, MethodInfo*))m23128_gshared)(__this, p0, method)
