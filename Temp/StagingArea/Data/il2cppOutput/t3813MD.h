#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3813;
struct t828;
struct t2;
struct t9;
struct t863;

extern "C" void m23985_gshared (t3813 * __this, MethodInfo* method);
#define m23985(__this, method) (( void (*) (t3813 *, MethodInfo*))m23985_gshared)(__this, method)
extern "C" t828 * m23986_gshared (t3813 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m23986(__this, p0, p1, method) (( t828 * (*) (t3813 *, t2*, t9 *, MethodInfo*))m23986_gshared)(__this, p0, p1, method)
extern "C" t863 * m23987_gshared (t3813 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m23987(__this, p0, p1, method) (( t863 * (*) (t3813 *, t9 *, t828 *, MethodInfo*))m23987_gshared)(__this, p0, p1, method)
