#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3845;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m24284_gshared (t3845 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24284(__this, p0, p1, method) (( void (*) (t3845 *, t9 *, t58, MethodInfo*))m24284_gshared)(__this, p0, p1, method)
extern "C" int32_t m24285_gshared (t3845 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24285(__this, p0, p1, method) (( int32_t (*) (t3845 *, int32_t, int32_t, MethodInfo*))m24285_gshared)(__this, p0, p1, method)
extern "C" t9 * m24286_gshared (t3845 * __this, int32_t p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m24286(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3845 *, int32_t, int32_t, t470 *, t9 *, MethodInfo*))m24286_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m24287_gshared (t3845 * __this, t9 * p0, MethodInfo* method);
#define m24287(__this, p0, method) (( int32_t (*) (t3845 *, t9 *, MethodInfo*))m24287_gshared)(__this, p0, method)
