#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3913;
#include "t269.h"

extern "C" void m24680_gshared (t3913 * __this, MethodInfo* method);
#define m24680(__this, method) (( void (*) (t3913 *, MethodInfo*))m24680_gshared)(__this, method)
extern "C" int32_t m24681_gshared (t3913 * __this, t269  p0, MethodInfo* method);
#define m24681(__this, p0, method) (( int32_t (*) (t3913 *, t269 , MethodInfo*))m24681_gshared)(__this, p0, method)
extern "C" bool m24682_gshared (t3913 * __this, t269  p0, t269  p1, MethodInfo* method);
#define m24682(__this, p0, p1, method) (( bool (*) (t3913 *, t269 , t269 , MethodInfo*))m24682_gshared)(__this, p0, p1, method)
