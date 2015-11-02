#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2989;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t2980.h"

extern "C" void m15657_gshared (t2989 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15657(__this, p0, p1, method) (( void (*) (t2989 *, t9 *, t58, MethodInfo*))m15657_gshared)(__this, p0, p1, method)
extern "C" t2980  m15658_gshared (t2989 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15658(__this, p0, p1, method) (( t2980  (*) (t2989 *, int32_t, t9 *, MethodInfo*))m15658_gshared)(__this, p0, p1, method)
extern "C" t9 * m15659_gshared (t2989 * __this, int32_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m15659(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2989 *, int32_t, t9 *, t477 *, t9 *, MethodInfo*))m15659_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2980  m15660_gshared (t2989 * __this, t9 * p0, MethodInfo* method);
#define m15660(__this, p0, method) (( t2980  (*) (t2989 *, t9 *, MethodInfo*))m15660_gshared)(__this, p0, method)
