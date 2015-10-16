#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2185;
#include "t269.h"

extern "C" void m12107_gshared (t2185 * __this, MethodInfo* method);
#define m12107(__this, method) (( void (*) (t2185 *, MethodInfo*))m12107_gshared)(__this, method)
extern "C" int32_t m24673_gshared (t2185 * __this, t269  p0, MethodInfo* method);
#define m24673(__this, p0, method) (( int32_t (*) (t2185 *, t269 , MethodInfo*))m24673_gshared)(__this, p0, method)
extern "C" bool m24674_gshared (t2185 * __this, t269  p0, t269  p1, MethodInfo* method);
#define m24674(__this, p0, p1, method) (( bool (*) (t2185 *, t269 , t269 , MethodInfo*))m24674_gshared)(__this, p0, p1, method)
