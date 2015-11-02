#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2808;
struct t9;
struct t2796;

extern "C" void m13911_gshared (t2808 * __this, t2796 * p0, MethodInfo* method);
#define m13911(__this, p0, method) (( void (*) (t2808 *, t2796 *, MethodInfo*))m13911_gshared)(__this, p0, method)
extern "C" t9 * m13912_gshared (t2808 * __this, MethodInfo* method);
#define m13912(__this, method) (( t9 * (*) (t2808 *, MethodInfo*))m13912_gshared)(__this, method)
extern "C" void m13913_gshared (t2808 * __this, MethodInfo* method);
#define m13913(__this, method) (( void (*) (t2808 *, MethodInfo*))m13913_gshared)(__this, method)
extern "C" bool m13914_gshared (t2808 * __this, MethodInfo* method);
#define m13914(__this, method) (( bool (*) (t2808 *, MethodInfo*))m13914_gshared)(__this, method)
extern "C" uint8_t m13915_gshared (t2808 * __this, MethodInfo* method);
#define m13915(__this, method) (( uint8_t (*) (t2808 *, MethodInfo*))m13915_gshared)(__this, method)
