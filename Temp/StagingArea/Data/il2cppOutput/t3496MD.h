#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3496;
#include "t594.h"

extern "C" void m21014_gshared (t3496 * __this, MethodInfo* method);
#define m21014(__this, method) (( void (*) (t3496 *, MethodInfo*))m21014_gshared)(__this, method)
extern "C" int32_t m21015_gshared (t3496 * __this, t594  p0, MethodInfo* method);
#define m21015(__this, p0, method) (( int32_t (*) (t3496 *, t594 , MethodInfo*))m21015_gshared)(__this, p0, method)
extern "C" bool m21016_gshared (t3496 * __this, t594  p0, t594  p1, MethodInfo* method);
#define m21016(__this, p0, p1, method) (( bool (*) (t3496 *, t594 , t594 , MethodInfo*))m21016_gshared)(__this, p0, p1, method)
