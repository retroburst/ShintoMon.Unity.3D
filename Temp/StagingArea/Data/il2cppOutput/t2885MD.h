#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2885;
struct t9;
struct t121;
#include "t2883.h"

extern "C" void m14693_gshared (t2885 * __this, t121 * p0, MethodInfo* method);
#define m14693(__this, p0, method) (( void (*) (t2885 *, t121 *, MethodInfo*))m14693_gshared)(__this, p0, method)
extern "C" t9 * m14694_gshared (t2885 * __this, MethodInfo* method);
#define m14694(__this, method) (( t9 * (*) (t2885 *, MethodInfo*))m14694_gshared)(__this, method)
extern "C" void m14695_gshared (t2885 * __this, MethodInfo* method);
#define m14695(__this, method) (( void (*) (t2885 *, MethodInfo*))m14695_gshared)(__this, method)
extern "C" bool m14696_gshared (t2885 * __this, MethodInfo* method);
#define m14696(__this, method) (( bool (*) (t2885 *, MethodInfo*))m14696_gshared)(__this, method)
extern "C" t2883  m14697_gshared (t2885 * __this, MethodInfo* method);
#define m14697(__this, method) (( t2883  (*) (t2885 *, MethodInfo*))m14697_gshared)(__this, method)
