#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3301;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3276.h"

extern "C" void m18945_gshared (t3301 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18945(__this, p0, p1, method) (( void (*) (t3301 *, t9 *, t58, MethodInfo*))m18945_gshared)(__this, p0, p1, method)
extern "C" t3276  m18947_gshared (t3301 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18947(__this, p0, p1, method) (( t3276  (*) (t3301 *, t9 *, t9 *, MethodInfo*))m18947_gshared)(__this, p0, p1, method)
extern "C" t9 * m18949_gshared (t3301 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m18949(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3301 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m18949_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3276  m18951_gshared (t3301 * __this, t9 * p0, MethodInfo* method);
#define m18951(__this, p0, method) (( t3276  (*) (t3301 *, t9 *, MethodInfo*))m18951_gshared)(__this, p0, method)
