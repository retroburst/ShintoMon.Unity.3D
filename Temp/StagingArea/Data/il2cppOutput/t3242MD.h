#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3242;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t466.h"

extern "C" void m18337_gshared (t3242 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18337(__this, p0, p1, method) (( void (*) (t3242 *, t9 *, t58, MethodInfo*))m18337_gshared)(__this, p0, p1, method)
extern "C" bool m18338_gshared (t3242 * __this, t466  p0, MethodInfo* method);
#define m18338(__this, p0, method) (( bool (*) (t3242 *, t466 , MethodInfo*))m18338_gshared)(__this, p0, method)
extern "C" t9 * m18339_gshared (t3242 * __this, t466  p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m18339(__this, p0, p1, p2, method) (( t9 * (*) (t3242 *, t466 , t477 *, t9 *, MethodInfo*))m18339_gshared)(__this, p0, p1, p2, method)
extern "C" bool m18340_gshared (t3242 * __this, t9 * p0, MethodInfo* method);
#define m18340(__this, p0, method) (( bool (*) (t3242 *, t9 *, MethodInfo*))m18340_gshared)(__this, p0, method)
