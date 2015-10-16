#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3178;
struct t9;
struct t121;
#include "t3166.h"

extern "C" void m17844_gshared (t3178 * __this, t121 * p0, MethodInfo* method);
#define m17844(__this, p0, method) (( void (*) (t3178 *, t121 *, MethodInfo*))m17844_gshared)(__this, p0, method)
extern "C" t9 * m17845_gshared (t3178 * __this, MethodInfo* method);
#define m17845(__this, method) (( t9 * (*) (t3178 *, MethodInfo*))m17845_gshared)(__this, method)
extern "C" void m17846_gshared (t3178 * __this, MethodInfo* method);
#define m17846(__this, method) (( void (*) (t3178 *, MethodInfo*))m17846_gshared)(__this, method)
extern "C" bool m17847_gshared (t3178 * __this, MethodInfo* method);
#define m17847(__this, method) (( bool (*) (t3178 *, MethodInfo*))m17847_gshared)(__this, method)
extern "C" t3166  m17848_gshared (t3178 * __this, MethodInfo* method);
#define m17848(__this, method) (( t3166  (*) (t3178 *, MethodInfo*))m17848_gshared)(__this, method)
