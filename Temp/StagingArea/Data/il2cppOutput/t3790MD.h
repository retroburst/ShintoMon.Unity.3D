#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3790;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m23711_gshared (t3790 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23711(__this, p0, p1, method) (( void (*) (t3790 *, t9 *, t58, MethodInfo*))m23711_gshared)(__this, p0, p1, method)
extern "C" void m23712_gshared (t3790 * __this, int32_t p0, MethodInfo* method);
#define m23712(__this, p0, method) (( void (*) (t3790 *, int32_t, MethodInfo*))m23712_gshared)(__this, p0, method)
extern "C" t9 * m23713_gshared (t3790 * __this, int32_t p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m23713(__this, p0, p1, p2, method) (( t9 * (*) (t3790 *, int32_t, t477 *, t9 *, MethodInfo*))m23713_gshared)(__this, p0, p1, p2, method)
extern "C" void m23714_gshared (t3790 * __this, t9 * p0, MethodInfo* method);
#define m23714(__this, p0, method) (( void (*) (t3790 *, t9 *, MethodInfo*))m23714_gshared)(__this, p0, method)
