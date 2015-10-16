#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2797;
struct t9;

extern "C" void m13866_gshared (t2797 * __this, MethodInfo* method);
#define m13866(__this, method) (( void (*) (t2797 *, MethodInfo*))m13866_gshared)(__this, method)
extern "C" void m13867_gshared (t9 * __this , MethodInfo* method);
#define m13867(__this , method) (( void (*) (t9 * , MethodInfo*))m13867_gshared)(__this , method)
extern "C" int32_t m13868_gshared (t2797 * __this, t9 * p0, MethodInfo* method);
#define m13868(__this, p0, method) (( int32_t (*) (t2797 *, t9 *, MethodInfo*))m13868_gshared)(__this, p0, method)
extern "C" bool m13869_gshared (t2797 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13869(__this, p0, p1, method) (( bool (*) (t2797 *, t9 *, t9 *, MethodInfo*))m13869_gshared)(__this, p0, p1, method)
extern "C" t2797 * m13870_gshared (t9 * __this , MethodInfo* method);
#define m13870(__this , method) (( t2797 * (*) (t9 * , MethodInfo*))m13870_gshared)(__this , method)
