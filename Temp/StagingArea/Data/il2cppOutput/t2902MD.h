#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2902;

extern "C" void m14772_gshared (t2902 * __this, MethodInfo* method);
#define m14772(__this, method) (( void (*) (t2902 *, MethodInfo*))m14772_gshared)(__this, method)
extern "C" int32_t m14773_gshared (t2902 * __this, uint16_t p0, MethodInfo* method);
#define m14773(__this, p0, method) (( int32_t (*) (t2902 *, uint16_t, MethodInfo*))m14773_gshared)(__this, p0, method)
extern "C" bool m14774_gshared (t2902 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14774(__this, p0, p1, method) (( bool (*) (t2902 *, uint16_t, uint16_t, MethodInfo*))m14774_gshared)(__this, p0, p1, method)
