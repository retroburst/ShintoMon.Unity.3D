#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3499;
struct t9;
#include "t594.h"

extern "C" void m21025_gshared (t3499 * __this, MethodInfo* method);
#define m21025(__this, method) (( void (*) (t3499 *, MethodInfo*))m21025_gshared)(__this, method)
extern "C" void m21026_gshared (t9 * __this , MethodInfo* method);
#define m21026(__this , method) (( void (*) (t9 * , MethodInfo*))m21026_gshared)(__this , method)
extern "C" int32_t m21027_gshared (t3499 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21027(__this, p0, p1, method) (( int32_t (*) (t3499 *, t9 *, t9 *, MethodInfo*))m21027_gshared)(__this, p0, p1, method)
extern "C" t3499 * m21028_gshared (t9 * __this , MethodInfo* method);
#define m21028(__this , method) (( t3499 * (*) (t9 * , MethodInfo*))m21028_gshared)(__this , method)
