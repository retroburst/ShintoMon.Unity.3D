#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3161;
struct t9;
struct t835;
struct t418;
struct t158;

extern "C" void m17443_gshared (t3161 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m17443(__this, p0, p1, method) (( void (*) (t3161 *, t9 *, t835 *, MethodInfo*))m17443_gshared)(__this, p0, p1, method)
extern "C" void m17444_gshared (t3161 * __this, t418 * p0, MethodInfo* method);
#define m17444(__this, p0, method) (( void (*) (t3161 *, t418 *, MethodInfo*))m17444_gshared)(__this, p0, method)
extern "C" void m17445_gshared (t3161 * __this, t158* p0, MethodInfo* method);
#define m17445(__this, p0, method) (( void (*) (t3161 *, t158*, MethodInfo*))m17445_gshared)(__this, p0, method)
extern "C" bool m17446_gshared (t3161 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m17446(__this, p0, p1, method) (( bool (*) (t3161 *, t9 *, t835 *, MethodInfo*))m17446_gshared)(__this, p0, p1, method)
