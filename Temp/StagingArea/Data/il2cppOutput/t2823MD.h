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

extern "C" void m13999_gshared (t2823 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13999(__this, p0, p1, method) (( void (*) (t2823 *, t9 *, t58, MethodInfo*))m13999_gshared)(__this, p0, p1, method)
extern "C" t2809  m14001_gshared (t2823 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m14001(__this, p0, p1, method) (( t2809  (*) (t2823 *, t9 *, uint8_t, MethodInfo*))m14001_gshared)(__this, p0, p1, method)
extern "C" t9 * m14003_gshared (t2823 * __this, t9 * p0, uint8_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m14003(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2823 *, t9 *, uint8_t, t470 *, t9 *, MethodInfo*))m14003_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2809  m14005_gshared (t2823 * __this, t9 * p0, MethodInfo* method);
#define m14005(__this, p0, method) (( t2809  (*) (t2823 *, t9 *, MethodInfo*))m14005_gshared)(__this, p0, method)
