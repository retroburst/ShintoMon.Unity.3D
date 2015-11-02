#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3956;
struct t9;
#include "t924.h"

extern "C" void m24941_gshared (t3956 * __this, MethodInfo* method);
#define m24941(__this, method) (( void (*) (t3956 *, MethodInfo*))m24941_gshared)(__this, method)
extern "C" void m24942_gshared (t9 * __this , MethodInfo* method);
#define m24942(__this , method) (( void (*) (t9 * , MethodInfo*))m24942_gshared)(__this , method)
extern "C" int32_t m24943_gshared (t3956 * __this, t9 * p0, MethodInfo* method);
#define m24943(__this, p0, method) (( int32_t (*) (t3956 *, t9 *, MethodInfo*))m24943_gshared)(__this, p0, method)
extern "C" bool m24944_gshared (t3956 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24944(__this, p0, p1, method) (( bool (*) (t3956 *, t9 *, t9 *, MethodInfo*))m24944_gshared)(__this, p0, p1, method)
extern "C" t3956 * m24945_gshared (t9 * __this , MethodInfo* method);
#define m24945(__this , method) (( t3956 * (*) (t9 * , MethodInfo*))m24945_gshared)(__this , method)
