#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3501;
struct t9;
struct t121;
#include "t3500.h"

extern "C" void m21202_gshared (t3501 * __this, t121 * p0, MethodInfo* method);
#define m21202(__this, p0, method) (( void (*) (t3501 *, t121 *, MethodInfo*))m21202_gshared)(__this, p0, method)
extern "C" t9 * m21203_gshared (t3501 * __this, MethodInfo* method);
#define m21203(__this, method) (( t9 * (*) (t3501 *, MethodInfo*))m21203_gshared)(__this, method)
extern "C" void m21204_gshared (t3501 * __this, MethodInfo* method);
#define m21204(__this, method) (( void (*) (t3501 *, MethodInfo*))m21204_gshared)(__this, method)
extern "C" bool m21205_gshared (t3501 * __this, MethodInfo* method);
#define m21205(__this, method) (( bool (*) (t3501 *, MethodInfo*))m21205_gshared)(__this, method)
extern "C" t3500  m21206_gshared (t3501 * __this, MethodInfo* method);
#define m21206(__this, method) (( t3500  (*) (t3501 *, MethodInfo*))m21206_gshared)(__this, method)
