#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t680;
struct t680_marshaled;
struct t2;
struct t126;

extern "C" void m3124 (t680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3125 (t9 * __this , t680 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t680 * m3126 (t9 * __this , t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t680 * m3127 (t9 * __this , t126 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t680 * m3128 (t9 * __this , t126 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t680_marshal(const t680& unmarshaled, t680_marshaled& marshaled);
void t680_marshal_back(const t680_marshaled& marshaled, t680& unmarshaled);
void t680_marshal_cleanup(t680_marshaled& marshaled);
