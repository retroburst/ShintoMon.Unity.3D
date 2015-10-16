#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3912;
struct t9;
#include "t269.h"

extern "C" void m24675_gshared (t3912 * __this, MethodInfo* method);
#define m24675(__this, method) (( void (*) (t3912 *, MethodInfo*))m24675_gshared)(__this, method)
extern "C" void m24676_gshared (t9 * __this , MethodInfo* method);
#define m24676(__this , method) (( void (*) (t9 * , MethodInfo*))m24676_gshared)(__this , method)
extern "C" int32_t m24677_gshared (t3912 * __this, t9 * p0, MethodInfo* method);
#define m24677(__this, p0, method) (( int32_t (*) (t3912 *, t9 *, MethodInfo*))m24677_gshared)(__this, p0, method)
extern "C" bool m24678_gshared (t3912 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24678(__this, p0, p1, method) (( bool (*) (t3912 *, t9 *, t9 *, MethodInfo*))m24678_gshared)(__this, p0, p1, method)
extern "C" t3912 * m24679_gshared (t9 * __this , MethodInfo* method);
#define m24679(__this , method) (( t3912 * (*) (t9 * , MethodInfo*))m24679_gshared)(__this , method)
