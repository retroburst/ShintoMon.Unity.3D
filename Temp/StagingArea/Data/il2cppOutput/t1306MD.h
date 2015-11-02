#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1306;
struct t1306_marshaled;
struct t9;
#include "t1306.h"

extern "C" void m5482 (t1306 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t1306  m5483 (t9 * __this , MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5484 (t1306 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5485 (t1306 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5486 (t1306 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5487 (t1306 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5488 (t1306 * __this, t1306  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5489 (t1306 * __this, t1306  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5490 (t1306 * __this, t1306  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5491 (t1306 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5492 (t1306 * __this, t1306  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5493 (t1306 * __this, t1306  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5494 (t1306 * __this, t9 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1306_marshal(const t1306& unmarshaled, t1306_marshaled& marshaled);
void t1306_marshal_back(const t1306_marshaled& marshaled, t1306& unmarshaled);
void t1306_marshal_cleanup(t1306_marshaled& marshaled);
