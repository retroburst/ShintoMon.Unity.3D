#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t404;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t43.h"

extern "C" void m2607_gshared (t404 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2607(__this, p0, p1, method) (( void (*) (t404 *, t9 *, t58, MethodInfo*))m2607_gshared)(__this, p0, p1, method)
extern "C" void m17197_gshared (t404 * __this, t43  p0, MethodInfo* method);
#define m17197(__this, p0, method) (( void (*) (t404 *, t43 , MethodInfo*))m17197_gshared)(__this, p0, method)
extern "C" t9 * m17198_gshared (t404 * __this, t43  p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m17198(__this, p0, p1, p2, method) (( t9 * (*) (t404 *, t43 , t463 *, t9 *, MethodInfo*))m17198_gshared)(__this, p0, p1, p2, method)
extern "C" void m17199_gshared (t404 * __this, t9 * p0, MethodInfo* method);
#define m17199(__this, p0, method) (( void (*) (t404 *, t9 *, MethodInfo*))m17199_gshared)(__this, p0, method)
