#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2986;
struct t9;

extern "C" void m15633_gshared (t2986 * __this, MethodInfo* method);
#define m15633(__this, method) (( void (*) (t2986 *, MethodInfo*))m15633_gshared)(__this, method)
extern "C" void m15634_gshared (t9 * __this , MethodInfo* method);
#define m15634(__this , method) (( void (*) (t9 * , MethodInfo*))m15634_gshared)(__this , method)
extern "C" int32_t m15635_gshared (t2986 * __this, t9 * p0, MethodInfo* method);
#define m15635(__this, p0, method) (( int32_t (*) (t2986 *, t9 *, MethodInfo*))m15635_gshared)(__this, p0, method)
extern "C" bool m15636_gshared (t2986 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m15636(__this, p0, p1, method) (( bool (*) (t2986 *, t9 *, t9 *, MethodInfo*))m15636_gshared)(__this, p0, p1, method)
extern "C" t2986 * m15637_gshared (t9 * __this , MethodInfo* method);
#define m15637(__this , method) (( t2986 * (*) (t9 * , MethodInfo*))m15637_gshared)(__this , method)
