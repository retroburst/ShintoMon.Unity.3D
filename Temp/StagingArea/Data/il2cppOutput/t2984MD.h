#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2984;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t2975.h"

extern "C" void m15623_gshared (t2984 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15623(__this, p0, p1, method) (( void (*) (t2984 *, t9 *, t58, MethodInfo*))m15623_gshared)(__this, p0, p1, method)
extern "C" t2975  m15624_gshared (t2984 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15624(__this, p0, p1, method) (( t2975  (*) (t2984 *, int32_t, t9 *, MethodInfo*))m15624_gshared)(__this, p0, p1, method)
extern "C" t9 * m15625_gshared (t2984 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m15625(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2984 *, int32_t, t9 *, t470 *, t9 *, MethodInfo*))m15625_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2975  m15626_gshared (t2984 * __this, t9 * p0, MethodInfo* method);
#define m15626(__this, p0, method) (( t2975  (*) (t2984 *, t9 *, MethodInfo*))m15626_gshared)(__this, p0, method)
