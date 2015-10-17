#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2838;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t154.h"

extern "C" void m14143_gshared (t2838 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14143(__this, p0, p1, method) (( void (*) (t2838 *, t9 *, t58, MethodInfo*))m14143_gshared)(__this, p0, p1, method)
extern "C" t154  m14145_gshared (t2838 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m14145(__this, p0, p1, method) (( t154  (*) (t2838 *, t9 *, t9 *, MethodInfo*))m14145_gshared)(__this, p0, p1, method)
extern "C" t9 * m14147_gshared (t2838 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m14147(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2838 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m14147_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t154  m14149_gshared (t2838 * __this, t9 * p0, MethodInfo* method);
#define m14149(__this, p0, method) (( t154  (*) (t2838 *, t9 *, MethodInfo*))m14149_gshared)(__this, p0, method)
