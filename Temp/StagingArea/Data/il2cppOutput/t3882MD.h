#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3882;
struct t9;
struct t121;
#include "t269.h"

extern "C" void m24433_gshared (t3882 * __this, t121 * p0, MethodInfo* method);
#define m24433(__this, p0, method) (( void (*) (t3882 *, t121 *, MethodInfo*))m24433_gshared)(__this, p0, method)
extern "C" t9 * m24434_gshared (t3882 * __this, MethodInfo* method);
#define m24434(__this, method) (( t9 * (*) (t3882 *, MethodInfo*))m24434_gshared)(__this, method)
extern "C" void m24435_gshared (t3882 * __this, MethodInfo* method);
#define m24435(__this, method) (( void (*) (t3882 *, MethodInfo*))m24435_gshared)(__this, method)
extern "C" bool m24436_gshared (t3882 * __this, MethodInfo* method);
#define m24436(__this, method) (( bool (*) (t3882 *, MethodInfo*))m24436_gshared)(__this, method)
extern "C" t269  m24437_gshared (t3882 * __this, MethodInfo* method);
#define m24437(__this, method) (( t269  (*) (t3882 *, MethodInfo*))m24437_gshared)(__this, method)
