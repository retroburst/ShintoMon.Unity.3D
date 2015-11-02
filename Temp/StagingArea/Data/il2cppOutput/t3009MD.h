#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3009;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t2994.h"

extern "C" void m15778_gshared (t3009 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15778(__this, p0, p1, method) (( void (*) (t3009 *, t9 *, t58, MethodInfo*))m15778_gshared)(__this, p0, p1, method)
extern "C" t2994  m15780_gshared (t3009 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15780(__this, p0, p1, method) (( t2994  (*) (t3009 *, int32_t, t9 *, MethodInfo*))m15780_gshared)(__this, p0, p1, method)
extern "C" t9 * m15782_gshared (t3009 * __this, int32_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m15782(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3009 *, int32_t, t9 *, t477 *, t9 *, MethodInfo*))m15782_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2994  m15784_gshared (t3009 * __this, t9 * p0, MethodInfo* method);
#define m15784(__this, p0, method) (( t2994  (*) (t3009 *, t9 *, MethodInfo*))m15784_gshared)(__this, p0, method)
