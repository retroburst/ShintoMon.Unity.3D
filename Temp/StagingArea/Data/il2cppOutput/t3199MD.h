#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3199;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3189.h"

extern "C" void m17877_gshared (t3199 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17877(__this, p0, p1, method) (( void (*) (t3199 *, t9 *, t58, MethodInfo*))m17877_gshared)(__this, p0, p1, method)
extern "C" t3189  m17879_gshared (t3199 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17879(__this, p0, p1, method) (( t3189  (*) (t3199 *, t9 *, int32_t, MethodInfo*))m17879_gshared)(__this, p0, p1, method)
extern "C" t9 * m17881_gshared (t3199 * __this, t9 * p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m17881(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3199 *, t9 *, int32_t, t477 *, t9 *, MethodInfo*))m17881_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3189  m17883_gshared (t3199 * __this, t9 * p0, MethodInfo* method);
#define m17883(__this, p0, method) (( t3189  (*) (t3199 *, t9 *, MethodInfo*))m17883_gshared)(__this, p0, method)
