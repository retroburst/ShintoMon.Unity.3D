#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3679;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t909.h"

extern "C" void m22931_gshared (t3679 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22931(__this, p0, p1, method) (( void (*) (t3679 *, t9 *, t58, MethodInfo*))m22931_gshared)(__this, p0, p1, method)
extern "C" t9 * m22932_gshared (t3679 * __this, t9 * p0, t909  p1, MethodInfo* method);
#define m22932(__this, p0, p1, method) (( t9 * (*) (t3679 *, t9 *, t909 , MethodInfo*))m22932_gshared)(__this, p0, p1, method)
extern "C" t9 * m22933_gshared (t3679 * __this, t9 * p0, t909  p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m22933(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3679 *, t9 *, t909 , t463 *, t9 *, MethodInfo*))m22933_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m22934_gshared (t3679 * __this, t9 * p0, MethodInfo* method);
#define m22934(__this, p0, method) (( t9 * (*) (t3679 *, t9 *, MethodInfo*))m22934_gshared)(__this, p0, method)
