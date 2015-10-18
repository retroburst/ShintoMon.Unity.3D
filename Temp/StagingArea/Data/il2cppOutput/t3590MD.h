#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3590;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m21976_gshared (t3590 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21976(__this, p0, p1, method) (( void (*) (t3590 *, t9 *, t58, MethodInfo*))m21976_gshared)(__this, p0, p1, method)
extern "C" t9 * m21977_gshared (t3590 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21977(__this, p0, p1, method) (( t9 * (*) (t3590 *, uint64_t, t9 *, MethodInfo*))m21977_gshared)(__this, p0, p1, method)
extern "C" t9 * m21978_gshared (t3590 * __this, uint64_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m21978(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3590 *, uint64_t, t9 *, t470 *, t9 *, MethodInfo*))m21978_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m21979_gshared (t3590 * __this, t9 * p0, MethodInfo* method);
#define m21979(__this, p0, method) (( t9 * (*) (t3590 *, t9 *, MethodInfo*))m21979_gshared)(__this, p0, method)
