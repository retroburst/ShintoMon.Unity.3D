#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3462;
struct t9;
#include "t587.h"

extern "C" void m20805_gshared (t3462 * __this, MethodInfo* method);
#define m20805(__this, method) (( void (*) (t3462 *, MethodInfo*))m20805_gshared)(__this, method)
extern "C" void m20806_gshared (t9 * __this , MethodInfo* method);
#define m20806(__this , method) (( void (*) (t9 * , MethodInfo*))m20806_gshared)(__this , method)
extern "C" int32_t m20807_gshared (t3462 * __this, t9 * p0, MethodInfo* method);
#define m20807(__this, p0, method) (( int32_t (*) (t3462 *, t9 *, MethodInfo*))m20807_gshared)(__this, p0, method)
extern "C" bool m20808_gshared (t3462 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m20808(__this, p0, p1, method) (( bool (*) (t3462 *, t9 *, t9 *, MethodInfo*))m20808_gshared)(__this, p0, p1, method)
extern "C" t3462 * m20809_gshared (t9 * __this , MethodInfo* method);
#define m20809(__this , method) (( t3462 * (*) (t9 * , MethodInfo*))m20809_gshared)(__this , method)
