#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3501;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t594.h"

extern "C" void m21031_gshared (t3501 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21031(__this, p0, p1, method) (( void (*) (t3501 *, t9 *, t58, MethodInfo*))m21031_gshared)(__this, p0, p1, method)
extern "C" int32_t m21032_gshared (t3501 * __this, t594  p0, t594  p1, MethodInfo* method);
#define m21032(__this, p0, p1, method) (( int32_t (*) (t3501 *, t594 , t594 , MethodInfo*))m21032_gshared)(__this, p0, p1, method)
extern "C" t9 * m21033_gshared (t3501 * __this, t594  p0, t594  p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m21033(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3501 *, t594 , t594 , t470 *, t9 *, MethodInfo*))m21033_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m21034_gshared (t3501 * __this, t9 * p0, MethodInfo* method);
#define m21034(__this, p0, method) (( int32_t (*) (t3501 *, t9 *, MethodInfo*))m21034_gshared)(__this, p0, method)
