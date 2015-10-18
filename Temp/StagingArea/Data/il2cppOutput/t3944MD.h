#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3944;
#include "t270.h"

extern "C" void m24874_gshared (t3944 * __this, MethodInfo* method);
#define m24874(__this, method) (( void (*) (t3944 *, MethodInfo*))m24874_gshared)(__this, method)
extern "C" int32_t m24875_gshared (t3944 * __this, t270  p0, MethodInfo* method);
#define m24875(__this, p0, method) (( int32_t (*) (t3944 *, t270 , MethodInfo*))m24875_gshared)(__this, p0, method)
extern "C" bool m24876_gshared (t3944 * __this, t270  p0, t270  p1, MethodInfo* method);
#define m24876(__this, p0, p1, method) (( bool (*) (t3944 *, t270 , t270 , MethodInfo*))m24876_gshared)(__this, p0, p1, method)
