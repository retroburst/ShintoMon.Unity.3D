#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3497;
struct t9;

extern "C" void m21185_gshared (t3497 * __this, MethodInfo* method);
#define m21185(__this, method) (( void (*) (t3497 *, MethodInfo*))m21185_gshared)(__this, method)
extern "C" void m21186_gshared (t9 * __this , MethodInfo* method);
#define m21186(__this , method) (( void (*) (t9 * , MethodInfo*))m21186_gshared)(__this , method)
extern "C" int32_t m21187_gshared (t3497 * __this, t9 * p0, MethodInfo* method);
#define m21187(__this, p0, method) (( int32_t (*) (t3497 *, t9 *, MethodInfo*))m21187_gshared)(__this, p0, method)
extern "C" bool m21188_gshared (t3497 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21188(__this, p0, p1, method) (( bool (*) (t3497 *, t9 *, t9 *, MethodInfo*))m21188_gshared)(__this, p0, p1, method)
extern "C" t3497 * m21189_gshared (t9 * __this , MethodInfo* method);
#define m21189(__this , method) (( t3497 * (*) (t9 * , MethodInfo*))m21189_gshared)(__this , method)
