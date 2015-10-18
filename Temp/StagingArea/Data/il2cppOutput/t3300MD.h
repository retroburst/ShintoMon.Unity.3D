#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3300;
struct t9;
struct t121;
#include "t28.h"

extern "C" void m18932_gshared (t3300 * __this, t121 * p0, MethodInfo* method);
#define m18932(__this, p0, method) (( void (*) (t3300 *, t121 *, MethodInfo*))m18932_gshared)(__this, p0, method)
extern "C" t9 * m18933_gshared (t3300 * __this, MethodInfo* method);
#define m18933(__this, method) (( t9 * (*) (t3300 *, MethodInfo*))m18933_gshared)(__this, method)
extern "C" void m18934_gshared (t3300 * __this, MethodInfo* method);
#define m18934(__this, method) (( void (*) (t3300 *, MethodInfo*))m18934_gshared)(__this, method)
extern "C" bool m18935_gshared (t3300 * __this, MethodInfo* method);
#define m18935(__this, method) (( bool (*) (t3300 *, MethodInfo*))m18935_gshared)(__this, method)
extern "C" t28  m18936_gshared (t3300 * __this, MethodInfo* method);
#define m18936(__this, method) (( t28  (*) (t3300 *, MethodInfo*))m18936_gshared)(__this, method)
