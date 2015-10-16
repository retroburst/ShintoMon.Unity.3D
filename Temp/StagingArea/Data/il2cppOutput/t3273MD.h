#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3273;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t28.h"

extern "C" void m18765_gshared (t3273 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18765(__this, p0, p1, method) (( void (*) (t3273 *, t9 *, t58, MethodInfo*))m18765_gshared)(__this, p0, p1, method)
extern "C" void m18766_gshared (t3273 * __this, t28  p0, MethodInfo* method);
#define m18766(__this, p0, method) (( void (*) (t3273 *, t28 , MethodInfo*))m18766_gshared)(__this, p0, method)
extern "C" t9 * m18767_gshared (t3273 * __this, t28  p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m18767(__this, p0, p1, p2, method) (( t9 * (*) (t3273 *, t28 , t463 *, t9 *, MethodInfo*))m18767_gshared)(__this, p0, p1, p2, method)
extern "C" void m18768_gshared (t3273 * __this, t9 * p0, MethodInfo* method);
#define m18768(__this, p0, method) (( void (*) (t3273 *, t9 *, MethodInfo*))m18768_gshared)(__this, p0, method)
