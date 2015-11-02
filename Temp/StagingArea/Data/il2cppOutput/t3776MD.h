#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3776;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3764.h"

extern "C" void m23653_gshared (t3776 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23653(__this, p0, p1, method) (( void (*) (t3776 *, t9 *, t58, MethodInfo*))m23653_gshared)(__this, p0, p1, method)
extern "C" t3764  m23655_gshared (t3776 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m23655(__this, p0, p1, method) (( t3764  (*) (t3776 *, t9 *, int32_t, MethodInfo*))m23655_gshared)(__this, p0, p1, method)
extern "C" t9 * m23657_gshared (t3776 * __this, t9 * p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m23657(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3776 *, t9 *, int32_t, t477 *, t9 *, MethodInfo*))m23657_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3764  m23659_gshared (t3776 * __this, t9 * p0, MethodInfo* method);
#define m23659(__this, p0, method) (( t3764  (*) (t3776 *, t9 *, MethodInfo*))m23659_gshared)(__this, p0, method)
