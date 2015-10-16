#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3917;
#include "t910.h"

extern "C" void m24697_gshared (t3917 * __this, MethodInfo* method);
#define m24697(__this, method) (( void (*) (t3917 *, MethodInfo*))m24697_gshared)(__this, method)
extern "C" int32_t m24698_gshared (t3917 * __this, t910  p0, MethodInfo* method);
#define m24698(__this, p0, method) (( int32_t (*) (t3917 *, t910 , MethodInfo*))m24698_gshared)(__this, p0, method)
extern "C" bool m24699_gshared (t3917 * __this, t910  p0, t910  p1, MethodInfo* method);
#define m24699(__this, p0, p1, method) (( bool (*) (t3917 *, t910 , t910 , MethodInfo*))m24699_gshared)(__this, p0, p1, method)
