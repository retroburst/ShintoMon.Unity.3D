#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3801;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3791.h"

extern "C" void m23960_gshared (t3801 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23960(__this, p0, p1, method) (( void (*) (t3801 *, t9 *, t58, MethodInfo*))m23960_gshared)(__this, p0, p1, method)
extern "C" t3791  m23962_gshared (t3801 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m23962(__this, p0, p1, method) (( t3791  (*) (t3801 *, t9 *, uint8_t, MethodInfo*))m23962_gshared)(__this, p0, p1, method)
extern "C" t9 * m23964_gshared (t3801 * __this, t9 * p0, uint8_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m23964(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3801 *, t9 *, uint8_t, t463 *, t9 *, MethodInfo*))m23964_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3791  m23966_gshared (t3801 * __this, t9 * p0, MethodInfo* method);
#define m23966(__this, p0, method) (( t3791  (*) (t3801 *, t9 *, MethodInfo*))m23966_gshared)(__this, p0, method)
