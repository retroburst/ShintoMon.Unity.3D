#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t767;
struct t767_marshaled;
struct t2;

extern "C" t2* m3820 (t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3821 (t767 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t2* m3822 (t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3823 (t767 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t767_marshal(const t767& unmarshaled, t767_marshaled& marshaled);
void t767_marshal_back(const t767_marshaled& marshaled, t767& unmarshaled);
void t767_marshal_cleanup(t767_marshaled& marshaled);
