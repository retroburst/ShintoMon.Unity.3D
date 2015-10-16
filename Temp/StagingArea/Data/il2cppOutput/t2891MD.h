#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2891;
struct t9;
struct t121;
#include "t2879.h"

extern "C" void m14719_gshared (t2891 * __this, t121 * p0, MethodInfo* method);
#define m14719(__this, p0, method) (( void (*) (t2891 *, t121 *, MethodInfo*))m14719_gshared)(__this, p0, method)
extern "C" t9 * m14720_gshared (t2891 * __this, MethodInfo* method);
#define m14720(__this, method) (( t9 * (*) (t2891 *, MethodInfo*))m14720_gshared)(__this, method)
extern "C" void m14721_gshared (t2891 * __this, MethodInfo* method);
#define m14721(__this, method) (( void (*) (t2891 *, MethodInfo*))m14721_gshared)(__this, method)
extern "C" bool m14722_gshared (t2891 * __this, MethodInfo* method);
#define m14722(__this, method) (( bool (*) (t2891 *, MethodInfo*))m14722_gshared)(__this, method)
extern "C" t2879  m14723_gshared (t2891 * __this, MethodInfo* method);
#define m14723(__this, method) (( t2879  (*) (t2891 *, MethodInfo*))m14723_gshared)(__this, method)
