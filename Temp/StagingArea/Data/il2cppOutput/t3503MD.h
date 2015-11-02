#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3503;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t601.h"

extern "C" void m21055_gshared (t3503 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21055(__this, p0, p1, method) (( void (*) (t3503 *, t9 *, t58, MethodInfo*))m21055_gshared)(__this, p0, p1, method)
extern "C" void m21056_gshared (t3503 * __this, t601  p0, MethodInfo* method);
#define m21056(__this, p0, method) (( void (*) (t3503 *, t601 , MethodInfo*))m21056_gshared)(__this, p0, method)
extern "C" t9 * m21057_gshared (t3503 * __this, t601  p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m21057(__this, p0, p1, p2, method) (( t9 * (*) (t3503 *, t601 , t477 *, t9 *, MethodInfo*))m21057_gshared)(__this, p0, p1, p2, method)
extern "C" void m21058_gshared (t3503 * __this, t9 * p0, MethodInfo* method);
#define m21058(__this, p0, method) (( void (*) (t3503 *, t9 *, MethodInfo*))m21058_gshared)(__this, p0, method)
