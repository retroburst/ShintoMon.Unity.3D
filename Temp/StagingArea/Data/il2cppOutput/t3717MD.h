#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3717;
#include "t916.h"

extern "C" void m23171_gshared (t3717 * __this, MethodInfo* method);
#define m23171(__this, method) (( void (*) (t3717 *, MethodInfo*))m23171_gshared)(__this, method)
extern "C" int32_t m23172_gshared (t3717 * __this, t916  p0, MethodInfo* method);
#define m23172(__this, p0, method) (( int32_t (*) (t3717 *, t916 , MethodInfo*))m23172_gshared)(__this, p0, method)
extern "C" bool m23173_gshared (t3717 * __this, t916  p0, t916  p1, MethodInfo* method);
#define m23173(__this, p0, p1, method) (( bool (*) (t3717 *, t916 , t916 , MethodInfo*))m23173_gshared)(__this, p0, p1, method)
