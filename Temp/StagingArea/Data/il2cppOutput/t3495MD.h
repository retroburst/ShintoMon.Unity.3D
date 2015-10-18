#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3495;
struct t9;
#include "t594.h"

extern "C" void m21009_gshared (t3495 * __this, MethodInfo* method);
#define m21009(__this, method) (( void (*) (t3495 *, MethodInfo*))m21009_gshared)(__this, method)
extern "C" void m21010_gshared (t9 * __this , MethodInfo* method);
#define m21010(__this , method) (( void (*) (t9 * , MethodInfo*))m21010_gshared)(__this , method)
extern "C" int32_t m21011_gshared (t3495 * __this, t9 * p0, MethodInfo* method);
#define m21011(__this, p0, method) (( int32_t (*) (t3495 *, t9 *, MethodInfo*))m21011_gshared)(__this, p0, method)
extern "C" bool m21012_gshared (t3495 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21012(__this, p0, p1, method) (( bool (*) (t3495 *, t9 *, t9 *, MethodInfo*))m21012_gshared)(__this, p0, p1, method)
extern "C" t3495 * m21013_gshared (t9 * __this , MethodInfo* method);
#define m21013(__this , method) (( t3495 * (*) (t9 * , MethodInfo*))m21013_gshared)(__this , method)
