#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2200;
#include "t304.h"

extern "C" void m12160_gshared (t2200 * __this, MethodInfo* method);
#define m12160(__this, method) (( void (*) (t2200 *, MethodInfo*))m12160_gshared)(__this, method)
extern "C" int32_t m24922_gshared (t2200 * __this, t304  p0, MethodInfo* method);
#define m24922(__this, p0, method) (( int32_t (*) (t2200 *, t304 , MethodInfo*))m24922_gshared)(__this, p0, method)
extern "C" bool m24923_gshared (t2200 * __this, t304  p0, t304  p1, MethodInfo* method);
#define m24923(__this, p0, p1, method) (( bool (*) (t2200 *, t304 , t304 , MethodInfo*))m24923_gshared)(__this, p0, p1, method)
