#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3457;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3447.h"

extern "C" void m20466_gshared (t3457 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20466(__this, p0, p1, method) (( void (*) (t3457 *, t9 *, t58, MethodInfo*))m20466_gshared)(__this, p0, p1, method)
extern "C" t3447  m20468_gshared (t3457 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m20468(__this, p0, p1, method) (( t3447  (*) (t3457 *, t9 *, int32_t, MethodInfo*))m20468_gshared)(__this, p0, p1, method)
extern "C" t9 * m20470_gshared (t3457 * __this, t9 * p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m20470(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3457 *, t9 *, int32_t, t477 *, t9 *, MethodInfo*))m20470_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3447  m20472_gshared (t3457 * __this, t9 * p0, MethodInfo* method);
#define m20472(__this, p0, method) (( t3447  (*) (t3457 *, t9 *, MethodInfo*))m20472_gshared)(__this, p0, method)
