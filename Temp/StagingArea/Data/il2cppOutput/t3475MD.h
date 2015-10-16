#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3475;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t586.h"

extern "C" void m20965_gshared (t3475 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20965(__this, p0, p1, method) (( void (*) (t3475 *, t9 *, t58, MethodInfo*))m20965_gshared)(__this, p0, p1, method)
extern "C" void m20966_gshared (t3475 * __this, t586  p0, MethodInfo* method);
#define m20966(__this, p0, method) (( void (*) (t3475 *, t586 , MethodInfo*))m20966_gshared)(__this, p0, method)
extern "C" t9 * m20967_gshared (t3475 * __this, t586  p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m20967(__this, p0, p1, p2, method) (( t9 * (*) (t3475 *, t586 , t463 *, t9 *, MethodInfo*))m20967_gshared)(__this, p0, p1, p2, method)
extern "C" void m20968_gshared (t3475 * __this, t9 * p0, MethodInfo* method);
#define m20968(__this, p0, method) (( void (*) (t3475 *, t9 *, MethodInfo*))m20968_gshared)(__this, p0, method)
