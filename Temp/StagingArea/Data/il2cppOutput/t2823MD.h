#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2823;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t2809.h"

extern "C" void m14000_gshared (t2823 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14000(__this, p0, p1, method) (( void (*) (t2823 *, t9 *, t58, MethodInfo*))m14000_gshared)(__this, p0, p1, method)
extern "C" t2809  m14002_gshared (t2823 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m14002(__this, p0, p1, method) (( t2809  (*) (t2823 *, t9 *, uint8_t, MethodInfo*))m14002_gshared)(__this, p0, p1, method)
extern "C" t9 * m14004_gshared (t2823 * __this, t9 * p0, uint8_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m14004(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2823 *, t9 *, uint8_t, t470 *, t9 *, MethodInfo*))m14004_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2809  m14006_gshared (t2823 * __this, t9 * p0, MethodInfo* method);
#define m14006(__this, p0, method) (( t2809  (*) (t2823 *, t9 *, MethodInfo*))m14006_gshared)(__this, p0, method)
