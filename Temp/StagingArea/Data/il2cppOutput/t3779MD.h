#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3779;
struct t9;
struct t828;
struct t158;

extern "C" void m23654_gshared (t3779 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m23654(__this, p0, p1, method) (( void (*) (t3779 *, t9 *, t828 *, MethodInfo*))m23654_gshared)(__this, p0, p1, method)
extern "C" void m23655_gshared (t3779 * __this, t158* p0, MethodInfo* method);
#define m23655(__this, p0, method) (( void (*) (t3779 *, t158*, MethodInfo*))m23655_gshared)(__this, p0, method)
extern "C" bool m23656_gshared (t3779 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m23656(__this, p0, p1, method) (( bool (*) (t3779 *, t9 *, t828 *, MethodInfo*))m23656_gshared)(__this, p0, p1, method)
