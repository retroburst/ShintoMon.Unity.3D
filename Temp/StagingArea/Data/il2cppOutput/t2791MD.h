#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2791;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t1164.h"

extern "C" void m13881_gshared (t2791 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13881(__this, p0, p1, method) (( void (*) (t2791 *, t9 *, t58, MethodInfo*))m13881_gshared)(__this, p0, p1, method)
extern "C" t1164  m13882_gshared (t2791 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13882(__this, p0, p1, method) (( t1164  (*) (t2791 *, t9 *, uint8_t, MethodInfo*))m13882_gshared)(__this, p0, p1, method)
extern "C" t9 * m13883_gshared (t2791 * __this, t9 * p0, uint8_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m13883(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2791 *, t9 *, uint8_t, t470 *, t9 *, MethodInfo*))m13883_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1164  m13884_gshared (t2791 * __this, t9 * p0, MethodInfo* method);
#define m13884(__this, p0, method) (( t1164  (*) (t2791 *, t9 *, MethodInfo*))m13884_gshared)(__this, p0, method)
