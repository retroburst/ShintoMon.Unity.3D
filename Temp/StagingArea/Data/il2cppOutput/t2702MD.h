#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2702;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t1170.h"

extern "C" void m13127_gshared (t2702 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13127(__this, p0, p1, method) (( void (*) (t2702 *, t9 *, t58, MethodInfo*))m13127_gshared)(__this, p0, p1, method)
extern "C" t1170  m13128_gshared (t2702 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13128(__this, p0, p1, method) (( t1170  (*) (t2702 *, t9 *, t9 *, MethodInfo*))m13128_gshared)(__this, p0, p1, method)
extern "C" t9 * m13129_gshared (t2702 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m13129(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2702 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m13129_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1170  m13130_gshared (t2702 * __this, t9 * p0, MethodInfo* method);
#define m13130(__this, p0, method) (( t1170  (*) (t2702 *, t9 *, MethodInfo*))m13130_gshared)(__this, p0, method)
