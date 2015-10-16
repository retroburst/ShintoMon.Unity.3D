#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3058;
#include "t340.h"

extern "C" void m16509_gshared (t3058 * __this, MethodInfo* method);
#define m16509(__this, method) (( void (*) (t3058 *, MethodInfo*))m16509_gshared)(__this, method)
extern "C" int32_t m16510_gshared (t3058 * __this, t340  p0, MethodInfo* method);
#define m16510(__this, p0, method) (( int32_t (*) (t3058 *, t340 , MethodInfo*))m16510_gshared)(__this, p0, method)
extern "C" bool m16511_gshared (t3058 * __this, t340  p0, t340  p1, MethodInfo* method);
#define m16511(__this, p0, p1, method) (( bool (*) (t3058 *, t340 , t340 , MethodInfo*))m16511_gshared)(__this, p0, p1, method)
