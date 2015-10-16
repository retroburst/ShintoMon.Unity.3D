#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3482;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t1155.h"

extern "C" void m21171_gshared (t3482 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21171(__this, p0, p1, method) (( void (*) (t3482 *, t9 *, t58, MethodInfo*))m21171_gshared)(__this, p0, p1, method)
extern "C" t1155  m21172_gshared (t3482 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21172(__this, p0, p1, method) (( t1155  (*) (t3482 *, t9 *, int64_t, MethodInfo*))m21172_gshared)(__this, p0, p1, method)
extern "C" t9 * m21173_gshared (t3482 * __this, t9 * p0, int64_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m21173(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3482 *, t9 *, int64_t, t463 *, t9 *, MethodInfo*))m21173_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1155  m21174_gshared (t3482 * __this, t9 * p0, MethodInfo* method);
#define m21174(__this, p0, method) (( t1155  (*) (t3482 *, t9 *, MethodInfo*))m21174_gshared)(__this, p0, method)
