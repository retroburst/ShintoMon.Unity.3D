#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3500;
struct t9;
#include "t601.h"

extern "C" void m21043_gshared (t3500 * __this, MethodInfo* method);
#define m21043(__this, method) (( void (*) (t3500 *, MethodInfo*))m21043_gshared)(__this, method)
extern "C" void m21044_gshared (t9 * __this , MethodInfo* method);
#define m21044(__this , method) (( void (*) (t9 * , MethodInfo*))m21044_gshared)(__this , method)
extern "C" int32_t m21045_gshared (t3500 * __this, t9 * p0, MethodInfo* method);
#define m21045(__this, p0, method) (( int32_t (*) (t3500 *, t9 *, MethodInfo*))m21045_gshared)(__this, p0, method)
extern "C" bool m21046_gshared (t3500 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21046(__this, p0, p1, method) (( bool (*) (t3500 *, t9 *, t9 *, MethodInfo*))m21046_gshared)(__this, p0, p1, method)
extern "C" t3500 * m21047_gshared (t9 * __this , MethodInfo* method);
#define m21047(__this , method) (( t3500 * (*) (t9 * , MethodInfo*))m21047_gshared)(__this , method)
