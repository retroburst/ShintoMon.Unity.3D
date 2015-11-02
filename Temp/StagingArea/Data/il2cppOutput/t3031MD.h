#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3031;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3019.h"

extern "C" void m15938_gshared (t3031 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15938(__this, p0, p1, method) (( void (*) (t3031 *, t9 *, t58, MethodInfo*))m15938_gshared)(__this, p0, p1, method)
extern "C" t3019  m15940_gshared (t3031 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15940(__this, p0, p1, method) (( t3019  (*) (t3031 *, int32_t, t9 *, MethodInfo*))m15940_gshared)(__this, p0, p1, method)
extern "C" t9 * m15942_gshared (t3031 * __this, int32_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m15942(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3031 *, int32_t, t9 *, t477 *, t9 *, MethodInfo*))m15942_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3019  m15944_gshared (t3031 * __this, t9 * p0, MethodInfo* method);
#define m15944(__this, p0, method) (( t3019  (*) (t3031 *, t9 *, MethodInfo*))m15944_gshared)(__this, p0, method)
