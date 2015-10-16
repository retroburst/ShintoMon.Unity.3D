#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2710;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t2688.h"

extern "C" void m13068_gshared (t2710 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13068(__this, p0, p1, method) (( void (*) (t2710 *, t9 *, t58, MethodInfo*))m13068_gshared)(__this, p0, p1, method)
extern "C" t2688  m13069_gshared (t2710 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13069(__this, p0, p1, method) (( t2688  (*) (t2710 *, t9 *, t9 *, MethodInfo*))m13069_gshared)(__this, p0, p1, method)
extern "C" t9 * m13070_gshared (t2710 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m13070(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2710 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m13070_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2688  m13071_gshared (t2710 * __this, t9 * p0, MethodInfo* method);
#define m13071(__this, p0, method) (( t2688  (*) (t2710 *, t9 *, MethodInfo*))m13071_gshared)(__this, p0, method)
