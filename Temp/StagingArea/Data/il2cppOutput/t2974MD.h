#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2974;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t1164.h"

extern "C" void m15618_gshared (t2974 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15618(__this, p0, p1, method) (( void (*) (t2974 *, t9 *, t58, MethodInfo*))m15618_gshared)(__this, p0, p1, method)
extern "C" t1164  m15619_gshared (t2974 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15619(__this, p0, p1, method) (( t1164  (*) (t2974 *, int32_t, t9 *, MethodInfo*))m15619_gshared)(__this, p0, p1, method)
extern "C" t9 * m15620_gshared (t2974 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m15620(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2974 *, int32_t, t9 *, t470 *, t9 *, MethodInfo*))m15620_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1164  m15621_gshared (t2974 * __this, t9 * p0, MethodInfo* method);
#define m15621(__this, p0, method) (( t1164  (*) (t2974 *, t9 *, MethodInfo*))m15621_gshared)(__this, p0, method)
