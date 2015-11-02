#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2903;

extern "C" void m14775_gshared (t2903 * __this, MethodInfo* method);
#define m14775(__this, method) (( void (*) (t2903 *, MethodInfo*))m14775_gshared)(__this, method)
extern "C" int32_t m14776_gshared (t2903 * __this, uint16_t p0, MethodInfo* method);
#define m14776(__this, p0, method) (( int32_t (*) (t2903 *, uint16_t, MethodInfo*))m14776_gshared)(__this, p0, method)
extern "C" bool m14777_gshared (t2903 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14777(__this, p0, p1, method) (( bool (*) (t2903 *, uint16_t, uint16_t, MethodInfo*))m14777_gshared)(__this, p0, p1, method)
