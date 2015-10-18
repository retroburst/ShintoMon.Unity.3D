#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3497;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t594.h"

extern "C" void m21017_gshared (t3497 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21017(__this, p0, p1, method) (( void (*) (t3497 *, t9 *, t58, MethodInfo*))m21017_gshared)(__this, p0, p1, method)
extern "C" bool m21018_gshared (t3497 * __this, t594  p0, MethodInfo* method);
#define m21018(__this, p0, method) (( bool (*) (t3497 *, t594 , MethodInfo*))m21018_gshared)(__this, p0, method)
extern "C" t9 * m21019_gshared (t3497 * __this, t594  p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m21019(__this, p0, p1, p2, method) (( t9 * (*) (t3497 *, t594 , t470 *, t9 *, MethodInfo*))m21019_gshared)(__this, p0, p1, p2, method)
extern "C" bool m21020_gshared (t3497 * __this, t9 * p0, MethodInfo* method);
#define m21020(__this, p0, method) (( bool (*) (t3497 *, t9 *, MethodInfo*))m21020_gshared)(__this, p0, method)
