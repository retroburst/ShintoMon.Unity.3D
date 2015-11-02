#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3174;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m17588_gshared (t3174 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17588(__this, p0, p1, method) (( void (*) (t3174 *, t9 *, t58, MethodInfo*))m17588_gshared)(__this, p0, p1, method)
extern "C" int32_t m17589_gshared (t3174 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17589(__this, p0, p1, method) (( int32_t (*) (t3174 *, t9 *, int32_t, MethodInfo*))m17589_gshared)(__this, p0, p1, method)
extern "C" t9 * m17590_gshared (t3174 * __this, t9 * p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m17590(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3174 *, t9 *, int32_t, t477 *, t9 *, MethodInfo*))m17590_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m17591_gshared (t3174 * __this, t9 * p0, MethodInfo* method);
#define m17591(__this, p0, method) (( int32_t (*) (t3174 *, t9 *, MethodInfo*))m17591_gshared)(__this, p0, method)
