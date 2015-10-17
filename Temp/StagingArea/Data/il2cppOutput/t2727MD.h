#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2727;
struct t9;

extern "C" void m13141_gshared (t2727 * __this, MethodInfo* method);
#define m13141(__this, method) (( void (*) (t2727 *, MethodInfo*))m13141_gshared)(__this, method)
extern "C" int32_t m13142_gshared (t2727 * __this, t9 * p0, MethodInfo* method);
#define m13142(__this, p0, method) (( int32_t (*) (t2727 *, t9 *, MethodInfo*))m13142_gshared)(__this, p0, method)
extern "C" bool m13143_gshared (t2727 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13143(__this, p0, p1, method) (( bool (*) (t2727 *, t9 *, t9 *, MethodInfo*))m13143_gshared)(__this, p0, p1, method)
