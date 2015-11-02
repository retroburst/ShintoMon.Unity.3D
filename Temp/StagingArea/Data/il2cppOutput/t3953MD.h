#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3953;
#include "t923.h"

extern "C" void m24925_gshared (t3953 * __this, MethodInfo* method);
#define m24925(__this, method) (( void (*) (t3953 *, MethodInfo*))m24925_gshared)(__this, method)
extern "C" int32_t m24926_gshared (t3953 * __this, t923  p0, MethodInfo* method);
#define m24926(__this, p0, method) (( int32_t (*) (t3953 *, t923 , MethodInfo*))m24926_gshared)(__this, p0, method)
extern "C" bool m24927_gshared (t3953 * __this, t923  p0, t923  p1, MethodInfo* method);
#define m24927(__this, p0, p1, method) (( bool (*) (t3953 *, t923 , t923 , MethodInfo*))m24927_gshared)(__this, p0, p1, method)
