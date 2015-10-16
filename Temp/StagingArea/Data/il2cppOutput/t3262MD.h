#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3262;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3237.h"

extern "C" void m18702_gshared (t3262 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18702(__this, p0, p1, method) (( void (*) (t3262 *, t9 *, t58, MethodInfo*))m18702_gshared)(__this, p0, p1, method)
extern "C" t3237  m18704_gshared (t3262 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18704(__this, p0, p1, method) (( t3237  (*) (t3262 *, t9 *, t9 *, MethodInfo*))m18704_gshared)(__this, p0, p1, method)
extern "C" t9 * m18706_gshared (t3262 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m18706(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3262 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m18706_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3237  m18708_gshared (t3262 * __this, t9 * p0, MethodInfo* method);
#define m18708(__this, p0, method) (( t3237  (*) (t3262 *, t9 *, MethodInfo*))m18708_gshared)(__this, p0, method)
