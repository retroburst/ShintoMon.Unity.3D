#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3134;
struct t9;
struct t3125;

extern "C" void m17340_gshared (t3134 * __this, t3125 * p0, MethodInfo* method);
#define m17340(__this, p0, method) (( void (*) (t3134 *, t3125 *, MethodInfo*))m17340_gshared)(__this, p0, method)
extern "C" t9 * m17341_gshared (t3134 * __this, MethodInfo* method);
#define m17341(__this, method) (( t9 * (*) (t3134 *, MethodInfo*))m17341_gshared)(__this, method)
extern "C" void m17342_gshared (t3134 * __this, MethodInfo* method);
#define m17342(__this, method) (( void (*) (t3134 *, MethodInfo*))m17342_gshared)(__this, method)
extern "C" bool m17343_gshared (t3134 * __this, MethodInfo* method);
#define m17343(__this, method) (( bool (*) (t3134 *, MethodInfo*))m17343_gshared)(__this, method)
extern "C" int32_t m17344_gshared (t3134 * __this, MethodInfo* method);
#define m17344(__this, method) (( int32_t (*) (t3134 *, MethodInfo*))m17344_gshared)(__this, method)
