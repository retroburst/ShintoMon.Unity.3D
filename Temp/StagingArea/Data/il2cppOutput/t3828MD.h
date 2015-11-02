#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3828;
struct t9;
struct t121;
#include "t3827.h"

extern "C" void m24120_gshared (t3828 * __this, t121 * p0, MethodInfo* method);
#define m24120(__this, p0, method) (( void (*) (t3828 *, t121 *, MethodInfo*))m24120_gshared)(__this, p0, method)
extern "C" t9 * m24121_gshared (t3828 * __this, MethodInfo* method);
#define m24121(__this, method) (( t9 * (*) (t3828 *, MethodInfo*))m24121_gshared)(__this, method)
extern "C" void m24122_gshared (t3828 * __this, MethodInfo* method);
#define m24122(__this, method) (( void (*) (t3828 *, MethodInfo*))m24122_gshared)(__this, method)
extern "C" bool m24123_gshared (t3828 * __this, MethodInfo* method);
#define m24123(__this, method) (( bool (*) (t3828 *, MethodInfo*))m24123_gshared)(__this, method)
extern "C" t3827  m24124_gshared (t3828 * __this, MethodInfo* method);
#define m24124(__this, method) (( t3827  (*) (t3828 *, MethodInfo*))m24124_gshared)(__this, method)
