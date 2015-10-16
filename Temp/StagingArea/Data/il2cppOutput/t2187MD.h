#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2187;
#include "t910.h"

extern "C" void m12110_gshared (t2187 * __this, MethodInfo* method);
#define m12110(__this, method) (( void (*) (t2187 *, MethodInfo*))m12110_gshared)(__this, method)
extern "C" int32_t m24690_gshared (t2187 * __this, t910  p0, MethodInfo* method);
#define m24690(__this, p0, method) (( int32_t (*) (t2187 *, t910 , MethodInfo*))m24690_gshared)(__this, p0, method)
extern "C" bool m24691_gshared (t2187 * __this, t910  p0, t910  p1, MethodInfo* method);
#define m24691(__this, p0, p1, method) (( bool (*) (t2187 *, t910 , t910 , MethodInfo*))m24691_gshared)(__this, p0, p1, method)
