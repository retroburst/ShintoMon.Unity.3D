#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3515;
#include "t600.h"

extern "C" void m21211_gshared (t3515 * __this, MethodInfo* method);
#define m21211(__this, method) (( void (*) (t3515 *, MethodInfo*))m21211_gshared)(__this, method)
extern "C" int32_t m21212_gshared (t3515 * __this, t600  p0, t600  p1, MethodInfo* method);
#define m21212(__this, p0, p1, method) (( int32_t (*) (t3515 *, t600 , t600 , MethodInfo*))m21212_gshared)(__this, p0, p1, method)
