#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3841;
struct t9;
struct t121;
#include "t1245.h"

extern "C" void m24211_gshared (t3841 * __this, t121 * p0, MethodInfo* method);
#define m24211(__this, p0, method) (( void (*) (t3841 *, t121 *, MethodInfo*))m24211_gshared)(__this, p0, method)
extern "C" t9 * m24212_gshared (t3841 * __this, MethodInfo* method);
#define m24212(__this, method) (( t9 * (*) (t3841 *, MethodInfo*))m24212_gshared)(__this, method)
extern "C" void m24213_gshared (t3841 * __this, MethodInfo* method);
#define m24213(__this, method) (( void (*) (t3841 *, MethodInfo*))m24213_gshared)(__this, method)
extern "C" bool m24214_gshared (t3841 * __this, MethodInfo* method);
#define m24214(__this, method) (( bool (*) (t3841 *, MethodInfo*))m24214_gshared)(__this, method)
extern "C" t1245  m24215_gshared (t3841 * __this, MethodInfo* method);
#define m24215(__this, method) (( t1245  (*) (t3841 *, MethodInfo*))m24215_gshared)(__this, method)
