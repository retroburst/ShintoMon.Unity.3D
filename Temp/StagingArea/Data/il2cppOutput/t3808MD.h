#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3808;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t1155.h"

extern "C" void m24113_gshared (t3808 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24113(__this, p0, p1, method) (( void (*) (t3808 *, t9 *, t58, MethodInfo*))m24113_gshared)(__this, p0, p1, method)
extern "C" t1155  m24114_gshared (t3808 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24114(__this, p0, p1, method) (( t1155  (*) (t3808 *, int32_t, int32_t, MethodInfo*))m24114_gshared)(__this, p0, p1, method)
extern "C" t9 * m24115_gshared (t3808 * __this, int32_t p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m24115(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3808 *, int32_t, int32_t, t463 *, t9 *, MethodInfo*))m24115_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1155  m24116_gshared (t3808 * __this, t9 * p0, MethodInfo* method);
#define m24116(__this, p0, method) (( t1155  (*) (t3808 *, t9 *, MethodInfo*))m24116_gshared)(__this, p0, method)
