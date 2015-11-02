#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3535;
struct t9;

extern "C" void m21423_gshared (t3535 * __this, MethodInfo* method);
#define m21423(__this, method) (( void (*) (t3535 *, MethodInfo*))m21423_gshared)(__this, method)
extern "C" void m21424_gshared (t9 * __this , MethodInfo* method);
#define m21424(__this , method) (( void (*) (t9 * , MethodInfo*))m21424_gshared)(__this , method)
extern "C" int32_t m21425_gshared (t3535 * __this, t9 * p0, MethodInfo* method);
#define m21425(__this, p0, method) (( int32_t (*) (t3535 *, t9 *, MethodInfo*))m21425_gshared)(__this, p0, method)
extern "C" bool m21426_gshared (t3535 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21426(__this, p0, p1, method) (( bool (*) (t3535 *, t9 *, t9 *, MethodInfo*))m21426_gshared)(__this, p0, p1, method)
extern "C" t3535 * m21427_gshared (t9 * __this , MethodInfo* method);
#define m21427(__this , method) (( t3535 * (*) (t9 * , MethodInfo*))m21427_gshared)(__this , method)
