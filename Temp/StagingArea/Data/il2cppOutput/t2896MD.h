#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2896;
struct t9;

extern "C" void m14732_gshared (t2896 * __this, MethodInfo* method);
#define m14732(__this, method) (( void (*) (t2896 *, MethodInfo*))m14732_gshared)(__this, method)
extern "C" void m14733_gshared (t9 * __this , MethodInfo* method);
#define m14733(__this , method) (( void (*) (t9 * , MethodInfo*))m14733_gshared)(__this , method)
extern "C" int32_t m14734_gshared (t2896 * __this, t9 * p0, MethodInfo* method);
#define m14734(__this, p0, method) (( int32_t (*) (t2896 *, t9 *, MethodInfo*))m14734_gshared)(__this, p0, method)
extern "C" bool m14735_gshared (t2896 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m14735(__this, p0, p1, method) (( bool (*) (t2896 *, t9 *, t9 *, MethodInfo*))m14735_gshared)(__this, p0, p1, method)
extern "C" t2896 * m14736_gshared (t9 * __this , MethodInfo* method);
#define m14736(__this , method) (( t2896 * (*) (t9 * , MethodInfo*))m14736_gshared)(__this , method)
