#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2915;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m14921_gshared (t2915 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14921(__this, p0, p1, method) (( void (*) (t2915 *, t9 *, t58, MethodInfo*))m14921_gshared)(__this, p0, p1, method)
extern "C" bool m14922_gshared (t2915 * __this, uint16_t p0, MethodInfo* method);
#define m14922(__this, p0, method) (( bool (*) (t2915 *, uint16_t, MethodInfo*))m14922_gshared)(__this, p0, method)
extern "C" t9 * m14923_gshared (t2915 * __this, uint16_t p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m14923(__this, p0, p1, p2, method) (( t9 * (*) (t2915 *, uint16_t, t470 *, t9 *, MethodInfo*))m14923_gshared)(__this, p0, p1, p2, method)
extern "C" bool m14924_gshared (t2915 * __this, t9 * p0, MethodInfo* method);
#define m14924(__this, p0, method) (( bool (*) (t2915 *, t9 *, MethodInfo*))m14924_gshared)(__this, p0, method)
