#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3909;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m24608_gshared (t3909 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24608(__this, p0, p1, method) (( void (*) (t3909 *, t9 *, t58, MethodInfo*))m24608_gshared)(__this, p0, p1, method)
extern "C" t9 * m24609_gshared (t3909 * __this, MethodInfo* method);
#define m24609(__this, method) (( t9 * (*) (t3909 *, MethodInfo*))m24609_gshared)(__this, method)
extern "C" t9 * m24610_gshared (t3909 * __this, t470 * p0, t9 * p1, MethodInfo* method);
#define m24610(__this, p0, p1, method) (( t9 * (*) (t3909 *, t470 *, t9 *, MethodInfo*))m24610_gshared)(__this, p0, p1, method)
extern "C" t9 * m24611_gshared (t3909 * __this, t9 * p0, MethodInfo* method);
#define m24611(__this, p0, method) (( t9 * (*) (t3909 *, t9 *, MethodInfo*))m24611_gshared)(__this, p0, method)
