#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3518;
struct t9;
struct t121;

extern "C" void m21302_gshared (t3518 * __this, t121 * p0, MethodInfo* method);
#define m21302(__this, p0, method) (( void (*) (t3518 *, t121 *, MethodInfo*))m21302_gshared)(__this, p0, method)
extern "C" t9 * m21303_gshared (t3518 * __this, MethodInfo* method);
#define m21303(__this, method) (( t9 * (*) (t3518 *, MethodInfo*))m21303_gshared)(__this, method)
extern "C" void m21304_gshared (t3518 * __this, MethodInfo* method);
#define m21304(__this, method) (( void (*) (t3518 *, MethodInfo*))m21304_gshared)(__this, method)
extern "C" bool m21305_gshared (t3518 * __this, MethodInfo* method);
#define m21305(__this, method) (( bool (*) (t3518 *, MethodInfo*))m21305_gshared)(__this, method)
extern "C" int64_t m21306_gshared (t3518 * __this, MethodInfo* method);
#define m21306(__this, method) (( int64_t (*) (t3518 *, MethodInfo*))m21306_gshared)(__this, method)
