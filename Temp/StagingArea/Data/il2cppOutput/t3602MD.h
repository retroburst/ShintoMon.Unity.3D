#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3602;
struct t9;
struct t121;
#include "t3601.h"

extern "C" void m22141_gshared (t3602 * __this, t121 * p0, MethodInfo* method);
#define m22141(__this, p0, method) (( void (*) (t3602 *, t121 *, MethodInfo*))m22141_gshared)(__this, p0, method)
extern "C" t9 * m22142_gshared (t3602 * __this, MethodInfo* method);
#define m22142(__this, method) (( t9 * (*) (t3602 *, MethodInfo*))m22142_gshared)(__this, method)
extern "C" void m22143_gshared (t3602 * __this, MethodInfo* method);
#define m22143(__this, method) (( void (*) (t3602 *, MethodInfo*))m22143_gshared)(__this, method)
extern "C" bool m22144_gshared (t3602 * __this, MethodInfo* method);
#define m22144(__this, method) (( bool (*) (t3602 *, MethodInfo*))m22144_gshared)(__this, method)
extern "C" t3601  m22145_gshared (t3602 * __this, MethodInfo* method);
#define m22145(__this, method) (( t3601  (*) (t3602 *, MethodInfo*))m22145_gshared)(__this, method)
