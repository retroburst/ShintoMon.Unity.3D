#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2988;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m15649_gshared (t2988 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15649(__this, p0, p1, method) (( void (*) (t2988 *, t9 *, t58, MethodInfo*))m15649_gshared)(__this, p0, p1, method)
extern "C" t9 * m15650_gshared (t2988 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15650(__this, p0, p1, method) (( t9 * (*) (t2988 *, int32_t, t9 *, MethodInfo*))m15650_gshared)(__this, p0, p1, method)
extern "C" t9 * m15651_gshared (t2988 * __this, int32_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m15651(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2988 *, int32_t, t9 *, t477 *, t9 *, MethodInfo*))m15651_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m15652_gshared (t2988 * __this, t9 * p0, MethodInfo* method);
#define m15652(__this, p0, method) (( t9 * (*) (t2988 *, t9 *, MethodInfo*))m15652_gshared)(__this, p0, method)
