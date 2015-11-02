#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2844;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t154.h"

extern "C" void m14183_gshared (t2844 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14183(__this, p0, p1, method) (( void (*) (t2844 *, t9 *, t58, MethodInfo*))m14183_gshared)(__this, p0, p1, method)
extern "C" t154  m14185_gshared (t2844 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m14185(__this, p0, p1, method) (( t154  (*) (t2844 *, t9 *, t9 *, MethodInfo*))m14185_gshared)(__this, p0, p1, method)
extern "C" t9 * m14187_gshared (t2844 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m14187(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2844 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m14187_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t154  m14189_gshared (t2844 * __this, t9 * p0, MethodInfo* method);
#define m14189(__this, p0, method) (( t154  (*) (t2844 *, t9 *, MethodInfo*))m14189_gshared)(__this, p0, method)
