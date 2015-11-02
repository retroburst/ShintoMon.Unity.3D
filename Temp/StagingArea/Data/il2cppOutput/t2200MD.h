#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2200;
#include "t272.h"

extern "C" void m12175_gshared (t2200 * __this, MethodInfo* method);
#define m12175(__this, method) (( void (*) (t2200 *, MethodInfo*))m12175_gshared)(__this, method)
extern "C" int32_t m24901_gshared (t2200 * __this, t272  p0, MethodInfo* method);
#define m24901(__this, p0, method) (( int32_t (*) (t2200 *, t272 , MethodInfo*))m24901_gshared)(__this, p0, method)
extern "C" bool m24902_gshared (t2200 * __this, t272  p0, t272  p1, MethodInfo* method);
#define m24902(__this, p0, p1, method) (( bool (*) (t2200 *, t272 , t272 , MethodInfo*))m24902_gshared)(__this, p0, p1, method)
