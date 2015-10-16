#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3103;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t559.h"

extern "C" void m17011_gshared (t3103 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17011(__this, p0, p1, method) (( void (*) (t3103 *, t9 *, t58, MethodInfo*))m17011_gshared)(__this, p0, p1, method)
extern "C" t559  m17013_gshared (t3103 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m17013(__this, p0, p1, method) (( t559  (*) (t3103 *, int32_t, t9 *, MethodInfo*))m17013_gshared)(__this, p0, p1, method)
extern "C" t9 * m17015_gshared (t3103 * __this, int32_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m17015(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3103 *, int32_t, t9 *, t463 *, t9 *, MethodInfo*))m17015_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t559  m17017_gshared (t3103 * __this, t9 * p0, MethodInfo* method);
#define m17017(__this, p0, method) (( t559  (*) (t3103 *, t9 *, MethodInfo*))m17017_gshared)(__this, p0, method)
