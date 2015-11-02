#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t694;
struct t694_marshaled;
struct t2;
struct t126;

extern "C" void m3188 (t694 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3189 (t9 * __this , t694 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t694 * m3190 (t9 * __this , t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t694 * m3191 (t9 * __this , t126 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t694 * m3192 (t9 * __this , t126 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t694_marshal(const t694& unmarshaled, t694_marshaled& marshaled);
void t694_marshal_back(const t694_marshaled& marshaled, t694& unmarshaled);
void t694_marshal_cleanup(t694_marshaled& marshaled);
