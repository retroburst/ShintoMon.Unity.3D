#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3722;
#include "t922.h"

extern "C" void m23205_gshared (t3722 * __this, MethodInfo* method);
#define m23205(__this, method) (( void (*) (t3722 *, MethodInfo*))m23205_gshared)(__this, method)
extern "C" int32_t m23206_gshared (t3722 * __this, t922  p0, MethodInfo* method);
#define m23206(__this, p0, method) (( int32_t (*) (t3722 *, t922 , MethodInfo*))m23206_gshared)(__this, p0, method)
extern "C" bool m23207_gshared (t3722 * __this, t922  p0, t922  p1, MethodInfo* method);
#define m23207(__this, p0, p1, method) (( bool (*) (t3722 *, t922 , t922 , MethodInfo*))m23207_gshared)(__this, p0, p1, method)
