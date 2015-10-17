#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2919;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m14935_gshared (t2919 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14935(__this, p0, p1, method) (( void (*) (t2919 *, t9 *, t58, MethodInfo*))m14935_gshared)(__this, p0, p1, method)
extern "C" int32_t m14936_gshared (t2919 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14936(__this, p0, p1, method) (( int32_t (*) (t2919 *, uint16_t, uint16_t, MethodInfo*))m14936_gshared)(__this, p0, p1, method)
extern "C" t9 * m14937_gshared (t2919 * __this, uint16_t p0, uint16_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m14937(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2919 *, uint16_t, uint16_t, t470 *, t9 *, MethodInfo*))m14937_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m14938_gshared (t2919 * __this, t9 * p0, MethodInfo* method);
#define m14938(__this, p0, method) (( int32_t (*) (t2919 *, t9 *, MethodInfo*))m14938_gshared)(__this, p0, method)
