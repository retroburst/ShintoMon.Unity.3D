#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2196;
#include "t917.h"

extern "C" void m12138_gshared (t2196 * __this, MethodInfo* method);
#define m12138(__this, method) (( void (*) (t2196 *, MethodInfo*))m12138_gshared)(__this, method)
extern "C" int32_t m24883_gshared (t2196 * __this, t917  p0, MethodInfo* method);
#define m24883(__this, p0, method) (( int32_t (*) (t2196 *, t917 , MethodInfo*))m24883_gshared)(__this, p0, method)
extern "C" bool m24884_gshared (t2196 * __this, t917  p0, t917  p1, MethodInfo* method);
#define m24884(__this, p0, p1, method) (( bool (*) (t2196 *, t917 , t917 , MethodInfo*))m24884_gshared)(__this, p0, p1, method)
