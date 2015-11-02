#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t71;
struct t71_marshaled;
struct t167;
#include "t166.h"

extern "C" void m546 (t71 * __this, t167* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3827 (t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3828 (t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3829 (t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float m551 (t71 * __this, float p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t166  m549 (t71 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m548 (t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t166  m3830 (t71 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3831 (t71 * __this, t167* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t71_marshal(const t71& unmarshaled, t71_marshaled& marshaled);
void t71_marshal_back(const t71_marshaled& marshaled, t71& unmarshaled);
void t71_marshal_cleanup(t71_marshaled& marshaled);
