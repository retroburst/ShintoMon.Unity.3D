#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2822;
struct t9;
struct t121;
#include "t154.h"

extern "C" void m14053_gshared (t2822 * __this, t121 * p0, MethodInfo* method);
#define m14053(__this, p0, method) (( void (*) (t2822 *, t121 *, MethodInfo*))m14053_gshared)(__this, p0, method)
extern "C" t9 * m14054_gshared (t2822 * __this, MethodInfo* method);
#define m14054(__this, method) (( t9 * (*) (t2822 *, MethodInfo*))m14054_gshared)(__this, method)
extern "C" void m14055_gshared (t2822 * __this, MethodInfo* method);
#define m14055(__this, method) (( void (*) (t2822 *, MethodInfo*))m14055_gshared)(__this, method)
extern "C" bool m14056_gshared (t2822 * __this, MethodInfo* method);
#define m14056(__this, method) (( bool (*) (t2822 *, MethodInfo*))m14056_gshared)(__this, method)
extern "C" t154  m14057_gshared (t2822 * __this, MethodInfo* method);
#define m14057(__this, method) (( t154  (*) (t2822 *, MethodInfo*))m14057_gshared)(__this, method)
