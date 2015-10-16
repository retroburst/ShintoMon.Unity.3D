#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3914;
struct t9;
#include "t910.h"

extern "C" void m24684_gshared (t3914 * __this, MethodInfo* method);
#define m24684(__this, method) (( void (*) (t3914 *, MethodInfo*))m24684_gshared)(__this, method)
extern "C" void m24685_gshared (t9 * __this , MethodInfo* method);
#define m24685(__this , method) (( void (*) (t9 * , MethodInfo*))m24685_gshared)(__this , method)
extern "C" int32_t m24686_gshared (t3914 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24686(__this, p0, p1, method) (( int32_t (*) (t3914 *, t9 *, t9 *, MethodInfo*))m24686_gshared)(__this, p0, p1, method)
extern "C" t3914 * m24687_gshared (t9 * __this , MethodInfo* method);
#define m24687(__this , method) (( t3914 * (*) (t9 * , MethodInfo*))m24687_gshared)(__this , method)
