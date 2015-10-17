#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3156;
struct t9;
struct t828;
struct t411;
struct t158;

extern "C" void m17408_gshared (t3156 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m17408(__this, p0, p1, method) (( void (*) (t3156 *, t9 *, t828 *, MethodInfo*))m17408_gshared)(__this, p0, p1, method)
extern "C" void m17409_gshared (t3156 * __this, t411 * p0, MethodInfo* method);
#define m17409(__this, p0, method) (( void (*) (t3156 *, t411 *, MethodInfo*))m17409_gshared)(__this, p0, method)
extern "C" void m17410_gshared (t3156 * __this, t158* p0, MethodInfo* method);
#define m17410(__this, p0, method) (( void (*) (t3156 *, t158*, MethodInfo*))m17410_gshared)(__this, p0, method)
extern "C" bool m17411_gshared (t3156 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m17411(__this, p0, p1, method) (( bool (*) (t3156 *, t9 *, t828 *, MethodInfo*))m17411_gshared)(__this, p0, p1, method)
