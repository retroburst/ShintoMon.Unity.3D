#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2812;
struct t9;

extern "C" void m13934_gshared (t2812 * __this, MethodInfo* method);
#define m13934(__this, method) (( void (*) (t2812 *, MethodInfo*))m13934_gshared)(__this, method)
extern "C" void m13935_gshared (t9 * __this , MethodInfo* method);
#define m13935(__this , method) (( void (*) (t9 * , MethodInfo*))m13935_gshared)(__this , method)
extern "C" int32_t m13936_gshared (t2812 * __this, t9 * p0, MethodInfo* method);
#define m13936(__this, p0, method) (( int32_t (*) (t2812 *, t9 *, MethodInfo*))m13936_gshared)(__this, p0, method)
extern "C" bool m13937_gshared (t2812 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13937(__this, p0, p1, method) (( bool (*) (t2812 *, t9 *, t9 *, MethodInfo*))m13937_gshared)(__this, p0, p1, method)
extern "C" t2812 * m13938_gshared (t9 * __this , MethodInfo* method);
#define m13938(__this , method) (( t2812 * (*) (t9 * , MethodInfo*))m13938_gshared)(__this , method)
