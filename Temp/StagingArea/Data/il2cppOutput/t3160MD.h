#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3160;
struct t9;
struct t121;
#include "t164.h"

extern "C" void m17433_gshared (t3160 * __this, t121 * p0, MethodInfo* method);
#define m17433(__this, p0, method) (( void (*) (t3160 *, t121 *, MethodInfo*))m17433_gshared)(__this, p0, method)
extern "C" t9 * m17434_gshared (t3160 * __this, MethodInfo* method);
#define m17434(__this, method) (( t9 * (*) (t3160 *, MethodInfo*))m17434_gshared)(__this, method)
extern "C" void m17435_gshared (t3160 * __this, MethodInfo* method);
#define m17435(__this, method) (( void (*) (t3160 *, MethodInfo*))m17435_gshared)(__this, method)
extern "C" bool m17436_gshared (t3160 * __this, MethodInfo* method);
#define m17436(__this, method) (( bool (*) (t3160 *, MethodInfo*))m17436_gshared)(__this, method)
extern "C" t164  m17437_gshared (t3160 * __this, MethodInfo* method);
#define m17437(__this, method) (( t164  (*) (t3160 *, MethodInfo*))m17437_gshared)(__this, method)
