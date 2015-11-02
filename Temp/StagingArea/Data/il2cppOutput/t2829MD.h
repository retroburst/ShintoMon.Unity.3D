#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2829;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t2815.h"

extern "C" void m14039_gshared (t2829 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14039(__this, p0, p1, method) (( void (*) (t2829 *, t9 *, t58, MethodInfo*))m14039_gshared)(__this, p0, p1, method)
extern "C" t2815  m14041_gshared (t2829 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m14041(__this, p0, p1, method) (( t2815  (*) (t2829 *, t9 *, uint8_t, MethodInfo*))m14041_gshared)(__this, p0, p1, method)
extern "C" t9 * m14043_gshared (t2829 * __this, t9 * p0, uint8_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m14043(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2829 *, t9 *, uint8_t, t477 *, t9 *, MethodInfo*))m14043_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2815  m14045_gshared (t2829 * __this, t9 * p0, MethodInfo* method);
#define m14045(__this, p0, method) (( t2815  (*) (t2829 *, t9 *, MethodInfo*))m14045_gshared)(__this, p0, method)
