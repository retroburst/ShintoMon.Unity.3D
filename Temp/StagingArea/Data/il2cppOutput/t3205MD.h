#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3205;
struct t9;
#include "t452.h"

extern "C" void m18102_gshared (t3205 * __this, MethodInfo* method);
#define m18102(__this, method) (( void (*) (t3205 *, MethodInfo*))m18102_gshared)(__this, method)
extern "C" void m18103_gshared (t9 * __this , MethodInfo* method);
#define m18103(__this , method) (( void (*) (t9 * , MethodInfo*))m18103_gshared)(__this , method)
extern "C" int32_t m18104_gshared (t3205 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18104(__this, p0, p1, method) (( int32_t (*) (t3205 *, t9 *, t9 *, MethodInfo*))m18104_gshared)(__this, p0, p1, method)
extern "C" t3205 * m18105_gshared (t9 * __this , MethodInfo* method);
#define m18105(__this , method) (( t3205 * (*) (t9 * , MethodInfo*))m18105_gshared)(__this , method)
