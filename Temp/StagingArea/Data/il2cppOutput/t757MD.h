#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t757;
struct t757_marshaled;
struct t2;

extern "C" bool m3783 (t757 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3784 (t757 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3785 (t757 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3786 (t757 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3787 (t757 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float m3788 (t757 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3789 (t757 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3790 (t757 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3791 (t757 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t757_marshal(const t757& unmarshaled, t757_marshaled& marshaled);
void t757_marshal_back(const t757_marshaled& marshaled, t757& unmarshaled);
void t757_marshal_cleanup(t757_marshaled& marshaled);
