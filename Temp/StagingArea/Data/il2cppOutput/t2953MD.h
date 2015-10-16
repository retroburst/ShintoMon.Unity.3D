#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2953;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t2942.h"

extern "C" void m15387_gshared (t2953 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15387(__this, p0, p1, method) (( void (*) (t2953 *, t9 *, t58, MethodInfo*))m15387_gshared)(__this, p0, p1, method)
extern "C" t2942  m15389_gshared (t2953 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m15389(__this, p0, p1, method) (( t2942  (*) (t2953 *, t9 *, t9 *, MethodInfo*))m15389_gshared)(__this, p0, p1, method)
extern "C" t9 * m15391_gshared (t2953 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m15391(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2953 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m15391_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2942  m15393_gshared (t2953 * __this, t9 * p0, MethodInfo* method);
#define m15393(__this, p0, method) (( t2942  (*) (t2953 *, t9 *, MethodInfo*))m15393_gshared)(__this, p0, method)
