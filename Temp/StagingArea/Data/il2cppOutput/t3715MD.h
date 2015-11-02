#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3715;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t922.h"

extern "C" void m23159_gshared (t3715 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23159(__this, p0, p1, method) (( void (*) (t3715 *, t9 *, t58, MethodInfo*))m23159_gshared)(__this, p0, p1, method)
extern "C" t9 * m23160_gshared (t3715 * __this, t9 * p0, t922  p1, MethodInfo* method);
#define m23160(__this, p0, p1, method) (( t9 * (*) (t3715 *, t9 *, t922 , MethodInfo*))m23160_gshared)(__this, p0, p1, method)
extern "C" t9 * m23161_gshared (t3715 * __this, t9 * p0, t922  p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m23161(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3715 *, t9 *, t922 , t477 *, t9 *, MethodInfo*))m23161_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m23162_gshared (t3715 * __this, t9 * p0, MethodInfo* method);
#define m23162(__this, p0, method) (( t9 * (*) (t3715 *, t9 *, MethodInfo*))m23162_gshared)(__this, p0, method)
