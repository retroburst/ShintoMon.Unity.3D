#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2992;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t2979.h"

extern "C" void m15695_gshared (t2992 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15695(__this, p0, p1, method) (( void (*) (t2992 *, t9 *, t58, MethodInfo*))m15695_gshared)(__this, p0, p1, method)
extern "C" t2979  m15697_gshared (t2992 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15697(__this, p0, p1, method) (( t2979  (*) (t2992 *, int32_t, t9 *, MethodInfo*))m15697_gshared)(__this, p0, p1, method)
extern "C" t9 * m15699_gshared (t2992 * __this, int32_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m15699(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2992 *, int32_t, t9 *, t463 *, t9 *, MethodInfo*))m15699_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2979  m15701_gshared (t2992 * __this, t9 * p0, MethodInfo* method);
#define m15701(__this, p0, method) (( t2979  (*) (t2992 *, t9 *, MethodInfo*))m15701_gshared)(__this, p0, method)
