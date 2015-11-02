#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3171;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m17565_gshared (t3171 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17565(__this, p0, p1, method) (( void (*) (t3171 *, t9 *, t58, MethodInfo*))m17565_gshared)(__this, p0, p1, method)
extern "C" t9 * m17566_gshared (t3171 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17566(__this, p0, p1, method) (( t9 * (*) (t3171 *, t9 *, int32_t, MethodInfo*))m17566_gshared)(__this, p0, p1, method)
extern "C" t9 * m17567_gshared (t3171 * __this, t9 * p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m17567(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3171 *, t9 *, int32_t, t477 *, t9 *, MethodInfo*))m17567_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m17568_gshared (t3171 * __this, t9 * p0, MethodInfo* method);
#define m17568(__this, p0, method) (( t9 * (*) (t3171 *, t9 *, MethodInfo*))m17568_gshared)(__this, p0, method)
