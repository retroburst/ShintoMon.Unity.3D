#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2920;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m14956_gshared (t2920 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14956(__this, p0, p1, method) (( void (*) (t2920 *, t9 *, t58, MethodInfo*))m14956_gshared)(__this, p0, p1, method)
extern "C" bool m14957_gshared (t2920 * __this, uint16_t p0, MethodInfo* method);
#define m14957(__this, p0, method) (( bool (*) (t2920 *, uint16_t, MethodInfo*))m14957_gshared)(__this, p0, method)
extern "C" t9 * m14958_gshared (t2920 * __this, uint16_t p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m14958(__this, p0, p1, p2, method) (( t9 * (*) (t2920 *, uint16_t, t477 *, t9 *, MethodInfo*))m14958_gshared)(__this, p0, p1, p2, method)
extern "C" bool m14959_gshared (t2920 * __this, t9 * p0, MethodInfo* method);
#define m14959(__this, p0, method) (( bool (*) (t2920 *, t9 *, MethodInfo*))m14959_gshared)(__this, p0, method)
