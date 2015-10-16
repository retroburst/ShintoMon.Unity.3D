#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3810;
struct t9;
struct t121;
#include "t3809.h"

extern "C" void m24054_gshared (t3810 * __this, t121 * p0, MethodInfo* method);
#define m24054(__this, p0, method) (( void (*) (t3810 *, t121 *, MethodInfo*))m24054_gshared)(__this, p0, method)
extern "C" t9 * m24055_gshared (t3810 * __this, MethodInfo* method);
#define m24055(__this, method) (( t9 * (*) (t3810 *, MethodInfo*))m24055_gshared)(__this, method)
extern "C" void m24056_gshared (t3810 * __this, MethodInfo* method);
#define m24056(__this, method) (( void (*) (t3810 *, MethodInfo*))m24056_gshared)(__this, method)
extern "C" bool m24057_gshared (t3810 * __this, MethodInfo* method);
#define m24057(__this, method) (( bool (*) (t3810 *, MethodInfo*))m24057_gshared)(__this, method)
extern "C" t3809  m24058_gshared (t3810 * __this, MethodInfo* method);
#define m24058(__this, method) (( t3809  (*) (t3810 *, MethodInfo*))m24058_gshared)(__this, method)
