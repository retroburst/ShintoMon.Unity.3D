#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3510;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3500.h"

extern "C" void m21270_gshared (t3510 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21270(__this, p0, p1, method) (( void (*) (t3510 *, t9 *, t58, MethodInfo*))m21270_gshared)(__this, p0, p1, method)
extern "C" t3500  m21272_gshared (t3510 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21272(__this, p0, p1, method) (( t3500  (*) (t3510 *, t9 *, int64_t, MethodInfo*))m21272_gshared)(__this, p0, p1, method)
extern "C" t9 * m21274_gshared (t3510 * __this, t9 * p0, int64_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m21274(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3510 *, t9 *, int64_t, t463 *, t9 *, MethodInfo*))m21274_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3500  m21276_gshared (t3510 * __this, t9 * p0, MethodInfo* method);
#define m21276(__this, p0, method) (( t3500  (*) (t3510 *, t9 *, MethodInfo*))m21276_gshared)(__this, p0, method)
