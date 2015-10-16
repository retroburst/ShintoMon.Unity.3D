#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3130;
struct t9;
struct t3125;

extern "C" void m17305_gshared (t3130 * __this, t3125 * p0, MethodInfo* method);
#define m17305(__this, p0, method) (( void (*) (t3130 *, t3125 *, MethodInfo*))m17305_gshared)(__this, p0, method)
extern "C" t9 * m17306_gshared (t3130 * __this, MethodInfo* method);
#define m17306(__this, method) (( t9 * (*) (t3130 *, MethodInfo*))m17306_gshared)(__this, method)
extern "C" void m17307_gshared (t3130 * __this, MethodInfo* method);
#define m17307(__this, method) (( void (*) (t3130 *, MethodInfo*))m17307_gshared)(__this, method)
extern "C" bool m17308_gshared (t3130 * __this, MethodInfo* method);
#define m17308(__this, method) (( bool (*) (t3130 *, MethodInfo*))m17308_gshared)(__this, method)
extern "C" t9 * m17309_gshared (t3130 * __this, MethodInfo* method);
#define m17309(__this, method) (( t9 * (*) (t3130 *, MethodInfo*))m17309_gshared)(__this, method)
