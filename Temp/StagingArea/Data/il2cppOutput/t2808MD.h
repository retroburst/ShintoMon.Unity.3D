#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2808;

extern "C" void m13902_gshared (t2808 * __this, MethodInfo* method);
#define m13902(__this, method) (( void (*) (t2808 *, MethodInfo*))m13902_gshared)(__this, method)
extern "C" int32_t m13903_gshared (t2808 * __this, uint8_t p0, MethodInfo* method);
#define m13903(__this, p0, method) (( int32_t (*) (t2808 *, uint8_t, MethodInfo*))m13903_gshared)(__this, p0, method)
extern "C" bool m13904_gshared (t2808 * __this, uint8_t p0, uint8_t p1, MethodInfo* method);
#define m13904(__this, p0, p1, method) (( bool (*) (t2808 *, uint8_t, uint8_t, MethodInfo*))m13904_gshared)(__this, p0, p1, method)
