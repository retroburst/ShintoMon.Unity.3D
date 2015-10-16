#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3418;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3408.h"

extern "C" void m20223_gshared (t3418 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20223(__this, p0, p1, method) (( void (*) (t3418 *, t9 *, t58, MethodInfo*))m20223_gshared)(__this, p0, p1, method)
extern "C" t3408  m20225_gshared (t3418 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m20225(__this, p0, p1, method) (( t3408  (*) (t3418 *, t9 *, int32_t, MethodInfo*))m20225_gshared)(__this, p0, p1, method)
extern "C" t9 * m20227_gshared (t3418 * __this, t9 * p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m20227(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3418 *, t9 *, int32_t, t463 *, t9 *, MethodInfo*))m20227_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3408  m20229_gshared (t3418 * __this, t9 * p0, MethodInfo* method);
#define m20229(__this, p0, method) (( t3408  (*) (t3418 *, t9 *, MethodInfo*))m20229_gshared)(__this, p0, method)
