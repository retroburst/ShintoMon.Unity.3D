#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3356;
struct t9;
struct t828;
struct t3355;
struct t158;

extern "C" void m19475_gshared (t3356 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m19475(__this, p0, p1, method) (( void (*) (t3356 *, t9 *, t828 *, MethodInfo*))m19475_gshared)(__this, p0, p1, method)
extern "C" void m19476_gshared (t3356 * __this, t3355 * p0, MethodInfo* method);
#define m19476(__this, p0, method) (( void (*) (t3356 *, t3355 *, MethodInfo*))m19476_gshared)(__this, p0, method)
extern "C" void m19477_gshared (t3356 * __this, t158* p0, MethodInfo* method);
#define m19477(__this, p0, method) (( void (*) (t3356 *, t158*, MethodInfo*))m19477_gshared)(__this, p0, method)
extern "C" bool m19478_gshared (t3356 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m19478(__this, p0, p1, method) (( bool (*) (t3356 *, t9 *, t828 *, MethodInfo*))m19478_gshared)(__this, p0, p1, method)
