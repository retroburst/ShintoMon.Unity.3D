#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3784;
struct t9;
struct t828;
struct t3785;
struct t158;

extern "C" void m23672_gshared (t3784 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m23672(__this, p0, p1, method) (( void (*) (t3784 *, t9 *, t828 *, MethodInfo*))m23672_gshared)(__this, p0, p1, method)
extern "C" void m23673_gshared (t3784 * __this, t3785 * p0, MethodInfo* method);
#define m23673(__this, p0, method) (( void (*) (t3784 *, t3785 *, MethodInfo*))m23673_gshared)(__this, p0, method)
extern "C" void m23674_gshared (t3784 * __this, t158* p0, MethodInfo* method);
#define m23674(__this, p0, method) (( void (*) (t3784 *, t158*, MethodInfo*))m23674_gshared)(__this, p0, method)
extern "C" bool m23675_gshared (t3784 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m23675(__this, p0, p1, method) (( bool (*) (t3784 *, t9 *, t828 *, MethodInfo*))m23675_gshared)(__this, p0, p1, method)
