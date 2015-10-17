#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3624;
struct t9;
struct t121;
#include "t3623.h"

extern "C" void m22277_gshared (t3624 * __this, t121 * p0, MethodInfo* method);
#define m22277(__this, p0, method) (( void (*) (t3624 *, t121 *, MethodInfo*))m22277_gshared)(__this, p0, method)
extern "C" t9 * m22278_gshared (t3624 * __this, MethodInfo* method);
#define m22278(__this, method) (( t9 * (*) (t3624 *, MethodInfo*))m22278_gshared)(__this, method)
extern "C" void m22279_gshared (t3624 * __this, MethodInfo* method);
#define m22279(__this, method) (( void (*) (t3624 *, MethodInfo*))m22279_gshared)(__this, method)
extern "C" bool m22280_gshared (t3624 * __this, MethodInfo* method);
#define m22280(__this, method) (( bool (*) (t3624 *, MethodInfo*))m22280_gshared)(__this, method)
extern "C" t3623  m22281_gshared (t3624 * __this, MethodInfo* method);
#define m22281(__this, method) (( t3623  (*) (t3624 *, MethodInfo*))m22281_gshared)(__this, method)
