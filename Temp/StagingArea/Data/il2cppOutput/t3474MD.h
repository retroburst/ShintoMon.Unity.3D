#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3474;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t586.h"

extern "C" void m20961_gshared (t3474 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20961(__this, p0, p1, method) (( void (*) (t3474 *, t9 *, t58, MethodInfo*))m20961_gshared)(__this, p0, p1, method)
extern "C" bool m20962_gshared (t3474 * __this, t586  p0, MethodInfo* method);
#define m20962(__this, p0, method) (( bool (*) (t3474 *, t586 , MethodInfo*))m20962_gshared)(__this, p0, method)
extern "C" t9 * m20963_gshared (t3474 * __this, t586  p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m20963(__this, p0, p1, p2, method) (( t9 * (*) (t3474 *, t586 , t463 *, t9 *, MethodInfo*))m20963_gshared)(__this, p0, p1, p2, method)
extern "C" bool m20964_gshared (t3474 * __this, t9 * p0, MethodInfo* method);
#define m20964(__this, p0, method) (( bool (*) (t3474 *, t9 *, MethodInfo*))m20964_gshared)(__this, p0, method)
