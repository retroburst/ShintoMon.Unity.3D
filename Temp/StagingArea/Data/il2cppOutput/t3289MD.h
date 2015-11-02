#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3289;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3279.h"

extern "C" void m18859_gshared (t3289 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18859(__this, p0, p1, method) (( void (*) (t3289 *, t9 *, t58, MethodInfo*))m18859_gshared)(__this, p0, p1, method)
extern "C" t3279  m18861_gshared (t3289 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m18861(__this, p0, p1, method) (( t3279  (*) (t3289 *, t9 *, int32_t, MethodInfo*))m18861_gshared)(__this, p0, p1, method)
extern "C" t9 * m18863_gshared (t3289 * __this, t9 * p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m18863(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3289 *, t9 *, int32_t, t477 *, t9 *, MethodInfo*))m18863_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3279  m18865_gshared (t3289 * __this, t9 * p0, MethodInfo* method);
#define m18865(__this, p0, method) (( t3279  (*) (t3289 *, t9 *, MethodInfo*))m18865_gshared)(__this, p0, method)
