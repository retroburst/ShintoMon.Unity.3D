#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2991;
struct t9;

extern "C" void m15667_gshared (t2991 * __this, MethodInfo* method);
#define m15667(__this, method) (( void (*) (t2991 *, MethodInfo*))m15667_gshared)(__this, method)
extern "C" void m15668_gshared (t9 * __this , MethodInfo* method);
#define m15668(__this , method) (( void (*) (t9 * , MethodInfo*))m15668_gshared)(__this , method)
extern "C" int32_t m15669_gshared (t2991 * __this, t9 * p0, MethodInfo* method);
#define m15669(__this, p0, method) (( int32_t (*) (t2991 *, t9 *, MethodInfo*))m15669_gshared)(__this, p0, method)
extern "C" bool m15670_gshared (t2991 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m15670(__this, p0, p1, method) (( bool (*) (t2991 *, t9 *, t9 *, MethodInfo*))m15670_gshared)(__this, p0, p1, method)
extern "C" t2991 * m15671_gshared (t9 * __this , MethodInfo* method);
#define m15671(__this , method) (( t2991 * (*) (t9 * , MethodInfo*))m15671_gshared)(__this , method)
