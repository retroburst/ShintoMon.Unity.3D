#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2962;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t2951.h"

extern "C" void m15415_gshared (t2962 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15415(__this, p0, p1, method) (( void (*) (t2962 *, t9 *, t58, MethodInfo*))m15415_gshared)(__this, p0, p1, method)
extern "C" t2951  m15417_gshared (t2962 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m15417(__this, p0, p1, method) (( t2951  (*) (t2962 *, t9 *, t9 *, MethodInfo*))m15417_gshared)(__this, p0, p1, method)
extern "C" t9 * m15419_gshared (t2962 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m15419(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2962 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m15419_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2951  m15421_gshared (t2962 * __this, t9 * p0, MethodInfo* method);
#define m15421(__this, p0, method) (( t2951  (*) (t2962 *, t9 *, MethodInfo*))m15421_gshared)(__this, p0, method)
