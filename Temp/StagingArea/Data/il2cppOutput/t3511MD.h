#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3511;
#include "t600.h"

extern "C" void m21196_gshared (t3511 * __this, MethodInfo* method);
#define m21196(__this, method) (( void (*) (t3511 *, MethodInfo*))m21196_gshared)(__this, method)
extern "C" int32_t m21197_gshared (t3511 * __this, t600  p0, MethodInfo* method);
#define m21197(__this, p0, method) (( int32_t (*) (t3511 *, t600 , MethodInfo*))m21197_gshared)(__this, p0, method)
extern "C" bool m21198_gshared (t3511 * __this, t600  p0, t600  p1, MethodInfo* method);
#define m21198(__this, p0, p1, method) (( bool (*) (t3511 *, t600 , t600 , MethodInfo*))m21198_gshared)(__this, p0, p1, method)
