#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2745;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t2734.h"

extern "C" void m13263_gshared (t2745 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13263(__this, p0, p1, method) (( void (*) (t2745 *, t9 *, t58, MethodInfo*))m13263_gshared)(__this, p0, p1, method)
extern "C" t2734  m13265_gshared (t2745 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13265(__this, p0, p1, method) (( t2734  (*) (t2745 *, t9 *, t9 *, MethodInfo*))m13265_gshared)(__this, p0, p1, method)
extern "C" t9 * m13267_gshared (t2745 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m13267(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2745 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m13267_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2734  m13269_gshared (t2745 * __this, t9 * p0, MethodInfo* method);
#define m13269(__this, p0, method) (( t2734  (*) (t2745 *, t9 *, MethodInfo*))m13269_gshared)(__this, p0, method)
