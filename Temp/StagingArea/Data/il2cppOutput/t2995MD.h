#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2995;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m15684_gshared (t2995 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15684(__this, p0, p1, method) (( void (*) (t2995 *, t9 *, t58, MethodInfo*))m15684_gshared)(__this, p0, p1, method)
extern "C" t9 * m15685_gshared (t2995 * __this, MethodInfo* method);
#define m15685(__this, method) (( t9 * (*) (t2995 *, MethodInfo*))m15685_gshared)(__this, method)
extern "C" t9 * m15687_gshared (t2995 * __this, t477 * p0, t9 * p1, MethodInfo* method);
#define m15687(__this, p0, p1, method) (( t9 * (*) (t2995 *, t477 *, t9 *, MethodInfo*))m15687_gshared)(__this, p0, p1, method)
extern "C" t9 * m15689_gshared (t2995 * __this, t9 * p0, MethodInfo* method);
#define m15689(__this, p0, method) (( t9 * (*) (t2995 *, t9 *, MethodInfo*))m15689_gshared)(__this, p0, method)
