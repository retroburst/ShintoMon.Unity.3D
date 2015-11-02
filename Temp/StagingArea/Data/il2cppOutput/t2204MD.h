#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2204;
#include "t924.h"

extern "C" void m12188_gshared (t2204 * __this, MethodInfo* method);
#define m12188(__this, method) (( void (*) (t2204 *, MethodInfo*))m12188_gshared)(__this, method)
extern "C" int32_t m24939_gshared (t2204 * __this, t924  p0, MethodInfo* method);
#define m24939(__this, p0, method) (( int32_t (*) (t2204 *, t924 , MethodInfo*))m24939_gshared)(__this, p0, method)
extern "C" bool m24940_gshared (t2204 * __this, t924  p0, t924  p1, MethodInfo* method);
#define m24940(__this, p0, p1, method) (( bool (*) (t2204 *, t924 , t924 , MethodInfo*))m24940_gshared)(__this, p0, p1, method)
