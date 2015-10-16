#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3464;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t587.h"

extern "C" void m20813_gshared (t3464 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20813(__this, p0, p1, method) (( void (*) (t3464 *, t9 *, t58, MethodInfo*))m20813_gshared)(__this, p0, p1, method)
extern "C" bool m20814_gshared (t3464 * __this, t587  p0, MethodInfo* method);
#define m20814(__this, p0, method) (( bool (*) (t3464 *, t587 , MethodInfo*))m20814_gshared)(__this, p0, method)
extern "C" t9 * m20815_gshared (t3464 * __this, t587  p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m20815(__this, p0, p1, p2, method) (( t9 * (*) (t3464 *, t587 , t463 *, t9 *, MethodInfo*))m20815_gshared)(__this, p0, p1, p2, method)
extern "C" bool m20816_gshared (t3464 * __this, t9 * p0, MethodInfo* method);
#define m20816(__this, p0, method) (( bool (*) (t3464 *, t9 *, MethodInfo*))m20816_gshared)(__this, p0, method)
