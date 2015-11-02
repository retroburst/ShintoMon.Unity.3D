#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3954;
struct t9;
#include "t924.h"

extern "C" void m24933_gshared (t3954 * __this, MethodInfo* method);
#define m24933(__this, method) (( void (*) (t3954 *, MethodInfo*))m24933_gshared)(__this, method)
extern "C" void m24934_gshared (t9 * __this , MethodInfo* method);
#define m24934(__this , method) (( void (*) (t9 * , MethodInfo*))m24934_gshared)(__this , method)
extern "C" int32_t m24935_gshared (t3954 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24935(__this, p0, p1, method) (( int32_t (*) (t3954 *, t9 *, t9 *, MethodInfo*))m24935_gshared)(__this, p0, p1, method)
extern "C" t3954 * m24936_gshared (t9 * __this , MethodInfo* method);
#define m24936(__this , method) (( t3954 * (*) (t9 * , MethodInfo*))m24936_gshared)(__this , method)
