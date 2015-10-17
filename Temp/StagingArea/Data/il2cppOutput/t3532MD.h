#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3532;

extern "C" void m21396_gshared (t3532 * __this, MethodInfo* method);
#define m21396(__this, method) (( void (*) (t3532 *, MethodInfo*))m21396_gshared)(__this, method)
extern "C" int32_t m21397_gshared (t3532 * __this, int64_t p0, MethodInfo* method);
#define m21397(__this, p0, method) (( int32_t (*) (t3532 *, int64_t, MethodInfo*))m21397_gshared)(__this, p0, method)
extern "C" bool m21398_gshared (t3532 * __this, int64_t p0, int64_t p1, MethodInfo* method);
#define m21398(__this, p0, p1, method) (( bool (*) (t3532 *, int64_t, int64_t, MethodInfo*))m21398_gshared)(__this, p0, p1, method)
