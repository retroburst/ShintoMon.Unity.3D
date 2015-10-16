#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3910;
struct t9;
#include "t269.h"

extern "C" void m24667_gshared (t3910 * __this, MethodInfo* method);
#define m24667(__this, method) (( void (*) (t3910 *, MethodInfo*))m24667_gshared)(__this, method)
extern "C" void m24668_gshared (t9 * __this , MethodInfo* method);
#define m24668(__this , method) (( void (*) (t9 * , MethodInfo*))m24668_gshared)(__this , method)
extern "C" int32_t m24669_gshared (t3910 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24669(__this, p0, p1, method) (( int32_t (*) (t3910 *, t9 *, t9 *, MethodInfo*))m24669_gshared)(__this, p0, p1, method)
extern "C" t3910 * m24670_gshared (t9 * __this , MethodInfo* method);
#define m24670(__this , method) (( t3910 * (*) (t9 * , MethodInfo*))m24670_gshared)(__this , method)
