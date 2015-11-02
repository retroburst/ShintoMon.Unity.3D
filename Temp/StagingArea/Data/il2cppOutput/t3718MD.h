#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3718;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t922.h"

extern "C" void m23182_gshared (t3718 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23182(__this, p0, p1, method) (( void (*) (t3718 *, t9 *, t58, MethodInfo*))m23182_gshared)(__this, p0, p1, method)
extern "C" t922  m23183_gshared (t3718 * __this, t9 * p0, t922  p1, MethodInfo* method);
#define m23183(__this, p0, p1, method) (( t922  (*) (t3718 *, t9 *, t922 , MethodInfo*))m23183_gshared)(__this, p0, p1, method)
extern "C" t9 * m23184_gshared (t3718 * __this, t9 * p0, t922  p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m23184(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3718 *, t9 *, t922 , t477 *, t9 *, MethodInfo*))m23184_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t922  m23185_gshared (t3718 * __this, t9 * p0, MethodInfo* method);
#define m23185(__this, p0, method) (( t922  (*) (t3718 *, t9 *, MethodInfo*))m23185_gshared)(__this, p0, method)
