#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3098;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t354.h"

extern "C" void m16755_gshared (t3098 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m16755(__this, p0, p1, method) (( void (*) (t3098 *, t9 *, t58, MethodInfo*))m16755_gshared)(__this, p0, p1, method)
extern "C" bool m16756_gshared (t3098 * __this, t354  p0, MethodInfo* method);
#define m16756(__this, p0, method) (( bool (*) (t3098 *, t354 , MethodInfo*))m16756_gshared)(__this, p0, method)
extern "C" t9 * m16757_gshared (t3098 * __this, t354  p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m16757(__this, p0, p1, p2, method) (( t9 * (*) (t3098 *, t354 , t477 *, t9 *, MethodInfo*))m16757_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16758_gshared (t3098 * __this, t9 * p0, MethodInfo* method);
#define m16758(__this, p0, method) (( bool (*) (t3098 *, t9 *, MethodInfo*))m16758_gshared)(__this, p0, method)
