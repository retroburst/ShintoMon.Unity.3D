#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3507;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t593.h"

extern "C" void m21164_gshared (t3507 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21164(__this, p0, p1, method) (( void (*) (t3507 *, t9 *, t58, MethodInfo*))m21164_gshared)(__this, p0, p1, method)
extern "C" bool m21165_gshared (t3507 * __this, t593  p0, MethodInfo* method);
#define m21165(__this, p0, method) (( bool (*) (t3507 *, t593 , MethodInfo*))m21165_gshared)(__this, p0, method)
extern "C" t9 * m21166_gshared (t3507 * __this, t593  p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m21166(__this, p0, p1, p2, method) (( t9 * (*) (t3507 *, t593 , t470 *, t9 *, MethodInfo*))m21166_gshared)(__this, p0, p1, p2, method)
extern "C" bool m21167_gshared (t3507 * __this, t9 * p0, MethodInfo* method);
#define m21167(__this, p0, method) (( bool (*) (t3507 *, t9 *, MethodInfo*))m21167_gshared)(__this, p0, method)
