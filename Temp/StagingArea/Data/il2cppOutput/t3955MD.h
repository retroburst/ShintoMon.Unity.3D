#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3955;
struct t9;
#include "t304.h"

extern "C" void m24924_gshared (t3955 * __this, MethodInfo* method);
#define m24924(__this, method) (( void (*) (t3955 *, MethodInfo*))m24924_gshared)(__this, method)
extern "C" void m24925_gshared (t9 * __this , MethodInfo* method);
#define m24925(__this , method) (( void (*) (t9 * , MethodInfo*))m24925_gshared)(__this , method)
extern "C" int32_t m24926_gshared (t3955 * __this, t9 * p0, MethodInfo* method);
#define m24926(__this, p0, method) (( int32_t (*) (t3955 *, t9 *, MethodInfo*))m24926_gshared)(__this, p0, method)
extern "C" bool m24927_gshared (t3955 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24927(__this, p0, p1, method) (( bool (*) (t3955 *, t9 *, t9 *, MethodInfo*))m24927_gshared)(__this, p0, p1, method)
extern "C" t3955 * m24928_gshared (t9 * __this , MethodInfo* method);
#define m24928(__this , method) (( t3955 * (*) (t9 * , MethodInfo*))m24928_gshared)(__this , method)
