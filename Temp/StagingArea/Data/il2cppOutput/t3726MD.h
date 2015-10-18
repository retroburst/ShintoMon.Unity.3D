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

extern "C" void m23237_gshared (t3726 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23237(__this, p0, p1, method) (( void (*) (t3726 *, t9 *, t58, MethodInfo*))m23237_gshared)(__this, p0, p1, method)
extern "C" t3635  m23239_gshared (t3726 * __this, t9 * p0, t916  p1, MethodInfo* method);
#define m23239(__this, p0, p1, method) (( t3635  (*) (t3726 *, t9 *, t916 , MethodInfo*))m23239_gshared)(__this, p0, p1, method)
extern "C" t9 * m23241_gshared (t3726 * __this, t9 * p0, t916  p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m23241(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3726 *, t9 *, t916 , t470 *, t9 *, MethodInfo*))m23241_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3635  m23243_gshared (t3726 * __this, t9 * p0, MethodInfo* method);
#define m23243(__this, p0, method) (( t3635  (*) (t3726 *, t9 *, MethodInfo*))m23243_gshared)(__this, p0, method)
