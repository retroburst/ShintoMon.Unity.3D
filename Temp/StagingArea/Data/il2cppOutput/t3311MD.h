#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3311;
struct t9;
struct t835;
struct t610;
struct t158;

extern "C" void m19001_gshared (t3311 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m19001(__this, p0, p1, method) (( void (*) (t3311 *, t9 *, t835 *, MethodInfo*))m19001_gshared)(__this, p0, p1, method)
extern "C" void m19002_gshared (t3311 * __this, t610 * p0, MethodInfo* method);
#define m19002(__this, p0, method) (( void (*) (t3311 *, t610 *, MethodInfo*))m19002_gshared)(__this, p0, method)
extern "C" void m19003_gshared (t3311 * __this, t158* p0, MethodInfo* method);
#define m19003(__this, p0, method) (( void (*) (t3311 *, t158*, MethodInfo*))m19003_gshared)(__this, p0, method)
extern "C" bool m19004_gshared (t3311 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m19004(__this, p0, p1, method) (( bool (*) (t3311 *, t9 *, t835 *, MethodInfo*))m19004_gshared)(__this, p0, p1, method)
