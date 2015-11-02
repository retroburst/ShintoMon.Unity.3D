#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3522;
struct t9;
struct t121;
#include "t3521.h"

extern "C" void m21331_gshared (t3522 * __this, t121 * p0, MethodInfo* method);
#define m21331(__this, p0, method) (( void (*) (t3522 *, t121 *, MethodInfo*))m21331_gshared)(__this, p0, method)
extern "C" t9 * m21332_gshared (t3522 * __this, MethodInfo* method);
#define m21332(__this, method) (( t9 * (*) (t3522 *, MethodInfo*))m21332_gshared)(__this, method)
extern "C" void m21333_gshared (t3522 * __this, MethodInfo* method);
#define m21333(__this, method) (( void (*) (t3522 *, MethodInfo*))m21333_gshared)(__this, method)
extern "C" bool m21334_gshared (t3522 * __this, MethodInfo* method);
#define m21334(__this, method) (( bool (*) (t3522 *, MethodInfo*))m21334_gshared)(__this, method)
extern "C" t3521  m21335_gshared (t3522 * __this, MethodInfo* method);
#define m21335(__this, method) (( t3521  (*) (t3522 *, MethodInfo*))m21335_gshared)(__this, method)
