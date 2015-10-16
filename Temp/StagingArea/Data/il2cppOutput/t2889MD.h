#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2889;

extern "C" void m14712_gshared (t2889 * __this, MethodInfo* method);
#define m14712(__this, method) (( void (*) (t2889 *, MethodInfo*))m14712_gshared)(__this, method)
extern "C" int32_t m14713_gshared (t2889 * __this, uint16_t p0, MethodInfo* method);
#define m14713(__this, p0, method) (( int32_t (*) (t2889 *, uint16_t, MethodInfo*))m14713_gshared)(__this, p0, method)
extern "C" bool m14714_gshared (t2889 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14714(__this, p0, p1, method) (( bool (*) (t2889 *, uint16_t, uint16_t, MethodInfo*))m14714_gshared)(__this, p0, p1, method)
