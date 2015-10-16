#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3136;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3127.h"

extern "C" void m17353_gshared (t3136 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17353(__this, p0, p1, method) (( void (*) (t3136 *, t9 *, t58, MethodInfo*))m17353_gshared)(__this, p0, p1, method)
extern "C" t3127  m17354_gshared (t3136 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17354(__this, p0, p1, method) (( t3127  (*) (t3136 *, t9 *, int32_t, MethodInfo*))m17354_gshared)(__this, p0, p1, method)
extern "C" t9 * m17355_gshared (t3136 * __this, t9 * p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m17355(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3136 *, t9 *, int32_t, t463 *, t9 *, MethodInfo*))m17355_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3127  m17356_gshared (t3136 * __this, t9 * p0, MethodInfo* method);
#define m17356(__this, p0, method) (( t3127  (*) (t3136 *, t9 *, MethodInfo*))m17356_gshared)(__this, p0, method)
