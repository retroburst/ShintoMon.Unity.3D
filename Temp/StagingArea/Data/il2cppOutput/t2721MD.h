#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2721;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m13104_gshared (t2721 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13104(__this, p0, p1, method) (( void (*) (t2721 *, t9 *, t58, MethodInfo*))m13104_gshared)(__this, p0, p1, method)
extern "C" t9 * m13105_gshared (t2721 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13105(__this, p0, p1, method) (( t9 * (*) (t2721 *, t9 *, t9 *, MethodInfo*))m13105_gshared)(__this, p0, p1, method)
extern "C" t9 * m13106_gshared (t2721 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m13106(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2721 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m13106_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m13107_gshared (t2721 * __this, t9 * p0, MethodInfo* method);
#define m13107(__this, p0, method) (( t9 * (*) (t2721 *, t9 *, MethodInfo*))m13107_gshared)(__this, p0, method)
