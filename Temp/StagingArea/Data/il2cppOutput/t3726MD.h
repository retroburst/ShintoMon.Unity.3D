#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3726;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3635.h"
#include "t916.h"

extern "C" void m23236_gshared (t3726 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23236(__this, p0, p1, method) (( void (*) (t3726 *, t9 *, t58, MethodInfo*))m23236_gshared)(__this, p0, p1, method)
extern "C" t3635  m23238_gshared (t3726 * __this, t9 * p0, t916  p1, MethodInfo* method);
#define m23238(__this, p0, p1, method) (( t3635  (*) (t3726 *, t9 *, t916 , MethodInfo*))m23238_gshared)(__this, p0, p1, method)
extern "C" t9 * m23240_gshared (t3726 * __this, t9 * p0, t916  p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m23240(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3726 *, t9 *, t916 , t470 *, t9 *, MethodInfo*))m23240_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3635  m23242_gshared (t3726 * __this, t9 * p0, MethodInfo* method);
#define m23242(__this, p0, method) (( t3635  (*) (t3726 *, t9 *, MethodInfo*))m23242_gshared)(__this, p0, method)
