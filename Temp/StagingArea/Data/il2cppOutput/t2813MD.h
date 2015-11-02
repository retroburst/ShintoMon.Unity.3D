#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2813;

extern "C" void m13939_gshared (t2813 * __this, MethodInfo* method);
#define m13939(__this, method) (( void (*) (t2813 *, MethodInfo*))m13939_gshared)(__this, method)
extern "C" int32_t m13940_gshared (t2813 * __this, uint8_t p0, MethodInfo* method);
#define m13940(__this, p0, method) (( int32_t (*) (t2813 *, uint8_t, MethodInfo*))m13940_gshared)(__this, p0, method)
extern "C" bool m13941_gshared (t2813 * __this, uint8_t p0, uint8_t p1, MethodInfo* method);
#define m13941(__this, p0, p1, method) (( bool (*) (t2813 *, uint8_t, uint8_t, MethodInfo*))m13941_gshared)(__this, p0, p1, method)
