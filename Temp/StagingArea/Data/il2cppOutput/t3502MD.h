#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3502;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t601.h"

extern "C" void m21051_gshared (t3502 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21051(__this, p0, p1, method) (( void (*) (t3502 *, t9 *, t58, MethodInfo*))m21051_gshared)(__this, p0, p1, method)
extern "C" bool m21052_gshared (t3502 * __this, t601  p0, MethodInfo* method);
#define m21052(__this, p0, method) (( bool (*) (t3502 *, t601 , MethodInfo*))m21052_gshared)(__this, p0, method)
extern "C" t9 * m21053_gshared (t3502 * __this, t601  p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m21053(__this, p0, p1, p2, method) (( t9 * (*) (t3502 *, t601 , t477 *, t9 *, MethodInfo*))m21053_gshared)(__this, p0, p1, p2, method)
extern "C" bool m21054_gshared (t3502 * __this, t9 * p0, MethodInfo* method);
#define m21054(__this, p0, method) (( bool (*) (t3502 *, t9 *, MethodInfo*))m21054_gshared)(__this, p0, method)
