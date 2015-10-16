#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3203;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t452.h"

extern "C" void m18094_gshared (t3203 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18094(__this, p0, p1, method) (( void (*) (t3203 *, t9 *, t58, MethodInfo*))m18094_gshared)(__this, p0, p1, method)
extern "C" bool m18095_gshared (t3203 * __this, t452  p0, MethodInfo* method);
#define m18095(__this, p0, method) (( bool (*) (t3203 *, t452 , MethodInfo*))m18095_gshared)(__this, p0, method)
extern "C" t9 * m18096_gshared (t3203 * __this, t452  p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m18096(__this, p0, p1, p2, method) (( t9 * (*) (t3203 *, t452 , t463 *, t9 *, MethodInfo*))m18096_gshared)(__this, p0, p1, p2, method)
extern "C" bool m18097_gshared (t3203 * __this, t9 * p0, MethodInfo* method);
#define m18097(__this, p0, method) (( bool (*) (t3203 *, t9 *, MethodInfo*))m18097_gshared)(__this, p0, method)
