#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3162;
struct t9;
struct t121;
#include "t3161.h"

extern "C" void m17494_gshared (t3162 * __this, t121 * p0, MethodInfo* method);
#define m17494(__this, p0, method) (( void (*) (t3162 *, t121 *, MethodInfo*))m17494_gshared)(__this, p0, method)
extern "C" t9 * m17495_gshared (t3162 * __this, MethodInfo* method);
#define m17495(__this, method) (( t9 * (*) (t3162 *, MethodInfo*))m17495_gshared)(__this, method)
extern "C" void m17496_gshared (t3162 * __this, MethodInfo* method);
#define m17496(__this, method) (( void (*) (t3162 *, MethodInfo*))m17496_gshared)(__this, method)
extern "C" bool m17497_gshared (t3162 * __this, MethodInfo* method);
#define m17497(__this, method) (( bool (*) (t3162 *, MethodInfo*))m17497_gshared)(__this, method)
extern "C" t3161  m17498_gshared (t3162 * __this, MethodInfo* method);
#define m17498(__this, method) (( t3161  (*) (t3162 *, MethodInfo*))m17498_gshared)(__this, method)
