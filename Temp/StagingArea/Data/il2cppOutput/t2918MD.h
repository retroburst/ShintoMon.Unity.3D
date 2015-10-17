#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2918;

extern "C" void m14933_gshared (t2918 * __this, MethodInfo* method);
#define m14933(__this, method) (( void (*) (t2918 *, MethodInfo*))m14933_gshared)(__this, method)
extern "C" int32_t m14934_gshared (t2918 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14934(__this, p0, p1, method) (( int32_t (*) (t2918 *, uint16_t, uint16_t, MethodInfo*))m14934_gshared)(__this, p0, p1, method)
