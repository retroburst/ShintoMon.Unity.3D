#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3004;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t2989.h"

extern "C" void m15744_gshared (t3004 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15744(__this, p0, p1, method) (( void (*) (t3004 *, t9 *, t58, MethodInfo*))m15744_gshared)(__this, p0, p1, method)
extern "C" t2989  m15746_gshared (t3004 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15746(__this, p0, p1, method) (( t2989  (*) (t3004 *, int32_t, t9 *, MethodInfo*))m15746_gshared)(__this, p0, p1, method)
extern "C" t9 * m15748_gshared (t3004 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m15748(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3004 *, int32_t, t9 *, t470 *, t9 *, MethodInfo*))m15748_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2989  m15750_gshared (t3004 * __this, t9 * p0, MethodInfo* method);
#define m15750(__this, p0, method) (( t2989  (*) (t3004 *, t9 *, MethodInfo*))m15750_gshared)(__this, p0, method)
