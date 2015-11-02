#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3510;
struct t9;
#include "t600.h"

extern "C" void m21191_gshared (t3510 * __this, MethodInfo* method);
#define m21191(__this, method) (( void (*) (t3510 *, MethodInfo*))m21191_gshared)(__this, method)
extern "C" void m21192_gshared (t9 * __this , MethodInfo* method);
#define m21192(__this , method) (( void (*) (t9 * , MethodInfo*))m21192_gshared)(__this , method)
extern "C" int32_t m21193_gshared (t3510 * __this, t9 * p0, MethodInfo* method);
#define m21193(__this, p0, method) (( int32_t (*) (t3510 *, t9 *, MethodInfo*))m21193_gshared)(__this, p0, method)
extern "C" bool m21194_gshared (t3510 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21194(__this, p0, p1, method) (( bool (*) (t3510 *, t9 *, t9 *, MethodInfo*))m21194_gshared)(__this, p0, p1, method)
extern "C" t3510 * m21195_gshared (t9 * __this , MethodInfo* method);
#define m21195(__this , method) (( t3510 * (*) (t9 * , MethodInfo*))m21195_gshared)(__this , method)
