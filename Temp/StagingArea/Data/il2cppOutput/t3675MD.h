#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3675;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3631.h"

extern "C" void m22720_gshared (t3675 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22720(__this, p0, p1, method) (( void (*) (t3675 *, t9 *, t58, MethodInfo*))m22720_gshared)(__this, p0, p1, method)
extern "C" t3631  m22722_gshared (t3675 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22722(__this, p0, p1, method) (( t3631  (*) (t3675 *, t9 *, t9 *, MethodInfo*))m22722_gshared)(__this, p0, p1, method)
extern "C" t9 * m22724_gshared (t3675 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m22724(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3675 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m22724_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3631  m22726_gshared (t3675 * __this, t9 * p0, MethodInfo* method);
#define m22726(__this, p0, method) (( t3631  (*) (t3675 *, t9 *, MethodInfo*))m22726_gshared)(__this, p0, method)
