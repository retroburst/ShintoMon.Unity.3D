#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3857;
struct t9;
struct t121;
#include "t1299.h"

extern "C" void m24361_gshared (t3857 * __this, t121 * p0, MethodInfo* method);
#define m24361(__this, p0, method) (( void (*) (t3857 *, t121 *, MethodInfo*))m24361_gshared)(__this, p0, method)
extern "C" t9 * m24362_gshared (t3857 * __this, MethodInfo* method);
#define m24362(__this, method) (( t9 * (*) (t3857 *, MethodInfo*))m24362_gshared)(__this, method)
extern "C" void m24363_gshared (t3857 * __this, MethodInfo* method);
#define m24363(__this, method) (( void (*) (t3857 *, MethodInfo*))m24363_gshared)(__this, method)
extern "C" bool m24364_gshared (t3857 * __this, MethodInfo* method);
#define m24364(__this, method) (( bool (*) (t3857 *, MethodInfo*))m24364_gshared)(__this, method)
extern "C" t1299  m24365_gshared (t3857 * __this, MethodInfo* method);
#define m24365(__this, method) (( t1299  (*) (t3857 *, MethodInfo*))m24365_gshared)(__this, method)
