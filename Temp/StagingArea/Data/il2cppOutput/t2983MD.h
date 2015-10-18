#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2983;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m15615_gshared (t2983 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15615(__this, p0, p1, method) (( void (*) (t2983 *, t9 *, t58, MethodInfo*))m15615_gshared)(__this, p0, p1, method)
extern "C" t9 * m15616_gshared (t2983 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15616(__this, p0, p1, method) (( t9 * (*) (t2983 *, int32_t, t9 *, MethodInfo*))m15616_gshared)(__this, p0, p1, method)
extern "C" t9 * m15617_gshared (t2983 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m15617(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2983 *, int32_t, t9 *, t470 *, t9 *, MethodInfo*))m15617_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m15618_gshared (t2983 * __this, t9 * p0, MethodInfo* method);
#define m15618(__this, p0, method) (( t9 * (*) (t2983 *, t9 *, MethodInfo*))m15618_gshared)(__this, p0, method)
