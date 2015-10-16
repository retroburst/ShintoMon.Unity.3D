#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3575;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3563.h"

extern "C" void m21885_gshared (t3575 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21885(__this, p0, p1, method) (( void (*) (t3575 *, t9 *, t58, MethodInfo*))m21885_gshared)(__this, p0, p1, method)
extern "C" t3563  m21887_gshared (t3575 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21887(__this, p0, p1, method) (( t3563  (*) (t3575 *, uint64_t, t9 *, MethodInfo*))m21887_gshared)(__this, p0, p1, method)
extern "C" t9 * m21889_gshared (t3575 * __this, uint64_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m21889(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3575 *, uint64_t, t9 *, t463 *, t9 *, MethodInfo*))m21889_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3563  m21891_gshared (t3575 * __this, t9 * p0, MethodInfo* method);
#define m21891(__this, p0, method) (( t3563  (*) (t3575 *, t9 *, MethodInfo*))m21891_gshared)(__this, p0, method)
