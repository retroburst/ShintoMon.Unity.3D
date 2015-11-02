#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3949;
#include "t272.h"

extern "C" void m24908_gshared (t3949 * __this, MethodInfo* method);
#define m24908(__this, method) (( void (*) (t3949 *, MethodInfo*))m24908_gshared)(__this, method)
extern "C" int32_t m24909_gshared (t3949 * __this, t272  p0, MethodInfo* method);
#define m24909(__this, p0, method) (( int32_t (*) (t3949 *, t272 , MethodInfo*))m24909_gshared)(__this, p0, method)
extern "C" bool m24910_gshared (t3949 * __this, t272  p0, t272  p1, MethodInfo* method);
#define m24910(__this, p0, p1, method) (( bool (*) (t3949 *, t272 , t272 , MethodInfo*))m24910_gshared)(__this, p0, p1, method)
