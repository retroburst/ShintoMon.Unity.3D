#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3313;
struct t9;
struct t835;
struct t3312;
struct t158;

extern "C" void m19012_gshared (t3313 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m19012(__this, p0, p1, method) (( void (*) (t3313 *, t9 *, t835 *, MethodInfo*))m19012_gshared)(__this, p0, p1, method)
extern "C" void m19013_gshared (t3313 * __this, t3312 * p0, MethodInfo* method);
#define m19013(__this, p0, method) (( void (*) (t3313 *, t3312 *, MethodInfo*))m19013_gshared)(__this, p0, method)
extern "C" void m19014_gshared (t3313 * __this, t158* p0, MethodInfo* method);
#define m19014(__this, p0, method) (( void (*) (t3313 *, t158*, MethodInfo*))m19014_gshared)(__this, p0, method)
extern "C" bool m19015_gshared (t3313 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m19015(__this, p0, p1, method) (( bool (*) (t3313 *, t9 *, t835 *, MethodInfo*))m19015_gshared)(__this, p0, p1, method)
