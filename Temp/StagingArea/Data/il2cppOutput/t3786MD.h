#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3786;
struct t57;
struct t57_marshaled;
struct t828;
struct t158;

extern "C" void m23682_gshared (t3786 * __this, t57 * p0, t828 * p1, uint8_t p2, MethodInfo* method);
#define m23682(__this, p0, p1, p2, method) (( void (*) (t3786 *, t57 *, t828 *, uint8_t, MethodInfo*))m23682_gshared)(__this, p0, p1, p2, method)
extern "C" void m23684_gshared (t3786 * __this, t158* p0, MethodInfo* method);
#define m23684(__this, p0, method) (( void (*) (t3786 *, t158*, MethodInfo*))m23684_gshared)(__this, p0, method)
