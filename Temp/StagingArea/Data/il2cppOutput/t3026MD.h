#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3026;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3014.h"

extern "C" void m15903_gshared (t3026 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15903(__this, p0, p1, method) (( void (*) (t3026 *, t9 *, t58, MethodInfo*))m15903_gshared)(__this, p0, p1, method)
extern "C" t3014  m15905_gshared (t3026 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15905(__this, p0, p1, method) (( t3014  (*) (t3026 *, int32_t, t9 *, MethodInfo*))m15905_gshared)(__this, p0, p1, method)
extern "C" t9 * m15907_gshared (t3026 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m15907(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3026 *, int32_t, t9 *, t470 *, t9 *, MethodInfo*))m15907_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3014  m15909_gshared (t3026 * __this, t9 * p0, MethodInfo* method);
#define m15909(__this, p0, method) (( t3014  (*) (t3026 *, t9 *, MethodInfo*))m15909_gshared)(__this, p0, method)
