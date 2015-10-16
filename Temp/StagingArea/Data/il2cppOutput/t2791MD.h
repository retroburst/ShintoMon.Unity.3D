#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2791;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m13825_gshared (t2791 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13825(__this, p0, p1, method) (( void (*) (t2791 *, t9 *, t58, MethodInfo*))m13825_gshared)(__this, p0, p1, method)
extern "C" t9 * m13826_gshared (t2791 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13826(__this, p0, p1, method) (( t9 * (*) (t2791 *, t9 *, uint8_t, MethodInfo*))m13826_gshared)(__this, p0, p1, method)
extern "C" t9 * m13827_gshared (t2791 * __this, t9 * p0, uint8_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m13827(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2791 *, t9 *, uint8_t, t463 *, t9 *, MethodInfo*))m13827_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m13828_gshared (t2791 * __this, t9 * p0, MethodInfo* method);
#define m13828(__this, p0, method) (( t9 * (*) (t2791 *, t9 *, MethodInfo*))m13828_gshared)(__this, p0, method)
