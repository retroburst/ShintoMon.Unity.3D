#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2774;
struct t9;
struct t121;

extern "C" void m13579_gshared (t2774 * __this, t121 * p0, MethodInfo* method);
#define m13579(__this, p0, method) (( void (*) (t2774 *, t121 *, MethodInfo*))m13579_gshared)(__this, p0, method)
extern "C" t9 * m13581_gshared (t2774 * __this, MethodInfo* method);
#define m13581(__this, method) (( t9 * (*) (t2774 *, MethodInfo*))m13581_gshared)(__this, method)
extern "C" void m13583_gshared (t2774 * __this, MethodInfo* method);
#define m13583(__this, method) (( void (*) (t2774 *, MethodInfo*))m13583_gshared)(__this, method)
extern "C" bool m13585_gshared (t2774 * __this, MethodInfo* method);
#define m13585(__this, method) (( bool (*) (t2774 *, MethodInfo*))m13585_gshared)(__this, method)
extern "C" uint16_t m13587_gshared (t2774 * __this, MethodInfo* method);
#define m13587(__this, method) (( uint16_t (*) (t2774 *, MethodInfo*))m13587_gshared)(__this, method)
