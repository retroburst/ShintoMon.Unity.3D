#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3812;
struct t828;
struct t2;
struct t9;
struct t863;

extern "C" void m23982_gshared (t3812 * __this, MethodInfo* method);
#define m23982(__this, method) (( void (*) (t3812 *, MethodInfo*))m23982_gshared)(__this, method)
extern "C" t828 * m23983_gshared (t3812 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m23983(__this, p0, p1, method) (( t828 * (*) (t3812 *, t2*, t9 *, MethodInfo*))m23983_gshared)(__this, p0, p1, method)
extern "C" t863 * m23984_gshared (t3812 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m23984(__this, p0, p1, method) (( t863 * (*) (t3812 *, t9 *, t828 *, MethodInfo*))m23984_gshared)(__this, p0, p1, method)
