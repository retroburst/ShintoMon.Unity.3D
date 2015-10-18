#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3848;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3840.h"

extern "C" void m24311_gshared (t3848 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24311(__this, p0, p1, method) (( void (*) (t3848 *, t9 *, t58, MethodInfo*))m24311_gshared)(__this, p0, p1, method)
extern "C" t3840  m24312_gshared (t3848 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24312(__this, p0, p1, method) (( t3840  (*) (t3848 *, int32_t, int32_t, MethodInfo*))m24312_gshared)(__this, p0, p1, method)
extern "C" t9 * m24313_gshared (t3848 * __this, int32_t p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m24313(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3848 *, int32_t, int32_t, t470 *, t9 *, MethodInfo*))m24313_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3840  m24314_gshared (t3848 * __this, t9 * p0, MethodInfo* method);
#define m24314(__this, p0, method) (( t3840  (*) (t3848 *, t9 *, MethodInfo*))m24314_gshared)(__this, p0, method)
