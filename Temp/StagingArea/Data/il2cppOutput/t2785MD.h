#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2785;
struct t9;
struct t121;

extern "C" void m13779_gshared (t2785 * __this, t121 * p0, MethodInfo* method);
#define m13779(__this, p0, method) (( void (*) (t2785 *, t121 *, MethodInfo*))m13779_gshared)(__this, p0, method)
extern "C" t9 * m13780_gshared (t2785 * __this, MethodInfo* method);
#define m13780(__this, method) (( t9 * (*) (t2785 *, MethodInfo*))m13780_gshared)(__this, method)
extern "C" void m13781_gshared (t2785 * __this, MethodInfo* method);
#define m13781(__this, method) (( void (*) (t2785 *, MethodInfo*))m13781_gshared)(__this, method)
extern "C" bool m13782_gshared (t2785 * __this, MethodInfo* method);
#define m13782(__this, method) (( bool (*) (t2785 *, MethodInfo*))m13782_gshared)(__this, method)
extern "C" uint8_t m13783_gshared (t2785 * __this, MethodInfo* method);
#define m13783(__this, method) (( uint8_t (*) (t2785 *, MethodInfo*))m13783_gshared)(__this, method)
