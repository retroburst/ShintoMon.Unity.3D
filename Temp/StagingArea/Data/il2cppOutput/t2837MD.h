#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2837;
struct t9;
struct t121;
#include "t154.h"

extern "C" void m14121_gshared (t2837 * __this, t121 * p0, MethodInfo* method);
#define m14121(__this, p0, method) (( void (*) (t2837 *, t121 *, MethodInfo*))m14121_gshared)(__this, p0, method)
extern "C" t9 * m14122_gshared (t2837 * __this, MethodInfo* method);
#define m14122(__this, method) (( t9 * (*) (t2837 *, MethodInfo*))m14122_gshared)(__this, method)
extern "C" void m14123_gshared (t2837 * __this, MethodInfo* method);
#define m14123(__this, method) (( void (*) (t2837 *, MethodInfo*))m14123_gshared)(__this, method)
extern "C" bool m14124_gshared (t2837 * __this, MethodInfo* method);
#define m14124(__this, method) (( bool (*) (t2837 *, MethodInfo*))m14124_gshared)(__this, method)
extern "C" t154  m14125_gshared (t2837 * __this, MethodInfo* method);
#define m14125(__this, method) (( t154  (*) (t2837 *, MethodInfo*))m14125_gshared)(__this, method)
