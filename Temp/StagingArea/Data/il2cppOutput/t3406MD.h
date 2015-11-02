#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3406;
struct t9;
struct t121;
#include "t3405.h"

extern "C" void m19958_gshared (t3406 * __this, t121 * p0, MethodInfo* method);
#define m19958(__this, p0, method) (( void (*) (t3406 *, t121 *, MethodInfo*))m19958_gshared)(__this, p0, method)
extern "C" t9 * m19959_gshared (t3406 * __this, MethodInfo* method);
#define m19959(__this, method) (( t9 * (*) (t3406 *, MethodInfo*))m19959_gshared)(__this, method)
extern "C" void m19960_gshared (t3406 * __this, MethodInfo* method);
#define m19960(__this, method) (( void (*) (t3406 *, MethodInfo*))m19960_gshared)(__this, method)
extern "C" bool m19961_gshared (t3406 * __this, MethodInfo* method);
#define m19961(__this, method) (( bool (*) (t3406 *, MethodInfo*))m19961_gshared)(__this, method)
extern "C" t3405  m19962_gshared (t3406 * __this, MethodInfo* method);
#define m19962(__this, method) (( t3405  (*) (t3406 *, MethodInfo*))m19962_gshared)(__this, method)
