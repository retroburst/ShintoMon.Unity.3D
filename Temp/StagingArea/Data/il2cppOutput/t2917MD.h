#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2917;
struct t9;

extern "C" void m14930_gshared (t2917 * __this, MethodInfo* method);
#define m14930(__this, method) (( void (*) (t2917 *, MethodInfo*))m14930_gshared)(__this, method)
extern "C" void m14931_gshared (t9 * __this , MethodInfo* method);
#define m14931(__this , method) (( void (*) (t9 * , MethodInfo*))m14931_gshared)(__this , method)
extern "C" int32_t m14932_gshared (t2917 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m14932(__this, p0, p1, method) (( int32_t (*) (t2917 *, t9 *, t9 *, MethodInfo*))m14932_gshared)(__this, p0, p1, method)
extern "C" t2917 * m14933_gshared (t9 * __this , MethodInfo* method);
#define m14933(__this , method) (( t2917 * (*) (t9 * , MethodInfo*))m14933_gshared)(__this , method)
