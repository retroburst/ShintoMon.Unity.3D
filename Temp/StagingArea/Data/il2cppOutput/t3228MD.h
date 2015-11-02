#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3228;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3205.h"

extern "C" void m18165_gshared (t3228 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18165(__this, p0, p1, method) (( void (*) (t3228 *, t9 *, t58, MethodInfo*))m18165_gshared)(__this, p0, p1, method)
extern "C" t3205  m18167_gshared (t3228 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18167(__this, p0, p1, method) (( t3205  (*) (t3228 *, t9 *, t9 *, MethodInfo*))m18167_gshared)(__this, p0, p1, method)
extern "C" t9 * m18169_gshared (t3228 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m18169(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3228 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m18169_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3205  m18171_gshared (t3228 * __this, t9 * p0, MethodInfo* method);
#define m18171(__this, p0, method) (( t3205  (*) (t3228 *, t9 *, MethodInfo*))m18171_gshared)(__this, p0, method)
