#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3921;
struct t9;
struct t121;
#include "t910.h"

extern "C" void m24676_gshared (t3921 * __this, t121 * p0, MethodInfo* method);
#define m24676(__this, p0, method) (( void (*) (t3921 *, t121 *, MethodInfo*))m24676_gshared)(__this, p0, method)
extern "C" t9 * m24677_gshared (t3921 * __this, MethodInfo* method);
#define m24677(__this, method) (( t9 * (*) (t3921 *, MethodInfo*))m24677_gshared)(__this, method)
extern "C" void m24678_gshared (t3921 * __this, MethodInfo* method);
#define m24678(__this, method) (( void (*) (t3921 *, MethodInfo*))m24678_gshared)(__this, method)
extern "C" bool m24679_gshared (t3921 * __this, MethodInfo* method);
#define m24679(__this, method) (( bool (*) (t3921 *, MethodInfo*))m24679_gshared)(__this, method)
extern "C" t910  m24680_gshared (t3921 * __this, MethodInfo* method);
#define m24680(__this, method) (( t910  (*) (t3921 *, MethodInfo*))m24680_gshared)(__this, method)
