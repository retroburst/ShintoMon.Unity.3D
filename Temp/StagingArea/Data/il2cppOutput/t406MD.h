#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t406;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t164.h"

extern "C" void m2559_gshared (t406 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2559(__this, p0, p1, method) (( void (*) (t406 *, t9 *, t58, MethodInfo*))m2559_gshared)(__this, p0, p1, method)
extern "C" int32_t m17395_gshared (t406 * __this, t164  p0, t164  p1, MethodInfo* method);
#define m17395(__this, p0, p1, method) (( int32_t (*) (t406 *, t164 , t164 , MethodInfo*))m17395_gshared)(__this, p0, p1, method)
extern "C" t9 * m17396_gshared (t406 * __this, t164  p0, t164  p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m17396(__this, p0, p1, p2, p3, method) (( t9 * (*) (t406 *, t164 , t164 , t470 *, t9 *, MethodInfo*))m17396_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m17397_gshared (t406 * __this, t9 * p0, MethodInfo* method);
#define m17397(__this, p0, method) (( int32_t (*) (t406 *, t9 *, MethodInfo*))m17397_gshared)(__this, p0, method)
