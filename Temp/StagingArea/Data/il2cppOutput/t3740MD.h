#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3740;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3728.h"

extern "C" void m23425_gshared (t3740 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23425(__this, p0, p1, method) (( void (*) (t3740 *, t9 *, t58, MethodInfo*))m23425_gshared)(__this, p0, p1, method)
extern "C" t3728  m23427_gshared (t3740 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m23427(__this, p0, p1, method) (( t3728  (*) (t3740 *, t9 *, int32_t, MethodInfo*))m23427_gshared)(__this, p0, p1, method)
extern "C" t9 * m23429_gshared (t3740 * __this, t9 * p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m23429(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3740 *, t9 *, int32_t, t463 *, t9 *, MethodInfo*))m23429_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3728  m23431_gshared (t3740 * __this, t9 * p0, MethodInfo* method);
#define m23431(__this, p0, method) (( t3728  (*) (t3740 *, t9 *, MethodInfo*))m23431_gshared)(__this, p0, method)
