#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1291;
struct t1291_marshaled;
struct t9;
#include "t1291.h"

extern "C" void m5412 (t1291 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t1291  m5413 (t9 * __this , MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5414 (t1291 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5415 (t1291 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5416 (t1291 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5417 (t1291 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5418 (t1291 * __this, t1291  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5419 (t1291 * __this, t1291  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5420 (t1291 * __this, t1291  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5421 (t1291 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5422 (t1291 * __this, t1291  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5423 (t1291 * __this, t1291  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5424 (t1291 * __this, t9 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1291_marshal(const t1291& unmarshaled, t1291_marshaled& marshaled);
void t1291_marshal_back(const t1291_marshaled& marshaled, t1291& unmarshaled);
void t1291_marshal_cleanup(t1291_marshaled& marshaled);
