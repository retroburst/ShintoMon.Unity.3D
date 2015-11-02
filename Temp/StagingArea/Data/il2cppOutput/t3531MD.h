#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3531;
struct t9;
struct t3519;

extern "C" void m21400_gshared (t3531 * __this, t3519 * p0, MethodInfo* method);
#define m21400(__this, p0, method) (( void (*) (t3531 *, t3519 *, MethodInfo*))m21400_gshared)(__this, p0, method)
extern "C" t9 * m21401_gshared (t3531 * __this, MethodInfo* method);
#define m21401(__this, method) (( t9 * (*) (t3531 *, MethodInfo*))m21401_gshared)(__this, method)
extern "C" void m21402_gshared (t3531 * __this, MethodInfo* method);
#define m21402(__this, method) (( void (*) (t3531 *, MethodInfo*))m21402_gshared)(__this, method)
extern "C" bool m21403_gshared (t3531 * __this, MethodInfo* method);
#define m21403(__this, method) (( bool (*) (t3531 *, MethodInfo*))m21403_gshared)(__this, method)
extern "C" int64_t m21404_gshared (t3531 * __this, MethodInfo* method);
#define m21404(__this, method) (( int64_t (*) (t3531 *, MethodInfo*))m21404_gshared)(__this, method)
