#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3520;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t1170.h"

extern "C" void m21409_gshared (t3520 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21409(__this, p0, p1, method) (( void (*) (t3520 *, t9 *, t58, MethodInfo*))m21409_gshared)(__this, p0, p1, method)
extern "C" t1170  m21410_gshared (t3520 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21410(__this, p0, p1, method) (( t1170  (*) (t3520 *, t9 *, int64_t, MethodInfo*))m21410_gshared)(__this, p0, p1, method)
extern "C" t9 * m21411_gshared (t3520 * __this, t9 * p0, int64_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m21411(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3520 *, t9 *, int64_t, t477 *, t9 *, MethodInfo*))m21411_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1170  m21412_gshared (t3520 * __this, t9 * p0, MethodInfo* method);
#define m21412(__this, p0, method) (( t1170  (*) (t3520 *, t9 *, MethodInfo*))m21412_gshared)(__this, p0, method)
