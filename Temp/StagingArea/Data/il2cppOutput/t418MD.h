#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t418;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t43.h"

extern "C" void m2671_gshared (t418 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2671(__this, p0, p1, method) (( void (*) (t418 *, t9 *, t58, MethodInfo*))m2671_gshared)(__this, p0, p1, method)
extern "C" void m17440_gshared (t418 * __this, t43  p0, MethodInfo* method);
#define m17440(__this, p0, method) (( void (*) (t418 *, t43 , MethodInfo*))m17440_gshared)(__this, p0, method)
extern "C" t9 * m17441_gshared (t418 * __this, t43  p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m17441(__this, p0, p1, p2, method) (( t9 * (*) (t418 *, t43 , t477 *, t9 *, MethodInfo*))m17441_gshared)(__this, p0, p1, p2, method)
extern "C" void m17442_gshared (t418 * __this, t9 * p0, MethodInfo* method);
#define m17442(__this, p0, method) (( void (*) (t418 *, t9 *, MethodInfo*))m17442_gshared)(__this, p0, method)
