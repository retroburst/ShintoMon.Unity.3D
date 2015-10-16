#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2977;

extern "C" void m15600_gshared (t2977 * __this, MethodInfo* method);
#define m15600(__this, method) (( void (*) (t2977 *, MethodInfo*))m15600_gshared)(__this, method)
extern "C" int32_t m15601_gshared (t2977 * __this, int32_t p0, MethodInfo* method);
#define m15601(__this, p0, method) (( int32_t (*) (t2977 *, int32_t, MethodInfo*))m15601_gshared)(__this, p0, method)
extern "C" bool m15602_gshared (t2977 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m15602(__this, p0, p1, method) (( bool (*) (t2977 *, int32_t, int32_t, MethodInfo*))m15602_gshared)(__this, p0, p1, method)
