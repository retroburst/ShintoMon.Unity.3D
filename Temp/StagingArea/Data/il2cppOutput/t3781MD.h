#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3781;
struct t9;
struct t828;
struct t158;

extern "C" void m23661_gshared (t3781 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m23661(__this, p0, p1, method) (( void (*) (t3781 *, t9 *, t828 *, MethodInfo*))m23661_gshared)(__this, p0, p1, method)
extern "C" void m23662_gshared (t3781 * __this, t158* p0, MethodInfo* method);
#define m23662(__this, p0, method) (( void (*) (t3781 *, t158*, MethodInfo*))m23662_gshared)(__this, p0, method)
extern "C" bool m23663_gshared (t3781 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m23663(__this, p0, p1, method) (( bool (*) (t3781 *, t9 *, t828 *, MethodInfo*))m23663_gshared)(__this, p0, p1, method)
