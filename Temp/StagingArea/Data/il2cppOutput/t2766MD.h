#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2766;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t2755.h"

extern "C" void m13422_gshared (t2766 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13422(__this, p0, p1, method) (( void (*) (t2766 *, t9 *, t58, MethodInfo*))m13422_gshared)(__this, p0, p1, method)
extern "C" t2755  m13424_gshared (t2766 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13424(__this, p0, p1, method) (( t2755  (*) (t2766 *, t9 *, t9 *, MethodInfo*))m13424_gshared)(__this, p0, p1, method)
extern "C" t9 * m13426_gshared (t2766 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m13426(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2766 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m13426_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2755  m13428_gshared (t2766 * __this, t9 * p0, MethodInfo* method);
#define m13428(__this, p0, method) (( t2755  (*) (t2766 *, t9 *, MethodInfo*))m13428_gshared)(__this, p0, method)
