#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t760;
struct t760_marshaled;
struct t2;

extern "C" t2* m3795 (t760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3796 (t760 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t2* m3797 (t760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3798 (t760 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t760_marshal(const t760& unmarshaled, t760_marshaled& marshaled);
void t760_marshal_back(const t760_marshaled& marshaled, t760& unmarshaled);
void t760_marshal_cleanup(t760_marshaled& marshaled);
