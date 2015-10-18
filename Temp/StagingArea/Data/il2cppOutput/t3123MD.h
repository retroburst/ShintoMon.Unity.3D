#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3123;
struct t3067;
struct t828;
struct t2;
struct t9;
struct t863;

extern "C" void m17034_gshared (t3123 * __this, MethodInfo* method);
#define m17034(__this, method) (( void (*) (t3123 *, MethodInfo*))m17034_gshared)(__this, method)
extern "C" void m17036_gshared (t3123 * __this, t3067 * p0, MethodInfo* method);
#define m17036(__this, p0, method) (( void (*) (t3123 *, t3067 *, MethodInfo*))m17036_gshared)(__this, p0, method)
extern "C" void m17038_gshared (t3123 * __this, t3067 * p0, MethodInfo* method);
#define m17038(__this, p0, method) (( void (*) (t3123 *, t3067 *, MethodInfo*))m17038_gshared)(__this, p0, method)
extern "C" t828 * m17039_gshared (t3123 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m17039(__this, p0, p1, method) (( t828 * (*) (t3123 *, t2*, t9 *, MethodInfo*))m17039_gshared)(__this, p0, p1, method)
extern "C" t863 * m17040_gshared (t3123 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m17040(__this, p0, p1, method) (( t863 * (*) (t3123 *, t9 *, t828 *, MethodInfo*))m17040_gshared)(__this, p0, p1, method)
extern "C" t863 * m17042_gshared (t9 * __this , t3067 * p0, MethodInfo* method);
#define m17042(__this , p0, method) (( t863 * (*) (t9 * , t3067 *, MethodInfo*))m17042_gshared)(__this , p0, method)
extern "C" void m17043_gshared (t3123 * __this, t9 * p0, MethodInfo* method);
#define m17043(__this, p0, method) (( void (*) (t3123 *, t9 *, MethodInfo*))m17043_gshared)(__this, p0, method)
