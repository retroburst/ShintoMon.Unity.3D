#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3771;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3759.h"

extern "C" void m23619_gshared (t3771 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23619(__this, p0, p1, method) (( void (*) (t3771 *, t9 *, t58, MethodInfo*))m23619_gshared)(__this, p0, p1, method)
extern "C" t3759  m23621_gshared (t3771 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m23621(__this, p0, p1, method) (( t3759  (*) (t3771 *, t9 *, int32_t, MethodInfo*))m23621_gshared)(__this, p0, p1, method)
extern "C" t9 * m23623_gshared (t3771 * __this, t9 * p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m23623(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3771 *, t9 *, int32_t, t470 *, t9 *, MethodInfo*))m23623_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3759  m23625_gshared (t3771 * __this, t9 * p0, MethodInfo* method);
#define m23625(__this, p0, method) (( t3759  (*) (t3771 *, t9 *, MethodInfo*))m23625_gshared)(__this, p0, method)
