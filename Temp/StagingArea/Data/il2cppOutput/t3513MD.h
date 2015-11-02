#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3513;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t600.h"

extern "C" void m21203_gshared (t3513 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21203(__this, p0, p1, method) (( void (*) (t3513 *, t9 *, t58, MethodInfo*))m21203_gshared)(__this, p0, p1, method)
extern "C" void m21204_gshared (t3513 * __this, t600  p0, MethodInfo* method);
#define m21204(__this, p0, method) (( void (*) (t3513 *, t600 , MethodInfo*))m21204_gshared)(__this, p0, method)
extern "C" t9 * m21205_gshared (t3513 * __this, t600  p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m21205(__this, p0, p1, p2, method) (( t9 * (*) (t3513 *, t600 , t477 *, t9 *, MethodInfo*))m21205_gshared)(__this, p0, p1, p2, method)
extern "C" void m21206_gshared (t3513 * __this, t9 * p0, MethodInfo* method);
#define m21206(__this, p0, method) (( void (*) (t3513 *, t9 *, MethodInfo*))m21206_gshared)(__this, p0, method)
