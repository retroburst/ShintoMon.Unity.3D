#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3844;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t1170.h"

extern "C" void m24341_gshared (t3844 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24341(__this, p0, p1, method) (( void (*) (t3844 *, t9 *, t58, MethodInfo*))m24341_gshared)(__this, p0, p1, method)
extern "C" t1170  m24342_gshared (t3844 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24342(__this, p0, p1, method) (( t1170  (*) (t3844 *, int32_t, int32_t, MethodInfo*))m24342_gshared)(__this, p0, p1, method)
extern "C" t9 * m24343_gshared (t3844 * __this, int32_t p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m24343(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3844 *, int32_t, int32_t, t477 *, t9 *, MethodInfo*))m24343_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1170  m24344_gshared (t3844 * __this, t9 * p0, MethodInfo* method);
#define m24344(__this, p0, method) (( t1170  (*) (t3844 *, t9 *, MethodInfo*))m24344_gshared)(__this, p0, method)
