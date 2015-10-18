#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2800;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m13854_gshared (t2800 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13854(__this, p0, p1, method) (( void (*) (t2800 *, t9 *, t58, MethodInfo*))m13854_gshared)(__this, p0, p1, method)
extern "C" t9 * m13855_gshared (t2800 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13855(__this, p0, p1, method) (( t9 * (*) (t2800 *, t9 *, uint8_t, MethodInfo*))m13855_gshared)(__this, p0, p1, method)
extern "C" t9 * m13856_gshared (t2800 * __this, t9 * p0, uint8_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m13856(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2800 *, t9 *, uint8_t, t470 *, t9 *, MethodInfo*))m13856_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m13857_gshared (t2800 * __this, t9 * p0, MethodInfo* method);
#define m13857(__this, p0, method) (( t9 * (*) (t2800 *, t9 *, MethodInfo*))m13857_gshared)(__this, p0, method)
