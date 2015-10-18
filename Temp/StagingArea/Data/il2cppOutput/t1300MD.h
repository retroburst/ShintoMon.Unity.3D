#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1300;
struct t1300_marshaled;
struct t9;
#include "t1300.h"

extern "C" void m5441 (t1300 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t1300  m5442 (t9 * __this , MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5443 (t1300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5444 (t1300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5445 (t1300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5446 (t1300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5447 (t1300 * __this, t1300  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5448 (t1300 * __this, t1300  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5449 (t1300 * __this, t1300  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5450 (t1300 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5451 (t1300 * __this, t1300  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5452 (t1300 * __this, t1300  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5453 (t1300 * __this, t9 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1300_marshal(const t1300& unmarshaled, t1300_marshaled& marshaled);
void t1300_marshal_back(const t1300_marshaled& marshaled, t1300& unmarshaled);
void t1300_marshal_cleanup(t1300_marshaled& marshaled);
