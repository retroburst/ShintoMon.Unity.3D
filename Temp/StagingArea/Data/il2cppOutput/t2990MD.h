#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2990;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m15650_gshared (t2990 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15650(__this, p0, p1, method) (( void (*) (t2990 *, t9 *, t58, MethodInfo*))m15650_gshared)(__this, p0, p1, method)
extern "C" t9 * m15651_gshared (t2990 * __this, MethodInfo* method);
#define m15651(__this, method) (( t9 * (*) (t2990 *, MethodInfo*))m15651_gshared)(__this, method)
extern "C" t9 * m15653_gshared (t2990 * __this, t470 * p0, t9 * p1, MethodInfo* method);
#define m15653(__this, p0, p1, method) (( t9 * (*) (t2990 *, t470 *, t9 *, MethodInfo*))m15653_gshared)(__this, p0, p1, method)
extern "C" t9 * m15655_gshared (t2990 * __this, t9 * p0, MethodInfo* method);
#define m15655(__this, p0, method) (( t9 * (*) (t2990 *, t9 *, MethodInfo*))m15655_gshared)(__this, p0, method)
