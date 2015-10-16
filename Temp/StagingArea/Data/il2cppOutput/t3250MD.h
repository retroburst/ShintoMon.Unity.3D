#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3250;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3240.h"

extern "C" void m18616_gshared (t3250 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18616(__this, p0, p1, method) (( void (*) (t3250 *, t9 *, t58, MethodInfo*))m18616_gshared)(__this, p0, p1, method)
extern "C" t3240  m18618_gshared (t3250 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m18618(__this, p0, p1, method) (( t3240  (*) (t3250 *, t9 *, int32_t, MethodInfo*))m18618_gshared)(__this, p0, p1, method)
extern "C" t9 * m18620_gshared (t3250 * __this, t9 * p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m18620(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3250 *, t9 *, int32_t, t463 *, t9 *, MethodInfo*))m18620_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3240  m18622_gshared (t3250 * __this, t9 * p0, MethodInfo* method);
#define m18622(__this, p0, method) (( t3240  (*) (t3250 *, t9 *, MethodInfo*))m18622_gshared)(__this, p0, method)
