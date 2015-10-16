#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3911;
#include "t269.h"

extern "C" void m24671_gshared (t3911 * __this, MethodInfo* method);
#define m24671(__this, method) (( void (*) (t3911 *, MethodInfo*))m24671_gshared)(__this, method)
extern "C" int32_t m24672_gshared (t3911 * __this, t269  p0, t269  p1, MethodInfo* method);
#define m24672(__this, p0, p1, method) (( int32_t (*) (t3911 *, t269 , t269 , MethodInfo*))m24672_gshared)(__this, p0, p1, method)
