#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2780;
struct t9;
struct t121;

extern "C" void m13618_gshared (t2780 * __this, t121 * p0, MethodInfo* method);
#define m13618(__this, p0, method) (( void (*) (t2780 *, t121 *, MethodInfo*))m13618_gshared)(__this, p0, method)
extern "C" t9 * m13620_gshared (t2780 * __this, MethodInfo* method);
#define m13620(__this, method) (( t9 * (*) (t2780 *, MethodInfo*))m13620_gshared)(__this, method)
extern "C" void m13622_gshared (t2780 * __this, MethodInfo* method);
#define m13622(__this, method) (( void (*) (t2780 *, MethodInfo*))m13622_gshared)(__this, method)
extern "C" bool m13624_gshared (t2780 * __this, MethodInfo* method);
#define m13624(__this, method) (( bool (*) (t2780 *, MethodInfo*))m13624_gshared)(__this, method)
extern "C" uint16_t m13626_gshared (t2780 * __this, MethodInfo* method);
#define m13626(__this, method) (( uint16_t (*) (t2780 *, MethodInfo*))m13626_gshared)(__this, method)
