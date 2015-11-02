#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3501;
#include "t601.h"

extern "C" void m21048_gshared (t3501 * __this, MethodInfo* method);
#define m21048(__this, method) (( void (*) (t3501 *, MethodInfo*))m21048_gshared)(__this, method)
extern "C" int32_t m21049_gshared (t3501 * __this, t601  p0, MethodInfo* method);
#define m21049(__this, p0, method) (( int32_t (*) (t3501 *, t601 , MethodInfo*))m21049_gshared)(__this, p0, method)
extern "C" bool m21050_gshared (t3501 * __this, t601  p0, t601  p1, MethodInfo* method);
#define m21050(__this, p0, p1, method) (( bool (*) (t3501 *, t601 , t601 , MethodInfo*))m21050_gshared)(__this, p0, p1, method)
