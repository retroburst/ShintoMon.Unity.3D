#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3783;
struct t57;
struct t57_marshaled;
struct t828;
struct t9;
struct t158;

extern "C" void m23669_gshared (t3783 * __this, t57 * p0, t828 * p1, t9 * p2, MethodInfo* method);
#define m23669(__this, p0, p1, p2, method) (( void (*) (t3783 *, t57 *, t828 *, t9 *, MethodInfo*))m23669_gshared)(__this, p0, p1, p2, method)
extern "C" void m23670_gshared (t3783 * __this, t158* p0, MethodInfo* method);
#define m23670(__this, p0, method) (( void (*) (t3783 *, t158*, MethodInfo*))m23670_gshared)(__this, p0, method)
