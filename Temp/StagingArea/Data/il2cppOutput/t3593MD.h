#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3593;
struct t9;

extern "C" void m21993_gshared (t3593 * __this, MethodInfo* method);
#define m21993(__this, method) (( void (*) (t3593 *, MethodInfo*))m21993_gshared)(__this, method)
extern "C" void m21994_gshared (t9 * __this , MethodInfo* method);
#define m21994(__this , method) (( void (*) (t9 * , MethodInfo*))m21994_gshared)(__this , method)
extern "C" int32_t m21995_gshared (t3593 * __this, t9 * p0, MethodInfo* method);
#define m21995(__this, p0, method) (( int32_t (*) (t3593 *, t9 *, MethodInfo*))m21995_gshared)(__this, p0, method)
extern "C" bool m21996_gshared (t3593 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21996(__this, p0, p1, method) (( bool (*) (t3593 *, t9 *, t9 *, MethodInfo*))m21996_gshared)(__this, p0, p1, method)
extern "C" t3593 * m21997_gshared (t9 * __this , MethodInfo* method);
#define m21997(__this , method) (( t3593 * (*) (t9 * , MethodInfo*))m21997_gshared)(__this , method)
