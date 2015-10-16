#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2782;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t1155.h"

extern "C" void m13852_gshared (t2782 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13852(__this, p0, p1, method) (( void (*) (t2782 *, t9 *, t58, MethodInfo*))m13852_gshared)(__this, p0, p1, method)
extern "C" t1155  m13853_gshared (t2782 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13853(__this, p0, p1, method) (( t1155  (*) (t2782 *, t9 *, uint8_t, MethodInfo*))m13853_gshared)(__this, p0, p1, method)
extern "C" t9 * m13854_gshared (t2782 * __this, t9 * p0, uint8_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m13854(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2782 *, t9 *, uint8_t, t463 *, t9 *, MethodInfo*))m13854_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1155  m13855_gshared (t2782 * __this, t9 * p0, MethodInfo* method);
#define m13855(__this, p0, method) (( t1155  (*) (t2782 *, t9 *, MethodInfo*))m13855_gshared)(__this, p0, method)
