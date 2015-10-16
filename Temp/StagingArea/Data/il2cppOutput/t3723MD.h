#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3723;
struct t9;
struct t121;
#include "t842.h"

extern "C" void m23286_gshared (t3723 * __this, t121 * p0, MethodInfo* method);
#define m23286(__this, p0, method) (( void (*) (t3723 *, t121 *, MethodInfo*))m23286_gshared)(__this, p0, method)
extern "C" t9 * m23287_gshared (t3723 * __this, MethodInfo* method);
#define m23287(__this, method) (( t9 * (*) (t3723 *, MethodInfo*))m23287_gshared)(__this, method)
extern "C" void m23288_gshared (t3723 * __this, MethodInfo* method);
#define m23288(__this, method) (( void (*) (t3723 *, MethodInfo*))m23288_gshared)(__this, method)
extern "C" bool m23289_gshared (t3723 * __this, MethodInfo* method);
#define m23289(__this, method) (( bool (*) (t3723 *, MethodInfo*))m23289_gshared)(__this, method)
extern "C" t842  m23290_gshared (t3723 * __this, MethodInfo* method);
#define m23290(__this, method) (( t842  (*) (t3723 *, MethodInfo*))m23290_gshared)(__this, method)
