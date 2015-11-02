#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t774;
struct t774_marshaled;
struct t2;

extern "C" t2* m3861 (t774 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3862 (t774 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t2* m3863 (t774 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3864 (t774 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t774_marshal(const t774& unmarshaled, t774_marshaled& marshaled);
void t774_marshal_back(const t774_marshaled& marshaled, t774& unmarshaled);
void t774_marshal_cleanup(t774_marshaled& marshaled);
