#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2887;
struct t9;

extern "C" void m14704_gshared (t2887 * __this, MethodInfo* method);
#define m14704(__this, method) (( void (*) (t2887 *, MethodInfo*))m14704_gshared)(__this, method)
extern "C" void m14705_gshared (t9 * __this , MethodInfo* method);
#define m14705(__this , method) (( void (*) (t9 * , MethodInfo*))m14705_gshared)(__this , method)
extern "C" int32_t m14706_gshared (t2887 * __this, t9 * p0, MethodInfo* method);
#define m14706(__this, p0, method) (( int32_t (*) (t2887 *, t9 *, MethodInfo*))m14706_gshared)(__this, p0, method)
extern "C" bool m14707_gshared (t2887 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m14707(__this, p0, p1, method) (( bool (*) (t2887 *, t9 *, t9 *, MethodInfo*))m14707_gshared)(__this, p0, p1, method)
extern "C" t2887 * m14708_gshared (t9 * __this , MethodInfo* method);
#define m14708(__this , method) (( t2887 * (*) (t9 * , MethodInfo*))m14708_gshared)(__this , method)
