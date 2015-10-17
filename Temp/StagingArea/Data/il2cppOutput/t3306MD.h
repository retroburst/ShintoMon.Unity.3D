#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3306;
struct t9;
struct t828;
struct t603;
struct t158;

extern "C" void m18966_gshared (t3306 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m18966(__this, p0, p1, method) (( void (*) (t3306 *, t9 *, t828 *, MethodInfo*))m18966_gshared)(__this, p0, p1, method)
extern "C" void m18967_gshared (t3306 * __this, t603 * p0, MethodInfo* method);
#define m18967(__this, p0, method) (( void (*) (t3306 *, t603 *, MethodInfo*))m18967_gshared)(__this, p0, method)
extern "C" void m18968_gshared (t3306 * __this, t158* p0, MethodInfo* method);
#define m18968(__this, p0, method) (( void (*) (t3306 *, t158*, MethodInfo*))m18968_gshared)(__this, p0, method)
extern "C" bool m18969_gshared (t3306 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m18969(__this, p0, p1, method) (( bool (*) (t3306 *, t9 *, t828 *, MethodInfo*))m18969_gshared)(__this, p0, p1, method)
