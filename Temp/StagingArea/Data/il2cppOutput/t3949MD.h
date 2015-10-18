#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3949;
struct t9;
#include "t918.h"

extern "C" void m24899_gshared (t3949 * __this, MethodInfo* method);
#define m24899(__this, method) (( void (*) (t3949 *, MethodInfo*))m24899_gshared)(__this, method)
extern "C" void m24900_gshared (t9 * __this , MethodInfo* method);
#define m24900(__this , method) (( void (*) (t9 * , MethodInfo*))m24900_gshared)(__this , method)
extern "C" int32_t m24901_gshared (t3949 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24901(__this, p0, p1, method) (( int32_t (*) (t3949 *, t9 *, t9 *, MethodInfo*))m24901_gshared)(__this, p0, p1, method)
extern "C" t3949 * m24902_gshared (t9 * __this , MethodInfo* method);
#define m24902(__this , method) (( t3949 * (*) (t9 * , MethodInfo*))m24902_gshared)(__this , method)
