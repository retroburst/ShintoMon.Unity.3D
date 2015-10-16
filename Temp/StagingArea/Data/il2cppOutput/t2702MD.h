#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2702;
struct t9;
struct t121;
#include "t1659.h"

extern "C" void m13000_gshared (t2702 * __this, t121 * p0, MethodInfo* method);
#define m13000(__this, p0, method) (( void (*) (t2702 *, t121 *, MethodInfo*))m13000_gshared)(__this, p0, method)
extern "C" t9 * m13001_gshared (t2702 * __this, MethodInfo* method);
#define m13001(__this, method) (( t9 * (*) (t2702 *, MethodInfo*))m13001_gshared)(__this, method)
extern "C" void m13002_gshared (t2702 * __this, MethodInfo* method);
#define m13002(__this, method) (( void (*) (t2702 *, MethodInfo*))m13002_gshared)(__this, method)
extern "C" bool m13003_gshared (t2702 * __this, MethodInfo* method);
#define m13003(__this, method) (( bool (*) (t2702 *, MethodInfo*))m13003_gshared)(__this, method)
extern "C" t1659  m13004_gshared (t2702 * __this, MethodInfo* method);
#define m13004(__this, method) (( t1659  (*) (t2702 *, MethodInfo*))m13004_gshared)(__this, method)
