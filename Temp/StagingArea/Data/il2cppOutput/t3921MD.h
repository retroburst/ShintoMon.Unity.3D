#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3921;
#include "t911.h"

extern "C" void m24718_gshared (t3921 * __this, MethodInfo* method);
#define m24718(__this, method) (( void (*) (t3921 *, MethodInfo*))m24718_gshared)(__this, method)
extern "C" int32_t m24719_gshared (t3921 * __this, t911  p0, MethodInfo* method);
#define m24719(__this, p0, method) (( int32_t (*) (t3921 *, t911 , MethodInfo*))m24719_gshared)(__this, p0, method)
extern "C" bool m24720_gshared (t3921 * __this, t911  p0, t911  p1, MethodInfo* method);
#define m24720(__this, p0, p1, method) (( bool (*) (t3921 *, t911 , t911 , MethodInfo*))m24720_gshared)(__this, p0, p1, method)
