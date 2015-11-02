#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3175;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3166.h"

extern "C" void m17596_gshared (t3175 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17596(__this, p0, p1, method) (( void (*) (t3175 *, t9 *, t58, MethodInfo*))m17596_gshared)(__this, p0, p1, method)
extern "C" t3166  m17597_gshared (t3175 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17597(__this, p0, p1, method) (( t3166  (*) (t3175 *, t9 *, int32_t, MethodInfo*))m17597_gshared)(__this, p0, p1, method)
extern "C" t9 * m17598_gshared (t3175 * __this, t9 * p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m17598(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3175 *, t9 *, int32_t, t477 *, t9 *, MethodInfo*))m17598_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3166  m17599_gshared (t3175 * __this, t9 * p0, MethodInfo* method);
#define m17599(__this, p0, method) (( t3166  (*) (t3175 *, t9 *, MethodInfo*))m17599_gshared)(__this, p0, method)
