#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3552;
struct t9;
struct t3543;

extern "C" void m21732_gshared (t3552 * __this, t3543 * p0, MethodInfo* method);
#define m21732(__this, p0, method) (( void (*) (t3552 *, t3543 *, MethodInfo*))m21732_gshared)(__this, p0, method)
extern "C" t9 * m21733_gshared (t3552 * __this, MethodInfo* method);
#define m21733(__this, method) (( t9 * (*) (t3552 *, MethodInfo*))m21733_gshared)(__this, method)
extern "C" void m21734_gshared (t3552 * __this, MethodInfo* method);
#define m21734(__this, method) (( void (*) (t3552 *, MethodInfo*))m21734_gshared)(__this, method)
extern "C" bool m21735_gshared (t3552 * __this, MethodInfo* method);
#define m21735(__this, method) (( bool (*) (t3552 *, MethodInfo*))m21735_gshared)(__this, method)
extern "C" uint64_t m21736_gshared (t3552 * __this, MethodInfo* method);
#define m21736(__this, method) (( uint64_t (*) (t3552 *, MethodInfo*))m21736_gshared)(__this, method)
